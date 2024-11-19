// Generated using https://github.com/a2x/cs2-dumper
// 2024-11-18 05:20:50.169129600 UTC

// 基于a2x的cs2_dumper进行了修改,更新了Deadlock的偏移定位. by Lsades
#pragma once

#include <cstddef>

namespace DL_dumper {
    namespace schemas {
        // Module: steamaudio.dll
        // Class count: 10
        // Enum count: 0
        namespace steamaudio_dll {
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SteamAudioReverbClusteringSettings_t {
                constexpr std::ptrdiff_t m_bEnableClustering = 0x0; // bool
                constexpr std::ptrdiff_t m_nCubeMapResolution = 0x4; // int32
                constexpr std::ptrdiff_t m_flDepthThreshold = 0x8; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SteamAudioPathSettings_t {
                constexpr std::ptrdiff_t m_nNumVisSamples = 0x0; // int32
                constexpr std::ptrdiff_t m_flProbeVisRadius = 0x4; // float32
                constexpr std::ptrdiff_t m_flProbeVisThreshold = 0x8; // float32
                constexpr std::ptrdiff_t m_flProbePathRange = 0xC; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSteamAudioBakedPathingData {
                constexpr std::ptrdiff_t m_probes = 0x0; // CSteamAudioProbeData
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SteamAudioReverbSettings_t {
                constexpr std::ptrdiff_t m_nNumRays = 0x0; // int32
                constexpr std::ptrdiff_t m_nNumBounces = 0x4; // int32
                constexpr std::ptrdiff_t m_flIRDuration = 0x8; // float32
                constexpr std::ptrdiff_t m_nAmbisonicsOrder = 0xC; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSteamAudioProbeData {
                constexpr std::ptrdiff_t m_pProbeBatch = 0x0; // IPLProbeBatch
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SteamAudioReverbCompressionSettings_t {
                constexpr std::ptrdiff_t m_bEnableCompression = 0x0; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSteamAudioBakedMaterialsData {
                constexpr std::ptrdiff_t m_probes = 0x0; // CSteamAudioProbeData
                constexpr std::ptrdiff_t m_vecMaterialTokens = 0x8; // CUtlVector<uint32>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSteamAudioBakedOcclusionData {
                constexpr std::ptrdiff_t m_probes = 0x0; // CSteamAudioProbeData
                constexpr std::ptrdiff_t m_vecOcclusion = 0x8; // CUtlVector<float32>
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSteamAudioBakedReverbData {
                constexpr std::ptrdiff_t m_probes = 0x0; // CSteamAudioProbeData
                constexpr std::ptrdiff_t m_reverbSettings = 0x8; // SteamAudioReverbSettings_t
                constexpr std::ptrdiff_t m_reverbClusteringSettings = 0x18; // SteamAudioReverbClusteringSettings_t
                constexpr std::ptrdiff_t m_reverbCompressionSettings = 0x24; // SteamAudioReverbCompressionSettings_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSteamAudioBakedDimensionsData {
                constexpr std::ptrdiff_t m_probes = 0x0; // CSteamAudioProbeData
                constexpr std::ptrdiff_t m_vecInOut = 0x8; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_vecSize = 0x20; // CUtlVector<float32>
            }
        }
    }
}
