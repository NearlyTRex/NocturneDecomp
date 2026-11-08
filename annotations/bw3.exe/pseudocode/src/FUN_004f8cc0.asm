; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f8cc0(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_004f8c9c = 004f8f6c
;   TerminatedCString s_s_confused_while_walking_005c91b8
;   TerminatedCString s_cow_wav_005c91e2
;   undefined4 DAT_005c91ec
;   undefined4 DAT_005c91f4
;   void* PTR_DAT_005f1690 = 007f7ea4
;   undefined4 DAT_006045f8
;   undefined4 DAT_007f7ea4
;
; Called Functions:
;   FUN_0040cea0
;   FUN_0042c1e0
;   FUN_0042c230
;   FUN_0042ccf0
;   FUN_0042cd30
;   FUN_0042cd70
;   FUN_00431660
;   FUN_00432330
;   FUN_00433350
;   FUN_00433fb0
;   FUN_00434850
;   FUN_00441ff0
;   FUN_004fbb70
;   FUN_004fc070
;   FUN_004fc0d0
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f8cc0
        ;   Label: FUN_004f8cc0
    PUSH ESI                            ; 004f8cc1
    PUSH EDI                            ; 004f8cc2
    PUSH EBP                            ; 004f8cc3
    MOV EBP,ESP                         ; 004f8cc4
    SUB ESP,0x50                        ; 004f8cc6
    AND ESP,0xfffffff8                  ; 004f8cc9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004f8ccc
    PUSH dword ptr [EBP + 0x18]         ; 004f8ccf
    PUSH EBX                            ; 004f8cd2
    CALL FUN_0042cd70                   ; 004f8cd3
        ;   XREF to: 0042cd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0042cd70()
    ADD ESP,0x8                         ; 004f8cd8
    TEST EAX,EAX                        ; 004f8cdb
    JNZ 0x004f8ce6                      ; 004f8cdd
        ;   XREF to: 004f8ce6 (CONDITIONAL_JUMP)  ; LAB_004f8ce6
    MOV ESP,EBP                         ; 004f8cdf
    POP EBP                             ; 004f8ce1
    POP EDI                             ; 004f8ce2
    POP ESI                             ; 004f8ce3
    POP EBX                             ; 004f8ce4
    RET                                 ; 004f8ce5
    PUSH 0x0                            ; 004f8ce6
        ;   Label: LAB_004f8ce6
    PUSH dword ptr [EBP + 0x18]         ; 004f8ce8
    PUSH EBX                            ; 004f8ceb
    CALL FUN_00432330                   ; 004f8cec
        ;   XREF to: 00432330 (UNCONDITIONAL_CALL)  ; undefined FUN_00432330()
    LEA EAX,[EBX + 0x249c]              ; 004f8cf1
    MOV dword ptr [EAX + 0x8],0x0       ; 004f8cf7
    ADD ESP,0xc                         ; 004f8cfe
    MOV EDX,dword ptr [EAX + 0x8]       ; 004f8d01
    MOV dword ptr [EAX + 0x4],EDX       ; 004f8d04
    MOV EDX,dword ptr [EAX + 0x4]       ; 004f8d07
    MOV dword ptr [EAX],EDX             ; 004f8d0a
    MOV EAX,dword ptr [EBP + 0x18]      ; 004f8d0c
    LEA ESI,[EBX + 0x158]               ; 004f8d0f
    MOV dword ptr [ESP],EAX             ; 004f8d15
    FLD float ptr [ESP]                 ; 004f8d18
        ;   Label: LAB_004f8d18
    FLDZ                                ; 004f8d1b
    FCOMPP                              ; 004f8d1d
    FNSTSW AX                           ; 004f8d1f
    SAHF                                ; 004f8d21
    JNC 0x004f8d3c                      ; 004f8d22
        ;   XREF to: 004f8d3c (CONDITIONAL_JUMP)  ; LAB_004f8d3c
    MOV EAX,ESP                         ; 004f8d24
    PUSH EAX                            ; 004f8d26
    PUSH ESI                            ; 004f8d27
    CALL FUN_004fbb70                   ; 004f8d28
        ;   XREF to: 004fbb70 (UNCONDITIONAL_CALL)  ; undefined FUN_004fbb70()
    ADD ESP,0x8                         ; 004f8d2d
    PUSH EAX                            ; 004f8d30
    PUSH EBX                            ; 004f8d31
    CALL FUN_00433fb0                   ; 004f8d32
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00433fb0()
    ADD ESP,0x8                         ; 004f8d37
    JMP 0x004f8d18                      ; 004f8d3a
        ;   XREF to: 004f8d18 (UNCONDITIONAL_JUMP)  ; LAB_004f8d18
    PUSH dword ptr [EBP + 0x18]         ; 004f8d3c
        ;   Label: LAB_004f8d3c
    FLD float ptr [EBX + 0x24a4]        ; 004f8d3f
    PUSH EBX                            ; 004f8d45
    FSTP float ptr [EBX + 0x2524]       ; 004f8d46
    CALL FUN_00434850                   ; 004f8d4c
        ;   XREF to: 00434850 (UNCONDITIONAL_CALL)  ; undefined FUN_00434850()
    ADD ESP,0x8                         ; 004f8d51
    PUSH ESI                            ; 004f8d54
    CALL FUN_004fc070                   ; 004f8d55
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc070()
    ADD ESP,0x4                         ; 004f8d5a
    PUSH dword ptr [EBP + 0x18]         ; 004f8d5d
    PUSH EBX                            ; 004f8d60
    MOV EDI,dword ptr [EAX + 0x24]      ; 004f8d61
    CALL FUN_00431660                   ; 004f8d64
        ;   XREF to: 00431660 (UNCONDITIONAL_CALL)  ; undefined FUN_00431660()
    ADD ESP,0x8                         ; 004f8d69
    TEST EAX,EAX                        ; 004f8d6c
    JZ 0x004f8ffa                       ; 004f8d6e
        ;   XREF to: 004f8ffa (CONDITIONAL_JUMP)  ; LAB_004f8ffa
    MOV EAX,dword ptr [EBX + 0x273c]    ; 004f8d74
    CMP EAX,0x2                         ; 004f8d7a
    JNC 0x004f8f26                      ; 004f8d7d
        ;   XREF to: 004f8f26 (CONDITIONAL_JUMP)  ; LAB_004f8f26
    CMP EAX,0x1                         ; 004f8d83
    JNZ 0x004f8f31                      ; 004f8d86
        ;   XREF to: 004f8f31 (CONDITIONAL_JUMP)  ; LAB_004f8f31
    PUSH 0x1                            ; 004f8d8c
        ;   Label: LAB_004f8d8c
    PUSH 0x5                            ; 004f8d8e
    LEA EAX,[EBX + 0x158]               ; 004f8d90
    PUSH EAX                            ; 004f8d96
    CALL FUN_004fc0d0                   ; 004f8d97
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc0d0()
        ;   Label: LAB_004f8d97
    ADD ESP,0xc                         ; 004f8d9c
        ;   Label: LAB_004f8d9c
    LEA EAX,[EBX + 0x249c]              ; 004f8d9f
        ;   Label: LAB_004f8d9f
    MOV dword ptr [EAX + 0x8],0x0       ; 004f8da5
    MOV EDX,dword ptr [EAX + 0x8]       ; 004f8dac
    MOV dword ptr [EAX + 0x4],EDX       ; 004f8daf
    MOV EDX,dword ptr [EAX + 0x4]       ; 004f8db2
    MOV dword ptr [EAX],EDX             ; 004f8db5
    PUSH EBX                            ; 004f8db7
        ;   Label: caseD_5
    CALL FUN_0042ccf0                   ; 004f8db8
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042ccf0()
    ADD ESP,0x4                         ; 004f8dbd
    TEST EAX,EAX                        ; 004f8dc0
    JZ 0x004f8eac                       ; 004f8dc2
        ;   XREF to: 004f8eac (CONDITIONAL_JUMP)  ; LAB_004f8eac
    PUSH dword ptr [EBP + 0x18]         ; 004f8dc8
    PUSH EBX                            ; 004f8dcb
    LEA ESI,[EBX + 0x2518]              ; 004f8dcc
    CALL FUN_0042c1e0                   ; 004f8dd2
        ;   XREF to: 0042c1e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042c1e0()
    ADD ESP,0x8                         ; 004f8dd7
    FLD float ptr [ESI]                 ; 004f8dda
    FMUL float ptr [EBP + 0x18]         ; 004f8ddc
    FLD float ptr [ESI + 0x4]           ; 004f8ddf
    FMUL float ptr [EBP + 0x18]         ; 004f8de2
    FLD float ptr [ESI + 0x8]           ; 004f8de5
    FMUL float ptr [EBP + 0x18]         ; 004f8de8
    LEA EDI,[ESP + 0x4]                 ; 004f8deb
    LEA ESI,[ESP + 0x1c]                ; 004f8def
    FXCH ST2                            ; 004f8df3
    FSTP float ptr [ESP + 0x1c]         ; 004f8df5
    FSTP float ptr [ESP + 0x20]         ; 004f8df9
    FSTP float ptr [ESP + 0x24]         ; 004f8dfd
    MOVSD ES:EDI,ESI                    ; 004f8e01
    MOVSD ES:EDI,ESI                    ; 004f8e02
    MOVSD ES:EDI,ESI                    ; 004f8e03
    LEA EDX,[EBX + 0x250c]              ; 004f8e04
    FLD float ptr [ESP + 0x4]           ; 004f8e0a
    FLD float ptr [ESP + 0x8]           ; 004f8e0e
    FLD float ptr [ESP + 0xc]           ; 004f8e12
    LEA EDI,[ESP + 0x10]                ; 004f8e16
    LEA ESI,[ESP + 0x28]                ; 004f8e1a
    FXCH ST2                            ; 004f8e1e
    FADD float ptr [EDX]                ; 004f8e20
    FXCH                                ; 004f8e22
    FADD float ptr [EDX + 0x4]          ; 004f8e24
    FXCH ST2                            ; 004f8e27
    FADD float ptr [EDX + 0x8]          ; 004f8e29
    FXCH                                ; 004f8e2c
    FSTP float ptr [ESP + 0x28]         ; 004f8e2e
    FXCH                                ; 004f8e32
    FSTP float ptr [ESP + 0x2c]         ; 004f8e34
    FSTP float ptr [ESP + 0x30]         ; 004f8e38
    MOVSD ES:EDI,ESI                    ; 004f8e3c
    MOVSD ES:EDI,ESI                    ; 004f8e3d
    MOVSD ES:EDI,ESI                    ; 004f8e3e
    LEA EAX,[EBX + 0x249c]              ; 004f8e3f
    FLD float ptr [ESP + 0x10]          ; 004f8e45
    FLD float ptr [ESP + 0x14]          ; 004f8e49
    FLD float ptr [ESP + 0x18]          ; 004f8e4d
    LEA EDI,[ESP + 0x34]                ; 004f8e51
    LEA ESI,[ESP + 0x40]                ; 004f8e55
    FXCH ST2                            ; 004f8e59
    FADD float ptr [EAX]                ; 004f8e5b
    FXCH                                ; 004f8e5d
    FADD float ptr [EAX + 0x4]          ; 004f8e5f
    FXCH ST2                            ; 004f8e62
    FADD float ptr [EAX + 0x8]          ; 004f8e64
    FXCH                                ; 004f8e67
    FSTP float ptr [ESP + 0x40]         ; 004f8e69
    FXCH                                ; 004f8e6d
    FSTP float ptr [ESP + 0x44]         ; 004f8e6f
    FSTP float ptr [ESP + 0x48]         ; 004f8e73
    MOVSD ES:EDI,ESI                    ; 004f8e77
    MOVSD ES:EDI,ESI                    ; 004f8e78
    MOVSD ES:EDI,ESI                    ; 004f8e79
    MOV dword ptr [EDX + 0x8],0x0       ; 004f8e7a
    MOV ECX,dword ptr [EDX + 0x8]       ; 004f8e81
    MOV dword ptr [EDX + 0x4],ECX       ; 004f8e84
    MOV ECX,dword ptr [EDX + 0x4]       ; 004f8e87
    MOV dword ptr [EDX],ECX             ; 004f8e8a
    MOV dword ptr [EAX + 0x8],0x0       ; 004f8e8c
    MOV EDX,dword ptr [EAX + 0x8]       ; 004f8e93
    MOV dword ptr [EAX + 0x4],EDX       ; 004f8e96
    MOV EDX,dword ptr [EAX + 0x4]       ; 004f8e99
    MOV dword ptr [EAX],EDX             ; 004f8e9c
    LEA EAX,[ESP + 0x34]                ; 004f8e9e
    PUSH EAX                            ; 004f8ea2
    PUSH EBX                            ; 004f8ea3
    CALL FUN_0042c230                   ; 004f8ea4
        ;   XREF to: 0042c230 (UNCONDITIONAL_CALL)  ; undefined FUN_0042c230()
    ADD ESP,0x8                         ; 004f8ea9
    PUSH EBX                            ; 004f8eac
        ;   Label: LAB_004f8eac
    CALL FUN_0042cd30                   ; 004f8ead
        ;   XREF to: 0042cd30 (UNCONDITIONAL_CALL)  ; undefined FUN_0042cd30()
    ADD ESP,0x4                         ; 004f8eb2
    LEA EAX,[EBX + 0x158]               ; 004f8eb5
    PUSH EAX                            ; 004f8ebb
    CALL FUN_0054c130                   ; 004f8ebc
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; undefined FUN_0054c130()
    ADD ESP,0x4                         ; 004f8ec1
    PUSH dword ptr [EBP + 0x18]         ; 004f8ec4
    PUSH EBX                            ; 004f8ec7
    CALL FUN_00433350                   ; 004f8ec8
        ;   XREF to: 00433350 (UNCONDITIONAL_CALL)  ; undefined FUN_00433350()
    ADD ESP,0x8                         ; 004f8ecd
    MOV ESP,EBP                         ; 004f8ed0
    POP EBP                             ; 004f8ed2
    POP EDI                             ; 004f8ed3
    POP ESI                             ; 004f8ed4
    POP EBX                             ; 004f8ed5
    RET                                 ; 004f8ed6
    PUSH ESI                            ; 004f8ed7
        ;   Label: LAB_004f8ed7
    CALL FUN_004fc930                   ; 004f8ed8
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc930()
    MOV dword ptr [ESP + 0x50],EAX      ; 004f8edd
    FLD float ptr [ESP + 0x50]          ; 004f8ee1
    ADD ESP,0x4                         ; 004f8ee5
    FCOMP double ptr [0x005c91f4]       ; 004f8ee8 | DAT_005c91f4
    FNSTSW AX                           ; 004f8eee
    SAHF                                ; 004f8ef0
    JBE 0x004f8d9f                      ; 004f8ef1
        ;   XREF to: 004f8d9f (CONDITIONAL_JUMP)  ; LAB_004f8d9f
    PUSH 0x1                            ; 004f8ef7
    PUSH 0x4                            ; 004f8ef9
    PUSH 0x0                            ; 004f8efb
    CALL FUN_0040cea0                   ; 004f8efd
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cea0()
    ADD ESP,0x8                         ; 004f8f02
    PUSH EAX                            ; 004f8f05
    PUSH ESI                            ; 004f8f06
    CALL FUN_004fc0d0                   ; 004f8f07
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc0d0()
    ADD ESP,0xc                         ; 004f8f0c
    PUSH EBX                            ; 004f8f0f
    PUSH 0x5c91b8                       ; 004f8f10 | = "%s confused while walking to scriptDe..."
    MOV ESI,dword ptr [0x005f1690]      ; 004f8f15 | PTR_DAT_005f1690
    PUSH ESI                            ; 004f8f1b | DAT_007f7ea4
    CALL FUN_00441ff0                   ; 004f8f1c
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ff0()
    JMP 0x004f8d9c                      ; 004f8f21
        ;   XREF to: 004f8d9c (UNCONDITIONAL_JUMP)  ; LAB_004f8d9c
    JBE 0x004f8d8c                      ; 004f8f26
        ;   XREF to: 004f8d8c (CONDITIONAL_JUMP)  ; LAB_004f8d8c
        ;   Label: LAB_004f8f26
    CMP EAX,0x3                         ; 004f8f2c
    JZ 0x004f8ed7                       ; 004f8f2f
        ;   XREF to: 004f8ed7 (CONDITIONAL_JUMP)  ; LAB_004f8ed7
    LEA ESI,[EBX + 0x158]               ; 004f8f31
        ;   Label: LAB_004f8f31
    PUSH ESI                            ; 004f8f37
    CALL FUN_004fc930                   ; 004f8f38
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc930()
    MOV dword ptr [ESP + 0x50],EAX      ; 004f8f3d
    FLD float ptr [ESP + 0x50]          ; 004f8f41
    ADD ESP,0x4                         ; 004f8f45
    FCOMP double ptr [0x005c91f4]       ; 004f8f48 | DAT_005c91f4
    FNSTSW AX                           ; 004f8f4e
    SAHF                                ; 004f8f50
    JBE 0x004f8d9f                      ; 004f8f51
        ;   XREF to: 004f8d9f (CONDITIONAL_JUMP)  ; LAB_004f8d9f
    PUSH 0x1                            ; 004f8f57
    PUSH 0x4                            ; 004f8f59
    PUSH 0x0                            ; 004f8f5b
    CALL FUN_0040cea0                   ; 004f8f5d
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cea0()
    ADD ESP,0x8                         ; 004f8f62
    PUSH EAX                            ; 004f8f65
    PUSH ESI                            ; 004f8f66
    JMP 0x004f8d97                      ; 004f8f67
        ;   XREF to: 004f8d97 (UNCONDITIONAL_JUMP)  ; LAB_004f8d97
    LEA ESI,[EBX + 0x158]               ; 004f8f6c
        ;   Label: caseD_0
    PUSH ESI                            ; 004f8f72
    CALL FUN_004fc930                   ; 004f8f73
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc930()
    MOV dword ptr [ESP + 0x50],EAX      ; 004f8f78
    FLD float ptr [ESP + 0x50]          ; 004f8f7c
    ADD ESP,0x4                         ; 004f8f80
    FCOMP double ptr [0x005c91ec]       ; 004f8f83 | DAT_005c91ec
    FNSTSW AX                           ; 004f8f89
    SAHF                                ; 004f8f8b
    JBE 0x004f8db7                      ; 004f8f8c
        ;   XREF to: 004f8db7 (CONDITIONAL_JUMP)  ; caseD_5
    PUSH 0x1                            ; 004f8f92
    PUSH 0x4                            ; 004f8f94
    PUSH 0x0                            ; 004f8f96
    CALL FUN_0040cea0                   ; 004f8f98
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cea0()
    ADD ESP,0x8                         ; 004f8f9d
    PUSH EAX                            ; 004f8fa0
    PUSH ESI                            ; 004f8fa1
    CALL FUN_004fc0d0                   ; 004f8fa2
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc0d0()
    ADD ESP,0xc                         ; 004f8fa7
    PUSH 0x5                            ; 004f8faa
    PUSH 0x0                            ; 004f8fac
    CALL FUN_0040cea0                   ; 004f8fae
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cea0()
    ADD ESP,0x8                         ; 004f8fb3
    CMP EAX,0x5                         ; 004f8fb6
    JNZ 0x004f8db7                      ; 004f8fb9
        ;   XREF to: 004f8db7 (CONDITIONAL_JUMP)  ; caseD_5
    MOV EDX,dword ptr [EBX + 0xcdd4]    ; 004f8fbf
    PUSH EDX                            ; 004f8fc5
    MOV ECX,dword ptr [0x006045f8]      ; 004f8fc6 | DAT_006045f8
    PUSH ECX                            ; 004f8fcc
    CALL FUN_00560af0                   ; 004f8fcd
        ;   XREF to: 00560af0 (UNCONDITIONAL_CALL)  ; undefined FUN_00560af0()
    ADD ESP,0x8                         ; 004f8fd2
    TEST EAX,EAX                        ; 004f8fd5
    JNZ 0x004f8db7                      ; 004f8fd7
        ;   XREF to: 004f8db7 (CONDITIONAL_JUMP)  ; caseD_5
    PUSH 0x5c91e2                       ; 004f8fdd | = "cow?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f8fe2
    PUSH EBX                            ; 004f8fe8
    CALL dword ptr [EAX + 0x2c]         ; 004f8fe9
    ADD ESP,0x8                         ; 004f8fec
    MOV dword ptr [EBX + 0xcdd4],EAX    ; 004f8fef
    JMP 0x004f8db7                      ; 004f8ff5
        ;   XREF to: 004f8db7 (UNCONDITIONAL_JUMP)  ; caseD_5
    CMP EDI,0x5                         ; 004f8ffa
        ;   Label: LAB_004f8ffa
    JA 0x004f8db7                       ; 004f8ffd
        ;   XREF to: 004f8db7 (CONDITIONAL_JUMP)  ; caseD_5
    JMP dword ptr [EDI*0x4 + 0x4f8c9c]  ; 004f9003 | caseD_4 | caseD_5 | switchdataD_004f8c9c
        ;   Label: switchD

