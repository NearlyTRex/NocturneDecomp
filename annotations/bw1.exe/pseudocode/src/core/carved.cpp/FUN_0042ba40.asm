; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_carved_cpp_FUN_0042ba40(int param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_0042ba28 = 0042bace
;   undefined4 DAT_005d568d
;   undefined4 DAT_005d5695
;   undefined4 DAT_005d569d
;
; Called Functions:
;   core_skeleton.cpp_FUN_00569130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042ba40
        ;   Label: core_carved.cpp_FUN_0042ba40
    PUSH ESI                            ; 0042ba41
    PUSH EDI                            ; 0042ba42
    PUSH EBP                            ; 0042ba43
    MOV EBP,ESP                         ; 0042ba44
    SUB ESP,0x90                        ; 0042ba46
    AND ESP,0xfffffff8                  ; 0042ba4c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042ba4f
    MOV EDX,dword ptr [EBX + 0xc2b0]    ; 0042ba52
    PUSH EDX                            ; 0042ba58
    LEA EAX,[EBX + 0x158]               ; 0042ba59
    PUSH EAX                            ; 0042ba5f
    LEA ESI,[ESP + 0x20]                ; 0042ba60
    LEA EDI,[ESP + 0x2c]                ; 0042ba64
    CALL core_skeleton.cpp_FUN_00569130 ; 0042ba68
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x20]                ; 0042ba6d
    ADD ESP,0x8                         ; 0042ba71
    LEA EAX,[ESP + 0x24]                ; 0042ba74
    MOV ECX,dword ptr [EBP + 0x18]      ; 0042ba78
    MOVSD ES:EDI,ESI                    ; 0042ba7b
    MOVSD ES:EDI,ESI                    ; 0042ba7c
    MOVSD ES:EDI,ESI                    ; 0042ba7d
    CMP EAX,ECX                         ; 0042ba7e
    JNZ 0x0042bbb8                      ; 0042ba80
        ;   XREF to: 0042bbb8 (CONDITIONAL_JUMP)  ; LAB_0042bbb8
    MOV ESI,0x1                         ; 0042ba86
        ;   Label: LAB_0042ba86
    XOR EDI,EDI                         ; 0042ba8b
    LEA EAX,[EBX + 0x158]               ; 0042ba8d
    MOV dword ptr [ESP + 0x84],EDI      ; 0042ba93
    MOV dword ptr [ESP + 0x88],EAX      ; 0042ba9a
    MOV dword ptr [ESP + 0x8c],ESI      ; 0042baa1
    MOV EDX,dword ptr [ESP + 0x84]      ; 0042baa8
        ;   Label: LAB_0042baa8
    ADD EDX,dword ptr [EBX + 0x6c]      ; 0042baaf
    MOV ESI,0x4                         ; 0042bab2
    MOV EAX,EDX                         ; 0042bab7
    SAR EDX,0x1f                        ; 0042bab9
    IDIV ESI                            ; 0042babc
    CMP EDX,0x3                         ; 0042babe
    JA 0x0042bb92                       ; 0042bac1
        ;   XREF to: 0042bb92 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x42ba28]  ; 0042bac7 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xc2b8]    ; 0042bace
        ;   Label: caseD_0
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0042bad4
    JZ 0x0042bb92                       ; 0042badc
        ;   XREF to: 0042bb92 (CONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [EBX + 0xc2a0]    ; 0042bae2
    PUSH ECX                            ; 0042bae8
    MOV ESI,dword ptr [ESP + 0x8c]      ; 0042bae9
    PUSH ESI                            ; 0042baf0
    LEA ESI,[ESP + 0x74]                ; 0042baf1
    LEA EDI,[ESP + 0x68]                ; 0042baf5
    CALL core_skeleton.cpp_FUN_00569130 ; 0042baf9
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x74]                ; 0042bafe
    LEA EAX,[ESP + 0x68]                ; 0042bb02
    ADD ESP,0x8                         ; 0042bb06
    LEA EDX,[ESP + 0x30]                ; 0042bb09
    MOVSD ES:EDI,ESI                    ; 0042bb0d
    MOVSD ES:EDI,ESI                    ; 0042bb0e
    MOVSD ES:EDI,ESI                    ; 0042bb0f
    CMP EDX,EAX                         ; 0042bb10
    JZ 0x0042bb2c                       ; 0042bb12
        ;   XREF to: 0042bb2c (CONDITIONAL_JUMP)  ; LAB_0042bb2c
    MOV EAX,dword ptr [ESP + 0x60]      ; 0042bb14
    MOV dword ptr [ESP + 0x30],EAX      ; 0042bb18
    MOV EAX,dword ptr [ESP + 0x64]      ; 0042bb1c
    MOV dword ptr [ESP + 0x34],EAX      ; 0042bb20
    MOV EAX,dword ptr [ESP + 0x68]      ; 0042bb24
    MOV dword ptr [ESP + 0x38],EAX      ; 0042bb28
    IMUL EDX,dword ptr [ESP + 0x8c],0xc ; 0042bb2c
        ;   Label: LAB_0042bb2c
    FLD double ptr [0x005d568d]         ; 0042bb34 | DAT_005d568d
    FLD float ptr [ESP + 0x30]          ; 0042bb3a
    FMUL ST1                            ; 0042bb3e
    FLD float ptr [ESP + 0x34]          ; 0042bb40
    FMUL double ptr [0x005d5695]        ; 0042bb44 | DAT_005d5695
    FLD float ptr [ESP + 0x24]          ; 0042bb4a
    FMULP ST3                           ; 0042bb4e
    FLD float ptr [ESP + 0x28]          ; 0042bb50
    FMUL double ptr [0x005d569d]        ; 0042bb54 | DAT_005d569d
    MOV EAX,dword ptr [EBP + 0x18]      ; 0042bb5a
    FADDP                               ; 0042bb5d
    FXCH ST2                            ; 0042bb5f
    FADDP                               ; 0042bb61
    FXCH                                ; 0042bb63
    FSTP float ptr [ESP + 0x34]         ; 0042bb65
    ADD EDX,EAX                         ; 0042bb69
    LEA EAX,[ESP + 0x30]                ; 0042bb6b
    FSTP float ptr [ESP + 0x30]         ; 0042bb6f
        ;   Label: LAB_0042bb6f
    CMP EDX,EAX                         ; 0042bb73
    JZ 0x0042bb8b                       ; 0042bb75
        ;   XREF to: 0042bb8b (CONDITIONAL_JUMP)  ; LAB_0042bb8b
    MOV EAX,dword ptr [ESP + 0x30]      ; 0042bb77
    MOV dword ptr [EDX],EAX             ; 0042bb7b
    MOV EAX,dword ptr [ESP + 0x34]      ; 0042bb7d
    MOV dword ptr [EDX + 0x4],EAX       ; 0042bb81
    MOV EAX,dword ptr [ESP + 0x38]      ; 0042bb84
    MOV dword ptr [EDX + 0x8],EAX       ; 0042bb88
        ;   Label: LAB_0042bb88
    INC dword ptr [ESP + 0x8c]          ; 0042bb8b
        ;   Label: LAB_0042bb8b
    MOV ECX,dword ptr [ESP + 0x84]      ; 0042bb92
        ;   Label: default
    INC ECX                             ; 0042bb99
    MOV dword ptr [ESP + 0x84],ECX      ; 0042bb9a
    CMP ECX,0x4                         ; 0042bba1
    JL 0x0042baa8                       ; 0042bba4
        ;   XREF to: 0042baa8 (CONDITIONAL_JUMP)  ; LAB_0042baa8
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0042bbaa
    MOV ESP,EBP                         ; 0042bbb1
    POP EBP                             ; 0042bbb3
    POP EDI                             ; 0042bbb4
    POP ESI                             ; 0042bbb5
    POP EBX                             ; 0042bbb6
    RET                                 ; 0042bbb7
    MOV EAX,dword ptr [ESP + 0x24]      ; 0042bbb8
        ;   Label: LAB_0042bbb8
    MOV dword ptr [ECX],EAX             ; 0042bbbc
    MOV EAX,dword ptr [ESP + 0x28]      ; 0042bbbe
    MOV dword ptr [ECX + 0x4],EAX       ; 0042bbc2
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0042bbc5
    MOV dword ptr [ECX + 0x8],EAX       ; 0042bbc9
    JMP 0x0042ba86                      ; 0042bbcc
        ;   XREF to: 0042ba86 (UNCONDITIONAL_JUMP)  ; LAB_0042ba86
    MOV EAX,dword ptr [EBX + 0xc2c0]    ; 0042bbd1
        ;   Label: caseD_1
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0042bbd7
    JZ 0x0042bb92                       ; 0042bbdf
        ;   XREF to: 0042bb92 (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBX + 0xc2a4]    ; 0042bbe1
    PUSH EAX                            ; 0042bbe7
    MOV EDX,dword ptr [ESP + 0x8c]      ; 0042bbe8
    PUSH EDX                            ; 0042bbef
    LEA ESI,[ESP + 0x50]                ; 0042bbf0
    LEA EDI,[ESP + 0x14]                ; 0042bbf4
    CALL core_skeleton.cpp_FUN_00569130 ; 0042bbf8
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x50]                ; 0042bbfd
    LEA EAX,[ESP + 0x14]                ; 0042bc01
    ADD ESP,0x8                         ; 0042bc05
    LEA EDX,[ESP + 0x30]                ; 0042bc08
    MOVSD ES:EDI,ESI                    ; 0042bc0c
    MOVSD ES:EDI,ESI                    ; 0042bc0d
    MOVSD ES:EDI,ESI                    ; 0042bc0e
    CMP EDX,EAX                         ; 0042bc0f
    JZ 0x0042bc2b                       ; 0042bc11
        ;   XREF to: 0042bc2b (CONDITIONAL_JUMP)  ; LAB_0042bc2b
    MOV EAX,dword ptr [ESP + 0xc]       ; 0042bc13
    MOV dword ptr [ESP + 0x30],EAX      ; 0042bc17
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042bc1b
    MOV dword ptr [ESP + 0x34],EAX      ; 0042bc1f
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042bc23
    MOV dword ptr [ESP + 0x38],EAX      ; 0042bc27
    IMUL EDX,dword ptr [ESP + 0x8c],0xc ; 0042bc2b
        ;   Label: LAB_0042bc2b
    FLD double ptr [0x005d568d]         ; 0042bc33 | DAT_005d568d
    FLD float ptr [ESP + 0x30]          ; 0042bc39
    FMUL ST1                            ; 0042bc3d
    FLD float ptr [ESP + 0x34]          ; 0042bc3f
    FMUL double ptr [0x005d5695]        ; 0042bc43 | DAT_005d5695
    FLD float ptr [ESP + 0x24]          ; 0042bc49
    FMULP ST3                           ; 0042bc4d
    FLD float ptr [ESP + 0x28]          ; 0042bc4f
    FMUL double ptr [0x005d569d]        ; 0042bc53 | DAT_005d569d
    MOV ESI,dword ptr [EBP + 0x18]      ; 0042bc59
    LEA EAX,[ESP + 0x30]                ; 0042bc5c
    FADDP                               ; 0042bc60
    FXCH ST2                            ; 0042bc62
    FADDP                               ; 0042bc64
    FXCH                                ; 0042bc66
    FSTP float ptr [ESP + 0x34]         ; 0042bc68
    ADD EDX,ESI                         ; 0042bc6c
    JMP 0x0042bb6f                      ; 0042bc6e
        ;   XREF to: 0042bb6f (UNCONDITIONAL_JUMP)  ; LAB_0042bb6f
    MOV EAX,dword ptr [EBX + 0xc2d0]    ; 0042bc73
        ;   Label: caseD_2
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0042bc79
    JZ 0x0042bb92                       ; 0042bc81
        ;   XREF to: 0042bb92 (CONDITIONAL_JUMP)  ; default
    MOV ESI,dword ptr [EBX + 0xc28c]    ; 0042bc87
    PUSH ESI                            ; 0042bc8d
    MOV EDI,dword ptr [ESP + 0x8c]      ; 0042bc8e
    PUSH EDI                            ; 0042bc95
    LEA ESI,[ESP + 0x8]                 ; 0042bc96
    CALL core_skeleton.cpp_FUN_00569130 ; 0042bc9a
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    ADD ESP,0x8                         ; 0042bc9f
    IMUL EDX,dword ptr [ESP + 0x8c],0xc ; 0042bca2
    LEA EDI,[ESP + 0x78]                ; 0042bcaa
    MOV ESI,ESP                         ; 0042bcae
    MOV ECX,dword ptr [EBP + 0x18]      ; 0042bcb0
    LEA EAX,[ESP + 0x78]                ; 0042bcb3
    ADD EDX,ECX                         ; 0042bcb7
    MOVSD ES:EDI,ESI                    ; 0042bcb9
    MOVSD ES:EDI,ESI                    ; 0042bcba
    MOVSD ES:EDI,ESI                    ; 0042bcbb
    CMP EDX,EAX                         ; 0042bcbc
    JZ 0x0042bb8b                       ; 0042bcbe
        ;   XREF to: 0042bb8b (CONDITIONAL_JUMP)  ; LAB_0042bb8b
    MOV EAX,dword ptr [ESP + 0x78]      ; 0042bcc4
    MOV dword ptr [EDX],EAX             ; 0042bcc8
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0042bcca
    MOV dword ptr [EDX + 0x4],EAX       ; 0042bcce
    MOV EAX,dword ptr [ESP + 0x80]      ; 0042bcd1
    JMP 0x0042bb88                      ; 0042bcd8
        ;   XREF to: 0042bb88 (UNCONDITIONAL_JUMP)  ; LAB_0042bb88
    MOV EAX,dword ptr [EBX + 0xc2cc]    ; 0042bcdd
        ;   Label: caseD_3
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0042bce3
    JZ 0x0042bb92                       ; 0042bceb
        ;   XREF to: 0042bb92 (CONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [EBX + 0xc2b4]    ; 0042bcf1
    PUSH ECX                            ; 0042bcf7
    MOV ESI,dword ptr [ESP + 0x8c]      ; 0042bcf8
    PUSH ESI                            ; 0042bcff
    LEA ESI,[ESP + 0x44]                ; 0042bd00
    LEA EDI,[ESP + 0x5c]                ; 0042bd04
    CALL core_skeleton.cpp_FUN_00569130 ; 0042bd08
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x44]                ; 0042bd0d
    ADD ESP,0x8                         ; 0042bd11
    MOVSD ES:EDI,ESI                    ; 0042bd14
    MOVSD ES:EDI,ESI                    ; 0042bd15
    MOVSD ES:EDI,ESI                    ; 0042bd16
    IMUL EDX,dword ptr [ESP + 0x8c],0xc ; 0042bd17
    ADD EDX,dword ptr [EBP + 0x18]      ; 0042bd1f
    LEA EAX,[ESP + 0x54]                ; 0042bd22
    CMP EDX,EAX                         ; 0042bd26
    JZ 0x0042bb8b                       ; 0042bd28
        ;   XREF to: 0042bb8b (CONDITIONAL_JUMP)  ; LAB_0042bb8b
    MOV EAX,dword ptr [ESP + 0x54]      ; 0042bd2e
    MOV dword ptr [EDX],EAX             ; 0042bd32
    MOV EAX,dword ptr [ESP + 0x58]      ; 0042bd34
    MOV dword ptr [EDX + 0x4],EAX       ; 0042bd38
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0042bd3b
    JMP 0x0042bb88                      ; 0042bd3f
        ;   XREF to: 0042bb88 (UNCONDITIONAL_JUMP)  ; LAB_0042bb88

