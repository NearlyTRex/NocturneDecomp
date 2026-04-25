; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_meshlod_cpp_CLodMesh_computeEdgeCollapseCost_FUN_00518910(CLodMesh *this_ptr,int edge_index)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   edge_index
; Local Variables:
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  uStack_114
; undefined8       Stack[-0x110]:8  local_110
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  uStack_104
; int              Stack[-0x100]:4  local_100
; CVector3f        Stack[-0xd4]:12  local_d4
; float            Stack[-0xc8]:4  local_c8
; float            Stack[-0xc4]:4  local_c4
; float            Stack[-0xc0]:4  local_c0
; float            Stack[-0xbc]:4  local_bc
; float            Stack[-0xb8]:4  local_b8
; float            Stack[-0xb4]:4  local_b4
; float            Stack[-0xb0]:4  local_b0
; float            Stack[-0xac]:4  local_ac
; float            Stack[-0xa8]:4  local_a8
; float            Stack[-0xa4]:4  local_a4
; float            Stack[-0xa0]:4  local_a0
; float            Stack[-0x9c]:4  local_9c
; CVector3f        Stack[-0x98]:12  local_98
; double           Stack[-0x8c]:8  local_8c
; int              Stack[-0x84]:4  local_84
; int              Stack[-0x80]:4  local_80
; CVector3f *      Stack[-0x7c]:4  local_7c
; CVector3f *      Stack[-0x78]:4  local_78
; int              Stack[-0x74]:4  local_74
; float            Stack[-0x70]:4  local_70
; int              Stack[-0x6c]:4  local_6c
; float            Stack[-0x68]:4  local_68
; int              Stack[-0x64]:4  local_64
; int              Stack[-0x60]:4  local_60
; int              Stack[-0x5c]:4  local_5c
; CLodEdge *       Stack[-0x58]:4  local_58
; int              Stack[-0x54]:4  local_54
; int              Stack[-0x50]:4  local_50
; int              Stack[-0x4c]:4  local_4c
; int              Stack[-0x48]:4  local_48
; int              Stack[-0x44]:4  local_44
; int              Stack[-0x40]:4  local_40
; int              Stack[-0x3c]:4  local_3c
; int              Stack[-0x38]:4  local_38
; SLodSamplePoint * Stack[-0x34]:4  local_34
; CLodEdge *       Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; int              Stack[-0x28]:4  local_28
; CLodEdge *       Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
;
; XREF[2]:
;   shape_meshlod.cpp_CLodMesh_computeAllEdgeCollapseCosts_FUN_00519710 at 0051975f
;   shape_meshlod.cpp_CLodMesh_findMinimumCostEdge_FUN_00519680 at 005196e4
;
; Referenced Globals:
;   TerminatedCString s_Too_many_neighboring_edg_00637921
;   TerminatedCString s_shape_meshlod_cpp_0063793d
;   TerminatedCString s_Too_many_neighboring_edg_00637952
;   TerminatedCString s_Too_many_neighboring_fac_0063796e
;   TerminatedCString s_shape_meshlod_cpp_0063798a
;   TerminatedCString s_Too_many_neighboring_fac_0063799f
;   TerminatedCString s_shape_meshlod_cpp_006379bb
;   TerminatedCString s_Bug_006379d0
;   float FLOAT_006379d5 = 0.25
;   float FLOAT_006379d9 = 0.5
;   float FLOAT_006379dd = 2
;   double g_InfiniteCollapseCost = 1.00000000000000E+35
;   WatcomTypeInfo g_LodFaceTypeInfo
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   WatcomStaticDestructorNode g_TempNeighborFacesDestructorNode
;   ... and 33 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_memory.c___arrinit_FUN_005fe667
;   crt_stdlib.c__atexit_FUN_005ff060
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_meshlod.cpp_CLodMesh_checkEdgeCollapseAngle_FUN_00519480
;   shape_meshlod.cpp_CLodMesh_computeFaceCentroid_FUN_00518870
;   shape_meshlod.cpp_CLodMesh_computePointToFaceDistance_FUN_0051a400
;   shape_meshlod.cpp_CLodMesh_computeSamplePointDistances_FUN_00519b50
;   shape_meshlod.cpp_CLodMesh_validateEdgeCollapse_FUN_00518490
;   shape_meshlod.cpp_CLodMesh_validateFace_FUN_00519830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00518910
        ;   Label: shape_meshlod.cpp_CLodMesh_computeEdgeCollapseCost_FUN_00518910
    PUSH ESI                            ; 00518911
    PUSH EDI                            ; 00518912
    PUSH EBP                            ; 00518913
    MOV EBP,ESP                         ; 00518914
    SUB ESP,0x114                       ; 00518916
    AND ESP,0xfffffff8                  ; 0051891c
    MOV EAX,dword ptr [EBP + 0x18]      ; 0051891f
    SHL EAX,0x4                         ; 00518922
    MOV EDX,EAX                         ; 00518925
    SHL EAX,0x4                         ; 00518927
    SUB EAX,EDX                         ; 0051892a
    MOV EDX,EAX                         ; 0051892c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051892e
    MOV EAX,dword ptr [EAX + 0x48]      ; 00518931
    ADD EAX,EDX                         ; 00518934
    MOV EDX,dword ptr [EAX + 0x4]       ; 00518936
    FLD double ptr [0x00661388]         ; 00518939 | g_InfiniteCollapseCost
    PUSH EDX                            ; 0051893f
    MOV ECX,dword ptr [EAX]             ; 00518940
    MOV EBX,dword ptr [EBP + 0x14]      ; 00518942
    PUSH ECX                            ; 00518945
    FSTP double ptr [EAX + 0x8]         ; 00518946
    PUSH EBX                            ; 00518949
    MOV dword ptr [ESP + 0xdc],EAX      ; 0051894a
    MOV dword ptr [EAX + 0x20],0x0      ; 00518951
    CALL shape_meshlod.cpp_CLodMesh_validateEdgeCollapse_FUN_00518490 ; 00518958
        ;   XREF to: 00518490 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodMesh_validateEdgeCollapse_FUN_00518490(CLodMesh * this_ptr, int vertex_idx_1, int vertex_idx_2)
    ADD ESP,0xc                         ; 0051895d
    MOV ESI,dword ptr [EBP + 0x18]      ; 00518960
    CMP EAX,ESI                         ; 00518963
    JZ 0x0051896e                       ; 00518965
        ;   XREF to: 0051896e (CONDITIONAL_JUMP)  ; LAB_0051896e
    MOV ESP,EBP                         ; 00518967
        ;   Label: LAB_00518967
    POP EBP                             ; 00518969
    POP EDI                             ; 0051896a
    POP ESI                             ; 0051896b
    POP EBX                             ; 0051896c
    RET                                 ; 0051896d
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0051896e
        ;   Label: LAB_0051896e
    MOV EDI,dword ptr [EAX]             ; 00518975
    PUSH EDI                            ; 00518977
    PUSH ESI                            ; 00518978
    PUSH EBX                            ; 00518979
    CALL shape_meshlod.cpp_CLodMesh_checkEdgeCollapseAngle_FUN_00519480 ; 0051897a
        ;   XREF to: 00519480 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodMesh_checkEdgeCollapseAngle_FUN_00519480(CLodMesh * this_ptr, int edge_idx, int vertex_idx)
    ADD ESP,0xc                         ; 0051897f
    MOV EBX,EAX                         ; 00518982
    MOV dword ptr [ESP + 0xa4],EAX      ; 00518984
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0051898b
    MOV ECX,dword ptr [EAX + 0x4]       ; 00518992
    PUSH ECX                            ; 00518995
    PUSH ESI                            ; 00518996
    MOV EDI,dword ptr [EBP + 0x14]      ; 00518997
    PUSH EDI                            ; 0051899a
    CALL shape_meshlod.cpp_CLodMesh_checkEdgeCollapseAngle_FUN_00519480 ; 0051899b
        ;   XREF to: 00519480 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodMesh_checkEdgeCollapseAngle_FUN_00519480(CLodMesh * this_ptr, int edge_idx, int vertex_idx)
    ADD ESP,0xc                         ; 005189a0
    MOV dword ptr [ESP + 0xa8],EAX      ; 005189a3
    TEST EBX,EBX                        ; 005189aa
    JZ 0x005189b2                       ; 005189ac
        ;   XREF to: 005189b2 (CONDITIONAL_JUMP)  ; LAB_005189b2
    TEST EAX,EAX                        ; 005189ae
    JNZ 0x00518967                      ; 005189b0
        ;   XREF to: 00518967 (CONDITIONAL_JUMP)  ; LAB_00518967
    XOR EAX,EAX                         ; 005189b2
        ;   Label: LAB_005189b2
    MOV dword ptr [ESP + 0xec],EAX      ; 005189b4
    MOV AH,byte ptr [0x02f31230]        ; 005189bb | g_TempFacesInitGuard
    XOR EDI,EDI                         ; 005189c1
    TEST AH,0x1                         ; 005189c3
    JZ 0x00518ac8                       ; 005189c6
        ;   XREF to: 00518ac8 (CONDITIONAL_JUMP)  ; LAB_00518ac8
    MOV ECX,dword ptr [0x02f33334]      ; 005189cc | g_LodGenerationStamp
        ;   Label: LAB_005189cc
    MOV EBX,dword ptr [0x02f33338]      ; 005189d2 | g_LodTempFaceStamp
    XOR EDX,EDX                         ; 005189d8
    INC ECX                             ; 005189da
    INC EBX                             ; 005189db
    MOV dword ptr [ESP + 0xbc],EDX      ; 005189dc
    MOV dword ptr [0x02f33334],ECX      ; 005189e3 | g_LodGenerationStamp
    MOV dword ptr [0x02f33338],EBX      ; 005189e9 | g_LodTempFaceStamp
    MOV EAX,dword ptr [ESP + 0xd0]      ; 005189ef
        ;   Label: LAB_005189ef
    MOV EAX,dword ptr [EAX]             ; 005189f6
    MOV dword ptr [ESP + 0x10c],EAX     ; 005189f8
    MOV EAX,dword ptr [ESP + 0xd0]      ; 005189ff
    MOV EAX,dword ptr [EAX + 0x4]       ; 00518a06
    MOV ESI,dword ptr [ESP + 0xbc]      ; 00518a09
    MOV dword ptr [ESP + 0x100],EAX     ; 00518a10
    CMP ESI,0x1                         ; 00518a17
    JZ 0x00518fc2                       ; 00518a1a
        ;   XREF to: 00518fc2 (CONDITIONAL_JUMP)  ; LAB_00518fc2
    XOR EAX,EAX                         ; 00518a20
        ;   Label: LAB_00518a20
    MOV EDX,dword ptr [ESP + 0x10c]     ; 00518a22
    MOV dword ptr [ESP + 0xd8],EAX      ; 00518a29
    IMUL EAX,EDX,0x4c4                  ; 00518a30
    MOV dword ptr [ESP + 0xc8],EAX      ; 00518a36
    MOV EAX,dword ptr [ESP + 0xec]      ; 00518a3d
    XOR ECX,ECX                         ; 00518a44
    SHL EAX,0x2                         ; 00518a46
    MOV dword ptr [ESP + 0xe0],ECX      ; 00518a49
    MOV dword ptr [ESP + 0xf0],EAX      ; 00518a50
    MOV EDX,dword ptr [EBP + 0x14]      ; 00518a57
        ;   Label: LAB_00518a57
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00518a5a
    MOV EDX,dword ptr [EDX + 0x4]       ; 00518a61
    ADD EAX,EDX                         ; 00518a64
    MOV ECX,dword ptr [ESP + 0xd8]      ; 00518a66
    CMP ECX,dword ptr [EAX + 0x3f8]     ; 00518a6d
    JGE 0x00518afc                      ; 00518a73
        ;   XREF to: 00518afc (CONDITIONAL_JUMP)  ; LAB_00518afc
    ADD EAX,dword ptr [ESP + 0xe0]      ; 00518a79
    MOV EAX,dword ptr [EAX + 0x3fc]     ; 00518a80
    IMUL EDX,EAX,0xf0                   ; 00518a86
    MOV ECX,dword ptr [EBP + 0x14]      ; 00518a8c
    MOV ECX,dword ptr [ECX + 0x48]      ; 00518a8f
    ADD ECX,EDX                         ; 00518a92
    MOV EDX,dword ptr [EBP + 0x18]      ; 00518a94
    MOV dword ptr [ESP + 0xf8],ECX      ; 00518a97
    CMP EAX,EDX                         ; 00518a9e
    JNZ 0x00518fe3                      ; 00518aa0
        ;   XREF to: 00518fe3 (CONDITIONAL_JUMP)  ; LAB_00518fe3
    MOV EAX,dword ptr [ESP + 0xd8]      ; 00518aa6
        ;   Label: LAB_00518aa6
    MOV ESI,dword ptr [ESP + 0xe0]      ; 00518aad
    INC EAX                             ; 00518ab4
    ADD ESI,0x4                         ; 00518ab5
    MOV dword ptr [ESP + 0xd8],EAX      ; 00518ab8
    MOV dword ptr [ESP + 0xe0],ESI      ; 00518abf
    JMP 0x00518a57                      ; 00518ac6
        ;   XREF to: 00518a57 (UNCONDITIONAL_JUMP)  ; LAB_00518a57
    PUSH 0x661390                       ; 00518ac8 | g_LodFaceTypeInfo
        ;   Label: LAB_00518ac8
    MOV DL,AH                           ; 00518acd
    PUSH 0xc8                           ; 00518acf
    OR DL,0x1                           ; 00518ad4
    PUSH 0x2f2a4d0                      ; 00518ad7 | g_TempNeighborFaces
    MOV byte ptr [0x02f31230],DL        ; 00518adc | g_TempFacesInitGuard
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 00518ae2
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00518ae7
    PUSH 0x67d380                       ; 00518aea | g_TempNeighborFacesDestructorNode
    CALL crt_stdlib.c__atexit_FUN_005ff060 ; 00518aef
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00518af4
    JMP 0x005189cc                      ; 00518af7
        ;   XREF to: 005189cc (UNCONDITIONAL_JUMP)  ; LAB_005189cc
    MOV ESI,dword ptr [ESP + 0xbc]      ; 00518afc
        ;   Label: LAB_00518afc
    INC ESI                             ; 00518b03
    MOV dword ptr [ESP + 0xbc],ESI      ; 00518b04
    CMP ESI,0x2                         ; 00518b0b
    JL 0x005189ef                       ; 00518b0e
        ;   XREF to: 005189ef (CONDITIONAL_JUMP)  ; LAB_005189ef
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00518b14
    IMUL EAX,dword ptr [EAX],0x4c4      ; 00518b1b
    ADD EDX,EAX                         ; 00518b21
    MOV EAX,dword ptr [EDX]             ; 00518b23
    MOV dword ptr [ESP + 0x84],EAX      ; 00518b25
    LEA EAX,[EDX + 0x4]                 ; 00518b2c
    MOV EAX,dword ptr [EAX]             ; 00518b2f
    MOV dword ptr [ESP + 0x88],EAX      ; 00518b31
    LEA EAX,[EDX + 0x8]                 ; 00518b38
    MOV EAX,dword ptr [EAX]             ; 00518b3b
    MOV dword ptr [ESP + 0x8c],EAX      ; 00518b3d
    MOV EAX,dword ptr [ESP + 0xec]      ; 00518b44
    SHL EAX,0x2                         ; 00518b4b
    MOV dword ptr [ESP + 0xb4],EAX      ; 00518b4e
    MOV EAX,0x2f2a4d0                   ; 00518b55 | g_TempNeighborFaces
    ADD EAX,0x44                        ; 00518b5a
    MOV dword ptr [ESP + 0xac],EAX      ; 00518b5d | g_TempNeighborFaces[0].normal.x
    MOV EAX,0x2f313f0                   ; 00518b64 | g_SamplePointArray
    XOR EBX,EBX                         ; 00518b69
    ADD EAX,0xc                         ; 00518b6b
    MOV dword ptr [ESP + 0xc4],EBX      ; 00518b6e
    MOV dword ptr [ESP + 0xb0],EAX      ; 00518b75 | g_SamplePointArray[1].x
    CMP dword ptr [0x02f33330],0x0      ; 00518b7c | g_LodReplayMode
        ;   Label: LAB_00518b7c
    JZ 0x00519207                       ; 00518b83
        ;   XREF to: 00519207 (CONDITIONAL_JUMP)  ; LAB_00519207
    MOV EAX,dword ptr [ESP + 0xc4]      ; 00518b89
        ;   Label: LAB_00518b89
    MOV dword ptr [ESP + 0x110],EAX     ; 00518b90
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00518b97
    IMUL EAX,dword ptr [EAX + 0x4],0x4c4 ; 00518b9e
    FILD dword ptr [ESP + 0x110]        ; 00518ba5
    FMUL float ptr [0x006379d5]         ; 00518bac | FLOAT_006379d5
    FLD1                                ; 00518bb2
    FLD float ptr [ESP + 0x84]          ; 00518bb4
    FXCH ST2                            ; 00518bbb
    FSTP float ptr [ESP + 0xc0]         ; 00518bbd
    FSUB float ptr [ESP + 0xc0]         ; 00518bc4
    MOV EDX,dword ptr [EBP + 0x14]      ; 00518bcb
    FSTP float ptr [ESP + 0xb8]         ; 00518bce
    MOV EDX,dword ptr [EDX + 0x4]       ; 00518bd5
    FMUL float ptr [ESP + 0xb8]         ; 00518bd8
    FLD float ptr [EDX + EAX*0x1]       ; 00518bdf
    FMUL float ptr [ESP + 0xc0]         ; 00518be2
    FLD float ptr [ESP + 0x88]          ; 00518be9
    FMUL float ptr [ESP + 0xb8]         ; 00518bf0
    FXCH                                ; 00518bf7
    FSTP float ptr [ESP + 0x78]         ; 00518bf9
    FLD float ptr [EDX + EAX*0x1 + 0x4] ; 00518bfd
    FMUL float ptr [ESP + 0xc0]         ; 00518c01
    FLD float ptr [ESP + 0x8c]          ; 00518c08
    FMUL float ptr [ESP + 0xb8]         ; 00518c0f
    FXCH                                ; 00518c16
    FSTP float ptr [ESP + 0x7c]         ; 00518c18
    FLD float ptr [EDX + EAX*0x1 + 0x8] ; 00518c1c
    FMUL float ptr [ESP + 0xc0]         ; 00518c20
    FXCH ST3                            ; 00518c27
    FSTP float ptr [ESP + 0x3c]         ; 00518c29
    FXCH                                ; 00518c2d
    FSTP float ptr [ESP + 0x40]         ; 00518c2f
    FSTP float ptr [ESP + 0x44]         ; 00518c33
    FLD float ptr [ESP + 0x3c]          ; 00518c37
    FLD float ptr [ESP + 0x40]          ; 00518c3b
    FLD float ptr [ESP + 0x44]          ; 00518c3f
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00518c43
    FXCH ST3                            ; 00518c4a
    FSTP float ptr [ESP + 0x80]         ; 00518c4c
    FXCH                                ; 00518c53
    FADD float ptr [ESP + 0x78]         ; 00518c55
    FXCH                                ; 00518c59
    FADD float ptr [ESP + 0x7c]         ; 00518c5b
    FXCH                                ; 00518c5f
    FSTP float ptr [ESP + 0x30]         ; 00518c61
    FXCH                                ; 00518c65
    FADD float ptr [ESP + 0x80]         ; 00518c67
    FXCH                                ; 00518c6e
    FSTP float ptr [ESP + 0x34]         ; 00518c70
    FSTP float ptr [ESP + 0x38]         ; 00518c74
    IMUL EAX,dword ptr [EAX],0x4c4      ; 00518c78
    MOV EDX,dword ptr [EBP + 0x14]      ; 00518c7e
    MOV EDX,dword ptr [EDX + 0x4]       ; 00518c81
    ADD EDX,EAX                         ; 00518c84
    MOV EAX,dword ptr [ESP + 0x30]      ; 00518c86
    MOV dword ptr [EDX],EAX             ; 00518c8a
    FLD float ptr [0x0067d398]          ; 00518c8c | g_SamplePointWeight
    MOV EAX,dword ptr [ESP + 0x34]      ; 00518c92
    FLDZ                                ; 00518c96
    MOV dword ptr [EDX + 0x4],EAX       ; 00518c98
    XOR EBX,EBX                         ; 00518c9b
    MOV EAX,dword ptr [ESP + 0x38]      ; 00518c9d
    MOV dword ptr [ESP + 0x18],EBX      ; 00518ca1
    MOV dword ptr [EDX + 0x8],EAX       ; 00518ca5
    MOV EAX,0x501502f9                  ; 00518ca8
    MOV dword ptr [ESP + 0x1c],EBX      ; 00518cad
    MOV dword ptr [ESP + 0x2c],EAX      ; 00518cb1
    FCOMPP                              ; 00518cb5
    FNSTSW AX                           ; 00518cb7
    SAHF                                ; 00518cb9
    JNC 0x00519240                      ; 00518cba
        ;   XREF to: 00519240 (CONDITIONAL_JUMP)  ; LAB_00519240
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00518cc0
    IMUL EDX,dword ptr [EAX],0x4c4      ; 00518cc7
    MOV EAX,dword ptr [EBP + 0x14]      ; 00518ccd
    MOV dword ptr [0x02f313ec],EBX      ; 00518cd0 | g_SamplePointCount
    MOV EAX,dword ptr [EAX + 0x4]       ; 00518cd6
    MOV EBX,0x1                         ; 00518cd9
    ADD EAX,EDX                         ; 00518cde
    MOV dword ptr [0x02f313ec],EBX      ; 00518ce0 | g_SamplePointCount
    CMP EAX,0x2f313f0                   ; 00518ce6 | g_SamplePointArray
    JZ 0x00518d07                       ; 00518ceb
        ;   XREF to: 00518d07 (CONDITIONAL_JUMP)  ; LAB_00518d07
    FLD float ptr [EAX]                 ; 00518ced
    FLD float ptr [EAX + 0x8]           ; 00518cef
    MOV EDX,dword ptr [EAX + 0x4]       ; 00518cf2
    MOV dword ptr [0x02f313f4],EDX      ; 00518cf5 | g_SamplePointArray[0].y
    FSTP float ptr [0x02f313f8]         ; 00518cfb | g_SamplePointArray[0].z
    FSTP float ptr [0x02f313f0]         ; 00518d01 | g_SamplePointArray
    CMP dword ptr [ESP + 0xec],0x0      ; 00518d07
        ;   Label: LAB_00518d07
    JLE 0x00518dc8                      ; 00518d0f
        ;   XREF to: 00518dc8 (CONDITIONAL_JUMP)  ; LAB_00518dc8
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00518d15
    XOR ESI,ESI                         ; 00518d1c
    MOV dword ptr [ESP + 0xcc],EAX      ; 00518d1e
    IMUL EBX,dword ptr [ESI + 0x2f2a1b0],0x4c4 ; 00518d25 | g_MaxNeighborVerts | g_MaxNeighborVerts[1]
        ;   Label: LAB_00518d25
    MOV EDX,dword ptr [ESP + 0xd0]      ; 00518d2f
    IMUL EDX,dword ptr [EDX],0x4c4      ; 00518d36
    MOV EAX,dword ptr [EBP + 0x14]      ; 00518d3c
    MOV EAX,dword ptr [EAX + 0x4]       ; 00518d3f
    ADD EBX,EAX                         ; 00518d42
    ADD EAX,EDX                         ; 00518d44
    FLD float ptr [EAX]                 ; 00518d46
    FADD float ptr [EBX]                ; 00518d48
    FST float ptr [ESP + 0x48]          ; 00518d4a
    FDIV float ptr [0x006379dd]         ; 00518d4e | FLOAT_006379dd
    FLD float ptr [EAX + 0x4]           ; 00518d54
    FADD float ptr [EBX + 0x4]          ; 00518d57
    FSTP float ptr [ESP + 0x4c]         ; 00518d5a
    FLD float ptr [EAX + 0x8]           ; 00518d5e
    MOV EAX,[0x02f313ec]                ; 00518d61 | g_SamplePointCount
    FADD float ptr [EBX + 0x8]          ; 00518d66
    IMUL EBX,EAX,0xc                    ; 00518d69
    FLD float ptr [0x006379d9]          ; 00518d6c | FLOAT_006379d9
    FLD float ptr [ESP + 0x4c]          ; 00518d72
    FMUL ST1                            ; 00518d76
    FXCH ST2                            ; 00518d78
    FST float ptr [ESP + 0x50]          ; 00518d7a
    FMULP                               ; 00518d7e
    FXCH                                ; 00518d80
    FSTP float ptr [ESP + 0x58]         ; 00518d82
    FSTP float ptr [ESP + 0x5c]         ; 00518d86
    INC EAX                             ; 00518d8a
    ADD EBX,0x2f313f0                   ; 00518d8b | g_SamplePointArray[1].x
    MOV [0x02f313ec],EAX                ; 00518d91 | g_SamplePointCount
    LEA EAX,[ESP + 0x54]                ; 00518d96
    FSTP float ptr [ESP + 0x54]         ; 00518d9a
    CMP EBX,EAX                         ; 00518d9e
    JZ 0x00518db6                       ; 00518da0
        ;   XREF to: 00518db6 (CONDITIONAL_JUMP)  ; LAB_00518db6
    MOV EAX,dword ptr [ESP + 0x54]      ; 00518da2
    MOV dword ptr [EBX],EAX             ; 00518da6 | g_SamplePointArray[1].x
    MOV EAX,dword ptr [ESP + 0x58]      ; 00518da8
    MOV dword ptr [EBX + 0x4],EAX       ; 00518dac | g_SamplePointArray[1].y
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00518daf
    MOV dword ptr [EBX + 0x8],EAX       ; 00518db3 | g_SamplePointArray[1].z
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00518db6
        ;   Label: LAB_00518db6
    ADD ESI,0x4                         ; 00518dbd
    CMP ESI,EAX                         ; 00518dc0
    JL 0x00518d25                       ; 00518dc2
        ;   XREF to: 00518d25 (CONDITIONAL_JUMP)  ; LAB_00518d25
    XOR EDX,EDX                         ; 00518dc8
        ;   Label: LAB_00518dc8
    MOV dword ptr [ESP + 0xe4],EDX      ; 00518dca
    TEST EDI,EDI                        ; 00518dd1
    JLE 0x00518e32                      ; 00518dd3
        ;   XREF to: 00518e32 (CONDITIONAL_JUMP)  ; LAB_00518e32
    MOV ESI,0x2f2a4d0                   ; 00518dd5 | g_TempNeighborFaces
    PUSH ESI                            ; 00518dda | g_TempNeighborFaces | g_TempNeighborFaces[1].attribute_indices[0]
        ;   Label: LAB_00518dda
    LEA EAX,[ESP + 0x94]                ; 00518ddb
    PUSH EAX                            ; 00518de2
    MOV EDX,dword ptr [EBP + 0x14]      ; 00518de3
    PUSH EDX                            ; 00518de6
    CALL shape_meshlod.cpp_CLodMesh_computeFaceCentroid_FUN_00518870 ; 00518de7
        ;   XREF to: 00518870 (UNCONDITIONAL_CALL)  ; CVector3f * shape_meshlod.cpp_CLodMesh_computeFaceCentroid_FUN_00518870(CLodMesh * this_ptr, CVector3f * out_centroid, CLodFace * face)
    MOV EDX,dword ptr [0x02f313ec]      ; 00518dec | g_SamplePointCount
    IMUL EBX,EDX,0xc                    ; 00518df2
    ADD ESP,0xc                         ; 00518df5
    INC EDX                             ; 00518df8
    ADD EBX,0x2f313f0                   ; 00518df9 | g_SamplePointArray[2].x
    MOV dword ptr [0x02f313ec],EDX      ; 00518dff | g_SamplePointCount
    CMP EBX,EAX                         ; 00518e05
    JZ 0x00518e19                       ; 00518e07
        ;   XREF to: 00518e19 (CONDITIONAL_JUMP)  ; LAB_00518e19
    MOV EDX,dword ptr [EAX]             ; 00518e09
    MOV dword ptr [EBX],EDX             ; 00518e0b | g_SamplePointArray[2].x
    MOV EDX,dword ptr [EAX + 0x4]       ; 00518e0d
    MOV dword ptr [EBX + 0x4],EDX       ; 00518e10 | g_SamplePointArray[2].y
    MOV EDX,dword ptr [EAX + 0x8]       ; 00518e13
    MOV dword ptr [EBX + 0x8],EDX       ; 00518e16 | g_SamplePointArray[2].z
    MOV ECX,dword ptr [ESP + 0xe4]      ; 00518e19
        ;   Label: LAB_00518e19
    INC ECX                             ; 00518e20
    ADD ESI,0x8c                        ; 00518e21
    MOV dword ptr [ESP + 0xe4],ECX      ; 00518e27
    CMP EDI,ECX                         ; 00518e2e
    JG 0x00518dda                       ; 00518e30
        ;   XREF to: 00518dda (CONDITIONAL_JUMP)  ; LAB_00518dda
    CMP dword ptr [0x0067d394],0x0      ; 00518e32 | g_EnableMidpointSampling
        ;   Label: LAB_00518e32
    JZ 0x00518f04                       ; 00518e39
        ;   XREF to: 00518f04 (CONDITIONAL_JUMP)  ; LAB_00518f04
    MOV EAX,[0x02f313ec]                ; 00518e3f | g_SamplePointCount
    MOV EDX,0x1                         ; 00518e44
    MOV dword ptr [ESP + 0xd4],EAX      ; 00518e49
    CMP EAX,EDX                         ; 00518e50
    JLE 0x00518ef8                      ; 00518e52
        ;   XREF to: 00518ef8 (CONDITIONAL_JUMP)  ; LAB_00518ef8
    MOV EBX,dword ptr [ESP + 0xb0]      ; 00518e58
    IMUL ECX,EAX,0xc                    ; 00518e5f
    FLD float ptr [0x02f313f0]          ; 00518e62 | g_SamplePointArray
        ;   Label: LAB_00518e62
    FADD float ptr [EBX]                ; 00518e68 | g_SamplePointArray[1].x | g_SamplePointArray[2].x
    FST float ptr [ESP + 0x60]          ; 00518e6a
    FDIV float ptr [0x006379dd]         ; 00518e6e | FLOAT_006379dd
    FLD float ptr [0x02f313f4]          ; 00518e74 | g_SamplePointArray[0].y
    FADD float ptr [EBX + 0x4]          ; 00518e7a | g_SamplePointArray[1].y | g_SamplePointArray[2].y
    FLD float ptr [0x02f313f8]          ; 00518e7d | g_SamplePointArray[0].z
    FXCH                                ; 00518e83
    FST float ptr [ESP + 0x64]          ; 00518e85
    FXCH                                ; 00518e89
    FADD float ptr [EBX + 0x8]          ; 00518e8b | g_SamplePointArray[1].z | g_SamplePointArray[2].z
    FXCH                                ; 00518e8e
    FLD float ptr [0x006379d9]          ; 00518e90 | FLOAT_006379d9
    FXCH                                ; 00518e96
    FMUL ST1                            ; 00518e98
    FXCH ST2                            ; 00518e9a
    FST float ptr [ESP + 0x68]          ; 00518e9c
    FMULP                               ; 00518ea0
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00518ea2
    MOV ESI,ECX                         ; 00518ea9
    ADD ECX,0xc                         ; 00518eab
    INC EAX                             ; 00518eae
    ADD ESI,0x2f313f0                   ; 00518eaf | g_SamplePointArray
    MOV dword ptr [ESP + 0xd4],EAX      ; 00518eb5
    LEA EAX,[ESP + 0x6c]                ; 00518ebc
    FXCH                                ; 00518ec0
    FSTP float ptr [ESP + 0x70]         ; 00518ec2
    FSTP float ptr [ESP + 0x74]         ; 00518ec6
    FSTP float ptr [ESP + 0x6c]         ; 00518eca
    CMP ESI,EAX                         ; 00518ece
    JZ 0x00518ee6                       ; 00518ed0
        ;   XREF to: 00518ee6 (CONDITIONAL_JUMP)  ; LAB_00518ee6
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00518ed2
    MOV dword ptr [ESI],EAX             ; 00518ed6 | g_SamplePointArray[2].x
    MOV EAX,dword ptr [ESP + 0x70]      ; 00518ed8
    MOV dword ptr [ESI + 0x4],EAX       ; 00518edc | g_SamplePointArray[2].y
    MOV EAX,dword ptr [ESP + 0x74]      ; 00518edf
    MOV dword ptr [ESI + 0x8],EAX       ; 00518ee3 | g_SamplePointArray[2].z
    MOV ESI,dword ptr [0x02f313ec]      ; 00518ee6 | g_SamplePointCount
        ;   Label: LAB_00518ee6
    INC EDX                             ; 00518eec
    ADD EBX,0xc                         ; 00518eed | g_SamplePointArray[2].x
    CMP EDX,ESI                         ; 00518ef0
    JL 0x00518e62                       ; 00518ef2
        ;   XREF to: 00518e62 (CONDITIONAL_JUMP)  ; LAB_00518e62
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00518ef8
        ;   Label: LAB_00518ef8
    MOV [0x02f313ec],EAX                ; 00518eff | g_SamplePointCount
    FLD float ptr [0x0067d398]          ; 00518f04 | g_SamplePointWeight
        ;   Label: LAB_00518f04
    FMUL float ptr [ESP + 0x2c]         ; 00518f0a
    FILD dword ptr [0x02f313ec]         ; 00518f0e | g_SamplePointCount
    FDIVP                               ; 00518f14
    MOV EAX,dword ptr [EBP + 0x14]      ; 00518f16
    MOV EDX,dword ptr [EAX + 0x34]      ; 00518f19
    PUSH EDX                            ; 00518f1c
    FSTP double ptr [ESP + 0x4]         ; 00518f1d
    CALL shape_meshlod.cpp_CLodMesh_computeSamplePointDistances_FUN_00519b50 ; 00518f21
        ;   XREF to: 00519b50 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_computeSamplePointDistances_FUN_00519b50(CLodMesh * this_ptr)
    MOV ECX,dword ptr [0x02f313ec]      ; 00518f26 | g_SamplePointCount
    ADD ESP,0x4                         ; 00518f2c
    TEST ECX,ECX                        ; 00518f2f
    JLE 0x00518f5a                      ; 00518f31
        ;   XREF to: 00518f5a (CONDITIONAL_JUMP)  ; LAB_00518f5a
    FLD double ptr [ESP + 0x18]         ; 00518f33
    FLD double ptr [ESP]                ; 00518f37
    LEA EDX,[ECX*0x8 + 0x0]             ; 00518f3a
    XOR EAX,EAX                         ; 00518f41
    FLD double ptr [EAX + 0x2f326b0]    ; 00518f43 | g_SampleDistances | g_SampleDistances[1]
        ;   Label: LAB_00518f43
    FMUL ST1                            ; 00518f49
    ADD EAX,0x8                         ; 00518f4b
    FADDP ST2,ST0                       ; 00518f4e
    CMP EAX,EDX                         ; 00518f50
    JL 0x00518f43                       ; 00518f52
        ;   XREF to: 00518f43 (CONDITIONAL_JUMP)  ; LAB_00518f43
    FSTP ST0                            ; 00518f54
    FSTP double ptr [ESP + 0x18]        ; 00518f56
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00518f5a
        ;   Label: LAB_00518f5a
    FLD double ptr [ESP + 0x18]         ; 00518f61
    FCOMP double ptr [EAX + 0x8]        ; 00518f65
    FNSTSW AX                           ; 00518f68
    SAHF                                ; 00518f6a
    JBE 0x00519240                      ; 00518f6b
        ;   XREF to: 00519240 (CONDITIONAL_JUMP)  ; LAB_00519240
    MOV EBX,dword ptr [ESP + 0xc4]      ; 00518f71
        ;   Label: LAB_00518f71
    INC EBX                             ; 00518f78
    MOV dword ptr [ESP + 0xc4],EBX      ; 00518f79
    CMP EBX,0x4                         ; 00518f80
    JLE 0x00518b7c                      ; 00518f83
        ;   XREF to: 00518b7c (CONDITIONAL_JUMP)  ; LAB_00518b7c
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00518f89
    IMUL EDX,dword ptr [EAX],0x4c4      ; 00518f90
    MOV EAX,dword ptr [EBP + 0x14]      ; 00518f96
    MOV EAX,dword ptr [EAX + 0x4]       ; 00518f99
    ADD EDX,EAX                         ; 00518f9c
    MOV EAX,dword ptr [ESP + 0x84]      ; 00518f9e
    MOV dword ptr [EDX],EAX             ; 00518fa5
    MOV EAX,dword ptr [ESP + 0x88]      ; 00518fa7
    MOV dword ptr [EDX + 0x4],EAX       ; 00518fae
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00518fb1
    MOV dword ptr [EDX + 0x8],EAX       ; 00518fb8
    MOV ESP,EBP                         ; 00518fbb
    POP EBP                             ; 00518fbd
    POP EDI                             ; 00518fbe
    POP ESI                             ; 00518fbf
    POP EBX                             ; 00518fc0
    RET                                 ; 00518fc1
    MOV EDX,dword ptr [ESP + 0x100]     ; 00518fc2
        ;   Label: LAB_00518fc2
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00518fc9
    MOV dword ptr [ESP + 0x10c],EDX     ; 00518fd0
    MOV dword ptr [ESP + 0x100],EAX     ; 00518fd7
    JMP 0x00518a20                      ; 00518fde
        ;   XREF to: 00518a20 (UNCONDITIONAL_JUMP)  ; LAB_00518a20
    CMP dword ptr [ESP + 0xec],0xc8     ; 00518fe3
        ;   Label: LAB_00518fe3
    JL 0x00519026                       ; 00518fee
        ;   XREF to: 00519026 (CONDITIONAL_JUMP)  ; LAB_00519026
    PUSH 0x637921                       ; 00518ff0 | = "Too many neighboring edges!"
    MOV EBX,dword ptr [0x00678a60]      ; 00518ff5 | g_CEditorToolsPtr
    PUSH EBX                            ; 00518ffb | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00518ffc
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00519001
    MOV ESI,0x63793d                    ; 00519004 | = "..\\shape\\meshlod.cpp"
    MOV EAX,0xbca                       ; 00519009
    PUSH 0x637952                       ; 0051900e | = "Too many neighboring edges!"
    MOV dword ptr [0x02f0ca48],ESI      ; 00519013 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00519019 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0051901e
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00519023
    MOV EAX,dword ptr [ESP + 0xf8]      ; 00519026
        ;   Label: LAB_00519026
    MOV EDX,dword ptr [ESP + 0x10c]     ; 0051902d
    CMP EDX,dword ptr [EAX]             ; 00519034
    JNZ 0x005190fc                      ; 00519036
        ;   XREF to: 005190fc (CONDITIONAL_JUMP)  ; LAB_005190fc
    MOV EAX,dword ptr [ESP + 0xf8]      ; 0051903c
    MOV EDX,dword ptr [ESP + 0xf0]      ; 00519043
    MOV EAX,dword ptr [EAX + 0x4]       ; 0051904a
    MOV dword ptr [EDX + 0x2f2a1b0],EAX ; 0051904d | g_MaxNeighborVerts
        ;   Label: LAB_0051904d
    MOV EBX,dword ptr [ESP + 0xf0]      ; 00519053
    MOV ESI,dword ptr [ESP + 0xec]      ; 0051905a
    MOV EAX,dword ptr [ESP + 0xf8]      ; 00519061
    XOR ECX,ECX                         ; 00519068
    ADD EBX,0x4                         ; 0051906a
    INC ESI                             ; 0051906d
    MOV dword ptr [ESP + 0x108],ECX     ; 0051906e
    MOV EDX,dword ptr [EAX + 0x24]      ; 00519075
    MOV dword ptr [ESP + 0xf0],EBX      ; 00519078
    MOV dword ptr [ESP + 0xec],ESI      ; 0051907f
    TEST EDX,EDX                        ; 00519086
    JLE 0x00518aa6                      ; 00519088
        ;   XREF to: 00518aa6 (CONDITIONAL_JUMP)  ; LAB_00518aa6
    MOV dword ptr [ESP + 0x104],EAX     ; 0051908e
    IMUL ESI,EDI,0x8c                   ; 00519095
    MOV EAX,dword ptr [ESP + 0x104]     ; 0051909b
        ;   Label: LAB_0051909b
    MOV EAX,dword ptr [EAX + 0x28]      ; 005190a2
    MOV dword ptr [ESP + 0xfc],EAX      ; 005190a5
    IMUL EAX,EAX,0x8c                   ; 005190ac
    MOV EBX,dword ptr [EBP + 0x14]      ; 005190b2
    MOV EBX,dword ptr [EBX + 0xc]       ; 005190b5
    ADD EBX,EAX                         ; 005190b8
    MOV EDX,dword ptr [0x02f33334]      ; 005190ba | g_LodGenerationStamp
    CMP EDX,dword ptr [EBX + 0x84]      ; 005190c0
    JNZ 0x00519111                      ; 005190c6
        ;   XREF to: 00519111 (CONDITIONAL_JUMP)  ; LAB_00519111
    MOV ECX,dword ptr [ESP + 0x104]     ; 005190c8
        ;   Label: LAB_005190c8
    MOV EBX,dword ptr [ESP + 0x108]     ; 005190cf
    MOV EDX,dword ptr [ESP + 0xf8]      ; 005190d6
    ADD ECX,0x4                         ; 005190dd
    INC EBX                             ; 005190e0
    MOV dword ptr [ESP + 0x104],ECX     ; 005190e1
    MOV ECX,dword ptr [EDX + 0x24]      ; 005190e8
    MOV dword ptr [ESP + 0x108],EBX     ; 005190eb
    CMP EBX,ECX                         ; 005190f2
    JGE 0x00518aa6                      ; 005190f4
        ;   XREF to: 00518aa6 (CONDITIONAL_JUMP)  ; LAB_00518aa6
    JMP 0x0051909b                      ; 005190fa
        ;   XREF to: 0051909b (UNCONDITIONAL_JUMP)  ; LAB_0051909b
    MOV EAX,dword ptr [ESP + 0xf8]      ; 005190fc
        ;   Label: LAB_005190fc
    MOV EDX,dword ptr [ESP + 0xf0]      ; 00519103
    MOV EAX,dword ptr [EAX]             ; 0051910a
    JMP 0x0051904d                      ; 0051910c
        ;   XREF to: 0051904d (UNCONDITIONAL_JUMP)  ; LAB_0051904d
    MOV EAX,[0x02f33338]                ; 00519111 | g_LodTempFaceStamp
        ;   Label: LAB_00519111
    MOV dword ptr [EBX + 0x88],EAX      ; 00519116
    MOV ECX,dword ptr [ESP + 0x100]     ; 0051911c
    MOV EAX,dword ptr [EBX + 0x10]      ; 00519123
    MOV dword ptr [EBX + 0x84],EDX      ; 00519126
    CMP EAX,ECX                         ; 0051912c
    JZ 0x005190c8                       ; 0051912e
        ;   XREF to: 005190c8 (CONDITIONAL_JUMP)  ; LAB_005190c8
    CMP ECX,dword ptr [EBX + 0x14]      ; 00519130
    JZ 0x005190c8                       ; 00519133
        ;   XREF to: 005190c8 (CONDITIONAL_JUMP)  ; LAB_005190c8
    CMP ECX,dword ptr [EBX + 0x18]      ; 00519135
    JZ 0x005190c8                       ; 00519138
        ;   XREF to: 005190c8 (CONDITIONAL_JUMP)  ; LAB_005190c8
    CMP EDI,0xc8                        ; 0051913a
    JL 0x00519178                       ; 00519140
        ;   XREF to: 00519178 (CONDITIONAL_JUMP)  ; LAB_00519178
    PUSH 0x63796e                       ; 00519142 | = "Too many neighboring faces!"
    MOV EAX,[0x00678a60]                ; 00519147 | g_CEditorToolsPtr
    PUSH EAX                            ; 0051914c | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0051914d
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00519152
    MOV EDX,0x63798a                    ; 00519155 | = "..\\shape\\meshlod.cpp"
    MOV ECX,0xbf4                       ; 0051915a
    PUSH 0x63799f                       ; 0051915f | = "Too many neighboring faces!"
    MOV dword ptr [0x02f0ca48],EDX      ; 00519164 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0051916a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00519170
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00519175
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00519178
        ;   Label: LAB_00519178
    MOV dword ptr [ESI + 0x2f2a4e0],EAX ; 0051917f | g_TempNeighborFaces[0].vertex_idx_0
    MOV EDX,dword ptr [ESP + 0x10c]     ; 00519185
    CMP EDX,dword ptr [EBX + 0x10]      ; 0051918c
    JNZ 0x005191bc                      ; 0051918f
        ;   XREF to: 005191bc (CONDITIONAL_JUMP)  ; LAB_005191bc
    MOV EAX,dword ptr [EBX + 0x14]      ; 00519191
    MOV dword ptr [ESI + 0x2f2a4e4],EAX ; 00519194 | g_TempNeighborFaces[0].vertex_idx_1
    MOV EAX,dword ptr [EBX + 0x18]      ; 0051919a
    MOV dword ptr [ESI + 0x2f2a4e8],EAX ; 0051919d | g_TempNeighborFaces[0].vertex_idx_2
        ;   Label: LAB_0051919d
    ADD ESI,0x8c                        ; 005191a3
        ;   Label: LAB_005191a3
    MOV EAX,dword ptr [ESP + 0xfc]      ; 005191a9
    INC EDI                             ; 005191b0
    MOV dword ptr [ESI + 0x2f2a4c8],EAX ; 005191b1 | g_TempNeighborFaces[0].visited_stamp
    JMP 0x005190c8                      ; 005191b7
        ;   XREF to: 005190c8 (UNCONDITIONAL_JUMP)  ; LAB_005190c8
    CMP EDX,dword ptr [EBX + 0x14]      ; 005191bc
        ;   Label: LAB_005191bc
    JNZ 0x005191cf                      ; 005191bf
        ;   XREF to: 005191cf (CONDITIONAL_JUMP)  ; LAB_005191cf
    MOV EAX,dword ptr [EBX + 0x18]      ; 005191c1
    MOV dword ptr [ESI + 0x2f2a4e4],EAX ; 005191c4 | g_TempNeighborFaces[0].vertex_idx_1
    MOV EAX,dword ptr [EBX + 0x10]      ; 005191ca
    JMP 0x0051919d                      ; 005191cd
        ;   XREF to: 0051919d (UNCONDITIONAL_JUMP)  ; LAB_0051919d
    CMP EDX,dword ptr [EBX + 0x18]      ; 005191cf
        ;   Label: LAB_005191cf
    JNZ 0x005191e2                      ; 005191d2
        ;   XREF to: 005191e2 (CONDITIONAL_JUMP)  ; LAB_005191e2
    MOV EAX,dword ptr [EBX + 0x10]      ; 005191d4
    MOV dword ptr [ESI + 0x2f2a4e4],EAX ; 005191d7 | g_TempNeighborFaces[0].vertex_idx_1
    MOV EAX,dword ptr [EBX + 0x14]      ; 005191dd
    JMP 0x0051919d                      ; 005191e0
        ;   XREF to: 0051919d (UNCONDITIONAL_JUMP)  ; LAB_0051919d
    MOV ECX,0x6379bb                    ; 005191e2 | = "..\\shape\\meshlod.cpp"
        ;   Label: LAB_005191e2
    MOV EBX,0xc06                       ; 005191e7
    PUSH 0x6379d0                       ; 005191ec | = "Bug!"
    MOV dword ptr [0x02f0ca48],ECX      ; 005191f1 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 005191f7 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005191fd
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00519202
    JMP 0x005191a3                      ; 00519205
        ;   XREF to: 005191a3 (UNCONDITIONAL_JUMP)  ; LAB_005191a3
    CMP dword ptr [ESP + 0xc4],0x0      ; 00519207
        ;   Label: LAB_00519207
    JZ 0x0051921f                       ; 0051920f
        ;   XREF to: 0051921f (CONDITIONAL_JUMP)  ; LAB_0051921f
    CMP dword ptr [ESP + 0xa4],0x0      ; 00519211
    JNZ 0x00518f71                      ; 00519219
        ;   XREF to: 00518f71 (CONDITIONAL_JUMP)  ; LAB_00518f71
    CMP dword ptr [ESP + 0xc4],0x4      ; 0051921f
        ;   Label: LAB_0051921f
    JZ 0x00518b89                       ; 00519227
        ;   XREF to: 00518b89 (CONDITIONAL_JUMP)  ; LAB_00518b89
    CMP dword ptr [ESP + 0xa8],0x0      ; 0051922d
    JNZ 0x00518f71                      ; 00519235
        ;   XREF to: 00518f71 (CONDITIONAL_JUMP)  ; LAB_00518f71
    JMP 0x00518b89                      ; 0051923b
        ;   XREF to: 00518b89 (UNCONDITIONAL_JUMP)  ; LAB_00518b89
    XOR ESI,ESI                         ; 00519240
        ;   Label: LAB_00519240
    TEST EDI,EDI                        ; 00519242
    JLE 0x005192af                      ; 00519244
        ;   XREF to: 005192af (CONDITIONAL_JUMP)  ; LAB_005192af
    MOV EBX,dword ptr [ESP + 0xac]      ; 00519246 | g_TempNeighborFaces[0].normal.x
    IMUL EAX,ESI,0x8c                   ; 0051924d
        ;   Label: LAB_0051924d
    MOV dword ptr [ESP + 0x110],EAX     ; 00519253
    MOV EAX,0x2f2a4d0                   ; 0051925a | g_TempNeighborFaces
    ADD EAX,dword ptr [ESP + 0x110]     ; 0051925f | g_TempNeighborFaces[1].attribute_indices[0]
    PUSH EAX                            ; 00519266 | g_TempNeighborFaces[1].attribute_indices[0]
    MOV ECX,dword ptr [EBP + 0x14]      ; 00519267
    PUSH ECX                            ; 0051926a
    CALL shape_meshlod.cpp_CLodMesh_validateFace_FUN_00519830 ; 0051926b
        ;   XREF to: 00519830 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodMesh_validateFace_FUN_00519830(CLodMesh * this_ptr, CLodFace * face)
    ADD ESP,0x8                         ; 00519270
    MOV EAX,dword ptr [ESP + 0x110]     ; 00519273
    IMUL EAX,dword ptr [EAX + 0x2f2a554],0x8c ; 0051927a | g_TempNeighborFaces[0].visited_stamp
    MOV EDX,dword ptr [EBP + 0x14]      ; 00519284
    MOV EDX,dword ptr [EDX + 0xc]       ; 00519287
    FLD float ptr [EBX + 0x4]           ; 0051928a | g_TempNeighborFaces[0].normal.y
    FMUL float ptr [EDX + EAX*0x1 + 0x48] ; 0051928d
    FLD float ptr [EBX]                 ; 00519291 | g_TempNeighborFaces[0].normal.x
    FMUL float ptr [EDX + EAX*0x1 + 0x44] ; 00519293
    FADDP                               ; 00519297
    FLD float ptr [EBX + 0x8]           ; 00519299 | g_TempNeighborFaces[0].normal.z
    FMUL float ptr [EDX + EAX*0x1 + 0x4c] ; 0051929c
    FADDP                               ; 005192a0
    FLDZ                                ; 005192a2
    FCOMPP                              ; 005192a4
    FNSTSW AX                           ; 005192a6
    SAHF                                ; 005192a8
    JBE 0x005193ca                      ; 005192a9
        ;   XREF to: 005193ca (CONDITIONAL_JUMP)  ; LAB_005193ca
    CMP ESI,EDI                         ; 005192af
        ;   Label: LAB_005192af
    JL 0x00518f71                       ; 005192b1
        ;   XREF to: 00518f71 (CONDITIONAL_JUMP)  ; LAB_00518f71
    MOV EAX,dword ptr [EBP + 0x14]      ; 005192b7
    CMP dword ptr [EAX + 0x5c],0x0      ; 005192ba
    JLE 0x0051938f                      ; 005192be
        ;   XREF to: 0051938f (CONDITIONAL_JUMP)  ; LAB_0051938f
    FLD float ptr [0x0067d398]          ; 005192c4 | g_SamplePointWeight
    FLD1                                ; 005192ca
    FCOMPP                              ; 005192cc
    FNSTSW AX                           ; 005192ce
    SAHF                                ; 005192d0
    JBE 0x0051938f                      ; 005192d1
        ;   XREF to: 0051938f (CONDITIONAL_JUMP)  ; LAB_0051938f
    XOR EBX,EBX                         ; 005192d7
    MOV EAX,dword ptr [EBP + 0x14]      ; 005192d9
    MOV dword ptr [ESP + 0x28],EBX      ; 005192dc
    MOV dword ptr [ESP + 0xe8],EBX      ; 005192e0
    MOV dword ptr [ESP + 0x8],EBX       ; 005192e7
    MOV ECX,dword ptr [EAX + 0x5c]      ; 005192eb
    MOV dword ptr [ESP + 0xc],EBX       ; 005192ee
    TEST ECX,ECX                        ; 005192f2
    JLE 0x0051935d                      ; 005192f4
        ;   XREF to: 0051935d (CONDITIONAL_JUMP)  ; LAB_0051935d
    MOV dword ptr [ESP + 0xdc],EBX      ; 005192f6
    MOV EAX,dword ptr [EBP + 0x14]      ; 005192fd
        ;   Label: LAB_005192fd
    MOV EDX,dword ptr [ESP + 0xdc]      ; 00519300
    MOV EAX,dword ptr [EAX + 0x60]      ; 00519307
    ADD EDX,EAX                         ; 0051930a
    MOV dword ptr [ESP + 0xf4],EDX      ; 0051930c
    IMUL EAX,dword ptr [EDX + 0xc],0x8c ; 00519313
    MOV EDX,dword ptr [EBP + 0x14]      ; 0051931a
    MOV EDX,dword ptr [EDX + 0xc]       ; 0051931d
    MOV ECX,dword ptr [0x02f33338]      ; 00519320 | g_LodTempFaceStamp
    CMP ECX,dword ptr [EDX + EAX*0x1 + 0x88] ; 00519326
    JZ 0x005193de                       ; 0051932d
        ;   XREF to: 005193de (CONDITIONAL_JUMP)  ; LAB_005193de
    MOV EBX,dword ptr [ESP + 0xdc]      ; 00519333
        ;   Label: LAB_00519333
    MOV ESI,dword ptr [ESP + 0xe8]      ; 0051933a
    MOV EDX,dword ptr [EBP + 0x14]      ; 00519341
    ADD EBX,0x1c                        ; 00519344
    INC ESI                             ; 00519347
    MOV ECX,dword ptr [EDX + 0x5c]      ; 00519348
    MOV dword ptr [ESP + 0xdc],EBX      ; 0051934b
    MOV dword ptr [ESP + 0xe8],ESI      ; 00519352
    CMP ESI,ECX                         ; 00519359
    JL 0x005192fd                       ; 0051935b
        ;   XREF to: 005192fd (CONDITIONAL_JUMP)  ; LAB_005192fd
    MOV EBX,dword ptr [ESP + 0x28]      ; 0051935d
        ;   Label: LAB_0051935d
    TEST EBX,EBX                        ; 00519361
    JLE 0x0051938f                      ; 00519363
        ;   XREF to: 0051938f (CONDITIONAL_JUMP)  ; LAB_0051938f
    FLD float ptr [0x0067d398]          ; 00519365 | g_SamplePointWeight
    FLD1                                ; 0051936b
    FSUBRP                              ; 0051936d
    FMUL double ptr [ESP + 0x8]         ; 0051936f
    FMUL float ptr [ESP + 0x2c]         ; 00519373
    MOV dword ptr [ESP + 0x110],EBX     ; 00519377
    FILD dword ptr [ESP + 0x110]        ; 0051937e
    FDIVP                               ; 00519385
    FADD double ptr [ESP + 0x18]        ; 00519387
    FSTP double ptr [ESP + 0x18]        ; 0051938b
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0051938f
        ;   Label: LAB_0051938f
    FLD double ptr [ESP + 0x18]         ; 00519396
    FCOMP double ptr [EAX + 0x8]        ; 0051939a
    FNSTSW AX                           ; 0051939d
    SAHF                                ; 0051939f
    JNC 0x00518f71                      ; 005193a0
        ;   XREF to: 00518f71 (CONDITIONAL_JUMP)  ; LAB_00518f71
    MOV EDX,dword ptr [ESP + 0xd0]      ; 005193a6
    MOV EAX,dword ptr [ESP + 0x18]      ; 005193ad
    MOV dword ptr [EDX + 0x8],EAX       ; 005193b1
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005193b4
    MOV dword ptr [EDX + 0xc],EAX       ; 005193b8
    MOV EAX,dword ptr [ESP + 0xc0]      ; 005193bb
    MOV dword ptr [EDX + 0x10],EAX      ; 005193c2
    JMP 0x00518f71                      ; 005193c5
        ;   XREF to: 00518f71 (UNCONDITIONAL_JUMP)  ; LAB_00518f71
    INC ESI                             ; 005193ca
        ;   Label: LAB_005193ca
    ADD EBX,0x8c                        ; 005193cb | g_TempNeighborFaces[1].normal.x
    CMP ESI,EDI                         ; 005193d1
    JL 0x0051924d                       ; 005193d3
        ;   XREF to: 0051924d (CONDITIONAL_JUMP)  ; LAB_0051924d
    JMP 0x005192af                      ; 005193d9
        ;   XREF to: 005192af (UNCONDITIONAL_JUMP)  ; LAB_005192af
    MOV EBX,0x39a08ce9                  ; 005193de
        ;   Label: LAB_005193de
    MOV ESI,0x46293e59                  ; 005193e3
    MOV dword ptr [ESP + 0x10],EBX      ; 005193e8
    MOV dword ptr [ESP + 0x14],ESI      ; 005193ec
    XOR EBX,EBX                         ; 005193f0
    TEST EDI,EDI                        ; 005193f2
    JLE 0x0051944d                      ; 005193f4
        ;   XREF to: 0051944d (CONDITIONAL_JUMP)  ; LAB_0051944d
    MOV ESI,0x2f2a4d0                   ; 005193f6 | g_TempNeighborFaces
    PUSH ESI                            ; 005193fb | g_TempNeighborFaces | g_TempNeighborFaces[1].attribute_indices[0]
        ;   Label: LAB_005193fb
    MOV EDX,dword ptr [ESP + 0xf8]      ; 005193fc
    PUSH EDX                            ; 00519403
    MOV ECX,dword ptr [EBP + 0x14]      ; 00519404
    PUSH ECX                            ; 00519407
    CALL shape_meshlod.cpp_CLodMesh_computePointToFaceDistance_FUN_0051a400 ; 00519408
        ;   XREF to: 0051a400 (UNCONDITIONAL_CALL)  ; double shape_meshlod.cpp_CLodMesh_computePointToFaceDistance_FUN_0051a400(CLodMesh * this_ptr, SLodSamplePoint * sample_point, CLodFace * face)
    MOV dword ptr [ESP + 0xa8],EAX      ; 0051940d
    MOV dword ptr [ESP + 0xac],EDX      ; 00519414
    FLD double ptr [ESP + 0xa8]         ; 0051941b
    ADD ESP,0xc                         ; 00519422
    FST double ptr [ESP + 0x20]         ; 00519425
    FCOMP double ptr [ESP + 0x10]       ; 00519429
    FNSTSW AX                           ; 0051942d
    SAHF                                ; 0051942f
    JNC 0x00519442                      ; 00519430
        ;   XREF to: 00519442 (CONDITIONAL_JUMP)  ; LAB_00519442
    MOV EAX,dword ptr [ESP + 0x20]      ; 00519432
    MOV dword ptr [ESP + 0x10],EAX      ; 00519436
    MOV EAX,dword ptr [ESP + 0x24]      ; 0051943a
    MOV dword ptr [ESP + 0x14],EAX      ; 0051943e
    INC EBX                             ; 00519442
        ;   Label: LAB_00519442
    ADD ESI,0x8c                        ; 00519443
    CMP EBX,EDI                         ; 00519449
    JL 0x005193fb                       ; 0051944b
        ;   XREF to: 005193fb (CONDITIONAL_JUMP)  ; LAB_005193fb
    MOV EAX,dword ptr [ESP + 0xf4]      ; 0051944d
        ;   Label: LAB_0051944d
    FLD float ptr [EAX + 0x18]          ; 00519454
    MOV EAX,dword ptr [ESP + 0x28]      ; 00519457
    FMUL double ptr [ESP + 0x10]        ; 0051945b
    INC EAX                             ; 0051945f
    FADD double ptr [ESP + 0x8]         ; 00519460
    MOV dword ptr [ESP + 0x28],EAX      ; 00519464
    FSTP double ptr [ESP + 0x8]         ; 00519468
    JMP 0x00519333                      ; 0051946c
        ;   XREF to: 00519333 (UNCONDITIONAL_JUMP)  ; LAB_00519333

