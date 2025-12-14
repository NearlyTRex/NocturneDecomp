; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_meshlod.cpp_CLodMesh_extractFaceTexCoordGradient_FUN_00517530(CLodMesh * this_ptr, int tri_index, int corner_idx, CVector3f * out_gradient, float * out_offset)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   tri_index
; int              Stack[0xc]:4   corner_idx
; CVector3f *      Stack[0x10]:4   out_gradient
; float *          Stack[0x14]:4   out_offset
; Local Variables:
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   shape_meshlod.cpp_CLodMesh_collapseEdge_FUN_00517630 at 00517b87
;   shape_meshlod.cpp_CLodMesh_evaluateEdgeCollapse_FUN_00516000 at 0051622f
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;
; Called Functions:
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
;   shape_meshlod.cpp_fitLeastSquaresPlane_FUN_005151e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00517530
        ;   Label: shape_meshlod.cpp_CLodMesh_extractFaceTexCoordGradient_FUN_00517530
    PUSH ESI                            ; 00517531
    SUB ESP,0x30                        ; 00517532
    MOV ESI,dword ptr [ESP + 0x3c]      ; 00517535
    MOV EDX,dword ptr [ESP + 0x40]      ; 00517539
    LEA EAX,[EDX*0x8 + 0x0]             ; 0051753d
    ADD EAX,EDX                         ; 00517544
    SHL EAX,0x2                         ; 00517546
    PUSH 0x6598c0                       ; 00517549 | g_CVectorTypeInfo
    SUB EAX,EDX                         ; 0051754e
    MOV EBX,dword ptr [ESI + 0xc]       ; 00517550
    SHL EAX,0x2                         ; 00517553
    PUSH 0x3                            ; 00517556
    ADD EBX,EAX                         ; 00517558
    LEA EAX,[ESP + 0x8]                 ; 0051755a
    PUSH EAX                            ; 0051755e
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 0051755f
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    IMUL EDX,dword ptr [EBX + 0x10],0x4c4 ; 00517564
    MOV EAX,dword ptr [ESI + 0x4]       ; 0051756b
    ADD EDX,EAX                         ; 0051756e
    LEA EAX,[ESP + 0xc]                 ; 00517570
    ADD ESP,0xc                         ; 00517574
    CMP EAX,EDX                         ; 00517577
    JNZ 0x00517613                      ; 00517579
        ;   XREF to: 00517613 (CONDITIONAL_JUMP)  ; LAB_00517613
    IMUL EDX,dword ptr [EBX + 0x14],0x4c4 ; 0051757f
        ;   Label: LAB_0051757f
    MOV EAX,dword ptr [ESI + 0x4]       ; 00517586
    ADD EDX,EAX                         ; 00517589
    LEA EAX,[ESP + 0xc]                 ; 0051758b
    CMP EAX,EDX                         ; 0051758f
    JZ 0x005175a7                       ; 00517591
        ;   XREF to: 005175a7 (CONDITIONAL_JUMP)  ; LAB_005175a7
    MOV EAX,dword ptr [EDX]             ; 00517593
    MOV dword ptr [ESP + 0xc],EAX       ; 00517595
    MOV EAX,dword ptr [EDX + 0x4]       ; 00517599
    MOV dword ptr [ESP + 0x10],EAX      ; 0051759c
    MOV EAX,dword ptr [EDX + 0x8]       ; 005175a0
    MOV dword ptr [ESP + 0x14],EAX      ; 005175a3
    IMUL EAX,dword ptr [EBX + 0x18],0x4c4 ; 005175a7
        ;   Label: LAB_005175a7
    MOV EDX,dword ptr [ESI + 0x4]       ; 005175ae
    ADD EDX,EAX                         ; 005175b1
    LEA EAX,[ESP + 0x18]                ; 005175b3
    CMP EAX,EDX                         ; 005175b7
    JZ 0x005175cf                       ; 005175b9
        ;   XREF to: 005175cf (CONDITIONAL_JUMP)  ; LAB_005175cf
    MOV EAX,dword ptr [EDX]             ; 005175bb
    MOV dword ptr [ESP + 0x18],EAX      ; 005175bd
    MOV EAX,dword ptr [EDX + 0x4]       ; 005175c1
    MOV dword ptr [ESP + 0x1c],EAX      ; 005175c4
    MOV EAX,dword ptr [EDX + 0x8]       ; 005175c8
    MOV dword ptr [ESP + 0x20],EAX      ; 005175cb
    MOV EDX,dword ptr [ESP + 0x44]      ; 005175cf
        ;   Label: LAB_005175cf
    MOV EAX,dword ptr [EBX + EDX*0x4 + 0x1c] ; 005175d3
    MOV dword ptr [ESP + 0x24],EAX      ; 005175d7
    MOV EAX,dword ptr [EBX + EDX*0x4 + 0x24] ; 005175db
    MOV dword ptr [ESP + 0x28],EAX      ; 005175df
    MOV EAX,dword ptr [EBX + EDX*0x4 + 0x2c] ; 005175e3
    MOV dword ptr [ESP + 0x2c],EAX      ; 005175e7
    MOV EAX,dword ptr [ESP + 0x4c]      ; 005175eb
    PUSH EAX                            ; 005175ef
    MOV EDX,dword ptr [ESP + 0x4c]      ; 005175f0
    PUSH EDX                            ; 005175f4
    ADD EBX,0x44                        ; 005175f5
    PUSH EBX                            ; 005175f8
    LEA EAX,[ESP + 0x30]                ; 005175f9
    PUSH EAX                            ; 005175fd
    LEA EAX,[ESP + 0x10]                ; 005175fe
    PUSH EAX                            ; 00517602
    PUSH 0x3                            ; 00517603
    CALL shape_meshlod.cpp_fitLeastSquaresPlane_FUN_005151e0 ; 00517605
        ;   XREF to: 005151e0 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_fitLeastSquaresPlane_FUN_005151e0(int point_count, CVector3f * positions, float * values, CVector3f * normal, ...)
    ADD ESP,0x18                        ; 0051760a
    ADD ESP,0x30                        ; 0051760d
    POP ESI                             ; 00517610
    POP EBX                             ; 00517611
    RET                                 ; 00517612
    MOV EAX,dword ptr [EDX]             ; 00517613
        ;   Label: LAB_00517613
    MOV dword ptr [ESP],EAX             ; 00517615
    MOV EAX,dword ptr [EDX + 0x4]       ; 00517618
    MOV dword ptr [ESP + 0x4],EAX       ; 0051761b
    MOV EAX,dword ptr [EDX + 0x8]       ; 0051761f
    MOV dword ptr [ESP + 0x8],EAX       ; 00517622
    JMP 0x0051757f                      ; 00517626
        ;   XREF to: 0051757f (UNCONDITIONAL_JUMP)  ; LAB_0051757f

