; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004da020(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005c5ee7
;   undefined4 DAT_005c5eef
;   undefined4 DAT_005c5ef7
;   undefined4 DAT_005c5eff
;   undefined4 DAT_005fe9dc
;   undefined4 DAT_00603b28
;   undefined4 DAT_006045f8
;   undefined4 DAT_01c5bc48
;   undefined4 DAT_01d5ba14
;   undefined4 DAT_01d5be80
;   undefined4 DAT_01d70a20
;
; Called Functions:
;   FUN_0040c790
;   FUN_0040c840
;   FUN_0040ce40
;   FUN_005609b0
;   FUN_00560af0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004da020
        ;   Label: FUN_004da020
    PUSH ESI                            ; 004da021
    PUSH EDI                            ; 004da022
    PUSH EBP                            ; 004da023
    MOV EBP,ESP                         ; 004da024
    SUB ESP,0x38                        ; 004da026
    AND ESP,0xfffffff8                  ; 004da029
    MOV EAX,[0x005fe9dc]                ; 004da02c | DAT_005fe9dc
    FLD float ptr [EAX + 0x314]         ; 004da031
    FSUBR float ptr [0x01d5be80]        ; 004da037 | DAT_01d5be80
    FLDZ                                ; 004da03d
    FXCH                                ; 004da03f
    FSTP float ptr [0x01d5be80]         ; 004da041 | DAT_01d5be80
    FCOMP float ptr [0x01d5be80]        ; 004da047 | DAT_01d5be80
    FNSTSW AX                           ; 004da04d
    SAHF                                ; 004da04f
    JNC 0x004da059                      ; 004da050
        ;   XREF to: 004da059 (CONDITIONAL_JUMP)  ; LAB_004da059
    MOV ESP,EBP                         ; 004da052
        ;   Label: LAB_004da052
    POP EBP                             ; 004da054
    POP EDI                             ; 004da055
    POP ESI                             ; 004da056
    POP EBX                             ; 004da057
    RET                                 ; 004da058
    PUSH 0x3ecccccd                     ; 004da059
        ;   Label: LAB_004da059
    PUSH 0x3dcccccd                     ; 004da05e
    CALL FUN_0040ce40                   ; 004da063
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    XOR EDI,EDI                         ; 004da068
    XOR ESI,ESI                         ; 004da06a
    MOV dword ptr [ESP + 0x3c],EAX      ; 004da06c
    MOV EDX,0xffffffff                  ; 004da070
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004da075
    MOV [0x01d5be80],EAX                ; 004da079 | DAT_01d5be80
    MOV dword ptr [0x01d70a20],EDX      ; 004da07e | DAT_01d70a20
    ADD ESP,0x8                         ; 004da084
    MOV EAX,[0x00603b28]                ; 004da087 | DAT_00603b28
        ;   Label: LAB_004da087
    CMP EDI,dword ptr [EAX + 0x14f0a8]  ; 004da08c
    JGE 0x004da052                      ; 004da092
        ;   XREF to: 004da052 (CONDITIONAL_JUMP)  ; LAB_004da052
    MOV EBX,dword ptr [0x01c5bc48]      ; 004da094 | DAT_01c5bc48
    PUSH EBX                            ; 004da09a
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x14f0ac] ; 004da09b
    PUSH EDX                            ; 004da0a2
    CALL FUN_0040c840                   ; 004da0a3
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    MOV EBX,EAX                         ; 004da0a8
    ADD ESP,0x8                         ; 004da0aa
    TEST EAX,EAX                        ; 004da0ad
    JNZ 0x004da0b7                      ; 004da0af
        ;   XREF to: 004da0b7 (CONDITIONAL_JUMP)  ; LAB_004da0b7
    INC EDI                             ; 004da0b1
        ;   Label: LAB_004da0b1
    ADD ESI,0x4                         ; 004da0b2
    JMP 0x004da087                      ; 004da0b5
        ;   XREF to: 004da087 (UNCONDITIONAL_JUMP)  ; LAB_004da087
    PUSH EBX                            ; 004da0b7
        ;   Label: LAB_004da0b7
    MOV EAX,dword ptr [EAX + 0x154]     ; 004da0b8
    CALL dword ptr [EAX + 0x10c]        ; 004da0be
    ADD ESP,0x4                         ; 004da0c4
    TEST EAX,EAX                        ; 004da0c7
    JNZ 0x004da0b1                      ; 004da0c9
        ;   XREF to: 004da0b1 (CONDITIONAL_JUMP)  ; LAB_004da0b1
    PUSH 0x5c5ea4                       ; 004da0cb
    PUSH EBX                            ; 004da0d0
    CALL FUN_0040c790                   ; 004da0d1
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c790()
    ADD ESP,0x8                         ; 004da0d6
    TEST EAX,EAX                        ; 004da0d9
    JNZ 0x004da0b1                      ; 004da0db
        ;   XREF to: 004da0b1 (CONDITIONAL_JUMP)  ; LAB_004da0b1
    PUSH 0x5c5eab                       ; 004da0dd
    PUSH EBX                            ; 004da0e2
    CALL FUN_0040c790                   ; 004da0e3
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c790()
    ADD ESP,0x8                         ; 004da0e8
    TEST EAX,EAX                        ; 004da0eb
    JNZ 0x004da0b1                      ; 004da0ed
        ;   XREF to: 004da0b1 (CONDITIONAL_JUMP)  ; LAB_004da0b1
    MOV EDX,dword ptr [0x01d5ba14]      ; 004da0ef | DAT_01d5ba14
    MOV EDX,dword ptr [EDX*0x4 + 0x1d5ba04] ; 004da0f5
    LEA EAX,[EBX + 0x20]                ; 004da0fc
    FLD float ptr [EDX + 0x20]          ; 004da0ff
    FSUB float ptr [EAX]                ; 004da102
    FMUL ST0                            ; 004da104
    FLD float ptr [EDX + 0x24]          ; 004da106
    FSUB float ptr [EAX + 0x4]          ; 004da109
    FMUL ST0                            ; 004da10c
    FLD float ptr [EDX + 0x28]          ; 004da10e
    FXCH                                ; 004da111
    FADDP ST2,ST0                       ; 004da113
    FSUB float ptr [EAX + 0x8]          ; 004da115
    FMUL ST0                            ; 004da118
    FADDP                               ; 004da11a
    FST double ptr [ESP]                ; 004da11c
    FCOMP double ptr [0x005c5ee7]       ; 004da11f | DAT_005c5ee7
    FNSTSW AX                           ; 004da125
    SAHF                                ; 004da127
    JA 0x004da0b1                       ; 004da128
        ;   XREF to: 004da0b1 (CONDITIONAL_JUMP)  ; LAB_004da0b1
    FLD double ptr [ESP]                ; 004da12a
    FCOMP double ptr [0x005c5eef]       ; 004da12d | DAT_005c5eef
    FNSTSW AX                           ; 004da133
    SAHF                                ; 004da135
    JBE 0x004da1a7                      ; 004da136
        ;   XREF to: 004da1a7 (CONDITIONAL_JUMP)  ; LAB_004da1a7
    MOV EDX,0x5c5eb6                    ; 004da138
    MOV EAX,0x3                         ; 004da13d
    MOV dword ptr [ESP + 0x28],EBX      ; 004da142
    MOV dword ptr [ESP + 0x18],EDX      ; 004da146
    MOV [0x01d70a20],EAX                ; 004da14a | DAT_01d70a20
    XOR EBX,EBX                         ; 004da14f
    MOV ECX,dword ptr [EBX + 0x1d70a24] ; 004da151
        ;   Label: LAB_004da151
    PUSH ECX                            ; 004da157
    MOV EAX,[0x006045f8]                ; 004da158 | DAT_006045f8
    PUSH EAX                            ; 004da15d
    CALL FUN_00560af0                   ; 004da15e
        ;   XREF to: 00560af0 (UNCONDITIONAL_CALL)  ; undefined FUN_00560af0()
    ADD ESP,0x8                         ; 004da163
    TEST EAX,EAX                        ; 004da166
    JZ 0x004da179                       ; 004da168
        ;   XREF to: 004da179 (CONDITIONAL_JUMP)  ; LAB_004da179
    ADD EBX,0x4                         ; 004da16a
    CMP EBX,0x10                        ; 004da16d
    JL 0x004da151                       ; 004da170
        ;   XREF to: 004da151 (CONDITIONAL_JUMP)  ; LAB_004da151
    MOV ESP,EBP                         ; 004da172
    POP EBP                             ; 004da174
    POP EDI                             ; 004da175
    POP ESI                             ; 004da176
    POP EBX                             ; 004da177
    RET                                 ; 004da178
    MOV EDX,dword ptr [ESP + 0x18]      ; 004da179
        ;   Label: LAB_004da179
    PUSH EDX                            ; 004da17d
    PUSH EAX                            ; 004da17e
    MOV ECX,dword ptr [0x006045f8]      ; 004da17f | DAT_006045f8
    PUSH ECX                            ; 004da185
    CALL FUN_005609b0                   ; 004da186
        ;   XREF to: 005609b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005609b0()
    ADD ESP,0xc                         ; 004da18b
    MOV EDX,dword ptr [ESP + 0x28]      ; 004da18e
    MOV dword ptr [EDX + 0x27ac],EAX    ; 004da192
    MOV dword ptr [EBX + 0x1d70a24],EAX ; 004da198
    INC EDI                             ; 004da19e
    ADD ESI,0x4                         ; 004da19f
    JMP 0x004da087                      ; 004da1a2
        ;   XREF to: 004da087 (UNCONDITIONAL_JUMP)  ; LAB_004da087
    FLD double ptr [ESP]                ; 004da1a7
        ;   Label: LAB_004da1a7
    FCOMP double ptr [0x005c5ef7]       ; 004da1aa | DAT_005c5ef7
    FNSTSW AX                           ; 004da1b0
    SAHF                                ; 004da1b2
    JBE 0x004da227                      ; 004da1b3
        ;   XREF to: 004da227 (CONDITIONAL_JUMP)  ; LAB_004da227
    MOV ECX,0x2                         ; 004da1b5
    MOV dword ptr [ESP + 0x2c],EBX      ; 004da1ba
    MOV EBX,0x5c5ec2                    ; 004da1be
    MOV dword ptr [0x01d70a20],ECX      ; 004da1c3 | DAT_01d70a20
    MOV dword ptr [ESP + 0x1c],EBX      ; 004da1c9
    XOR EBX,EBX                         ; 004da1cd
    MOV EDX,dword ptr [EBX + 0x1d70a24] ; 004da1cf
        ;   Label: LAB_004da1cf
    PUSH EDX                            ; 004da1d5
    MOV ECX,dword ptr [0x006045f8]      ; 004da1d6 | DAT_006045f8
    PUSH ECX                            ; 004da1dc
    CALL FUN_00560af0                   ; 004da1dd
        ;   XREF to: 00560af0 (UNCONDITIONAL_CALL)  ; undefined FUN_00560af0()
    ADD ESP,0x8                         ; 004da1e2
    TEST EAX,EAX                        ; 004da1e5
    JZ 0x004da1f8                       ; 004da1e7
        ;   XREF to: 004da1f8 (CONDITIONAL_JUMP)  ; LAB_004da1f8
    ADD EBX,0x4                         ; 004da1e9
    CMP EBX,0x10                        ; 004da1ec
    JL 0x004da1cf                       ; 004da1ef
        ;   XREF to: 004da1cf (CONDITIONAL_JUMP)  ; LAB_004da1cf
    MOV ESP,EBP                         ; 004da1f1
    POP EBP                             ; 004da1f3
    POP EDI                             ; 004da1f4
    POP ESI                             ; 004da1f5
    POP EBX                             ; 004da1f6
    RET                                 ; 004da1f7
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004da1f8
        ;   Label: LAB_004da1f8
    PUSH EAX                            ; 004da1fc
    PUSH 0x0                            ; 004da1fd
    MOV EDX,dword ptr [0x006045f8]      ; 004da1ff | DAT_006045f8
    PUSH EDX                            ; 004da205
    CALL FUN_005609b0                   ; 004da206
        ;   XREF to: 005609b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005609b0()
    ADD ESP,0xc                         ; 004da20b
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004da20e
    MOV dword ptr [EDX + 0x27ac],EAX    ; 004da212
    MOV dword ptr [EBX + 0x1d70a24],EAX ; 004da218
    INC EDI                             ; 004da21e
    ADD ESI,0x4                         ; 004da21f
    JMP 0x004da087                      ; 004da222
        ;   XREF to: 004da087 (UNCONDITIONAL_JUMP)  ; LAB_004da087
    FLD double ptr [ESP]                ; 004da227
        ;   Label: LAB_004da227
    FCOMP double ptr [0x005c5eff]       ; 004da22a | DAT_005c5eff
    FNSTSW AX                           ; 004da230
    SAHF                                ; 004da232
    JBE 0x004da2a4                      ; 004da233
        ;   XREF to: 004da2a4 (CONDITIONAL_JUMP)  ; LAB_004da2a4
    MOV EDX,0x5c5ece                    ; 004da235
    MOV EAX,0x1                         ; 004da23a
    MOV dword ptr [ESP + 0x24],EBX      ; 004da23f
    MOV dword ptr [ESP + 0x14],EDX      ; 004da243
    MOV [0x01d70a20],EAX                ; 004da247 | DAT_01d70a20
    XOR EBX,EBX                         ; 004da24c
    MOV EAX,dword ptr [EBX + 0x1d70a24] ; 004da24e
        ;   Label: LAB_004da24e
    PUSH EAX                            ; 004da254
    MOV EDX,dword ptr [0x006045f8]      ; 004da255 | DAT_006045f8
    PUSH EDX                            ; 004da25b
    CALL FUN_00560af0                   ; 004da25c
        ;   XREF to: 00560af0 (UNCONDITIONAL_CALL)  ; undefined FUN_00560af0()
    ADD ESP,0x8                         ; 004da261
    TEST EAX,EAX                        ; 004da264
    JZ 0x004da277                       ; 004da266
        ;   XREF to: 004da277 (CONDITIONAL_JUMP)  ; LAB_004da277
    ADD EBX,0x4                         ; 004da268
    CMP EBX,0x10                        ; 004da26b
    JL 0x004da24e                       ; 004da26e
        ;   XREF to: 004da24e (CONDITIONAL_JUMP)  ; LAB_004da24e
    MOV ESP,EBP                         ; 004da270
    POP EBP                             ; 004da272
    POP EDI                             ; 004da273
    POP ESI                             ; 004da274
    POP EBX                             ; 004da275
    RET                                 ; 004da276
    MOV ECX,dword ptr [ESP + 0x14]      ; 004da277
        ;   Label: LAB_004da277
    PUSH ECX                            ; 004da27b
    PUSH EAX                            ; 004da27c
    MOV EAX,[0x006045f8]                ; 004da27d | DAT_006045f8
    PUSH EAX                            ; 004da282
    CALL FUN_005609b0                   ; 004da283
        ;   XREF to: 005609b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005609b0()
    ADD ESP,0xc                         ; 004da288
    MOV EDX,dword ptr [ESP + 0x24]      ; 004da28b
    MOV dword ptr [EDX + 0x27ac],EAX    ; 004da28f
    MOV dword ptr [EBX + 0x1d70a24],EAX ; 004da295
    INC EDI                             ; 004da29b
    ADD ESI,0x4                         ; 004da29c
    JMP 0x004da087                      ; 004da29f
        ;   XREF to: 004da087 (UNCONDITIONAL_JUMP)  ; LAB_004da087
    MOV dword ptr [ESP + 0x30],EBX      ; 004da2a4
        ;   Label: LAB_004da2a4
    XOR ECX,ECX                         ; 004da2a8
    MOV EBX,0x5c5eda                    ; 004da2aa
    MOV dword ptr [0x01d70a20],ECX      ; 004da2af | DAT_01d70a20
    MOV dword ptr [ESP + 0x20],EBX      ; 004da2b5
    XOR EBX,EBX                         ; 004da2b9
    MOV ECX,dword ptr [EBX + 0x1d70a24] ; 004da2bb
        ;   Label: LAB_004da2bb
    PUSH ECX                            ; 004da2c1
    MOV EAX,[0x006045f8]                ; 004da2c2 | DAT_006045f8
    PUSH EAX                            ; 004da2c7
    CALL FUN_00560af0                   ; 004da2c8
        ;   XREF to: 00560af0 (UNCONDITIONAL_CALL)  ; undefined FUN_00560af0()
    ADD ESP,0x8                         ; 004da2cd
    TEST EAX,EAX                        ; 004da2d0
    JZ 0x004da2e3                       ; 004da2d2
        ;   XREF to: 004da2e3 (CONDITIONAL_JUMP)  ; LAB_004da2e3
    ADD EBX,0x4                         ; 004da2d4
    CMP EBX,0x10                        ; 004da2d7
    JL 0x004da2bb                       ; 004da2da
        ;   XREF to: 004da2bb (CONDITIONAL_JUMP)  ; LAB_004da2bb
    MOV ESP,EBP                         ; 004da2dc
    POP EBP                             ; 004da2de
    POP EDI                             ; 004da2df
    POP ESI                             ; 004da2e0
    POP EBX                             ; 004da2e1
    RET                                 ; 004da2e2
    MOV EDX,dword ptr [ESP + 0x20]      ; 004da2e3
        ;   Label: LAB_004da2e3
    PUSH EDX                            ; 004da2e7
    PUSH EAX                            ; 004da2e8
    MOV ECX,dword ptr [0x006045f8]      ; 004da2e9 | DAT_006045f8
    PUSH ECX                            ; 004da2ef
    CALL FUN_005609b0                   ; 004da2f0
        ;   XREF to: 005609b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005609b0()
    ADD ESP,0xc                         ; 004da2f5
    MOV EDX,dword ptr [ESP + 0x30]      ; 004da2f8
    MOV dword ptr [EDX + 0x27ac],EAX    ; 004da2fc
    MOV dword ptr [EBX + 0x1d70a24],EAX ; 004da302
    INC EDI                             ; 004da308
    ADD ESI,0x4                         ; 004da309
    JMP 0x004da087                      ; 004da30c
        ;   XREF to: 004da087 (UNCONDITIONAL_JUMP)  ; LAB_004da087

