; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a6d80(int param_1)
;
; Local Variables:
; undefined8       Stack[-0x3b4]:8  local_3b4
; undefined        Stack[-0x3a8]:1  local_3a8
; undefined        Stack[-0x2e0]:1  local_2e0
; undefined        Stack[-0x218]:1  local_218
; undefined        Stack[-0x150]:1  local_150
; undefined        Stack[-0xec]:1  local_ec
; undefined        Stack[-0x88]:1  local_88
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004ce580 at 004cee93
;
; Referenced Globals:
;   TerminatedCString s_Game_Flag_s_005de19f
;   TerminatedCString s_Persistent_s_005de1ad
;   TerminatedCString s_Timer_5_2f_s_005de1bc
;   TerminatedCString s_s_d_005de1cc
;   TerminatedCString s_s_s_005de1d2
;   TerminatedCString s_s_s_1f_005de1d8
;
; Called Functions:
;   FUN_00401fe0
;   FUN_004aa400
;   FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a6d80
        ;   Label: FUN_004a6d80
    PUSH ESI                            ; 004a6d81
    PUSH EDI                            ; 004a6d82
    PUSH EBP                            ; 004a6d83
    SUB ESP,0x398                       ; 004a6d84
    MOV ESI,dword ptr [ESP + 0x3ac]     ; 004a6d8a
    MOV EBX,0x2c                        ; 004a6d91
    MOV EDX,dword ptr [ESI + 0x1908]    ; 004a6d96
    XOR EDI,EDI                         ; 004a6d9c
    TEST EDX,EDX                        ; 004a6d9e
    JLE 0x004a6df0                      ; 004a6da0
        ;   XREF to: 004a6df0 (CONDITIONAL_JUMP)  ; LAB_004a6df0
    LEA EBP,[ESI + 0x190c]              ; 004a6da2
    PUSH EBP                            ; 004a6da8
        ;   Label: LAB_004a6da8
    PUSH 0x5de19f                       ; 004a6da9 | = "Game Flag: %s"
    LEA EAX,[ESP + 0x198]               ; 004a6dae
    PUSH EAX                            ; 004a6db5
    CALL FUN_005bfb40                   ; 004a6db6
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0xc                         ; 004a6dbb
    PUSH EBX                            ; 004a6dbe
    PUSH 0x0                            ; 004a6dbf
    LEA EAX,[ESP + 0x198]               ; 004a6dc1
    INC EDI                             ; 004a6dc8
    PUSH EAX                            ; 004a6dc9
    ADD EBP,0x20                        ; 004a6dca
    ADD EBX,0xb                         ; 004a6dcd
    CALL FUN_00401fe0                   ; 004a6dd0
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    MOV ECX,dword ptr [ESI + 0x1908]    ; 004a6dd5
    ADD ESP,0xc                         ; 004a6ddb
    CMP EDI,ECX                         ; 004a6dde
    JL 0x004a6da8                       ; 004a6de0
        ;   XREF to: 004a6da8 (CONDITIONAL_JUMP)  ; LAB_004a6da8
    LEA EAX,[EAX]                       ; 004a6de2
    LEA EDX,[EDX]                       ; 004a6de8
    MOV EAX,EAX                         ; 004a6dee
    MOV EDI,dword ptr [ESI + 0x258c]    ; 004a6df0
        ;   Label: LAB_004a6df0
    XOR EBP,EBP                         ; 004a6df6
    TEST EDI,EDI                        ; 004a6df8
    JLE 0x004a6e40                      ; 004a6dfa
        ;   XREF to: 004a6e40 (CONDITIONAL_JUMP)  ; LAB_004a6e40
    LEA EDI,[ESI + 0x2590]              ; 004a6dfc
    PUSH EDI                            ; 004a6e02
        ;   Label: LAB_004a6e02
    PUSH 0x5de1ad                       ; 004a6e03 | = "Persistent: %s"
    LEA EAX,[ESP + 0x8]                 ; 004a6e08
    PUSH EAX                            ; 004a6e0c
    CALL FUN_005bfb40                   ; 004a6e0d
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0xc                         ; 004a6e12
    PUSH EBX                            ; 004a6e15
    PUSH 0x0                            ; 004a6e16
    LEA EAX,[ESP + 0x8]                 ; 004a6e18
    INC EBP                             ; 004a6e1c
    PUSH EAX                            ; 004a6e1d
    ADD EDI,0x20                        ; 004a6e1e
    ADD EBX,0xb                         ; 004a6e21
    CALL FUN_00401fe0                   ; 004a6e24
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    MOV EAX,dword ptr [ESI + 0x258c]    ; 004a6e29
    ADD ESP,0xc                         ; 004a6e2f
    CMP EBP,EAX                         ; 004a6e32
    JL 0x004a6e02                       ; 004a6e34
        ;   XREF to: 004a6e02 (CONDITIONAL_JUMP)  ; LAB_004a6e02
    LEA EAX,[EAX]                       ; 004a6e36
    LEA EDX,[EDX]                       ; 004a6e3c
    MOV EDX,dword ptr [ESI + 0x3210]    ; 004a6e40
        ;   Label: LAB_004a6e40
    XOR EDI,EDI                         ; 004a6e46
    TEST EDX,EDX                        ; 004a6e48
    JLE 0x004a6ec0                      ; 004a6e4a
        ;   XREF to: 004a6ec0 (CONDITIONAL_JUMP)  ; LAB_004a6ec0
    LEA EBP,[ESI + 0x3214]              ; 004a6e50
    MOV dword ptr [ESP + 0x384],ESI     ; 004a6e56
    PUSH EBP                            ; 004a6e5d
        ;   Label: LAB_004a6e5d
    MOV EAX,dword ptr [ESP + 0x388]     ; 004a6e5e
    SUB ESP,0x8                         ; 004a6e65
    FLD float ptr [EAX + 0x3354]        ; 004a6e68
    FSTP double ptr [ESP]               ; 004a6e6e
    PUSH 0x5de1bc                       ; 004a6e71 | = "Timer: %5.2f %s"
    LEA EAX,[ESP + 0xd8]                ; 004a6e76
    PUSH EAX                            ; 004a6e7d
    CALL FUN_005bfb40                   ; 004a6e7e
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x14                        ; 004a6e83
    PUSH EBX                            ; 004a6e86
    PUSH 0x0                            ; 004a6e87
    LEA EAX,[ESP + 0xd0]                ; 004a6e89
    PUSH EAX                            ; 004a6e90
    INC EDI                             ; 004a6e91
    CALL FUN_00401fe0                   ; 004a6e92
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 004a6e97
    ADD EBP,0x20                        ; 004a6e9a
    MOV ECX,dword ptr [ESP + 0x384]     ; 004a6e9d
    ADD EBX,0xb                         ; 004a6ea4
    ADD ECX,0x4                         ; 004a6ea7
    MOV EAX,dword ptr [ESI + 0x3210]    ; 004a6eaa
    MOV dword ptr [ESP + 0x384],ECX     ; 004a6eb0
    CMP EDI,EAX                         ; 004a6eb7
    JL 0x004a6e5d                       ; 004a6eb9
        ;   XREF to: 004a6e5d (CONDITIONAL_JUMP)  ; LAB_004a6e5d
    LEA EAX,[EAX]                       ; 004a6ebb
    MOV ECX,ECX                         ; 004a6ebe
    MOV EDX,dword ptr [ESI + 0xc84]     ; 004a6ec0
        ;   Label: LAB_004a6ec0
    XOR EBP,EBP                         ; 004a6ec6
    TEST EDX,EDX                        ; 004a6ec8
    JLE 0x004a6ef0                      ; 004a6eca
        ;   XREF to: 004a6ef0 (CONDITIONAL_JUMP)  ; LAB_004a6ef0
    LEA EDI,[ESI + 0xc88]               ; 004a6ecc
    PUSH EBX                            ; 004a6ed2
        ;   Label: LAB_004a6ed2
    PUSH 0x0                            ; 004a6ed3
    PUSH EDI                            ; 004a6ed5
    INC EBP                             ; 004a6ed6
    ADD EBX,0xb                         ; 004a6ed7
    CALL FUN_00401fe0                   ; 004a6eda
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 004a6edf
    MOV ECX,dword ptr [ESI + 0xc84]     ; 004a6ee2
    ADD EDI,0x20                        ; 004a6ee8
    CMP EBP,ECX                         ; 004a6eeb
    JL 0x004a6ed2                       ; 004a6eed
        ;   XREF to: 004a6ed2 (CONDITIONAL_JUMP)  ; LAB_004a6ed2
    NOP                                 ; 004a6eef
    MOV EDI,dword ptr [ESI + 0x337c]    ; 004a6ef0
        ;   Label: LAB_004a6ef0
    XOR EBP,EBP                         ; 004a6ef6
    TEST EDI,EDI                        ; 004a6ef8
    JLE 0x004a6f70                      ; 004a6efa
        ;   XREF to: 004a6f70 (CONDITIONAL_JUMP)  ; LAB_004a6f70
    LEA EAX,[ESI + 0x3380]              ; 004a6efc
    MOV dword ptr [ESP + 0x38c],EAX     ; 004a6f02
    MOV EDI,ESI                         ; 004a6f09
    MOV EAX,dword ptr [EDI + 0x34c0]    ; 004a6f0b
        ;   Label: LAB_004a6f0b
    PUSH EAX                            ; 004a6f11
    MOV EDX,dword ptr [ESP + 0x390]     ; 004a6f12
    PUSH EDX                            ; 004a6f19
    PUSH 0x5de1cc                       ; 004a6f1a | = "%s=%d"
    LEA EAX,[ESP + 0x32c]               ; 004a6f1f
    PUSH EAX                            ; 004a6f26
    CALL FUN_005bfb40                   ; 004a6f27
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 004a6f2c
    PUSH EBX                            ; 004a6f2f
    PUSH 0x0                            ; 004a6f30
    LEA EAX,[ESP + 0x328]               ; 004a6f32
    PUSH EAX                            ; 004a6f39
    ADD EDI,0x4                         ; 004a6f3a
    CALL FUN_00401fe0                   ; 004a6f3d
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 004a6f42
    INC EBP                             ; 004a6f45
    MOV ECX,dword ptr [ESP + 0x38c]     ; 004a6f46
    ADD EBX,0xb                         ; 004a6f4d
    ADD ECX,0x20                        ; 004a6f50
    MOV EAX,dword ptr [ESI + 0x337c]    ; 004a6f53
    MOV dword ptr [ESP + 0x38c],ECX     ; 004a6f59
    CMP EBP,EAX                         ; 004a6f60
    JL 0x004a6f0b                       ; 004a6f62
        ;   XREF to: 004a6f0b (CONDITIONAL_JUMP)  ; LAB_004a6f0b
    LEA EAX,[EAX]                       ; 004a6f64
    LEA EDX,[EDX]                       ; 004a6f6a
    MOV EDX,dword ptr [ESI + 0x34e8]    ; 004a6f70
        ;   Label: LAB_004a6f70
    XOR EBP,EBP                         ; 004a6f76
    TEST EDX,EDX                        ; 004a6f78
    JLE 0x004a6ff0                      ; 004a6f7a
        ;   XREF to: 004a6ff0 (CONDITIONAL_JUMP)  ; LAB_004a6ff0
    LEA EDI,[ESI + 0x37da]              ; 004a6f7c
    LEA EAX,[ESI + 0x34ec]              ; 004a6f82
    MOV dword ptr [ESP + 0x390],EAX     ; 004a6f88
    PUSH EDI                            ; 004a6f8f
        ;   Label: LAB_004a6f8f
    MOV ECX,dword ptr [ESP + 0x394]     ; 004a6f90
    PUSH ECX                            ; 004a6f97
    PUSH 0x5de1d2                       ; 004a6f98 | = "%s=%s"
    LEA EAX,[ESP + 0x2c8]               ; 004a6f9d
    PUSH EAX                            ; 004a6fa4
    CALL FUN_005bfb40                   ; 004a6fa5
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 004a6faa
    PUSH EBX                            ; 004a6fad
    PUSH 0x0                            ; 004a6fae
    LEA EAX,[ESP + 0x2c4]               ; 004a6fb0
    PUSH EAX                            ; 004a6fb7
    INC EBP                             ; 004a6fb8
    CALL FUN_00401fe0                   ; 004a6fb9
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 004a6fbe
    ADD EDI,0x1e                        ; 004a6fc1
    MOV EAX,dword ptr [ESP + 0x390]     ; 004a6fc4
    ADD EBX,0xb                         ; 004a6fcb
    ADD EAX,0x1e                        ; 004a6fce
    MOV EDX,dword ptr [ESI + 0x34e8]    ; 004a6fd1
    MOV dword ptr [ESP + 0x390],EAX     ; 004a6fd7
    CMP EBP,EDX                         ; 004a6fde
    JL 0x004a6f8f                       ; 004a6fe0
        ;   XREF to: 004a6f8f (CONDITIONAL_JUMP)  ; LAB_004a6f8f
    LEA EAX,[EAX]                       ; 004a6fe2
    LEA EDX,[EDX]                       ; 004a6fe8
    MOV EAX,EAX                         ; 004a6fee
    PUSH ESI                            ; 004a6ff0
        ;   Label: LAB_004a6ff0
    CALL FUN_004aa400                   ; 004a6ff1
        ;   XREF to: 004aa400 (UNCONDITIONAL_CALL)  ; undefined FUN_004aa400()
    ADD ESP,0x4                         ; 004a6ff6
    XOR ECX,ECX                         ; 004a6ff9
    MOV EDI,dword ptr [ESI + 0x3ac8]    ; 004a6ffb
    MOV dword ptr [ESP + 0x394],ECX     ; 004a7001
    TEST EDI,EDI                        ; 004a7008
    JLE 0x004a70a0                      ; 004a700a
        ;   XREF to: 004a70a0 (CONDITIONAL_JUMP)  ; LAB_004a70a0
    LEA EAX,[ESI + 0x3ad0]              ; 004a7010
    LEA EBP,[ESI + 0x3ae4]              ; 004a7016
    MOV dword ptr [ESP + 0x388],EAX     ; 004a701c
    MOV EDI,ESI                         ; 004a7023
    MOV EAX,dword ptr [EDI + 0x3be8]    ; 004a7025
        ;   Label: LAB_004a7025
    PUSH EAX                            ; 004a702b
    MOV EDX,dword ptr [EDI + 0x3be4]    ; 004a702c
    PUSH EDX                            ; 004a7032
    PUSH EBP                            ; 004a7033
    MOV ECX,dword ptr [ESP + 0x394]     ; 004a7034
    PUSH ECX                            ; 004a703b
    PUSH 0x5de1d8                       ; 004a703c | = "%s=%s %.1f"
    LEA EAX,[ESP + 0x26c]               ; 004a7041
    PUSH EAX                            ; 004a7048
    CALL FUN_005bfb40                   ; 004a7049
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x18                        ; 004a704e
    PUSH EBX                            ; 004a7051
    PUSH 0x0                            ; 004a7052
    LEA EAX,[ESP + 0x260]               ; 004a7054
    ADD EDI,0x120                       ; 004a705b
    PUSH EAX                            ; 004a7061
    ADD EBP,0x120                       ; 004a7062
    ADD EBX,0xb                         ; 004a7068
    CALL FUN_00401fe0                   ; 004a706b
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 004a7070
    MOV ECX,dword ptr [ESI + 0x3ac8]    ; 004a7073
    MOV EAX,dword ptr [ESP + 0x388]     ; 004a7079
    MOV EDX,dword ptr [ESP + 0x394]     ; 004a7080
    ADD EAX,0x120                       ; 004a7087
    INC EDX                             ; 004a708c
    MOV dword ptr [ESP + 0x388],EAX     ; 004a708d
    MOV dword ptr [ESP + 0x394],EDX     ; 004a7094
    CMP EDX,ECX                         ; 004a709b
    JL 0x004a7025                       ; 004a709d
        ;   XREF to: 004a7025 (CONDITIONAL_JUMP)  ; LAB_004a7025
    NOP                                 ; 004a709f
    ADD ESP,0x398                       ; 004a70a0
        ;   Label: LAB_004a70a0
    POP EBP                             ; 004a70a6
    POP EDI                             ; 004a70a7
    POP ESI                             ; 004a70a8
    POP EBX                             ; 004a70a9
    RET                                 ; 004a70aa

