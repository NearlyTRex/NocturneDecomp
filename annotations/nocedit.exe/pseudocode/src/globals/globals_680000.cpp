#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x680000
// =============================================================================

SHuffmanTableSource g_HuffmanTableSources[34] = {
    {0x00000000, 0x00000000, 0x00000000, 0x00000000, -1, nullptr},
    {0x00000007, 0x00000002, 0x00000002, 0x00000000, -1, (char *)0x0067EB60},
    {0x00000011, 0x00000003, 0x00000003, 0x00000000, -1, (char *)0x0067EB70},
    {0x00000011, 0x00000003, 0x00000003, 0x00000000, -1, (char *)0x0067EB98},
    {0x00000000, 0x00000000, 0x00000000, 0x00000000, -1, nullptr},
    {0x0000001F, 0x00000004, 0x00000004, 0x00000000, -1, (char *)0x0067EBC0},
    {0x0000001F, 0x00000004, 0x00000004, 0x00000000, -1, (char *)0x0067EC00},
    {0x00000047, 0x00000006, 0x00000006, 0x00000000, -1, (char *)0x0067EC40},
    {0x00000047, 0x00000006, 0x00000006, 0x00000000, -1, (char *)0x0067ECD0},
    {0x00000047, 0x00000006, 0x00000006, 0x00000000, -1, (char *)0x0067ED60},
    {0x0000007F, 0x00000008, 0x00000008, 0x00000000, -1, (char *)0x0067EDF0},
    {0x0000007F, 0x00000008, 0x00000008, 0x00000000, -1, (char *)0x0067EEF0},
    {0x0000007F, 0x00000008, 0x00000008, 0x00000000, -1, (char *)0x0067EFF0},
    {0x000001FF, 0x00000010, 0x00000010, 0x00000000, -1, (char *)0x0067F0F0},
    {0x00000000, 0x00000000, 0x00000000, 0x00000000, -1, nullptr},
    {0x000001FF, 0x00000010, 0x00000010, 0x00000000, -1, (char *)0x0067F4F0},
    {0x000001FF, 0x00000010, 0x00000010, 0x00000001, -1, (char *)0x0067F8F0},
    {0x000001FF, 0x00000010, 0x00000010, 0x00000002, 0x00000010, nullptr},
    {0x000001FF, 0x00000010, 0x00000010, 0x00000003, 0x00000010, nullptr},
    {0x000001FF, 0x00000010, 0x00000010, 0x00000004, 0x00000010, nullptr},
    {0x000001FF, 0x00000010, 0x00000010, 0x00000006, 0x00000010, nullptr},
    {0x000001FF, 0x00000010, 0x00000010, 0x00000008, 0x00000010, nullptr},
    {0x000001FF, 0x00000010, 0x00000010, 0x0000000A, 0x00000010, nullptr},
    {0x000001FF, 0x00000010, 0x00000010, 0x0000000D, 0x00000010, nullptr},
    {0x00000200, 0x00000010, 0x00000010, 0x00000004, -1, (char *)0x0067FCF0},
    {0x00000200, 0x00000010, 0x00000010, 0x00000005, 0x00000018, nullptr},
    {0x00000200, 0x00000010, 0x00000010, 0x00000006, 0x00000018, nullptr},
    {0x00000200, 0x00000010, 0x00000010, 0x00000007, 0x00000018, nullptr},
    {0x00000200, 0x00000010, 0x00000010, 0x00000008, 0x00000018, nullptr},
    {0x00000200, 0x00000010, 0x00000010, 0x00000009, 0x00000018, nullptr},
    {0x00000200, 0x00000010, 0x00000010, 0x0000000B, 0x00000018, nullptr},
    {0x00000200, 0x00000010, 0x00000010, 0x0000000D, 0x00000018, nullptr},
    {0x0000001F, 0x00000001, 0x00000010, 0x00000000, -1, (char *)0x006800F0},
    {0x0000001F, 0x00000001, 0x00000010, 0x00000000, -1, (char *)0x00680130}
};
WatcomStaticDestructorNode g_CEdCheckDestructorNode = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_00661c10, 0x00000001, (void *)&g_CEdCheckInstance};
WatcomStaticDestructorNode DAT_0068064c = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_00661c1c, 0x00000001, (void *)0x02F797E4};
undefined4 g_DynamicRenderMode = 0x00000001;
int g_ConfirmNewActorNames = 0x1;
WatcomStaticDestructorNode DAT_006809f0 = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_00661c70, 0x00000001, (void *)0x02F7C740};
CNetGame* g_CNetGameInstance = (CNetGame*)0x02F7C740; // DAT_02f7c740
WatcomStaticDestructorNode g_CMouseDestructorNode = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_00661d20, 0x00000001, (void *)&g_CMouseInstance};
undefined4 g_CNPCClassVersion = 0x00000004;
undefined4 g_CPassengerClassVersion = 0x00000006;
SMRGLTextureBasic DAT_00680bb0 = {{0x0000000D, 0x00000000}, "HEADLITE.RAW"};
WatcomStaticDestructorNode DAT_00680bc8 = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_006620e0, 0x00000001, (void *)0x02FD9060};
int g_PathfindingDeltaX[9] = {
    0x00000000, 0x00000000, 0x00000000, 0x00000001, -1, 0x00000001, -1, 0x00000001,
    -1
};
int g_PathfindingDeltaZ[9] = {
    0x00000000, 0x00000001, -1, 0x00000000, 0x00000000, 0x00000001, 0x00000001, -1,
    -1
};
int g_CPendulumClassVersion = 0x8;
undefined4 g_CPlatformClassVersion = 0x0000000B;
WatcomStaticDestructorNode g_CDemonPodMainDestructorNode = {nullptr, (WatcomDestructorCall *)&g_CDemonPodDestructorNode, 0x00000001, (void *)&g_CDemonPodInstance};
CDemonPod* g_CDemonPodPtr = (CDemonPod*)&g_CDemonPodInstance;
int g_MaxViewportScanline = 0x4b0;
int g_CScatClassVersion = 0x1;
WatcomStaticDestructorNode DAT_00680d10 = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_006625f0, 0x00000001, (void *)0x0310F4B0};
WatcomStaticDestructorNode DAT_00680d20 = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_006625fc, 0x00000001, (void *)&g_CScriptInstance};
WatcomStaticDestructorNode DAT_00680d30 = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_00662608, 0x00000001, (void *)0x0310FCD8};
WatcomStaticDestructorNode DAT_00680d40 = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_00662614, 0x00000001, (void *)0x0310FD0C};
CScript* g_CScriptPtr = (CScript*)&g_CScriptInstance;
int g_CSentinelClassVersion = 0x2;
WatcomStaticDestructorNode g_CDemonSetDestructorNode = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_00662820, 0x00000001, (void *)&g_CDemonSetInstance};
WatcomStaticDestructorNode g_CDemonCameraDestructorNode = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_0066282c, 0x00000001, (void *)&g_CDemonCameraInstance};
WatcomStaticDestructorNode g_CDemonRaytraceDestructorNode = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_00662838, 0x00000001, (void *)&g_CDemonRaytraceInstance};
WatcomStaticDestructorNode g_CKeyFramedModelDestructorNode = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_00662844, 0x00000001, (void *)&g_CKeyFramedModelInstance};
CDemonSet* g_CDemonSetPtr = (CDemonSet*)&g_CDemonSetInstance;
CVector3i g_GlobalLightDirection = {0x00000000, -46333, 0x0000B4FD};
int g_RenderMirrorsFlag = 0x1;
SMRGLTextureBasic DAT_006813e4 = {{0x0000000D, 0x00000000}, "BACKGND.RAW"};
WatcomStaticDestructorNode g_CZThumbPoolDestructorNode = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_006629b0, 0x00000001, (void *)&g_CZThumbPool};
SMRGLPrimitiveQuad g_BoundingBoxQuadTemplates[6] = {
    {{{0x00000000, 0x00000004}, {-1, 0x00000000, 0x00000000, 0x00000000}}, {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}},
    {{{0x00000000, 0x00000004}, {0x00000001, 0x00000000, 0x00000000, 0x00000000}}, {0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}},
    {{{0x00000000, 0x00000004}, {0x00000000, -1, 0x00000000, 0x00000000}}, {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}},
    {{{0x00000000, 0x00000004}, {0x00000000, 0x00000001, 0x00000000, 0x00000000}}, {0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}},
    {{{0x00000000, 0x00000004}, {0x00000000, 0x00000000, -1, 0x00000000}}, {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}},
    {{{0x00000000, 0x00000004}, {0x00000000, 0x00000000, 0x00000001, 0x00000000}}, {0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}}
};
SMRGLPrimitiveQuad* g_BoundingBoxQuadTemplateEnd = nullptr;
WatcomStaticDestructorNode DAT_006816a0 = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_00662a10, 0x00000001, (void *)&CPickList_03653fc0};
WatcomStaticDestructorNode DAT_006816b0 = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_00662a1c, 0x00000001, (void *)0x03364CE0};
SMRGLTextureBasic DAT_006816c0 = {{0x00000000, 0x00000000}, "bbwhite.raw"};
SMRGLTextureBasic SMRGLTextureBasic_006817fc = {{0x0000000D, 0x00000000}, "HEADLITE.RAW"};
int g_CShotgunClassVersion = 0x1;
int g_CShovelClassVersion = 0x1;
int g_CSimBoxClassVersion = 0x3;
WatcomStaticDestructorNode DAT_00681850 = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_00662e30, 0x00000001, (void *)0x03665F74};
undefined4 g_CSkeletonVersion = 0x00000003;
SMRGLTextureBasic DAT_006819e4 = {{0x0000000D, 0x00000000}, "MENUCLD2.RAW"};
WatcomStaticDestructorNode g_DeformableModelPoolDestructorNode = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_00662e80, 0x00000001, (void *)&g_DeformableModelPool};
WatcomStaticDestructorNode g_SkeletonPoolDestructorNode = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_00662e8c, 0x00000001, (void *)&g_SkeletonPool};
int g_CSmileyClassVersion = 0x1;
WatcomStaticDestructorNode g_SfxSamplesDestructorNode = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_00663110, 0x00000001, (void *)&g_SfxSamples};
WatcomStaticDestructorNode g_CMP3DecoderDestructorNode = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_0066311c, 0x00000001, (void *)&g_CMP3DecoderInstance};
int g_SfxPlaybackStateCounter = 0x1;
WatcomStaticDestructorNode g_CMP3DecoderDestructorNode = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_00663128, 0x00000001, (void *)&g_CMP3DecoderInstance};
int g_MaxSoundChannels = 0x20;
int g_AudioBitsPerSample = 0x10;
int g_AudioChannelCount = 0x2;
int g_AudioSampleRate = 0x5622;
int g_SoundDeviceCount = 0x2D;
int g_CurrentSoundDevice = 0x2D;
int g_HardwareMixingEnabled = 0x1;
int g_MinimumSoundMemoryBudget = 0x200000;
int g_MaximumSoundMemoryBudget = 0x400000;
int g_RecordingDeviceCount = 0x2D;
int g_CurrentRecordingDevice = 0x2D;
int g_RecordingBitsPerSample = 0x8;
int g_RecordingChannelCount = 0x1;
int g_RecordingSampleRate = 0x2b11;
GUID g_IID_IKsPropertySet = {0} /* raw: 0x30, 0xAC, 0xEF, 0x31, 0x5C, 0x51, 0xD0, 0x11, 0xA9, 0xAA, 0x00, 0xAA, 0x00, 0x61, 0xBE, 0x93 */;
GUID g_KSPROPSETID_DirectSound3DListener = {0} /* raw: 0xAE, 0x9B, 0xA6, 0x62, 0x9D, 0xDF, 0xD1, 0x11, 0x99, 0xA6, 0x00, 0xC0, 0x4F, 0xC9, 0x9D, 0x46 */;
GUID DAT_00681df0 = {0} /* raw: 0xC1, 0x6F, 0x4E, 0x4A, 0x41, 0xC3, 0xD1, 0x11, 0xB7, 0x3A, 0x44, 0x45, 0x53, 0x54, 0x00, 0x00 */;
int g_DirectSoundDeviceCount = 0x2D;
UINT g_WaveOutDeviceID = 0xffffffff;
UINT g_WaveInDeviceID = 0xffffffff;
SAudioFormatDescriptor g_WaveInFormatTable[12] = {
    {0x00000001, 0x00000008, 0x00000001, 0x00002B11},
    {0x00000004, 0x00000010, 0x00000001, 0x00002B11},
    {0x00000002, 0x00000008, 0x00000002, 0x00002B11},
    {0x00000008, 0x00000010, 0x00000002, 0x00002B11},
    {0x00000010, 0x00000008, 0x00000001, 0x00005622},
    {0x00000040, 0x00000010, 0x00000001, 0x00005622},
    {0x00000020, 0x00000008, 0x00000002, 0x00005622},
    {0x00000080, 0x00000010, 0x00000002, 0x00005622},
    {0x00000100, 0x00000008, 0x00000001, 0x0000AC44},
    {0x00000400, 0x00000010, 0x00000001, 0x0000AC44},
    {0x00000200, 0x00000008, 0x00000002, 0x0000AC44},
    {0x00000800, 0x00000010, 0x00000002, 0x0000AC44}
};
WatcomStaticDestructorNode DAT_00681ed0 = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_006632e0, 0x00000001, (void *)&g_SoundFileList};
WatcomStaticDestructorNode g_MissingSoundsListDestructorNode = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_006632ec, 0x00000001, (void *)&g_MissingSoundsList};
char* g_CurrentTrainMode = (char*)s_int_00652706;
char* g_PreviousTrainMode = (char*)s_x_0065270a;
CSound* g_CSoundPtr = (CSound*)&g_CSoundInstance;
SSoundModeEntry g_SoundModeTable[27] = {
    {(char *)s_OFF_00652855, {0x00000000, 0x00000000, 0x00000000}},
    {(char *)s_GENERIC_00652859, {0x3F000000, 0x3FBF1AA0, 0x3F000000}},
    {(char *)s_PADDEDCELL_00652861, {0x3E800000, 0x3DCCCCCD, 0x00000000}},
    {(char *)s_ROOM_0065286c, {0x3ED58106, 0x3ECCCCCD, 0x3F2A7EFA}},
    {(char *)s_BATHROOM_00652871, {0x3F272B02, 0x3FBFDF3B, 0x3E29FBE7}},
    {(char *)s_LIVINGROOM_0065287a, {0x3E54FDF4, 0x3EF4BC6A, 0x00000000}},
    {(char *)s_STONEROOM_00652885, {0x3F000000, 0x4013C6A8, 0x3F6353F8}},
    {(char *)s_AUDITORIUM_0065288f, {0x3ECE5604, 0x4088ED91, 0x3F000000}},
    {(char *)s_CONCERTHALL_0065289a, {0x3F000000, 0x407D8106, 0x3F000000}},
    {(char *)s_CAVE_006528a6, {0x3F000000, 0x4038B439, 0x3FA6E979}},
    {(char *)s_ARENA_006528ab, {0x3EB8D4FE, 0x40E91687, 0x3EA9FBE7}},
    {(char *)s_HANGAR_006528b1, {0x3F000000, 0x41200000, 0x3E99999A}},
    {(char *)s_CARPETEDHALLWAY_006528b8, {0x3E1CAC08, 0x3E849BA6, 0x40000000}},
    {(char *)s_HALLWAY_006528c8, {0x3EB8D4FE, 0x3FBF1AA0, 0x00000000}},
    {(char *)s_STONECORRIDOR_006528d0, {0x3EE353F8, 0x402C9BA6, 0x3F2353F8}},
    {(char *)s_ALLEY_006528de, {0x3E800000, 0x3FE04189, 0x3F46A7F0}},
    {(char *)s_FOREST_006528e4, {0x3DE353F8, 0x404947AE, 0x3EF1A9FC}},
    {(char *)s_CITY_006528eb, {0x3DE353F8, 0x40311687, 0x3E656042}},
    {(char *)s_MOUNTAINS_006528f0, {0x3E46A7F0, 0x40FAE979, 0x3EF1A9FC}},
    {(char *)s_QUARRY_006528fa, {0x3F800000, 0x3FBFDF3B, 0x3F000000}},
    {(char *)s_PLAIN_00652901, {0x3DC6A7F0, 0x40311687, 0x3E656042}},
    {(char *)s_PARKINGLOT_00652907, {0x3E54FDF4, 0x3FD374BC, 0x3FC00000}},
    {(char *)s_SEWERPIPE_00652912, {0x3F26E979, 0x4038B439, 0x3E800000}},
    {(char *)s_UNDERWATER_0065291c, {0x3F800000, 0x3FBFDF3B, 0x00000000}},
    {(char *)s_DRUGGED_00652927, {0x3F600000, 0x410645A2, 0x3FB1A9FC}},
    {(char *)s_DIZZY_0065292f, {0x3E0E5604, 0x4189DF3B, 0x3F2A7EFA}},
    {(char *)s_PSYCHOTIC_00652935, {0x3EF8D4FE, 0x40F20419, 0x3F4E5604}}
};
int g_ScanlinePixelCount = 0x0;
int g_StartTextureU = 0x0;
int g_StartTextureV = 0x0;
int g_StartDepthW = 0x0;
int* g_CurrentScreenPtr = nullptr;
int* g_CurrentZBufferPtr = nullptr;
int g_DeltaTextureU = 0x0;
int g_DeltaTextureV = 0x0;
int g_DeltaDepthW = 0x0;
int g_SavedRegisterEAX = 0x0;
int g_SavedRegisterEBX = 0x0;
int g_SavedRegisterECX = 0x0;
int g_SavedRegisterEDX = 0x0;
int g_TempX = 0x0;
int g_TempY = 0x0;
int g_TempZ = 0x0;
int g_TempTransformedX = 0x0;
int g_TempTransformedY = 0x0;
int g_TempTransformedZ = 0x0;
int g_VertexRedStart = 0x0;
int g_VertexGreenStart = 0x0;
int g_VertexBlueStart = 0x0;
int g_VertexRedDelta = 0x0;
int g_VertexGreenDelta = 0x0;
int g_VertexBlueDelta = 0x0;
int g_VertexAlphaStart = 0x0;
int g_VertexAlphaDelta = 0x0;
ulonglong g_TextureShift1 = 0x10;
ulonglong g_TextureShift2 = 0x8;
ulonglong g_TextureMask1 = 0xff;
ulonglong g_TextureMask2 = 0xff00;
uint g_RedMask16 = 0xf800;
uint g_GreenMask16 = 0x7e0;
uint g_BlueMask16 = 0x1f;
ulonglong g_RedMask32 = 0xf80000;
ulonglong g_GreenMask32 = 0xfc00;
ulonglong g_BlueMask32 = 0xf8;
ulonglong g_TotalColorBits = 0x8;
ulonglong g_GreenBlueBits = 0x5;
ulonglong g_BlueBitShift = 0x3;
int g_SpecialColor = 0xffffff;
SAlphaEntry g_AlphaTable[256] = {
    {0x0000, 0x0000, 0x0000, 0x0000},
    {0x0001, 0x0001, 0x0001, 0x0000},
    {0x0002, 0x0002, 0x0002, 0x0000},
    {0x0003, 0x0003, 0x0003, 0x0000},
    {0x0004, 0x0004, 0x0004, 0x0000},
    {0x0005, 0x0005, 0x0005, 0x0000},
    {0x0006, 0x0006, 0x0006, 0x0000},
    {0x0007, 0x0007, 0x0007, 0x0000},
    {0x0008, 0x0008, 0x0008, 0x0000},
    {0x0009, 0x0009, 0x0009, 0x0000},
    {0x000A, 0x000A, 0x000A, 0x0000},
    {0x000B, 0x000B, 0x000B, 0x0000},
    {0x000C, 0x000C, 0x000C, 0x0000},
    {0x000D, 0x000D, 0x000D, 0x0000},
    {0x000E, 0x000E, 0x000E, 0x0000},
    {0x000F, 0x000F, 0x000F, 0x0000},
    {0x0010, 0x0010, 0x0010, 0x0000},
    {0x0011, 0x0011, 0x0011, 0x0000},
    {0x0012, 0x0012, 0x0012, 0x0000},
    {0x0013, 0x0013, 0x0013, 0x0000},
    {0x0014, 0x0014, 0x0014, 0x0000},
    {0x0015, 0x0015, 0x0015, 0x0000},
    {0x0016, 0x0016, 0x0016, 0x0000},
    {0x0017, 0x0017, 0x0017, 0x0000},
    {0x0018, 0x0018, 0x0018, 0x0000},
    {0x0019, 0x0019, 0x0019, 0x0000},
    {0x001A, 0x001A, 0x001A, 0x0000},
    {0x001B, 0x001B, 0x001B, 0x0000},
    {0x001C, 0x001C, 0x001C, 0x0000},
    {0x001D, 0x001D, 0x001D, 0x0000},
    {0x001E, 0x001E, 0x001E, 0x0000},
    {0x001F, 0x001F, 0x001F, 0x0000},
    {0x0020, 0x0020, 0x0020, 0x0000},
    {0x0021, 0x0021, 0x0021, 0x0000},
    {0x0022, 0x0022, 0x0022, 0x0000},
    {0x0023, 0x0023, 0x0023, 0x0000},
    {0x0024, 0x0024, 0x0024, 0x0000},
    {0x0025, 0x0025, 0x0025, 0x0000},
    {0x0026, 0x0026, 0x0026, 0x0000},
    {0x0027, 0x0027, 0x0027, 0x0000},
    {0x0028, 0x0028, 0x0028, 0x0000},
    {0x0029, 0x0029, 0x0029, 0x0000},
    {0x002A, 0x002A, 0x002A, 0x0000},
    {0x002B, 0x002B, 0x002B, 0x0000},
    {0x002C, 0x002C, 0x002C, 0x0000},
    {0x002D, 0x002D, 0x002D, 0x0000},
    {0x002E, 0x002E, 0x002E, 0x0000},
    {0x002F, 0x002F, 0x002F, 0x0000},
    {0x0030, 0x0030, 0x0030, 0x0000},
    {0x0031, 0x0031, 0x0031, 0x0000},
    {0x0032, 0x0032, 0x0032, 0x0000},
    {0x0033, 0x0033, 0x0033, 0x0000},
    {0x0034, 0x0034, 0x0034, 0x0000},
    {0x0035, 0x0035, 0x0035, 0x0000},
    {0x0036, 0x0036, 0x0036, 0x0000},
    {0x0037, 0x0037, 0x0037, 0x0000},
    {0x0038, 0x0038, 0x0038, 0x0000},
    {0x0039, 0x0039, 0x0039, 0x0000},
    {0x003A, 0x003A, 0x003A, 0x0000},
    {0x003B, 0x003B, 0x003B, 0x0000},
    {0x003C, 0x003C, 0x003C, 0x0000},
    {0x003D, 0x003D, 0x003D, 0x0000},
    {0x003E, 0x003E, 0x003E, 0x0000},
    {0x003F, 0x003F, 0x003F, 0x0000},
    {0x0040, 0x0040, 0x0040, 0x0000},
    {0x0041, 0x0041, 0x0041, 0x0000},
    {0x0042, 0x0042, 0x0042, 0x0000},
    {0x0043, 0x0043, 0x0043, 0x0000},
    {0x0044, 0x0044, 0x0044, 0x0000},
    {0x0045, 0x0045, 0x0045, 0x0000},
    {0x0046, 0x0046, 0x0046, 0x0000},
    {0x0047, 0x0047, 0x0047, 0x0000},
    {0x0048, 0x0048, 0x0048, 0x0000},
    {0x0049, 0x0049, 0x0049, 0x0000},
    {0x004A, 0x004A, 0x004A, 0x0000},
    {0x004B, 0x004B, 0x004B, 0x0000},
    {0x004C, 0x004C, 0x004C, 0x0000},
    {0x004D, 0x004D, 0x004D, 0x0000},
    {0x004E, 0x004E, 0x004E, 0x0000},
    {0x004F, 0x004F, 0x004F, 0x0000},
    {0x0050, 0x0050, 0x0050, 0x0000},
    {0x0051, 0x0051, 0x0051, 0x0000},
    {0x0052, 0x0052, 0x0052, 0x0000},
    {0x0053, 0x0053, 0x0053, 0x0000},
    {0x0054, 0x0054, 0x0054, 0x0000},
    {0x0055, 0x0055, 0x0055, 0x0000},
    {0x0056, 0x0056, 0x0056, 0x0000},
    {0x0057, 0x0057, 0x0057, 0x0000},
    {0x0058, 0x0058, 0x0058, 0x0000},
    {0x0059, 0x0059, 0x0059, 0x0000},
    {0x005A, 0x005A, 0x005A, 0x0000},
    {0x005B, 0x005B, 0x005B, 0x0000},
    {0x005C, 0x005C, 0x005C, 0x0000},
    {0x005D, 0x005D, 0x005D, 0x0000},
    {0x005E, 0x005E, 0x005E, 0x0000},
    {0x005F, 0x005F, 0x005F, 0x0000},
    {0x0060, 0x0060, 0x0060, 0x0000},
    {0x0061, 0x0061, 0x0061, 0x0000},
    {0x0062, 0x0062, 0x0062, 0x0000},
    {0x0063, 0x0063, 0x0063, 0x0000},
    {0x0064, 0x0064, 0x0064, 0x0000},
    {0x0065, 0x0065, 0x0065, 0x0000},
    {0x0066, 0x0066, 0x0066, 0x0000},
    {0x0067, 0x0067, 0x0067, 0x0000},
    {0x0068, 0x0068, 0x0068, 0x0000},
    {0x0069, 0x0069, 0x0069, 0x0000},
    {0x006A, 0x006A, 0x006A, 0x0000},
    {0x006B, 0x006B, 0x006B, 0x0000},
    {0x006C, 0x006C, 0x006C, 0x0000},
    {0x006D, 0x006D, 0x006D, 0x0000},
    {0x006E, 0x006E, 0x006E, 0x0000},
    {0x006F, 0x006F, 0x006F, 0x0000},
    {0x0070, 0x0070, 0x0070, 0x0000},
    {0x0071, 0x0071, 0x0071, 0x0000},
    {0x0072, 0x0072, 0x0072, 0x0000},
    {0x0073, 0x0073, 0x0073, 0x0000},
    {0x0074, 0x0074, 0x0074, 0x0000},
    {0x0075, 0x0075, 0x0075, 0x0000},
    {0x0076, 0x0076, 0x0076, 0x0000},
    {0x0077, 0x0077, 0x0077, 0x0000},
    {0x0078, 0x0078, 0x0078, 0x0000},
    {0x0079, 0x0079, 0x0079, 0x0000},
    {0x007A, 0x007A, 0x007A, 0x0000},
    {0x007B, 0x007B, 0x007B, 0x0000},
    {0x007C, 0x007C, 0x007C, 0x0000},
    {0x007D, 0x007D, 0x007D, 0x0000},
    {0x007E, 0x007E, 0x007E, 0x0000},
    {0x007F, 0x007F, 0x007F, 0x0000},
    {0x0080, 0x0080, 0x0080, 0x0000},
    {0x0081, 0x0081, 0x0081, 0x0000},
    {0x0082, 0x0082, 0x0082, 0x0000},
    {0x0083, 0x0083, 0x0083, 0x0000},
    {0x0084, 0x0084, 0x0084, 0x0000},
    {0x0085, 0x0085, 0x0085, 0x0000},
    {0x0086, 0x0086, 0x0086, 0x0000},
    {0x0087, 0x0087, 0x0087, 0x0000},
    {0x0088, 0x0088, 0x0088, 0x0000},
    {0x0089, 0x0089, 0x0089, 0x0000},
    {0x008A, 0x008A, 0x008A, 0x0000},
    {0x008B, 0x008B, 0x008B, 0x0000},
    {0x008C, 0x008C, 0x008C, 0x0000},
    {0x008D, 0x008D, 0x008D, 0x0000},
    {0x008E, 0x008E, 0x008E, 0x0000},
    {0x008F, 0x008F, 0x008F, 0x0000},
    {0x0090, 0x0090, 0x0090, 0x0000},
    {0x0091, 0x0091, 0x0091, 0x0000},
    {0x0092, 0x0092, 0x0092, 0x0000},
    {0x0093, 0x0093, 0x0093, 0x0000},
    {0x0094, 0x0094, 0x0094, 0x0000},
    {0x0095, 0x0095, 0x0095, 0x0000},
    {0x0096, 0x0096, 0x0096, 0x0000},
    {0x0097, 0x0097, 0x0097, 0x0000},
    {0x0098, 0x0098, 0x0098, 0x0000},
    {0x0099, 0x0099, 0x0099, 0x0000},
    {0x009A, 0x009A, 0x009A, 0x0000},
    {0x009B, 0x009B, 0x009B, 0x0000},
    {0x009C, 0x009C, 0x009C, 0x0000},
    {0x009D, 0x009D, 0x009D, 0x0000},
    {0x009E, 0x009E, 0x009E, 0x0000},
    {0x009F, 0x009F, 0x009F, 0x0000},
    {0x00A0, 0x00A0, 0x00A0, 0x0000},
    {0x00A1, 0x00A1, 0x00A1, 0x0000},
    {0x00A2, 0x00A2, 0x00A2, 0x0000},
    {0x00A3, 0x00A3, 0x00A3, 0x0000},
    {0x00A4, 0x00A4, 0x00A4, 0x0000},
    {0x00A5, 0x00A5, 0x00A5, 0x0000},
    {0x00A6, 0x00A6, 0x00A6, 0x0000},
    {0x00A7, 0x00A7, 0x00A7, 0x0000},
    {0x00A8, 0x00A8, 0x00A8, 0x0000},
    {0x00A9, 0x00A9, 0x00A9, 0x0000},
    {0x00AA, 0x00AA, 0x00AA, 0x0000},
    {0x00AB, 0x00AB, 0x00AB, 0x0000},
    {0x00AC, 0x00AC, 0x00AC, 0x0000},
    {0x00AD, 0x00AD, 0x00AD, 0x0000},
    {0x00AE, 0x00AE, 0x00AE, 0x0000},
    {0x00AF, 0x00AF, 0x00AF, 0x0000},
    {0x00B0, 0x00B0, 0x00B0, 0x0000},
    {0x00B1, 0x00B1, 0x00B1, 0x0000},
    {0x00B2, 0x00B2, 0x00B2, 0x0000},
    {0x00B3, 0x00B3, 0x00B3, 0x0000},
    {0x00B4, 0x00B4, 0x00B4, 0x0000},
    {0x00B5, 0x00B5, 0x00B5, 0x0000},
    {0x00B6, 0x00B6, 0x00B6, 0x0000},
    {0x00B7, 0x00B7, 0x00B7, 0x0000},
    {0x00B8, 0x00B8, 0x00B8, 0x0000},
    {0x00B9, 0x00B9, 0x00B9, 0x0000},
    {0x00BA, 0x00BA, 0x00BA, 0x0000},
    {0x00BB, 0x00BB, 0x00BB, 0x0000},
    {0x00BC, 0x00BC, 0x00BC, 0x0000},
    {0x00BD, 0x00BD, 0x00BD, 0x0000},
    {0x00BE, 0x00BE, 0x00BE, 0x0000},
    {0x00BF, 0x00BF, 0x00BF, 0x0000},
    {0x00C0, 0x00C0, 0x00C0, 0x0000},
    {0x00C1, 0x00C1, 0x00C1, 0x0000},
    {0x00C2, 0x00C2, 0x00C2, 0x0000},
    {0x00C3, 0x00C3, 0x00C3, 0x0000},
    {0x00C4, 0x00C4, 0x00C4, 0x0000},
    {0x00C5, 0x00C5, 0x00C5, 0x0000},
    {0x00C6, 0x00C6, 0x00C6, 0x0000},
    {0x00C7, 0x00C7, 0x00C7, 0x0000},
    {0x00C8, 0x00C8, 0x00C8, 0x0000},
    {0x00C9, 0x00C9, 0x00C9, 0x0000},
    {0x00CA, 0x00CA, 0x00CA, 0x0000},
    {0x00CB, 0x00CB, 0x00CB, 0x0000},
    {0x00CC, 0x00CC, 0x00CC, 0x0000},
    {0x00CD, 0x00CD, 0x00CD, 0x0000},
    {0x00CE, 0x00CE, 0x00CE, 0x0000},
    {0x00CF, 0x00CF, 0x00CF, 0x0000},
    {0x00D0, 0x00D0, 0x00D0, 0x0000},
    {0x00D1, 0x00D1, 0x00D1, 0x0000},
    {0x00D2, 0x00D2, 0x00D2, 0x0000},
    {0x00D3, 0x00D3, 0x00D3, 0x0000},
    {0x00D4, 0x00D4, 0x00D4, 0x0000},
    {0x00D5, 0x00D5, 0x00D5, 0x0000},
    {0x00D6, 0x00D6, 0x00D6, 0x0000},
    {0x00D7, 0x00D7, 0x00D7, 0x0000},
    {0x00D8, 0x00D8, 0x00D8, 0x0000},
    {0x00D9, 0x00D9, 0x00D9, 0x0000},
    {0x00DA, 0x00DA, 0x00DA, 0x0000},
    {0x00DB, 0x00DB, 0x00DB, 0x0000},
    {0x00DC, 0x00DC, 0x00DC, 0x0000},
    {0x00DD, 0x00DD, 0x00DD, 0x0000},
    {0x00DE, 0x00DE, 0x00DE, 0x0000},
    {0x00DF, 0x00DF, 0x00DF, 0x0000},
    {0x00E0, 0x00E0, 0x00E0, 0x0000},
    {0x00E1, 0x00E1, 0x00E1, 0x0000},
    {0x00E2, 0x00E2, 0x00E2, 0x0000},
    {0x00E3, 0x00E3, 0x00E3, 0x0000},
    {0x00E4, 0x00E4, 0x00E4, 0x0000},
    {0x00E5, 0x00E5, 0x00E5, 0x0000},
    {0x00E6, 0x00E6, 0x00E6, 0x0000},
    {0x00E7, 0x00E7, 0x00E7, 0x0000},
    {0x00E8, 0x00E8, 0x00E8, 0x0000},
    {0x00E9, 0x00E9, 0x00E9, 0x0000},
    {0x00EA, 0x00EA, 0x00EA, 0x0000},
    {0x00EB, 0x00EB, 0x00EB, 0x0000},
    {0x00EC, 0x00EC, 0x00EC, 0x0000},
    {0x00ED, 0x00ED, 0x00ED, 0x0000},
    {0x00EE, 0x00EE, 0x00EE, 0x0000},
    {0x00EF, 0x00EF, 0x00EF, 0x0000},
    {0x00F0, 0x00F0, 0x00F0, 0x0000},
    {0x00F1, 0x00F1, 0x00F1, 0x0000},
    {0x00F2, 0x00F2, 0x00F2, 0x0000},
    {0x00F3, 0x00F3, 0x00F3, 0x0000},
    {0x00F4, 0x00F4, 0x00F4, 0x0000},
    {0x00F5, 0x00F5, 0x00F5, 0x0000},
    {0x00F6, 0x00F6, 0x00F6, 0x0000},
    {0x00F7, 0x00F7, 0x00F7, 0x0000},
    {0x00F8, 0x00F8, 0x00F8, 0x0000},
    {0x00F9, 0x00F9, 0x00F9, 0x0000},
    {0x00FA, 0x00FA, 0x00FA, 0x0000},
    {0x00FB, 0x00FB, 0x00FB, 0x0000},
    {0x00FC, 0x00FC, 0x00FC, 0x0000},
    {0x00FD, 0x00FD, 0x00FD, 0x0000},
    {0x00FE, 0x00FE, 0x00FE, 0x0000},
    {0x00FF, 0x00FF, 0x00FF, 0x0000}
};
TerminatedCString g_RendererDllName = "trid3d.dll";
int g_SystemInitialized = 0x1;
int g_VideoMemorySize = 0x1;
int g_MaxTextureSize = 0x40;
int g_SystemMemorySize = 0x3c000;
int g_CSpikeClassVersion = 0x1;
CSpotView* g_CSpotViewPtr = (CSpotView*)&g_CSpotViewInstance;
SMRGLTextureBasic DAT_00684178 = {{0x0000000D, 0x00000000}, "headlite.raw"};
int g_CStairsClassVersion = 0x2;
int g_CTempleStoneClassVersion = 0x1;
int g_CStrangerClassVersion = 0x9;
int g_CSuccubusClassVersion = 0x1;
int g_CSvetlanaClassVersion = 0x1;
SMRGLTextureBasic DAT_0068423C = {{0x0000000D, 0x00000000}, "BACKGND.RAW"};
int g_CBassPlayerClassVersion = 0x1;
int g_CDrummerClassVersion = 0x1;
int g_CTeleportDestClassVersion = 0x1;
int g_CTeleportClassVersion = 0x1;
undefined4 g_CTentacleClassVersion = 0x00000002;
WatcomStaticDestructorNode g_CTextureListDestructorNode = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_00664600, 0x00000001, (void *)&g_CTextureListInstance};
int g_TexturePreviewEnabled = 0x1;
int g_CTommyGunClassVersion = 0x1;
int g_CTrapClassVersion = 0x1;
int g_CTrashClassVersion = 0x1;
SMRGLTextureBasic DAT_0068434c = {{0x0000000D, 0x00000000}, "headlite.raw"};
int g_CTriggerClassVersion = 0xb;
CTerrain* g_CTerrainPtr = (CTerrain*)&g_CTerrainInstance;
SMRGLTextureBasic DAT_006843FC = {{0x0000000D, 0x00000000}, "DIRT.RAW"};
int g_CTurretClassVersion = 0x2;
int g_CTVBatClassVersion = 0x5;
int g_CVampireBossVersion = 0x4;
int g_CVehicleClassVersion = 0x3;
int g_CCryptVesselClassVersion = 0x4;
WatcomStaticDestructorNode g_CWaterDestructorNode = {nullptr, (WatcomDestructorCall *)&WatcomDestructorCall_006652c0, 0x00000001, (void *)&g_CWaterInstance};
CWater* g_CWaterPtr = (CWater*)&g_CWaterInstance;
SMRGLTextureBasic g_WaterTextures[16] = {
    {{0x0000000D, 0x00000000}, "WATER0.RAW"},
    {{0x0000000D, 0x00000000}, "WATER1.RAW"},
    {{0x0000000D, 0x00000000}, "WATER2.RAW"},
    {{0x0000000D, 0x00000000}, "WATER3.RAW"},
    {{0x0000000D, 0x00000000}, "WATER4.RAW"},
    {{0x0000000D, 0x00000000}, "WATER5.RAW"},
    {{0x0000000D, 0x00000000}, "WATER6.RAW"},
    {{0x0000000D, 0x00000000}, "WATER7.RAW"},
    {{0x0000000D, 0x00000000}, "WATER8.RAW"},
    {{0x0000000D, 0x00000000}, "WATER9.RAW"},
    {{0x0000000D, 0x00000000}, "WATER10.RAW"},
    {{0x0000000D, 0x00000000}, "WATER11.RAW"},
    {{0x0000000D, 0x00000000}, "WATER12.RAW"},
    {{0x0000000D, 0x00000000}, "WATER13.RAW"},
    {{0x0000000D, 0x00000000}, "WATER14.RAW"},
    {{0x0000000D, 0x00000000}, "WATER15.RAW"}
};
SMRGLTextureBasic* g_WaterTexturesEnd = nullptr;
SMRGLTextureBasic DAT_006846f0 = {{0x0000000D, 0x00000000}, "WATER0.RAW"};
SMRGLTextureBasic DAT_00684708 = {{0x0000000D, 0x00000000}, "WATER1.RAW"};
SMRGLTextureBasic DAT_00684720 = {{0x0000000D, 0x00000000}, "WATER2.RAW"};
SMRGLTextureBasic DAT_00684738 = {{0x0000000D, 0x00000000}, "WATER3.RAW"};
SMRGLTextureBasic DAT_00684750 = {{0x0000000D, 0x00000000}, "WATER4.RAW"};
SMRGLTextureBasic DAT_00684768 = {{0x0000000D, 0x00000000}, "WATER5.RAW"};
SMRGLTextureBasic DAT_00684780 = {{0x0000000D, 0x00000000}, "WATER6.RAW"};
SMRGLTextureBasic DAT_00684798 = {{0x0000000D, 0x00000000}, "WATER7.RAW"};
SMRGLTextureBasic DAT_006847B0 = {{0x0000000D, 0x00000000}, "WATER8.RAW"};
SMRGLTextureBasic DAT_006847C8 = {{0x0000000D, 0x00000000}, "WATER9.RAW"};
SMRGLTextureBasic DAT_006847E0 = {{0x0000000D, 0x00000000}, "WATER10.RAW"};
SMRGLTextureBasic DAT_006847F8 = {{0x0000000D, 0x00000000}, "WATER11.RAW"};
SMRGLTextureBasic DAT_00684810 = {{0x0000000D, 0x00000000}, "WATER12.RAW"};
SMRGLTextureBasic DAT_00684828 = {{0x0000000D, 0x00000000}, "WATER13.RAW"};
SMRGLTextureBasic DAT_00684840 = {{0x0000000D, 0x00000000}, "WATER14.RAW"};
SMRGLTextureBasic DAT_00684858 = {{0x0000000D, 0x00000000}, "WATER15.RAW"};
int g_CWaterActorVersion = 0x6;
int g_CWayPointClassVersion = 0x2;
int g_CWeaponClassVersion = 0x7;
CWeather* g_CWeatherPtr = (CWeather*)&g_CWeatherInstance;
SMRGLTextureBasic DAT_00684900 = {{0x0000000D, 0x00000000}, "RAINDRP1.RAW"};
SMRGLTextureBasic DAT_00684918 = {{0x0000000D, 0x00000000}, "RAINSPLT.RAW"};
SMRGLTextureBasic DAT_00684930 = {{0x0000000D, 0x00000000}, "SNOWFLKE.RAW"};
int g_CWerewolfClassVersion = 0x6;
SMRGLTextureBasic DAT_0068495c = {{0x0000000D, 0x00000000}, "REDSPARK.RAW"};
int g_BrightnessDirection = 0x8;
char* g_ApplicationTitle = (char*)s_Nocturne_Editor_006581a7;
char* g_ApplicationTimerTitle = (char*)s_Nocturne_Editor_006581b7;
int g_WindowActive = 0x2D;
int g_ForceMessagePump = 0x1;
int g_PreviousActiveState = 0x2D;
int g_CZombieClassVersion = 0xb;
int g_MaxErrnoValue = 0x28;
FILE* g_StaticFilePoolStart = nullptr;
FILE* g_StderrLogFile = nullptr;
Heap* g_MainHeap = nullptr;
Heap* g_SecondaryHeap = nullptr;
DWORD g_TLSIndex = 0xffffffff;
undefined4 g_SpecialExitHandler = 0;
DWORD g_WinMainCmdShow = 0x0;
char* g_ExeFileNameA = nullptr;
char* g_DllFileNameA = nullptr;
WCHAR* g_CommandLineArgsW = nullptr;
WCHAR* g_ExeFileNameW = nullptr;
WCHAR* g_DllFileNameW = nullptr;
DWORD g_StackAllocSize = 0x0;
void* g_CrtStackBuffer = nullptr;
int g_ConsoleInitializationFlag = 0x0;
char* g_EnvironmentStrings = nullptr;
BYTE g_WindowsMinorVersion = 0x00;
byte g_WindowsMajorVersion = 0x0;
WORD g_WindowsPlatformVersion = 0x0;
uint g_WindowsPlatformVersionExt = 0x0;
uint g_WindowsVersionLow = 0x0;
uint g_WindowsVersionMid = 0x0;
uint g_WindowsVersionCombined = 0x0;
int g_UseSoftwareMath = 0x0;
dst_rule g_DstStartRule = {0x00000000, 0x00000000, 0x00000002, 0x00000001, 0x00000003, 0x00000000, 0x00000000, 0x00000000};
int g_DstTransitionSecond = 0x0;
int g_DstTransitionMinute = 0x0;
int g_DstTransitionHour = 0x1;
int g_TimezoneOffset = 0x4650;
int g_DaylightSavingActive = 0x1;
int g_DaylightSavingOffset = 0xe10;
byte g_TimezoneInitFlags = 0x1;
uint g_MaxHandleCount = 0x14;
SIOControlBlock* g_IOControlBlock = nullptr;
undefined4 g_CurrentHandleCount = 0;
undefined4 g_FakeHandleCounter = 0x80000000;
short g_PureVirtualCallFlag = 0x0;
WatcomStaticDestructorNode* g_AtexitListHead = nullptr;
IS_SPECIAL_DEVICE_FUNC* g_IsSpecialDeviceFuncPtr = nullptr;
SPECIAL_DEVICE_CLEANUP_FUNC* g_SpecialDeviceCleanupFunc = nullptr;
SPECIAL_DEVICE_CLOSE_FUNC* g_SpecialDeviceCloseFunc = nullptr;
SPECIAL_DEVICE_READ_FUNC* g_SpecialDeviceReadFuncPtr = nullptr;
SPECIAL_DEVICE_WRITE_FUNC* g_SpecialDeviceWriteFuncPtr = nullptr;
SPECIAL_CONSOLE_INPUT_HANDLER_FUNC* g_SpecialConsoleInputHandler = nullptr;
SPECIAL_CONSOLE_OUTPUT_HANDLER_FUNC* g_SpecialConsoleOutputHandler = nullptr;
char** g_TempEnvVarNames = (char**)0x006590A4; // DAT_006590a4
int g_ProcessSpawnEnabled = 0x1;
EXCEPTION_FILTER_FUNC* g_UserExceptionFilter = nullptr;
EXCEPTION_CLEANUP_FUNC* g_ExceptionCleanup = nullptr;
int g_ConsoleInputState = 0x0;
undefined1 g_DebuggerIsAttached = 0;
int g_HeapFlags = 0x10000;
DWORD g_RuntimeBufferSize = 0xf4;
HANDLE g_ConsoleInputHandle = {0x66, 0x66, 0x66, 0x66};
HANDLE g_ConsoleOutputHandle = {0x66, 0x66, 0x66, 0x66};
SIGNAL_HANDLER g_GlobalSignalHandlers[16] = {
    0x00000001, 0xFFFFFFFF, 0x00000002, 0xFFFFFFFF, 0x00000001, 0xFFFFFFFF, 0x00000002, 0xC000001D,
    0x00000002, 0xC000013A, 0x00000002, 0xC0000005, 0x00000002, 0xC000013A, 0x00000002, 0xC000013A
};
bool g_ConsoleHandlerRegistered = false;
uint g_CodePage = 0x1;
BYTE g_InitHandlerStatusStart = 0x00;
BYTE g_InitHandlerPriorityStart = 0x40;
RUNTIME_HANDLER_FUNC* g_FirstInitHandler = (RUNTIME_HANDLER_FUNC*)core_actor_cpp_staticInit_FUN_00408320;
RuntimeHandlerEntry g_InitHandlers[166] = {
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_ammo_cpp_staticInit_FUN_00410d50},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_ammobox_cpp_staticInit_FUN_00411530},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_anvil_cpp_staticInit_FUN_00411c70},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_armour_cpp_staticInit_FUN_00412130},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_backgnd_cpp_staticInit_FUN_00412740},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_baron_cpp_staticInit_FUN_00412b20},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_barrier_cpp_staticInit_FUN_00414150},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_bat_cpp_staticInit_FUN_004146c0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_batcreat_cpp_staticInit_FUN_00415080},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_batman_cpp_staticInit_FUN_004163e0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_battery_cpp_staticInit_FUN_00417e20},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_beast_cpp_staticInit_FUN_004181b0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_biggs_cpp_staticInit_FUN_00418550},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_bodypart_cpp_staticInit_FUN_00418de0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_boneguy_cpp_staticInit_FUN_0041b6d0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_boxactor_cpp_staticInit_FUN_00421650},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_bride_cpp_staticInit_FUN_00423700},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_bugs_cpp_staticInit_FUN_00424c40},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_charactr_cpp_staticInit_FUN_00427d80},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_chain_cpp_staticInit_FUN_0042fb10},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_cloth_cpp_staticInit_FUN_00438b80},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_colonel_cpp_staticInit_FUN_0043f770},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)engine_console_cpp_staticInit_FUN_004417e0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_conveyor_cpp_staticInit_FUN_00441c30},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_cow_cpp_staticInit_FUN_004440d0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_crate_cpp_staticInit_FUN_00448460},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_crossbow_cpp_staticInit_FUN_00448c00},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_curtain_cpp_staticInit_FUN_00449610},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_dcamera_cpp_staticInit_FUN_0044bb10},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_dcube_cpp_staticInit_FUN_00454720},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_dest_cpp_staticInit_FUN_0046f890},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_dfilter_cpp_staticInit_FUN_0046ff50},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_dlight_cpp_staticInit_FUN_00472680},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_dmodel_cpp_staticInit_FUN_00476c50},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_dog_cpp_staticInit_FUN_0047efe0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_door_cpp_staticInit_FUN_0047fa60},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_dracbrid_cpp_staticInit_FUN_00483ef0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)engine_drender_cpp_staticInit_FUN_0048a6b0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_drip_cpp_staticInit_FUN_0048df80},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_drone_cpp_staticInit_FUN_0048eae0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_dskybox_cpp_staticInit_FUN_00490040},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_dtrace_cpp_staticInit_FUN_004941e0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_dtri_cpp_staticInit_FUN_0049a430},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_dynamite_cpp_staticInit_FUN_0049cd40},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)shape_edittool_cpp_staticInit_FUN_0049d170},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_elephant_cpp_staticInit_FUN_004a6f70},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_emitter_cpp_staticInit_FUN_004a7c30},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_enemy_cpp_staticInit_FUN_004a94d0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_event_cpp_staticInit_FUN_004aa260},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_filmreel_cpp_staticInit_FUN_004be620},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_fire_cpp_staticInit_FUN_004bef20},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_flame_cpp_staticInit_FUN_004c9a30},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_flamecan_cpp_staticInit_FUN_004cb0f0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_flamegun_cpp_staticInit_FUN_004cb810},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_flashlit_cpp_staticInit_FUN_004cbb50},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_flamegun_cpp_staticInit_FUN_004cbcb0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_flies_cpp_staticInit_FUN_004cbcf0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_frankgen_cpp_staticInit_FUN_004d16b0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_gabriela_cpp_staticInit_FUN_004d2910},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_game_cpp_staticInit_FUN_004d76d0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_gargoyle_cpp_staticInit_FUN_004e4470},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_gasmask_cpp_staticInit_FUN_004e5c90},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_ghoul_cpp_staticInit_FUN_004e5f90},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_glass_cpp_staticInit_FUN_004e8fd0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_gore_cpp_staticInit_FUN_004eb8c0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_grave_cpp_staticInit_FUN_004ee4a0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_ground_cpp_staticInit_FUN_004eeb90},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_gun_cpp_staticInit_FUN_004f0280},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_haystack_cpp_staticInit_FUN_004f0ba0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_health_cpp_staticInit_FUN_004f1d60},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_hero_cpp_staticInit_FUN_004f2120},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_hiram_cpp_staticInit_FUN_004f4380},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_hostage_cpp_staticInit_FUN_004f47d0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_hotdemon_cpp_staticInit_FUN_004f6c30},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_hpriest_cpp_staticInit_FUN_004f7b00},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_icepick_cpp_staticInit_FUN_004f7d80},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_imp_cpp_staticInit_FUN_004f9830},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)engine_ini_cpp_staticInit_FUN_004fb240},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_inv_cpp_staticInit_FUN_004fcc30},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_keyactor_cpp_staticInit_FUN_00501620},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)engine_keys_cpp_staticInit_FUN_00502410},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_ladder_cpp_staticInit_FUN_005024d0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_larva_cpp_staticInit_FUN_00502f20},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_level_cpp_staticInit_FUN_00503d80},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_lever_cpp_staticInit_FUN_00504760},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_lightgun_cpp_staticInit_FUN_00505890},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_litecone_cpp_staticInit_FUN_00506aa0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_main_c_staticInit_FUN_00506e80},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_manpuz_cpp_staticInit_FUN_00508890},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_marquee_cpp_staticInit_FUN_0050baf0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_melee_cpp_staticInit_FUN_0050e760},
    {0x00, 0x20, (RUNTIME_HANDLER_FUNC *)shape_memdbg_cpp_staticInit_FUN_0050ee40},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_menu_cpp_staticInit_FUN_0050fdb0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)shape_meshlod_cpp_staticInit_FUN_00514f70},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_mimic_cpp_staticInit_FUN_0051f100},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_minecar_cpp_staticInit_FUN_00520e20},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_mirror_cpp_staticInit_FUN_00520fb0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_mission_cpp_staticInit_FUN_00522c50},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_mobster_cpp_staticInit_FUN_00525070},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_moloch_cpp_staticInit_FUN_00528ac0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_moon_cpp_staticInit_FUN_005299f0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_msnedit_cpp_staticInit_FUN_00535c30},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_netgame_cpp_staticInit_FUN_0053f310},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)support_newmsg_cpp_staticInit_FUN_00544360},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_npc_cpp_staticInit_FUN_00544770},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_passngr_cpp_staticInit_FUN_00545ac0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_pendulum_cpp_staticInit_FUN_00549320},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_platfrm_cpp_staticInit_FUN_0054c7e0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_podmain_cpp_staticInit_FUN_00551990},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_scat_cpp_staticInit_FUN_00556e00},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_script_cpp_staticInit_FUN_005591b0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_sentinel_cpp_staticInit_FUN_00567d40},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_set_cpp_staticInit_FUN_00569040},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_setcolid_cpp_staticInit_FUN_005715b0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_setdir_cpp_staticInit_FUN_00574790},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_setedit_cpp_staticInit_FUN_00576930},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_shotgun_cpp_staticInit_FUN_00587e70},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_shovel_cpp_staticInit_FUN_00588b30},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_simbox_cpp_staticInit_FUN_00588cd0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_skeleton_cpp_staticInit_FUN_00599670},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_slew_cpp_staticInit_FUN_005a2050},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_smiley_cpp_staticInit_FUN_005a23c0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)sound_sndmain_cpp_staticInit_FUN_005a3940},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)sound_snddx_cpp_staticInit_FUN_005ade60},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)sound_sndwav_cpp_staticInit_FUN_005b0670},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_sound_cpp_staticInit_FUN_005b1760},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_spike_cpp_staticInit_FUN_005b81b0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)shape_spotview_cpp_staticInit_FUN_005b95b0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_stairs_cpp_staticInit_FUN_005b9b00},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_stone_cpp_staticInit_FUN_005baca0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_stranger_cpp_staticInit_FUN_005bae80},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_succubus_cpp_staticInit_FUN_005c6a10},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_svetlana_cpp_staticInit_FUN_005d87e0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_tbplayer_cpp_staticInit_FUN_005d9fd0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_teleport_cpp_staticInit_FUN_005da6e0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_tentacle_cpp_staticInit_FUN_005daef0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_texlist_cpp_staticInit_FUN_005dbdb0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_tommygun_cpp_staticInit_FUN_005dda20},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_trap_cpp_staticInit_FUN_005de620},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_trash_cpp_staticInit_FUN_005deb00},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_trigger_cpp_staticInit_FUN_005df7d0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)support_trisock_cpp_staticInit_FUN_005e16b0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_turret_cpp_staticInit_FUN_005e2080},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_tvbat_cpp_staticInit_FUN_005e3e50},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_vampboss_cpp_staticInit_FUN_005e5520},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_vehicle_cpp_staticInit_FUN_005e7810},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_vehicle_cpp_staticInit_FUN_005e78d0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_vessel_cpp_staticInit_FUN_005e8df0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_water_cpp_staticInit_FUN_005e9da0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_wateract_cpp_staticInit_FUN_005ea810},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_waypoint_cpp_staticInit_FUN_005ebd10},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_weapon_cpp_staticInit_FUN_005ede40},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_weather_cpp_staticInit_FUN_005eeaa0},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_werewolf_cpp_staticInit_FUN_005efb70},
    {0x00, 0x40, (RUNTIME_HANDLER_FUNC *)core_zombie_cpp_staticInit_FUN_005f8c90},
    {0x00, 0x20, (RUNTIME_HANDLER_FUNC *)crt_strtod_c_staticInit_FUN_00603bb0},
    {0x00, 0x20, (RUNTIME_HANDLER_FUNC *)crt_fltused_c_staticInit_FUN_005fde60},
    {0x00, 0x01, (RUNTIME_HANDLER_FUNC *)crt_stub_c_staticInit_FUN_005fde92},
    {0x00, 0x02, (RUNTIME_HANDLER_FUNC *)crt_fpu_c_staticInit_FUN_006047e0},
    {0x00, 0x20, (RUNTIME_HANDLER_FUNC *)crt_stub_c_staticInit_FUN_005ff9f2},
    {0x00, 0x20, (RUNTIME_HANDLER_FUNC *)crt_ioinit_c_staticInit_FUN_00608f20},
    {0x00, 0x0B, (RUNTIME_HANDLER_FUNC *)crt_unknown_c_staticInit_FUN_0060240e},
    {0x00, 0x20, (RUNTIME_HANDLER_FUNC *)crt_environ_c_staticInit_FUN_0060c650},
    {0x00, 0x20, (RUNTIME_HANDLER_FUNC *)crt_startup_c_staticInit_FUN_0060aef4},
    {0x00, 0x03, (RUNTIME_HANDLER_FUNC *)crt_fpemu_c_staticInit_FUN_0060be80},
    {0x00, 0x20, (RUNTIME_HANDLER_FUNC *)crt_thread_c_staticInit_FUN_0060d214}
};
BYTE g_ExitHandlerTableStart = 0x00;
BYTE g_ExitHandlerPriorityEnd = 0x01;
RUNTIME_HANDLER_FUNC* g_FirstExitHandler = (RUNTIME_HANDLER_FUNC*)crt_stub_c_staticFinal_FUN_005fde93;
RuntimeHandlerEntry g_ExitHandlers[6] = {
    {0x00, 0x28, (RUNTIME_HANDLER_FUNC *)crt_unknown_c_staticFinal_FUN_00605b62},
    {0x00, 0x20, (RUNTIME_HANDLER_FUNC *)crt_unknown_c_staticFinal_FUN_00608fc0},
    {0x00, 0x20, (RUNTIME_HANDLER_FUNC *)crt_unknown_c_staticFinal_FUN_00602748},
    {0x00, 0x1F, (RUNTIME_HANDLER_FUNC *)crt_unknown_c_staticFinal_FUN_00608bb0},
    {0x00, 0x20, (RUNTIME_HANDLER_FUNC *)crt_environ_c_staticFinal_FUN_0060c73c},
    {0x00, 0x0A, (RUNTIME_HANDLER_FUNC *)crt_unknown_c_staticFinal_FUN_0060a4cc}
};
RuntimeHandlerEntry g_ExitHandlerTableEnd;
GUID DAT_00686d58 = {0} /* raw: 0x84, 0xFA, 0x9A, 0x27, 0x81, 0x49, 0xCE, 0x11, 0xA5, 0x21, 0x00, 0x20, 0xAF, 0x0B, 0xE5, 0x60 */;
GUID g_IID_IDirectSound3DBuffer = {0} /* raw: 0x86, 0xFA, 0x9A, 0x27, 0x81, 0x49, 0xCE, 0x11, 0xA5, 0x21, 0x00, 0x20, 0xAF, 0x0B, 0xE5, 0x60 */;
byte g_IEEE754ExponentClassTable[16] = {0x00, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x07, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x0D, 0x00, 0x00};
SRenderVertex g_RenderVertexBuffer[16] = {};

