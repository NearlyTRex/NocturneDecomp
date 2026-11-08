; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bfc00(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e0752
;   undefined4 DAT_005e075a
;
; Called Functions:
;   FUN_00408b00
;   FUN_004c0530
;   FUN_004c0630
;   FUN_005c0880
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bfc00
        ;   Label: FUN_004bfc00
    PUSH ESI                            ; 004bfc01
    PUSH EDI                            ; 004bfc02
    PUSH EBP                            ; 004bfc03
    MOV EBP,ESP                         ; 004bfc04
    SUB ESP,0x78                        ; 004bfc06
    AND ESP,0xfffffff8                  ; 004bfc09
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bfc0c
    CMP dword ptr [EAX + 0x2a1c],0x0    ; 004bfc0f
    JZ 0x004bfe91                       ; 004bfc16
        ;   XREF to: 004bfe91 (CONDITIONAL_JUMP)  ; LAB_004bfe91
    MOV ECX,dword ptr [EAX + 0x2a08]    ; 004bfc1c
    TEST ECX,ECX                        ; 004bfc22
    JZ 0x004bfdf4                       ; 004bfc24
        ;   XREF to: 004bfdf4 (CONDITIONAL_JUMP)  ; LAB_004bfdf4
    MOV EBX,dword ptr [ECX + 0x70]      ; 004bfc2a
    MOV EDX,ECX                         ; 004bfc2d
    CMP EBX,0x1                         ; 004bfc2f
    JNZ 0x004bfe98                      ; 004bfc32
        ;   XREF to: 004bfe98 (CONDITIONAL_JUMP)  ; LAB_004bfe98
    FLD float ptr [EDX + 0x20]          ; 004bfc38
    FLD float ptr [EDX + 0x24]          ; 004bfc3b
    FLD float ptr [EDX + 0x28]          ; 004bfc3e
    LEA EDI,[ESP + 0x8]                 ; 004bfc41
    LEA ESI,[ESP + 0x44]                ; 004bfc45
    FXCH ST2                            ; 004bfc49
    FSUB float ptr [EAX + 0x20]         ; 004bfc4b
    FXCH                                ; 004bfc4e
    FSUB float ptr [EAX + 0x24]         ; 004bfc50
    FXCH ST2                            ; 004bfc53
    FSUB float ptr [EAX + 0x28]         ; 004bfc55
    FXCH                                ; 004bfc58
    FSTP float ptr [ESP + 0x44]         ; 004bfc5a
    FXCH                                ; 004bfc5e
    FSTP float ptr [ESP + 0x48]         ; 004bfc60
    FSTP float ptr [ESP + 0x4c]         ; 004bfc64
    MOVSD ES:EDI,ESI                    ; 004bfc68
    MOVSD ES:EDI,ESI                    ; 004bfc69
    MOVSD ES:EDI,ESI                    ; 004bfc6a
    FLD float ptr [ESP + 0xc]           ; 004bfc6b
    FMUL ST0                            ; 004bfc6f
    FLD float ptr [ESP + 0x8]           ; 004bfc71
    FMUL ST0                            ; 004bfc75
    FADDP                               ; 004bfc77
    FLD float ptr [ESP + 0x10]          ; 004bfc79
    FMUL ST0                            ; 004bfc7d
    FADDP                               ; 004bfc7f
    FSQRT                               ; 004bfc81
    FLDZ                                ; 004bfc83
    FCOMPP                              ; 004bfc85
    FNSTSW AX                           ; 004bfc87
    SAHF                                ; 004bfc89
    JNC 0x004bfdd0                      ; 004bfc8a
        ;   XREF to: 004bfdd0 (CONDITIONAL_JUMP)  ; LAB_004bfdd0
    LEA EAX,[ESP + 0x8]                 ; 004bfc90
    PUSH EAX                            ; 004bfc94
    MOV ESI,dword ptr [EBP + 0x14]      ; 004bfc95
    PUSH ESI                            ; 004bfc98
    LEA ESI,[ESP + 0x58]                ; 004bfc99
    LEA EDI,[ESP + 0x28]                ; 004bfc9d
    CALL FUN_00408b00                   ; 004bfca1
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b00()
    LEA ESI,[ESP + 0x58]                ; 004bfca6
    ADD ESP,0x8                         ; 004bfcaa
    MOVSD ES:EDI,ESI                    ; 004bfcad
    MOVSD ES:EDI,ESI                    ; 004bfcae
    MOVSD ES:EDI,ESI                    ; 004bfcaf
    FLD float ptr [0x005e0752]          ; 004bfcb0 | DAT_005e0752
    FLD float ptr [ESP + 0x20]          ; 004bfcb6
    FMUL ST1                            ; 004bfcba
    FLD float ptr [ESP + 0x24]          ; 004bfcbc
    FMUL ST2                            ; 004bfcc0
    FLD float ptr [ESP + 0x28]          ; 004bfcc2
    FMULP ST3                           ; 004bfcc6
    LEA EAX,[ESP + 0x14]                ; 004bfcc8
    LEA EDX,[ESP + 0x8]                 ; 004bfccc
    LEA EDI,[ESP + 0x14]                ; 004bfcd0
    LEA ESI,[ESP + 0x5c]                ; 004bfcd4
    FXCH                                ; 004bfcd8
    FSTP float ptr [ESP + 0x5c]         ; 004bfcda
    FSTP float ptr [ESP + 0x60]         ; 004bfcde
    FSTP float ptr [ESP + 0x64]         ; 004bfce2
    MOVSD ES:EDI,ESI                    ; 004bfce6
    MOVSD ES:EDI,ESI                    ; 004bfce7
    MOVSD ES:EDI,ESI                    ; 004bfce8
    CMP EDX,EAX                         ; 004bfce9
    JZ 0x004bfd05                       ; 004bfceb
        ;   XREF to: 004bfd05 (CONDITIONAL_JUMP)  ; LAB_004bfd05
    MOV EAX,dword ptr [ESP + 0x14]      ; 004bfced
    MOV dword ptr [ESP + 0x8],EAX       ; 004bfcf1
    MOV EAX,dword ptr [ESP + 0x18]      ; 004bfcf5
    MOV dword ptr [ESP + 0xc],EAX       ; 004bfcf9
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004bfcfd
    MOV dword ptr [ESP + 0x10],EAX      ; 004bfd01
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bfd05
        ;   Label: LAB_004bfd05
    MOV EDI,dword ptr [EAX + 0x164]     ; 004bfd08
    XOR EBX,EBX                         ; 004bfd0e
    TEST EDI,EDI                        ; 004bfd10
    JLE 0x004bfdd0                      ; 004bfd12
        ;   XREF to: 004bfdd0 (CONDITIONAL_JUMP)  ; LAB_004bfdd0
    LEA EDX,[EAX + 0x184]               ; 004bfd18
    MOV ESI,dword ptr [EBP + 0x14]      ; 004bfd1e
    ADD EAX,0x16c                       ; 004bfd21
    FLD float ptr [EAX]                 ; 004bfd26
        ;   Label: LAB_004bfd26
    FSUB float ptr [ESP + 0x8]          ; 004bfd28
    FLD float ptr [EAX + 0x4]           ; 004bfd2c
    FXCH                                ; 004bfd2f
    FSTP float ptr [EAX]                ; 004bfd31
    FSUB float ptr [ESP + 0xc]          ; 004bfd33
    FLD float ptr [EAX + 0x8]           ; 004bfd37
    FXCH                                ; 004bfd3a
    FSTP float ptr [EAX + 0x4]          ; 004bfd3c
    FSUB float ptr [ESP + 0x10]         ; 004bfd3f
    FLD float ptr [EAX + 0xc]           ; 004bfd43
    FXCH                                ; 004bfd46
    FSTP float ptr [EAX + 0x8]          ; 004bfd48
    FSUB float ptr [ESP + 0x8]          ; 004bfd4b
    FLD float ptr [EAX + 0x10]          ; 004bfd4f
    FXCH                                ; 004bfd52
    FSTP float ptr [EAX + 0xc]          ; 004bfd54
    FSUB float ptr [ESP + 0xc]          ; 004bfd57
    FLD float ptr [EAX + 0x14]          ; 004bfd5b
    FXCH                                ; 004bfd5e
    FSTP float ptr [EAX + 0x10]         ; 004bfd60
    FSUB float ptr [ESP + 0x10]         ; 004bfd63
    ADD EDX,0x34                        ; 004bfd67
    FSTP float ptr [EAX + 0x14]         ; 004bfd6a
    FLD float ptr [EDX + -0x34]         ; 004bfd6d
    FSUB float ptr [ESP + 0x8]          ; 004bfd70
    FLD float ptr [EDX + -0x30]         ; 004bfd74
    FXCH                                ; 004bfd77
    FSTP float ptr [EDX + -0x34]        ; 004bfd79
    FSUB float ptr [ESP + 0xc]          ; 004bfd7c
    FLD float ptr [EDX + -0x2c]         ; 004bfd80
    FXCH                                ; 004bfd83
    FSTP float ptr [EDX + -0x30]        ; 004bfd85
    FSUB float ptr [ESP + 0x10]         ; 004bfd88
    FLD float ptr [EDX + -0x28]         ; 004bfd8c
    FXCH                                ; 004bfd8f
    FSTP float ptr [EDX + -0x2c]        ; 004bfd91
    FSUB float ptr [ESP + 0x8]          ; 004bfd94
    FLD float ptr [EDX + -0x24]         ; 004bfd98
    FXCH                                ; 004bfd9b
    FSTP float ptr [EDX + -0x28]        ; 004bfd9d
    FSUB float ptr [ESP + 0xc]          ; 004bfda0
    FLD float ptr [EDX + -0x20]         ; 004bfda4
    FXCH                                ; 004bfda7
    FSTP float ptr [EDX + -0x24]        ; 004bfda9
    FSUB float ptr [ESP + 0x10]         ; 004bfdac
    INC EBX                             ; 004bfdb0
    FSTP float ptr [EDX + -0x20]        ; 004bfdb1
    MOV ECX,dword ptr [ESI + 0x164]     ; 004bfdb4
    ADD EAX,0x34                        ; 004bfdba
    CMP EBX,ECX                         ; 004bfdbd
    JL 0x004bfd26                       ; 004bfdbf
        ;   XREF to: 004bfd26 (CONDITIONAL_JUMP)  ; LAB_004bfd26
    LEA EAX,[EAX]                       ; 004bfdc5
    LEA EDX,[EDX]                       ; 004bfdcb
    MOV EBX,EBX                         ; 004bfdce
    MOV EDX,dword ptr [EBP + 0x14]      ; 004bfdd0
        ;   Label: LAB_004bfdd0
    MOV EDX,dword ptr [EDX + 0x2a08]    ; 004bfdd3
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bfdd9
    MOV ECX,dword ptr [EDX + 0x20]      ; 004bfddc
    MOV dword ptr [EAX + 0x20],ECX      ; 004bfddf
    MOV ECX,dword ptr [EDX + 0x24]      ; 004bfde2
    MOV dword ptr [EAX + 0x24],ECX      ; 004bfde5
    MOV ECX,dword ptr [EDX + 0x28]      ; 004bfde8
    MOV dword ptr [EAX + 0x28],ECX      ; 004bfdeb
    MOV EDX,dword ptr [EDX + 0x2c]      ; 004bfdee
    MOV dword ptr [EAX + 0x2c],EDX      ; 004bfdf1
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bfdf4
        ;   Label: LAB_004bfdf4
    CMP dword ptr [EAX + 0x2a0c],0x0    ; 004bfdf7
    JLE 0x004bfe37                      ; 004bfdfe
        ;   XREF to: 004bfe37 (CONDITIONAL_JUMP)  ; LAB_004bfe37
    FLD float ptr [EAX + 0x2a10]        ; 004bfe00
    FSUB float ptr [EBP + 0x18]         ; 004bfe06
    FST float ptr [EAX + 0x2a10]        ; 004bfe09
    FLDZ                                ; 004bfe0f
    FCOMPP                              ; 004bfe11
    FNSTSW AX                           ; 004bfe13
    SAHF                                ; 004bfe15
    JC 0x004bfe37                       ; 004bfe16
        ;   XREF to: 004bfe37 (CONDITIONAL_JUMP)  ; LAB_004bfe37
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bfe18
    MOV ESI,dword ptr [EAX + 0x164]     ; 004bfe1b
    CMP ESI,0xc8                        ; 004bfe21
    JL 0x004bfea1                       ; 004bfe27
        ;   XREF to: 004bfea1 (CONDITIONAL_JUMP)  ; LAB_004bfea1
    MOV dword ptr [EAX + 0x2a0c],0x0    ; 004bfe2d
    FLD float ptr [EBP + 0x18]          ; 004bfe37
        ;   Label: LAB_004bfe37
    FLD ST0                             ; 004bfe3a
    FMUL double ptr [0x005e075a]        ; 004bfe3c | DAT_005e075a
    XOR EBX,EBX                         ; 004bfe42
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bfe44
    MOV dword ptr [ESP + 0x70],EBX      ; 004bfe47
    MOV ESI,dword ptr [EAX + 0x164]     ; 004bfe4b
    FSTP ST1                            ; 004bfe51
    FSTP float ptr [EBP + 0x18]         ; 004bfe53
    TEST ESI,ESI                        ; 004bfe56
    JLE 0x004bfe91                      ; 004bfe58
        ;   XREF to: 004bfe91 (CONDITIONAL_JUMP)  ; LAB_004bfe91
    LEA EBX,[EAX + 0x168]               ; 004bfe5a
    FLD1                                ; 004bfe60
        ;   Label: LAB_004bfe60
    FLD float ptr [EBX]                 ; 004bfe62
    FADD float ptr [EBP + 0x18]         ; 004bfe64
    MOV dword ptr [ESP + 0x74],EBX      ; 004bfe67
    FST float ptr [EBX]                 ; 004bfe6b
    FSTP double ptr [ESP]               ; 004bfe6d
    FCOMP double ptr [ESP]              ; 004bfe70
    FNSTSW AX                           ; 004bfe73
    SAHF                                ; 004bfe75
    JBE 0x004bfed9                      ; 004bfe76
        ;   XREF to: 004bfed9 (CONDITIONAL_JUMP)  ; LAB_004bfed9
    MOV EDI,dword ptr [ESP + 0x70]      ; 004bfe78
        ;   Label: LAB_004bfe78
    MOV EDX,dword ptr [EBP + 0x14]      ; 004bfe7c
    ADD EBX,0x34                        ; 004bfe7f
    INC EDI                             ; 004bfe82
    MOV ECX,dword ptr [EDX + 0x164]     ; 004bfe83
    MOV dword ptr [ESP + 0x70],EDI      ; 004bfe89
    CMP EDI,ECX                         ; 004bfe8d
    JL 0x004bfe60                       ; 004bfe8f
        ;   XREF to: 004bfe60 (CONDITIONAL_JUMP)  ; LAB_004bfe60
    MOV ESP,EBP                         ; 004bfe91
        ;   Label: LAB_004bfe91
    POP EBP                             ; 004bfe93
    POP EDI                             ; 004bfe94
    POP ESI                             ; 004bfe95
    POP EBX                             ; 004bfe96
    RET                                 ; 004bfe97
    MOV dword ptr [EAX + 0x70],0x2      ; 004bfe98
        ;   Label: LAB_004bfe98
    JMP 0x004bfe91                      ; 004bfe9f
        ;   XREF to: 004bfe91 (UNCONDITIONAL_JUMP)  ; LAB_004bfe91
    PUSH ESI                            ; 004bfea1
        ;   Label: LAB_004bfea1
    PUSH EAX                            ; 004bfea2
    CALL FUN_004c0530                   ; 004bfea3
        ;   XREF to: 004c0530 (UNCONDITIONAL_CALL)  ; undefined FUN_004c0530()
    ADD ESP,0x8                         ; 004bfea8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bfeab
    MOV EDX,dword ptr [EAX + 0x164]     ; 004bfeae
    FLD float ptr [EAX + 0x2a14]        ; 004bfeb4
    INC EDX                             ; 004bfeba
    MOV ECX,dword ptr [EAX + 0x2a0c]    ; 004bfebb
    MOV dword ptr [EAX + 0x164],EDX     ; 004bfec1
    DEC ECX                             ; 004bfec7
    FSTP float ptr [EAX + 0x2a10]       ; 004bfec8
    MOV dword ptr [EAX + 0x2a0c],ECX    ; 004bfece
    JMP 0x004bfe37                      ; 004bfed4
        ;   XREF to: 004bfe37 (UNCONDITIONAL_JUMP)  ; LAB_004bfe37
    MOV ESI,dword ptr [ESP + 0x4]       ; 004bfed9
        ;   Label: LAB_004bfed9
    PUSH ESI                            ; 004bfedd
    MOV EDI,dword ptr [ESP + 0x4]       ; 004bfede
    PUSH EDI                            ; 004bfee2
    CALL FUN_005c0880                   ; 004bfee3
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0880()
    MOV dword ptr [ESP + 0x70],EAX      ; 004bfee8
    MOV dword ptr [ESP + 0x74],EDX      ; 004bfeec
    FLD double ptr [ESP + 0x70]         ; 004bfef0
    LEA EDX,[EBX + 0x4]                 ; 004bfef4
    ADD ESP,0x8                         ; 004bfef7
    FLD float ptr [EBX]                 ; 004bfefa
    FXCH                                ; 004bfefc
    FSUBR ST0,ST1                       ; 004bfefe
    LEA EAX,[EBX + 0x10]                ; 004bff00
    FSTP ST1                            ; 004bff03
    FSTP float ptr [EBX]                ; 004bff05
    CMP EDX,EAX                         ; 004bff07
    JZ 0x004bff1b                       ; 004bff09
        ;   XREF to: 004bff1b (CONDITIONAL_JUMP)  ; LAB_004bff1b
    MOV ECX,dword ptr [EAX]             ; 004bff0b
    MOV dword ptr [EDX],ECX             ; 004bff0d
    MOV ECX,dword ptr [EAX + 0x4]       ; 004bff0f
    MOV dword ptr [EDX + 0x4],ECX       ; 004bff12
    MOV ECX,dword ptr [EAX + 0x8]       ; 004bff15
    MOV dword ptr [EDX + 0x8],ECX       ; 004bff18
    MOV EDX,dword ptr [ESP + 0x74]      ; 004bff1b
        ;   Label: LAB_004bff1b
    MOV EAX,dword ptr [ESP + 0x74]      ; 004bff1f
    ADD EDX,0x1c                        ; 004bff23
    ADD EAX,0x10                        ; 004bff26
    CMP EAX,EDX                         ; 004bff29
    JZ 0x004bff3d                       ; 004bff2b
        ;   XREF to: 004bff3d (CONDITIONAL_JUMP)  ; LAB_004bff3d
    MOV ECX,dword ptr [EDX]             ; 004bff2d
    MOV dword ptr [EAX],ECX             ; 004bff2f
    MOV ECX,dword ptr [EDX + 0x4]       ; 004bff31
    MOV dword ptr [EAX + 0x4],ECX       ; 004bff34
    MOV ECX,dword ptr [EDX + 0x8]       ; 004bff37
    MOV dword ptr [EAX + 0x8],ECX       ; 004bff3a
    MOV EAX,dword ptr [ESP + 0x74]      ; 004bff3d
        ;   Label: LAB_004bff3d
    MOV EDX,dword ptr [ESP + 0x74]      ; 004bff41
    ADD EAX,0x28                        ; 004bff45
    ADD EDX,0x1c                        ; 004bff48
    CMP EDX,EAX                         ; 004bff4b
    JZ 0x004bff5f                       ; 004bff4d
        ;   XREF to: 004bff5f (CONDITIONAL_JUMP)  ; LAB_004bff5f
    MOV ECX,dword ptr [EAX]             ; 004bff4f
    MOV dword ptr [EDX],ECX             ; 004bff51
    MOV ECX,dword ptr [EAX + 0x4]       ; 004bff53
    MOV dword ptr [EDX + 0x4],ECX       ; 004bff56
    MOV ECX,dword ptr [EAX + 0x8]       ; 004bff59
    MOV dword ptr [EDX + 0x8],ECX       ; 004bff5c
    MOV EAX,dword ptr [ESP + 0x74]      ; 004bff5f
        ;   Label: LAB_004bff5f
    ADD EAX,0x1c                        ; 004bff63
    PUSH EAX                            ; 004bff66
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bff67
    PUSH EAX                            ; 004bff6a
    LEA ESI,[ESP + 0x40]                ; 004bff6b
    LEA EDI,[ESP + 0x34]                ; 004bff6f
    CALL FUN_004c0630                   ; 004bff73
        ;   XREF to: 004c0630 (UNCONDITIONAL_CALL)  ; undefined FUN_004c0630()
    ADD ESP,0x8                         ; 004bff78
    LEA ESI,[ESP + 0x38]                ; 004bff7b
    MOV EDX,dword ptr [ESP + 0x74]      ; 004bff7f
    LEA EAX,[ESP + 0x2c]                ; 004bff83
    ADD EDX,0x28                        ; 004bff87
    MOVSD ES:EDI,ESI                    ; 004bff8a
    MOVSD ES:EDI,ESI                    ; 004bff8b
    MOVSD ES:EDI,ESI                    ; 004bff8c
    CMP EDX,EAX                         ; 004bff8d
    JZ 0x004bfe78                       ; 004bff8f
        ;   XREF to: 004bfe78 (CONDITIONAL_JUMP)  ; LAB_004bfe78
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004bff95
    MOV dword ptr [EDX],EAX             ; 004bff99
    MOV EAX,dword ptr [ESP + 0x30]      ; 004bff9b
    MOV dword ptr [EDX + 0x4],EAX       ; 004bff9f
    MOV EAX,dword ptr [ESP + 0x34]      ; 004bffa2
    MOV dword ptr [EDX + 0x8],EAX       ; 004bffa6
    JMP 0x004bfe78                      ; 004bffa9
        ;   XREF to: 004bfe78 (UNCONDITIONAL_JUMP)  ; LAB_004bfe78

