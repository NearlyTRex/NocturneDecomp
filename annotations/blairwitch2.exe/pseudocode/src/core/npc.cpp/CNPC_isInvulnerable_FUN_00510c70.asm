; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_npc_cpp_CNPC_isInvulnerable_FUN_00510c70(CNPC *this_ptr)
;
; Parameters:
; CNPC *           Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00510c70
        ;   Label: core_npc.cpp_CNPC_isInvulnerable_FUN_00510c70
    CMP dword ptr [EAX + 0x2433c],0x0   ; 00510c74
    SETZ AL                             ; 00510c7b
    AND EAX,0xff                        ; 00510c7e
    RET                                 ; 00510c83

