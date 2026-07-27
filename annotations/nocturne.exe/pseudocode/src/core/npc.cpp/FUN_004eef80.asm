; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool core_npc_cpp_FUN_004eef80(int param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004eef80
        ;   Label: core_npc.cpp_FUN_004eef80
    CMP dword ptr [EAX + 0x1f568],0x0   ; 004eef84
    SETZ AL                             ; 004eef8b
    AND EAX,0xff                        ; 004eef8e
    RET                                 ; 004eef93

