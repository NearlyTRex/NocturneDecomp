; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00548e70(void)
;
;
; Referenced Globals:
;   TerminatedCString s_support_trisock_cpp_00596c67
;   TerminatedCString s_Should_never_be_called_00596c7e
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EDX,0x596c67                    ; 00548e70 | = "..\\support\\trisock.cpp"
        ;   Label: FUN_00548e70
    MOV ECX,0xd0                        ; 00548e75
    PUSH 0x596c7e                       ; 00548e7a | = "Should never be called!"
    MOV dword ptr [0x01cc4800],EDX      ; 00548e7f | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00548e85 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00548e8b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00548e90
    MOV EAX,dword ptr [ESP + 0x4]       ; 00548e93
    RET                                 ; 00548e97

