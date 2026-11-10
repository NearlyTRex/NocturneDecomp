; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_npc_cpp_CNPC_isInvulnerable_FUN_00531e80(CNPC *this_ptr)
;
; Parameters:
; CNPC *           Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00531e80
        ;   Label: core_npc.cpp_CNPC_isInvulnerable_FUN_00531e80
    CMP dword ptr [EAX + 0x1faac],0x0   ; 00531e84
    SETZ AL                             ; 00531e8b
    AND EAX,0xff                        ; 00531e8e
    RET                                 ; 00531e93

