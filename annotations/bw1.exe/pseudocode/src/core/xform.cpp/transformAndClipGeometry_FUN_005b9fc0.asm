; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_transformAndClipGeometry_FUN_005b9fc0(int vertex_count,int *vertex_indices)
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
; XREF[3]:
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0 at 00481b43
;   engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_00483c50 at 00483cae
;   engine_drender.cpp_FUN_00484790 at 00484853
;
; Referenced Globals:
;   void* switchdataD_005b9f7c = 005ba14c
;   void* PTR_caseD_3_005b9f88 = 005ba191
;   void* PTR_caseD_1_005b9f90 = 005ba4e6
;   void* PTR_caseD_3_005b9f98 = 005ba25b
;   void* switchdataD_005b9f9c = 005ba2db
;   void* PTR_caseD_3_005b9fa8 = 005ba320
;   void* PTR_caseD_1_005b9fb0 = 005ba61a
;   void* PTR_caseD_3_005b9fb8 = 005ba3eb
;   undefined4 DAT_00629014
;   undefined4 DAT_00629018
;   undefined4 DAT_0062901c
;   undefined4 DAT_00629020
;   undefined4 DAT_00629024
;   undefined4 DAT_007c7554
;   undefined4 DAT_007c7558
;   ... and 35 more
;
; Called Functions:
;   core_xform.cpp_clipInterpolateBottomPlane_FUN_005b9870
;   core_xform.cpp_clipInterpolateLeftPlane_FUN_005b96f0
;   core_xform.cpp_clipInterpolateRightPlane_FUN_005b9630
;   core_xform.cpp_clipInterpolateTopPlane_FUN_005b97b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b9fc0
        ;   Label: core_xform.cpp_transformAndClipGeometry_FUN_005b9fc0
    PUSH ESI                            ; 005b9fc1
    PUSH EDI                            ; 005b9fc2
    PUSH EBP                            ; 005b9fc3
    SUB ESP,0x18                        ; 005b9fc4
    MOV EBP,dword ptr [ESP + 0x2c]      ; 005b9fc7
    MOV EDI,dword ptr [ESP + 0x30]      ; 005b9fcb
    XOR EAX,EAX                         ; 005b9fcf
    XOR EBX,EBX                         ; 005b9fd1
    TEST EBP,EBP                        ; 005b9fd3
    JLE 0x005b9ff3                      ; 005b9fd5
        ;   XREF to: 005b9ff3 (CONDITIONAL_JUMP)  ; LAB_005b9ff3
    MOV EDX,EDI                         ; 005b9fd7
    IMUL ESI,dword ptr [EDX],0x30       ; 005b9fd9
        ;   Label: LAB_005b9fd9
    MOV ESI,dword ptr [ESI + 0x629024]  ; 005b9fdc | DAT_00629024
    TEST ESI,0x80000000                 ; 005b9fe2
    JZ 0x005b9feb                       ; 005b9fe8
        ;   XREF to: 005b9feb (CONDITIONAL_JUMP)  ; LAB_005b9feb
    INC EBX                             ; 005b9fea
    INC EAX                             ; 005b9feb
        ;   Label: LAB_005b9feb
    ADD EDX,0x4                         ; 005b9fec
    CMP EAX,EBP                         ; 005b9fef
    JL 0x005b9fd9                       ; 005b9ff1
        ;   XREF to: 005b9fd9 (CONDITIONAL_JUMP)  ; LAB_005b9fd9
    TEST EBX,EBX                        ; 005b9ff3
        ;   Label: LAB_005b9ff3
    JNZ 0x005ba068                      ; 005b9ff5
        ;   XREF to: 005ba068 (CONDITIONAL_JUMP)  ; LAB_005ba068
    MOV dword ptr [ESP + 0x4],EBX       ; 005b9ffb
    MOV dword ptr [0x007c7554],EBP      ; 005b9fff | DAT_007c7554
    TEST EBP,EBP                        ; 005ba005
    JLE 0x005ba060                      ; 005ba007
        ;   XREF to: 005ba060 (CONDITIONAL_JUMP)  ; LAB_005ba060
    MOV EDX,0x7c7558                    ; 005ba009 | DAT_007c7558
    MOV EBX,EDI                         ; 005ba00e
    IMUL ESI,dword ptr [EBX],0x30       ; 005ba010
        ;   Label: LAB_005ba010
    MOV ECX,0x30                        ; 005ba013
    ADD ESI,0x629014                    ; 005ba018 | DAT_00629014
    MOV EDI,EDX                         ; 005ba01e
    TEST EDI,0x7                        ; 005ba020
    JZ 0x005ba02e                       ; 005ba026
        ;   XREF to: 005ba02e (CONDITIONAL_JUMP)  ; LAB_005ba02e
    MOVSD ES:EDI,ESI                    ; 005ba028 | DAT_00629014 | DAT_007c7588
    SUB ECX,0x4                         ; 005ba029
    JLE 0x005ba04b                      ; 005ba02c
        ;   XREF to: 005ba04b (CONDITIONAL_JUMP)  ; LAB_005ba04b
    SUB ECX,0x8                         ; 005ba02e
        ;   Label: LAB_005ba02e
    JL 0x005ba03f                       ; 005ba031
        ;   XREF to: 005ba03f (CONDITIONAL_JUMP)  ; LAB_005ba03f
    FILD qword ptr [ESI]                ; 005ba033 | DAT_00629014 | DAT_0062901c | DAT_00629018
    ADD ESI,0x8                         ; 005ba035
    FISTP qword ptr [EDI]               ; 005ba038 | DAT_007c7558 | DAT_007c7560 | DAT_007c758c
    ADD EDI,0x8                         ; 005ba03a
    JMP 0x005ba02e                      ; 005ba03d
        ;   XREF to: 005ba02e (UNCONDITIONAL_JUMP)  ; LAB_005ba02e
    ADD ECX,0x8                         ; 005ba03f
        ;   Label: LAB_005ba03f
    JLE 0x005ba04b                      ; 005ba042
        ;   XREF to: 005ba04b (CONDITIONAL_JUMP)  ; LAB_005ba04b
    MOVSD ES:EDI,ESI                    ; 005ba044 | DAT_0062901c | DAT_007c7560
    SUB ECX,0x4                         ; 005ba045
    JLE 0x005ba04b                      ; 005ba048
        ;   XREF to: 005ba04b (CONDITIONAL_JUMP)  ; LAB_005ba04b
    MOVSD ES:EDI,ESI                    ; 005ba04a | DAT_00629020 | DAT_007c7564
    MOV EAX,dword ptr [ESP + 0x4]       ; 005ba04b
        ;   Label: LAB_005ba04b
    ADD EBX,0x4                         ; 005ba04f
    INC EAX                             ; 005ba052
    ADD EDX,0x30                        ; 005ba053
    MOV dword ptr [ESP + 0x4],EAX       ; 005ba056
    CMP EBP,EAX                         ; 005ba05a
    JG 0x005ba010                       ; 005ba05c
        ;   XREF to: 005ba010 (CONDITIONAL_JUMP)  ; LAB_005ba010
    MOV EAX,EAX                         ; 005ba05e
    ADD ESP,0x18                        ; 005ba060
        ;   Label: LAB_005ba060
    POP EBP                             ; 005ba063
    POP EDI                             ; 005ba064
    POP ESI                             ; 005ba065
    POP EBX                             ; 005ba066
    RET                                 ; 005ba067
    MOV dword ptr [0x02c9d2e8],EBP      ; 005ba068 | DAT_02c9d2e8
        ;   Label: LAB_005ba068
    XOR EDX,EDX                         ; 005ba06e
    XOR EBX,EBX                         ; 005ba070
    MOV dword ptr [0x02c9d2ec],EDX      ; 005ba072 | DAT_02c9d2ec
    MOV dword ptr [0x02c9d2f0],EDX      ; 005ba078 | DAT_02c9d2f0
    MOV dword ptr [0x02c9d2f4],EDX      ; 005ba07e | DAT_02c9d2f4
    MOV dword ptr [0x007c7554],EDX      ; 005ba084 | DAT_007c7554
    TEST EBP,EBP                        ; 005ba08a
    JLE 0x005ba0f0                      ; 005ba08c
        ;   XREF to: 005ba0f0 (CONDITIONAL_JUMP)  ; LAB_005ba0f0
    MOV EDX,0x2c9d8f8                   ; 005ba08e
    MOV dword ptr [ESP],EDI             ; 005ba093
    MOV EAX,dword ptr [ESP]             ; 005ba096
        ;   Label: LAB_005ba096
    IMUL ESI,dword ptr [EAX],0x30       ; 005ba099
    MOV ECX,0x30                        ; 005ba09c
    ADD ESI,0x629014                    ; 005ba0a1 | DAT_00629014
    MOV EDI,EDX                         ; 005ba0a7
    TEST EDI,0x7                        ; 005ba0a9
    JZ 0x005ba0b7                       ; 005ba0af
        ;   XREF to: 005ba0b7 (CONDITIONAL_JUMP)  ; LAB_005ba0b7
    MOVSD ES:EDI,ESI                    ; 005ba0b1 | DAT_00629014 | DAT_02c9d928
    SUB ECX,0x4                         ; 005ba0b2
    JLE 0x005ba0d4                      ; 005ba0b5
        ;   XREF to: 005ba0d4 (CONDITIONAL_JUMP)  ; LAB_005ba0d4
    SUB ECX,0x8                         ; 005ba0b7
        ;   Label: LAB_005ba0b7
    JL 0x005ba0c8                       ; 005ba0ba
        ;   XREF to: 005ba0c8 (CONDITIONAL_JUMP)  ; LAB_005ba0c8
    FILD qword ptr [ESI]                ; 005ba0bc | DAT_00629014 | DAT_0062901c | DAT_00629018
    ADD ESI,0x8                         ; 005ba0be
    FISTP qword ptr [EDI]               ; 005ba0c1 | DAT_02c9d8f8 | DAT_02c9d900 | DAT_02c9d92c
    ADD EDI,0x8                         ; 005ba0c3
    JMP 0x005ba0b7                      ; 005ba0c6
        ;   XREF to: 005ba0b7 (UNCONDITIONAL_JUMP)  ; LAB_005ba0b7
    ADD ECX,0x8                         ; 005ba0c8
        ;   Label: LAB_005ba0c8
    JLE 0x005ba0d4                      ; 005ba0cb
        ;   XREF to: 005ba0d4 (CONDITIONAL_JUMP)  ; LAB_005ba0d4
    MOVSD ES:EDI,ESI                    ; 005ba0cd | DAT_0062901c | DAT_02c9d900
    SUB ECX,0x4                         ; 005ba0ce
    JLE 0x005ba0d4                      ; 005ba0d1
        ;   XREF to: 005ba0d4 (CONDITIONAL_JUMP)  ; LAB_005ba0d4
    MOVSD ES:EDI,ESI                    ; 005ba0d3 | DAT_00629020 | DAT_02c9d904
    MOV EAX,dword ptr [ESP]             ; 005ba0d4
        ;   Label: LAB_005ba0d4
    INC EBX                             ; 005ba0d7
    ADD EAX,0x4                         ; 005ba0d8
    ADD EDX,0x30                        ; 005ba0db
    MOV dword ptr [ESP],EAX             ; 005ba0de
    CMP EBX,EBP                         ; 005ba0e1
    JL 0x005ba096                       ; 005ba0e3
        ;   XREF to: 005ba096 (CONDITIONAL_JUMP)  ; LAB_005ba096
    LEA EAX,[EAX]                       ; 005ba0e5
    LEA EDX,[EDX]                       ; 005ba0eb
    MOV EBX,EBX                         ; 005ba0ee
    XOR EDX,EDX                         ; 005ba0f0
        ;   Label: LAB_005ba0f0
    MOV ECX,dword ptr [0x02c9d2e8]      ; 005ba0f2 | DAT_02c9d2e8
    MOV dword ptr [ESP + 0x8],EDX       ; 005ba0f8
    TEST ECX,ECX                        ; 005ba0fc
    JLE 0x005ba1ab                      ; 005ba0fe
        ;   XREF to: 005ba1ab (CONDITIONAL_JUMP)  ; LAB_005ba1ab
    MOV EBX,0x2c9d8f8                   ; 005ba104
    MOV EAX,dword ptr [ESP + 0x8]       ; 005ba109
        ;   Label: LAB_005ba109
    MOV ECX,dword ptr [0x02c9d2e8]      ; 005ba10d | DAT_02c9d2e8
    INC EAX                             ; 005ba113
    CMP EAX,ECX                         ; 005ba114
    JNZ 0x005ba11a                      ; 005ba116
        ;   XREF to: 005ba11a (CONDITIONAL_JUMP)  ; LAB_005ba11a
    XOR EAX,ECX                         ; 005ba118
    IMUL EAX,EAX,0x30                   ; 005ba11a
        ;   Label: LAB_005ba11a
    MOV EBP,0x2c9d8f8                   ; 005ba11d
    MOV EDX,EBX                         ; 005ba122
    MOV ESI,dword ptr [EBX]             ; 005ba124 | DAT_02c9d8f8 | DAT_02c9d928
    MOV EDI,dword ptr [EBX + 0x8]       ; 005ba126 | DAT_02c9d900 | DAT_02c9d930
    ADD EBP,EAX                         ; 005ba129
    XOR EAX,EAX                         ; 005ba12b
    CMP ESI,EDI                         ; 005ba12d
    JL 0x005ba136                       ; 005ba12f
        ;   XREF to: 005ba136 (CONDITIONAL_JUMP)  ; LAB_005ba136
    MOV EAX,0x1                         ; 005ba131
    MOV ECX,dword ptr [EBP + 0x8]       ; 005ba136 | DAT_02c9d900
        ;   Label: LAB_005ba136
    CMP ECX,dword ptr [EBP]             ; 005ba139 | DAT_02c9d8f8
    JG 0x005ba140                       ; 005ba13c
        ;   XREF to: 005ba140 (CONDITIONAL_JUMP)  ; LAB_005ba140
    OR AL,0x2                           ; 005ba13e
    CMP EAX,0x3                         ; 005ba140
        ;   Label: LAB_005ba140
    JA 0x005ba191                       ; 005ba143
        ;   XREF to: 005ba191 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x5b9f7c]  ; 005ba145 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x02c9d2ec],0x30 ; 005ba14c | DAT_02c9d2ec
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 005ba153
    MOV ESI,EDX                         ; 005ba158
    ADD EDI,0x2c9d2f8                   ; 005ba15a
    TEST EDI,0x7                        ; 005ba160
    JZ 0x005ba16e                       ; 005ba166
        ;   XREF to: 005ba16e (CONDITIONAL_JUMP)  ; LAB_005ba16e
    MOVSD ES:EDI,ESI                    ; 005ba168 | DAT_02c9d928 | DAT_02c9d2f8
    SUB ECX,0x4                         ; 005ba169
    JLE 0x005ba18b                      ; 005ba16c
        ;   XREF to: 005ba18b (CONDITIONAL_JUMP)  ; LAB_005ba18b
    SUB ECX,0x8                         ; 005ba16e
        ;   Label: LAB_005ba16e
    JL 0x005ba17f                       ; 005ba171
        ;   XREF to: 005ba17f (CONDITIONAL_JUMP)  ; LAB_005ba17f
    FILD qword ptr [ESI]                ; 005ba173 | DAT_02c9d928 | DAT_02c9d930 | DAT_02c9d92c
    ADD ESI,0x8                         ; 005ba175
    FISTP qword ptr [EDI]               ; 005ba178 | DAT_02c9d2f8 | DAT_02c9d300 | DAT_02c9d2fc
    ADD EDI,0x8                         ; 005ba17a
    JMP 0x005ba16e                      ; 005ba17d
        ;   XREF to: 005ba16e (UNCONDITIONAL_JUMP)  ; LAB_005ba16e
    ADD ECX,0x8                         ; 005ba17f
        ;   Label: LAB_005ba17f
    JLE 0x005ba18b                      ; 005ba182
        ;   XREF to: 005ba18b (CONDITIONAL_JUMP)  ; LAB_005ba18b
    MOVSD ES:EDI,ESI                    ; 005ba184 | DAT_02c9d930 | DAT_02c9d300
    SUB ECX,0x4                         ; 005ba185
    JLE 0x005ba18b                      ; 005ba188
        ;   XREF to: 005ba18b (CONDITIONAL_JUMP)  ; LAB_005ba18b
    MOVSD ES:EDI,ESI                    ; 005ba18a | DAT_02c9d934 | DAT_02c9d304
    INC dword ptr [0x02c9d2ec]          ; 005ba18b | DAT_02c9d2ec
        ;   Label: LAB_005ba18b
    MOV ESI,dword ptr [ESP + 0x8]       ; 005ba191
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x02c9d2e8]      ; 005ba195 | DAT_02c9d2e8
    INC ESI                             ; 005ba19b
    ADD EBX,0x30                        ; 005ba19c
    MOV dword ptr [ESP + 0x8],ESI       ; 005ba19f
    CMP ESI,EDI                         ; 005ba1a3
    JL 0x005ba109                       ; 005ba1a5
        ;   XREF to: 005ba109 (CONDITIONAL_JUMP)  ; LAB_005ba109
    MOV EBP,dword ptr [0x02c9d2ec]      ; 005ba1ab | DAT_02c9d2ec
        ;   Label: LAB_005ba1ab
    CMP EBP,0x3                         ; 005ba1b1
    JL 0x005ba060                       ; 005ba1b4
        ;   XREF to: 005ba060 (CONDITIONAL_JUMP)  ; LAB_005ba060
    XOR EAX,EAX                         ; 005ba1ba
    MOV dword ptr [ESP + 0x10],EAX      ; 005ba1bc
    TEST EBP,EBP                        ; 005ba1c0
    JLE 0x005ba275                      ; 005ba1c2
        ;   XREF to: 005ba275 (CONDITIONAL_JUMP)  ; LAB_005ba275
    MOV EBX,0x2c9d2f8                   ; 005ba1c8
    MOV EAX,dword ptr [ESP + 0x10]      ; 005ba1cd
        ;   Label: LAB_005ba1cd
    MOV EDX,dword ptr [0x02c9d2ec]      ; 005ba1d1 | DAT_02c9d2ec
    INC EAX                             ; 005ba1d7
    CMP EAX,EDX                         ; 005ba1d8
    JNZ 0x005ba1de                      ; 005ba1da
        ;   XREF to: 005ba1de (CONDITIONAL_JUMP)  ; LAB_005ba1de
    XOR EAX,EDX                         ; 005ba1dc
    IMUL EAX,EAX,0x30                   ; 005ba1de
        ;   Label: LAB_005ba1de
    MOV EBP,0x2c9d2f8                   ; 005ba1e1
    MOV EDX,EBX                         ; 005ba1e6
    MOV ESI,dword ptr [EBX + 0x8]       ; 005ba1e8 | DAT_02c9d300 | DAT_02c9d330
    MOV ECX,dword ptr [EBX]             ; 005ba1eb | DAT_02c9d2f8 | DAT_02c9d328
    NEG ESI                             ; 005ba1ed
    ADD EBP,EAX                         ; 005ba1ef
    XOR EAX,EAX                         ; 005ba1f1
    CMP ESI,ECX                         ; 005ba1f3
    JL 0x005ba1fc                       ; 005ba1f5
        ;   XREF to: 005ba1fc (CONDITIONAL_JUMP)  ; LAB_005ba1fc
    MOV EAX,0x1                         ; 005ba1f7
    MOV ESI,dword ptr [EBP + 0x8]       ; 005ba1fc | DAT_02c9d300
        ;   Label: LAB_005ba1fc
    MOV EDI,dword ptr [EBP]             ; 005ba1ff | DAT_02c9d2f8
    NEG ESI                             ; 005ba202
    CMP ESI,EDI                         ; 005ba204
    JL 0x005ba20a                       ; 005ba206
        ;   XREF to: 005ba20a (CONDITIONAL_JUMP)  ; LAB_005ba20a
    OR AL,0x2                           ; 005ba208
    CMP EAX,0x3                         ; 005ba20a
        ;   Label: LAB_005ba20a
    JA 0x005ba25b                       ; 005ba20d
        ;   XREF to: 005ba25b (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x5b9f8c]  ; 005ba20f | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x02c9d2f0],0x30 ; 005ba216 | DAT_02c9d2f0
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 005ba21d
    MOV ESI,EDX                         ; 005ba222
    ADD EDI,0x2c9def8                   ; 005ba224
    TEST EDI,0x7                        ; 005ba22a
    JZ 0x005ba238                       ; 005ba230
        ;   XREF to: 005ba238 (CONDITIONAL_JUMP)  ; LAB_005ba238
    MOVSD ES:EDI,ESI                    ; 005ba232 | DAT_02c9d2f8
    SUB ECX,0x4                         ; 005ba233
    JLE 0x005ba255                      ; 005ba236
        ;   XREF to: 005ba255 (CONDITIONAL_JUMP)  ; LAB_005ba255
    SUB ECX,0x8                         ; 005ba238
        ;   Label: LAB_005ba238
    JL 0x005ba249                       ; 005ba23b
        ;   XREF to: 005ba249 (CONDITIONAL_JUMP)  ; LAB_005ba249
    FILD qword ptr [ESI]                ; 005ba23d | DAT_02c9d2f8 | DAT_02c9d300 | DAT_02c9d2fc
    ADD ESI,0x8                         ; 005ba23f
    FISTP qword ptr [EDI]               ; 005ba242 | DAT_02c9df00 | DAT_02c9defc
    ADD EDI,0x8                         ; 005ba244
    JMP 0x005ba238                      ; 005ba247
        ;   XREF to: 005ba238 (UNCONDITIONAL_JUMP)  ; LAB_005ba238
    ADD ECX,0x8                         ; 005ba249
        ;   Label: LAB_005ba249
    JLE 0x005ba255                      ; 005ba24c
        ;   XREF to: 005ba255 (CONDITIONAL_JUMP)  ; LAB_005ba255
    MOVSD ES:EDI,ESI                    ; 005ba24e | DAT_02c9d300 | DAT_02c9df00
    SUB ECX,0x4                         ; 005ba24f
    JLE 0x005ba255                      ; 005ba252
        ;   XREF to: 005ba255 (CONDITIONAL_JUMP)  ; LAB_005ba255
    MOVSD ES:EDI,ESI                    ; 005ba254 | DAT_02c9d304
    INC dword ptr [0x02c9d2f0]          ; 005ba255 | DAT_02c9d2f0
        ;   Label: LAB_005ba255
    MOV ECX,dword ptr [ESP + 0x10]      ; 005ba25b
        ;   Label: caseD_3
    MOV ESI,dword ptr [0x02c9d2ec]      ; 005ba25f | DAT_02c9d2ec
    INC ECX                             ; 005ba265
    ADD EBX,0x30                        ; 005ba266
    MOV dword ptr [ESP + 0x10],ECX      ; 005ba269
    CMP ECX,ESI                         ; 005ba26d
    JL 0x005ba1cd                       ; 005ba26f
        ;   XREF to: 005ba1cd (CONDITIONAL_JUMP)  ; LAB_005ba1cd
    MOV EDI,dword ptr [0x02c9d2f0]      ; 005ba275 | DAT_02c9d2f0
        ;   Label: LAB_005ba275
    CMP EDI,0x3                         ; 005ba27b
    JL 0x005ba060                       ; 005ba27e
        ;   XREF to: 005ba060 (CONDITIONAL_JUMP)  ; LAB_005ba060
    XOR EBP,EBP                         ; 005ba284
    MOV dword ptr [ESP + 0x14],EBP      ; 005ba286
    TEST EDI,EDI                        ; 005ba28a
    JLE 0x005ba33a                      ; 005ba28c
        ;   XREF to: 005ba33a (CONDITIONAL_JUMP)  ; LAB_005ba33a
    MOV EBX,0x2c9def8                   ; 005ba292
    MOV EAX,dword ptr [ESP + 0x14]      ; 005ba297
        ;   Label: LAB_005ba297
    MOV EBP,dword ptr [0x02c9d2f0]      ; 005ba29b | DAT_02c9d2f0
    INC EAX                             ; 005ba2a1
    CMP EAX,EBP                         ; 005ba2a2
    JNZ 0x005ba2a8                      ; 005ba2a4
        ;   XREF to: 005ba2a8 (CONDITIONAL_JUMP)  ; LAB_005ba2a8
    XOR EAX,EBP                         ; 005ba2a6
    IMUL EAX,EAX,0x30                   ; 005ba2a8
        ;   Label: LAB_005ba2a8
    MOV EBP,0x2c9def8                   ; 005ba2ab
    MOV EDX,EBX                         ; 005ba2b0
    MOV ESI,dword ptr [EBX + 0x4]       ; 005ba2b2 | DAT_02c9defc | DAT_02c9df2c
    MOV ECX,dword ptr [EBX + 0x8]       ; 005ba2b5 | DAT_02c9df00 | DAT_02c9df30
    ADD EBP,EAX                         ; 005ba2b8
    XOR EAX,EAX                         ; 005ba2ba
    CMP ESI,ECX                         ; 005ba2bc
    JL 0x005ba2c5                       ; 005ba2be
        ;   XREF to: 005ba2c5 (CONDITIONAL_JUMP)  ; LAB_005ba2c5
    MOV EAX,0x1                         ; 005ba2c0
    MOV EDI,dword ptr [EBP + 0x8]       ; 005ba2c5 | DAT_02c9df00
        ;   Label: LAB_005ba2c5
    CMP EDI,dword ptr [EBP + 0x4]       ; 005ba2c8 | DAT_02c9defc
    JG 0x005ba2cf                       ; 005ba2cb
        ;   XREF to: 005ba2cf (CONDITIONAL_JUMP)  ; LAB_005ba2cf
    OR AL,0x2                           ; 005ba2cd
    CMP EAX,0x3                         ; 005ba2cf
        ;   Label: LAB_005ba2cf
    JA 0x005ba320                       ; 005ba2d2
        ;   XREF to: 005ba320 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x5b9f9c]  ; 005ba2d4 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x02c9d2f4],0x30 ; 005ba2db | DAT_02c9d2f4
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 005ba2e2
    MOV ESI,EDX                         ; 005ba2e7
    ADD EDI,0x2c9e4f8                   ; 005ba2e9
    TEST EDI,0x7                        ; 005ba2ef
    JZ 0x005ba2fd                       ; 005ba2f5
        ;   XREF to: 005ba2fd (CONDITIONAL_JUMP)  ; LAB_005ba2fd
    MOVSD ES:EDI,ESI                    ; 005ba2f7 | DAT_02c9df28 | DAT_02c9e4f8
    SUB ECX,0x4                         ; 005ba2f8
    JLE 0x005ba31a                      ; 005ba2fb
        ;   XREF to: 005ba31a (CONDITIONAL_JUMP)  ; LAB_005ba31a
    SUB ECX,0x8                         ; 005ba2fd
        ;   Label: LAB_005ba2fd
    JL 0x005ba30e                       ; 005ba300
        ;   XREF to: 005ba30e (CONDITIONAL_JUMP)  ; LAB_005ba30e
    FILD qword ptr [ESI]                ; 005ba302 | DAT_02c9df28 | DAT_02c9df30 | DAT_02c9df2c
    ADD ESI,0x8                         ; 005ba304
    FISTP qword ptr [EDI]               ; 005ba307 | DAT_02c9e4f8 | DAT_02c9e500 | DAT_02c9e4fc
    ADD EDI,0x8                         ; 005ba309
    JMP 0x005ba2fd                      ; 005ba30c
        ;   XREF to: 005ba2fd (UNCONDITIONAL_JUMP)  ; LAB_005ba2fd
    ADD ECX,0x8                         ; 005ba30e
        ;   Label: LAB_005ba30e
    JLE 0x005ba31a                      ; 005ba311
        ;   XREF to: 005ba31a (CONDITIONAL_JUMP)  ; LAB_005ba31a
    MOVSD ES:EDI,ESI                    ; 005ba313 | DAT_02c9df30 | DAT_02c9e500
    SUB ECX,0x4                         ; 005ba314
    JLE 0x005ba31a                      ; 005ba317
        ;   XREF to: 005ba31a (CONDITIONAL_JUMP)  ; LAB_005ba31a
    MOVSD ES:EDI,ESI                    ; 005ba319 | DAT_02c9df34 | DAT_02c9e504
    INC dword ptr [0x02c9d2f4]          ; 005ba31a | DAT_02c9d2f4
        ;   Label: LAB_005ba31a
    MOV EDX,dword ptr [ESP + 0x14]      ; 005ba320
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x02c9d2f0]      ; 005ba324 | DAT_02c9d2f0
    INC EDX                             ; 005ba32a
    ADD EBX,0x30                        ; 005ba32b
    MOV dword ptr [ESP + 0x14],EDX      ; 005ba32e
    CMP EDX,ECX                         ; 005ba332
    JL 0x005ba297                       ; 005ba334
        ;   XREF to: 005ba297 (CONDITIONAL_JUMP)  ; LAB_005ba297
    MOV EBX,dword ptr [0x02c9d2f4]      ; 005ba33a | DAT_02c9d2f4
        ;   Label: LAB_005ba33a
    CMP EBX,0x3                         ; 005ba340
    JL 0x005ba060                       ; 005ba343
        ;   XREF to: 005ba060 (CONDITIONAL_JUMP)  ; LAB_005ba060
    XOR ESI,ESI                         ; 005ba349
    MOV dword ptr [ESP + 0xc],ESI       ; 005ba34b
    TEST EBX,EBX                        ; 005ba34f
    JLE 0x005ba405                      ; 005ba351
        ;   XREF to: 005ba405 (CONDITIONAL_JUMP)  ; LAB_005ba405
    MOV EBX,0x2c9e4f8                   ; 005ba357
    MOV EAX,dword ptr [ESP + 0xc]       ; 005ba35c
        ;   Label: LAB_005ba35c
    MOV EDI,dword ptr [0x02c9d2f4]      ; 005ba360 | DAT_02c9d2f4
    INC EAX                             ; 005ba366
    CMP EAX,EDI                         ; 005ba367
    JNZ 0x005ba36d                      ; 005ba369
        ;   XREF to: 005ba36d (CONDITIONAL_JUMP)  ; LAB_005ba36d
    XOR EAX,EDI                         ; 005ba36b
    IMUL EAX,EAX,0x30                   ; 005ba36d
        ;   Label: LAB_005ba36d
    MOV EBP,0x2c9e4f8                   ; 005ba370
    MOV EDX,EBX                         ; 005ba375
    MOV ESI,dword ptr [EBX + 0x8]       ; 005ba377 | DAT_02c9e500 | DAT_02c9e530
    MOV ECX,dword ptr [EBX + 0x4]       ; 005ba37a | DAT_02c9e4fc | DAT_02c9e52c
    NEG ESI                             ; 005ba37d
    ADD EBP,EAX                         ; 005ba37f
    XOR EAX,EAX                         ; 005ba381
    CMP ESI,ECX                         ; 005ba383
    JL 0x005ba38c                       ; 005ba385
        ;   XREF to: 005ba38c (CONDITIONAL_JUMP)  ; LAB_005ba38c
    MOV EAX,0x1                         ; 005ba387
    MOV ESI,dword ptr [EBP + 0x8]       ; 005ba38c | DAT_02c9e500
        ;   Label: LAB_005ba38c
    MOV EDI,dword ptr [EBP + 0x4]       ; 005ba38f | DAT_02c9e4fc
    NEG ESI                             ; 005ba392
    CMP ESI,EDI                         ; 005ba394
    JL 0x005ba39a                       ; 005ba396
        ;   XREF to: 005ba39a (CONDITIONAL_JUMP)  ; LAB_005ba39a
    OR AL,0x2                           ; 005ba398
    CMP EAX,0x3                         ; 005ba39a
        ;   Label: LAB_005ba39a
    JA 0x005ba3eb                       ; 005ba39d
        ;   XREF to: 005ba3eb (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x5b9fac]  ; 005ba39f | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x007c7554],0x30 ; 005ba3a6 | DAT_007c7554
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 005ba3ad
    MOV ESI,EDX                         ; 005ba3b2
    ADD EDI,0x7c7558                    ; 005ba3b4 | DAT_007c7558
    TEST EDI,0x7                        ; 005ba3ba
    JZ 0x005ba3c8                       ; 005ba3c0
        ;   XREF to: 005ba3c8 (CONDITIONAL_JUMP)  ; LAB_005ba3c8
    MOVSD ES:EDI,ESI                    ; 005ba3c2 | DAT_02c9e4f8 | DAT_007c7558
    SUB ECX,0x4                         ; 005ba3c3
    JLE 0x005ba3e5                      ; 005ba3c6
        ;   XREF to: 005ba3e5 (CONDITIONAL_JUMP)  ; LAB_005ba3e5
    SUB ECX,0x8                         ; 005ba3c8
        ;   Label: LAB_005ba3c8
    JL 0x005ba3d9                       ; 005ba3cb
        ;   XREF to: 005ba3d9 (CONDITIONAL_JUMP)  ; LAB_005ba3d9
    FILD qword ptr [ESI]                ; 005ba3cd | DAT_02c9e4f8 | DAT_02c9e500 | DAT_02c9e4fc
    ADD ESI,0x8                         ; 005ba3cf
    FISTP qword ptr [EDI]               ; 005ba3d2 | DAT_007c7558 | DAT_007c7560 | DAT_007c755c
    ADD EDI,0x8                         ; 005ba3d4
    JMP 0x005ba3c8                      ; 005ba3d7
        ;   XREF to: 005ba3c8 (UNCONDITIONAL_JUMP)  ; LAB_005ba3c8
    ADD ECX,0x8                         ; 005ba3d9
        ;   Label: LAB_005ba3d9
    JLE 0x005ba3e5                      ; 005ba3dc
        ;   XREF to: 005ba3e5 (CONDITIONAL_JUMP)  ; LAB_005ba3e5
    MOVSD ES:EDI,ESI                    ; 005ba3de | DAT_02c9e500 | DAT_007c7560
    SUB ECX,0x4                         ; 005ba3df
    JLE 0x005ba3e5                      ; 005ba3e2
        ;   XREF to: 005ba3e5 (CONDITIONAL_JUMP)  ; LAB_005ba3e5
    MOVSD ES:EDI,ESI                    ; 005ba3e4 | DAT_02c9e504 | DAT_007c7564
    INC dword ptr [0x007c7554]          ; 005ba3e5 | DAT_007c7554
        ;   Label: LAB_005ba3e5
    MOV EDX,dword ptr [ESP + 0xc]       ; 005ba3eb
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x02c9d2f4]      ; 005ba3ef | DAT_02c9d2f4
    INC EDX                             ; 005ba3f5
    ADD EBX,0x30                        ; 005ba3f6
    MOV dword ptr [ESP + 0xc],EDX       ; 005ba3f9
    CMP EDX,ECX                         ; 005ba3fd
    JL 0x005ba35c                       ; 005ba3ff
        ;   XREF to: 005ba35c (CONDITIONAL_JUMP)  ; LAB_005ba35c
    MOV EBX,dword ptr [0x007c7554]      ; 005ba405 | DAT_007c7554
        ;   Label: LAB_005ba405
    CMP EBX,0x3                         ; 005ba40b
    JL 0x005ba060                       ; 005ba40e
        ;   XREF to: 005ba060 (CONDITIONAL_JUMP)  ; LAB_005ba060
    MOV EAX,0x7c7558                    ; 005ba414 | DAT_007c7558
    XOR EBP,EBP                         ; 005ba419
    TEST EBX,EBX                        ; 005ba41b
    JLE 0x005ba060                      ; 005ba41d
        ;   XREF to: 005ba060 (CONDITIONAL_JUMP)  ; LAB_005ba060
    MOV ECX,dword ptr [EAX + 0x8]       ; 005ba423 | DAT_007c7560 | DAT_007c7590
        ;   Label: LAB_005ba423
    TEST ECX,ECX                        ; 005ba426
    JZ 0x005ba6b4                       ; 005ba428
        ;   XREF to: 005ba6b4 (CONDITIONAL_JUMP)  ; LAB_005ba6b4
    CMP ECX,dword ptr [EAX]             ; 005ba42e | DAT_007c7558 | DAT_007c7588
    JGE 0x005ba6c5                      ; 005ba430
        ;   XREF to: 005ba6c5 (CONDITIONAL_JUMP)  ; LAB_005ba6c5
    MOV dword ptr [EAX],ECX             ; 005ba436 | DAT_007c7558 | DAT_007c7588
    MOV EDX,dword ptr [0x007c7554]      ; 005ba438 | DAT_007c7554
        ;   Label: LAB_005ba438
    INC EBP                             ; 005ba43e
    ADD EAX,0x30                        ; 005ba43f | DAT_007c7588
    CMP EBP,EDX                         ; 005ba442
    JGE 0x005ba060                      ; 005ba444
        ;   XREF to: 005ba060 (CONDITIONAL_JUMP)  ; LAB_005ba060
    JMP 0x005ba423                      ; 005ba44a
        ;   XREF to: 005ba423 (UNCONDITIONAL_JUMP)  ; LAB_005ba423
    IMUL EAX,dword ptr [0x02c9d2ec],0x30 ; 005ba44c | DAT_02c9d2ec
        ;   Label: caseD_1
    ADD EAX,0x2c9d2f8                   ; 005ba453
    PUSH EAX                            ; 005ba458 | DAT_02c9d2f8
    PUSH EDX                            ; 005ba459 | DAT_02c9d928
    PUSH EBP                            ; 005ba45a
    CALL core_xform.cpp_clipInterpolateRightPlane_FUN_005b9630 ; 005ba45b
        ;   XREF to: 005b9630 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateRightPlane_FUN_005b9630(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV EBP,dword ptr [0x02c9d2ec]      ; 005ba460 | DAT_02c9d2ec
    INC EBP                             ; 005ba466
    ADD ESP,0xc                         ; 005ba467
    MOV dword ptr [0x02c9d2ec],EBP      ; 005ba46a | DAT_02c9d2ec
    JMP 0x005ba191                      ; 005ba470
        ;   XREF to: 005ba191 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x02c9d2ec],0x30 ; 005ba475 | DAT_02c9d2ec
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 005ba47c
    ADD EDI,0x2c9d2f8                   ; 005ba481
    MOV ESI,EDX                         ; 005ba487
    TEST EDI,0x7                        ; 005ba489
    JZ 0x005ba497                       ; 005ba48f
        ;   XREF to: 005ba497 (CONDITIONAL_JUMP)  ; LAB_005ba497
    MOVSD ES:EDI,ESI                    ; 005ba491 | DAT_02c9d928 | DAT_02c9d2f8
    SUB ECX,0x4                         ; 005ba492
    JLE 0x005ba4b4                      ; 005ba495
        ;   XREF to: 005ba4b4 (CONDITIONAL_JUMP)  ; LAB_005ba4b4
    SUB ECX,0x8                         ; 005ba497
        ;   Label: LAB_005ba497
    JL 0x005ba4a8                       ; 005ba49a
        ;   XREF to: 005ba4a8 (CONDITIONAL_JUMP)  ; LAB_005ba4a8
    FILD qword ptr [ESI]                ; 005ba49c | DAT_02c9d928 | DAT_02c9d930 | DAT_02c9d92c
    ADD ESI,0x8                         ; 005ba49e
    FISTP qword ptr [EDI]               ; 005ba4a1 | DAT_02c9d2f8 | DAT_02c9d300 | DAT_02c9d2fc
    ADD EDI,0x8                         ; 005ba4a3
    JMP 0x005ba497                      ; 005ba4a6
        ;   XREF to: 005ba497 (UNCONDITIONAL_JUMP)  ; LAB_005ba497
    ADD ECX,0x8                         ; 005ba4a8
        ;   Label: LAB_005ba4a8
    JLE 0x005ba4b4                      ; 005ba4ab
        ;   XREF to: 005ba4b4 (CONDITIONAL_JUMP)  ; LAB_005ba4b4
    MOVSD ES:EDI,ESI                    ; 005ba4ad | DAT_02c9d930 | DAT_02c9d300
    SUB ECX,0x4                         ; 005ba4ae
    JLE 0x005ba4b4                      ; 005ba4b1
        ;   XREF to: 005ba4b4 (CONDITIONAL_JUMP)  ; LAB_005ba4b4
    MOVSD ES:EDI,ESI                    ; 005ba4b3 | DAT_02c9d934 | DAT_02c9d304
    MOV EDI,dword ptr [0x02c9d2ec]      ; 005ba4b4 | DAT_02c9d2ec
        ;   Label: LAB_005ba4b4
    INC EDI                             ; 005ba4ba
    MOV dword ptr [0x02c9d2ec],EDI      ; 005ba4bb | DAT_02c9d2ec
    IMUL EAX,EDI,0x30                   ; 005ba4c1
    ADD EAX,0x2c9d2f8                   ; 005ba4c4
    PUSH EAX                            ; 005ba4c9 | DAT_02c9d328
    PUSH EBP                            ; 005ba4ca
    PUSH EDX                            ; 005ba4cb | DAT_02c9d928
    CALL core_xform.cpp_clipInterpolateRightPlane_FUN_005b9630 ; 005ba4cc
        ;   XREF to: 005b9630 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateRightPlane_FUN_005b9630(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV ESI,dword ptr [0x02c9d2ec]      ; 005ba4d1 | DAT_02c9d2ec
    INC ESI                             ; 005ba4d7
    ADD ESP,0xc                         ; 005ba4d8
    MOV dword ptr [0x02c9d2ec],ESI      ; 005ba4db | DAT_02c9d2ec
    JMP 0x005ba191                      ; 005ba4e1
        ;   XREF to: 005ba191 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x02c9d2f0],0x30 ; 005ba4e6 | DAT_02c9d2f0
        ;   Label: caseD_1
    ADD EAX,0x2c9def8                   ; 005ba4ed
    PUSH EAX                            ; 005ba4f2
    PUSH EDX                            ; 005ba4f3 | DAT_02c9d2f8
    PUSH EBP                            ; 005ba4f4
    CALL core_xform.cpp_clipInterpolateLeftPlane_FUN_005b96f0 ; 005ba4f5
        ;   XREF to: 005b96f0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateLeftPlane_FUN_005b96f0(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV ESI,dword ptr [0x02c9d2f0]      ; 005ba4fa | DAT_02c9d2f0
    INC ESI                             ; 005ba500
    ADD ESP,0xc                         ; 005ba501
    MOV dword ptr [0x02c9d2f0],ESI      ; 005ba504 | DAT_02c9d2f0
    JMP 0x005ba25b                      ; 005ba50a
        ;   XREF to: 005ba25b (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x02c9d2f0],0x30 ; 005ba50f | DAT_02c9d2f0
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 005ba516
    MOV ESI,EDX                         ; 005ba51b
    ADD EDI,0x2c9def8                   ; 005ba51d
    TEST EDI,0x7                        ; 005ba523
    JZ 0x005ba531                       ; 005ba529
        ;   XREF to: 005ba531 (CONDITIONAL_JUMP)  ; LAB_005ba531
    MOVSD ES:EDI,ESI                    ; 005ba52b | DAT_02c9d2f8
    SUB ECX,0x4                         ; 005ba52c
    JLE 0x005ba54e                      ; 005ba52f
        ;   XREF to: 005ba54e (CONDITIONAL_JUMP)  ; LAB_005ba54e
    SUB ECX,0x8                         ; 005ba531
        ;   Label: LAB_005ba531
    JL 0x005ba542                       ; 005ba534
        ;   XREF to: 005ba542 (CONDITIONAL_JUMP)  ; LAB_005ba542
    FILD qword ptr [ESI]                ; 005ba536 | DAT_02c9d2f8 | DAT_02c9d300 | DAT_02c9d2fc
    ADD ESI,0x8                         ; 005ba538
    FISTP qword ptr [EDI]               ; 005ba53b | DAT_02c9df00 | DAT_02c9defc
    ADD EDI,0x8                         ; 005ba53d
    JMP 0x005ba531                      ; 005ba540
        ;   XREF to: 005ba531 (UNCONDITIONAL_JUMP)  ; LAB_005ba531
    ADD ECX,0x8                         ; 005ba542
        ;   Label: LAB_005ba542
    JLE 0x005ba54e                      ; 005ba545
        ;   XREF to: 005ba54e (CONDITIONAL_JUMP)  ; LAB_005ba54e
    MOVSD ES:EDI,ESI                    ; 005ba547 | DAT_02c9d300 | DAT_02c9df00
    SUB ECX,0x4                         ; 005ba548
    JLE 0x005ba54e                      ; 005ba54b
        ;   XREF to: 005ba54e (CONDITIONAL_JUMP)  ; LAB_005ba54e
    MOVSD ES:EDI,ESI                    ; 005ba54d | DAT_02c9d304
    MOV ECX,dword ptr [0x02c9d2f0]      ; 005ba54e | DAT_02c9d2f0
        ;   Label: LAB_005ba54e
    INC ECX                             ; 005ba554
    MOV dword ptr [0x02c9d2f0],ECX      ; 005ba555 | DAT_02c9d2f0
    IMUL EAX,ECX,0x30                   ; 005ba55b
    ADD EAX,0x2c9def8                   ; 005ba55e
    PUSH EAX                            ; 005ba563 | DAT_02c9df28
    PUSH EBP                            ; 005ba564
    PUSH EDX                            ; 005ba565 | DAT_02c9d2f8
    CALL core_xform.cpp_clipInterpolateLeftPlane_FUN_005b96f0 ; 005ba566
        ;   XREF to: 005b96f0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateLeftPlane_FUN_005b96f0(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV EDI,dword ptr [0x02c9d2f0]      ; 005ba56b | DAT_02c9d2f0
    INC EDI                             ; 005ba571
    ADD ESP,0xc                         ; 005ba572
    MOV dword ptr [0x02c9d2f0],EDI      ; 005ba575 | DAT_02c9d2f0
    JMP 0x005ba25b                      ; 005ba57b
        ;   XREF to: 005ba25b (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x02c9d2f4],0x30 ; 005ba580 | DAT_02c9d2f4
        ;   Label: caseD_1
    ADD EAX,0x2c9e4f8                   ; 005ba587
    PUSH EAX                            ; 005ba58c | DAT_02c9e4f8
    PUSH EDX                            ; 005ba58d | DAT_02c9df28
    PUSH EBP                            ; 005ba58e
    CALL core_xform.cpp_clipInterpolateTopPlane_FUN_005b97b0 ; 005ba58f
        ;   XREF to: 005b97b0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateTopPlane_FUN_005b97b0(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV ESI,dword ptr [0x02c9d2f4]      ; 005ba594 | DAT_02c9d2f4
    INC ESI                             ; 005ba59a
    ADD ESP,0xc                         ; 005ba59b
    MOV dword ptr [0x02c9d2f4],ESI      ; 005ba59e | DAT_02c9d2f4
    JMP 0x005ba320                      ; 005ba5a4
        ;   XREF to: 005ba320 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x02c9d2f4],0x30 ; 005ba5a9 | DAT_02c9d2f4
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 005ba5b0
    MOV ESI,EDX                         ; 005ba5b5
    ADD EDI,0x2c9e4f8                   ; 005ba5b7
    TEST EDI,0x7                        ; 005ba5bd
    JZ 0x005ba5cb                       ; 005ba5c3
        ;   XREF to: 005ba5cb (CONDITIONAL_JUMP)  ; LAB_005ba5cb
    MOVSD ES:EDI,ESI                    ; 005ba5c5 | DAT_02c9df28 | DAT_02c9e4f8
    SUB ECX,0x4                         ; 005ba5c6
    JLE 0x005ba5e8                      ; 005ba5c9
        ;   XREF to: 005ba5e8 (CONDITIONAL_JUMP)  ; LAB_005ba5e8
    SUB ECX,0x8                         ; 005ba5cb
        ;   Label: LAB_005ba5cb
    JL 0x005ba5dc                       ; 005ba5ce
        ;   XREF to: 005ba5dc (CONDITIONAL_JUMP)  ; LAB_005ba5dc
    FILD qword ptr [ESI]                ; 005ba5d0 | DAT_02c9df28 | DAT_02c9df30 | DAT_02c9df2c
    ADD ESI,0x8                         ; 005ba5d2
    FISTP qword ptr [EDI]               ; 005ba5d5 | DAT_02c9e4f8 | DAT_02c9e500 | DAT_02c9e4fc
    ADD EDI,0x8                         ; 005ba5d7
    JMP 0x005ba5cb                      ; 005ba5da
        ;   XREF to: 005ba5cb (UNCONDITIONAL_JUMP)  ; LAB_005ba5cb
    ADD ECX,0x8                         ; 005ba5dc
        ;   Label: LAB_005ba5dc
    JLE 0x005ba5e8                      ; 005ba5df
        ;   XREF to: 005ba5e8 (CONDITIONAL_JUMP)  ; LAB_005ba5e8
    MOVSD ES:EDI,ESI                    ; 005ba5e1 | DAT_02c9df30 | DAT_02c9e500
    SUB ECX,0x4                         ; 005ba5e2
    JLE 0x005ba5e8                      ; 005ba5e5
        ;   XREF to: 005ba5e8 (CONDITIONAL_JUMP)  ; LAB_005ba5e8
    MOVSD ES:EDI,ESI                    ; 005ba5e7 | DAT_02c9df34 | DAT_02c9e504
    MOV ECX,dword ptr [0x02c9d2f4]      ; 005ba5e8 | DAT_02c9d2f4
        ;   Label: LAB_005ba5e8
    INC ECX                             ; 005ba5ee
    MOV dword ptr [0x02c9d2f4],ECX      ; 005ba5ef | DAT_02c9d2f4
    IMUL EAX,ECX,0x30                   ; 005ba5f5
    ADD EAX,0x2c9e4f8                   ; 005ba5f8
    PUSH EAX                            ; 005ba5fd
    PUSH EBP                            ; 005ba5fe
    PUSH EDX                            ; 005ba5ff | DAT_02c9df28
    CALL core_xform.cpp_clipInterpolateTopPlane_FUN_005b97b0 ; 005ba600
        ;   XREF to: 005b97b0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateTopPlane_FUN_005b97b0(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV EDI,dword ptr [0x02c9d2f4]      ; 005ba605 | DAT_02c9d2f4
    INC EDI                             ; 005ba60b
    ADD ESP,0xc                         ; 005ba60c
    MOV dword ptr [0x02c9d2f4],EDI      ; 005ba60f | DAT_02c9d2f4
    JMP 0x005ba320                      ; 005ba615
        ;   XREF to: 005ba320 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x007c7554],0x30 ; 005ba61a | DAT_007c7554
        ;   Label: caseD_1
    ADD EAX,0x7c7558                    ; 005ba621 | DAT_007c7558
    PUSH EAX                            ; 005ba626 | DAT_007c7558
    PUSH EDX                            ; 005ba627 | DAT_02c9e4f8
    PUSH EBP                            ; 005ba628
    CALL core_xform.cpp_clipInterpolateBottomPlane_FUN_005b9870 ; 005ba629
        ;   XREF to: 005b9870 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateBottomPlane_FUN_005b9870(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV ESI,dword ptr [0x007c7554]      ; 005ba62e | DAT_007c7554
    INC ESI                             ; 005ba634
    ADD ESP,0xc                         ; 005ba635
    MOV dword ptr [0x007c7554],ESI      ; 005ba638 | DAT_007c7554
    JMP 0x005ba3eb                      ; 005ba63e
        ;   XREF to: 005ba3eb (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x007c7554],0x30 ; 005ba643 | DAT_007c7554
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 005ba64a
    MOV ESI,EDX                         ; 005ba64f
    ADD EDI,0x7c7558                    ; 005ba651 | DAT_007c7558
    TEST EDI,0x7                        ; 005ba657
    JZ 0x005ba665                       ; 005ba65d
        ;   XREF to: 005ba665 (CONDITIONAL_JUMP)  ; LAB_005ba665
    MOVSD ES:EDI,ESI                    ; 005ba65f | DAT_02c9e4f8 | DAT_007c7558
    SUB ECX,0x4                         ; 005ba660
    JLE 0x005ba682                      ; 005ba663
        ;   XREF to: 005ba682 (CONDITIONAL_JUMP)  ; LAB_005ba682
    SUB ECX,0x8                         ; 005ba665
        ;   Label: LAB_005ba665
    JL 0x005ba676                       ; 005ba668
        ;   XREF to: 005ba676 (CONDITIONAL_JUMP)  ; LAB_005ba676
    FILD qword ptr [ESI]                ; 005ba66a | DAT_02c9e4f8 | DAT_02c9e500 | DAT_02c9e4fc
    ADD ESI,0x8                         ; 005ba66c
    FISTP qword ptr [EDI]               ; 005ba66f | DAT_007c7558 | DAT_007c7560 | DAT_007c755c
    ADD EDI,0x8                         ; 005ba671
    JMP 0x005ba665                      ; 005ba674
        ;   XREF to: 005ba665 (UNCONDITIONAL_JUMP)  ; LAB_005ba665
    ADD ECX,0x8                         ; 005ba676
        ;   Label: LAB_005ba676
    JLE 0x005ba682                      ; 005ba679
        ;   XREF to: 005ba682 (CONDITIONAL_JUMP)  ; LAB_005ba682
    MOVSD ES:EDI,ESI                    ; 005ba67b | DAT_02c9e500 | DAT_007c7560
    SUB ECX,0x4                         ; 005ba67c
    JLE 0x005ba682                      ; 005ba67f
        ;   XREF to: 005ba682 (CONDITIONAL_JUMP)  ; LAB_005ba682
    MOVSD ES:EDI,ESI                    ; 005ba681 | DAT_02c9e504 | DAT_007c7564
    MOV ECX,dword ptr [0x007c7554]      ; 005ba682 | DAT_007c7554
        ;   Label: LAB_005ba682
    INC ECX                             ; 005ba688
    MOV dword ptr [0x007c7554],ECX      ; 005ba689 | DAT_007c7554
    IMUL EAX,ECX,0x30                   ; 005ba68f
    ADD EAX,0x7c7558                    ; 005ba692 | DAT_007c7558
    PUSH EAX                            ; 005ba697 | DAT_007c7588
    PUSH EBP                            ; 005ba698
    PUSH EDX                            ; 005ba699 | DAT_02c9e4f8
    CALL core_xform.cpp_clipInterpolateBottomPlane_FUN_005b9870 ; 005ba69a
        ;   XREF to: 005b9870 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateBottomPlane_FUN_005b9870(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV EDI,dword ptr [0x007c7554]      ; 005ba69f | DAT_007c7554
    INC EDI                             ; 005ba6a5
    ADD ESP,0xc                         ; 005ba6a6
    MOV dword ptr [0x007c7554],EDI      ; 005ba6a9 | DAT_007c7554
    JMP 0x005ba3eb                      ; 005ba6af
        ;   XREF to: 005ba3eb (UNCONDITIONAL_JUMP)  ; caseD_3
    MOV dword ptr [EAX + 0x8],0x1       ; 005ba6b4 | DAT_007c7590
        ;   Label: LAB_005ba6b4
    MOV dword ptr [EAX],ECX             ; 005ba6bb | DAT_007c7588
    MOV dword ptr [EAX + 0x4],ECX       ; 005ba6bd | DAT_007c758c
    JMP 0x005ba438                      ; 005ba6c0
        ;   XREF to: 005ba438 (UNCONDITIONAL_JUMP)  ; LAB_005ba438
    MOV EDX,ECX                         ; 005ba6c5
        ;   Label: LAB_005ba6c5
    MOV ESI,dword ptr [EAX]             ; 005ba6c7 | DAT_007c7588
    NEG EDX                             ; 005ba6c9
    CMP EDX,ESI                         ; 005ba6cb
    JLE 0x005ba6d6                      ; 005ba6cd
        ;   XREF to: 005ba6d6 (CONDITIONAL_JUMP)  ; LAB_005ba6d6
    MOV dword ptr [EAX],EDX             ; 005ba6cf | DAT_007c7588
    JMP 0x005ba438                      ; 005ba6d1
        ;   XREF to: 005ba438 (UNCONDITIONAL_JUMP)  ; LAB_005ba438
    MOV EBX,dword ptr [EAX + 0x4]       ; 005ba6d6 | DAT_007c758c
        ;   Label: LAB_005ba6d6
    CMP EBX,ECX                         ; 005ba6d9
    JLE 0x005ba6e5                      ; 005ba6db
        ;   XREF to: 005ba6e5 (CONDITIONAL_JUMP)  ; LAB_005ba6e5
    MOV dword ptr [EAX + 0x4],ECX       ; 005ba6dd | DAT_007c758c
    JMP 0x005ba438                      ; 005ba6e0
        ;   XREF to: 005ba438 (UNCONDITIONAL_JUMP)  ; LAB_005ba438
    CMP EDX,EBX                         ; 005ba6e5
        ;   Label: LAB_005ba6e5
    JLE 0x005ba438                      ; 005ba6e7
        ;   XREF to: 005ba438 (CONDITIONAL_JUMP)  ; LAB_005ba438
    MOV dword ptr [EAX + 0x4],EDX       ; 005ba6ed | DAT_007c758c
    JMP 0x005ba438                      ; 005ba6f0
        ;   XREF to: 005ba438 (UNCONDITIONAL_JUMP)  ; LAB_005ba438

