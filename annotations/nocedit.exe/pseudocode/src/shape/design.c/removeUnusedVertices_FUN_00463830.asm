; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_removeUnusedVertices_FUN_00463830(void)
;
; Local Variables:
; int              Stack[-0x2c]:4  local_2c
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x1c]:4  local_1c
;
; XREF[8]:
;   shape_design.c_complexPolygonReduction_FUN_00463b30 at 0046483b
;   shape_design.c_configureSinglePassPolygonReduction_FUN_00465560 at 00465785
;   shape_design.c_interactiveGlobalWeld_FUN_00466040 at 004661be
;   shape_design.c_interactiveWeldVertices_FUN_00465e90 at 0046602d
;   shape_design.c_mergePolygonsWithValidation_FUN_00465b40 at 00465c43
;   shape_design.c_optimizePolygonMesh_FUN_004658e0 at 00465ab4
;   shape_design.c_vertexReducer_FUN_00467850 at 00467db4
;   shape_design.c_weldNearbyVertices_FUN_00465c50 at 00465d3d
;
; Referenced Globals:
;   TerminatedCString s_shape_design_c_0061c04e
;   TerminatedCString s_ERROR_Can_t_allocate_mem_0061c060
;   TerminatedCString s_shape_design_c_0061c098
;   int g_VertexCount
;   SVertexData[20000] g_LoadedVertices
;   undefined4 g_LoadedVertices[0].vertex.y
;   undefined4 g_LoadedVertices[0].vertex.z
;   undefined4 g_LoadedVertices[0].u
;   undefined4 g_LoadedVertices[0].v
;   undefined4 g_LoadedVertices[1].vertex.x
;   undefined4 g_LoadedVertices[1].vertex.y
;   int g_PolygonCount
;   SShapeEditorPolygon[20000] g_ModelPolygonData
;   undefined4 g_ModelPolygonData[0].vertex_indices_count
;
; Called Functions:
;   crt_memory.c_memset_FUN_005fde40
;   engine_2d.c_drawText_FUN_00401fd0
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00463830
        ;   Label: shape_design.c_removeUnusedVertices_FUN_00463830
    PUSH ESI                            ; 00463831
    PUSH EDI                            ; 00463832
    PUSH EBP                            ; 00463833
    MOV EBP,ESP                         ; 00463834
    SUB ESP,0x1c                        ; 00463836
    CMP dword ptr [0x01626408],0x1      ; 0046383c | g_VertexCount
    JGE 0x0046384a                      ; 00463843
        ;   XREF to: 0046384a (CONDITIONAL_JUMP)  ; LAB_0046384a
    JMP 0x00463a19                      ; 00463845
        ;   XREF to: 00463a19 (UNCONDITIONAL_JUMP)  ; LAB_00463a19
    PUSH 0x189a                         ; 0046384a
        ;   Label: LAB_0046384a
    MOV EAX,0x61c04e                    ; 0046384f | = "..\\shape\\design.c"
    PUSH EAX                            ; 00463854 | = "..\\shape\\design.c"
    MOV EAX,[0x01626408]                ; 00463855 | g_VertexCount
    SHL EAX,0x2                         ; 0046385a
    PUSH EAX                            ; 0046385d
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 0046385e
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00463863
    MOV dword ptr [EBP + -0x8],EAX      ; 00463866
    CMP dword ptr [EBP + -0x8],0x0      ; 00463869
    JNZ 0x00463895                      ; 0046386d
        ;   XREF to: 00463895 (CONDITIONAL_JUMP)  ; LAB_00463895
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0046386f
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    PUSH 0x0                            ; 00463874
    PUSH 0x0                            ; 00463876
    MOV EAX,0x61c060                    ; 00463878 | = "ERROR: Can't allocate memory to remov..."
    PUSH EAX                            ; 0046387d | = "ERROR: Can't allocate memory to remov..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046387e
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00463883
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00463886
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0046388b
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    JMP 0x00463a19                      ; 00463890
        ;   XREF to: 00463a19 (UNCONDITIONAL_JUMP)  ; LAB_00463a19
    MOV EAX,[0x01626408]                ; 00463895 | g_VertexCount
        ;   Label: LAB_00463895
    SHL EAX,0x2                         ; 0046389a
    PUSH EAX                            ; 0046389d
    PUSH 0x0                            ; 0046389e
    MOV EAX,dword ptr [EBP + -0x8]      ; 004638a0
    PUSH EAX                            ; 004638a3
    CALL crt_memory.c_memset_FUN_005fde40 ; 004638a4
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004638a9
    MOV dword ptr [EBP + -0xc],0x0      ; 004638ac
    JMP 0x004638b8                      ; 004638b3
        ;   XREF to: 004638b8 (UNCONDITIONAL_JUMP)  ; LAB_004638b8
    INC dword ptr [EBP + -0xc]          ; 004638b5
        ;   Label: LAB_004638b5
    MOV EAX,dword ptr [EBP + -0xc]      ; 004638b8
        ;   Label: LAB_004638b8
    CMP EAX,dword ptr [0x016e990c]      ; 004638bb | g_PolygonCount
    JGE 0x0046390d                      ; 004638c1
        ;   XREF to: 0046390d (CONDITIONAL_JUMP)  ; LAB_0046390d
    IMUL EAX,dword ptr [EBP + -0xc],0x184 ; 004638c3
    MOV EDX,0x16e9910                   ; 004638ca | g_ModelPolygonData
    ADD EDX,EAX                         ; 004638cf
    MOV dword ptr [EBP + -0x10],EDX     ; 004638d1
    MOV dword ptr [EBP + -0x14],0x0     ; 004638d4
    JMP 0x004638e0                      ; 004638db
        ;   XREF to: 004638e0 (UNCONDITIONAL_JUMP)  ; LAB_004638e0
    INC dword ptr [EBP + -0x14]         ; 004638dd
        ;   Label: LAB_004638dd
    MOV EAX,dword ptr [EBP + -0x14]     ; 004638e0
        ;   Label: LAB_004638e0
    MOV EDX,dword ptr [EBP + -0x10]     ; 004638e3
    CMP EAX,dword ptr [EDX + 0xa4]      ; 004638e6 | g_ModelPolygonData[0].vertex_indices_count
    JGE 0x0046390b                      ; 004638ec
        ;   XREF to: 0046390b (CONDITIONAL_JUMP)  ; LAB_0046390b
    MOV EAX,dword ptr [EBP + -0x14]     ; 004638ee
    SHL EAX,0x2                         ; 004638f1
    ADD EAX,dword ptr [EBP + -0x10]     ; 004638f4
    MOV EAX,dword ptr [EAX + 0xb8]      ; 004638f7
    SHL EAX,0x2                         ; 004638fd
    ADD EAX,dword ptr [EBP + -0x8]      ; 00463900
    MOV dword ptr [EAX],0x1             ; 00463903
    JMP 0x004638dd                      ; 00463909
        ;   XREF to: 004638dd (UNCONDITIONAL_JUMP)  ; LAB_004638dd
    JMP 0x004638b5                      ; 0046390b
        ;   XREF to: 004638b5 (UNCONDITIONAL_JUMP)  ; LAB_004638b5
        ;   Label: LAB_0046390b
    MOV EAX,[0x01626408]                ; 0046390d | g_VertexCount
        ;   Label: LAB_0046390d
    MOV dword ptr [EBP + -0x4],EAX      ; 00463912
    MOV dword ptr [0x01626408],0x0      ; 00463915 | g_VertexCount
    MOV dword ptr [EBP + -0xc],0x0      ; 0046391f
    JMP 0x0046392b                      ; 00463926
        ;   XREF to: 0046392b (UNCONDITIONAL_JUMP)  ; LAB_0046392b
    INC dword ptr [EBP + -0xc]          ; 00463928
        ;   Label: LAB_00463928
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046392b
        ;   Label: LAB_0046392b
    CMP EAX,dword ptr [EBP + -0x4]      ; 0046392e
    JGE 0x00463992                      ; 00463931
        ;   XREF to: 00463992 (CONDITIONAL_JUMP)  ; LAB_00463992
    MOV EAX,dword ptr [EBP + -0xc]      ; 00463933
    SHL EAX,0x2                         ; 00463936
    ADD EAX,dword ptr [EBP + -0x8]      ; 00463939
    CMP dword ptr [EAX],0x0             ; 0046393c
    JZ 0x00463981                       ; 0046393f
        ;   XREF to: 00463981 (CONDITIONAL_JUMP)  ; LAB_00463981
    MOV EAX,[0x01626408]                ; 00463941 | g_VertexCount
    CMP EAX,dword ptr [EBP + -0xc]      ; 00463946
    JZ 0x00463967                       ; 00463949
        ;   XREF to: 00463967 (CONDITIONAL_JUMP)  ; LAB_00463967
    IMUL ESI,dword ptr [EBP + -0xc],0x14 ; 0046394b
    IMUL EDI,dword ptr [0x01626408],0x14 ; 0046394f | g_VertexCount
    LEA EDI,[EDI + 0x162640c]           ; 00463956 | g_LoadedVertices
    LEA ESI,[ESI + 0x162640c]           ; 0046395c | g_LoadedVertices
    MOVSD ES:EDI,ESI                    ; 00463962 | g_LoadedVertices[1].vertex.x
    MOVSD ES:EDI,ESI                    ; 00463963 | g_LoadedVertices[1].vertex.y | g_LoadedVertices[0].vertex.y
    MOVSD ES:EDI,ESI                    ; 00463964 | g_LoadedVertices[0].vertex.z
    MOVSD ES:EDI,ESI                    ; 00463965 | g_LoadedVertices[0].u
    MOVSD ES:EDI,ESI                    ; 00463966 | g_LoadedVertices[0].v
    MOV EAX,dword ptr [EBP + -0xc]      ; 00463967
        ;   Label: LAB_00463967
    SHL EAX,0x2                         ; 0046396a
    MOV EDX,dword ptr [EBP + -0x8]      ; 0046396d
    ADD EDX,EAX                         ; 00463970
    MOV EAX,[0x01626408]                ; 00463972 | g_VertexCount
    MOV dword ptr [EDX],EAX             ; 00463977
    INC dword ptr [0x01626408]          ; 00463979 | g_VertexCount
    JMP 0x00463990                      ; 0046397f
        ;   XREF to: 00463990 (UNCONDITIONAL_JUMP)  ; LAB_00463990
    MOV EAX,dword ptr [EBP + -0xc]      ; 00463981
        ;   Label: LAB_00463981
    SHL EAX,0x2                         ; 00463984
    ADD EAX,dword ptr [EBP + -0x8]      ; 00463987
    MOV dword ptr [EAX],0xffffffff      ; 0046398a
    JMP 0x00463928                      ; 00463990
        ;   XREF to: 00463928 (UNCONDITIONAL_JUMP)  ; LAB_00463928
        ;   Label: LAB_00463990
    MOV dword ptr [EBP + -0xc],0x0      ; 00463992
        ;   Label: LAB_00463992
    JMP 0x0046399e                      ; 00463999
        ;   XREF to: 0046399e (UNCONDITIONAL_JUMP)  ; LAB_0046399e
    INC dword ptr [EBP + -0xc]          ; 0046399b
        ;   Label: LAB_0046399b
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046399e
        ;   Label: LAB_0046399e
    CMP EAX,dword ptr [0x016e990c]      ; 004639a1 | g_PolygonCount
    JGE 0x00463a02                      ; 004639a7
        ;   XREF to: 00463a02 (CONDITIONAL_JUMP)  ; LAB_00463a02
    IMUL EAX,dword ptr [EBP + -0xc],0x184 ; 004639a9
    MOV EDX,0x16e9910                   ; 004639b0 | g_ModelPolygonData
    ADD EDX,EAX                         ; 004639b5
    MOV dword ptr [EBP + -0x18],EDX     ; 004639b7
    MOV dword ptr [EBP + -0x1c],0x0     ; 004639ba
    JMP 0x004639c6                      ; 004639c1
        ;   XREF to: 004639c6 (UNCONDITIONAL_JUMP)  ; LAB_004639c6
    INC dword ptr [EBP + -0x1c]         ; 004639c3
        ;   Label: LAB_004639c3
    MOV EAX,dword ptr [EBP + -0x1c]     ; 004639c6
        ;   Label: LAB_004639c6
    MOV EDX,dword ptr [EBP + -0x18]     ; 004639c9
    CMP EAX,dword ptr [EDX + 0xa4]      ; 004639cc | g_ModelPolygonData[0].vertex_indices_count
    JGE 0x00463a00                      ; 004639d2
        ;   XREF to: 00463a00 (CONDITIONAL_JUMP)  ; LAB_00463a00
    MOV EAX,dword ptr [EBP + -0x1c]     ; 004639d4
    SHL EAX,0x2                         ; 004639d7
    ADD EAX,dword ptr [EBP + -0x18]     ; 004639da
    MOV EAX,dword ptr [EAX + 0xb8]      ; 004639dd
    SHL EAX,0x2                         ; 004639e3
    MOV EDX,dword ptr [EBP + -0x8]      ; 004639e6
    ADD EDX,EAX                         ; 004639e9
    MOV EAX,dword ptr [EBP + -0x1c]     ; 004639eb
    SHL EAX,0x2                         ; 004639ee
    MOV ECX,dword ptr [EBP + -0x18]     ; 004639f1
    ADD ECX,EAX                         ; 004639f4
    MOV EAX,dword ptr [EDX]             ; 004639f6
    MOV dword ptr [ECX + 0xb8],EAX      ; 004639f8
    JMP 0x004639c3                      ; 004639fe
        ;   XREF to: 004639c3 (UNCONDITIONAL_JUMP)  ; LAB_004639c3
    JMP 0x0046399b                      ; 00463a00
        ;   XREF to: 0046399b (UNCONDITIONAL_JUMP)  ; LAB_0046399b
        ;   Label: LAB_00463a00
    PUSH 0x18d4                         ; 00463a02
        ;   Label: LAB_00463a02
    MOV EAX,0x61c098                    ; 00463a07 | = "..\\shape\\design.c"
    PUSH EAX                            ; 00463a0c | = "..\\shape\\design.c"
    MOV EAX,dword ptr [EBP + -0x8]      ; 00463a0d
    PUSH EAX                            ; 00463a10
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 00463a11
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 00463a16
    MOV ESP,EBP                         ; 00463a19
        ;   Label: LAB_00463a19
    POP EBP                             ; 00463a1b
    POP EDI                             ; 00463a1c
    POP ESI                             ; 00463a1d
    POP EBX                             ; 00463a1e
    RET                                 ; 00463a1f

