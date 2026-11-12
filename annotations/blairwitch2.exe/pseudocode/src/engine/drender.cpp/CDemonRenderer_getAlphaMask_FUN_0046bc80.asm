; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0046bc80(CDemonRenderer *this_ptr)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
;
; XREF[9]:
;   core_batman.cpp_CBatman_renderOpaque_FUN_00413c70 at 00413c86
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_004254b0 at 004254c6
;   core_dcamera.cpp_CDemonCamera_screenToWorldWithAlpha_FUN_0043ca10 at 0043ca3c
;   core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0043cbe0 at 0043cbf7
;   core_dcamera.cpp_FUN_0043cfde at 0043d075
;   core_dracbrid.cpp_CDraculaBride_renderOpaque_FUN_00464ac0 at 00464ad6
;   core_moloch.cpp_CMoloch_renderOpaque_FUN_005020c0 at 005020cf
;   core_set.cpp_CDemonSet_addQueuedCoronaGlobe_FUN_00530750 at 0053077e
;   core_succubus.cpp_CSuccubus_renderOpaque_FUN_0056fe50 at 0056fe60
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0046bc80
        ;   Label: engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0046bc80
    MOV EAX,dword ptr [EAX + 0x14]      ; 0046bc84
    SAR EAX,0x18                        ; 0046bc87
    RET                                 ; 0046bc8a

