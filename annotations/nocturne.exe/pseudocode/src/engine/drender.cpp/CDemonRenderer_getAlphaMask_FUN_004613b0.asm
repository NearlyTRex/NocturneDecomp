; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_004613b0(CDemonRenderer *this_ptr)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
;
; XREF[9]:
;   core_batman.cpp_CBatman_renderOpaque_FUN_00414340 at 00414356
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440 at 00426450
;   core_dcamera.cpp_CDemonCamera_screenToWorldWithAlpha_FUN_00441440 at 0044146c
;   core_dcamera.cpp_CDemonCamera_transformVectorWithAlpha_FUN_00441a10 at 00441aa5
;   core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_00441610 at 00441627
;   core_dracbrid.cpp_CDraculaBride_renderOpaque_FUN_0045a260 at 0045a276
;   core_moloch.cpp_CMoloch_renderOpaque_FUN_004de550 at 004de55f
;   core_set.cpp_CDemonSet_addQueuedCoronaGlobe_FUN_0050aa20 at 0050aa4b
;   core_succubus.cpp_CSuccubus_renderOpaque_FUN_00541640 at 00541650
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004613b0
        ;   Label: engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_004613b0
    MOV EAX,dword ptr [EAX + 0x14]      ; 004613b4
    SAR EAX,0x18                        ; 004613b7
    RET                                 ; 004613ba

