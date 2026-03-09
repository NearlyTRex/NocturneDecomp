; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_npc_cpp_CNPC_isInvulnerable_FUN_00544e10(CNPC *this_ptr)
;
; Parameters:
; CNPC *           Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00544e10
        ;   Label: core_npc.cpp_CNPC_isInvulnerable_FUN_00544e10
    CMP dword ptr [EAX + 0x1f700],0x0   ; 00544e14
    SETZ AL                             ; 00544e1b
    AND EAX,0xff                        ; 00544e1e
    RET                                 ; 00544e23

