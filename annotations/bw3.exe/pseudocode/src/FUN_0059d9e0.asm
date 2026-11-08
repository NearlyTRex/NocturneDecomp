; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059d9e0(int param_1,float param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_s_confused_while_walking_005d9eeb
;   undefined4 DAT_005d9f19
;   undefined4 DAT_005d9f21
;   void* PTR_DAT_005f1690 = 007f7ea4
;   undefined4 DAT_00600530
;   undefined4 DAT_007f7ea4
;   undefined4 DAT_01d81080
;
; Called Functions:
;   FUN_00408b00
;   FUN_0042c1e0
;   FUN_0042c230
;   FUN_0042cd30
;   FUN_00431660
;   FUN_00433350
;   FUN_00433c60
;   FUN_00433fb0
;   FUN_00434850
;   FUN_00441ff0
;   FUN_004f6930
;   FUN_004f6f10
;   FUN_004fbb70
;   FUN_004fc070
;   FUN_004fc0d0
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059d9e0
        ;   Label: FUN_0059d9e0
    PUSH ESI                            ; 0059d9e1
    PUSH EDI                            ; 0059d9e2
    PUSH EBP                            ; 0059d9e3
    MOV EBP,ESP                         ; 0059d9e4
    SUB ESP,0x6c                        ; 0059d9e6
    AND ESP,0xfffffff8                  ; 0059d9e9
    MOV EBX,dword ptr [EBP + 0x14]      ; 0059d9ec
    FLD float ptr [EBX + 0x487c4]       ; 0059d9ef
    FLD1                                ; 0059d9f5
    FCOMPP                              ; 0059d9f7
    FNSTSW AX                           ; 0059d9f9
    SAHF                                ; 0059d9fb
    JA 0x0059da05                       ; 0059d9fc
        ;   XREF to: 0059da05 (CONDITIONAL_JUMP)  ; LAB_0059da05
    MOV ESP,EBP                         ; 0059d9fe
        ;   Label: LAB_0059d9fe
    POP EBP                             ; 0059da00
    POP EDI                             ; 0059da01
    POP ESI                             ; 0059da02
    POP EBX                             ; 0059da03
    RET                                 ; 0059da04
    PUSH dword ptr [EBP + 0x18]         ; 0059da05
        ;   Label: LAB_0059da05
    MOV EAX,dword ptr [EBX + 0x154]     ; 0059da08
    PUSH EBX                            ; 0059da0e
    CALL dword ptr [EAX + 0x148]        ; 0059da0f
    ADD ESP,0x8                         ; 0059da15
    TEST EAX,EAX                        ; 0059da18
    JZ 0x0059d9fe                       ; 0059da1a
        ;   XREF to: 0059d9fe (CONDITIONAL_JUMP)  ; LAB_0059d9fe
    PUSH dword ptr [EBP + 0x18]         ; 0059da1c
    PUSH EBX                            ; 0059da1f
    CALL FUN_00433c60                   ; 0059da20
        ;   XREF to: 00433c60 (UNCONDITIONAL_CALL)  ; undefined FUN_00433c60()
    LEA EAX,[EBX + 0x249c]              ; 0059da25
    ADD ESP,0x8                         ; 0059da2b
    MOV dword ptr [EAX + 0x8],0x0       ; 0059da2e
    FLD float ptr [EBP + 0x18]          ; 0059da35
    MOV EDX,dword ptr [EAX + 0x8]       ; 0059da38
    MOV dword ptr [EAX + 0x4],EDX       ; 0059da3b
    MOV EDX,dword ptr [EAX + 0x4]       ; 0059da3e
    MOV dword ptr [EAX],EDX             ; 0059da41
    FMUL float ptr [EBX + 0xcdcc]       ; 0059da43
    LEA ESI,[EBX + 0x158]               ; 0059da49
    FSTP float ptr [ESP]                ; 0059da4f
    FLD float ptr [ESP]                 ; 0059da52
        ;   Label: LAB_0059da52
    FLDZ                                ; 0059da55
    FCOMPP                              ; 0059da57
    FNSTSW AX                           ; 0059da59
    SAHF                                ; 0059da5b
    JNC 0x0059da76                      ; 0059da5c
        ;   XREF to: 0059da76 (CONDITIONAL_JUMP)  ; LAB_0059da76
    MOV EAX,ESP                         ; 0059da5e
    PUSH EAX                            ; 0059da60
    PUSH ESI                            ; 0059da61
    CALL FUN_004fbb70                   ; 0059da62
        ;   XREF to: 004fbb70 (UNCONDITIONAL_CALL)  ; undefined FUN_004fbb70()
    ADD ESP,0x8                         ; 0059da67
    PUSH EAX                            ; 0059da6a
    PUSH EBX                            ; 0059da6b
    CALL FUN_00433fb0                   ; 0059da6c
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00433fb0()
    ADD ESP,0x8                         ; 0059da71
    JMP 0x0059da52                      ; 0059da74
        ;   XREF to: 0059da52 (UNCONDITIONAL_JUMP)  ; LAB_0059da52
    PUSH ESI                            ; 0059da76
        ;   Label: LAB_0059da76
    CALL FUN_004fc070                   ; 0059da77
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc070()
    ADD ESP,0x4                         ; 0059da7c
    FLD float ptr [EBP + 0x18]          ; 0059da7f
    FMUL float ptr [EBX + 0xcdcc]       ; 0059da82
    FLD float ptr [EBX + 0x24a4]        ; 0059da88
    MOV ESI,dword ptr [EAX + 0x24]      ; 0059da8e
    SUB ESP,0x4                         ; 0059da91
    FSTP float ptr [EBX + 0x2524]       ; 0059da94
    FSTP float ptr [ESP]                ; 0059da9a
    PUSH EBX                            ; 0059da9d
    CALL FUN_00434850                   ; 0059da9e
        ;   XREF to: 00434850 (UNCONDITIONAL_CALL)  ; undefined FUN_00434850()
    ADD ESP,0x8                         ; 0059daa3
    CMP ESI,0x4                         ; 0059daa6
    JNZ 0x0059dac1                      ; 0059daa9
        ;   XREF to: 0059dac1 (CONDITIONAL_JUMP)  ; LAB_0059dac1
    FLD float ptr [EBX + 0x2528]        ; 0059daab
    FLD ST0                             ; 0059dab1
    FMUL double ptr [0x005d9f19]        ; 0059dab3 | DAT_005d9f19
    FSTP ST1                            ; 0059dab9
    FSTP float ptr [EBX + 0x2528]       ; 0059dabb
    PUSH dword ptr [EBP + 0x18]         ; 0059dac1
        ;   Label: LAB_0059dac1
    PUSH EBX                            ; 0059dac4
    CALL FUN_00431660                   ; 0059dac5
        ;   XREF to: 00431660 (UNCONDITIONAL_CALL)  ; undefined FUN_00431660()
    ADD ESP,0x8                         ; 0059daca
    LEA ESI,[EBX + 0x158]               ; 0059dacd
    TEST EAX,EAX                        ; 0059dad3
    JZ 0x0059dc65                       ; 0059dad5
        ;   XREF to: 0059dc65 (CONDITIONAL_JUMP)  ; LAB_0059dc65
    MOV EAX,dword ptr [EBX + 0x273c]    ; 0059dadb
    CMP EAX,0x2                         ; 0059dae1
    JNC 0x0059dc51                      ; 0059dae4
        ;   XREF to: 0059dc51 (CONDITIONAL_JUMP)  ; LAB_0059dc51
    CMP EAX,0x1                         ; 0059daea
    JNZ 0x0059dc5c                      ; 0059daed
        ;   XREF to: 0059dc5c (CONDITIONAL_JUMP)  ; LAB_0059dc5c
    PUSH 0x1                            ; 0059daf3
        ;   Label: LAB_0059daf3
    PUSH 0x1                            ; 0059daf5
    LEA EAX,[EBX + 0x158]               ; 0059daf7
        ;   Label: LAB_0059daf7
    PUSH EAX                            ; 0059dafd
    CALL FUN_004fc0d0                   ; 0059dafe
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc0d0()
    ADD ESP,0xc                         ; 0059db03
        ;   Label: LAB_0059db03
    LEA EAX,[EBX + 0x249c]              ; 0059db06
    MOV dword ptr [EAX + 0x8],0x0       ; 0059db0c
    MOV EDX,dword ptr [EAX + 0x8]       ; 0059db13
    MOV dword ptr [EAX + 0x4],EDX       ; 0059db16
    MOV EDX,dword ptr [EAX + 0x4]       ; 0059db19
    MOV dword ptr [EAX],EDX             ; 0059db1c
    PUSH dword ptr [EBP + 0x18]         ; 0059db1e
        ;   Label: LAB_0059db1e
    PUSH EBX                            ; 0059db21
    LEA ESI,[EBX + 0x2518]              ; 0059db22
    CALL FUN_0042c1e0                   ; 0059db28
        ;   XREF to: 0042c1e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042c1e0()
    ADD ESP,0x8                         ; 0059db2d
    FLD float ptr [ESI]                 ; 0059db30
    FMUL float ptr [EBP + 0x18]         ; 0059db32
    FLD float ptr [ESI + 0x4]           ; 0059db35
    FMUL float ptr [EBP + 0x18]         ; 0059db38
    FLD float ptr [ESI + 0x8]           ; 0059db3b
    FMUL float ptr [EBP + 0x18]         ; 0059db3e
    LEA EDI,[ESP + 0x1c]                ; 0059db41
    LEA ESI,[ESP + 0x28]                ; 0059db45
    FXCH ST2                            ; 0059db49
    FSTP float ptr [ESP + 0x28]         ; 0059db4b
    FSTP float ptr [ESP + 0x2c]         ; 0059db4f
    FSTP float ptr [ESP + 0x30]         ; 0059db53
    MOVSD ES:EDI,ESI                    ; 0059db57
    MOVSD ES:EDI,ESI                    ; 0059db58
    MOVSD ES:EDI,ESI                    ; 0059db59
    LEA EDX,[EBX + 0x250c]              ; 0059db5a
    FLD float ptr [ESP + 0x1c]          ; 0059db60
    FLD float ptr [ESP + 0x20]          ; 0059db64
    FLD float ptr [ESP + 0x24]          ; 0059db68
    LEA EDI,[ESP + 0x4]                 ; 0059db6c
    LEA ESI,[ESP + 0x58]                ; 0059db70
    FXCH ST2                            ; 0059db74
    FADD float ptr [EDX]                ; 0059db76
    FXCH                                ; 0059db78
    FADD float ptr [EDX + 0x4]          ; 0059db7a
    FXCH ST2                            ; 0059db7d
    FADD float ptr [EDX + 0x8]          ; 0059db7f
    FXCH                                ; 0059db82
    FSTP float ptr [ESP + 0x58]         ; 0059db84
    FXCH                                ; 0059db88
    FSTP float ptr [ESP + 0x5c]         ; 0059db8a
    FSTP float ptr [ESP + 0x60]         ; 0059db8e
    MOVSD ES:EDI,ESI                    ; 0059db92
    MOVSD ES:EDI,ESI                    ; 0059db93
    MOVSD ES:EDI,ESI                    ; 0059db94
    LEA EAX,[EBX + 0x249c]              ; 0059db95
    FLD float ptr [ESP + 0x4]           ; 0059db9b
    FLD float ptr [ESP + 0x8]           ; 0059db9f
    FLD float ptr [ESP + 0xc]           ; 0059dba3
    LEA EDI,[ESP + 0x10]                ; 0059dba7
    LEA ESI,[ESP + 0x34]                ; 0059dbab
    FXCH ST2                            ; 0059dbaf
    FADD float ptr [EAX]                ; 0059dbb1
    FXCH                                ; 0059dbb3
    FADD float ptr [EAX + 0x4]          ; 0059dbb5
    FXCH ST2                            ; 0059dbb8
    FADD float ptr [EAX + 0x8]          ; 0059dbba
    FXCH                                ; 0059dbbd
    FSTP float ptr [ESP + 0x34]         ; 0059dbbf
    FXCH                                ; 0059dbc3
    FSTP float ptr [ESP + 0x38]         ; 0059dbc5
    FSTP float ptr [ESP + 0x3c]         ; 0059dbc9
    MOVSD ES:EDI,ESI                    ; 0059dbcd
    MOVSD ES:EDI,ESI                    ; 0059dbce
    MOVSD ES:EDI,ESI                    ; 0059dbcf
    MOV dword ptr [EDX + 0x8],0x0       ; 0059dbd0
    MOV ECX,dword ptr [EDX + 0x8]       ; 0059dbd7
    MOV dword ptr [EDX + 0x4],ECX       ; 0059dbda
    MOV ECX,dword ptr [EDX + 0x4]       ; 0059dbdd
    MOV dword ptr [EDX],ECX             ; 0059dbe0
    MOV dword ptr [EAX + 0x8],0x0       ; 0059dbe2
    MOV EDX,dword ptr [EAX + 0x8]       ; 0059dbe9
    MOV dword ptr [EAX + 0x4],EDX       ; 0059dbec
    MOV EDX,dword ptr [EAX + 0x4]       ; 0059dbef
    MOV dword ptr [EAX],EDX             ; 0059dbf2
    LEA EAX,[ESP + 0x10]                ; 0059dbf4
    PUSH EAX                            ; 0059dbf8
    PUSH EBX                            ; 0059dbf9
    CALL FUN_0042c230                   ; 0059dbfa
        ;   XREF to: 0042c230 (UNCONDITIONAL_CALL)  ; undefined FUN_0042c230()
    ADD ESP,0x8                         ; 0059dbff
    PUSH EBX                            ; 0059dc02
    CALL FUN_0042cd30                   ; 0059dc03
        ;   XREF to: 0042cd30 (UNCONDITIONAL_CALL)  ; undefined FUN_0042cd30()
    ADD ESP,0x4                         ; 0059dc08
    LEA EAX,[EBX + 0x158]               ; 0059dc0b
    PUSH EAX                            ; 0059dc11
    CALL FUN_0054c130                   ; 0059dc12
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; undefined FUN_0054c130()
    ADD ESP,0x4                         ; 0059dc17
    PUSH dword ptr [EBP + 0x18]         ; 0059dc1a
    PUSH EBX                            ; 0059dc1d
    CALL FUN_00433350                   ; 0059dc1e
        ;   XREF to: 00433350 (UNCONDITIONAL_CALL)  ; undefined FUN_00433350()
    ADD ESP,0x8                         ; 0059dc23
    MOV ESP,EBP                         ; 0059dc26
    POP EBP                             ; 0059dc28
    POP EDI                             ; 0059dc29
    POP ESI                             ; 0059dc2a
    POP EBX                             ; 0059dc2b
    RET                                 ; 0059dc2c
    PUSH 0x1                            ; 0059dc2d
        ;   Label: LAB_0059dc2d
    PUSH 0x0                            ; 0059dc2f
    PUSH ESI                            ; 0059dc31
    CALL FUN_004fc0d0                   ; 0059dc32
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc0d0()
    ADD ESP,0xc                         ; 0059dc37
    PUSH EBX                            ; 0059dc3a
    PUSH 0x5d9eeb                       ; 0059dc3b | = "%s confused while walking to scriptDe..."
    MOV ESI,dword ptr [0x005f1690]      ; 0059dc40 | PTR_DAT_005f1690
    PUSH ESI                            ; 0059dc46 | DAT_007f7ea4
    CALL FUN_00441ff0                   ; 0059dc47
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ff0()
    JMP 0x0059db03                      ; 0059dc4c
        ;   XREF to: 0059db03 (UNCONDITIONAL_JUMP)  ; LAB_0059db03
    JBE 0x0059daf3                      ; 0059dc51
        ;   XREF to: 0059daf3 (CONDITIONAL_JUMP)  ; LAB_0059daf3
        ;   Label: LAB_0059dc51
    CMP EAX,0x3                         ; 0059dc57
    JZ 0x0059dc2d                       ; 0059dc5a
        ;   XREF to: 0059dc2d (CONDITIONAL_JUMP)  ; LAB_0059dc2d
    PUSH 0x1                            ; 0059dc5c
        ;   Label: LAB_0059dc5c
    PUSH 0x0                            ; 0059dc5e
    JMP 0x0059daf7                      ; 0059dc60
        ;   XREF to: 0059daf7 (UNCONDITIONAL_JUMP)  ; LAB_0059daf7
    FLD float ptr [EBX + 0x487c4]       ; 0059dc65
        ;   Label: LAB_0059dc65
    FLD1                                ; 0059dc6b
    FCOMPP                              ; 0059dc6d
    FNSTSW AX                           ; 0059dc6f
    SAHF                                ; 0059dc71
    JBE 0x0059d9fe                      ; 0059dc72
        ;   XREF to: 0059d9fe (CONDITIONAL_JUMP)  ; LAB_0059d9fe
    PUSH ESI                            ; 0059dc78
    CALL FUN_004fc070                   ; 0059dc79
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc070()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0059dc7e
    ADD ESP,0x4                         ; 0059dc81
    MOV ESI,EAX                         ; 0059dc84
    CMP EAX,0x99                        ; 0059dc86
    JZ 0x0059dd29                       ; 0059dc8b
        ;   XREF to: 0059dd29 (CONDITIONAL_JUMP)  ; LAB_0059dd29
    CMP EAX,0x9a                        ; 0059dc91
    JZ 0x0059dd29                       ; 0059dc96
        ;   XREF to: 0059dd29 (CONDITIONAL_JUMP)  ; LAB_0059dd29
    TEST ESI,ESI                        ; 0059dc9c
        ;   Label: LAB_0059dc9c
    JZ 0x0059dd09                       ; 0059dc9e
        ;   XREF to: 0059dd09 (CONDITIONAL_JUMP)  ; LAB_0059dd09
    LEA EAX,[EBX + 0x249c]              ; 0059dca0
    PUSH EAX                            ; 0059dca6
    PUSH EBX                            ; 0059dca7
    LEA ESI,[ESP + 0x54]                ; 0059dca8
    LEA EDI,[ESP + 0x48]                ; 0059dcac
    CALL FUN_00408b00                   ; 0059dcb0
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b00()
    LEA ESI,[ESP + 0x54]                ; 0059dcb5
    ADD ESP,0x8                         ; 0059dcb9
    LEA EAX,[EBX + 0x20]                ; 0059dcbc
    MOVSD ES:EDI,ESI                    ; 0059dcbf
    MOVSD ES:EDI,ESI                    ; 0059dcc0
    MOVSD ES:EDI,ESI                    ; 0059dcc1
    FLD float ptr [EAX]                 ; 0059dcc2
    FLD float ptr [EAX + 0x4]           ; 0059dcc4
    FLD float ptr [EAX + 0x8]           ; 0059dcc7
    FXCH ST2                            ; 0059dcca
    FADD float ptr [ESP + 0x40]         ; 0059dccc
    FXCH                                ; 0059dcd0
    FADD float ptr [ESP + 0x44]         ; 0059dcd2
    FXCH ST2                            ; 0059dcd6
    FADD float ptr [ESP + 0x48]         ; 0059dcd8
    FXCH                                ; 0059dcdc
    FSTP float ptr [EAX]                ; 0059dcde
    FXCH                                ; 0059dce0
    FSTP float ptr [EAX + 0x4]          ; 0059dce2
    FSTP float ptr [EAX + 0x8]          ; 0059dce5
    MOV ECX,dword ptr [EBX + 0x47b94]   ; 0059dce8
    TEST ECX,ECX                        ; 0059dcee
    JZ 0x0059dd09                       ; 0059dcf0
        ;   XREF to: 0059dd09 (CONDITIONAL_JUMP)  ; LAB_0059dd09
    MOV EDX,dword ptr [EAX]             ; 0059dcf2
    MOV dword ptr [ECX + 0x20],EDX      ; 0059dcf4
    MOV EDX,dword ptr [EAX + 0x4]       ; 0059dcf7
    MOV dword ptr [ECX + 0x24],EDX      ; 0059dcfa
    MOV EDX,dword ptr [EAX + 0x8]       ; 0059dcfd
    MOV dword ptr [ECX + 0x28],EDX      ; 0059dd00
    MOV EAX,dword ptr [EAX + 0xc]       ; 0059dd03
    MOV dword ptr [ECX + 0x2c],EAX      ; 0059dd06
    LEA EAX,[EBX + 0x158]               ; 0059dd09
        ;   Label: LAB_0059dd09
    PUSH EAX                            ; 0059dd0f
    CALL FUN_0054c130                   ; 0059dd10
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; undefined FUN_0054c130()
    ADD ESP,0x4                         ; 0059dd15
    PUSH dword ptr [EBP + 0x18]         ; 0059dd18
    PUSH EBX                            ; 0059dd1b
    CALL FUN_00433350                   ; 0059dd1c
        ;   XREF to: 00433350 (UNCONDITIONAL_CALL)  ; undefined FUN_00433350()
    ADD ESP,0x8                         ; 0059dd21
    JMP 0x0059db1e                      ; 0059dd24
        ;   XREF to: 0059db1e (UNCONDITIONAL_JUMP)  ; LAB_0059db1e
    CMP ESI,0x9a                        ; 0059dd29
        ;   Label: LAB_0059dd29
    JNZ 0x0059dc9c                      ; 0059dd2f
        ;   XREF to: 0059dc9c (CONDITIONAL_JUMP)  ; LAB_0059dc9c
    CMP dword ptr [EBX + 0x47b90],0x0   ; 0059dd35
    JNZ 0x0059dc9c                      ; 0059dd3c
        ;   XREF to: 0059dc9c (CONDITIONAL_JUMP)  ; LAB_0059dc9c
    FLD float ptr [EBP + 0x18]          ; 0059dd42
    FMUL double ptr [0x005d9f21]        ; 0059dd45 | DAT_005d9f21
    FADD float ptr [EBX + 0x487c4]      ; 0059dd4b
    FST float ptr [EBX + 0x487c4]       ; 0059dd51
    FLD1                                ; 0059dd57
    FCOMPP                              ; 0059dd59
    FNSTSW AX                           ; 0059dd5b
    SAHF                                ; 0059dd5d
    JA 0x0059dc9c                       ; 0059dd5e
        ;   XREF to: 0059dc9c (CONDITIONAL_JUMP)  ; LAB_0059dc9c
    MOV ECX,dword ptr [EBX + 0x47b94]   ; 0059dd64
    TEST ECX,ECX                        ; 0059dd6a
    JZ 0x0059dc9c                       ; 0059dd6c
        ;   XREF to: 0059dc9c (CONDITIONAL_JUMP)  ; LAB_0059dc9c
    PUSH ECX                            ; 0059dd72
    MOV EAX,[0x00600530]                ; 0059dd73 | DAT_00600530
    PUSH EAX                            ; 0059dd78 | DAT_01d81080
    CALL FUN_004f6930                   ; 0059dd79
        ;   XREF to: 004f6930 (UNCONDITIONAL_CALL)  ; undefined FUN_004f6930()
    ADD ESP,0x8                         ; 0059dd7e
    PUSH 0x1                            ; 0059dd81
    PUSH EBX                            ; 0059dd83
    MOV EDX,dword ptr [0x00600530]      ; 0059dd84 | DAT_00600530
    PUSH EDX                            ; 0059dd8a | DAT_01d81080
    MOV dword ptr [EBX + 0x47b94],0x0   ; 0059dd8b
    CALL FUN_004f6f10                   ; 0059dd95
        ;   XREF to: 004f6f10 (UNCONDITIONAL_CALL)  ; undefined FUN_004f6f10()
    ADD ESP,0xc                         ; 0059dd9a
    JMP 0x0059dc9c                      ; 0059dd9d
        ;   XREF to: 0059dc9c (UNCONDITIONAL_JUMP)  ; LAB_0059dc9c

