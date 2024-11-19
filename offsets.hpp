// Generated using https://github.com/a2x/cs2-dumper
// 2024-11-18 05:20:50.169129600 UTC

// 基于a2x的cs2_dumper进行了修改,更新了Deadlock的偏移定位. by Lsades
#pragma once

#include <cstddef>

namespace DL_dumper {
    namespace offsets {
        // Module: client.dll
        namespace client_dll {
            constexpr std::ptrdiff_t dwCCameraManager = 0x20B6620;
            constexpr std::ptrdiff_t dwEntityList = 0x2092E40;
            constexpr std::ptrdiff_t dwGameEntitySystem = 0x22CCC28;
            constexpr std::ptrdiff_t dwGameTraceManage = 0x1F05C70;
            constexpr std::ptrdiff_t dwLocalPlayerController = 0x2265340;
            constexpr std::ptrdiff_t dwViewMatrix = 0x2276440;
            constexpr std::ptrdiff_t dwViewRender = 0x2276D60;
        }
    }
}
