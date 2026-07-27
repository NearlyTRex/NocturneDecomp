; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trisock_cpp_FUN_00548e70(void)
;
;
; Referenced Globals:
;   TerminatedCString s_support_trisock_cpp_00596c67
;   TerminatedCString s_Should_never_be_called_00596c7e
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EDX,0x596c67                    ; 00548e70 | = "..\\support\\trisock.cpp"
        ;   Label: support_trisock.cpp_FUN_00548e70
    MOV ECX,0xd0                        ; 00548e75
    PUSH 0x596c7e                       ; 00548e7a | = "Should never be called!"
    MOV dword ptr [0x01cc4800],EDX      ; 00548e7f | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00548e85 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00548e8b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00548e90
    MOV EAX,dword ptr [ESP + 0x4]       ; 00548e93
    RET                                 ; 00548e97

