//////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 2004-2023 musikcube team
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
//    * Redistributions of source code must retain the above copyright notice,
//      this list of conditions and the following disclaimer.
//
//    * Redistributions in binary form must reproduce the above copyright
//      notice, this list of conditions and the following disclaimer in the
//      documentation and/or other materials provided with the distribution.
//
//    * Neither the name of the author nor the names of other contributors may
//      be used to endorse or promote products derived from this software
//      without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.
//
//////////////////////////////////////////////////////////////////////////////

#pragma once

#include <string>

#define MUSIKCUBE_VERSION_MAJOR 3
#define MUSIKCUBE_VERSION_MINOR 0
#define MUSIKCUBE_VERSION_PATCH 1
#define MUSIKCUBE_VERSION "3.0.1"
#define MUSIKCUBE_VERSION_COMMIT_HASH "#d2f83f75"
#define MUSIKCUBE_VERSION_WITH_COMMIT_HASH "3.0.1-#d2f83f75"

namespace musik {
    namespace cube {
        static inline std::string userAgent() {
#ifdef _WIN64
            static const std::string PLATFORM = "win64";
#elif WIN32
            static const std::string PLATFORM = "win32";
#elif defined __APPLE__
            static const std::string PLATFORM = "macos";
#elif defined __FreeBSD__
            static const std::string PLATFORM = "freebsd";
#elif defined __OpenBSD__
            static const std::string PLATFORM = "openbsd";
#else
            static const std::string PLATFORM = "linux";
#endif
            return
                "musikcube " +
                std::to_string(MUSIKCUBE_VERSION_MAJOR) + "." +
                std::to_string(MUSIKCUBE_VERSION_MINOR) + "." +
                std::to_string(MUSIKCUBE_VERSION_PATCH) +
                "(" + PLATFORM + ")";
        }
    }
}
