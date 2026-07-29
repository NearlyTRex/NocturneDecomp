; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_transformAndClipGeometry_FUN_0055e040(int vertex_count,int *vertex_indices)
;
; Parameters:
; int              Stack[0x4]:4   vertex_count
; int *            Stack[0x8]:4   vertex_indices
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80 at 0045ee23
;   engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_00460e80 at 00460ede
;
; Referenced Globals:
;   void* switchdataD_0055dffc = 0055e1cc
;   void* PTR_caseD_3_0055e008 = 0055e211
;   void* PTR_caseD_1_0055e010 = 0055e566
;   void* PTR_caseD_3_0055e018 = 0055e2db
;   void* switchdataD_0055e01c = 0055e35b
;   void* PTR_caseD_3_0055e028 = 0055e3a0
;   void* PTR_caseD_1_0055e030 = 0055e69a
;   void* PTR_caseD_3_0055e038 = 0055e46b
;   undefined4 DAT_005c5014
;   undefined4 DAT_005c5018
;   undefined4 DAT_005c501c
;   undefined4 DAT_005c5020
;   undefined4 DAT_005c5024
;   undefined4 DAT_00766c70
;   undefined4 DAT_00766c74
;   ... and 37 more
;
; Called Functions:
;   core_xform.cpp_clipInterpolateBottomPlane_FUN_0055d8f0
;   core_xform.cpp_clipInterpolateLeftPlane_FUN_0055d770
;   core_xform.cpp_clipInterpolateRightPlane_FUN_0055d6b0
;   core_xform.cpp_clipInterpolateTopPlane_FUN_0055d830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055e040
        ;   Label: core_xform.cpp_transformAndClipGeometry_FUN_0055e040
    PUSH ESI                            ; 0055e041
    PUSH EDI                            ; 0055e042
    PUSH EBP                            ; 0055e043
    SUB ESP,0x18                        ; 0055e044
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0055e047
    MOV EDI,dword ptr [ESP + 0x30]      ; 0055e04b
    XOR EAX,EAX                         ; 0055e04f
    XOR EBX,EBX                         ; 0055e051
    TEST EBP,EBP                        ; 0055e053
    JLE 0x0055e073                      ; 0055e055
        ;   XREF to: 0055e073 (CONDITIONAL_JUMP)  ; LAB_0055e073
    MOV EDX,EDI                         ; 0055e057
    IMUL ESI,dword ptr [EDX],0x30       ; 0055e059
        ;   Label: LAB_0055e059
    MOV ESI,dword ptr [ESI + 0x5c5024]  ; 0055e05c | DAT_005c5024
    TEST ESI,0x80000000                 ; 0055e062
    JZ 0x0055e06b                       ; 0055e068
        ;   XREF to: 0055e06b (CONDITIONAL_JUMP)  ; LAB_0055e06b
    INC EBX                             ; 0055e06a
    INC EAX                             ; 0055e06b
        ;   Label: LAB_0055e06b
    ADD EDX,0x4                         ; 0055e06c
    CMP EAX,EBP                         ; 0055e06f
    JL 0x0055e059                       ; 0055e071
        ;   XREF to: 0055e059 (CONDITIONAL_JUMP)  ; LAB_0055e059
    TEST EBX,EBX                        ; 0055e073
        ;   Label: LAB_0055e073
    JNZ 0x0055e0e8                      ; 0055e075
        ;   XREF to: 0055e0e8 (CONDITIONAL_JUMP)  ; LAB_0055e0e8
    MOV dword ptr [ESP + 0x4],EBX       ; 0055e07b
    MOV dword ptr [0x00766c70],EBP      ; 0055e07f | DAT_00766c70
    TEST EBP,EBP                        ; 0055e085
    JLE 0x0055e0e0                      ; 0055e087
        ;   XREF to: 0055e0e0 (CONDITIONAL_JUMP)  ; LAB_0055e0e0
    MOV EDX,0x766c74                    ; 0055e089 | DAT_00766c74
    MOV EBX,EDI                         ; 0055e08e
    IMUL ESI,dword ptr [EBX],0x30       ; 0055e090
        ;   Label: LAB_0055e090
    MOV ECX,0x30                        ; 0055e093
    ADD ESI,0x5c5014                    ; 0055e098 | DAT_005c5014
    MOV EDI,EDX                         ; 0055e09e
    TEST EDI,0x7                        ; 0055e0a0
    JZ 0x0055e0ae                       ; 0055e0a6
        ;   XREF to: 0055e0ae (CONDITIONAL_JUMP)  ; LAB_0055e0ae
    MOVSD ES:EDI,ESI                    ; 0055e0a8 | DAT_005c5014 | DAT_00766c74 | DAT_00766ca4
    SUB ECX,0x4                         ; 0055e0a9
    JLE 0x0055e0cb                      ; 0055e0ac
        ;   XREF to: 0055e0cb (CONDITIONAL_JUMP)  ; LAB_0055e0cb
    SUB ECX,0x8                         ; 0055e0ae
        ;   Label: LAB_0055e0ae
    JL 0x0055e0bf                       ; 0055e0b1
        ;   XREF to: 0055e0bf (CONDITIONAL_JUMP)  ; LAB_0055e0bf
    FILD qword ptr [ESI]                ; 0055e0b3 | DAT_005c5018 | DAT_005c5020 | DAT_005c5014
    ADD ESI,0x8                         ; 0055e0b5
    FISTP qword ptr [EDI]               ; 0055e0b8 | DAT_00766c78 | DAT_00766c80 | DAT_00766ca8
    ADD EDI,0x8                         ; 0055e0ba
    JMP 0x0055e0ae                      ; 0055e0bd
        ;   XREF to: 0055e0ae (UNCONDITIONAL_JUMP)  ; LAB_0055e0ae
    ADD ECX,0x8                         ; 0055e0bf
        ;   Label: LAB_0055e0bf
    JLE 0x0055e0cb                      ; 0055e0c2
        ;   XREF to: 0055e0cb (CONDITIONAL_JUMP)  ; LAB_0055e0cb
    MOVSD ES:EDI,ESI                    ; 0055e0c4 | DAT_005c5020 | DAT_00766c80
    SUB ECX,0x4                         ; 0055e0c5
    JLE 0x0055e0cb                      ; 0055e0c8
        ;   XREF to: 0055e0cb (CONDITIONAL_JUMP)  ; LAB_0055e0cb
    MOVSD ES:EDI,ESI                    ; 0055e0ca | DAT_005c5024 | DAT_00766c84
    MOV EAX,dword ptr [ESP + 0x4]       ; 0055e0cb
        ;   Label: LAB_0055e0cb
    ADD EBX,0x4                         ; 0055e0cf
    INC EAX                             ; 0055e0d2
    ADD EDX,0x30                        ; 0055e0d3
    MOV dword ptr [ESP + 0x4],EAX       ; 0055e0d6
    CMP EBP,EAX                         ; 0055e0da
    JG 0x0055e090                       ; 0055e0dc
        ;   XREF to: 0055e090 (CONDITIONAL_JUMP)  ; LAB_0055e090
    MOV EAX,EAX                         ; 0055e0de
    ADD ESP,0x18                        ; 0055e0e0
        ;   Label: LAB_0055e0e0
    POP EBP                             ; 0055e0e3
    POP EDI                             ; 0055e0e4
    POP ESI                             ; 0055e0e5
    POP EBX                             ; 0055e0e6
    RET                                 ; 0055e0e7
    MOV dword ptr [0x02de3130],EBP      ; 0055e0e8 | DAT_02de3130
        ;   Label: LAB_0055e0e8
    XOR EDX,EDX                         ; 0055e0ee
    XOR EBX,EBX                         ; 0055e0f0
    MOV dword ptr [0x02de3134],EDX      ; 0055e0f2 | DAT_02de3134
    MOV dword ptr [0x02de3138],EDX      ; 0055e0f8 | DAT_02de3138
    MOV dword ptr [0x02de313c],EDX      ; 0055e0fe | DAT_02de313c
    MOV dword ptr [0x00766c70],EDX      ; 0055e104 | DAT_00766c70
    TEST EBP,EBP                        ; 0055e10a
    JLE 0x0055e170                      ; 0055e10c
        ;   XREF to: 0055e170 (CONDITIONAL_JUMP)  ; LAB_0055e170
    MOV EDX,0x2de3740                   ; 0055e10e
    MOV dword ptr [ESP],EDI             ; 0055e113
    MOV EAX,dword ptr [ESP]             ; 0055e116
        ;   Label: LAB_0055e116
    IMUL ESI,dword ptr [EAX],0x30       ; 0055e119
    MOV ECX,0x30                        ; 0055e11c
    ADD ESI,0x5c5014                    ; 0055e121 | DAT_005c5014
    MOV EDI,EDX                         ; 0055e127
    TEST EDI,0x7                        ; 0055e129
    JZ 0x0055e137                       ; 0055e12f
        ;   XREF to: 0055e137 (CONDITIONAL_JUMP)  ; LAB_0055e137
    MOVSD ES:EDI,ESI                    ; 0055e131 | DAT_005c5014 | DAT_02de3770
    SUB ECX,0x4                         ; 0055e132
    JLE 0x0055e154                      ; 0055e135
        ;   XREF to: 0055e154 (CONDITIONAL_JUMP)  ; LAB_0055e154
    SUB ECX,0x8                         ; 0055e137
        ;   Label: LAB_0055e137
    JL 0x0055e148                       ; 0055e13a
        ;   XREF to: 0055e148 (CONDITIONAL_JUMP)  ; LAB_0055e148
    FILD qword ptr [ESI]                ; 0055e13c | DAT_005c5014 | DAT_005c501c | DAT_005c5018
    ADD ESI,0x8                         ; 0055e13e
    FISTP qword ptr [EDI]               ; 0055e141 | DAT_02de3740 | DAT_02de3748 | DAT_02de3774
    ADD EDI,0x8                         ; 0055e143
    JMP 0x0055e137                      ; 0055e146
        ;   XREF to: 0055e137 (UNCONDITIONAL_JUMP)  ; LAB_0055e137
    ADD ECX,0x8                         ; 0055e148
        ;   Label: LAB_0055e148
    JLE 0x0055e154                      ; 0055e14b
        ;   XREF to: 0055e154 (CONDITIONAL_JUMP)  ; LAB_0055e154
    MOVSD ES:EDI,ESI                    ; 0055e14d | DAT_005c501c | DAT_02de3748
    SUB ECX,0x4                         ; 0055e14e
    JLE 0x0055e154                      ; 0055e151
        ;   XREF to: 0055e154 (CONDITIONAL_JUMP)  ; LAB_0055e154
    MOVSD ES:EDI,ESI                    ; 0055e153 | DAT_005c5020 | DAT_02de374c
    MOV EAX,dword ptr [ESP]             ; 0055e154
        ;   Label: LAB_0055e154
    INC EBX                             ; 0055e157
    ADD EAX,0x4                         ; 0055e158
    ADD EDX,0x30                        ; 0055e15b
    MOV dword ptr [ESP],EAX             ; 0055e15e
    CMP EBX,EBP                         ; 0055e161
    JL 0x0055e116                       ; 0055e163
        ;   XREF to: 0055e116 (CONDITIONAL_JUMP)  ; LAB_0055e116
    LEA EAX,[EAX]                       ; 0055e165
    LEA EDX,[EDX]                       ; 0055e16b
    MOV EBX,EBX                         ; 0055e16e
    XOR EDX,EDX                         ; 0055e170
        ;   Label: LAB_0055e170
    MOV ECX,dword ptr [0x02de3130]      ; 0055e172 | DAT_02de3130
    MOV dword ptr [ESP + 0x8],EDX       ; 0055e178
    TEST ECX,ECX                        ; 0055e17c
    JLE 0x0055e22b                      ; 0055e17e
        ;   XREF to: 0055e22b (CONDITIONAL_JUMP)  ; LAB_0055e22b
    MOV EBX,0x2de3740                   ; 0055e184
    MOV EAX,dword ptr [ESP + 0x8]       ; 0055e189
        ;   Label: LAB_0055e189
    MOV ECX,dword ptr [0x02de3130]      ; 0055e18d | DAT_02de3130
    INC EAX                             ; 0055e193
    CMP EAX,ECX                         ; 0055e194
    JNZ 0x0055e19a                      ; 0055e196
        ;   XREF to: 0055e19a (CONDITIONAL_JUMP)  ; LAB_0055e19a
    XOR EAX,ECX                         ; 0055e198
    IMUL EAX,EAX,0x30                   ; 0055e19a
        ;   Label: LAB_0055e19a
    MOV EBP,0x2de3740                   ; 0055e19d
    MOV EDX,EBX                         ; 0055e1a2
    MOV ESI,dword ptr [EBX]             ; 0055e1a4 | DAT_02de3740 | DAT_02de3770
    MOV EDI,dword ptr [EBX + 0x8]       ; 0055e1a6 | DAT_02de3748 | DAT_02de3778
    ADD EBP,EAX                         ; 0055e1a9
    XOR EAX,EAX                         ; 0055e1ab
    CMP ESI,EDI                         ; 0055e1ad
    JL 0x0055e1b6                       ; 0055e1af
        ;   XREF to: 0055e1b6 (CONDITIONAL_JUMP)  ; LAB_0055e1b6
    MOV EAX,0x1                         ; 0055e1b1
    MOV ECX,dword ptr [EBP + 0x8]       ; 0055e1b6 | DAT_02de3748
        ;   Label: LAB_0055e1b6
    CMP ECX,dword ptr [EBP]             ; 0055e1b9 | DAT_02de3740
    JG 0x0055e1c0                       ; 0055e1bc
        ;   XREF to: 0055e1c0 (CONDITIONAL_JUMP)  ; LAB_0055e1c0
    OR AL,0x2                           ; 0055e1be
    CMP EAX,0x3                         ; 0055e1c0
        ;   Label: LAB_0055e1c0
    JA 0x0055e211                       ; 0055e1c3
        ;   XREF to: 0055e211 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x55dffc]  ; 0055e1c5 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x02de3134],0x30 ; 0055e1cc | DAT_02de3134
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 0055e1d3
    MOV ESI,EDX                         ; 0055e1d8
    ADD EDI,0x2de3140                   ; 0055e1da
    TEST EDI,0x7                        ; 0055e1e0
    JZ 0x0055e1ee                       ; 0055e1e6
        ;   XREF to: 0055e1ee (CONDITIONAL_JUMP)  ; LAB_0055e1ee
    MOVSD ES:EDI,ESI                    ; 0055e1e8 | DAT_02de3770 | DAT_02de3140
    SUB ECX,0x4                         ; 0055e1e9
    JLE 0x0055e20b                      ; 0055e1ec
        ;   XREF to: 0055e20b (CONDITIONAL_JUMP)  ; LAB_0055e20b
    SUB ECX,0x8                         ; 0055e1ee
        ;   Label: LAB_0055e1ee
    JL 0x0055e1ff                       ; 0055e1f1
        ;   XREF to: 0055e1ff (CONDITIONAL_JUMP)  ; LAB_0055e1ff
    FILD qword ptr [ESI]                ; 0055e1f3 | DAT_02de3770 | DAT_02de3778 | DAT_02de3774
    ADD ESI,0x8                         ; 0055e1f5
    FISTP qword ptr [EDI]               ; 0055e1f8 | DAT_02de3140 | DAT_02de3148 | DAT_02de3144
    ADD EDI,0x8                         ; 0055e1fa
    JMP 0x0055e1ee                      ; 0055e1fd
        ;   XREF to: 0055e1ee (UNCONDITIONAL_JUMP)  ; LAB_0055e1ee
    ADD ECX,0x8                         ; 0055e1ff
        ;   Label: LAB_0055e1ff
    JLE 0x0055e20b                      ; 0055e202
        ;   XREF to: 0055e20b (CONDITIONAL_JUMP)  ; LAB_0055e20b
    MOVSD ES:EDI,ESI                    ; 0055e204 | DAT_02de3778 | DAT_02de3148
    SUB ECX,0x4                         ; 0055e205
    JLE 0x0055e20b                      ; 0055e208
        ;   XREF to: 0055e20b (CONDITIONAL_JUMP)  ; LAB_0055e20b
    MOVSD ES:EDI,ESI                    ; 0055e20a | DAT_02de377c | DAT_02de314c
    INC dword ptr [0x02de3134]          ; 0055e20b | DAT_02de3134
        ;   Label: LAB_0055e20b
    MOV ESI,dword ptr [ESP + 0x8]       ; 0055e211
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x02de3130]      ; 0055e215 | DAT_02de3130
    INC ESI                             ; 0055e21b
    ADD EBX,0x30                        ; 0055e21c
    MOV dword ptr [ESP + 0x8],ESI       ; 0055e21f
    CMP ESI,EDI                         ; 0055e223
    JL 0x0055e189                       ; 0055e225
        ;   XREF to: 0055e189 (CONDITIONAL_JUMP)  ; LAB_0055e189
    MOV EBP,dword ptr [0x02de3134]      ; 0055e22b | DAT_02de3134
        ;   Label: LAB_0055e22b
    CMP EBP,0x3                         ; 0055e231
    JL 0x0055e0e0                       ; 0055e234
        ;   XREF to: 0055e0e0 (CONDITIONAL_JUMP)  ; LAB_0055e0e0
    XOR EAX,EAX                         ; 0055e23a
    MOV dword ptr [ESP + 0x10],EAX      ; 0055e23c
    TEST EBP,EBP                        ; 0055e240
    JLE 0x0055e2f5                      ; 0055e242
        ;   XREF to: 0055e2f5 (CONDITIONAL_JUMP)  ; LAB_0055e2f5
    MOV EBX,0x2de3140                   ; 0055e248
    MOV EAX,dword ptr [ESP + 0x10]      ; 0055e24d
        ;   Label: LAB_0055e24d
    MOV EDX,dword ptr [0x02de3134]      ; 0055e251 | DAT_02de3134
    INC EAX                             ; 0055e257
    CMP EAX,EDX                         ; 0055e258
    JNZ 0x0055e25e                      ; 0055e25a
        ;   XREF to: 0055e25e (CONDITIONAL_JUMP)  ; LAB_0055e25e
    XOR EAX,EDX                         ; 0055e25c
    IMUL EAX,EAX,0x30                   ; 0055e25e
        ;   Label: LAB_0055e25e
    MOV EBP,0x2de3140                   ; 0055e261
    MOV EDX,EBX                         ; 0055e266
    MOV ESI,dword ptr [EBX + 0x8]       ; 0055e268 | DAT_02de3148 | DAT_02de3178
    MOV ECX,dword ptr [EBX]             ; 0055e26b | DAT_02de3140 | DAT_02de3170
    NEG ESI                             ; 0055e26d
    ADD EBP,EAX                         ; 0055e26f
    XOR EAX,EAX                         ; 0055e271
    CMP ESI,ECX                         ; 0055e273
    JL 0x0055e27c                       ; 0055e275
        ;   XREF to: 0055e27c (CONDITIONAL_JUMP)  ; LAB_0055e27c
    MOV EAX,0x1                         ; 0055e277
    MOV ESI,dword ptr [EBP + 0x8]       ; 0055e27c | DAT_02de3148
        ;   Label: LAB_0055e27c
    MOV EDI,dword ptr [EBP]             ; 0055e27f | DAT_02de3140
    NEG ESI                             ; 0055e282
    CMP ESI,EDI                         ; 0055e284
    JL 0x0055e28a                       ; 0055e286
        ;   XREF to: 0055e28a (CONDITIONAL_JUMP)  ; LAB_0055e28a
    OR AL,0x2                           ; 0055e288
    CMP EAX,0x3                         ; 0055e28a
        ;   Label: LAB_0055e28a
    JA 0x0055e2db                       ; 0055e28d
        ;   XREF to: 0055e2db (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x55e00c]  ; 0055e28f | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x02de3138],0x30 ; 0055e296 | DAT_02de3138
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 0055e29d
    MOV ESI,EDX                         ; 0055e2a2
    ADD EDI,0x2de3d40                   ; 0055e2a4
    TEST EDI,0x7                        ; 0055e2aa
    JZ 0x0055e2b8                       ; 0055e2b0
        ;   XREF to: 0055e2b8 (CONDITIONAL_JUMP)  ; LAB_0055e2b8
    MOVSD ES:EDI,ESI                    ; 0055e2b2 | DAT_02de3140
    SUB ECX,0x4                         ; 0055e2b3
    JLE 0x0055e2d5                      ; 0055e2b6
        ;   XREF to: 0055e2d5 (CONDITIONAL_JUMP)  ; LAB_0055e2d5
    SUB ECX,0x8                         ; 0055e2b8
        ;   Label: LAB_0055e2b8
    JL 0x0055e2c9                       ; 0055e2bb
        ;   XREF to: 0055e2c9 (CONDITIONAL_JUMP)  ; LAB_0055e2c9
    FILD qword ptr [ESI]                ; 0055e2bd | DAT_02de3140 | DAT_02de3148 | DAT_02de3144
    ADD ESI,0x8                         ; 0055e2bf
    FISTP qword ptr [EDI]               ; 0055e2c2 | DAT_02de3d48 | DAT_02de3d44
    ADD EDI,0x8                         ; 0055e2c4
    JMP 0x0055e2b8                      ; 0055e2c7
        ;   XREF to: 0055e2b8 (UNCONDITIONAL_JUMP)  ; LAB_0055e2b8
    ADD ECX,0x8                         ; 0055e2c9
        ;   Label: LAB_0055e2c9
    JLE 0x0055e2d5                      ; 0055e2cc
        ;   XREF to: 0055e2d5 (CONDITIONAL_JUMP)  ; LAB_0055e2d5
    MOVSD ES:EDI,ESI                    ; 0055e2ce | DAT_02de3148 | DAT_02de3d48
    SUB ECX,0x4                         ; 0055e2cf
    JLE 0x0055e2d5                      ; 0055e2d2
        ;   XREF to: 0055e2d5 (CONDITIONAL_JUMP)  ; LAB_0055e2d5
    MOVSD ES:EDI,ESI                    ; 0055e2d4 | DAT_02de314c
    INC dword ptr [0x02de3138]          ; 0055e2d5 | DAT_02de3138
        ;   Label: LAB_0055e2d5
    MOV ECX,dword ptr [ESP + 0x10]      ; 0055e2db
        ;   Label: caseD_3
    MOV ESI,dword ptr [0x02de3134]      ; 0055e2df | DAT_02de3134
    INC ECX                             ; 0055e2e5
    ADD EBX,0x30                        ; 0055e2e6
    MOV dword ptr [ESP + 0x10],ECX      ; 0055e2e9
    CMP ECX,ESI                         ; 0055e2ed
    JL 0x0055e24d                       ; 0055e2ef
        ;   XREF to: 0055e24d (CONDITIONAL_JUMP)  ; LAB_0055e24d
    MOV EDI,dword ptr [0x02de3138]      ; 0055e2f5 | DAT_02de3138
        ;   Label: LAB_0055e2f5
    CMP EDI,0x3                         ; 0055e2fb
    JL 0x0055e0e0                       ; 0055e2fe
        ;   XREF to: 0055e0e0 (CONDITIONAL_JUMP)  ; LAB_0055e0e0
    XOR EBP,EBP                         ; 0055e304
    MOV dword ptr [ESP + 0x14],EBP      ; 0055e306
    TEST EDI,EDI                        ; 0055e30a
    JLE 0x0055e3ba                      ; 0055e30c
        ;   XREF to: 0055e3ba (CONDITIONAL_JUMP)  ; LAB_0055e3ba
    MOV EBX,0x2de3d40                   ; 0055e312
    MOV EAX,dword ptr [ESP + 0x14]      ; 0055e317
        ;   Label: LAB_0055e317
    MOV EBP,dword ptr [0x02de3138]      ; 0055e31b | DAT_02de3138
    INC EAX                             ; 0055e321
    CMP EAX,EBP                         ; 0055e322
    JNZ 0x0055e328                      ; 0055e324
        ;   XREF to: 0055e328 (CONDITIONAL_JUMP)  ; LAB_0055e328
    XOR EAX,EBP                         ; 0055e326
    IMUL EAX,EAX,0x30                   ; 0055e328
        ;   Label: LAB_0055e328
    MOV EBP,0x2de3d40                   ; 0055e32b
    MOV EDX,EBX                         ; 0055e330
    MOV ESI,dword ptr [EBX + 0x4]       ; 0055e332 | DAT_02de3d44 | DAT_02de3d74
    MOV ECX,dword ptr [EBX + 0x8]       ; 0055e335 | DAT_02de3d48 | DAT_02de3d78
    ADD EBP,EAX                         ; 0055e338
    XOR EAX,EAX                         ; 0055e33a
    CMP ESI,ECX                         ; 0055e33c
    JL 0x0055e345                       ; 0055e33e
        ;   XREF to: 0055e345 (CONDITIONAL_JUMP)  ; LAB_0055e345
    MOV EAX,0x1                         ; 0055e340
    MOV EDI,dword ptr [EBP + 0x8]       ; 0055e345 | DAT_02de3d48
        ;   Label: LAB_0055e345
    CMP EDI,dword ptr [EBP + 0x4]       ; 0055e348 | DAT_02de3d44
    JG 0x0055e34f                       ; 0055e34b
        ;   XREF to: 0055e34f (CONDITIONAL_JUMP)  ; LAB_0055e34f
    OR AL,0x2                           ; 0055e34d
    CMP EAX,0x3                         ; 0055e34f
        ;   Label: LAB_0055e34f
    JA 0x0055e3a0                       ; 0055e352
        ;   XREF to: 0055e3a0 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x55e01c]  ; 0055e354 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x02de313c],0x30 ; 0055e35b | DAT_02de313c
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 0055e362
    MOV ESI,EDX                         ; 0055e367
    ADD EDI,0x2de4340                   ; 0055e369
    TEST EDI,0x7                        ; 0055e36f
    JZ 0x0055e37d                       ; 0055e375
        ;   XREF to: 0055e37d (CONDITIONAL_JUMP)  ; LAB_0055e37d
    MOVSD ES:EDI,ESI                    ; 0055e377 | DAT_02de3d70 | DAT_02de4340
    SUB ECX,0x4                         ; 0055e378
    JLE 0x0055e39a                      ; 0055e37b
        ;   XREF to: 0055e39a (CONDITIONAL_JUMP)  ; LAB_0055e39a
    SUB ECX,0x8                         ; 0055e37d
        ;   Label: LAB_0055e37d
    JL 0x0055e38e                       ; 0055e380
        ;   XREF to: 0055e38e (CONDITIONAL_JUMP)  ; LAB_0055e38e
    FILD qword ptr [ESI]                ; 0055e382 | DAT_02de3d70 | DAT_02de3d78 | DAT_02de3d74
    ADD ESI,0x8                         ; 0055e384
    FISTP qword ptr [EDI]               ; 0055e387 | DAT_02de4340 | DAT_02de4348 | DAT_02de4344
    ADD EDI,0x8                         ; 0055e389
    JMP 0x0055e37d                      ; 0055e38c
        ;   XREF to: 0055e37d (UNCONDITIONAL_JUMP)  ; LAB_0055e37d
    ADD ECX,0x8                         ; 0055e38e
        ;   Label: LAB_0055e38e
    JLE 0x0055e39a                      ; 0055e391
        ;   XREF to: 0055e39a (CONDITIONAL_JUMP)  ; LAB_0055e39a
    MOVSD ES:EDI,ESI                    ; 0055e393 | DAT_02de3d78 | DAT_02de4348
    SUB ECX,0x4                         ; 0055e394
    JLE 0x0055e39a                      ; 0055e397
        ;   XREF to: 0055e39a (CONDITIONAL_JUMP)  ; LAB_0055e39a
    MOVSD ES:EDI,ESI                    ; 0055e399 | DAT_02de3d7c | DAT_02de434c
    INC dword ptr [0x02de313c]          ; 0055e39a | DAT_02de313c
        ;   Label: LAB_0055e39a
    MOV EDX,dword ptr [ESP + 0x14]      ; 0055e3a0
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x02de3138]      ; 0055e3a4 | DAT_02de3138
    INC EDX                             ; 0055e3aa
    ADD EBX,0x30                        ; 0055e3ab
    MOV dword ptr [ESP + 0x14],EDX      ; 0055e3ae
    CMP EDX,ECX                         ; 0055e3b2
    JL 0x0055e317                       ; 0055e3b4
        ;   XREF to: 0055e317 (CONDITIONAL_JUMP)  ; LAB_0055e317
    MOV EBX,dword ptr [0x02de313c]      ; 0055e3ba | DAT_02de313c
        ;   Label: LAB_0055e3ba
    CMP EBX,0x3                         ; 0055e3c0
    JL 0x0055e0e0                       ; 0055e3c3
        ;   XREF to: 0055e0e0 (CONDITIONAL_JUMP)  ; LAB_0055e0e0
    XOR ESI,ESI                         ; 0055e3c9
    MOV dword ptr [ESP + 0xc],ESI       ; 0055e3cb
    TEST EBX,EBX                        ; 0055e3cf
    JLE 0x0055e485                      ; 0055e3d1
        ;   XREF to: 0055e485 (CONDITIONAL_JUMP)  ; LAB_0055e485
    MOV EBX,0x2de4340                   ; 0055e3d7
    MOV EAX,dword ptr [ESP + 0xc]       ; 0055e3dc
        ;   Label: LAB_0055e3dc
    MOV EDI,dword ptr [0x02de313c]      ; 0055e3e0 | DAT_02de313c
    INC EAX                             ; 0055e3e6
    CMP EAX,EDI                         ; 0055e3e7
    JNZ 0x0055e3ed                      ; 0055e3e9
        ;   XREF to: 0055e3ed (CONDITIONAL_JUMP)  ; LAB_0055e3ed
    XOR EAX,EDI                         ; 0055e3eb
    IMUL EAX,EAX,0x30                   ; 0055e3ed
        ;   Label: LAB_0055e3ed
    MOV EBP,0x2de4340                   ; 0055e3f0
    MOV EDX,EBX                         ; 0055e3f5
    MOV ESI,dword ptr [EBX + 0x8]       ; 0055e3f7 | DAT_02de4348 | DAT_02de4378
    MOV ECX,dword ptr [EBX + 0x4]       ; 0055e3fa | DAT_02de4344 | DAT_02de4374
    NEG ESI                             ; 0055e3fd
    ADD EBP,EAX                         ; 0055e3ff
    XOR EAX,EAX                         ; 0055e401
    CMP ESI,ECX                         ; 0055e403
    JL 0x0055e40c                       ; 0055e405
        ;   XREF to: 0055e40c (CONDITIONAL_JUMP)  ; LAB_0055e40c
    MOV EAX,0x1                         ; 0055e407
    MOV ESI,dword ptr [EBP + 0x8]       ; 0055e40c | DAT_02de4348
        ;   Label: LAB_0055e40c
    MOV EDI,dword ptr [EBP + 0x4]       ; 0055e40f | DAT_02de4344
    NEG ESI                             ; 0055e412
    CMP ESI,EDI                         ; 0055e414
    JL 0x0055e41a                       ; 0055e416
        ;   XREF to: 0055e41a (CONDITIONAL_JUMP)  ; LAB_0055e41a
    OR AL,0x2                           ; 0055e418
    CMP EAX,0x3                         ; 0055e41a
        ;   Label: LAB_0055e41a
    JA 0x0055e46b                       ; 0055e41d
        ;   XREF to: 0055e46b (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x55e02c]  ; 0055e41f | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x00766c70],0x30 ; 0055e426 | DAT_00766c70
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 0055e42d
    MOV ESI,EDX                         ; 0055e432
    ADD EDI,0x766c74                    ; 0055e434 | DAT_00766c74
    TEST EDI,0x7                        ; 0055e43a
    JZ 0x0055e448                       ; 0055e440
        ;   XREF to: 0055e448 (CONDITIONAL_JUMP)  ; LAB_0055e448
    MOVSD ES:EDI,ESI                    ; 0055e442 | DAT_02de4340 | DAT_00766c74
    SUB ECX,0x4                         ; 0055e443
    JLE 0x0055e465                      ; 0055e446
        ;   XREF to: 0055e465 (CONDITIONAL_JUMP)  ; LAB_0055e465
    SUB ECX,0x8                         ; 0055e448
        ;   Label: LAB_0055e448
    JL 0x0055e459                       ; 0055e44b
        ;   XREF to: 0055e459 (CONDITIONAL_JUMP)  ; LAB_0055e459
    FILD qword ptr [ESI]                ; 0055e44d | DAT_02de4344 | DAT_02de434c | DAT_02de4340
    ADD ESI,0x8                         ; 0055e44f
    FISTP qword ptr [EDI]               ; 0055e452 | DAT_00766c78 | DAT_00766c80 | DAT_00766c74
    ADD EDI,0x8                         ; 0055e454
    JMP 0x0055e448                      ; 0055e457
        ;   XREF to: 0055e448 (UNCONDITIONAL_JUMP)  ; LAB_0055e448
    ADD ECX,0x8                         ; 0055e459
        ;   Label: LAB_0055e459
    JLE 0x0055e465                      ; 0055e45c
        ;   XREF to: 0055e465 (CONDITIONAL_JUMP)  ; LAB_0055e465
    MOVSD ES:EDI,ESI                    ; 0055e45e | DAT_02de434c | DAT_00766c80
    SUB ECX,0x4                         ; 0055e45f
    JLE 0x0055e465                      ; 0055e462
        ;   XREF to: 0055e465 (CONDITIONAL_JUMP)  ; LAB_0055e465
    MOVSD ES:EDI,ESI                    ; 0055e464 | DAT_02de4350 | DAT_00766c84
    INC dword ptr [0x00766c70]          ; 0055e465 | DAT_00766c70
        ;   Label: LAB_0055e465
    MOV EDX,dword ptr [ESP + 0xc]       ; 0055e46b
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x02de313c]      ; 0055e46f | DAT_02de313c
    INC EDX                             ; 0055e475
    ADD EBX,0x30                        ; 0055e476
    MOV dword ptr [ESP + 0xc],EDX       ; 0055e479
    CMP EDX,ECX                         ; 0055e47d
    JL 0x0055e3dc                       ; 0055e47f
        ;   XREF to: 0055e3dc (CONDITIONAL_JUMP)  ; LAB_0055e3dc
    MOV EBX,dword ptr [0x00766c70]      ; 0055e485 | DAT_00766c70
        ;   Label: LAB_0055e485
    CMP EBX,0x3                         ; 0055e48b
    JL 0x0055e0e0                       ; 0055e48e
        ;   XREF to: 0055e0e0 (CONDITIONAL_JUMP)  ; LAB_0055e0e0
    MOV EAX,0x766c74                    ; 0055e494 | DAT_00766c74
    XOR EBP,EBP                         ; 0055e499
    TEST EBX,EBX                        ; 0055e49b
    JLE 0x0055e0e0                      ; 0055e49d
        ;   XREF to: 0055e0e0 (CONDITIONAL_JUMP)  ; LAB_0055e0e0
    MOV ECX,dword ptr [EAX + 0x8]       ; 0055e4a3 | DAT_00766c7c | DAT_00766cac
        ;   Label: LAB_0055e4a3
    TEST ECX,ECX                        ; 0055e4a6
    JZ 0x0055e734                       ; 0055e4a8
        ;   XREF to: 0055e734 (CONDITIONAL_JUMP)  ; LAB_0055e734
    CMP ECX,dword ptr [EAX]             ; 0055e4ae | DAT_00766c74 | DAT_00766ca4
    JGE 0x0055e745                      ; 0055e4b0
        ;   XREF to: 0055e745 (CONDITIONAL_JUMP)  ; LAB_0055e745
    MOV dword ptr [EAX],ECX             ; 0055e4b6 | DAT_00766c74 | DAT_00766ca4
    MOV EDX,dword ptr [0x00766c70]      ; 0055e4b8 | DAT_00766c70
        ;   Label: LAB_0055e4b8
    INC EBP                             ; 0055e4be
    ADD EAX,0x30                        ; 0055e4bf | DAT_00766ca4
    CMP EBP,EDX                         ; 0055e4c2
    JGE 0x0055e0e0                      ; 0055e4c4
        ;   XREF to: 0055e0e0 (CONDITIONAL_JUMP)  ; LAB_0055e0e0
    JMP 0x0055e4a3                      ; 0055e4ca
        ;   XREF to: 0055e4a3 (UNCONDITIONAL_JUMP)  ; LAB_0055e4a3
    IMUL EAX,dword ptr [0x02de3134],0x30 ; 0055e4cc | DAT_02de3134
        ;   Label: caseD_1
    ADD EAX,0x2de3140                   ; 0055e4d3
    PUSH EAX                            ; 0055e4d8 | DAT_02de3140
    PUSH EDX                            ; 0055e4d9 | DAT_02de3770
    PUSH EBP                            ; 0055e4da
    CALL core_xform.cpp_clipInterpolateRightPlane_FUN_0055d6b0 ; 0055e4db
        ;   XREF to: 0055d6b0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateRightPlane_FUN_0055d6b0(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV EBP,dword ptr [0x02de3134]      ; 0055e4e0 | DAT_02de3134
    INC EBP                             ; 0055e4e6
    ADD ESP,0xc                         ; 0055e4e7
    MOV dword ptr [0x02de3134],EBP      ; 0055e4ea | DAT_02de3134
    JMP 0x0055e211                      ; 0055e4f0
        ;   XREF to: 0055e211 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x02de3134],0x30 ; 0055e4f5 | DAT_02de3134
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 0055e4fc
    ADD EDI,0x2de3140                   ; 0055e501
    MOV ESI,EDX                         ; 0055e507
    TEST EDI,0x7                        ; 0055e509
    JZ 0x0055e517                       ; 0055e50f
        ;   XREF to: 0055e517 (CONDITIONAL_JUMP)  ; LAB_0055e517
    MOVSD ES:EDI,ESI                    ; 0055e511 | DAT_02de3770 | DAT_02de3140
    SUB ECX,0x4                         ; 0055e512
    JLE 0x0055e534                      ; 0055e515
        ;   XREF to: 0055e534 (CONDITIONAL_JUMP)  ; LAB_0055e534
    SUB ECX,0x8                         ; 0055e517
        ;   Label: LAB_0055e517
    JL 0x0055e528                       ; 0055e51a
        ;   XREF to: 0055e528 (CONDITIONAL_JUMP)  ; LAB_0055e528
    FILD qword ptr [ESI]                ; 0055e51c | DAT_02de3770 | DAT_02de3778 | DAT_02de3774
    ADD ESI,0x8                         ; 0055e51e
    FISTP qword ptr [EDI]               ; 0055e521 | DAT_02de3140 | DAT_02de3148 | DAT_02de3144
    ADD EDI,0x8                         ; 0055e523
    JMP 0x0055e517                      ; 0055e526
        ;   XREF to: 0055e517 (UNCONDITIONAL_JUMP)  ; LAB_0055e517
    ADD ECX,0x8                         ; 0055e528
        ;   Label: LAB_0055e528
    JLE 0x0055e534                      ; 0055e52b
        ;   XREF to: 0055e534 (CONDITIONAL_JUMP)  ; LAB_0055e534
    MOVSD ES:EDI,ESI                    ; 0055e52d | DAT_02de3778 | DAT_02de3148
    SUB ECX,0x4                         ; 0055e52e
    JLE 0x0055e534                      ; 0055e531
        ;   XREF to: 0055e534 (CONDITIONAL_JUMP)  ; LAB_0055e534
    MOVSD ES:EDI,ESI                    ; 0055e533 | DAT_02de377c | DAT_02de314c
    MOV EDI,dword ptr [0x02de3134]      ; 0055e534 | DAT_02de3134
        ;   Label: LAB_0055e534
    INC EDI                             ; 0055e53a
    MOV dword ptr [0x02de3134],EDI      ; 0055e53b | DAT_02de3134
    IMUL EAX,EDI,0x30                   ; 0055e541
    ADD EAX,0x2de3140                   ; 0055e544
    PUSH EAX                            ; 0055e549 | DAT_02de3170
    PUSH EBP                            ; 0055e54a
    PUSH EDX                            ; 0055e54b | DAT_02de3770
    CALL core_xform.cpp_clipInterpolateRightPlane_FUN_0055d6b0 ; 0055e54c
        ;   XREF to: 0055d6b0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateRightPlane_FUN_0055d6b0(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV ESI,dword ptr [0x02de3134]      ; 0055e551 | DAT_02de3134
    INC ESI                             ; 0055e557
    ADD ESP,0xc                         ; 0055e558
    MOV dword ptr [0x02de3134],ESI      ; 0055e55b | DAT_02de3134
    JMP 0x0055e211                      ; 0055e561
        ;   XREF to: 0055e211 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x02de3138],0x30 ; 0055e566 | DAT_02de3138
        ;   Label: caseD_1
    ADD EAX,0x2de3d40                   ; 0055e56d
    PUSH EAX                            ; 0055e572
    PUSH EDX                            ; 0055e573 | DAT_02de3140
    PUSH EBP                            ; 0055e574
    CALL core_xform.cpp_clipInterpolateLeftPlane_FUN_0055d770 ; 0055e575
        ;   XREF to: 0055d770 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateLeftPlane_FUN_0055d770(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV ESI,dword ptr [0x02de3138]      ; 0055e57a | DAT_02de3138
    INC ESI                             ; 0055e580
    ADD ESP,0xc                         ; 0055e581
    MOV dword ptr [0x02de3138],ESI      ; 0055e584 | DAT_02de3138
    JMP 0x0055e2db                      ; 0055e58a
        ;   XREF to: 0055e2db (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x02de3138],0x30 ; 0055e58f | DAT_02de3138
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 0055e596
    MOV ESI,EDX                         ; 0055e59b
    ADD EDI,0x2de3d40                   ; 0055e59d
    TEST EDI,0x7                        ; 0055e5a3
    JZ 0x0055e5b1                       ; 0055e5a9
        ;   XREF to: 0055e5b1 (CONDITIONAL_JUMP)  ; LAB_0055e5b1
    MOVSD ES:EDI,ESI                    ; 0055e5ab | DAT_02de3140
    SUB ECX,0x4                         ; 0055e5ac
    JLE 0x0055e5ce                      ; 0055e5af
        ;   XREF to: 0055e5ce (CONDITIONAL_JUMP)  ; LAB_0055e5ce
    SUB ECX,0x8                         ; 0055e5b1
        ;   Label: LAB_0055e5b1
    JL 0x0055e5c2                       ; 0055e5b4
        ;   XREF to: 0055e5c2 (CONDITIONAL_JUMP)  ; LAB_0055e5c2
    FILD qword ptr [ESI]                ; 0055e5b6 | DAT_02de3140 | DAT_02de3148 | DAT_02de3144
    ADD ESI,0x8                         ; 0055e5b8
    FISTP qword ptr [EDI]               ; 0055e5bb | DAT_02de3d48 | DAT_02de3d44
    ADD EDI,0x8                         ; 0055e5bd
    JMP 0x0055e5b1                      ; 0055e5c0
        ;   XREF to: 0055e5b1 (UNCONDITIONAL_JUMP)  ; LAB_0055e5b1
    ADD ECX,0x8                         ; 0055e5c2
        ;   Label: LAB_0055e5c2
    JLE 0x0055e5ce                      ; 0055e5c5
        ;   XREF to: 0055e5ce (CONDITIONAL_JUMP)  ; LAB_0055e5ce
    MOVSD ES:EDI,ESI                    ; 0055e5c7 | DAT_02de3148 | DAT_02de3d48
    SUB ECX,0x4                         ; 0055e5c8
    JLE 0x0055e5ce                      ; 0055e5cb
        ;   XREF to: 0055e5ce (CONDITIONAL_JUMP)  ; LAB_0055e5ce
    MOVSD ES:EDI,ESI                    ; 0055e5cd | DAT_02de314c
    MOV ECX,dword ptr [0x02de3138]      ; 0055e5ce | DAT_02de3138
        ;   Label: LAB_0055e5ce
    INC ECX                             ; 0055e5d4
    MOV dword ptr [0x02de3138],ECX      ; 0055e5d5 | DAT_02de3138
    IMUL EAX,ECX,0x30                   ; 0055e5db
    ADD EAX,0x2de3d40                   ; 0055e5de
    PUSH EAX                            ; 0055e5e3 | DAT_02de3d70
    PUSH EBP                            ; 0055e5e4
    PUSH EDX                            ; 0055e5e5 | DAT_02de3140
    CALL core_xform.cpp_clipInterpolateLeftPlane_FUN_0055d770 ; 0055e5e6
        ;   XREF to: 0055d770 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateLeftPlane_FUN_0055d770(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV EDI,dword ptr [0x02de3138]      ; 0055e5eb | DAT_02de3138
    INC EDI                             ; 0055e5f1
    ADD ESP,0xc                         ; 0055e5f2
    MOV dword ptr [0x02de3138],EDI      ; 0055e5f5 | DAT_02de3138
    JMP 0x0055e2db                      ; 0055e5fb
        ;   XREF to: 0055e2db (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x02de313c],0x30 ; 0055e600 | DAT_02de313c
        ;   Label: caseD_1
    ADD EAX,0x2de4340                   ; 0055e607
    PUSH EAX                            ; 0055e60c | DAT_02de4340
    PUSH EDX                            ; 0055e60d | DAT_02de3d70
    PUSH EBP                            ; 0055e60e
    CALL core_xform.cpp_clipInterpolateTopPlane_FUN_0055d830 ; 0055e60f
        ;   XREF to: 0055d830 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateTopPlane_FUN_0055d830(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV ESI,dword ptr [0x02de313c]      ; 0055e614 | DAT_02de313c
    INC ESI                             ; 0055e61a
    ADD ESP,0xc                         ; 0055e61b
    MOV dword ptr [0x02de313c],ESI      ; 0055e61e | DAT_02de313c
    JMP 0x0055e3a0                      ; 0055e624
        ;   XREF to: 0055e3a0 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x02de313c],0x30 ; 0055e629 | DAT_02de313c
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 0055e630
    MOV ESI,EDX                         ; 0055e635
    ADD EDI,0x2de4340                   ; 0055e637
    TEST EDI,0x7                        ; 0055e63d
    JZ 0x0055e64b                       ; 0055e643
        ;   XREF to: 0055e64b (CONDITIONAL_JUMP)  ; LAB_0055e64b
    MOVSD ES:EDI,ESI                    ; 0055e645 | DAT_02de3d70 | DAT_02de4340
    SUB ECX,0x4                         ; 0055e646
    JLE 0x0055e668                      ; 0055e649
        ;   XREF to: 0055e668 (CONDITIONAL_JUMP)  ; LAB_0055e668
    SUB ECX,0x8                         ; 0055e64b
        ;   Label: LAB_0055e64b
    JL 0x0055e65c                       ; 0055e64e
        ;   XREF to: 0055e65c (CONDITIONAL_JUMP)  ; LAB_0055e65c
    FILD qword ptr [ESI]                ; 0055e650 | DAT_02de3d70 | DAT_02de3d78 | DAT_02de3d74
    ADD ESI,0x8                         ; 0055e652
    FISTP qword ptr [EDI]               ; 0055e655 | DAT_02de4340 | DAT_02de4348 | DAT_02de4344
    ADD EDI,0x8                         ; 0055e657
    JMP 0x0055e64b                      ; 0055e65a
        ;   XREF to: 0055e64b (UNCONDITIONAL_JUMP)  ; LAB_0055e64b
    ADD ECX,0x8                         ; 0055e65c
        ;   Label: LAB_0055e65c
    JLE 0x0055e668                      ; 0055e65f
        ;   XREF to: 0055e668 (CONDITIONAL_JUMP)  ; LAB_0055e668
    MOVSD ES:EDI,ESI                    ; 0055e661 | DAT_02de3d78 | DAT_02de4348
    SUB ECX,0x4                         ; 0055e662
    JLE 0x0055e668                      ; 0055e665
        ;   XREF to: 0055e668 (CONDITIONAL_JUMP)  ; LAB_0055e668
    MOVSD ES:EDI,ESI                    ; 0055e667 | DAT_02de3d7c | DAT_02de434c
    MOV ECX,dword ptr [0x02de313c]      ; 0055e668 | DAT_02de313c
        ;   Label: LAB_0055e668
    INC ECX                             ; 0055e66e
    MOV dword ptr [0x02de313c],ECX      ; 0055e66f | DAT_02de313c
    IMUL EAX,ECX,0x30                   ; 0055e675
    ADD EAX,0x2de4340                   ; 0055e678
    PUSH EAX                            ; 0055e67d
    PUSH EBP                            ; 0055e67e
    PUSH EDX                            ; 0055e67f | DAT_02de3d70
    CALL core_xform.cpp_clipInterpolateTopPlane_FUN_0055d830 ; 0055e680
        ;   XREF to: 0055d830 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateTopPlane_FUN_0055d830(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV EDI,dword ptr [0x02de313c]      ; 0055e685 | DAT_02de313c
    INC EDI                             ; 0055e68b
    ADD ESP,0xc                         ; 0055e68c
    MOV dword ptr [0x02de313c],EDI      ; 0055e68f | DAT_02de313c
    JMP 0x0055e3a0                      ; 0055e695
        ;   XREF to: 0055e3a0 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x00766c70],0x30 ; 0055e69a | DAT_00766c70
        ;   Label: caseD_1
    ADD EAX,0x766c74                    ; 0055e6a1 | DAT_00766c74
    PUSH EAX                            ; 0055e6a6 | DAT_00766c74
    PUSH EDX                            ; 0055e6a7 | DAT_02de4340
    PUSH EBP                            ; 0055e6a8
    CALL core_xform.cpp_clipInterpolateBottomPlane_FUN_0055d8f0 ; 0055e6a9
        ;   XREF to: 0055d8f0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateBottomPlane_FUN_0055d8f0(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV ESI,dword ptr [0x00766c70]      ; 0055e6ae | DAT_00766c70
    INC ESI                             ; 0055e6b4
    ADD ESP,0xc                         ; 0055e6b5
    MOV dword ptr [0x00766c70],ESI      ; 0055e6b8 | DAT_00766c70
    JMP 0x0055e46b                      ; 0055e6be
        ;   XREF to: 0055e46b (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x00766c70],0x30 ; 0055e6c3 | DAT_00766c70
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 0055e6ca
    MOV ESI,EDX                         ; 0055e6cf
    ADD EDI,0x766c74                    ; 0055e6d1 | DAT_00766c74
    TEST EDI,0x7                        ; 0055e6d7
    JZ 0x0055e6e5                       ; 0055e6dd
        ;   XREF to: 0055e6e5 (CONDITIONAL_JUMP)  ; LAB_0055e6e5
    MOVSD ES:EDI,ESI                    ; 0055e6df | DAT_02de4340 | DAT_00766c74
    SUB ECX,0x4                         ; 0055e6e0
    JLE 0x0055e702                      ; 0055e6e3
        ;   XREF to: 0055e702 (CONDITIONAL_JUMP)  ; LAB_0055e702
    SUB ECX,0x8                         ; 0055e6e5
        ;   Label: LAB_0055e6e5
    JL 0x0055e6f6                       ; 0055e6e8
        ;   XREF to: 0055e6f6 (CONDITIONAL_JUMP)  ; LAB_0055e6f6
    FILD qword ptr [ESI]                ; 0055e6ea | DAT_02de4344 | DAT_02de434c | DAT_02de4340
    ADD ESI,0x8                         ; 0055e6ec
    FISTP qword ptr [EDI]               ; 0055e6ef | DAT_00766c78 | DAT_00766c80 | DAT_00766c74
    ADD EDI,0x8                         ; 0055e6f1
    JMP 0x0055e6e5                      ; 0055e6f4
        ;   XREF to: 0055e6e5 (UNCONDITIONAL_JUMP)  ; LAB_0055e6e5
    ADD ECX,0x8                         ; 0055e6f6
        ;   Label: LAB_0055e6f6
    JLE 0x0055e702                      ; 0055e6f9
        ;   XREF to: 0055e702 (CONDITIONAL_JUMP)  ; LAB_0055e702
    MOVSD ES:EDI,ESI                    ; 0055e6fb | DAT_02de434c | DAT_00766c80
    SUB ECX,0x4                         ; 0055e6fc
    JLE 0x0055e702                      ; 0055e6ff
        ;   XREF to: 0055e702 (CONDITIONAL_JUMP)  ; LAB_0055e702
    MOVSD ES:EDI,ESI                    ; 0055e701 | DAT_02de4350 | DAT_00766c84
    MOV ECX,dword ptr [0x00766c70]      ; 0055e702 | DAT_00766c70
        ;   Label: LAB_0055e702
    INC ECX                             ; 0055e708
    MOV dword ptr [0x00766c70],ECX      ; 0055e709 | DAT_00766c70
    IMUL EAX,ECX,0x30                   ; 0055e70f
    ADD EAX,0x766c74                    ; 0055e712 | DAT_00766c74
    PUSH EAX                            ; 0055e717 | DAT_00766ca4
    PUSH EBP                            ; 0055e718
    PUSH EDX                            ; 0055e719 | DAT_02de4340
    CALL core_xform.cpp_clipInterpolateBottomPlane_FUN_0055d8f0 ; 0055e71a
        ;   XREF to: 0055d8f0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateBottomPlane_FUN_0055d8f0(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV EDI,dword ptr [0x00766c70]      ; 0055e71f | DAT_00766c70
    INC EDI                             ; 0055e725
    ADD ESP,0xc                         ; 0055e726
    MOV dword ptr [0x00766c70],EDI      ; 0055e729 | DAT_00766c70
    JMP 0x0055e46b                      ; 0055e72f
        ;   XREF to: 0055e46b (UNCONDITIONAL_JUMP)  ; caseD_3
    MOV dword ptr [EAX + 0x8],0x1       ; 0055e734 | DAT_00766cac
        ;   Label: LAB_0055e734
    MOV dword ptr [EAX],ECX             ; 0055e73b | DAT_00766ca4
    MOV dword ptr [EAX + 0x4],ECX       ; 0055e73d | DAT_00766ca8
    JMP 0x0055e4b8                      ; 0055e740
        ;   XREF to: 0055e4b8 (UNCONDITIONAL_JUMP)  ; LAB_0055e4b8
    MOV EDX,ECX                         ; 0055e745
        ;   Label: LAB_0055e745
    MOV ESI,dword ptr [EAX]             ; 0055e747 | DAT_00766ca4
    NEG EDX                             ; 0055e749
    CMP EDX,ESI                         ; 0055e74b
    JLE 0x0055e756                      ; 0055e74d
        ;   XREF to: 0055e756 (CONDITIONAL_JUMP)  ; LAB_0055e756
    MOV dword ptr [EAX],EDX             ; 0055e74f | DAT_00766ca4
    JMP 0x0055e4b8                      ; 0055e751
        ;   XREF to: 0055e4b8 (UNCONDITIONAL_JUMP)  ; LAB_0055e4b8
    MOV EBX,dword ptr [EAX + 0x4]       ; 0055e756 | DAT_00766ca8
        ;   Label: LAB_0055e756
    CMP EBX,ECX                         ; 0055e759
    JLE 0x0055e765                      ; 0055e75b
        ;   XREF to: 0055e765 (CONDITIONAL_JUMP)  ; LAB_0055e765
    MOV dword ptr [EAX + 0x4],ECX       ; 0055e75d | DAT_00766ca8
    JMP 0x0055e4b8                      ; 0055e760
        ;   XREF to: 0055e4b8 (UNCONDITIONAL_JUMP)  ; LAB_0055e4b8
    CMP EDX,EBX                         ; 0055e765
        ;   Label: LAB_0055e765
    JLE 0x0055e4b8                      ; 0055e767
        ;   XREF to: 0055e4b8 (CONDITIONAL_JUMP)  ; LAB_0055e4b8
    MOV dword ptr [EAX + 0x4],EDX       ; 0055e76d | DAT_00766ca8
    JMP 0x0055e4b8                      ; 0055e770
        ;   XREF to: 0055e4b8 (UNCONDITIONAL_JUMP)  ; LAB_0055e4b8

