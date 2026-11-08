; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054bc90(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_0054bc30 = 0054bef3
;   undefined1* switchdataD_0054bc44 = 0054c151
;   TerminatedCString s_wing_wav_005f03bd
;   TerminatedCString s_sentinel_fall_wav_005f03c7
;   TerminatedCString s_s_confused_while_walking_005f03d9
;   undefined4 DAT_005f0409
;   undefined4 DAT_005f0411
;   undefined4 DAT_005f0419
;   undefined4 DAT_00604e48
;   undefined4 DAT_00604e54
;   void* PTR_DAT_00611100 = 007db5f0
;   undefined4 DAT_0061dca4
;   undefined4 DAT_007db5f0
;   undefined4 DAT_01e820fc
;   undefined4 DAT_01e82104
;   ... and 1 more
;
; Called Functions:
;   FUN_00408b40
;   FUN_0040cc00
;   FUN_0040cd00
;   FUN_0040cd60
;   FUN_0042c010
;   FUN_0042ccf0
;   FUN_0042d700
;   FUN_0042d750
;   FUN_0042e120
;   FUN_0042e160
;   FUN_0042e1a0
;   FUN_00432240
;   FUN_00433e80
;   FUN_00434a80
;   FUN_00435320
;   ... and 11 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054bc90
        ;   Label: FUN_0054bc90
    PUSH ESI                            ; 0054bc91
    PUSH EDI                            ; 0054bc92
    PUSH EBP                            ; 0054bc93
    MOV EBP,ESP                         ; 0054bc94
    SUB ESP,0x280                       ; 0054bc96
    SUB EBP,0x7a                        ; 0054bc9c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0054bc9f
    PUSH dword ptr [EBP + 0x92]         ; 0054bca5
    PUSH EBX                            ; 0054bcab
    CALL FUN_0042e1a0                   ; 0054bcac
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042e1a0()
    ADD ESP,0x8                         ; 0054bcb1
    TEST EAX,EAX                        ; 0054bcb4
    JZ 0x0054beeb                       ; 0054bcb6
        ;   XREF to: 0054beeb (CONDITIONAL_JUMP)  ; LAB_0054beeb
    LEA EAX,[EBX + 0x249c]              ; 0054bcbc
    MOV dword ptr [EAX + 0x8],0x0       ; 0054bcc2
    FLD float ptr [EBP + 0x92]          ; 0054bcc9
    MOV EDX,dword ptr [EAX + 0x8]       ; 0054bccf
    MOV dword ptr [EAX + 0x4],EDX       ; 0054bcd2
    MOV EDX,dword ptr [EAX + 0x4]       ; 0054bcd5
    MOV dword ptr [EAX],EDX             ; 0054bcd8
    FMUL float ptr [EBX + 0xc1d0]       ; 0054bcda
    LEA EAX,[EBX + 0x158]               ; 0054bce0
    FSTP float ptr [EBP + 0x4a]         ; 0054bce6
    MOV dword ptr [EBP + 0x66],EAX      ; 0054bce9
    FLD float ptr [EBP + 0x4a]          ; 0054bcec
        ;   Label: LAB_0054bcec
    FLDZ                                ; 0054bcef
    FCOMPP                              ; 0054bcf1
    FNSTSW AX                           ; 0054bcf3
    SAHF                                ; 0054bcf5
    JC 0x0054c0d2                       ; 0054bcf6
        ;   XREF to: 0054c0d2 (CONDITIONAL_JUMP)  ; LAB_0054c0d2
    FLD float ptr [EBP + 0x92]          ; 0054bcfc
    FMUL float ptr [EBX + 0xc1d0]       ; 0054bd02
    SUB ESP,0x4                         ; 0054bd08
    MOV EAX,dword ptr [EBX + 0x24a4]    ; 0054bd0b
    MOV dword ptr [EBX + 0x2524],EAX    ; 0054bd11
    FSTP float ptr [ESP]                ; 0054bd17
    PUSH EBX                            ; 0054bd1a
    CALL FUN_00435320                   ; 0054bd1b
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined FUN_00435320()
    ADD ESP,0x8                         ; 0054bd20
    MOV EDX,dword ptr [EBP + 0x66]      ; 0054bd23
    PUSH EDX                            ; 0054bd26
    CALL FUN_00524770                   ; 0054bd27
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    ADD ESP,0x4                         ; 0054bd2c
    PUSH dword ptr [EBP + 0x92]         ; 0054bd2f
    MOV ESI,dword ptr [EAX + 0x24]      ; 0054bd35
    PUSH EBX                            ; 0054bd38
    MOV EDI,ESI                         ; 0054bd39
    CALL FUN_00432240                   ; 0054bd3b
        ;   XREF to: 00432240 (UNCONDITIONAL_CALL)  ; undefined FUN_00432240()
    ADD ESP,0x8                         ; 0054bd40
    TEST EAX,EAX                        ; 0054bd43
    JZ 0x0054c12e                       ; 0054bd45
        ;   XREF to: 0054c12e (CONDITIONAL_JUMP)  ; LAB_0054c12e
    MOV EAX,dword ptr [EBX + 0x273c]    ; 0054bd4b
    CMP EAX,0x2                         ; 0054bd51
    JNC 0x0054c11a                      ; 0054bd54
        ;   XREF to: 0054c11a (CONDITIONAL_JUMP)  ; LAB_0054c11a
    CMP EAX,0x1                         ; 0054bd5a
    JNZ 0x0054c125                      ; 0054bd5d
        ;   XREF to: 0054c125 (CONDITIONAL_JUMP)  ; LAB_0054c125
    PUSH 0x1                            ; 0054bd63
        ;   Label: LAB_0054bd63
    PUSH 0x2                            ; 0054bd65
    LEA EAX,[EBX + 0x158]               ; 0054bd67
        ;   Label: LAB_0054bd67
    PUSH EAX                            ; 0054bd6d
    CALL FUN_005247c0                   ; 0054bd6e
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0054bd73
        ;   Label: LAB_0054bd73
    LEA EAX,[EBX + 0x249c]              ; 0054bd76
    MOV dword ptr [EAX + 0x8],0x0       ; 0054bd7c
    MOV EDX,dword ptr [EAX + 0x8]       ; 0054bd83
    MOV dword ptr [EAX + 0x4],EDX       ; 0054bd86
    MOV EDX,dword ptr [EAX + 0x4]       ; 0054bd89
    MOV dword ptr [EAX],EDX             ; 0054bd8c
    FLD float ptr [EBX + 0xc1e4]        ; 0054bd8e
        ;   Label: caseD_5
    FLDZ                                ; 0054bd94
    FCOMPP                              ; 0054bd96
    FNSTSW AX                           ; 0054bd98
    SAHF                                ; 0054bd9a
    JNC 0x0054bdaf                      ; 0054bd9b
        ;   XREF to: 0054bdaf (CONDITIONAL_JUMP)  ; LAB_0054bdaf
    FLD float ptr [EBX + 0xc1e4]        ; 0054bd9d
    FSUB float ptr [EBP + 0x92]         ; 0054bda3
    FSTP float ptr [EBX + 0xc1e4]       ; 0054bda9
    PUSH EBX                            ; 0054bdaf
        ;   Label: LAB_0054bdaf
    CALL FUN_0042e120                   ; 0054bdb0
        ;   XREF to: 0042e120 (UNCONDITIONAL_CALL)  ; undefined FUN_0042e120()
    ADD ESP,0x4                         ; 0054bdb5
    TEST EAX,EAX                        ; 0054bdb8
    JZ 0x0054bec4                       ; 0054bdba
        ;   XREF to: 0054bec4 (CONDITIONAL_JUMP)  ; LAB_0054bec4
    PUSH dword ptr [EBP + 0x92]         ; 0054bdc0
    PUSH EBX                            ; 0054bdc6
    LEA ESI,[EBX + 0x2518]              ; 0054bdc7
    CALL FUN_0042d700                   ; 0054bdcd
        ;   XREF to: 0042d700 (UNCONDITIONAL_CALL)  ; undefined FUN_0042d700()
    FLD float ptr [ESI]                 ; 0054bdd2
    FMUL float ptr [EBP + 0x92]         ; 0054bdd4
    FLD float ptr [ESI + 0x4]           ; 0054bdda
    FMUL float ptr [EBP + 0x92]         ; 0054bddd
    FLD float ptr [ESI + 0x8]           ; 0054bde3
    FMUL float ptr [EBP + 0x92]         ; 0054bde6
    LEA EDI,[EBP + 0xffffff26]          ; 0054bdec
    LEA ESI,[EBP + 0xfffffed2]          ; 0054bdf2
    FXCH ST2                            ; 0054bdf8
    FSTP float ptr [EBP + 0xfffffed2]   ; 0054bdfa
    FSTP float ptr [EBP + 0xfffffed6]   ; 0054be00
    FSTP float ptr [EBP + 0xfffffeda]   ; 0054be06
    MOVSD ES:EDI,ESI                    ; 0054be0c
    MOVSD ES:EDI,ESI                    ; 0054be0d
    MOVSD ES:EDI,ESI                    ; 0054be0e
    LEA EDX,[EBX + 0x250c]              ; 0054be0f
    FLD float ptr [EBP + 0xffffff26]    ; 0054be15
    FLD float ptr [EBP + 0xffffff2a]    ; 0054be1b
    FLD float ptr [EBP + 0xffffff2e]    ; 0054be21
    LEA EDI,[EBP + 0xfffffef6]          ; 0054be27
    LEA ESI,[EBP + -0x62]               ; 0054be2d
    FXCH ST2                            ; 0054be30
    FADD float ptr [EDX]                ; 0054be32
    FXCH                                ; 0054be34
    FADD float ptr [EDX + 0x4]          ; 0054be36
    FXCH ST2                            ; 0054be39
    FADD float ptr [EDX + 0x8]          ; 0054be3b
    FXCH                                ; 0054be3e
    FSTP float ptr [EBP + -0x62]        ; 0054be40
    FXCH                                ; 0054be43
    FSTP float ptr [EBP + -0x5e]        ; 0054be45
    FSTP float ptr [EBP + -0x5a]        ; 0054be48
    MOVSD ES:EDI,ESI                    ; 0054be4b
    MOVSD ES:EDI,ESI                    ; 0054be4c
    MOVSD ES:EDI,ESI                    ; 0054be4d
    LEA EAX,[EBX + 0x249c]              ; 0054be4e
    FLD float ptr [EBP + 0xfffffef6]    ; 0054be54
    FLD float ptr [EBP + 0xfffffefa]    ; 0054be5a
    FLD float ptr [EBP + 0xfffffefe]    ; 0054be60
    LEA EDI,[EBP + 0xfffffea2]          ; 0054be66
    LEA ESI,[EBP + 0x16]                ; 0054be6c
    FXCH ST2                            ; 0054be6f
    FADD float ptr [EAX]                ; 0054be71
    FXCH                                ; 0054be73
    FADD float ptr [EAX + 0x4]          ; 0054be75
    FXCH ST2                            ; 0054be78
    FADD float ptr [EAX + 0x8]          ; 0054be7a
    FXCH                                ; 0054be7d
    FSTP float ptr [EBP + 0x16]         ; 0054be7f
    FXCH                                ; 0054be82
    FSTP float ptr [EBP + 0x1a]         ; 0054be84
    FSTP float ptr [EBP + 0x1e]         ; 0054be87
    MOVSD ES:EDI,ESI                    ; 0054be8a
    MOVSD ES:EDI,ESI                    ; 0054be8b
    MOVSD ES:EDI,ESI                    ; 0054be8c
    MOV dword ptr [EDX + 0x8],0x0       ; 0054be8d
    MOV ECX,dword ptr [EDX + 0x8]       ; 0054be94
    MOV dword ptr [EDX + 0x4],ECX       ; 0054be97
    MOV ECX,dword ptr [EDX + 0x4]       ; 0054be9a
    MOV dword ptr [EDX],ECX             ; 0054be9d
    MOV dword ptr [EAX + 0x8],0x0       ; 0054be9f
    ADD ESP,0x8                         ; 0054bea6
    MOV EDX,dword ptr [EAX + 0x8]       ; 0054bea9
    MOV dword ptr [EAX + 0x4],EDX       ; 0054beac
    MOV EDX,dword ptr [EAX + 0x4]       ; 0054beaf
    MOV dword ptr [EAX],EDX             ; 0054beb2
    LEA EAX,[EBP + 0xfffffea2]          ; 0054beb4
    PUSH EAX                            ; 0054beba
    PUSH EBX                            ; 0054bebb
    CALL FUN_0042d750                   ; 0054bebc
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; undefined FUN_0042d750()
    ADD ESP,0x8                         ; 0054bec1
    PUSH EBX                            ; 0054bec4
        ;   Label: LAB_0054bec4
    CALL FUN_0042e160                   ; 0054bec5
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; undefined FUN_0042e160()
    ADD ESP,0x4                         ; 0054beca
    LEA EAX,[EBX + 0x158]               ; 0054becd
    PUSH EAX                            ; 0054bed3
    CALL FUN_005675a0                   ; 0054bed4
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005675a0()
    ADD ESP,0x4                         ; 0054bed9
    PUSH dword ptr [EBP + 0x92]         ; 0054bedc
    PUSH EBX                            ; 0054bee2
    CALL FUN_00433e80                   ; 0054bee3
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00433e80()
    ADD ESP,0x8                         ; 0054bee8
    LEA ESP,[EBP + 0x7a]                ; 0054beeb
        ;   Label: LAB_0054beeb
    POP EBP                             ; 0054beee
    POP EDI                             ; 0054beef
    POP ESI                             ; 0054bef0
    POP EBX                             ; 0054bef1
    RET                                 ; 0054bef2
    MOV EDX,0x1                         ; 0054bef3
        ;   Label: caseD_64
    MOV ECX,dword ptr [EBX + 0xc1e8]    ; 0054bef8
    MOV dword ptr [EBP + 0x6a],EDX      ; 0054befe
    TEST ECX,ECX                        ; 0054bf01
    JNZ 0x0054bf1a                      ; 0054bf03
        ;   XREF to: 0054bf1a (CONDITIONAL_JUMP)  ; LAB_0054bf1a
    PUSH 0x1                            ; 0054bf05
        ;   Label: LAB_0054bf05
    PUSH 0x0                            ; 0054bf07
    MOV EDI,dword ptr [EBP + 0x66]      ; 0054bf09
    PUSH EDI                            ; 0054bf0c
    CALL FUN_005247c0                   ; 0054bf0d
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0054bf12
    JMP 0x0054bcec                      ; 0054bf15
        ;   XREF to: 0054bcec (UNCONDITIONAL_JUMP)  ; LAB_0054bcec
    PUSH ECX                            ; 0054bf1a
        ;   Label: LAB_0054bf1a
    MOV EDX,dword ptr [ECX + 0x154]     ; 0054bf1b
    CALL dword ptr [EDX + 0x10c]        ; 0054bf21
    ADD ESP,0x4                         ; 0054bf27
    TEST EAX,EAX                        ; 0054bf2a
    JNZ 0x0054bf05                      ; 0054bf2c
        ;   XREF to: 0054bf05 (CONDITIONAL_JUMP)  ; LAB_0054bf05
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0054bf2e
    PUSH EAX                            ; 0054bf34
    MOV EDX,dword ptr [EAX + 0x154]     ; 0054bf35
    CALL dword ptr [EDX + 0xf4]         ; 0054bf3b
    ADD ESP,0x4                         ; 0054bf41
    TEST EAX,EAX                        ; 0054bf44
    JNZ 0x0054bf05                      ; 0054bf46
        ;   XREF to: 0054bf05 (CONDITIONAL_JUMP)  ; LAB_0054bf05
    PUSH 0x0                            ; 0054bf48
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0054bf4a
    PUSH EBX                            ; 0054bf50
    MOV EDX,dword ptr [EAX + 0x154]     ; 0054bf51
    PUSH EAX                            ; 0054bf57
    CALL dword ptr [EDX + 0xe8]         ; 0054bf58
    ADD ESP,0xc                         ; 0054bf5e
    TEST EAX,EAX                        ; 0054bf61
    JZ 0x0054bf05                       ; 0054bf63
        ;   XREF to: 0054bf05 (CONDITIONAL_JUMP)  ; LAB_0054bf05
    MOV EAX,[0x00604e48]                ; 0054bf65 | DAT_00604e48
    MOV dword ptr [EBP + 0xfffffe86],EAX ; 0054bf6a
    LEA EAX,[EBP + 0xfffffe7e]          ; 0054bf70
    XOR ESI,ESI                         ; 0054bf76
    PUSH EAX                            ; 0054bf78
    MOV dword ptr [EBP + 0xfffffe7e],ESI ; 0054bf79
    MOV dword ptr [EBP + 0xfffffe82],ESI ; 0054bf7f
    PUSH EBX                            ; 0054bf85
    LEA ESI,[EBP + 0xffffff6e]          ; 0054bf86
    LEA EDI,[EBP + 0xfffffe8a]          ; 0054bf8c
    CALL FUN_00408b40                   ; 0054bf92
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA ESI,[EBP + 0xffffff6e]          ; 0054bf97
    MOVSD ES:EDI,ESI                    ; 0054bf9d
    MOVSD ES:EDI,ESI                    ; 0054bf9e
    MOVSD ES:EDI,ESI                    ; 0054bf9f
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0054bfa0
    FLD float ptr [EBP + 0xfffffe8a]    ; 0054bfa6
    FSUB float ptr [EAX + 0x20]         ; 0054bfac
    FMUL ST0                            ; 0054bfaf
    FLD float ptr [EBP + 0xfffffe92]    ; 0054bfb1
    FSUB float ptr [EAX + 0x28]         ; 0054bfb7
    FMUL ST0                            ; 0054bfba
    FADDP                               ; 0054bfbc
    FSQRT                               ; 0054bfbe
    ADD ESP,0x8                         ; 0054bfc0
    FCOMP double ptr [0x005f0411]       ; 0054bfc3 | DAT_005f0411
    FNSTSW AX                           ; 0054bfc9
    SAHF                                ; 0054bfcb
    JBE 0x0054bfd3                      ; 0054bfcc
        ;   XREF to: 0054bfd3 (CONDITIONAL_JUMP)  ; LAB_0054bfd3
    XOR EAX,EAX                         ; 0054bfce
    MOV dword ptr [EBP + 0x6a],EAX      ; 0054bfd0
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 0054bfd3
        ;   Label: LAB_0054bfd3
    FLD float ptr [EBP + 0xfffffe8e]    ; 0054bfd9
    FSUB float ptr [EDX + 0x24]         ; 0054bfdf
    FABS                                ; 0054bfe2
    FCOMP double ptr [0x005f0419]       ; 0054bfe4 | DAT_005f0419
    FNSTSW AX                           ; 0054bfea
    SAHF                                ; 0054bfec
    JA 0x0054bf05                       ; 0054bfed
        ;   XREF to: 0054bf05 (CONDITIONAL_JUMP)  ; LAB_0054bf05
    CMP dword ptr [EBP + 0x6a],0x0      ; 0054bff3
    JNZ 0x0054c008                      ; 0054bff7
        ;   XREF to: 0054c008 (CONDITIONAL_JUMP)  ; LAB_0054c008
    CMP dword ptr [EBP + 0x6a],0x0      ; 0054bff9
        ;   Label: LAB_0054bff9
    JNZ 0x0054bcec                      ; 0054bffd
        ;   XREF to: 0054bcec (CONDITIONAL_JUMP)  ; LAB_0054bcec
    JMP 0x0054bf05                      ; 0054c003
        ;   XREF to: 0054bf05 (UNCONDITIONAL_JUMP)  ; LAB_0054bf05
    PUSH 0x0                            ; 0054c008
        ;   Label: LAB_0054c008
    PUSH EBX                            ; 0054c00a
    MOV EAX,dword ptr [EDX + 0x154]     ; 0054c00b
    PUSH EDX                            ; 0054c011
    CALL dword ptr [EAX + 0xec]         ; 0054c012
    ADD ESP,0xc                         ; 0054c018
    TEST EAX,EAX                        ; 0054c01b
    JNZ 0x0054bff9                      ; 0054c01d
        ;   XREF to: 0054bff9 (CONDITIONAL_JUMP)  ; LAB_0054bff9
    JMP 0x0054bf05                      ; 0054c01f
        ;   XREF to: 0054bf05 (UNCONDITIONAL_JUMP)  ; LAB_0054bf05
    PUSH EBX                            ; 0054c024
        ;   Label: caseD_65
    MOV EAX,dword ptr [EBX + 0x154]     ; 0054c025
    CALL dword ptr [EAX + 0xf8]         ; 0054c02b
    ADD ESP,0x4                         ; 0054c031
    JMP 0x0054bcec                      ; 0054c034
        ;   XREF to: 0054bcec (UNCONDITIONAL_JUMP)  ; LAB_0054bcec
    CMP dword ptr [EBX + 0xc1e8],0x0    ; 0054c039
        ;   Label: caseD_66
    JZ 0x0054bcec                       ; 0054c040
        ;   XREF to: 0054bcec (CONDITIONAL_JUMP)  ; LAB_0054bcec
    LEA EAX,[EBP + 0xfffffe36]          ; 0054c046
    PUSH EAX                            ; 0054c04c
    CALL FUN_0042c010                   ; 0054c04d
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; undefined FUN_0042c010()
    ADD ESP,0x4                         ; 0054c052
    PUSH 0x40a00000                     ; 0054c055
    PUSH 0x3f800000                     ; 0054c05a
    CALL FUN_0040cc00                   ; 0054c05f
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    LEA EDX,[EBP + 0xfffffe36]          ; 0054c064
    MOV dword ptr [EBP + 0x76],EAX      ; 0054c06a
    ADD ESP,0x8                         ; 0054c06d
    FLD float ptr [EBP + 0x76]          ; 0054c070
    PUSH EDX                            ; 0054c073
    FSTP float ptr [EBP + 0xfffffe3a]   ; 0054c074
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0054c07a
    PUSH EAX                            ; 0054c080
    MOV ESI,dword ptr [EAX + 0x154]     ; 0054c081
    CALL dword ptr [ESI + 0x108]        ; 0054c087
    ADD ESP,0x8                         ; 0054c08d
    JMP 0x0054bcec                      ; 0054c090
        ;   XREF to: 0054bcec (UNCONDITIONAL_JUMP)  ; LAB_0054bcec
    PUSH 0x5f03bd                       ; 0054c095 | = "wing?.wav"
        ;   Label: caseD_67
    MOV EAX,dword ptr [EBX + 0x154]     ; 0054c09a
    PUSH EBX                            ; 0054c0a0
    CALL dword ptr [EAX + 0x2c]         ; 0054c0a1
    ADD ESP,0x8                         ; 0054c0a4
    JMP 0x0054bcec                      ; 0054c0a7
        ;   XREF to: 0054bcec (UNCONDITIONAL_JUMP)  ; LAB_0054bcec
    PUSH 0x5f03c7                       ; 0054c0ac | = "sentinel-fall.wav"
        ;   Label: caseD_68
    MOV EAX,dword ptr [EBX + 0x154]     ; 0054c0b1
    PUSH EBX                            ; 0054c0b7
    CALL dword ptr [EAX + 0x2c]         ; 0054c0b8
    ADD ESP,0x8                         ; 0054c0bb
    JMP 0x0054bcec                      ; 0054c0be
        ;   XREF to: 0054bcec (UNCONDITIONAL_JUMP)  ; LAB_0054bcec
    PUSH EDX                            ; 0054c0c3
        ;   Label: default
    PUSH EBX                            ; 0054c0c4
    CALL FUN_00434a80                   ; 0054c0c5
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00434a80()
    ADD ESP,0x8                         ; 0054c0ca
    JMP 0x0054bcec                      ; 0054c0cd
        ;   XREF to: 0054bcec (UNCONDITIONAL_JUMP)  ; LAB_0054bcec
    LEA EAX,[EBP + 0x4a]                ; 0054c0d2
        ;   Label: LAB_0054c0d2
    PUSH EAX                            ; 0054c0d5
    MOV EDI,dword ptr [EBP + 0x66]      ; 0054c0d6
    PUSH EDI                            ; 0054c0d9
    CALL FUN_00524270                   ; 0054c0da
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; undefined FUN_00524270()
    MOV EDX,EAX                         ; 0054c0df
    SUB EAX,0x64                        ; 0054c0e1
    ADD ESP,0x8                         ; 0054c0e4
    CMP EAX,0x4                         ; 0054c0e7
    JA 0x0054c0c3                       ; 0054c0ea
        ;   XREF to: 0054c0c3 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x54bc30]  ; 0054c0ec | caseD_64 | caseD_65 | caseD_66
        ;   Label: switchD
    PUSH 0x1                            ; 0054c0f3
        ;   Label: LAB_0054c0f3
    PUSH 0x0                            ; 0054c0f5
    MOV ECX,dword ptr [EBP + 0x66]      ; 0054c0f7
    PUSH ECX                            ; 0054c0fa
    CALL FUN_005247c0                   ; 0054c0fb
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0054c100
    PUSH EBX                            ; 0054c103
    PUSH 0x5f03d9                       ; 0054c104 | = "%s confused while walking to scriptDe..."
    MOV ESI,dword ptr [0x00611100]      ; 0054c109 | PTR_DAT_00611100
    PUSH ESI                            ; 0054c10f | DAT_007db5f0
    CALL FUN_00445430                   ; 0054c110
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    JMP 0x0054bd73                      ; 0054c115
        ;   XREF to: 0054bd73 (UNCONDITIONAL_JUMP)  ; LAB_0054bd73
    JBE 0x0054bd63                      ; 0054c11a
        ;   XREF to: 0054bd63 (CONDITIONAL_JUMP)  ; LAB_0054bd63
        ;   Label: LAB_0054c11a
    CMP EAX,0x3                         ; 0054c120
    JZ 0x0054c0f3                       ; 0054c123
        ;   XREF to: 0054c0f3 (CONDITIONAL_JUMP)  ; LAB_0054c0f3
    PUSH 0x1                            ; 0054c125
        ;   Label: LAB_0054c125
    PUSH 0x0                            ; 0054c127
    JMP 0x0054bd67                      ; 0054c129
        ;   XREF to: 0054bd67 (UNCONDITIONAL_JUMP)  ; LAB_0054bd67
    CMP ESI,0xa                         ; 0054c12e
        ;   Label: LAB_0054c12e
    JNZ 0x0054c209                      ; 0054c131
        ;   XREF to: 0054c209 (CONDITIONAL_JUMP)  ; LAB_0054c209
    MOV dword ptr [EBX + 0x2ff0],0x3f000000 ; 0054c137
        ;   Label: LAB_0054c137
    CMP EDI,0xf                         ; 0054c141
    JA 0x0054bd8e                       ; 0054c144
        ;   XREF to: 0054bd8e (CONDITIONAL_JUMP)  ; caseD_d
    JMP dword ptr [EDI*0x4 + 0x54bc44]  ; 0054c14a | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH dword ptr [EBP + 0x92]         ; 0054c151
        ;   Label: caseD_0
    MOV EAX,dword ptr [EBX + 0x154]     ; 0054c157
    PUSH EBX                            ; 0054c15d
    CALL dword ptr [EAX + 0x144]        ; 0054c15e
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 0054c164
    ADD ESP,0x8                         ; 0054c16a
    TEST EDX,EDX                        ; 0054c16d
    JZ 0x0054c445                       ; 0054c16f
        ;   XREF to: 0054c445 (CONDITIONAL_JUMP)  ; LAB_0054c445
    MOV EAX,EDX                         ; 0054c175
    LEA EDI,[EBP + -0x3e]               ; 0054c177
    LEA ESI,[EBP + 0xfffffeba]          ; 0054c17a
    FLD float ptr [EAX + 0x20]          ; 0054c180
    FLD float ptr [EAX + 0x24]          ; 0054c183
    LEA EDX,[EBX + 0x20]                ; 0054c186
    FLD float ptr [EAX + 0x28]          ; 0054c189
    FXCH ST2                            ; 0054c18c
    FSUB float ptr [EDX]                ; 0054c18e
    FXCH                                ; 0054c190
    FSUB float ptr [EDX + 0x4]          ; 0054c192
    FXCH ST2                            ; 0054c195
    FSUB float ptr [EDX + 0x8]          ; 0054c197
    FXCH                                ; 0054c19a
    FSTP float ptr [EBP + 0xfffffeba]   ; 0054c19c
    FXCH                                ; 0054c1a2
    FSTP float ptr [EBP + 0xfffffebe]   ; 0054c1a4
    FSTP float ptr [EBP + 0xfffffec2]   ; 0054c1aa
    MOVSD ES:EDI,ESI                    ; 0054c1b0
    MOVSD ES:EDI,ESI                    ; 0054c1b1
    MOVSD ES:EDI,ESI                    ; 0054c1b2
    LEA EDI,[EBP + -0x56]               ; 0054c1b3
    LEA ESI,[EBP + -0x3e]               ; 0054c1b6
    MOVSD ES:EDI,ESI                    ; 0054c1b9
    MOVSD ES:EDI,ESI                    ; 0054c1ba
    MOVSD ES:EDI,ESI                    ; 0054c1bb
    LEA EDI,[EBP + -0x4a]               ; 0054c1bc
    LEA ESI,[EBP + -0x56]               ; 0054c1bf
    MOVSD ES:EDI,ESI                    ; 0054c1c2
    MOVSD ES:EDI,ESI                    ; 0054c1c3
    MOVSD ES:EDI,ESI                    ; 0054c1c4
    FLD float ptr [EBP + -0x46]         ; 0054c1c5
    FMUL ST0                            ; 0054c1c8
    FLD float ptr [EBP + -0x4a]         ; 0054c1ca
    FMUL ST0                            ; 0054c1cd
    FADDP                               ; 0054c1cf
    FLD float ptr [EBP + -0x42]         ; 0054c1d1
    FMUL ST0                            ; 0054c1d4
    FADDP                               ; 0054c1d6
    LEA EAX,[EBP + 0x56]                ; 0054c1d8
    FSTP float ptr [EBP + 0x56]         ; 0054c1db
    FLD float ptr [EAX]                 ; 0054c1de
    FSQRT                               ; 0054c1e0
    FCOMP float ptr [0x00604e54]        ; 0054c1e2 | DAT_00604e54
    FNSTSW AX                           ; 0054c1e8
    SAHF                                ; 0054c1ea
    JBE 0x0054c42d                      ; 0054c1eb
        ;   XREF to: 0054c42d (CONDITIONAL_JUMP)  ; LAB_0054c42d
    PUSH 0x1                            ; 0054c1f1
    PUSH 0x3                            ; 0054c1f3
    LEA EAX,[EBX + 0x158]               ; 0054c1f5
    PUSH EAX                            ; 0054c1fb
    CALL FUN_005247c0                   ; 0054c1fc
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0054c201
    JMP 0x0054bd8e                      ; 0054c204
        ;   XREF to: 0054bd8e (UNCONDITIONAL_JUMP)  ; caseD_d
    CMP ESI,0xb                         ; 0054c209
        ;   Label: LAB_0054c209
    JZ 0x0054c137                       ; 0054c20c
        ;   XREF to: 0054c137 (CONDITIONAL_JUMP)  ; LAB_0054c137
    MOV dword ptr [EBX + 0x2ff0],0x40000000 ; 0054c212
    CMP EDI,0xf                         ; 0054c21c
    JA 0x0054bd8e                       ; 0054c21f
        ;   XREF to: 0054bd8e (CONDITIONAL_JUMP)  ; caseD_d
    JMP dword ptr [EDI*0x4 + 0x54bc44]  ; 0054c225 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV ESI,dword ptr [EBX + 0xc1d4]    ; 0054c22c
        ;   Label: caseD_9
    TEST ESI,ESI                        ; 0054c232
    JNZ 0x0054bd8e                      ; 0054c234
        ;   XREF to: 0054bd8e (CONDITIONAL_JUMP)  ; caseD_d
    CMP dword ptr [EBX + 0xdc],0x0      ; 0054c23a
    JNZ 0x0054bd8e                      ; 0054c241
        ;   XREF to: 0054bd8e (CONDITIONAL_JUMP)  ; caseD_d
    PUSH ESI                            ; 0054c247
    LEA EAX,[EBX + 0x158]               ; 0054c248
    PUSH EAX                            ; 0054c24e
    LEA ESI,[EBP + 0xffffff32]          ; 0054c24f
    LEA EDI,[EBP + -0x26]               ; 0054c255
    CALL FUN_00569040                   ; 0054c258
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined FUN_00569040()
    ADD ESP,0x8                         ; 0054c25d
    LEA EAX,[EBP + -0x26]               ; 0054c260
    LEA ESI,[EBP + 0xffffff32]          ; 0054c263
    PUSH EAX                            ; 0054c269
    MOVSD ES:EDI,ESI                    ; 0054c26a
    MOVSD ES:EDI,ESI                    ; 0054c26b
    MOVSD ES:EDI,ESI                    ; 0054c26c
    PUSH EBX                            ; 0054c26d
    LEA ESI,[EBP + 0xffffff3e]          ; 0054c26e
    CALL FUN_00408b40                   ; 0054c274
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    ADD ESP,0x8                         ; 0054c279
    PUSH 0x0                            ; 0054c27c
    LEA EAX,[EBP + 0xffffff0e]          ; 0054c27e
    LEA EDI,[EBP + 0xffffff0e]          ; 0054c284
    PUSH EAX                            ; 0054c28a
    MOV EAX,[0x0061dca4]                ; 0054c28b | DAT_0061dca4
    LEA ESI,[EBP + 0xffffff3e]          ; 0054c290
    PUSH EAX                            ; 0054c296
    MOVSD ES:EDI,ESI                    ; 0054c297
    MOVSD ES:EDI,ESI                    ; 0054c298
    MOVSD ES:EDI,ESI                    ; 0054c299
    CALL FUN_004e62e0                   ; 0054c29a
        ;   XREF to: 004e62e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e62e0()
    ADD ESP,0xc                         ; 0054c29f
    MOV dword ptr [EBX + 0xc1d4],0x1    ; 0054c2a2
    JMP 0x0054bd8e                      ; 0054c2ac
        ;   XREF to: 0054bd8e (UNCONDITIONAL_JUMP)  ; caseD_d
    LEA EAX,[EBP + 0xfffffdfa]          ; 0054c2b1
        ;   Label: caseD_4
    PUSH EAX                            ; 0054c2b7
    CALL FUN_0042c010                   ; 0054c2b8
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; undefined FUN_0042c010()
    ADD ESP,0x4                         ; 0054c2bd
    PUSH 0x41700000                     ; 0054c2c0
    PUSH 0x40e00000                     ; 0054c2c5
    LEA ESI,[EBP + -0x32]               ; 0054c2ca
    CALL FUN_0040cc00                   ; 0054c2cd
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [EBP + 0x76],EAX      ; 0054c2d2
    ADD ESP,0x8                         ; 0054c2d5
    LEA EAX,[EBP + 0xfffffdfa]          ; 0054c2d8
    MOV EDX,dword ptr [0x01e82104]      ; 0054c2de | DAT_01e82104
    PUSH EAX                            ; 0054c2e4
    LEA EAX,[EDX*0x4 + 0x0]             ; 0054c2e5
    MOV dword ptr [EBP + 0xfffffe2e],EBX ; 0054c2ec
    SUB EAX,EDX                         ; 0054c2f2
    MOV dword ptr [EBP + 0xfffffe32],EBX ; 0054c2f4
    SHL EAX,0x4                         ; 0054c2fa
    LEA EDX,[EBX + 0xfd8]               ; 0054c2fd
    PUSH 0x3f800000                     ; 0054c303
    ADD EAX,EDX                         ; 0054c308
    LEA EDI,[EBP + 0xffffff7a]          ; 0054c30a
    PUSH EAX                            ; 0054c310
    FLD float ptr [EBP + 0x76]          ; 0054c311
    PUSH 0x2c8af28                      ; 0054c314 | DAT_02c8af28
    FSTP float ptr [EBP + 0xfffffdfe]   ; 0054c319
    MOV dword ptr [EBP + 0x46],EDX      ; 0054c31f
    CALL FUN_005b5080                   ; 0054c322
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5080()
    ADD ESP,0x8                         ; 0054c327
    LEA EAX,[EBP + 0xffffff7a]          ; 0054c32a
    LEA ESI,[EBP + -0x32]               ; 0054c330
    PUSH EAX                            ; 0054c333
    MOVSD ES:EDI,ESI                    ; 0054c334
    MOVSD ES:EDI,ESI                    ; 0054c335
    MOVSD ES:EDI,ESI                    ; 0054c336
    PUSH EBX                            ; 0054c337
    LEA ESI,[EBP + -0x1a]               ; 0054c338
    CALL FUN_00408b40                   ; 0054c33b
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    ADD ESP,0x8                         ; 0054c340
    LEA EAX,[EBP + 0x22]                ; 0054c343
    PUSH EAX                            ; 0054c346
    LEA EDI,[EBP + 0x22]                ; 0054c347
    LEA ESI,[EBP + -0x1a]               ; 0054c34a
    PUSH EBX                            ; 0054c34d
    MOVSD ES:EDI,ESI                    ; 0054c34e
    MOVSD ES:EDI,ESI                    ; 0054c34f
    MOVSD ES:EDI,ESI                    ; 0054c350
    CALL FUN_004a0770                   ; 0054c351
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0770()
    ADD ESP,0x10                        ; 0054c356
    PUSH 0x41f00000                     ; 0054c359
    LEA ESI,[EBP + 0xfffffeea]          ; 0054c35e
    PUSH 0x41700000                     ; 0054c364
    LEA EDI,[EBP + -0x6e]               ; 0054c369
    CALL FUN_0040cc00                   ; 0054c36c
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [EBP + 0x76],EAX      ; 0054c371
    ADD ESP,0x8                         ; 0054c374
    LEA EAX,[EBP + 0xfffffdfa]          ; 0054c377
    MOV EDX,dword ptr [0x01e820fc]      ; 0054c37d | DAT_01e820fc
    PUSH EAX                            ; 0054c383
    LEA EAX,[EDX*0x4 + 0x0]             ; 0054c384
    MOV ECX,dword ptr [EBP + 0x46]      ; 0054c38b
    SUB EAX,EDX                         ; 0054c38e
    MOV dword ptr [EBP + 0xfffffe2e],EBX ; 0054c390
    SHL EAX,0x4                         ; 0054c396
    PUSH 0x3f800000                     ; 0054c399
    ADD EAX,ECX                         ; 0054c39e
    MOV dword ptr [EBP + 0xfffffe32],EBX ; 0054c3a0
    PUSH EAX                            ; 0054c3a6
    FLD float ptr [EBP + 0x76]          ; 0054c3a7
    PUSH 0x2c8af28                      ; 0054c3aa | DAT_02c8af28
    FSTP float ptr [EBP + 0xfffffdfe]   ; 0054c3af
    CALL FUN_005b5080                   ; 0054c3b5
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5080()
    ADD ESP,0x8                         ; 0054c3ba
    LEA EAX,[EBP + -0x6e]               ; 0054c3bd
    LEA ESI,[EBP + 0xfffffeea]          ; 0054c3c0
    PUSH EAX                            ; 0054c3c6
    MOVSD ES:EDI,ESI                    ; 0054c3c7
    MOVSD ES:EDI,ESI                    ; 0054c3c8
    MOVSD ES:EDI,ESI                    ; 0054c3c9
    PUSH EBX                            ; 0054c3ca
    LEA ESI,[EBP + -0x2]                ; 0054c3cb
    CALL FUN_00408b40                   ; 0054c3ce
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    ADD ESP,0x8                         ; 0054c3d3
    LEA EAX,[EBP + 0x3a]                ; 0054c3d6
    PUSH EAX                            ; 0054c3d9
    LEA EDI,[EBP + 0x3a]                ; 0054c3da
    LEA ESI,[EBP + -0x2]                ; 0054c3dd
    PUSH EBX                            ; 0054c3e0
    MOVSD ES:EDI,ESI                    ; 0054c3e1
    MOVSD ES:EDI,ESI                    ; 0054c3e2
    MOVSD ES:EDI,ESI                    ; 0054c3e3
    CALL FUN_004a0770                   ; 0054c3e4
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0770()
    ADD ESP,0x10                        ; 0054c3e9
    JMP 0x0054bd8e                      ; 0054c3ec
        ;   XREF to: 0054bd8e (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH dword ptr [EBP + 0x92]         ; 0054c3f1
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x154]     ; 0054c3f7
    PUSH EBX                            ; 0054c3fd
    CALL dword ptr [EAX + 0x144]        ; 0054c3fe
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0054c404
    ADD ESP,0x8                         ; 0054c40a
    TEST EAX,EAX                        ; 0054c40d
    JZ 0x0054bd8e                       ; 0054c40f
        ;   XREF to: 0054bd8e (CONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 0054c415
    PUSH 0x0                            ; 0054c417
    LEA EAX,[EBX + 0x158]               ; 0054c419
    PUSH EAX                            ; 0054c41f
    CALL FUN_005247c0                   ; 0054c420
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0054c425
    JMP 0x0054bd8e                      ; 0054c428
        ;   XREF to: 0054bd8e (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 0054c42d
        ;   Label: LAB_0054c42d
    PUSH 0x2                            ; 0054c42f
    LEA EAX,[EBX + 0x158]               ; 0054c431
    PUSH EAX                            ; 0054c437
    CALL FUN_005247c0                   ; 0054c438
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0054c43d
    JMP 0x0054bd8e                      ; 0054c440
        ;   XREF to: 0054bd8e (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH dword ptr [EBP + 0x92]         ; 0054c445
        ;   Label: LAB_0054c445
    PUSH EBX                            ; 0054c44b
    CALL FUN_004a0fe0                   ; 0054c44c
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0fe0()
    ADD ESP,0x8                         ; 0054c451
    TEST EAX,EAX                        ; 0054c454
    JZ 0x0054c470                       ; 0054c456
        ;   XREF to: 0054c470 (CONDITIONAL_JUMP)  ; LAB_0054c470
    PUSH 0x1                            ; 0054c458
    PUSH 0x2                            ; 0054c45a
    LEA EAX,[EBX + 0x158]               ; 0054c45c
    PUSH EAX                            ; 0054c462
    CALL FUN_005247c0                   ; 0054c463
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0054c468
    JMP 0x0054bd8e                      ; 0054c46b
        ;   XREF to: 0054bd8e (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 0054c470
        ;   Label: LAB_0054c470
    PUSH 0x1                            ; 0054c472
    LEA EAX,[EBX + 0x158]               ; 0054c474
    PUSH EAX                            ; 0054c47a
    CALL FUN_005247c0                   ; 0054c47b
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0054c480
    JMP 0x0054bd8e                      ; 0054c483
        ;   XREF to: 0054bd8e (UNCONDITIONAL_JUMP)  ; caseD_d
    FLD float ptr [EBX + 0xc26c]        ; 0054c488
        ;   Label: caseD_a
    FSUB float ptr [EBP + 0x92]         ; 0054c48e
    FST float ptr [EBX + 0xc26c]        ; 0054c494
    FLDZ                                ; 0054c49a
    FCOMPP                              ; 0054c49c
    FNSTSW AX                           ; 0054c49e
    SAHF                                ; 0054c4a0
    JBE 0x0054bd8e                      ; 0054c4a1
        ;   XREF to: 0054bd8e (CONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 0054c4a7
    PUSH 0xb                            ; 0054c4a9
    LEA EAX,[EBX + 0x158]               ; 0054c4ab
    PUSH EAX                            ; 0054c4b1
    CALL FUN_005247c0                   ; 0054c4b2
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0054c4b7
    JMP 0x0054bd8e                      ; 0054c4ba
        ;   XREF to: 0054bd8e (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH dword ptr [EBP + 0x92]         ; 0054c4bf
        ;   Label: caseD_2
    MOV EAX,dword ptr [EBX + 0x154]     ; 0054c4c5
    PUSH EBX                            ; 0054c4cb
    CALL dword ptr [EAX + 0x144]        ; 0054c4cc
    ADD ESP,0x8                         ; 0054c4d2
    LEA EAX,[EBX + 0x158]               ; 0054c4d5
    MOV ESI,dword ptr [EBX + 0xc1e8]    ; 0054c4db
    MOV dword ptr [EBP + 0x5e],EAX      ; 0054c4e1
    TEST ESI,ESI                        ; 0054c4e4
    JNZ 0x0054c524                      ; 0054c4e6
        ;   XREF to: 0054c524 (CONDITIONAL_JUMP)  ; LAB_0054c524
    PUSH dword ptr [EBP + 0x92]         ; 0054c4e8
    PUSH EBX                            ; 0054c4ee
    CALL FUN_004a0fe0                   ; 0054c4ef
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0fe0()
    ADD ESP,0x8                         ; 0054c4f4
    TEST EAX,EAX                        ; 0054c4f7
    JZ 0x0054c510                       ; 0054c4f9
        ;   XREF to: 0054c510 (CONDITIONAL_JUMP)  ; LAB_0054c510
    PUSH 0x1                            ; 0054c4fb
    PUSH 0x2                            ; 0054c4fd
    MOV EDI,dword ptr [EBP + 0x5e]      ; 0054c4ff
    PUSH EDI                            ; 0054c502
    CALL FUN_005247c0                   ; 0054c503
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0054c508
    JMP 0x0054bd8e                      ; 0054c50b
        ;   XREF to: 0054bd8e (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 0054c510
        ;   Label: LAB_0054c510
    PUSH ESI                            ; 0054c512
    MOV ESI,dword ptr [EBP + 0x5e]      ; 0054c513
    PUSH ESI                            ; 0054c516
    CALL FUN_005247c0                   ; 0054c517
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0054c51c
    JMP 0x0054bd8e                      ; 0054c51f
        ;   XREF to: 0054bd8e (UNCONDITIONAL_JUMP)  ; caseD_d
    MOV EAX,[0x00604e48]                ; 0054c524 | DAT_00604e48
        ;   Label: LAB_0054c524
    PUSH 0x3e32b8c2                     ; 0054c529
    MOV dword ptr [EBP + 0x6e],EAX      ; 0054c52e
    LEA EAX,[EBX + 0x249c]              ; 0054c531
    PUSH 0x3f000000                     ; 0054c537
    MOV dword ptr [EAX + 0x8],0x0       ; 0054c53c
    XOR EDI,EDI                         ; 0054c543
    MOV EDX,dword ptr [EAX + 0x8]       ; 0054c545
    MOV dword ptr [EAX + 0x4],EDX       ; 0054c548
    MOV EDX,dword ptr [EAX + 0x4]       ; 0054c54b
    MOV dword ptr [EAX],EDX             ; 0054c54e
    MOV EAX,dword ptr [EBP + 0x6e]      ; 0054c550
    MOV dword ptr [EBP + -0x7a],EDI     ; 0054c553
    MOV dword ptr [EBP + -0x72],EAX     ; 0054c556
    LEA EAX,[EBP + -0x7a]               ; 0054c559
    MOV dword ptr [EBP + -0x76],EDI     ; 0054c55c
    PUSH EAX                            ; 0054c55f
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0054c560
    PUSH EAX                            ; 0054c566
    MOV EDX,dword ptr [EAX + 0x154]     ; 0054c567
    CALL dword ptr [EDX + 0xc4]         ; 0054c56d
    ADD ESP,0x4                         ; 0054c573
    PUSH EAX                            ; 0054c576
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0054c577
    ADD EAX,0x20                        ; 0054c57d
    PUSH EAX                            ; 0054c580
    PUSH EBX                            ; 0054c581
    CALL FUN_0042ccf0                   ; 0054c582
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042ccf0()
    ADD ESP,0x18                        ; 0054c587
    TEST EAX,EAX                        ; 0054c58a
    JL 0x0054bd8e                       ; 0054c58c
        ;   XREF to: 0054bd8e (CONDITIONAL_JUMP)  ; caseD_d
    LEA EDI,[EBP + 0xa]                 ; 0054c592
    LEA EAX,[EBX + 0x20]                ; 0054c595
    LEA ESI,[EBP + 0x2e]                ; 0054c598
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 0054c59b
    FLD float ptr [EAX]                 ; 0054c5a1
    FLD float ptr [EAX + 0x4]           ; 0054c5a3
    FLD float ptr [EAX + 0x8]           ; 0054c5a6
    FXCH ST2                            ; 0054c5a9
    FSUB float ptr [EDX + 0x20]         ; 0054c5ab
    FXCH                                ; 0054c5ae
    FSUB float ptr [EDX + 0x24]         ; 0054c5b0
    FXCH ST2                            ; 0054c5b3
    FSUB float ptr [EDX + 0x28]         ; 0054c5b5
    FXCH                                ; 0054c5b8
    FSTP float ptr [EBP + 0x2e]         ; 0054c5ba
    FXCH                                ; 0054c5bd
    FSTP float ptr [EBP + 0x32]         ; 0054c5bf
    FSTP float ptr [EBP + 0x36]         ; 0054c5c2
    MOVSD ES:EDI,ESI                    ; 0054c5c5
    MOVSD ES:EDI,ESI                    ; 0054c5c6
    MOVSD ES:EDI,ESI                    ; 0054c5c7
    FLD float ptr [EBP + 0xa]           ; 0054c5c8
    FMUL ST0                            ; 0054c5cb
    FLD float ptr [EBP + 0x12]          ; 0054c5cd
    FMUL ST0                            ; 0054c5d0
    FADDP                               ; 0054c5d2
    FSQRT                               ; 0054c5d4
    XOR EDX,EDX                         ; 0054c5d6
    MOV dword ptr [EBP + 0xe],EDX       ; 0054c5d8
    FSTP float ptr [EBP + 0x5a]         ; 0054c5db
    MOV EAX,dword ptr [EBP + 0x5a]      ; 0054c5de
    FLD float ptr [EBP + 0x5a]          ; 0054c5e1
    MOV dword ptr [EBP + 0x72],EAX      ; 0054c5e4
    FCOMP float ptr [0x00604e54]        ; 0054c5e7 | DAT_00604e54
    FNSTSW AX                           ; 0054c5ed
    SAHF                                ; 0054c5ef
    JBE 0x0054c602                      ; 0054c5f0
        ;   XREF to: 0054c602 (CONDITIONAL_JUMP)  ; LAB_0054c602
    PUSH 0x1                            ; 0054c5f2
    PUSH 0x3                            ; 0054c5f4
    MOV ECX,dword ptr [EBP + 0x5e]      ; 0054c5f6
    PUSH ECX                            ; 0054c5f9
    CALL FUN_005247c0                   ; 0054c5fa
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0054c5ff
    FLD float ptr [EBP + 0x72]          ; 0054c602
        ;   Label: LAB_0054c602
    FCOMP float ptr [EBP + 0x6e]        ; 0054c605
    FNSTSW AX                           ; 0054c608
    SAHF                                ; 0054c60a
    JA 0x0054c6e1                       ; 0054c60b
        ;   XREF to: 0054c6e1 (CONDITIONAL_JUMP)  ; LAB_0054c6e1
    FLD float ptr [EBX + 0xc1e4]        ; 0054c611
    FLDZ                                ; 0054c617
    FCOMPP                              ; 0054c619
    FNSTSW AX                           ; 0054c61b
    SAHF                                ; 0054c61d
    JC 0x0054c6e1                       ; 0054c61e
        ;   XREF to: 0054c6e1 (CONDITIONAL_JUMP)  ; LAB_0054c6e1
    LEA EDI,[EBP + 0xffffff62]          ; 0054c624
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0054c62a
    LEA ESI,[EBP + 0xfffffede]          ; 0054c630
    LEA EDX,[EBX + 0x20]                ; 0054c636
    FLD float ptr [EAX + 0x24]          ; 0054c639
    FLD float ptr [EAX + 0x28]          ; 0054c63c
    FLD float ptr [EAX + 0x20]          ; 0054c63f
    LEA EAX,[EBP + 0xffffff62]          ; 0054c642
    FSUB float ptr [EDX]                ; 0054c648
    FXCH ST2                            ; 0054c64a
    FSUB float ptr [EDX + 0x4]          ; 0054c64c
    FXCH                                ; 0054c64f
    FSUB float ptr [EDX + 0x8]          ; 0054c651
    FXCH ST2                            ; 0054c654
    FSTP float ptr [EBP + 0xfffffede]   ; 0054c656
    FSTP float ptr [EBP + 0xfffffee2]   ; 0054c65c
    FSTP float ptr [EBP + 0xfffffee6]   ; 0054c662
    MOVSD ES:EDI,ESI                    ; 0054c668
    MOVSD ES:EDI,ESI                    ; 0054c669
    MOVSD ES:EDI,ESI                    ; 0054c66a
    PUSH EAX                            ; 0054c66b
    LEA ESI,[EBP + 0xfffffe96]          ; 0054c66c
    LEA EDI,[EBP + 0xfffffe72]          ; 0054c672
    CALL FUN_005a7520                   ; 0054c678
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined FUN_005a7520()
    LEA ESI,[EBP + 0xfffffe96]          ; 0054c67d
    MOVSD ES:EDI,ESI                    ; 0054c683
    MOVSD ES:EDI,ESI                    ; 0054c684
    MOVSD ES:EDI,ESI                    ; 0054c685
    ADD ESP,0x4                         ; 0054c686
    FLD float ptr [EBP + 0xfffffe76]    ; 0054c689
    FSUB float ptr [EBX + 0x34]         ; 0054c68f
    SUB ESP,0x4                         ; 0054c692
    FSTP float ptr [ESP]                ; 0054c695
    CALL FUN_0040cd60                   ; 0054c698
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cd60()
    MOV dword ptr [EBP + 0x76],EAX      ; 0054c69d
    FLD float ptr [EBP + 0x76]          ; 0054c6a0
    FABS                                ; 0054c6a3
    ADD ESP,0x4                         ; 0054c6a5
    FCOMP double ptr [0x005f0409]       ; 0054c6a8 | DAT_005f0409
    FNSTSW AX                           ; 0054c6ae
    SAHF                                ; 0054c6b0
    JNC 0x0054c6e1                      ; 0054c6b1
        ;   XREF to: 0054c6e1 (CONDITIONAL_JUMP)  ; LAB_0054c6e1
    PUSH 0x3f000000                     ; 0054c6b3
    CALL FUN_0040cd00                   ; 0054c6b8
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cd00()
    ADD ESP,0x4                         ; 0054c6bd
    LEA EDX,[EBX + 0x158]               ; 0054c6c0
    TEST EAX,EAX                        ; 0054c6c6
    JZ 0x0054c70b                       ; 0054c6c8
        ;   XREF to: 0054c70b (CONDITIONAL_JUMP)  ; LAB_0054c70b
    PUSH 0x1                            ; 0054c6ca
    PUSH 0x4                            ; 0054c6cc
    PUSH EDX                            ; 0054c6ce
    CALL FUN_005247c0                   ; 0054c6cf
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0054c6d4
    MOV dword ptr [EBX + 0xc1e4],0x3f800000 ; 0054c6d7
        ;   Label: LAB_0054c6d7
    FLD float ptr [EBP + 0x72]          ; 0054c6e1
        ;   Label: LAB_0054c6e1
    FCOMP float ptr [EBX + 0xc1e0]      ; 0054c6e4
    FNSTSW AX                           ; 0054c6ea
    SAHF                                ; 0054c6ec
    JBE 0x0054bd8e                      ; 0054c6ed
        ;   XREF to: 0054bd8e (CONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 0054c6f3
    PUSH 0x0                            ; 0054c6f5
    LEA EAX,[EBX + 0x158]               ; 0054c6f7
    PUSH EAX                            ; 0054c6fd
    CALL FUN_005247c0                   ; 0054c6fe
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0054c703
    JMP 0x0054bd8e                      ; 0054c706
        ;   XREF to: 0054bd8e (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 0054c70b
        ;   Label: LAB_0054c70b
    PUSH 0xa                            ; 0054c70d
    PUSH EDX                            ; 0054c70f
    CALL FUN_005247c0                   ; 0054c710
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0054c715
    MOV dword ptr [EBX + 0xc26c],0x40a00000 ; 0054c718
    JMP 0x0054c6d7                      ; 0054c722
        ;   XREF to: 0054c6d7 (UNCONDITIONAL_JUMP)  ; LAB_0054c6d7
    PUSH dword ptr [EBP + 0x92]         ; 0054c724
        ;   Label: caseD_3
    MOV EAX,dword ptr [EBX + 0x154]     ; 0054c72a
    PUSH EBX                            ; 0054c730
    CALL dword ptr [EAX + 0x144]        ; 0054c731
    ADD ESP,0x8                         ; 0054c737
    LEA EAX,[EBX + 0x158]               ; 0054c73a
    MOV ESI,dword ptr [EBX + 0xc1e8]    ; 0054c740
    MOV dword ptr [EBP + 0x62],EAX      ; 0054c746
    TEST ESI,ESI                        ; 0054c749
    JNZ 0x0054c75e                      ; 0054c74b
        ;   XREF to: 0054c75e (CONDITIONAL_JUMP)  ; LAB_0054c75e
    PUSH 0x1                            ; 0054c74d
    PUSH ESI                            ; 0054c74f
    PUSH EAX                            ; 0054c750
    CALL FUN_005247c0                   ; 0054c751
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0054c756
    JMP 0x0054bd8e                      ; 0054c759
        ;   XREF to: 0054bd8e (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x3e32b8c2                     ; 0054c75e
        ;   Label: LAB_0054c75e
    LEA EAX,[EBX + 0x249c]              ; 0054c763
    PUSH 0x3f000000                     ; 0054c769
    MOV dword ptr [EAX + 0x8],0x0       ; 0054c76e
    XOR EDI,EDI                         ; 0054c775
    MOV EDX,dword ptr [EAX + 0x8]       ; 0054c777
    MOV dword ptr [EAX + 0x4],EDX       ; 0054c77a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0054c77d
    MOV dword ptr [EAX],EDX             ; 0054c780
    MOV EAX,[0x00604e48]                ; 0054c782 | DAT_00604e48
    MOV dword ptr [EBP + 0xffffff02],EDI ; 0054c787
    MOV dword ptr [EBP + 0xffffff0a],EAX ; 0054c78d
    LEA EAX,[EBP + 0xffffff02]          ; 0054c793
    MOV dword ptr [EBP + 0xffffff06],EDI ; 0054c799
    PUSH EAX                            ; 0054c79f
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0054c7a0
    PUSH EAX                            ; 0054c7a6
    MOV EDX,dword ptr [EAX + 0x154]     ; 0054c7a7
    CALL dword ptr [EDX + 0xc4]         ; 0054c7ad
    ADD ESP,0x4                         ; 0054c7b3
    PUSH EAX                            ; 0054c7b6
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0054c7b7
    ADD EAX,0x20                        ; 0054c7bd
    PUSH EAX                            ; 0054c7c0
    PUSH EBX                            ; 0054c7c1
    LEA ESI,[EBP + 0xffffff4a]          ; 0054c7c2
    CALL FUN_0042ccf0                   ; 0054c7c8
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042ccf0()
    LEA EAX,[EBX + 0x20]                ; 0054c7cd
    LEA EDI,[EBP + 0xffffff56]          ; 0054c7d0
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 0054c7d6
    FLD float ptr [EAX]                 ; 0054c7dc
    FLD float ptr [EAX + 0x4]           ; 0054c7de
    FLD float ptr [EAX + 0x8]           ; 0054c7e1
    FXCH ST2                            ; 0054c7e4
    FSUB float ptr [EDX + 0x20]         ; 0054c7e6
    FXCH                                ; 0054c7e9
    FSUB float ptr [EDX + 0x24]         ; 0054c7eb
    FXCH ST2                            ; 0054c7ee
    FSUB float ptr [EDX + 0x28]         ; 0054c7f0
    FXCH                                ; 0054c7f3
    FSTP float ptr [EBP + 0xffffff4a]   ; 0054c7f5
    FXCH                                ; 0054c7fb
    FSTP float ptr [EBP + 0xffffff4e]   ; 0054c7fd
    FSTP float ptr [EBP + 0xffffff52]   ; 0054c803
    MOVSD ES:EDI,ESI                    ; 0054c809
    MOVSD ES:EDI,ESI                    ; 0054c80a
    MOVSD ES:EDI,ESI                    ; 0054c80b
    FLD float ptr [EBP + 0xffffff5a]    ; 0054c80c
    FMUL ST0                            ; 0054c812
    FLD float ptr [EBP + 0xffffff56]    ; 0054c814
    FMUL ST0                            ; 0054c81a
    FADDP                               ; 0054c81c
    FLD float ptr [EBP + 0xffffff5e]    ; 0054c81e
    FMUL ST0                            ; 0054c824
    FADDP                               ; 0054c826
    FSQRT                               ; 0054c828
    ADD ESP,0x18                        ; 0054c82a
    FCOMP float ptr [0x00604e54]        ; 0054c82d | DAT_00604e54
    FNSTSW AX                           ; 0054c833
    SAHF                                ; 0054c835
    JNC 0x0054c8c3                      ; 0054c836
        ;   XREF to: 0054c8c3 (CONDITIONAL_JUMP)  ; LAB_0054c8c3
    PUSH 0x3f000000                     ; 0054c83c
    CALL FUN_0040cd00                   ; 0054c841
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cd00()
    ADD ESP,0x4                         ; 0054c846
    TEST EAX,EAX                        ; 0054c849
    JZ 0x0054c888                       ; 0054c84b
        ;   XREF to: 0054c888 (CONDITIONAL_JUMP)  ; LAB_0054c888
    PUSH 0x3f000000                     ; 0054c84d
    CALL FUN_0040cd00                   ; 0054c852
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cd00()
    ADD ESP,0x4                         ; 0054c857
    TEST EAX,EAX                        ; 0054c85a
    JZ 0x0054c873                       ; 0054c85c
        ;   XREF to: 0054c873 (CONDITIONAL_JUMP)  ; LAB_0054c873
    PUSH 0x1                            ; 0054c85e
    PUSH 0xe                            ; 0054c860
    MOV EDX,dword ptr [EBP + 0x62]      ; 0054c862
    PUSH EDX                            ; 0054c865
    CALL FUN_005247c0                   ; 0054c866
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0054c86b
    JMP 0x0054bd8e                      ; 0054c86e
        ;   XREF to: 0054bd8e (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 0054c873
        ;   Label: LAB_0054c873
    PUSH 0xf                            ; 0054c875
    MOV EAX,dword ptr [EBP + 0x62]      ; 0054c877
    PUSH EAX                            ; 0054c87a
    CALL FUN_005247c0                   ; 0054c87b
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0054c880
    JMP 0x0054bd8e                      ; 0054c883
        ;   XREF to: 0054bd8e (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x3f000000                     ; 0054c888
        ;   Label: LAB_0054c888
    CALL FUN_0040cd00                   ; 0054c88d
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cd00()
    ADD ESP,0x4                         ; 0054c892
    TEST EAX,EAX                        ; 0054c895
    JZ 0x0054c8ae                       ; 0054c897
        ;   XREF to: 0054c8ae (CONDITIONAL_JUMP)  ; LAB_0054c8ae
    PUSH 0x1                            ; 0054c899
    PUSH 0x4                            ; 0054c89b
    MOV EDI,dword ptr [EBP + 0x62]      ; 0054c89d
    PUSH EDI                            ; 0054c8a0
    CALL FUN_005247c0                   ; 0054c8a1
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0054c8a6
    JMP 0x0054bd8e                      ; 0054c8a9
        ;   XREF to: 0054bd8e (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 0054c8ae
        ;   Label: LAB_0054c8ae
    PUSH 0x2                            ; 0054c8b0
    MOV ESI,dword ptr [EBP + 0x62]      ; 0054c8b2
    PUSH ESI                            ; 0054c8b5
    CALL FUN_005247c0                   ; 0054c8b6
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0054c8bb
    JMP 0x0054bd8e                      ; 0054c8be
        ;   XREF to: 0054bd8e (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x3dcccccd                     ; 0054c8c3
        ;   Label: LAB_0054c8c3
    CALL FUN_0040cd00                   ; 0054c8c8
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cd00()
    ADD ESP,0x4                         ; 0054c8cd
    TEST EAX,EAX                        ; 0054c8d0
    JZ 0x0054bd8e                       ; 0054c8d2
        ;   XREF to: 0054bd8e (CONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x3f000000                     ; 0054c8d8
    CALL FUN_0040cd00                   ; 0054c8dd
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cd00()
    ADD ESP,0x4                         ; 0054c8e2
    TEST EAX,EAX                        ; 0054c8e5
    JZ 0x0054c8fe                       ; 0054c8e7
        ;   XREF to: 0054c8fe (CONDITIONAL_JUMP)  ; LAB_0054c8fe
    PUSH 0x1                            ; 0054c8e9
    PUSH 0xe                            ; 0054c8eb
    MOV ECX,dword ptr [EBP + 0x62]      ; 0054c8ed
    PUSH ECX                            ; 0054c8f0
    CALL FUN_005247c0                   ; 0054c8f1
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0054c8f6
    JMP 0x0054bd8e                      ; 0054c8f9
        ;   XREF to: 0054bd8e (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 0054c8fe
        ;   Label: LAB_0054c8fe
    PUSH 0xf                            ; 0054c900
    MOV EDX,dword ptr [EBP + 0x62]      ; 0054c902
    PUSH EDX                            ; 0054c905
    CALL FUN_005247c0                   ; 0054c906
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0054c90b
    JMP 0x0054bd8e                      ; 0054c90e
        ;   XREF to: 0054bd8e (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH dword ptr [EBP + 0x92]         ; 0054c913
        ;   Label: caseD_e
    MOV EAX,dword ptr [EBX + 0x154]     ; 0054c919
    PUSH EBX                            ; 0054c91f
    CALL dword ptr [EAX + 0x144]        ; 0054c920
    MOV ECX,dword ptr [EBX + 0xc1e8]    ; 0054c926
    ADD ESP,0x8                         ; 0054c92c
    TEST ECX,ECX                        ; 0054c92f
    JNZ 0x0054c94a                      ; 0054c931
        ;   XREF to: 0054c94a (CONDITIONAL_JUMP)  ; LAB_0054c94a
    PUSH 0x1                            ; 0054c933
    PUSH ECX                            ; 0054c935
    LEA EAX,[EBX + 0x158]               ; 0054c936
    PUSH EAX                            ; 0054c93c
    CALL FUN_005247c0                   ; 0054c93d
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0054c942
    JMP 0x0054bd8e                      ; 0054c945
        ;   XREF to: 0054bd8e (UNCONDITIONAL_JUMP)  ; caseD_d
    LEA EDI,[EBP + -0xe]                ; 0054c94a
        ;   Label: LAB_0054c94a
    MOV EAX,ECX                         ; 0054c94d
    LEA ESI,[EBP + 0xfffffeae]          ; 0054c94f
    LEA EDX,[EBX + 0x20]                ; 0054c955
    FLD float ptr [EAX + 0x24]          ; 0054c958
    FLD float ptr [EAX + 0x28]          ; 0054c95b
    FLD float ptr [EAX + 0x20]          ; 0054c95e
    LEA EAX,[EBP + -0xe]                ; 0054c961
    FSUB float ptr [EDX]                ; 0054c964
    FXCH ST2                            ; 0054c966
    FSUB float ptr [EDX + 0x4]          ; 0054c968
    FXCH                                ; 0054c96b
    FSUB float ptr [EDX + 0x8]          ; 0054c96d
    FXCH ST2                            ; 0054c970
    FSTP float ptr [EBP + 0xfffffeae]   ; 0054c972
    FSTP float ptr [EBP + 0xfffffeb2]   ; 0054c978
    FSTP float ptr [EBP + 0xfffffeb6]   ; 0054c97e
    MOVSD ES:EDI,ESI                    ; 0054c984
    MOVSD ES:EDI,ESI                    ; 0054c985
    MOVSD ES:EDI,ESI                    ; 0054c986
    PUSH EAX                            ; 0054c987
    LEA ESI,[EBP + 0xfffffec6]          ; 0054c988
    LEA EDI,[EBP + 0xffffff1a]          ; 0054c98e
    CALL FUN_005a7520                   ; 0054c994
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined FUN_005a7520()
    LEA ESI,[EBP + 0xfffffec6]          ; 0054c999
    MOVSD ES:EDI,ESI                    ; 0054c99f
    MOVSD ES:EDI,ESI                    ; 0054c9a0
    MOVSD ES:EDI,ESI                    ; 0054c9a1
    MOV EAX,dword ptr [EBP + 0xffffff1e] ; 0054c9a2
    ADD ESP,0x4                         ; 0054c9a8
    MOV dword ptr [EBX + 0x34],EAX      ; 0054c9ab
    JMP 0x0054bd8e                      ; 0054c9ae
        ;   XREF to: 0054bd8e (UNCONDITIONAL_JUMP)  ; caseD_d

