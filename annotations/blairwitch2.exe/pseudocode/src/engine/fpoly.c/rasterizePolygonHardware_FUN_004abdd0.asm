; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_fpoly_c_rasterizePolygonHardware_FUN_004abdd0(int *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   engine_3d.c_renderPolygonSolidTexturedHardwareOp53_FUN_00405ac0 at 00405b16
;   engine_3d.c_renderPolygonTexturedHardwareOp40_FUN_00405a20 at 00405a69
;
; Referenced Globals:
;   undefined4 DAT_006141bc
;   undefined4 DAT_01cb0258
;   undefined4 DAT_01cb025c
;   undefined4 DAT_01cb0294
;   undefined4 DAT_01cb05dc
;   undefined4 DAT_01cb05e0
;
; Called Functions:
;   engine_special.cpp_FUN_0055d6d7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004abdd0
        ;   Label: engine_fpoly.c_rasterizePolygonHardware_FUN_004abdd0
    PUSH ESI                            ; 004abdd1
    PUSH EDI                            ; 004abdd2
    PUSH EBP                            ; 004abdd3
    SUB ESP,0x14                        ; 004abdd4
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004abdd7
    MOV EAX,[0x006141bc]                ; 004abddb | DAT_006141bc
    XOR EDX,EDX                         ; 004abde0
    XOR EBP,EBP                         ; 004abde2
    MOV [0x01cb05dc],EAX                ; 004abde4 | DAT_01cb05dc
    MOV dword ptr [0x01cb05e0],EDX      ; 004abde9 | DAT_01cb05e0
    MOV dword ptr [ESP + 0x4],EDX       ; 004abdef
    TEST EBX,EBX                        ; 004abdf3
    JLE 0x004abe4b                      ; 004abdf5
        ;   XREF to: 004abe4b (CONDITIONAL_JUMP)  ; LAB_004abe4b
    MOV EAX,dword ptr [ESP + 0x28]      ; 004abdf7
    MOV dword ptr [ESP],EAX             ; 004abdfb
    MOV EAX,dword ptr [ESP + 0x4]       ; 004abdfe
        ;   Label: LAB_004abdfe
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004abe02
    INC EAX                             ; 004abe06
    CMP EAX,ECX                         ; 004abe07
    JL 0x004abe0d                       ; 004abe09
        ;   XREF to: 004abe0d (CONDITIONAL_JUMP)  ; LAB_004abe0d
    XOR EAX,EAX                         ; 004abe0b
    MOV EBX,dword ptr [ESP + 0x28]      ; 004abe0d
        ;   Label: LAB_004abe0d
    SHL EAX,0x2                         ; 004abe11
    ADD EAX,EBX                         ; 004abe14
    MOV EBX,dword ptr [ESP]             ; 004abe16
    MOV EDI,dword ptr [EAX]             ; 004abe19
    MOV EBX,dword ptr [EBX]             ; 004abe1b
    MOV EAX,dword ptr [EDI + 0x14]      ; 004abe1d
    MOV EDX,dword ptr [EBX + 0x14]      ; 004abe20
    SAR EAX,0x10                        ; 004abe23
    SAR EDX,0x10                        ; 004abe26
    CMP EDX,EAX                         ; 004abe29
    JNZ 0x004abf72                      ; 004abe2b
        ;   XREF to: 004abf72 (CONDITIONAL_JUMP)  ; LAB_004abf72
    MOV ESI,dword ptr [ESP]             ; 004abe31
        ;   Label: LAB_004abe31
    MOV EDI,dword ptr [ESP + 0x4]       ; 004abe34
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004abe38
    ADD ESI,0x4                         ; 004abe3c
    INC EDI                             ; 004abe3f
    MOV dword ptr [ESP],ESI             ; 004abe40
    MOV dword ptr [ESP + 0x4],EDI       ; 004abe43
    CMP EDI,EDX                         ; 004abe47
    JL 0x004abdfe                       ; 004abe49
        ;   XREF to: 004abdfe (CONDITIONAL_JUMP)  ; LAB_004abdfe
    MOV EAX,0x1cb025c                   ; 004abe4b
        ;   Label: LAB_004abe4b
    MOV ECX,dword ptr [0x01cb05dc]      ; 004abe50 | DAT_01cb05dc
    XOR EDX,EDX                         ; 004abe56
    TEST EBP,EBP                        ; 004abe58
    JLE 0x004ac083                      ; 004abe5a
        ;   XREF to: 004ac083 (CONDITIONAL_JUMP)  ; LAB_004ac083
    CMP ECX,dword ptr [EAX]             ; 004abe60 | DAT_01cb025c | DAT_01cb0294
        ;   Label: LAB_004abe60
    JNZ 0x004ac077                      ; 004abe62
        ;   XREF to: 004ac077 (CONDITIONAL_JUMP)  ; LAB_004ac077
    TEST EAX,EAX                        ; 004abe68
    JZ 0x004ac077                       ; 004abe6a
        ;   XREF to: 004ac077 (CONDITIONAL_JUMP)  ; LAB_004ac077
    MOV dword ptr [ESP + 0xc],EAX       ; 004abe70 | DAT_01cb025c | DAT_01cb0294
        ;   Label: LAB_004abe70
    MOV dword ptr [0x01cb0258],EBP      ; 004abe74 | DAT_01cb0258
    TEST EAX,EAX                        ; 004abe7a
    JZ 0x004abf64                       ; 004abe7c
        ;   XREF to: 004abf64 (CONDITIONAL_JUMP)  ; LAB_004abf64
    MOV EBX,dword ptr [0x01cb05dc]      ; 004abe82 | DAT_01cb05dc
    MOV ECX,EAX                         ; 004abe88
    XOR EDX,EDX                         ; 004abe8a
    MOV EAX,0x1cb025c                   ; 004abe8c
    TEST EBP,EBP                        ; 004abe91
    JLE 0x004ac096                      ; 004abe93
        ;   XREF to: 004ac096 (CONDITIONAL_JUMP)  ; LAB_004ac096
    CMP EBX,dword ptr [EAX]             ; 004abe99 | DAT_01cb025c | DAT_01cb0294
        ;   Label: LAB_004abe99
    JNZ 0x004ac08a                      ; 004abe9b
        ;   XREF to: 004ac08a (CONDITIONAL_JUMP)  ; LAB_004ac08a
    CMP EAX,ECX                         ; 004abea1
    JZ 0x004ac08a                       ; 004abea3
        ;   XREF to: 004ac08a (CONDITIONAL_JUMP)  ; LAB_004ac08a
    MOV dword ptr [ESP + 0x10],EAX      ; 004abea9 | DAT_01cb025c | DAT_01cb0294
        ;   Label: LAB_004abea9
    MOV dword ptr [0x01cb0258],EBP      ; 004abead | DAT_01cb0258
    TEST EAX,EAX                        ; 004abeb3
    JZ 0x004abf64                       ; 004abeb5
        ;   XREF to: 004abf64 (CONDITIONAL_JUMP)  ; LAB_004abf64
    MOV EAX,[0x01cb05dc]                ; 004abebb | DAT_01cb05dc
    MOV dword ptr [ESP + 0x8],EAX       ; 004abec0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004abec4
        ;   Label: LAB_004abec4
    MOV EAX,dword ptr [ESP + 0x8]       ; 004abec8
    CMP EAX,dword ptr [EDX + 0x4]       ; 004abecc
    JL 0x004abf10                       ; 004abecf
        ;   XREF to: 004abf10 (CONDITIONAL_JUMP)  ; LAB_004abf10
    MOV ECX,dword ptr [ESP + 0x10]      ; 004abed1
    MOV EBP,dword ptr [0x01cb0258]      ; 004abed5 | DAT_01cb0258
    MOV EBX,EAX                         ; 004abedb
    MOV dword ptr [EDX],0xffffffff      ; 004abedd
    MOV EAX,0x1cb025c                   ; 004abee3
    XOR EDX,EDX                         ; 004abee8
    TEST EBP,EBP                        ; 004abeea
    JLE 0x004ac0a9                      ; 004abeec
        ;   XREF to: 004ac0a9 (CONDITIONAL_JUMP)  ; LAB_004ac0a9
    CMP EBX,dword ptr [EAX]             ; 004abef2 | DAT_01cb025c | DAT_01cb0294
        ;   Label: LAB_004abef2
    JNZ 0x004ac09d                      ; 004abef4
        ;   XREF to: 004ac09d (CONDITIONAL_JUMP)  ; LAB_004ac09d
    CMP EAX,ECX                         ; 004abefa
    JZ 0x004ac09d                       ; 004abefc
        ;   XREF to: 004ac09d (CONDITIONAL_JUMP)  ; LAB_004ac09d
    MOV dword ptr [ESP + 0xc],EAX       ; 004abf02 | DAT_01cb025c | DAT_01cb0294
        ;   Label: LAB_004abf02
    MOV dword ptr [0x01cb0258],EBP      ; 004abf06 | DAT_01cb0258
    TEST EAX,EAX                        ; 004abf0c
    JZ 0x004abf64                       ; 004abf0e
        ;   XREF to: 004abf64 (CONDITIONAL_JUMP)  ; LAB_004abf64
    MOV EDX,dword ptr [ESP + 0x10]      ; 004abf10
        ;   Label: LAB_004abf10
    MOV EAX,dword ptr [ESP + 0x8]       ; 004abf14
    CMP EAX,dword ptr [EDX + 0x4]       ; 004abf18
    JL 0x004ac0c3                       ; 004abf1b
        ;   XREF to: 004ac0c3 (CONDITIONAL_JUMP)  ; LAB_004ac0c3
    MOV ECX,dword ptr [ESP + 0xc]       ; 004abf21
    MOV EBP,dword ptr [0x01cb0258]      ; 004abf25 | DAT_01cb0258
    MOV EBX,EAX                         ; 004abf2b
    MOV dword ptr [EDX],0xffffffff      ; 004abf2d
    MOV EAX,0x1cb025c                   ; 004abf33
    XOR EDX,EDX                         ; 004abf38
    TEST EBP,EBP                        ; 004abf3a
    JLE 0x004ac0bc                      ; 004abf3c
        ;   XREF to: 004ac0bc (CONDITIONAL_JUMP)  ; LAB_004ac0bc
    CMP EBX,dword ptr [EAX]             ; 004abf42 | DAT_01cb025c | DAT_01cb0294
        ;   Label: LAB_004abf42
    JNZ 0x004ac0b0                      ; 004abf44
        ;   XREF to: 004ac0b0 (CONDITIONAL_JUMP)  ; LAB_004ac0b0
    CMP EAX,ECX                         ; 004abf4a
    JZ 0x004ac0b0                       ; 004abf4c
        ;   XREF to: 004ac0b0 (CONDITIONAL_JUMP)  ; LAB_004ac0b0
    MOV dword ptr [ESP + 0x10],EAX      ; 004abf52 | DAT_01cb0294 | DAT_01cb025c
        ;   Label: LAB_004abf52
    MOV dword ptr [0x01cb0258],EBP      ; 004abf56 | DAT_01cb0258
    TEST EAX,EAX                        ; 004abf5c
    JNZ 0x004ac0c3                      ; 004abf5e
        ;   XREF to: 004ac0c3 (CONDITIONAL_JUMP)  ; LAB_004ac0c3
    MOV EBP,dword ptr [0x01cb0258]      ; 004abf64 | DAT_01cb0258
        ;   Label: LAB_004abf64
    ADD ESP,0x14                        ; 004abf6a
    POP EBP                             ; 004abf6d
    POP EDI                             ; 004abf6e
    POP ESI                             ; 004abf6f
    POP EBX                             ; 004abf70
    RET                                 ; 004abf71
    MOV ESI,dword ptr [EDI + 0x14]      ; 004abf72
        ;   Label: LAB_004abf72
    CMP ESI,dword ptr [EBX + 0x14]      ; 004abf75
    JGE 0x004abf86                      ; 004abf78
        ;   XREF to: 004abf86 (CONDITIONAL_JUMP)  ; LAB_004abf86
    MOV ECX,EBX                         ; 004abf7a
    MOV EBX,EDI                         ; 004abf7c
    MOV EDI,ECX                         ; 004abf7e
    MOV ECX,EDX                         ; 004abf80
    MOV EDX,EAX                         ; 004abf82
    MOV EAX,ECX                         ; 004abf84
    IMUL ECX,EBP,0x38                   ; 004abf86
        ;   Label: LAB_004abf86
    ADD ECX,0x1cb025c                   ; 004abf89
    MOV dword ptr [ECX],EDX             ; 004abf8f | DAT_01cb025c
    MOV ESI,dword ptr [0x01cb05dc]      ; 004abf91 | DAT_01cb05dc
    MOV dword ptr [ECX + 0x4],EAX       ; 004abf97
    CMP EDX,ESI                         ; 004abf9a
    JGE 0x004abfa4                      ; 004abf9c
        ;   XREF to: 004abfa4 (CONDITIONAL_JUMP)  ; LAB_004abfa4
    MOV dword ptr [0x01cb05dc],EDX      ; 004abf9e | DAT_01cb05dc
    CMP EAX,dword ptr [0x01cb05e0]      ; 004abfa4 | DAT_01cb05e0
        ;   Label: LAB_004abfa4
    JLE 0x004abfb1                      ; 004abfaa
        ;   XREF to: 004abfb1 (CONDITIONAL_JUMP)  ; LAB_004abfb1
    MOV [0x01cb05e0],EAX                ; 004abfac | DAT_01cb05e0
    MOV EAX,dword ptr [EBX + 0x10]      ; 004abfb1
        ;   Label: LAB_004abfb1
    MOV dword ptr [ECX + 0x8],EAX       ; 004abfb4
    MOV EAX,dword ptr [EBX + 0x18]      ; 004abfb7
    MOV dword ptr [ECX + 0x18],EAX      ; 004abfba
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004abfbd
    MOV dword ptr [ECX + 0x20],EAX      ; 004abfc0
    MOV ESI,dword ptr [EDI + 0x14]      ; 004abfc3
    SUB ESI,dword ptr [EBX + 0x14]      ; 004abfc6
    CMP ESI,0x10000                     ; 004abfc9
    JNC 0x004ac067                      ; 004abfcf
        ;   XREF to: 004ac067 (CONDITIONAL_JUMP)  ; LAB_004ac067
    XOR ESI,ESI                         ; 004abfd5
    MOV EAX,dword ptr [EDI + 0x10]      ; 004abfd7
        ;   Label: LAB_004abfd7
    MOV EDX,dword ptr [EBX + 0x10]      ; 004abfda
    SUB EAX,EDX                         ; 004abfdd
    MOV EDX,EAX                         ; 004abfdf
    MOV EAX,ESI                         ; 004abfe1
    MOV dword ptr [0x01cb0258],EBP      ; 004abfe3 | DAT_01cb0258
    IMUL EDX                            ; 004abfe9
    SHRD EAX,EDX,0x10                   ; 004abfeb
    MOV dword ptr [ECX + 0xc],EAX       ; 004abfef
    MOV EAX,dword ptr [EDI + 0x18]      ; 004abff2
    MOV EDX,dword ptr [EBX + 0x18]      ; 004abff5
    SUB EAX,EDX                         ; 004abff8
    MOV EDX,EAX                         ; 004abffa
    MOV EAX,ESI                         ; 004abffc
    IMUL EDX                            ; 004abffe
    SHRD EAX,EDX,0x10                   ; 004ac000
    MOV dword ptr [ECX + 0x1c],EAX      ; 004ac004
    MOV EDX,dword ptr [EDI + 0x1c]      ; 004ac007
    MOV EDI,dword ptr [EBX + 0x1c]      ; 004ac00a
    MOV EAX,ESI                         ; 004ac00d
    SUB EDX,EDI                         ; 004ac00f
    IMUL EDX                            ; 004ac011
    SHRD EAX,EDX,0x10                   ; 004ac013
    MOV dword ptr [ECX + 0x24],EAX      ; 004ac017
    MOV EBX,dword ptr [EBX + 0x14]      ; 004ac01a
    AND EBX,0xffff                      ; 004ac01d
    XOR BX,0xffff                       ; 004ac023
    MOV EDX,dword ptr [ECX + 0xc]       ; 004ac027
    MOV EAX,EBX                         ; 004ac02a
    IMUL EDX                            ; 004ac02c
    SHRD EAX,EDX,0x10                   ; 004ac02e
    ADD dword ptr [ECX + 0x8],EAX       ; 004ac032
    MOV EAX,EBX                         ; 004ac035
    MOV EDX,dword ptr [ECX + 0x1c]      ; 004ac037
    IMUL EDX                            ; 004ac03a
    SHRD EAX,EDX,0x10                   ; 004ac03c
    MOV ESI,dword ptr [ECX + 0x18]      ; 004ac040
    MOV EDX,dword ptr [ECX + 0x24]      ; 004ac043
    ADD ESI,EAX                         ; 004ac046
    MOV EAX,EBX                         ; 004ac048
    MOV dword ptr [ECX + 0x18],ESI      ; 004ac04a
    IMUL EDX                            ; 004ac04d
    SHRD EAX,EDX,0x10                   ; 004ac04f
    MOV EDI,dword ptr [ECX + 0x20]      ; 004ac053
    MOV EBP,dword ptr [0x01cb0258]      ; 004ac056 | DAT_01cb0258
    ADD EDI,EAX                         ; 004ac05c
    INC EBP                             ; 004ac05e
    MOV dword ptr [ECX + 0x20],EDI      ; 004ac05f
    JMP 0x004abe31                      ; 004ac062
        ;   XREF to: 004abe31 (UNCONDITIONAL_JUMP)  ; LAB_004abe31
    MOV EAX,0xffffffff                  ; 004ac067
        ;   Label: LAB_004ac067
    XOR EDX,EDX                         ; 004ac06c
    DIV ESI                             ; 004ac06e
    MOV ESI,EAX                         ; 004ac070
    JMP 0x004abfd7                      ; 004ac072
        ;   XREF to: 004abfd7 (UNCONDITIONAL_JUMP)  ; LAB_004abfd7
    INC EDX                             ; 004ac077
        ;   Label: LAB_004ac077
    ADD EAX,0x38                        ; 004ac078
    CMP EDX,EBP                         ; 004ac07b
    JL 0x004abe60                       ; 004ac07d
        ;   XREF to: 004abe60 (CONDITIONAL_JUMP)  ; LAB_004abe60
    XOR EAX,EAX                         ; 004ac083
        ;   Label: LAB_004ac083
    JMP 0x004abe70                      ; 004ac085
        ;   XREF to: 004abe70 (UNCONDITIONAL_JUMP)  ; LAB_004abe70
    INC EDX                             ; 004ac08a
        ;   Label: LAB_004ac08a
    ADD EAX,0x38                        ; 004ac08b
    CMP EDX,EBP                         ; 004ac08e
    JL 0x004abe99                       ; 004ac090
        ;   XREF to: 004abe99 (CONDITIONAL_JUMP)  ; LAB_004abe99
    XOR EAX,EAX                         ; 004ac096
        ;   Label: LAB_004ac096
    JMP 0x004abea9                      ; 004ac098
        ;   XREF to: 004abea9 (UNCONDITIONAL_JUMP)  ; LAB_004abea9
    INC EDX                             ; 004ac09d
        ;   Label: LAB_004ac09d
    ADD EAX,0x38                        ; 004ac09e
    CMP EDX,EBP                         ; 004ac0a1
    JL 0x004abef2                       ; 004ac0a3
        ;   XREF to: 004abef2 (CONDITIONAL_JUMP)  ; LAB_004abef2
    XOR EAX,EAX                         ; 004ac0a9
        ;   Label: LAB_004ac0a9
    JMP 0x004abf02                      ; 004ac0ab
        ;   XREF to: 004abf02 (UNCONDITIONAL_JUMP)  ; LAB_004abf02
    INC EDX                             ; 004ac0b0
        ;   Label: LAB_004ac0b0
    ADD EAX,0x38                        ; 004ac0b1 | DAT_01cb0294
    CMP EDX,EBP                         ; 004ac0b4
    JL 0x004abf42                       ; 004ac0b6
        ;   XREF to: 004abf42 (CONDITIONAL_JUMP)  ; LAB_004abf42
    XOR EAX,EAX                         ; 004ac0bc
        ;   Label: LAB_004ac0bc
    JMP 0x004abf52                      ; 004ac0be
        ;   XREF to: 004abf52 (UNCONDITIONAL_JUMP)  ; LAB_004abf52
    MOV EDI,dword ptr [ESP + 0x10]      ; 004ac0c3
        ;   Label: LAB_004ac0c3
    MOV ESI,dword ptr [ESP + 0xc]       ; 004ac0c7
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ac0cb
    CALL engine_special.cpp_FUN_0055d6d7 ; 004ac0cf
        ;   XREF to: 0055d6d7 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_0055d6d7()
    MOV EAX,dword ptr [ESP + 0xc]       ; 004ac0d4
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ac0d8
    MOV EAX,dword ptr [EAX + 0xc]       ; 004ac0dc
    MOV EDI,dword ptr [EDX + 0x8]       ; 004ac0df
    MOV ECX,dword ptr [EDX + 0x18]      ; 004ac0e2
    MOV EBX,dword ptr [EDX + 0x20]      ; 004ac0e5
    ADD EDI,EAX                         ; 004ac0e8
    MOV EAX,dword ptr [EDX + 0x1c]      ; 004ac0ea
    MOV dword ptr [EDX + 0x8],EDI       ; 004ac0ed
    ADD ECX,EAX                         ; 004ac0f0
    MOV EAX,dword ptr [EDX + 0x24]      ; 004ac0f2
    MOV dword ptr [EDX + 0x18],ECX      ; 004ac0f5
    ADD EBX,EAX                         ; 004ac0f8
    MOV EAX,dword ptr [ESP + 0x10]      ; 004ac0fa
    MOV dword ptr [EDX + 0x20],EBX      ; 004ac0fe
    MOV EDX,dword ptr [ESP + 0x10]      ; 004ac101
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ac105
    MOV EAX,dword ptr [EAX + 0xc]       ; 004ac109
    INC EBX                             ; 004ac10c
    MOV ESI,dword ptr [EDX + 0x8]       ; 004ac10d
    MOV EDI,dword ptr [EDX + 0x18]      ; 004ac110
    MOV ECX,dword ptr [EDX + 0x20]      ; 004ac113
    ADD ESI,EAX                         ; 004ac116
    MOV EAX,dword ptr [EDX + 0x1c]      ; 004ac118
    MOV dword ptr [EDX + 0x8],ESI       ; 004ac11b
    ADD EDI,EAX                         ; 004ac11e
    MOV EAX,dword ptr [EDX + 0x24]      ; 004ac120
    MOV dword ptr [EDX + 0x18],EDI      ; 004ac123
    ADD ECX,EAX                         ; 004ac126
    MOV dword ptr [ESP + 0x8],EBX       ; 004ac128
    MOV dword ptr [EDX + 0x20],ECX      ; 004ac12c
    JMP 0x004abec4                      ; 004ac12f
        ;   XREF to: 004abec4 (UNCONDITIONAL_JUMP)  ; LAB_004abec4

