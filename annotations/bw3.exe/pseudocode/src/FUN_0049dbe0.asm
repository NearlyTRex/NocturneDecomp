; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049dbe0(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004a4030 at 004a408f
;
; Referenced Globals:
;   TerminatedCString s_d_d_f_f_005c0784
;   TerminatedCString s_f_f_f_005c0791
;   TerminatedCString s_f_f_f_005c079b
;   TerminatedCString s_f_f_f_005c07a5
;   TerminatedCString s_f_f_f_005c07af
;   TerminatedCString s_f_f_f_005c07b9
;   TerminatedCString s_f_f_f_005c07c3
;
; Called Functions:
;   FUN_005a3230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049dbe0
        ;   Label: FUN_0049dbe0
    PUSH ESI                            ; 0049dbe1
    PUSH EDI                            ; 0049dbe2
    PUSH EBP                            ; 0049dbe3
    SUB ESP,0x4                         ; 0049dbe4
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0049dbe7
    MOV EAX,dword ptr [ESP + 0x18]      ; 0049dbeb
    ADD EAX,0x18                        ; 0049dbef
    PUSH EAX                            ; 0049dbf2
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0049dbf3
    ADD EAX,0x8                         ; 0049dbf7
    PUSH EAX                            ; 0049dbfa
    MOV EAX,dword ptr [ESP + 0x20]      ; 0049dbfb
    ADD EAX,0x4                         ; 0049dbff
    PUSH EAX                            ; 0049dc02
    MOV EDX,dword ptr [ESP + 0x24]      ; 0049dc03
    PUSH EDX                            ; 0049dc07
    PUSH 0x5c0784                       ; 0049dc08 | = "%d,%d,%f,%f\n"
    PUSH EBP                            ; 0049dc0d
    CALL FUN_005a3230                   ; 0049dc0e
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x18                        ; 0049dc13
    MOV EAX,dword ptr [ESP + 0x18]      ; 0049dc16
    ADD EAX,0x14                        ; 0049dc1a
    PUSH EAX                            ; 0049dc1d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0049dc1e
    ADD EAX,0x10                        ; 0049dc22
    PUSH EAX                            ; 0049dc25
    MOV EAX,dword ptr [ESP + 0x20]      ; 0049dc26
    ADD EAX,0xc                         ; 0049dc2a
    PUSH EAX                            ; 0049dc2d
    PUSH 0x5c0791                       ; 0049dc2e | = "%f,%f,%f\n"
    PUSH EBP                            ; 0049dc33
    CALL FUN_005a3230                   ; 0049dc34
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x14                        ; 0049dc39
    XOR EBX,EBX                         ; 0049dc3c
    MOV EAX,dword ptr [ESP + 0x18]      ; 0049dc3e
    MOV EDI,dword ptr [ESP + 0x18]      ; 0049dc42
    MOV ESI,dword ptr [ESP + 0x18]      ; 0049dc46
    ADD EAX,0x1c                        ; 0049dc4a
    ADD EDI,0x20                        ; 0049dc4d
    ADD ESI,0x24                        ; 0049dc50
    MOV dword ptr [ESP],EAX             ; 0049dc53
    IMUL EAX,EBX,0xc                    ; 0049dc56
        ;   Label: LAB_0049dc56
    PUSH ESI                            ; 0049dc59
    MOV ECX,dword ptr [ESP + 0x4]       ; 0049dc5a
    PUSH EDI                            ; 0049dc5e
    ADD EAX,ECX                         ; 0049dc5f
    PUSH EAX                            ; 0049dc61
    PUSH 0x5c079b                       ; 0049dc62 | = "%f,%f,%f\n"
    ADD ESI,0xc                         ; 0049dc67
    PUSH EBP                            ; 0049dc6a
    ADD EDI,0xc                         ; 0049dc6b
    INC EBX                             ; 0049dc6e
    CALL FUN_005a3230                   ; 0049dc6f
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x14                        ; 0049dc74
    CMP EBX,0x3                         ; 0049dc77
    JL 0x0049dc56                       ; 0049dc7a
        ;   XREF to: 0049dc56 (CONDITIONAL_JUMP)  ; LAB_0049dc56
    MOV EAX,dword ptr [ESP + 0x18]      ; 0049dc7c
    ADD EAX,0x48                        ; 0049dc80
    PUSH EAX                            ; 0049dc83
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0049dc84
    ADD EAX,0x44                        ; 0049dc88
    PUSH EAX                            ; 0049dc8b
    MOV EAX,dword ptr [ESP + 0x20]      ; 0049dc8c
    ADD EAX,0x40                        ; 0049dc90
    PUSH EAX                            ; 0049dc93
    PUSH 0x5c07a5                       ; 0049dc94 | = "%f,%f,%f\n"
    PUSH EBP                            ; 0049dc99
    CALL FUN_005a3230                   ; 0049dc9a
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x14                        ; 0049dc9f
    MOV EAX,dword ptr [ESP + 0x18]      ; 0049dca2
    ADD EAX,0x54                        ; 0049dca6
    PUSH EAX                            ; 0049dca9
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0049dcaa
    ADD EAX,0x50                        ; 0049dcae
    PUSH EAX                            ; 0049dcb1
    MOV EAX,dword ptr [ESP + 0x20]      ; 0049dcb2
    ADD EAX,0x4c                        ; 0049dcb6
    PUSH EAX                            ; 0049dcb9
    PUSH 0x5c07af                       ; 0049dcba | = "%f,%f,%f\n"
    PUSH EBP                            ; 0049dcbf
    CALL FUN_005a3230                   ; 0049dcc0
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x14                        ; 0049dcc5
    MOV EAX,dword ptr [ESP + 0x18]      ; 0049dcc8
    ADD EAX,0x60                        ; 0049dccc
    PUSH EAX                            ; 0049dccf
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0049dcd0
    ADD EAX,0x5c                        ; 0049dcd4
    PUSH EAX                            ; 0049dcd7
    MOV EAX,dword ptr [ESP + 0x20]      ; 0049dcd8
    ADD EAX,0x58                        ; 0049dcdc
    PUSH EAX                            ; 0049dcdf
    PUSH 0x5c07b9                       ; 0049dce0 | = "%f,%f,%f\n"
    PUSH EBP                            ; 0049dce5
    CALL FUN_005a3230                   ; 0049dce6
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x14                        ; 0049dceb
    MOV EAX,dword ptr [ESP + 0x18]      ; 0049dcee
    ADD EAX,0x6c                        ; 0049dcf2
    PUSH EAX                            ; 0049dcf5
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0049dcf6
    ADD EAX,0x68                        ; 0049dcfa
    PUSH EAX                            ; 0049dcfd
    MOV EAX,dword ptr [ESP + 0x20]      ; 0049dcfe
    ADD EAX,0x64                        ; 0049dd02
    PUSH EAX                            ; 0049dd05
    PUSH 0x5c07c3                       ; 0049dd06 | = "%f,%f,%f\n"
    PUSH EBP                            ; 0049dd0b
    CALL FUN_005a3230                   ; 0049dd0c
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x14                        ; 0049dd11
    ADD ESP,0x4                         ; 0049dd14
    POP EBP                             ; 0049dd17
    POP EDI                             ; 0049dd18
    POP ESI                             ; 0049dd19
    POP EBX                             ; 0049dd1a
    RET                                 ; 0049dd1b

