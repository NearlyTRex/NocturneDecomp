; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00(CDemonRenderer * this_ptr)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
;
; XREF[9]:
;   core_batman.cpp_CBatman_renderOpaque_FUN_004173b0 at 004173c6
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0 at 0042a2d0
;   core_dcamera.cpp_CDemonCamera_screenToWorldWithAlpha_FUN_0044d600 at 0044d62c
;   core_dcamera.cpp_CDemonCamera_transformVectorWithAlpha_FUN_0044dbd0 at 0044dc65
;   core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0 at 0044d7e7
;   core_dracbrid.cpp_CDraculaBride_renderOpaque_FUN_00485be0 at 00485bf6
;   core_moloch.cpp_CMoloch_renderOpaque_FUN_00529750 at 0052975f
;   core_set.cpp_CDemonSet_FUN_0056d140 at 0056d16b
;   core_succubus.cpp_CSuccubus_renderOpaque_FUN_005c7590 at 005c75a0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0048ce00
        ;   Label: engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00
    MOV EAX,dword ptr [EAX + 0x14]      ; 0048ce04
    SAR EAX,0x18                        ; 0048ce07
    RET                                 ; 0048ce0a

