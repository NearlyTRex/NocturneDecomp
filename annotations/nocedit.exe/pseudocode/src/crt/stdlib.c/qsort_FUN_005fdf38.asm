; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl crt_stdlib_c_qsort_FUN_005fdf38(void *base,SIZE_T num,SIZE_T size,QSORT_COMPARATOR compar)
;
; Parameters:
; void *           Stack[0x4]:4   base
; SIZE_T           Stack[0x8]:4   num
; SIZE_T           Stack[0xc]:4   size
; QSORT_COMPARATOR Stack[0x10]:4   compar
; Local Variables:
; int              Stack[-0x6c]:4  local_6c
; int              Stack[-0x68]:4  local_68
; SIZE_T           Stack[-0x64]:4  local_64
; int              Stack[-0x60]:4  local_60
; void *           Stack[-0x5c]:4  local_5c
; int              Stack[-0x58]:4  local_58
; void *           Stack[-0x50]:4  local_50
; void *           Stack[-0x4c]:4  local_4c
; void *           Stack[-0x48]:4  local_48
; void *           Stack[-0x44]:4  local_44
; int              Stack[-0x40]:4  local_40
; QSORT_COMPARATOR Stack[-0x3c]:4  local_3c
; int              Stack[-0x38]:4  local_38
; void *           Stack[-0x34]:4  local_34
; void *           Stack[-0x30]:4  local_30
; void *           Stack[-0x2c]:4  local_2c
; void *           Stack[-0x28]:4  local_28
; SIZE_T           Stack[-0x24]:4  local_24
; void *           Stack[-0x20]:4  local_20
;
; XREF[10]:
;   core_script.cpp_CScript_FUN_00567630 at 005676c1
;   core_set.cpp_CDemonSet_FUN_0056fbd0 at 0056fca3
;   engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_004070c0 at 00407113
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80 at 0048dadd
;   engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650 at 0054fa6a
;   shape_cramtex.cpp_generateTextureAtlasLayout_FUN_00444d90 at 00444e79
;   shape_cramtex.cpp_generateTextureAtlas_FUN_00445820 at 0044585a
;   shape_cramtex.cpp_runInteractiveAtlasGeneration_FUN_00446160 at 0044625a
;   shape_design.c_vertexReducer_FUN_00467850 at 00467d07
;   shape_edittool.cpp_CStrList_sort_FUN_004a2f00 at 004a2f59
;
; Called Functions:
;   crt_stdlib.c_median_of_3_FUN_005fdea0
;   crt_stdlib.c_memory_swap_FUN_005fdf10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fdf38
        ;   Label: crt_stdlib.c_qsort_FUN_005fdf38
    PUSH ESI                            ; 005fdf39
    PUSH EDI                            ; 005fdf3a
    PUSH ES                             ; 005fdf3b
    PUSH FS                             ; 005fdf3c
    PUSH GS                             ; 005fdf3e
    PUSH EBP                            ; 005fdf40
    SUB ESP,0x150                       ; 005fdf41
    MOV EAX,dword ptr [ESP + 0x170]     ; 005fdf47
    MOV EBP,dword ptr [ESP + 0x178]     ; 005fdf4e
    MOV EDX,dword ptr [ESP + 0x17c]     ; 005fdf55
    MOV dword ptr [ESP + 0x124],EAX     ; 005fdf5c
    OR EAX,EBP                          ; 005fdf63
    MOV dword ptr [ESP + 0x130],EDX     ; 005fdf65
    TEST AL,0x3                         ; 005fdf6c
    JZ 0x005fdf77                       ; 005fdf6e
        ;   XREF to: 005fdf77 (CONDITIONAL_JUMP)  ; LAB_005fdf77
    MOV EAX,0x2                         ; 005fdf70
    JMP 0x005fdf82                      ; 005fdf75
        ;   XREF to: 005fdf82 (UNCONDITIONAL_JUMP)  ; LAB_005fdf82
    CMP EBP,0x4                         ; 005fdf77
        ;   Label: LAB_005fdf77
    SETA AL                             ; 005fdf7a
    AND EAX,0xff                        ; 005fdf7d
    MOV dword ptr [ESP + 0x134],EAX     ; 005fdf82
        ;   Label: LAB_005fdf82
    LEA EAX,[EBP + EBP*0x1]             ; 005fdf89
    MOV dword ptr [ESP + 0x10c],EAX     ; 005fdf8d
    LEA EAX,[EBP*0x4 + 0x0]             ; 005fdf94
    XOR EDX,EDX                         ; 005fdf9b
    SUB EAX,EBP                         ; 005fdf9d
    MOV dword ptr [ESP + 0x114],EDX     ; 005fdf9f
    MOV dword ptr [ESP + 0x108],EAX     ; 005fdfa6
    MOV EBX,dword ptr [ESP + 0x174]     ; 005fdfad
        ;   Label: LAB_005fdfad
    CMP EBX,0x1                         ; 005fdfb4
    JBE 0x005fe0ec                      ; 005fdfb7
        ;   XREF to: 005fe0ec (CONDITIONAL_JUMP)  ; LAB_005fe0ec
    CMP EBX,0x10                        ; 005fdfbd
    JNC 0x005fe122                      ; 005fdfc0
        ;   XREF to: 005fe122 (CONDITIONAL_JUMP)  ; LAB_005fe122
    MOV EAX,dword ptr [ESP + 0x108]     ; 005fdfc6
    MOV dword ptr [ESP + 0x12c],EAX     ; 005fdfcd
    TEST EAX,EAX                        ; 005fdfd4
    JLE 0x005fe0ec                      ; 005fdfd6
        ;   XREF to: 005fe0ec (CONDITIONAL_JUMP)  ; LAB_005fe0ec
    MOV EAX,EBX                         ; 005fdfdc
    IMUL EAX,EBP                        ; 005fdfde
    MOV EDX,dword ptr [ESP + 0x124]     ; 005fdfe1
    ADD EDX,EAX                         ; 005fdfe8
    MOV dword ptr [ESP + 0x11c],EDX     ; 005fdfea
    MOV EAX,dword ptr [ESP + 0x124]     ; 005fdff1
        ;   Label: LAB_005fdff1
    ADD EAX,dword ptr [ESP + 0x12c]     ; 005fdff8
    MOV EBX,dword ptr [ESP + 0x11c]     ; 005fdfff
    MOV dword ptr [ESP + 0x120],EAX     ; 005fe006
    CMP EAX,EBX                         ; 005fe00d
    JNC 0x005fe0cd                      ; 005fe00f
        ;   XREF to: 005fe0cd (CONDITIONAL_JUMP)  ; LAB_005fe0cd
    MOV EAX,dword ptr [ESP + 0x120]     ; 005fe015
        ;   Label: LAB_005fe015
    MOV EDI,dword ptr [ESP + 0x124]     ; 005fe01c
    MOV dword ptr [ESP + 0x14c],EAX     ; 005fe023
    CMP EAX,EDI                         ; 005fe02a
    JA 0x005fe085                       ; 005fe02c
        ;   XREF to: 005fe085 (CONDITIONAL_JUMP)  ; LAB_005fe085
    JMP 0x005fe0a7                      ; 005fe02e
        ;   XREF to: 005fe0a7 (UNCONDITIONAL_JUMP)  ; LAB_005fe0a7
    CMP dword ptr [ESP + 0x134],0x0     ; 005fe033
        ;   Label: LAB_005fe033
    JZ 0x005fe04d                       ; 005fe03b
        ;   XREF to: 005fe04d (CONDITIONAL_JUMP)  ; LAB_005fe04d
    MOV ESI,dword ptr [ESP + 0x14c]     ; 005fe03d
    MOV ECX,EBP                         ; 005fe044
    CALL crt_stdlib.c_memory_swap_FUN_005fdf10 ; 005fe046
        ;   XREF to: 005fdf10 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_memory_swap_FUN_005fdf10(void * ptr1, void * ptr2, SIZE_T bytes)
    JMP 0x005fe063                      ; 005fe04b
        ;   XREF to: 005fe063 (UNCONDITIONAL_JUMP)  ; LAB_005fe063
    MOV EDX,dword ptr [ESP + 0x14c]     ; 005fe04d
        ;   Label: LAB_005fe04d
    MOV EBX,dword ptr [ESP + 0x14c]     ; 005fe054
    MOV EAX,dword ptr [EDI]             ; 005fe05b
    MOV EDX,dword ptr [EDX]             ; 005fe05d
    MOV dword ptr [EBX],EAX             ; 005fe05f
    MOV dword ptr [EDI],EDX             ; 005fe061
    MOV EAX,dword ptr [ESP + 0x12c]     ; 005fe063
        ;   Label: LAB_005fe063
    MOV EDX,dword ptr [ESP + 0x14c]     ; 005fe06a
    SUB EDX,EAX                         ; 005fe071
    MOV EBX,dword ptr [ESP + 0x124]     ; 005fe073
    MOV dword ptr [ESP + 0x14c],EDX     ; 005fe07a
    CMP EDX,EBX                         ; 005fe081
    JBE 0x005fe0a7                      ; 005fe083
        ;   XREF to: 005fe0a7 (CONDITIONAL_JUMP)  ; LAB_005fe0a7
    MOV ECX,dword ptr [ESP + 0x14c]     ; 005fe085
        ;   Label: LAB_005fe085
    MOV ESI,dword ptr [ESP + 0x12c]     ; 005fe08c
    MOV EDI,ECX                         ; 005fe093
    PUSH ECX                            ; 005fe095
    SUB EDI,ESI                         ; 005fe096
    PUSH EDI                            ; 005fe098
    CALL dword ptr [ESP + 0x138]        ; 005fe099
    ADD ESP,0x8                         ; 005fe0a0
    TEST EAX,EAX                        ; 005fe0a3
    JG 0x005fe033                       ; 005fe0a5
        ;   XREF to: 005fe033 (CONDITIONAL_JUMP)  ; LAB_005fe033
    MOV EAX,dword ptr [ESP + 0x12c]     ; 005fe0a7
        ;   Label: LAB_005fe0a7
    MOV ECX,dword ptr [ESP + 0x120]     ; 005fe0ae
    ADD ECX,EAX                         ; 005fe0b5
    MOV ESI,dword ptr [ESP + 0x11c]     ; 005fe0b7
    MOV dword ptr [ESP + 0x120],ECX     ; 005fe0be
    CMP ECX,ESI                         ; 005fe0c5
    JC 0x005fe015                       ; 005fe0c7
        ;   XREF to: 005fe015 (CONDITIONAL_JUMP)  ; LAB_005fe015
    MOV EAX,dword ptr [ESP + 0x10c]     ; 005fe0cd
        ;   Label: LAB_005fe0cd
    MOV ESI,dword ptr [ESP + 0x12c]     ; 005fe0d4
    SUB ESI,EAX                         ; 005fe0db
    MOV dword ptr [ESP + 0x12c],ESI     ; 005fe0dd
    TEST ESI,ESI                        ; 005fe0e4
    JG 0x005fdff1                       ; 005fe0e6
        ;   XREF to: 005fdff1 (CONDITIONAL_JUMP)  ; LAB_005fdff1
    MOV EDX,dword ptr [ESP + 0x114]     ; 005fe0ec
        ;   Label: LAB_005fe0ec
    TEST EDX,EDX                        ; 005fe0f3
    JZ 0x005fe5cf                       ; 005fe0f5
        ;   XREF to: 005fe5cf (CONDITIONAL_JUMP)  ; LAB_005fe5cf
    LEA EBX,[EDX + -0x1]                ; 005fe0fb
    MOV dword ptr [ESP + 0x114],EBX     ; 005fe0fe
    MOV EDX,dword ptr [ESP + EBX*0x4]   ; 005fe105
    MOV EAX,dword ptr [ESP + EBX*0x4 + 0x80] ; 005fe108
    MOV dword ptr [ESP + 0x124],EDX     ; 005fe10f
    MOV dword ptr [ESP + 0x174],EAX     ; 005fe116
    JMP 0x005fdfad                      ; 005fe11d
        ;   XREF to: 005fdfad (UNCONDITIONAL_JUMP)  ; LAB_005fdfad
    MOV EAX,EBX                         ; 005fe122
        ;   Label: LAB_005fe122
    SHR EAX,0x1                         ; 005fe124
    IMUL EAX,EBP                        ; 005fe126
    MOV EDI,dword ptr [ESP + 0x124]     ; 005fe129
    ADD EDI,EAX                         ; 005fe130
    CMP EBX,0x1d                        ; 005fe132
    JBE 0x005fe20c                      ; 005fe135
        ;   XREF to: 005fe20c (CONDITIONAL_JUMP)  ; LAB_005fe20c
    MOV EAX,dword ptr [ESP + 0x124]     ; 005fe13b
    MOV dword ptr [ESP + 0x110],EAX     ; 005fe142
    LEA EAX,[EBX + -0x1]                ; 005fe149
    IMUL EAX,EBP                        ; 005fe14c
    MOV EBX,dword ptr [ESP + 0x124]     ; 005fe14f
    ADD EBX,EAX                         ; 005fe156
    MOV EAX,dword ptr [ESP + 0x174]     ; 005fe158
    CMP EAX,0x2a                        ; 005fe15f
    JBE 0x005fe1f0                      ; 005fe162
        ;   XREF to: 005fe1f0 (CONDITIONAL_JUMP)  ; LAB_005fe1f0
    MOV ESI,EAX                         ; 005fe168
    SHR ESI,0x3                         ; 005fe16a
    IMUL ESI,EBP                        ; 005fe16d
    LEA EAX,[ESI + ESI*0x1]             ; 005fe170
    MOV EDX,dword ptr [ESP + 0x130]     ; 005fe173
    MOV dword ptr [ESP + 0x104],EAX     ; 005fe17a
    MOV EAX,dword ptr [ESP + 0x124]     ; 005fe181
    MOV ECX,dword ptr [ESP + 0x104]     ; 005fe188
    PUSH EDX                            ; 005fe18f
    ADD EAX,ECX                         ; 005fe190
    PUSH EAX                            ; 005fe192
    MOV EAX,dword ptr [ESP + 0x12c]     ; 005fe193
    ADD EAX,ESI                         ; 005fe19a
    PUSH EAX                            ; 005fe19c
    MOV EAX,dword ptr [ESP + 0x130]     ; 005fe19d
    PUSH EAX                            ; 005fe1a4
    CALL crt_stdlib.c_median_of_3_FUN_005fdea0 ; 005fe1a5
        ;   XREF to: 005fdea0 (UNCONDITIONAL_CALL)  ; void * crt_stdlib.c_median_of_3_FUN_005fdea0(void * a, void * b, void * c, QSORT_COMPARATOR compar)
    ADD ESP,0x10                        ; 005fe1aa
    MOV EDX,dword ptr [ESP + 0x130]     ; 005fe1ad
    PUSH EDX                            ; 005fe1b4
    MOV dword ptr [ESP + 0x114],EAX     ; 005fe1b5
    LEA EAX,[EDI + ESI*0x1]             ; 005fe1bc
    PUSH EAX                            ; 005fe1bf
    PUSH EDI                            ; 005fe1c0
    SUB EDI,ESI                         ; 005fe1c1
    PUSH EDI                            ; 005fe1c3
    CALL crt_stdlib.c_median_of_3_FUN_005fdea0 ; 005fe1c4
        ;   XREF to: 005fdea0 (UNCONDITIONAL_CALL)  ; void * crt_stdlib.c_median_of_3_FUN_005fdea0(void * a, void * b, void * c, QSORT_COMPARATOR compar)
    ADD ESP,0x10                        ; 005fe1c9
    MOV ECX,dword ptr [ESP + 0x130]     ; 005fe1cc
    PUSH ECX                            ; 005fe1d3
    MOV EDI,EAX                         ; 005fe1d4
    MOV EAX,EBX                         ; 005fe1d6
    PUSH EBX                            ; 005fe1d8
    SUB EAX,ESI                         ; 005fe1d9
    MOV ESI,dword ptr [ESP + 0x10c]     ; 005fe1db
    PUSH EAX                            ; 005fe1e2
    SUB EBX,ESI                         ; 005fe1e3
    PUSH EBX                            ; 005fe1e5
    CALL crt_stdlib.c_median_of_3_FUN_005fdea0 ; 005fe1e6
        ;   XREF to: 005fdea0 (UNCONDITIONAL_CALL)  ; void * crt_stdlib.c_median_of_3_FUN_005fdea0(void * a, void * b, void * c, QSORT_COMPARATOR compar)
    ADD ESP,0x10                        ; 005fe1eb
    MOV EBX,EAX                         ; 005fe1ee
    MOV EAX,dword ptr [ESP + 0x130]     ; 005fe1f0
        ;   Label: LAB_005fe1f0
    PUSH EAX                            ; 005fe1f7
    PUSH EBX                            ; 005fe1f8
    PUSH EDI                            ; 005fe1f9
    MOV EDX,dword ptr [ESP + 0x11c]     ; 005fe1fa
    PUSH EDX                            ; 005fe201
    CALL crt_stdlib.c_median_of_3_FUN_005fdea0 ; 005fe202
        ;   XREF to: 005fdea0 (UNCONDITIONAL_CALL)  ; void * crt_stdlib.c_median_of_3_FUN_005fdea0(void * a, void * b, void * c, QSORT_COMPARATOR compar)
    ADD ESP,0x10                        ; 005fe207
    MOV EDI,EAX                         ; 005fe20a
    MOV EBX,dword ptr [ESP + 0x134]     ; 005fe20c
        ;   Label: LAB_005fe20c
    TEST EBX,EBX                        ; 005fe213
    JZ 0x005fe243                       ; 005fe215
        ;   XREF to: 005fe243 (CONDITIONAL_JUMP)  ; LAB_005fe243
    MOV EAX,dword ptr [ESP + 0x124]     ; 005fe217
    MOV dword ptr [ESP + 0x128],EAX     ; 005fe21e
    JZ 0x005fe232                       ; 005fe225
        ;   XREF to: 005fe232 (CONDITIONAL_JUMP)  ; LAB_005fe232
    MOV ECX,EBP                         ; 005fe227
    MOV ESI,EAX                         ; 005fe229
    CALL crt_stdlib.c_memory_swap_FUN_005fdf10 ; 005fe22b
        ;   XREF to: 005fdf10 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_memory_swap_FUN_005fdf10(void * ptr1, void * ptr2, SIZE_T bytes)
    JMP 0x005fe25a                      ; 005fe230
        ;   XREF to: 005fe25a (UNCONDITIONAL_JUMP)  ; LAB_005fe25a
    MOV EBX,dword ptr [ESP + 0x124]     ; 005fe232
        ;   Label: LAB_005fe232
    MOV EDX,dword ptr [EAX]             ; 005fe239
    MOV EAX,dword ptr [EDI]             ; 005fe23b
    MOV dword ptr [EBX],EAX             ; 005fe23d
    MOV dword ptr [EDI],EDX             ; 005fe23f
    JMP 0x005fe25a                      ; 005fe241
        ;   XREF to: 005fe25a (UNCONDITIONAL_JUMP)  ; LAB_005fe25a
    LEA EAX,[ESP + 0x100]               ; 005fe243
        ;   Label: LAB_005fe243
    MOV dword ptr [ESP + 0x128],EAX     ; 005fe24a
    MOV EAX,dword ptr [EDI]             ; 005fe251
    MOV dword ptr [ESP + 0x100],EAX     ; 005fe253
    MOV EAX,dword ptr [ESP + 0x124]     ; 005fe25a
        ;   Label: LAB_005fe25a
    MOV dword ptr [ESP + 0x144],EAX     ; 005fe261
    MOV dword ptr [ESP + 0x138],EAX     ; 005fe268
    MOV EAX,dword ptr [ESP + 0x174]     ; 005fe26f
    DEC EAX                             ; 005fe276
    IMUL EAX,EBP                        ; 005fe277
    MOV EDX,dword ptr [ESP + 0x124]     ; 005fe27a
    ADD EDX,EAX                         ; 005fe281
    MOV EAX,dword ptr [ESP + 0x174]     ; 005fe283
    MOV dword ptr [ESP + 0x13c],EDX     ; 005fe28a
    MOV dword ptr [ESP + 0x140],EDX     ; 005fe291
    MOV dword ptr [ESP + 0x148],EAX     ; 005fe298
    CMP dword ptr [ESP + 0x148],0x0     ; 005fe29f
        ;   Label: LAB_005fe29f
    JZ 0x005fe33d                       ; 005fe2a7
        ;   XREF to: 005fe33d (CONDITIONAL_JUMP)  ; LAB_005fe33d
    MOV EAX,dword ptr [ESP + 0x128]     ; 005fe2ad
    PUSH EAX                            ; 005fe2b4
    MOV EDX,dword ptr [ESP + 0x148]     ; 005fe2b5
    PUSH EDX                            ; 005fe2bc
    CALL dword ptr [ESP + 0x138]        ; 005fe2bd
    ADD ESP,0x8                         ; 005fe2c4
    TEST EAX,EAX                        ; 005fe2c7
    JG 0x005fe33d                       ; 005fe2c9
        ;   XREF to: 005fe33d (CONDITIONAL_JUMP)  ; LAB_005fe33d
    JNZ 0x005fe319                      ; 005fe2cb
        ;   XREF to: 005fe319 (CONDITIONAL_JUMP)  ; LAB_005fe319
    CMP dword ptr [ESP + 0x134],0x0     ; 005fe2cd
    JZ 0x005fe2ee                       ; 005fe2d5
        ;   XREF to: 005fe2ee (CONDITIONAL_JUMP)  ; LAB_005fe2ee
    MOV EDI,dword ptr [ESP + 0x144]     ; 005fe2d7
    MOV ESI,dword ptr [ESP + 0x138]     ; 005fe2de
    MOV ECX,EBP                         ; 005fe2e5
    CALL crt_stdlib.c_memory_swap_FUN_005fdf10 ; 005fe2e7
        ;   XREF to: 005fdf10 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_memory_swap_FUN_005fdf10(void * ptr1, void * ptr2, SIZE_T bytes)
    JMP 0x005fe312                      ; 005fe2ec
        ;   XREF to: 005fe312 (UNCONDITIONAL_JUMP)  ; LAB_005fe312
    MOV EAX,dword ptr [ESP + 0x144]     ; 005fe2ee
        ;   Label: LAB_005fe2ee
    MOV EDI,dword ptr [ESP + 0x138]     ; 005fe2f5
    MOV EDX,dword ptr [ESP + 0x138]     ; 005fe2fc
    MOV EAX,dword ptr [EAX]             ; 005fe303
    MOV EDI,dword ptr [EDI]             ; 005fe305
    MOV dword ptr [EDX],EAX             ; 005fe307
    MOV EAX,dword ptr [ESP + 0x144]     ; 005fe309
    MOV dword ptr [EAX],EDI             ; 005fe310
    ADD dword ptr [ESP + 0x138],EBP     ; 005fe312
        ;   Label: LAB_005fe312
    MOV ESI,dword ptr [ESP + 0x144]     ; 005fe319
        ;   Label: LAB_005fe319
    MOV EDI,dword ptr [ESP + 0x148]     ; 005fe320
    ADD ESI,EBP                         ; 005fe327
    DEC EDI                             ; 005fe329
    MOV dword ptr [ESP + 0x144],ESI     ; 005fe32a
    MOV dword ptr [ESP + 0x148],EDI     ; 005fe331
    JMP 0x005fe29f                      ; 005fe338
        ;   XREF to: 005fe29f (UNCONDITIONAL_JUMP)  ; LAB_005fe29f
    CMP dword ptr [ESP + 0x148],0x0     ; 005fe33d
        ;   Label: LAB_005fe33d
    JZ 0x005fe3db                       ; 005fe345
        ;   XREF to: 005fe3db (CONDITIONAL_JUMP)  ; LAB_005fe3db
    MOV EDX,dword ptr [ESP + 0x128]     ; 005fe34b
    PUSH EDX                            ; 005fe352
    MOV EBX,dword ptr [ESP + 0x144]     ; 005fe353
    PUSH EBX                            ; 005fe35a
    CALL dword ptr [ESP + 0x138]        ; 005fe35b
    ADD ESP,0x8                         ; 005fe362
    TEST EAX,EAX                        ; 005fe365
    JL 0x005fe3db                       ; 005fe367
        ;   XREF to: 005fe3db (CONDITIONAL_JUMP)  ; LAB_005fe3db
    JNZ 0x005fe3b7                      ; 005fe369
        ;   XREF to: 005fe3b7 (CONDITIONAL_JUMP)  ; LAB_005fe3b7
    CMP dword ptr [ESP + 0x134],0x0     ; 005fe36b
    JZ 0x005fe38c                       ; 005fe373
        ;   XREF to: 005fe38c (CONDITIONAL_JUMP)  ; LAB_005fe38c
    MOV EDI,dword ptr [ESP + 0x13c]     ; 005fe375
    MOV ESI,dword ptr [ESP + 0x140]     ; 005fe37c
    MOV ECX,EBP                         ; 005fe383
    CALL crt_stdlib.c_memory_swap_FUN_005fdf10 ; 005fe385
        ;   XREF to: 005fdf10 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_memory_swap_FUN_005fdf10(void * ptr1, void * ptr2, SIZE_T bytes)
    JMP 0x005fe3b0                      ; 005fe38a
        ;   XREF to: 005fe3b0 (UNCONDITIONAL_JUMP)  ; LAB_005fe3b0
    MOV EAX,dword ptr [ESP + 0x13c]     ; 005fe38c
        ;   Label: LAB_005fe38c
    MOV EDX,dword ptr [ESP + 0x140]     ; 005fe393
    MOV EBX,dword ptr [ESP + 0x140]     ; 005fe39a
    MOV EAX,dword ptr [EAX]             ; 005fe3a1
    MOV EDX,dword ptr [EDX]             ; 005fe3a3
    MOV dword ptr [EBX],EAX             ; 005fe3a5
    MOV EAX,dword ptr [ESP + 0x13c]     ; 005fe3a7
    MOV dword ptr [EAX],EDX             ; 005fe3ae
    SUB dword ptr [ESP + 0x13c],EBP     ; 005fe3b0
        ;   Label: LAB_005fe3b0
    MOV EBX,dword ptr [ESP + 0x140]     ; 005fe3b7
        ;   Label: LAB_005fe3b7
    MOV ECX,dword ptr [ESP + 0x148]     ; 005fe3be
    SUB EBX,EBP                         ; 005fe3c5
    DEC ECX                             ; 005fe3c7
    MOV dword ptr [ESP + 0x140],EBX     ; 005fe3c8
    MOV dword ptr [ESP + 0x148],ECX     ; 005fe3cf
    JMP 0x005fe33d                      ; 005fe3d6
        ;   XREF to: 005fe33d (UNCONDITIONAL_JUMP)  ; LAB_005fe33d
    CMP dword ptr [ESP + 0x148],0x0     ; 005fe3db
        ;   Label: LAB_005fe3db
    JZ 0x005fe46e                       ; 005fe3e3
        ;   XREF to: 005fe46e (CONDITIONAL_JUMP)  ; LAB_005fe46e
    CMP dword ptr [ESP + 0x134],0x0     ; 005fe3e9
    JZ 0x005fe40a                       ; 005fe3f1
        ;   XREF to: 005fe40a (CONDITIONAL_JUMP)  ; LAB_005fe40a
    MOV EDI,dword ptr [ESP + 0x140]     ; 005fe3f3
    MOV ESI,dword ptr [ESP + 0x144]     ; 005fe3fa
    MOV ECX,EBP                         ; 005fe401
    CALL crt_stdlib.c_memory_swap_FUN_005fdf10 ; 005fe403
        ;   XREF to: 005fdf10 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_memory_swap_FUN_005fdf10(void * ptr1, void * ptr2, SIZE_T bytes)
    JMP 0x005fe42e                      ; 005fe408
        ;   XREF to: 005fe42e (UNCONDITIONAL_JUMP)  ; LAB_005fe42e
    MOV EDX,dword ptr [ESP + 0x140]     ; 005fe40a
        ;   Label: LAB_005fe40a
    MOV EAX,dword ptr [ESP + 0x144]     ; 005fe411
    MOV EBX,dword ptr [ESP + 0x144]     ; 005fe418
    MOV EDX,dword ptr [EDX]             ; 005fe41f
    MOV EAX,dword ptr [EAX]             ; 005fe421
    MOV dword ptr [EBX],EDX             ; 005fe423
    MOV EDX,dword ptr [ESP + 0x140]     ; 005fe425
    MOV dword ptr [EDX],EAX             ; 005fe42c
    MOV EDI,dword ptr [ESP + 0x144]     ; 005fe42e
        ;   Label: LAB_005fe42e
    ADD EDI,EBP                         ; 005fe435
    MOV EAX,dword ptr [ESP + 0x148]     ; 005fe437
    MOV dword ptr [ESP + 0x144],EDI     ; 005fe43e
    DEC EAX                             ; 005fe445
    MOV dword ptr [ESP + 0x148],EAX     ; 005fe446
    JZ 0x005fe46e                       ; 005fe44d
        ;   XREF to: 005fe46e (CONDITIONAL_JUMP)  ; LAB_005fe46e
    MOV EBX,dword ptr [ESP + 0x140]     ; 005fe44f
    LEA ECX,[EAX + -0x1]                ; 005fe456
    SUB EBX,EBP                         ; 005fe459
    MOV dword ptr [ESP + 0x148],ECX     ; 005fe45b
    MOV dword ptr [ESP + 0x140],EBX     ; 005fe462
    JMP 0x005fe29f                      ; 005fe469
        ;   XREF to: 005fe29f (UNCONDITIONAL_JUMP)  ; LAB_005fe29f
    MOV EAX,dword ptr [ESP + 0x174]     ; 005fe46e
        ;   Label: LAB_005fe46e
    IMUL EAX,EBP                        ; 005fe475
    MOV EDX,dword ptr [ESP + 0x124]     ; 005fe478
    MOV ECX,dword ptr [ESP + 0x138]     ; 005fe47f
    MOV ESI,dword ptr [ESP + 0x124]     ; 005fe486
    MOV EDI,dword ptr [ESP + 0x138]     ; 005fe48d
    ADD EDX,EAX                         ; 005fe494
    MOV EAX,dword ptr [ESP + 0x144]     ; 005fe496
    SUB ECX,ESI                         ; 005fe49d
    SUB EAX,EDI                         ; 005fe49f
    MOV dword ptr [ESP + 0x118],EDX     ; 005fe4a1
    CMP ECX,EAX                         ; 005fe4a8
    JL 0x005fe4ae                       ; 005fe4aa
        ;   XREF to: 005fe4ae (CONDITIONAL_JUMP)  ; LAB_005fe4ae
    MOV ECX,EAX                         ; 005fe4ac
    TEST ECX,ECX                        ; 005fe4ae
        ;   Label: LAB_005fe4ae
    JBE 0x005fe4e7                      ; 005fe4b0
        ;   XREF to: 005fe4e7 (CONDITIONAL_JUMP)  ; LAB_005fe4e7
    MOV EDI,dword ptr [ESP + 0x144]     ; 005fe4b2
    MOV ESI,dword ptr [ESP + 0x124]     ; 005fe4b9
    SUB EDI,ECX                         ; 005fe4c0
    PUSH ES                             ; 005fe4c2
    PUSH DS                             ; 005fe4c3
    POP ES                              ; 005fe4c4
    MOVZX EDX,CL                        ; 005fe4c5
    SHR ECX,0x2                         ; 005fe4c8
    JZ 0x005fe4d8                       ; 005fe4cb
        ;   XREF to: 005fe4d8 (CONDITIONAL_JUMP)  ; LAB_005fe4d8
    MOV EAX,dword ptr [EDI]             ; 005fe4cd
        ;   Label: LAB_005fe4cd
    XCHG dword ptr [ESI],EAX            ; 005fe4cf
    STOSD ES:EDI                        ; 005fe4d1
    ADD ESI,0x4                         ; 005fe4d2
    DEC ECX                             ; 005fe4d5
    JNZ 0x005fe4cd                      ; 005fe4d6
        ;   XREF to: 005fe4cd (CONDITIONAL_JUMP)  ; LAB_005fe4cd
    AND DL,0x3                          ; 005fe4d8
        ;   Label: LAB_005fe4d8
    JZ 0x005fe4e6                       ; 005fe4db
        ;   XREF to: 005fe4e6 (CONDITIONAL_JUMP)  ; LAB_005fe4e6
    MOV AL,byte ptr [EDI]               ; 005fe4dd
        ;   Label: LAB_005fe4dd
    XCHG byte ptr [ESI],AL              ; 005fe4df
    STOSB ES:EDI                        ; 005fe4e1
    INC ESI                             ; 005fe4e2
    DEC EDX                             ; 005fe4e3
    JNZ 0x005fe4dd                      ; 005fe4e4
        ;   XREF to: 005fe4dd (CONDITIONAL_JUMP)  ; LAB_005fe4dd
    POP ES                              ; 005fe4e6
        ;   Label: LAB_005fe4e6
    MOV ECX,dword ptr [ESP + 0x118]     ; 005fe4e7
        ;   Label: LAB_005fe4e7
    MOV EAX,dword ptr [ESP + 0x13c]     ; 005fe4ee
    SUB ECX,EAX                         ; 005fe4f5
    MOV EDX,dword ptr [ESP + 0x140]     ; 005fe4f7
    SUB ECX,EBP                         ; 005fe4fe
    SUB EAX,EDX                         ; 005fe500
    CMP EAX,ECX                         ; 005fe502
    JNC 0x005fe508                      ; 005fe504
        ;   XREF to: 005fe508 (CONDITIONAL_JUMP)  ; LAB_005fe508
    MOV ECX,EAX                         ; 005fe506
    TEST ECX,ECX                        ; 005fe508
        ;   Label: LAB_005fe508
    JBE 0x005fe541                      ; 005fe50a
        ;   XREF to: 005fe541 (CONDITIONAL_JUMP)  ; LAB_005fe541
    MOV EDI,dword ptr [ESP + 0x118]     ; 005fe50c
    MOV ESI,dword ptr [ESP + 0x144]     ; 005fe513
    SUB EDI,ECX                         ; 005fe51a
    PUSH ES                             ; 005fe51c
    PUSH DS                             ; 005fe51d
    POP ES                              ; 005fe51e
    MOVZX EDX,CL                        ; 005fe51f
    SHR ECX,0x2                         ; 005fe522
    JZ 0x005fe532                       ; 005fe525
        ;   XREF to: 005fe532 (CONDITIONAL_JUMP)  ; LAB_005fe532
    MOV EAX,dword ptr [EDI]             ; 005fe527
        ;   Label: LAB_005fe527
    XCHG dword ptr [ESI],EAX            ; 005fe529
    STOSD ES:EDI                        ; 005fe52b
    ADD ESI,0x4                         ; 005fe52c
    DEC ECX                             ; 005fe52f
    JNZ 0x005fe527                      ; 005fe530
        ;   XREF to: 005fe527 (CONDITIONAL_JUMP)  ; LAB_005fe527
    AND DL,0x3                          ; 005fe532
        ;   Label: LAB_005fe532
    JZ 0x005fe540                       ; 005fe535
        ;   XREF to: 005fe540 (CONDITIONAL_JUMP)  ; LAB_005fe540
    MOV AL,byte ptr [EDI]               ; 005fe537
        ;   Label: LAB_005fe537
    XCHG byte ptr [ESI],AL              ; 005fe539
    STOSB ES:EDI                        ; 005fe53b
    INC ESI                             ; 005fe53c
    DEC EDX                             ; 005fe53d
    JNZ 0x005fe537                      ; 005fe53e
        ;   XREF to: 005fe537 (CONDITIONAL_JUMP)  ; LAB_005fe537
    POP ES                              ; 005fe540
        ;   Label: LAB_005fe540
    MOV EBX,dword ptr [ESP + 0x144]     ; 005fe541
        ;   Label: LAB_005fe541
    MOV ECX,dword ptr [ESP + 0x138]     ; 005fe548
    MOV EDI,dword ptr [ESP + 0x13c]     ; 005fe54f
    MOV ESI,dword ptr [ESP + 0x140]     ; 005fe556
    SUB EBX,ECX                         ; 005fe55d
    SUB EDI,ESI                         ; 005fe55f
    MOV ECX,dword ptr [ESP + 0x114]     ; 005fe561
    MOV ESI,dword ptr [ESP + 0x118]     ; 005fe568
    SHL ECX,0x2                         ; 005fe56f
    SUB ESI,EDI                         ; 005fe572
    CMP EDI,EBX                         ; 005fe574
    JC 0x005fe590                       ; 005fe576
        ;   XREF to: 005fe590 (CONDITIONAL_JUMP)  ; LAB_005fe590
    MOV EAX,EDI                         ; 005fe578
    XOR EDX,EDX                         ; 005fe57a
    DIV EBP                             ; 005fe57c
    XOR EDX,EDX                         ; 005fe57e
    MOV dword ptr [ESP + ECX*0x1 + 0x80],EAX ; 005fe580
    MOV EAX,EBX                         ; 005fe587
    DIV EBP                             ; 005fe589
    MOV dword ptr [ESP + ECX*0x1],ESI   ; 005fe58b
    JMP 0x005fe5bc                      ; 005fe58e
        ;   XREF to: 005fe5bc (UNCONDITIONAL_JUMP)  ; LAB_005fe5bc
    CMP EBX,EBP                         ; 005fe590
        ;   Label: LAB_005fe590
    JBE 0x005fe0ec                      ; 005fe592
        ;   XREF to: 005fe0ec (CONDITIONAL_JUMP)  ; LAB_005fe0ec
    MOV EAX,dword ptr [ESP + 0x124]     ; 005fe598
    XOR EDX,EDX                         ; 005fe59f
    MOV dword ptr [ESP + ECX*0x1],EAX   ; 005fe5a1
    MOV EAX,EBX                         ; 005fe5a4
    DIV EBP                             ; 005fe5a6
    XOR EDX,EDX                         ; 005fe5a8
    MOV dword ptr [ESP + ECX*0x1 + 0x80],EAX ; 005fe5aa
    MOV EAX,EDI                         ; 005fe5b1
    DIV EBP                             ; 005fe5b3
    MOV dword ptr [ESP + 0x124],ESI     ; 005fe5b5
    MOV dword ptr [ESP + 0x174],EAX     ; 005fe5bc
        ;   Label: LAB_005fe5bc
    INC dword ptr [ESP + 0x114]         ; 005fe5c3
    JMP 0x005fdfad                      ; 005fe5ca
        ;   XREF to: 005fdfad (UNCONDITIONAL_JUMP)  ; LAB_005fdfad
    ADD ESP,0x150                       ; 005fe5cf
        ;   Label: LAB_005fe5cf
    POP EBP                             ; 005fe5d5
    POP GS                              ; 005fe5d6
    POP FS                              ; 005fe5d8
    POP ES                              ; 005fe5da
    POP EDI                             ; 005fe5db
    POP ESI                             ; 005fe5dc
    POP EBX                             ; 005fe5dd
    RET                                 ; 005fe5de

