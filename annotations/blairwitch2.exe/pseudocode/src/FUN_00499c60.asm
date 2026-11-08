; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00499c60(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0049ea80 at 0049eadf
;
; Referenced Globals:
;   TerminatedCString s_d_d_f_f_005d55be
;   TerminatedCString s_f_f_f_005d55cb
;   TerminatedCString s_f_f_f_005d55d5
;   TerminatedCString s_f_f_f_005d55df
;   TerminatedCString s_f_f_f_005d55e9
;   TerminatedCString s_f_f_f_005d55f3
;   TerminatedCString s_f_f_f_005d55fd
;
; Called Functions:
;   FUN_005b8100
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00499c60
        ;   Label: FUN_00499c60
    PUSH ESI                            ; 00499c61
    PUSH EDI                            ; 00499c62
    PUSH EBP                            ; 00499c63
    SUB ESP,0x4                         ; 00499c64
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00499c67
    MOV EAX,dword ptr [ESP + 0x18]      ; 00499c6b
    ADD EAX,0x18                        ; 00499c6f
    PUSH EAX                            ; 00499c72
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00499c73
    ADD EAX,0x8                         ; 00499c77
    PUSH EAX                            ; 00499c7a
    MOV EAX,dword ptr [ESP + 0x20]      ; 00499c7b
    ADD EAX,0x4                         ; 00499c7f
    PUSH EAX                            ; 00499c82
    MOV EDX,dword ptr [ESP + 0x24]      ; 00499c83
    PUSH EDX                            ; 00499c87
    PUSH 0x5d55be                       ; 00499c88 | = "%d,%d,%f,%f\n"
    PUSH EBP                            ; 00499c8d
    CALL FUN_005b8100                   ; 00499c8e
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x18                        ; 00499c93
    MOV EAX,dword ptr [ESP + 0x18]      ; 00499c96
    ADD EAX,0x14                        ; 00499c9a
    PUSH EAX                            ; 00499c9d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00499c9e
    ADD EAX,0x10                        ; 00499ca2
    PUSH EAX                            ; 00499ca5
    MOV EAX,dword ptr [ESP + 0x20]      ; 00499ca6
    ADD EAX,0xc                         ; 00499caa
    PUSH EAX                            ; 00499cad
    PUSH 0x5d55cb                       ; 00499cae | = "%f,%f,%f\n"
    PUSH EBP                            ; 00499cb3
    CALL FUN_005b8100                   ; 00499cb4
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x14                        ; 00499cb9
    XOR EBX,EBX                         ; 00499cbc
    MOV EAX,dword ptr [ESP + 0x18]      ; 00499cbe
    MOV EDI,dword ptr [ESP + 0x18]      ; 00499cc2
    MOV ESI,dword ptr [ESP + 0x18]      ; 00499cc6
    ADD EAX,0x1c                        ; 00499cca
    ADD EDI,0x20                        ; 00499ccd
    ADD ESI,0x24                        ; 00499cd0
    MOV dword ptr [ESP],EAX             ; 00499cd3
    IMUL EAX,EBX,0xc                    ; 00499cd6
        ;   Label: LAB_00499cd6
    PUSH ESI                            ; 00499cd9
    MOV ECX,dword ptr [ESP + 0x4]       ; 00499cda
    PUSH EDI                            ; 00499cde
    ADD EAX,ECX                         ; 00499cdf
    PUSH EAX                            ; 00499ce1
    PUSH 0x5d55d5                       ; 00499ce2 | = "%f,%f,%f\n"
    ADD ESI,0xc                         ; 00499ce7
    PUSH EBP                            ; 00499cea
    ADD EDI,0xc                         ; 00499ceb
    INC EBX                             ; 00499cee
    CALL FUN_005b8100                   ; 00499cef
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x14                        ; 00499cf4
    CMP EBX,0x3                         ; 00499cf7
    JL 0x00499cd6                       ; 00499cfa
        ;   XREF to: 00499cd6 (CONDITIONAL_JUMP)  ; LAB_00499cd6
    MOV EAX,dword ptr [ESP + 0x18]      ; 00499cfc
    ADD EAX,0x48                        ; 00499d00
    PUSH EAX                            ; 00499d03
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00499d04
    ADD EAX,0x44                        ; 00499d08
    PUSH EAX                            ; 00499d0b
    MOV EAX,dword ptr [ESP + 0x20]      ; 00499d0c
    ADD EAX,0x40                        ; 00499d10
    PUSH EAX                            ; 00499d13
    PUSH 0x5d55df                       ; 00499d14 | = "%f,%f,%f\n"
    PUSH EBP                            ; 00499d19
    CALL FUN_005b8100                   ; 00499d1a
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x14                        ; 00499d1f
    MOV EAX,dword ptr [ESP + 0x18]      ; 00499d22
    ADD EAX,0x54                        ; 00499d26
    PUSH EAX                            ; 00499d29
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00499d2a
    ADD EAX,0x50                        ; 00499d2e
    PUSH EAX                            ; 00499d31
    MOV EAX,dword ptr [ESP + 0x20]      ; 00499d32
    ADD EAX,0x4c                        ; 00499d36
    PUSH EAX                            ; 00499d39
    PUSH 0x5d55e9                       ; 00499d3a | = "%f,%f,%f\n"
    PUSH EBP                            ; 00499d3f
    CALL FUN_005b8100                   ; 00499d40
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x14                        ; 00499d45
    MOV EAX,dword ptr [ESP + 0x18]      ; 00499d48
    ADD EAX,0x60                        ; 00499d4c
    PUSH EAX                            ; 00499d4f
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00499d50
    ADD EAX,0x5c                        ; 00499d54
    PUSH EAX                            ; 00499d57
    MOV EAX,dword ptr [ESP + 0x20]      ; 00499d58
    ADD EAX,0x58                        ; 00499d5c
    PUSH EAX                            ; 00499d5f
    PUSH 0x5d55f3                       ; 00499d60 | = "%f,%f,%f\n"
    PUSH EBP                            ; 00499d65
    CALL FUN_005b8100                   ; 00499d66
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x14                        ; 00499d6b
    MOV EAX,dword ptr [ESP + 0x18]      ; 00499d6e
    ADD EAX,0x6c                        ; 00499d72
    PUSH EAX                            ; 00499d75
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00499d76
    ADD EAX,0x68                        ; 00499d7a
    PUSH EAX                            ; 00499d7d
    MOV EAX,dword ptr [ESP + 0x20]      ; 00499d7e
    ADD EAX,0x64                        ; 00499d82
    PUSH EAX                            ; 00499d85
    PUSH 0x5d55fd                       ; 00499d86 | = "%f,%f,%f\n"
    PUSH EBP                            ; 00499d8b
    CALL FUN_005b8100                   ; 00499d8c
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x14                        ; 00499d91
    ADD ESP,0x4                         ; 00499d94
    POP EBP                             ; 00499d97
    POP EDI                             ; 00499d98
    POP ESI                             ; 00499d99
    POP EBX                             ; 00499d9a
    RET                                 ; 00499d9b

