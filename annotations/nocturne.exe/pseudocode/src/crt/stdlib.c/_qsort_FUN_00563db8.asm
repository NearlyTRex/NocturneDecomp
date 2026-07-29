; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_stdlib_c__qsort_FUN_00563db8(void *base,SIZE_T num,SIZE_T size,QSORT_COMPARATOR compar)
;
; Parameters:
; void *           Stack[0x4]:4   base
; SIZE_T           Stack[0x8]:4   num
; SIZE_T           Stack[0xc]:4   size
; QSORT_COMPARATOR Stack[0x10]:4   compar
; Local Variables:
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
;
; XREF[4]:
;   core_set.cpp_CDemonSet_buildDisplayList_FUN_0050d2d0 at 0050d3bc
;   engine_3d.c_FUN_00405b40 at 00405c07
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00461db0 at 00461e0d
;   shape_edittool.cpp_CStrList_sort_FUN_00474010 at 00474069
;
; Called Functions:
;   crt_unknown.c_median_of_3_FUN_00563d20
;   crt_unknown.c_memory_swap_FUN_00563d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00563db8
        ;   Label: crt_stdlib.c__qsort_FUN_00563db8
    PUSH ESI                            ; 00563db9
    PUSH EDI                            ; 00563dba
    PUSH ES                             ; 00563dbb
    PUSH FS                             ; 00563dbc
    PUSH GS                             ; 00563dbe
    PUSH EBP                            ; 00563dc0
    SUB ESP,0x150                       ; 00563dc1
    MOV EAX,dword ptr [ESP + 0x170]     ; 00563dc7
    MOV EBP,dword ptr [ESP + 0x178]     ; 00563dce
    MOV EDX,dword ptr [ESP + 0x17c]     ; 00563dd5
    MOV dword ptr [ESP + 0x124],EAX     ; 00563ddc
    OR EAX,EBP                          ; 00563de3
    MOV dword ptr [ESP + 0x130],EDX     ; 00563de5
    TEST AL,0x3                         ; 00563dec
    JZ 0x00563df7                       ; 00563dee
        ;   XREF to: 00563df7 (CONDITIONAL_JUMP)  ; LAB_00563df7
    MOV EAX,0x2                         ; 00563df0
    JMP 0x00563e02                      ; 00563df5
        ;   XREF to: 00563e02 (UNCONDITIONAL_JUMP)  ; LAB_00563e02
    CMP EBP,0x4                         ; 00563df7
        ;   Label: LAB_00563df7
    SETA AL                             ; 00563dfa
    AND EAX,0xff                        ; 00563dfd
    MOV dword ptr [ESP + 0x134],EAX     ; 00563e02
        ;   Label: LAB_00563e02
    LEA EAX,[EBP + EBP*0x1]             ; 00563e09
    MOV dword ptr [ESP + 0x10c],EAX     ; 00563e0d
    LEA EAX,[EBP*0x4 + 0x0]             ; 00563e14
    XOR EDX,EDX                         ; 00563e1b
    SUB EAX,EBP                         ; 00563e1d
    MOV dword ptr [ESP + 0x114],EDX     ; 00563e1f
    MOV dword ptr [ESP + 0x108],EAX     ; 00563e26
    MOV EBX,dword ptr [ESP + 0x174]     ; 00563e2d
        ;   Label: LAB_00563e2d
    CMP EBX,0x1                         ; 00563e34
    JBE 0x00563f6c                      ; 00563e37
        ;   XREF to: 00563f6c (CONDITIONAL_JUMP)  ; LAB_00563f6c
    CMP EBX,0x10                        ; 00563e3d
    JNC 0x00563fa2                      ; 00563e40
        ;   XREF to: 00563fa2 (CONDITIONAL_JUMP)  ; LAB_00563fa2
    MOV EAX,dword ptr [ESP + 0x108]     ; 00563e46
    MOV dword ptr [ESP + 0x12c],EAX     ; 00563e4d
    TEST EAX,EAX                        ; 00563e54
    JLE 0x00563f6c                      ; 00563e56
        ;   XREF to: 00563f6c (CONDITIONAL_JUMP)  ; LAB_00563f6c
    MOV EAX,EBX                         ; 00563e5c
    IMUL EAX,EBP                        ; 00563e5e
    MOV EDX,dword ptr [ESP + 0x124]     ; 00563e61
    ADD EDX,EAX                         ; 00563e68
    MOV dword ptr [ESP + 0x11c],EDX     ; 00563e6a
    MOV EAX,dword ptr [ESP + 0x124]     ; 00563e71
        ;   Label: LAB_00563e71
    ADD EAX,dword ptr [ESP + 0x12c]     ; 00563e78
    MOV EBX,dword ptr [ESP + 0x11c]     ; 00563e7f
    MOV dword ptr [ESP + 0x120],EAX     ; 00563e86
    CMP EAX,EBX                         ; 00563e8d
    JNC 0x00563f4d                      ; 00563e8f
        ;   XREF to: 00563f4d (CONDITIONAL_JUMP)  ; LAB_00563f4d
    MOV EAX,dword ptr [ESP + 0x120]     ; 00563e95
        ;   Label: LAB_00563e95
    MOV EDI,dword ptr [ESP + 0x124]     ; 00563e9c
    MOV dword ptr [ESP + 0x14c],EAX     ; 00563ea3
    CMP EAX,EDI                         ; 00563eaa
    JA 0x00563f05                       ; 00563eac
        ;   XREF to: 00563f05 (CONDITIONAL_JUMP)  ; LAB_00563f05
    JMP 0x00563f27                      ; 00563eae
        ;   XREF to: 00563f27 (UNCONDITIONAL_JUMP)  ; LAB_00563f27
    CMP dword ptr [ESP + 0x134],0x0     ; 00563eb3
        ;   Label: LAB_00563eb3
    JZ 0x00563ecd                       ; 00563ebb
        ;   XREF to: 00563ecd (CONDITIONAL_JUMP)  ; LAB_00563ecd
    MOV ESI,dword ptr [ESP + 0x14c]     ; 00563ebd
    MOV ECX,EBP                         ; 00563ec4
    CALL crt_unknown.c_memory_swap_FUN_00563d90 ; 00563ec6
        ;   XREF to: 00563d90 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_memory_swap_FUN_00563d90(void * ptr1, void * ptr2, SIZE_T bytes)
    JMP 0x00563ee3                      ; 00563ecb
        ;   XREF to: 00563ee3 (UNCONDITIONAL_JUMP)  ; LAB_00563ee3
    MOV EDX,dword ptr [ESP + 0x14c]     ; 00563ecd
        ;   Label: LAB_00563ecd
    MOV EBX,dword ptr [ESP + 0x14c]     ; 00563ed4
    MOV EAX,dword ptr [EDI]             ; 00563edb
    MOV EDX,dword ptr [EDX]             ; 00563edd
    MOV dword ptr [EBX],EAX             ; 00563edf
    MOV dword ptr [EDI],EDX             ; 00563ee1
    MOV EAX,dword ptr [ESP + 0x12c]     ; 00563ee3
        ;   Label: LAB_00563ee3
    MOV EDX,dword ptr [ESP + 0x14c]     ; 00563eea
    SUB EDX,EAX                         ; 00563ef1
    MOV EBX,dword ptr [ESP + 0x124]     ; 00563ef3
    MOV dword ptr [ESP + 0x14c],EDX     ; 00563efa
    CMP EDX,EBX                         ; 00563f01
    JBE 0x00563f27                      ; 00563f03
        ;   XREF to: 00563f27 (CONDITIONAL_JUMP)  ; LAB_00563f27
    MOV ECX,dword ptr [ESP + 0x14c]     ; 00563f05
        ;   Label: LAB_00563f05
    MOV ESI,dword ptr [ESP + 0x12c]     ; 00563f0c
    MOV EDI,ECX                         ; 00563f13
    PUSH ECX                            ; 00563f15
    SUB EDI,ESI                         ; 00563f16
    PUSH EDI                            ; 00563f18
    CALL dword ptr [ESP + 0x138]        ; 00563f19
    ADD ESP,0x8                         ; 00563f20
    TEST EAX,EAX                        ; 00563f23
    JG 0x00563eb3                       ; 00563f25
        ;   XREF to: 00563eb3 (CONDITIONAL_JUMP)  ; LAB_00563eb3
    MOV EAX,dword ptr [ESP + 0x12c]     ; 00563f27
        ;   Label: LAB_00563f27
    MOV ECX,dword ptr [ESP + 0x120]     ; 00563f2e
    ADD ECX,EAX                         ; 00563f35
    MOV ESI,dword ptr [ESP + 0x11c]     ; 00563f37
    MOV dword ptr [ESP + 0x120],ECX     ; 00563f3e
    CMP ECX,ESI                         ; 00563f45
    JC 0x00563e95                       ; 00563f47
        ;   XREF to: 00563e95 (CONDITIONAL_JUMP)  ; LAB_00563e95
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00563f4d
        ;   Label: LAB_00563f4d
    MOV ESI,dword ptr [ESP + 0x12c]     ; 00563f54
    SUB ESI,EAX                         ; 00563f5b
    MOV dword ptr [ESP + 0x12c],ESI     ; 00563f5d
    TEST ESI,ESI                        ; 00563f64
    JG 0x00563e71                       ; 00563f66
        ;   XREF to: 00563e71 (CONDITIONAL_JUMP)  ; LAB_00563e71
    MOV EDX,dword ptr [ESP + 0x114]     ; 00563f6c
        ;   Label: LAB_00563f6c
    TEST EDX,EDX                        ; 00563f73
    JZ 0x0056444f                       ; 00563f75
        ;   XREF to: 0056444f (CONDITIONAL_JUMP)  ; LAB_0056444f
    LEA EBX,[EDX + -0x1]                ; 00563f7b
    MOV dword ptr [ESP + 0x114],EBX     ; 00563f7e
    MOV EDX,dword ptr [ESP + EBX*0x4]   ; 00563f85
    MOV EAX,dword ptr [ESP + EBX*0x4 + 0x80] ; 00563f88
    MOV dword ptr [ESP + 0x124],EDX     ; 00563f8f
    MOV dword ptr [ESP + 0x174],EAX     ; 00563f96
    JMP 0x00563e2d                      ; 00563f9d
        ;   XREF to: 00563e2d (UNCONDITIONAL_JUMP)  ; LAB_00563e2d
    MOV EAX,EBX                         ; 00563fa2
        ;   Label: LAB_00563fa2
    SHR EAX,0x1                         ; 00563fa4
    IMUL EAX,EBP                        ; 00563fa6
    MOV EDI,dword ptr [ESP + 0x124]     ; 00563fa9
    ADD EDI,EAX                         ; 00563fb0
    CMP EBX,0x1d                        ; 00563fb2
    JBE 0x0056408c                      ; 00563fb5
        ;   XREF to: 0056408c (CONDITIONAL_JUMP)  ; LAB_0056408c
    MOV EAX,dword ptr [ESP + 0x124]     ; 00563fbb
    MOV dword ptr [ESP + 0x110],EAX     ; 00563fc2
    LEA EAX,[EBX + -0x1]                ; 00563fc9
    IMUL EAX,EBP                        ; 00563fcc
    MOV EBX,dword ptr [ESP + 0x124]     ; 00563fcf
    ADD EBX,EAX                         ; 00563fd6
    MOV EAX,dword ptr [ESP + 0x174]     ; 00563fd8
    CMP EAX,0x2a                        ; 00563fdf
    JBE 0x00564070                      ; 00563fe2
        ;   XREF to: 00564070 (CONDITIONAL_JUMP)  ; LAB_00564070
    MOV ESI,EAX                         ; 00563fe8
    SHR ESI,0x3                         ; 00563fea
    IMUL ESI,EBP                        ; 00563fed
    LEA EAX,[ESI + ESI*0x1]             ; 00563ff0
    MOV EDX,dword ptr [ESP + 0x130]     ; 00563ff3
    MOV dword ptr [ESP + 0x104],EAX     ; 00563ffa
    MOV EAX,dword ptr [ESP + 0x124]     ; 00564001
    MOV ECX,dword ptr [ESP + 0x104]     ; 00564008
    PUSH EDX                            ; 0056400f
    ADD EAX,ECX                         ; 00564010
    PUSH EAX                            ; 00564012
    MOV EAX,dword ptr [ESP + 0x12c]     ; 00564013
    ADD EAX,ESI                         ; 0056401a
    PUSH EAX                            ; 0056401c
    MOV EAX,dword ptr [ESP + 0x130]     ; 0056401d
    PUSH EAX                            ; 00564024
    CALL crt_unknown.c_median_of_3_FUN_00563d20 ; 00564025
        ;   XREF to: 00563d20 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_median_of_3_FUN_00563d20(void * a, void * b, void * c, QSORT_COMPARATOR compar)
    ADD ESP,0x10                        ; 0056402a
    MOV EDX,dword ptr [ESP + 0x130]     ; 0056402d
    PUSH EDX                            ; 00564034
    MOV dword ptr [ESP + 0x114],EAX     ; 00564035
    LEA EAX,[EDI + ESI*0x1]             ; 0056403c
    PUSH EAX                            ; 0056403f
    PUSH EDI                            ; 00564040
    SUB EDI,ESI                         ; 00564041
    PUSH EDI                            ; 00564043
    CALL crt_unknown.c_median_of_3_FUN_00563d20 ; 00564044
        ;   XREF to: 00563d20 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_median_of_3_FUN_00563d20(void * a, void * b, void * c, QSORT_COMPARATOR compar)
    ADD ESP,0x10                        ; 00564049
    MOV ECX,dword ptr [ESP + 0x130]     ; 0056404c
    PUSH ECX                            ; 00564053
    MOV EDI,EAX                         ; 00564054
    MOV EAX,EBX                         ; 00564056
    PUSH EBX                            ; 00564058
    SUB EAX,ESI                         ; 00564059
    MOV ESI,dword ptr [ESP + 0x10c]     ; 0056405b
    PUSH EAX                            ; 00564062
    SUB EBX,ESI                         ; 00564063
    PUSH EBX                            ; 00564065
    CALL crt_unknown.c_median_of_3_FUN_00563d20 ; 00564066
        ;   XREF to: 00563d20 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_median_of_3_FUN_00563d20(void * a, void * b, void * c, QSORT_COMPARATOR compar)
    ADD ESP,0x10                        ; 0056406b
    MOV EBX,EAX                         ; 0056406e
    MOV EAX,dword ptr [ESP + 0x130]     ; 00564070
        ;   Label: LAB_00564070
    PUSH EAX                            ; 00564077
    PUSH EBX                            ; 00564078
    PUSH EDI                            ; 00564079
    MOV EDX,dword ptr [ESP + 0x11c]     ; 0056407a
    PUSH EDX                            ; 00564081
    CALL crt_unknown.c_median_of_3_FUN_00563d20 ; 00564082
        ;   XREF to: 00563d20 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_median_of_3_FUN_00563d20(void * a, void * b, void * c, QSORT_COMPARATOR compar)
    ADD ESP,0x10                        ; 00564087
    MOV EDI,EAX                         ; 0056408a
    MOV EBX,dword ptr [ESP + 0x134]     ; 0056408c
        ;   Label: LAB_0056408c
    TEST EBX,EBX                        ; 00564093
    JZ 0x005640c3                       ; 00564095
        ;   XREF to: 005640c3 (CONDITIONAL_JUMP)  ; LAB_005640c3
    MOV EAX,dword ptr [ESP + 0x124]     ; 00564097
    MOV dword ptr [ESP + 0x128],EAX     ; 0056409e
    JZ 0x005640b2                       ; 005640a5
        ;   XREF to: 005640b2 (CONDITIONAL_JUMP)  ; LAB_005640b2
    MOV ECX,EBP                         ; 005640a7
    MOV ESI,EAX                         ; 005640a9
    CALL crt_unknown.c_memory_swap_FUN_00563d90 ; 005640ab
        ;   XREF to: 00563d90 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_memory_swap_FUN_00563d90(void * ptr1, void * ptr2, SIZE_T bytes)
    JMP 0x005640da                      ; 005640b0
        ;   XREF to: 005640da (UNCONDITIONAL_JUMP)  ; LAB_005640da
    MOV EBX,dword ptr [ESP + 0x124]     ; 005640b2
        ;   Label: LAB_005640b2
    MOV EDX,dword ptr [EAX]             ; 005640b9
    MOV EAX,dword ptr [EDI]             ; 005640bb
    MOV dword ptr [EBX],EAX             ; 005640bd
    MOV dword ptr [EDI],EDX             ; 005640bf
    JMP 0x005640da                      ; 005640c1
        ;   XREF to: 005640da (UNCONDITIONAL_JUMP)  ; LAB_005640da
    LEA EAX,[ESP + 0x100]               ; 005640c3
        ;   Label: LAB_005640c3
    MOV dword ptr [ESP + 0x128],EAX     ; 005640ca
    MOV EAX,dword ptr [EDI]             ; 005640d1
    MOV dword ptr [ESP + 0x100],EAX     ; 005640d3
    MOV EAX,dword ptr [ESP + 0x124]     ; 005640da
        ;   Label: LAB_005640da
    MOV dword ptr [ESP + 0x144],EAX     ; 005640e1
    MOV dword ptr [ESP + 0x138],EAX     ; 005640e8
    MOV EAX,dword ptr [ESP + 0x174]     ; 005640ef
    DEC EAX                             ; 005640f6
    IMUL EAX,EBP                        ; 005640f7
    MOV EDX,dword ptr [ESP + 0x124]     ; 005640fa
    ADD EDX,EAX                         ; 00564101
    MOV EAX,dword ptr [ESP + 0x174]     ; 00564103
    MOV dword ptr [ESP + 0x13c],EDX     ; 0056410a
    MOV dword ptr [ESP + 0x140],EDX     ; 00564111
    MOV dword ptr [ESP + 0x148],EAX     ; 00564118
    CMP dword ptr [ESP + 0x148],0x0     ; 0056411f
        ;   Label: LAB_0056411f
    JZ 0x005641bd                       ; 00564127
        ;   XREF to: 005641bd (CONDITIONAL_JUMP)  ; LAB_005641bd
    MOV EAX,dword ptr [ESP + 0x128]     ; 0056412d
    PUSH EAX                            ; 00564134
    MOV EDX,dword ptr [ESP + 0x148]     ; 00564135
    PUSH EDX                            ; 0056413c
    CALL dword ptr [ESP + 0x138]        ; 0056413d
    ADD ESP,0x8                         ; 00564144
    TEST EAX,EAX                        ; 00564147
    JG 0x005641bd                       ; 00564149
        ;   XREF to: 005641bd (CONDITIONAL_JUMP)  ; LAB_005641bd
    JNZ 0x00564199                      ; 0056414b
        ;   XREF to: 00564199 (CONDITIONAL_JUMP)  ; LAB_00564199
    CMP dword ptr [ESP + 0x134],0x0     ; 0056414d
    JZ 0x0056416e                       ; 00564155
        ;   XREF to: 0056416e (CONDITIONAL_JUMP)  ; LAB_0056416e
    MOV EDI,dword ptr [ESP + 0x144]     ; 00564157
    MOV ESI,dword ptr [ESP + 0x138]     ; 0056415e
    MOV ECX,EBP                         ; 00564165
    CALL crt_unknown.c_memory_swap_FUN_00563d90 ; 00564167
        ;   XREF to: 00563d90 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_memory_swap_FUN_00563d90(void * ptr1, void * ptr2, SIZE_T bytes)
    JMP 0x00564192                      ; 0056416c
        ;   XREF to: 00564192 (UNCONDITIONAL_JUMP)  ; LAB_00564192
    MOV EAX,dword ptr [ESP + 0x144]     ; 0056416e
        ;   Label: LAB_0056416e
    MOV EDI,dword ptr [ESP + 0x138]     ; 00564175
    MOV EDX,dword ptr [ESP + 0x138]     ; 0056417c
    MOV EAX,dword ptr [EAX]             ; 00564183
    MOV EDI,dword ptr [EDI]             ; 00564185
    MOV dword ptr [EDX],EAX             ; 00564187
    MOV EAX,dword ptr [ESP + 0x144]     ; 00564189
    MOV dword ptr [EAX],EDI             ; 00564190
    ADD dword ptr [ESP + 0x138],EBP     ; 00564192
        ;   Label: LAB_00564192
    MOV ESI,dword ptr [ESP + 0x144]     ; 00564199
        ;   Label: LAB_00564199
    MOV EDI,dword ptr [ESP + 0x148]     ; 005641a0
    ADD ESI,EBP                         ; 005641a7
    DEC EDI                             ; 005641a9
    MOV dword ptr [ESP + 0x144],ESI     ; 005641aa
    MOV dword ptr [ESP + 0x148],EDI     ; 005641b1
    JMP 0x0056411f                      ; 005641b8
        ;   XREF to: 0056411f (UNCONDITIONAL_JUMP)  ; LAB_0056411f
    CMP dword ptr [ESP + 0x148],0x0     ; 005641bd
        ;   Label: LAB_005641bd
    JZ 0x0056425b                       ; 005641c5
        ;   XREF to: 0056425b (CONDITIONAL_JUMP)  ; LAB_0056425b
    MOV EDX,dword ptr [ESP + 0x128]     ; 005641cb
    PUSH EDX                            ; 005641d2
    MOV EBX,dword ptr [ESP + 0x144]     ; 005641d3
    PUSH EBX                            ; 005641da
    CALL dword ptr [ESP + 0x138]        ; 005641db
    ADD ESP,0x8                         ; 005641e2
    TEST EAX,EAX                        ; 005641e5
    JL 0x0056425b                       ; 005641e7
        ;   XREF to: 0056425b (CONDITIONAL_JUMP)  ; LAB_0056425b
    JNZ 0x00564237                      ; 005641e9
        ;   XREF to: 00564237 (CONDITIONAL_JUMP)  ; LAB_00564237
    CMP dword ptr [ESP + 0x134],0x0     ; 005641eb
    JZ 0x0056420c                       ; 005641f3
        ;   XREF to: 0056420c (CONDITIONAL_JUMP)  ; LAB_0056420c
    MOV EDI,dword ptr [ESP + 0x13c]     ; 005641f5
    MOV ESI,dword ptr [ESP + 0x140]     ; 005641fc
    MOV ECX,EBP                         ; 00564203
    CALL crt_unknown.c_memory_swap_FUN_00563d90 ; 00564205
        ;   XREF to: 00563d90 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_memory_swap_FUN_00563d90(void * ptr1, void * ptr2, SIZE_T bytes)
    JMP 0x00564230                      ; 0056420a
        ;   XREF to: 00564230 (UNCONDITIONAL_JUMP)  ; LAB_00564230
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0056420c
        ;   Label: LAB_0056420c
    MOV EDX,dword ptr [ESP + 0x140]     ; 00564213
    MOV EBX,dword ptr [ESP + 0x140]     ; 0056421a
    MOV EAX,dword ptr [EAX]             ; 00564221
    MOV EDX,dword ptr [EDX]             ; 00564223
    MOV dword ptr [EBX],EAX             ; 00564225
    MOV EAX,dword ptr [ESP + 0x13c]     ; 00564227
    MOV dword ptr [EAX],EDX             ; 0056422e
    SUB dword ptr [ESP + 0x13c],EBP     ; 00564230
        ;   Label: LAB_00564230
    MOV EBX,dword ptr [ESP + 0x140]     ; 00564237
        ;   Label: LAB_00564237
    MOV ECX,dword ptr [ESP + 0x148]     ; 0056423e
    SUB EBX,EBP                         ; 00564245
    DEC ECX                             ; 00564247
    MOV dword ptr [ESP + 0x140],EBX     ; 00564248
    MOV dword ptr [ESP + 0x148],ECX     ; 0056424f
    JMP 0x005641bd                      ; 00564256
        ;   XREF to: 005641bd (UNCONDITIONAL_JUMP)  ; LAB_005641bd
    CMP dword ptr [ESP + 0x148],0x0     ; 0056425b
        ;   Label: LAB_0056425b
    JZ 0x005642ee                       ; 00564263
        ;   XREF to: 005642ee (CONDITIONAL_JUMP)  ; LAB_005642ee
    CMP dword ptr [ESP + 0x134],0x0     ; 00564269
    JZ 0x0056428a                       ; 00564271
        ;   XREF to: 0056428a (CONDITIONAL_JUMP)  ; LAB_0056428a
    MOV EDI,dword ptr [ESP + 0x140]     ; 00564273
    MOV ESI,dword ptr [ESP + 0x144]     ; 0056427a
    MOV ECX,EBP                         ; 00564281
    CALL crt_unknown.c_memory_swap_FUN_00563d90 ; 00564283
        ;   XREF to: 00563d90 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_memory_swap_FUN_00563d90(void * ptr1, void * ptr2, SIZE_T bytes)
    JMP 0x005642ae                      ; 00564288
        ;   XREF to: 005642ae (UNCONDITIONAL_JUMP)  ; LAB_005642ae
    MOV EDX,dword ptr [ESP + 0x140]     ; 0056428a
        ;   Label: LAB_0056428a
    MOV EAX,dword ptr [ESP + 0x144]     ; 00564291
    MOV EBX,dword ptr [ESP + 0x144]     ; 00564298
    MOV EDX,dword ptr [EDX]             ; 0056429f
    MOV EAX,dword ptr [EAX]             ; 005642a1
    MOV dword ptr [EBX],EDX             ; 005642a3
    MOV EDX,dword ptr [ESP + 0x140]     ; 005642a5
    MOV dword ptr [EDX],EAX             ; 005642ac
    MOV EDI,dword ptr [ESP + 0x144]     ; 005642ae
        ;   Label: LAB_005642ae
    ADD EDI,EBP                         ; 005642b5
    MOV EAX,dword ptr [ESP + 0x148]     ; 005642b7
    MOV dword ptr [ESP + 0x144],EDI     ; 005642be
    DEC EAX                             ; 005642c5
    MOV dword ptr [ESP + 0x148],EAX     ; 005642c6
    JZ 0x005642ee                       ; 005642cd
        ;   XREF to: 005642ee (CONDITIONAL_JUMP)  ; LAB_005642ee
    MOV EBX,dword ptr [ESP + 0x140]     ; 005642cf
    LEA ECX,[EAX + -0x1]                ; 005642d6
    SUB EBX,EBP                         ; 005642d9
    MOV dword ptr [ESP + 0x148],ECX     ; 005642db
    MOV dword ptr [ESP + 0x140],EBX     ; 005642e2
    JMP 0x0056411f                      ; 005642e9
        ;   XREF to: 0056411f (UNCONDITIONAL_JUMP)  ; LAB_0056411f
    MOV EAX,dword ptr [ESP + 0x174]     ; 005642ee
        ;   Label: LAB_005642ee
    IMUL EAX,EBP                        ; 005642f5
    MOV EDX,dword ptr [ESP + 0x124]     ; 005642f8
    MOV ECX,dword ptr [ESP + 0x138]     ; 005642ff
    MOV ESI,dword ptr [ESP + 0x124]     ; 00564306
    MOV EDI,dword ptr [ESP + 0x138]     ; 0056430d
    ADD EDX,EAX                         ; 00564314
    MOV EAX,dword ptr [ESP + 0x144]     ; 00564316
    SUB ECX,ESI                         ; 0056431d
    SUB EAX,EDI                         ; 0056431f
    MOV dword ptr [ESP + 0x118],EDX     ; 00564321
    CMP ECX,EAX                         ; 00564328
    JL 0x0056432e                       ; 0056432a
        ;   XREF to: 0056432e (CONDITIONAL_JUMP)  ; LAB_0056432e
    MOV ECX,EAX                         ; 0056432c
    TEST ECX,ECX                        ; 0056432e
        ;   Label: LAB_0056432e
    JBE 0x00564367                      ; 00564330
        ;   XREF to: 00564367 (CONDITIONAL_JUMP)  ; LAB_00564367
    MOV EDI,dword ptr [ESP + 0x144]     ; 00564332
    MOV ESI,dword ptr [ESP + 0x124]     ; 00564339
    SUB EDI,ECX                         ; 00564340
    PUSH ES                             ; 00564342
    PUSH DS                             ; 00564343
    POP ES                              ; 00564344
    MOVZX EDX,CL                        ; 00564345
    SHR ECX,0x2                         ; 00564348
    JZ 0x00564358                       ; 0056434b
        ;   XREF to: 00564358 (CONDITIONAL_JUMP)  ; LAB_00564358
    MOV EAX,dword ptr [EDI]             ; 0056434d
        ;   Label: LAB_0056434d
    XCHG dword ptr [ESI],EAX            ; 0056434f
    STOSD ES:EDI                        ; 00564351
    ADD ESI,0x4                         ; 00564352
    DEC ECX                             ; 00564355
    JNZ 0x0056434d                      ; 00564356
        ;   XREF to: 0056434d (CONDITIONAL_JUMP)  ; LAB_0056434d
    AND DL,0x3                          ; 00564358
        ;   Label: LAB_00564358
    JZ 0x00564366                       ; 0056435b
        ;   XREF to: 00564366 (CONDITIONAL_JUMP)  ; LAB_00564366
    MOV AL,byte ptr [EDI]               ; 0056435d
        ;   Label: LAB_0056435d
    XCHG byte ptr [ESI],AL              ; 0056435f
    STOSB ES:EDI                        ; 00564361
    INC ESI                             ; 00564362
    DEC EDX                             ; 00564363
    JNZ 0x0056435d                      ; 00564364
        ;   XREF to: 0056435d (CONDITIONAL_JUMP)  ; LAB_0056435d
    POP ES                              ; 00564366
        ;   Label: LAB_00564366
    MOV ECX,dword ptr [ESP + 0x118]     ; 00564367
        ;   Label: LAB_00564367
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0056436e
    SUB ECX,EAX                         ; 00564375
    MOV EDX,dword ptr [ESP + 0x140]     ; 00564377
    SUB ECX,EBP                         ; 0056437e
    SUB EAX,EDX                         ; 00564380
    CMP EAX,ECX                         ; 00564382
    JNC 0x00564388                      ; 00564384
        ;   XREF to: 00564388 (CONDITIONAL_JUMP)  ; LAB_00564388
    MOV ECX,EAX                         ; 00564386
    TEST ECX,ECX                        ; 00564388
        ;   Label: LAB_00564388
    JBE 0x005643c1                      ; 0056438a
        ;   XREF to: 005643c1 (CONDITIONAL_JUMP)  ; LAB_005643c1
    MOV EDI,dword ptr [ESP + 0x118]     ; 0056438c
    MOV ESI,dword ptr [ESP + 0x144]     ; 00564393
    SUB EDI,ECX                         ; 0056439a
    PUSH ES                             ; 0056439c
    PUSH DS                             ; 0056439d
    POP ES                              ; 0056439e
    MOVZX EDX,CL                        ; 0056439f
    SHR ECX,0x2                         ; 005643a2
    JZ 0x005643b2                       ; 005643a5
        ;   XREF to: 005643b2 (CONDITIONAL_JUMP)  ; LAB_005643b2
    MOV EAX,dword ptr [EDI]             ; 005643a7
        ;   Label: LAB_005643a7
    XCHG dword ptr [ESI],EAX            ; 005643a9
    STOSD ES:EDI                        ; 005643ab
    ADD ESI,0x4                         ; 005643ac
    DEC ECX                             ; 005643af
    JNZ 0x005643a7                      ; 005643b0
        ;   XREF to: 005643a7 (CONDITIONAL_JUMP)  ; LAB_005643a7
    AND DL,0x3                          ; 005643b2
        ;   Label: LAB_005643b2
    JZ 0x005643c0                       ; 005643b5
        ;   XREF to: 005643c0 (CONDITIONAL_JUMP)  ; LAB_005643c0
    MOV AL,byte ptr [EDI]               ; 005643b7
        ;   Label: LAB_005643b7
    XCHG byte ptr [ESI],AL              ; 005643b9
    STOSB ES:EDI                        ; 005643bb
    INC ESI                             ; 005643bc
    DEC EDX                             ; 005643bd
    JNZ 0x005643b7                      ; 005643be
        ;   XREF to: 005643b7 (CONDITIONAL_JUMP)  ; LAB_005643b7
    POP ES                              ; 005643c0
        ;   Label: LAB_005643c0
    MOV EBX,dword ptr [ESP + 0x144]     ; 005643c1
        ;   Label: LAB_005643c1
    MOV ECX,dword ptr [ESP + 0x138]     ; 005643c8
    MOV EDI,dword ptr [ESP + 0x13c]     ; 005643cf
    MOV ESI,dword ptr [ESP + 0x140]     ; 005643d6
    SUB EBX,ECX                         ; 005643dd
    SUB EDI,ESI                         ; 005643df
    MOV ECX,dword ptr [ESP + 0x114]     ; 005643e1
    MOV ESI,dword ptr [ESP + 0x118]     ; 005643e8
    SHL ECX,0x2                         ; 005643ef
    SUB ESI,EDI                         ; 005643f2
    CMP EDI,EBX                         ; 005643f4
    JC 0x00564410                       ; 005643f6
        ;   XREF to: 00564410 (CONDITIONAL_JUMP)  ; LAB_00564410
    MOV EAX,EDI                         ; 005643f8
    XOR EDX,EDX                         ; 005643fa
    DIV EBP                             ; 005643fc
    XOR EDX,EDX                         ; 005643fe
    MOV dword ptr [ESP + ECX*0x1 + 0x80],EAX ; 00564400
    MOV EAX,EBX                         ; 00564407
    DIV EBP                             ; 00564409
    MOV dword ptr [ESP + ECX*0x1],ESI   ; 0056440b
    JMP 0x0056443c                      ; 0056440e
        ;   XREF to: 0056443c (UNCONDITIONAL_JUMP)  ; LAB_0056443c
    CMP EBX,EBP                         ; 00564410
        ;   Label: LAB_00564410
    JBE 0x00563f6c                      ; 00564412
        ;   XREF to: 00563f6c (CONDITIONAL_JUMP)  ; LAB_00563f6c
    MOV EAX,dword ptr [ESP + 0x124]     ; 00564418
    XOR EDX,EDX                         ; 0056441f
    MOV dword ptr [ESP + ECX*0x1],EAX   ; 00564421
    MOV EAX,EBX                         ; 00564424
    DIV EBP                             ; 00564426
    XOR EDX,EDX                         ; 00564428
    MOV dword ptr [ESP + ECX*0x1 + 0x80],EAX ; 0056442a
    MOV EAX,EDI                         ; 00564431
    DIV EBP                             ; 00564433
    MOV dword ptr [ESP + 0x124],ESI     ; 00564435
    MOV dword ptr [ESP + 0x174],EAX     ; 0056443c
        ;   Label: LAB_0056443c
    INC dword ptr [ESP + 0x114]         ; 00564443
    JMP 0x00563e2d                      ; 0056444a
        ;   XREF to: 00563e2d (UNCONDITIONAL_JUMP)  ; LAB_00563e2d
    ADD ESP,0x150                       ; 0056444f
        ;   Label: LAB_0056444f
    POP EBP                             ; 00564455
    POP GS                              ; 00564456
    POP FS                              ; 00564458
    POP ES                              ; 0056445a
    POP EDI                             ; 0056445b
    POP ESI                             ; 0056445c
    POP EBX                             ; 0056445d
    RET                                 ; 0056445e

