; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_npc_cpp_CNPC_isInvulnerable_FUN_00509ac0(CNPC *this_ptr)
;
; Parameters:
; CNPC *           Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00509ac0
        ;   Label: core_npc.cpp_CNPC_isInvulnerable_FUN_00509ac0
    CMP dword ptr [EAX + 0x206a8],0x0   ; 00509ac4
    SETZ AL                             ; 00509acb
    AND EAX,0xff                        ; 00509ace
    RET                                 ; 00509ad3

