; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fef30(int param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined        Stack[-0xb0]:1  local_b0
; undefined        Stack[-0xa0]:1  local_a0
; undefined        Stack[-0x90]:1  local_90
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined        Stack[-0x68]:1  local_68
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x44]:1  local_44
; undefined        Stack[-0x38]:1  local_38
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_004fde80 at 004fe3db
;
; Referenced Globals:
;   TerminatedCString s_core_mobster_cpp_005dedcd
;   TerminatedCString s_CMobster_aimTommyGun_I_m_005dede1
;   undefined4 DAT_005dee11
;   undefined4 DAT_005dee15
;   undefined4 DAT_005dee1d
;   undefined4 DAT_01cedf50
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01d1c718
;   undefined4 DAT_01d1c738
;   undefined4 DAT_0265370c
;   undefined4 DAT_02661f38
;
; Called Functions:
;   FUN_00408d70
;   FUN_0040c8f0
;   FUN_0040d0c0
;   FUN_00488320
;   FUN_004e4500
;   FUN_00545a60
;   FUN_00546f40
;   FUN_005838f0
;   FUN_00591530
;   FUN_00593fa0
;   FUN_00593fe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fef30
        ;   Label: FUN_004fef30
    PUSH ESI                            ; 004fef31
    PUSH EDI                            ; 004fef32
    PUSH EBP                            ; 004fef33
    MOV EBP,ESP                         ; 004fef34
    SUB ESP,0xa4                        ; 004fef36
    AND ESP,0xfffffff8                  ; 004fef3c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004fef3f
    MOV EDX,dword ptr [EBX + 0x2698]    ; 004fef42
    TEST EDX,EDX                        ; 004fef48
    JZ 0x004fef63                       ; 004fef4a
        ;   XREF to: 004fef63 (CONDITIONAL_JUMP)  ; LAB_004fef63
    MOV ECX,dword ptr [EBX + 0x10a78]   ; 004fef4c
    TEST ECX,ECX                        ; 004fef52
    JNZ 0x004fef6b                      ; 004fef54
        ;   XREF to: 004fef6b (CONDITIONAL_JUMP)  ; LAB_004fef6b
    MOV dword ptr [EBX + 0x10bc8],ECX   ; 004fef56
    MOV ESP,EBP                         ; 004fef5c
        ;   Label: LAB_004fef5c
    POP EBP                             ; 004fef5e
    POP EDI                             ; 004fef5f
    POP ESI                             ; 004fef60
    POP EBX                             ; 004fef61
    RET                                 ; 004fef62
    MOV dword ptr [EBX + 0x10bc8],EDX   ; 004fef63
        ;   Label: LAB_004fef63
    JMP 0x004fef5c                      ; 004fef69
        ;   XREF to: 004fef5c (UNCONDITIONAL_JUMP)  ; LAB_004fef5c
    PUSH ECX                            ; 004fef6b
        ;   Label: LAB_004fef6b
    PUSH EBX                            ; 004fef6c
    CALL FUN_00488320                   ; 004fef6d
        ;   XREF to: 00488320 (UNCONDITIONAL_CALL)  ; undefined FUN_00488320()
    ADD ESP,0x8                         ; 004fef72
    TEST EAX,EAX                        ; 004fef75
    JZ 0x004ff285                       ; 004fef77
        ;   XREF to: 004ff285 (CONDITIONAL_JUMP)  ; LAB_004ff285
    MOV EAX,[0x02661f38]                ; 004fef7d | DAT_02661f38
        ;   Label: LAB_004fef7d
    PUSH EAX                            ; 004fef82
    MOV EDX,dword ptr [EBX + 0x2698]    ; 004fef83
    PUSH EDX                            ; 004fef89
    CALL FUN_0040c8f0                   ; 004fef8a
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    ADD ESP,0x8                         ; 004fef8f
    TEST EAX,EAX                        ; 004fef92
    JNZ 0x004fefb9                      ; 004fef94
        ;   XREF to: 004fefb9 (CONDITIONAL_JUMP)  ; LAB_004fefb9
    MOV ECX,0x5dedcd                    ; 004fef96 | = "..\\core\\mobster.cpp"
    MOV ESI,0x323                       ; 004fef9b
    PUSH 0x5dede1                       ; 004fefa0 | = "CMobster::aimTommyGun - I'm not carry..."
    MOV dword ptr [0x01d046a0],ECX      ; 004fefa5 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 004fefab | DAT_01d046a4
    CALL FUN_004e4500                   ; 004fefb1
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004fefb6
    MOV EDI,0x3f490fdb                  ; 004fefb9
        ;   Label: LAB_004fefb9
    MOV EAX,dword ptr [EBX + 0x10b1c]   ; 004fefbe
    MOV dword ptr [ESP + 0x4],EDI       ; 004fefc4
    TEST EAX,EAX                        ; 004fefc8
    JZ 0x004fefd4                       ; 004fefca
        ;   XREF to: 004fefd4 (CONDITIONAL_JUMP)  ; LAB_004fefd4
    MOV dword ptr [ESP + 0x4],0x3fc90fdb ; 004fefcc
    MOV ESI,dword ptr [0x01d1c718]      ; 004fefd4 | DAT_01d1c718
        ;   Label: LAB_004fefd4
    LEA EAX,[ESI*0x4 + 0x0]             ; 004fefda
    SUB EAX,ESI                         ; 004fefe1
    MOV ESI,EAX                         ; 004fefe3
    SHL ESI,0x4                         ; 004fefe5
    LEA EAX,[EBX + 0x1134]              ; 004fefe8
    ADD EAX,ESI                         ; 004fefee
    PUSH EAX                            ; 004feff0
    PUSH 0x265370c                      ; 004feff1 | DAT_0265370c
    LEA ESI,[ESP + 0x7c]                ; 004feff6
    LEA EDI,[ESP + 0x58]                ; 004feffa
    CALL FUN_00591530                   ; 004feffe
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined FUN_00591530()
    ADD ESP,0x8                         ; 004ff003
    LEA EAX,[ESP + 0x50]                ; 004ff006
    LEA ESI,[ESP + 0x74]                ; 004ff00a
    PUSH EAX                            ; 004ff00e
    MOVSD ES:EDI,ESI                    ; 004ff00f
    MOVSD ES:EDI,ESI                    ; 004ff010
    MOVSD ES:EDI,ESI                    ; 004ff011
    PUSH EBX                            ; 004ff012
    LEA ESI,[ESP + 0x94]                ; 004ff013
    LEA EDI,[ESP + 0x40]                ; 004ff01a
    CALL FUN_00408d70                   ; 004ff01e
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    LEA ESI,[ESP + 0x94]                ; 004ff023
    ADD ESP,0x8                         ; 004ff02a
    MOVSD ES:EDI,ESI                    ; 004ff02d
    MOVSD ES:EDI,ESI                    ; 004ff02e
    MOVSD ES:EDI,ESI                    ; 004ff02f
    MOV ECX,dword ptr [0x01cedf50]      ; 004ff030 | DAT_01cedf50
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004ff036
    LEA EDI,[ESP + 0x5c]                ; 004ff03c
    LEA ESI,[ESP + 0x68]                ; 004ff040
    FLD float ptr [EAX + 0x20]          ; 004ff044
    FLD float ptr [EAX + 0x24]          ; 004ff047
    FLD float ptr [EAX + 0x28]          ; 004ff04a
    FXCH ST2                            ; 004ff04d
    FSUB float ptr [ESP + 0x38]         ; 004ff04f
    FXCH                                ; 004ff053
    FSUB float ptr [ESP + 0x3c]         ; 004ff055
    FXCH ST2                            ; 004ff059
    FSUB float ptr [ESP + 0x40]         ; 004ff05b
    FXCH                                ; 004ff05f
    FSTP float ptr [ESP + 0x68]         ; 004ff061
    FXCH                                ; 004ff065
    FSTP float ptr [ESP + 0x6c]         ; 004ff067
    FSTP float ptr [ESP + 0x70]         ; 004ff06b
    MOVSD ES:EDI,ESI                    ; 004ff06f
    MOVSD ES:EDI,ESI                    ; 004ff070
    MOVSD ES:EDI,ESI                    ; 004ff071
    PUSH ECX                            ; 004ff072
    MOV ESI,dword ptr [EBX + 0x10a78]   ; 004ff073
    PUSH ESI                            ; 004ff079
    CALL FUN_0040c8f0                   ; 004ff07a
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    ADD ESP,0x8                         ; 004ff07f
    TEST EAX,EAX                        ; 004ff082
    JZ 0x004ff29f                       ; 004ff084
        ;   XREF to: 004ff29f (CONDITIONAL_JUMP)  ; LAB_004ff29f
    FLD float ptr [ESP + 0x60]          ; 004ff08a
    FADD float ptr [0x005dee15]         ; 004ff08e | DAT_005dee15
    FSTP float ptr [ESP + 0x60]         ; 004ff094
        ;   Label: LAB_004ff094
    LEA EAX,[ESP + 0x5c]                ; 004ff098
    PUSH EAX                            ; 004ff09c
    LEA ESI,[ESP + 0x84]                ; 004ff09d
    LEA EDI,[ESP + 0x48]                ; 004ff0a4
    CALL FUN_005838f0                   ; 004ff0a8
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005838f0()
    LEA ESI,[ESP + 0x84]                ; 004ff0ad
    ADD ESP,0x4                         ; 004ff0b4
    MOVSD ES:EDI,ESI                    ; 004ff0b7
    MOVSD ES:EDI,ESI                    ; 004ff0b8
    MOVSD ES:EDI,ESI                    ; 004ff0b9
    FLD float ptr [ESP + 0x48]          ; 004ff0ba
    FSUB float ptr [EBX + 0x34]         ; 004ff0be
    SUB ESP,0x4                         ; 004ff0c1
    FSTP float ptr [ESP]                ; 004ff0c4
    CALL FUN_0040d0c0                   ; 004ff0c7
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0c0()
    MOV dword ptr [ESP + 0xa4],EAX      ; 004ff0cc
    FLD float ptr [ESP + 0xa4]          ; 004ff0d3
    ADD ESP,0x4                         ; 004ff0da
    FST float ptr [ESP + 0x48]          ; 004ff0dd
    FABS                                ; 004ff0e1
    FLD float ptr [ESP + 0x60]          ; 004ff0e3
    FMUL ST0                            ; 004ff0e7
    FLD float ptr [ESP + 0x5c]          ; 004ff0e9
    FMUL ST0                            ; 004ff0ed
    FADDP                               ; 004ff0ef
    FLD float ptr [ESP + 0x64]          ; 004ff0f1
    FMUL ST0                            ; 004ff0f5
    FADDP                               ; 004ff0f7
    FSQRT                               ; 004ff0f9
    FLD float ptr [ESP + 0x4]           ; 004ff0fb
    FXCH                                ; 004ff0ff
    FSTP float ptr [ESP]                ; 004ff101
    FCOMPP                              ; 004ff104
    FNSTSW AX                           ; 004ff106
    SAHF                                ; 004ff108
    JBE 0x004ff2ae                      ; 004ff109
        ;   XREF to: 004ff2ae (CONDITIONAL_JUMP)  ; LAB_004ff2ae
    FLD float ptr [ESP]                 ; 004ff10f
    FCOMP double ptr [0x005dee1d]       ; 004ff112 | DAT_005dee1d
    FNSTSW AX                           ; 004ff118
    SAHF                                ; 004ff11a
    JBE 0x004ff2ae                      ; 004ff11b
        ;   XREF to: 004ff2ae (CONDITIONAL_JUMP)  ; LAB_004ff2ae
    FLD float ptr [EBX + 0x10bc8]       ; 004ff121
    FADD float ptr [EBP + 0x18]         ; 004ff127
    FST float ptr [EBX + 0x10bc8]       ; 004ff12a
    FLD1                                ; 004ff130
    FCOMPP                              ; 004ff132
    FNSTSW AX                           ; 004ff134
    SAHF                                ; 004ff136
    JNC 0x004ff143                      ; 004ff137
        ;   XREF to: 004ff143 (CONDITIONAL_JUMP)  ; LAB_004ff143
    MOV dword ptr [EBX + 0x10bc8],0x3f800000 ; 004ff139
    FLD float ptr [ESP + 0x44]          ; 004ff143
        ;   Label: LAB_004ff143
    FLD float ptr [ESP + 0x4]           ; 004ff147
    FCHS                                ; 004ff14b
    FSTP float ptr [ESP + 0x9c]         ; 004ff14d
    FCOMP float ptr [ESP + 0x9c]        ; 004ff154
    FNSTSW AX                           ; 004ff15b
    SAHF                                ; 004ff15d
    JNC 0x004ff16b                      ; 004ff15e
        ;   XREF to: 004ff16b (CONDITIONAL_JUMP)  ; LAB_004ff16b
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004ff160
    MOV dword ptr [ESP + 0x44],EAX      ; 004ff167
    FLD float ptr [ESP + 0x44]          ; 004ff16b
        ;   Label: LAB_004ff16b
    FCOMP float ptr [ESP + 0x4]         ; 004ff16f
    FNSTSW AX                           ; 004ff173
    SAHF                                ; 004ff175
    JBE 0x004ff180                      ; 004ff176
        ;   XREF to: 004ff180 (CONDITIONAL_JUMP)  ; LAB_004ff180
    MOV EAX,dword ptr [ESP + 0x4]       ; 004ff178
    MOV dword ptr [ESP + 0x44],EAX      ; 004ff17c
    FLD float ptr [ESP + 0x48]          ; 004ff180
        ;   Label: LAB_004ff180
    FLD float ptr [ESP + 0x4]           ; 004ff184
    FCHS                                ; 004ff188
    FSTP float ptr [ESP + 0x98]         ; 004ff18a
    FCOMP float ptr [ESP + 0x98]        ; 004ff191
    FNSTSW AX                           ; 004ff198
    SAHF                                ; 004ff19a
    JNC 0x004ff1a8                      ; 004ff19b
        ;   XREF to: 004ff1a8 (CONDITIONAL_JUMP)  ; LAB_004ff1a8
    MOV EAX,dword ptr [ESP + 0x98]      ; 004ff19d
    MOV dword ptr [ESP + 0x48],EAX      ; 004ff1a4
    FLD float ptr [ESP + 0x48]          ; 004ff1a8
        ;   Label: LAB_004ff1a8
    FCOMP float ptr [ESP + 0x4]         ; 004ff1ac
    FNSTSW AX                           ; 004ff1b0
    SAHF                                ; 004ff1b2
    JBE 0x004ff1bd                      ; 004ff1b3
        ;   XREF to: 004ff1bd (CONDITIONAL_JUMP)  ; LAB_004ff1bd
    MOV EAX,dword ptr [ESP + 0x4]       ; 004ff1b5
    MOV dword ptr [ESP + 0x48],EAX      ; 004ff1b9
    MOV EDI,dword ptr [EBX + 0x2620]    ; 004ff1bd
        ;   Label: LAB_004ff1bd
    LEA EAX,[EBX + 0x2b4]               ; 004ff1c3
    TEST EDI,EDI                        ; 004ff1c9
    JZ 0x004ff2d9                       ; 004ff1cb
        ;   XREF to: 004ff2d9 (CONDITIONAL_JUMP)  ; LAB_004ff2d9
    PUSH 0x544cc0                       ; 004ff1d1 | LAB_00544cc0
    MOV ECX,dword ptr [0x01d1c738]      ; 004ff1d6 | DAT_01d1c738
    PUSH ECX                            ; 004ff1dc
    PUSH dword ptr [EBX + 0x10bc8]      ; 004ff1dd
    PUSH 0x40c00000                     ; 004ff1e3
    PUSH 0x6                            ; 004ff1e8
    PUSH EAX                            ; 004ff1ea
        ;   Label: LAB_004ff1ea
    CALL FUN_00545a60                   ; 004ff1eb
        ;   XREF to: 00545a60 (UNCONDITIONAL_CALL)  ; undefined FUN_00545a60()
    ADD ESP,0x18                        ; 004ff1f0
    PUSH dword ptr [ESP + 0x44]         ; 004ff1f3
    LEA ESI,[ESP + 0x1c]                ; 004ff1f7
    LEA EDI,[ESP + 0xc]                 ; 004ff1fb
    CALL FUN_00593fa0                   ; 004ff1ff
        ;   XREF to: 00593fa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00593fa0()
    LEA ESI,[ESP + 0x1c]                ; 004ff204
    ADD ESP,0x4                         ; 004ff208
    MOVSD ES:EDI,ESI                    ; 004ff20b
    MOVSD ES:EDI,ESI                    ; 004ff20c
    MOVSD ES:EDI,ESI                    ; 004ff20d
    MOVSD ES:EDI,ESI                    ; 004ff20e
    PUSH 0x544cc0                       ; 004ff20f | LAB_00544cc0
    MOV ESI,dword ptr [0x01d1c738]      ; 004ff214 | DAT_01d1c738
    PUSH ESI                            ; 004ff21a
    LEA EAX,[ESP + 0x10]                ; 004ff21b
    PUSH dword ptr [EBX + 0x10bc8]      ; 004ff21f
    PUSH EAX                            ; 004ff225
    LEA EAX,[EBX + 0x2b4]               ; 004ff226
    PUSH EAX                            ; 004ff22c
    MOV dword ptr [ESP + 0xb4],EAX      ; 004ff22d
    CALL FUN_00546f40                   ; 004ff234
        ;   XREF to: 00546f40 (UNCONDITIONAL_CALL)  ; undefined FUN_00546f40()
    ADD ESP,0x14                        ; 004ff239
    LEA ESI,[ESP + 0x28]                ; 004ff23c
    PUSH dword ptr [ESP + 0x48]         ; 004ff240
    CALL FUN_00593fe0                   ; 004ff244
        ;   XREF to: 00593fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00593fe0()
    ADD ESP,0x4                         ; 004ff249
    LEA EDI,[ESP + 0x8]                 ; 004ff24c
    PUSH 0x544cc0                       ; 004ff250 | LAB_00544cc0
    MOV EAX,[0x01d1c738]                ; 004ff255 | DAT_01d1c738
    LEA ESI,[ESP + 0x2c]                ; 004ff25a
    PUSH EAX                            ; 004ff25e
    MOVSD ES:EDI,ESI                    ; 004ff25f
    MOVSD ES:EDI,ESI                    ; 004ff260
    MOVSD ES:EDI,ESI                    ; 004ff261
    MOVSD ES:EDI,ESI                    ; 004ff262
    LEA EAX,[ESP + 0x10]                ; 004ff263
    PUSH dword ptr [EBX + 0x10bc8]      ; 004ff267
    PUSH EAX                            ; 004ff26d
    MOV EDX,dword ptr [ESP + 0xb0]      ; 004ff26e
    PUSH EDX                            ; 004ff275
    CALL FUN_00546f40                   ; 004ff276
        ;   XREF to: 00546f40 (UNCONDITIONAL_CALL)  ; undefined FUN_00546f40()
    ADD ESP,0x14                        ; 004ff27b
    MOV ESP,EBP                         ; 004ff27e
    POP EBP                             ; 004ff280
    POP EDI                             ; 004ff281
    POP ESI                             ; 004ff282
    POP EBX                             ; 004ff283
    RET                                 ; 004ff284
    CMP dword ptr [EBX + 0x10b24],0x0   ; 004ff285
        ;   Label: LAB_004ff285
    JNZ 0x004fef7d                      ; 004ff28c
        ;   XREF to: 004fef7d (CONDITIONAL_JUMP)  ; LAB_004fef7d
    MOV dword ptr [EBX + 0x10bc8],EAX   ; 004ff292
    MOV ESP,EBP                         ; 004ff298
    POP EBP                             ; 004ff29a
    POP EDI                             ; 004ff29b
    POP ESI                             ; 004ff29c
    POP EBX                             ; 004ff29d
    RET                                 ; 004ff29e
    FLD float ptr [ESP + 0x60]          ; 004ff29f
        ;   Label: LAB_004ff29f
    FADD float ptr [0x005dee11]         ; 004ff2a3 | DAT_005dee11
    JMP 0x004ff094                      ; 004ff2a9
        ;   XREF to: 004ff094 (UNCONDITIONAL_JUMP)  ; LAB_004ff094
    FLD float ptr [EBX + 0x10bc8]       ; 004ff2ae
        ;   Label: LAB_004ff2ae
    FSUB float ptr [EBP + 0x18]         ; 004ff2b4
    FST float ptr [EBX + 0x10bc8]       ; 004ff2b7
    FLDZ                                ; 004ff2bd
    FCOMPP                              ; 004ff2bf
    FNSTSW AX                           ; 004ff2c1
    SAHF                                ; 004ff2c3
    JBE 0x004ff143                      ; 004ff2c4
        ;   XREF to: 004ff143 (CONDITIONAL_JUMP)  ; LAB_004ff143
    MOV dword ptr [EBX + 0x10bc8],0x0   ; 004ff2ca
    JMP 0x004ff143                      ; 004ff2d4
        ;   XREF to: 004ff143 (UNCONDITIONAL_JUMP)  ; LAB_004ff143
    PUSH 0x544cc0                       ; 004ff2d9 | LAB_00544cc0
        ;   Label: LAB_004ff2d9
    MOV EDX,dword ptr [0x01d1c738]      ; 004ff2de | DAT_01d1c738
    PUSH EDX                            ; 004ff2e4
    PUSH dword ptr [EBX + 0x10bc8]      ; 004ff2e5
    PUSH 0x40c00000                     ; 004ff2eb
    PUSH 0x2                            ; 004ff2f0
    JMP 0x004ff1ea                      ; 004ff2f2
        ;   XREF to: 004ff1ea (UNCONDITIONAL_JUMP)  ; LAB_004ff1ea

