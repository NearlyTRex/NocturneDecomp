; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_00484180(CDemonRenderer *this_ptr)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
;
; XREF[9]:
;   core_batman.cpp_CBatman_renderOpaque_FUN_00413970 at 00413986
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042f240 at 0042f250
;   core_dcamera.cpp_FUN_0044e0d0 at 0044e0fc
;   core_dcamera.cpp_FUN_0044e2a0 at 0044e2b7
;   core_dcamera.cpp_FUN_0044e69e at 0044e735
;   core_dracbrid.cpp_CDraculaBride_renderOpaque_FUN_0047cfe0 at 0047cff6
;   core_moloch.cpp_CMoloch_renderOpaque_FUN_00521070 at 0052107f
;   core_set.cpp_CDemonSet_addQueuedCoronaGlobe_FUN_00551a00 at 00551a2e
;   core_succubus.cpp_CSuccubus_renderOpaque_FUN_00592aa0 at 00592ab0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00484180
        ;   Label: engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_00484180
    MOV EAX,dword ptr [EAX + 0x14]      ; 00484184
    SAR EAX,0x18                        ; 00484187
    RET                                 ; 0048418a

