; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00597970(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d9691
;   undefined4 DAT_005d9699
;   undefined4 DAT_005d96a1
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01d8e40c
;
; Called Functions:
;   FUN_004087f0
;   FUN_00408830
;   FUN_0041daf0
;   FUN_0046d4b0
;   FUN_0046d4c0
;   FUN_0046e120
;   FUN_0046e4e0
;   FUN_004fcdc0
;   FUN_0054e3a0
;   FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00597970
        ;   Label: FUN_00597970
    PUSH ESI                            ; 00597971
    PUSH EDI                            ; 00597972
    PUSH EBP                            ; 00597973
    SUB ESP,0x44                        ; 00597974
    MOV EBX,dword ptr [ESP + 0x58]      ; 00597977
    FILD dword ptr [EBX + 0xd070]       ; 0059797b
    FLD double ptr [0x005d9691]         ; 00597981 | DAT_005d9691
    FSUB ST0,ST1                        ; 00597987
    FXCH                                ; 00597989
    FLD double ptr [0x005d9699]         ; 0059798b | DAT_005d9699
    FXCH                                ; 00597991
    FMUL ST1                            ; 00597993
    FXCH ST2                            ; 00597995
    FMULP                               ; 00597997
    FXCH                                ; 00597999
    FLD double ptr [0x005d96a1]         ; 0059799b | DAT_005d96a1
    FXCH                                ; 005979a1
    FMUL ST1                            ; 005979a3
    FXCH ST2                            ; 005979a5
    FMULP                               ; 005979a7
    MOV EDX,dword ptr [EBX + 0xd068]    ; 005979a9
    FXCH                                ; 005979af
    FSTP float ptr [ESP + 0x40]         ; 005979b1
    FSTP float ptr [ESP + 0x3c]         ; 005979b5
    TEST EDX,EDX                        ; 005979b9
    JNZ 0x00597a3e                      ; 005979bb
        ;   XREF to: 00597a3e (CONDITIONAL_JUMP)  ; LAB_00597a3e
    FLD float ptr [ESP + 0x40]          ; 005979c1
    FMUL float ptr [EBX + 0xd064]       ; 005979c5
    FDIV float ptr [EBX + 0xd06c]       ; 005979cb
    MOV EAX,0x10000                     ; 005979d1
    CALL FUN_005a3120                   ; 005979d6
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x38]        ; 005979db
    MOV ECX,dword ptr [ESP + 0x38]      ; 005979df
    SUB EAX,ECX                         ; 005979e3
    MOV dword ptr [EBX + 0xd060],EAX    ; 005979e5
    PUSH EBX                            ; 005979eb
        ;   Label: LAB_005979eb
    CALL FUN_004087f0                   ; 005979ec
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 005979f1
    PUSH 0x0                            ; 005979f4
    MOV EAX,dword ptr [EBX + 0x154]     ; 005979f6
    PUSH EBX                            ; 005979fc
    LEA ESI,[ESP + 0x20]                ; 005979fd
    LEA EDI,[ESP + 0x8]                 ; 00597a01
    CALL dword ptr [EAX + 0x1c]         ; 00597a05
    MOV ECX,0x6                         ; 00597a08
    ADD ESP,0x4                         ; 00597a0d
    LEA EAX,[ESP + 0x4]                 ; 00597a10
    LEA ESI,[ESP + 0x1c]                ; 00597a14
    PUSH EAX                            ; 00597a18
    MOVSD.REP ES:EDI,ESI                ; 00597a19
    CALL FUN_0041daf0                   ; 00597a1b
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041daf0()
    ADD ESP,0x8                         ; 00597a20
    TEST EAX,EAX                        ; 00597a23
    JNZ 0x00597a5f                      ; 00597a25
        ;   XREF to: 00597a5f (CONDITIONAL_JUMP)  ; LAB_00597a5f
    PUSH EBX                            ; 00597a27
        ;   Label: LAB_00597a27
    CALL FUN_00408830                   ; 00597a28
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    ADD ESP,0x4                         ; 00597a2d
    MOV EAX,dword ptr [EBX + 0x27bc]    ; 00597a30
    ADD ESP,0x44                        ; 00597a36
    POP EBP                             ; 00597a39
    POP EDI                             ; 00597a3a
    POP ESI                             ; 00597a3b
    POP EBX                             ; 00597a3c
    RET                                 ; 00597a3d
    FLD float ptr [ESP + 0x40]          ; 00597a3e
        ;   Label: LAB_00597a3e
    FMUL float ptr [EBX + 0xd064]       ; 00597a42
    FDIV float ptr [EBX + 0xd06c]       ; 00597a48
    FADD float ptr [ESP + 0x3c]         ; 00597a4e
    CALL FUN_005a3120                   ; 00597a52
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [EBX + 0xd060]      ; 00597a57
    JMP 0x005979eb                      ; 00597a5d
        ;   XREF to: 005979eb (UNCONDITIONAL_JUMP)  ; LAB_005979eb
    MOV ESI,dword ptr [EBX + 0xd060]    ; 00597a5f
        ;   Label: LAB_00597a5f
    PUSH ESI                            ; 00597a65
    MOV EDI,dword ptr [0x005f2afc]      ; 00597a66 | DAT_005f2afc
    PUSH EDI                            ; 00597a6c | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x27bc],0x1    ; 00597a6d
    CALL FUN_0046d4c0                   ; 00597a77
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d4c0()
    ADD ESP,0x8                         ; 00597a7c
    PUSH 0x0                            ; 00597a7f
    MOV EBP,dword ptr [0x005f2afc]      ; 00597a81 | DAT_005f2afc
    PUSH EBP                            ; 00597a87 | DAT_01bdd7e4
    CALL FUN_0046d4b0                   ; 00597a88
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d4b0()
    ADD ESP,0x8                         ; 00597a8d
    PUSH 0x1                            ; 00597a90
    MOV EAX,[0x005f2afc]                ; 00597a92 | DAT_005f2afc
    PUSH EAX                            ; 00597a97 | DAT_01bdd7e4
    CALL FUN_0046e120                   ; 00597a98
        ;   XREF to: 0046e120 (UNCONDITIONAL_CALL)  ; undefined FUN_0046e120()
    ADD ESP,0x8                         ; 00597a9d
    PUSH 0x0                            ; 00597aa0
    PUSH 0x1                            ; 00597aa2
    PUSH 0x2e7                          ; 00597aa4
    PUSH -0x1                           ; 00597aa9
    LEA ESI,[EBX + 0x158]               ; 00597aab
    PUSH ESI                            ; 00597ab1
    CALL FUN_0054e3a0                   ; 00597ab2
        ;   XREF to: 0054e3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e3a0()
    ADD ESP,0x14                        ; 00597ab7
    MOV EDX,dword ptr [0x005f2afc]      ; 00597aba | DAT_005f2afc
    PUSH EDX                            ; 00597ac0 | DAT_01bdd7e4
    CALL FUN_0046e4e0                   ; 00597ac1
        ;   XREF to: 0046e4e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046e4e0()
    MOV ECX,dword ptr [0x01d8e40c]      ; 00597ac6 | DAT_01d8e40c
    ADD ESP,0x4                         ; 00597acc
    TEST ECX,ECX                        ; 00597acf
    JZ 0x00597a27                       ; 00597ad1
        ;   XREF to: 00597a27 (CONDITIONAL_JUMP)  ; LAB_00597a27
    PUSH EBX                            ; 00597ad7
    PUSH ESI                            ; 00597ad8
    CALL FUN_004fcdc0                   ; 00597ad9
        ;   XREF to: 004fcdc0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fcdc0()
    ADD ESP,0x8                         ; 00597ade
    JMP 0x00597a27                      ; 00597ae1
        ;   XREF to: 00597a27 (UNCONDITIONAL_JUMP)  ; LAB_00597a27

