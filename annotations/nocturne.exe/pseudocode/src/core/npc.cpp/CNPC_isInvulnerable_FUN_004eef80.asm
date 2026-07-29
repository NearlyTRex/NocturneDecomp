; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_npc_cpp_CNPC_isInvulnerable_FUN_004eef80(CNPC *this_ptr)
;
; Parameters:
; CNPC *           Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004eef80
        ;   Label: core_npc.cpp_CNPC_isInvulnerable_FUN_004eef80
    CMP dword ptr [EAX + 0x1f568],0x0   ; 004eef84
    SETZ AL                             ; 004eef8b
    AND EAX,0xff                        ; 004eef8e
    RET                                 ; 004eef93

