; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcube_cpp_CDemonCube_loadGeometryFromTriangleList_FUN_004570a0(CDemonCube *this_ptr,void *triangle_data,int triangle_count,CVector3f *min_bounds,CVector3f *max_bounds,uchar *ground_types,uint *voxel_data)
;
; Parameters:
; CDemonCube *     Stack[0x4]:4   this_ptr
; void *           Stack[0x8]:4   triangle_data
; int              Stack[0xc]:4   triangle_count
; CVector3f *      Stack[0x10]:4   min_bounds
; CVector3f *      Stack[0x14]:4   max_bounds
; uchar *          Stack[0x18]:4   ground_types
; uint *           Stack[0x1c]:4   voxel_data
; Local Variables:
; undefined1       Stack[-0x120]:1  local_120
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0 at 00494b6f
;
; Referenced Globals:
;   TerminatedCString s_Too_many_d_d_0061a7ba
;   TerminatedCString s_core_dcube_cpp_0061a7cb
;   int g_VertexCount
;   SVertexData[20000] g_LoadedVertices
;   undefined4 g_LoadedVertices[0].vertex.y
;   undefined4 g_LoadedVertices[0].vertex.z
;   undefined4 g_LoadedVertices[1].vertex.x
;   undefined4 g_LoadedVertices[1].vertex.y
;   undefined4 g_LoadedVertices[1].vertex.z
;   undefined4 g_LoadedVertices[2].vertex.x
;   undefined4 g_LoadedVertices[2].vertex.y
;   undefined4 g_LoadedVertices[2].vertex.z
;   undefined4 g_LoadedVertices[3].vertex.x
;   undefined4 g_LoadedVertices[3].vertex.y
;   undefined4 g_LoadedVertices[3].vertex.z
;   ... and 26 more
;
; Called Functions:
;   core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_00456840
;   core_dcube.cpp_CDemonCubeTriangle_init_FUN_00455430
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   shape_design.c_calculateVertexNormals_FUN_0045be40
;   shape_design.c_vertexReducer_FUN_00467850
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004570a0
        ;   Label: core_dcube.cpp_CDemonCube_loadGeometryFromTriangleList_FUN_004570a0
    PUSH ESI                            ; 004570a1
    PUSH EDI                            ; 004570a2
    PUSH EBP                            ; 004570a3
    SUB ESP,0x110                       ; 004570a4
    MOV ESI,dword ptr [ESP + 0x124]     ; 004570aa
    MOV EDX,dword ptr [ESP + 0x130]     ; 004570b1
    MOV ECX,dword ptr [ESP + 0x134]     ; 004570b8
    LEA EAX,[ESI + 0x8]                 ; 004570bf
    CMP EAX,EDX                         ; 004570c2
    JNZ 0x004573e9                      ; 004570c4
        ;   XREF to: 004573e9 (CONDITIONAL_JUMP)  ; LAB_004573e9
    LEA EAX,[ESI + 0x14]                ; 004570ca
        ;   Label: LAB_004570ca
    CMP EAX,ECX                         ; 004570cd
    JZ 0x004570e1                       ; 004570cf
        ;   XREF to: 004570e1 (CONDITIONAL_JUMP)  ; LAB_004570e1
    MOV EDX,dword ptr [ECX]             ; 004570d1
    MOV dword ptr [EAX],EDX             ; 004570d3
    MOV EDX,dword ptr [ECX + 0x4]       ; 004570d5
    MOV dword ptr [EAX + 0x4],EDX       ; 004570d8
    MOV EDX,dword ptr [ECX + 0x8]       ; 004570db
    MOV dword ptr [EAX + 0x8],EDX       ; 004570de
    MOV EDX,dword ptr [ESP + 0x12c]     ; 004570e1
        ;   Label: LAB_004570e1
    TEST EDX,EDX                        ; 004570e8
    JZ 0x004573de                       ; 004570ea
        ;   XREF to: 004573de (CONDITIONAL_JUMP)  ; LAB_004573de
    LEA EAX,[EDX*0x4 + 0x0]             ; 004570f0
    SUB EAX,EDX                         ; 004570f7
    MOV dword ptr [0x016e990c],EDX      ; 004570f9 | g_PolygonCount
    MOV [0x01626408],EAX                ; 004570ff | g_VertexCount
    CMP EAX,0x4e20                      ; 00457104
    JLE 0x004573fe                      ; 00457109
        ;   XREF to: 004573fe (CONDITIONAL_JUMP)  ; LAB_004573fe
    MOV EDI,dword ptr [0x016e990c]      ; 0045710f | g_PolygonCount
        ;   Label: LAB_0045710f
    PUSH EDI                            ; 00457115
    MOV EBP,dword ptr [0x01626408]      ; 00457116 | g_VertexCount
    PUSH EBP                            ; 0045711c
    PUSH 0x61a7ba                       ; 0045711d | = "Too many! %d, %d"
    LEA EAX,[ESP + 0xc]                 ; 00457122
    PUSH EAX                            ; 00457126
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00457127
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,0x61a7cb                    ; 0045712c | = "..\\core\\dcube.cpp"
    ADD ESP,0x10                        ; 00457131
    MOV [0x02f0ca48],EAX                ; 00457134 | g_CurrentFilename
    MOV EAX,ESP                         ; 00457139
    MOV EDX,0x716                       ; 0045713b
    PUSH EAX                            ; 00457140
    MOV dword ptr [0x02f0ca4c],EDX      ; 00457141 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00457147
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0045714c
    MOV ECX,dword ptr [ESP + 0x12c]     ; 0045714f
        ;   Label: LAB_0045714f
    XOR EBX,EBX                         ; 00457156
    TEST ECX,ECX                        ; 00457158
    JLE 0x004572a0                      ; 0045715a
        ;   XREF to: 004572a0 (CONDITIONAL_JUMP)  ; LAB_004572a0
    MOV EDX,0x14                        ; 00457160
    MOV ECX,dword ptr [ESP + 0x128]     ; 00457165
    XOR EAX,EAX                         ; 0045716c
    XOR EDI,EDI                         ; 0045716e
    ADD ECX,0xc                         ; 00457170
    IMUL EBP,EBX,0x38                   ; 00457173
        ;   Label: LAB_00457173
    MOV dword ptr [ESP + 0x104],EBP     ; 00457176
    MOV EBP,dword ptr [ESP + 0x128]     ; 0045717d
    ADD EBP,dword ptr [ESP + 0x104]     ; 00457184
    ADD EAX,0x184                       ; 0045718b
    FLD float ptr [EBP]                 ; 00457190
    FSTP float ptr [EDI + 0x162640c]    ; 00457193 | g_LoadedVertices | g_LoadedVertices[3].vertex.x
    FLD float ptr [EBP + 0x4]           ; 00457199
    FSTP float ptr [EDI + 0x1626410]    ; 0045719c | g_LoadedVertices[0].vertex.y | g_LoadedVertices[3].vertex.y
    FLD float ptr [EBP + 0x8]           ; 004571a2
    FSTP float ptr [EDI + 0x1626414]    ; 004571a5 | g_LoadedVertices[0].vertex.z | g_LoadedVertices[3].vertex.z
    LEA EBP,[EBX + EBX*0x2]             ; 004571ab
    FLD float ptr [ECX]                 ; 004571ae
    FSTP float ptr [EDX + 0x162640c]    ; 004571b0 | g_LoadedVertices[1].vertex.x | g_LoadedVertices[4].vertex.x
    MOV dword ptr [ESP + 0x104],EBP     ; 004571b6
    FLD float ptr [ECX + 0x4]           ; 004571bd
    FSTP float ptr [EDX + 0x1626410]    ; 004571c0 | g_LoadedVertices[1].vertex.y | g_LoadedVertices[4].vertex.y
    INC EBP                             ; 004571c6
    FLD float ptr [ECX + 0x8]           ; 004571c7
    FSTP float ptr [EDX + 0x1626414]    ; 004571ca | g_LoadedVertices[1].vertex.z | g_LoadedVertices[4].vertex.z
    MOV dword ptr [ESP + 0x108],EBP     ; 004571d0
    MOV EBP,dword ptr [ECX + 0xc]       ; 004571d7
    MOV dword ptr [EDX + 0x1626420],EBP ; 004571da | g_LoadedVertices[2].vertex.x | g_LoadedVertices[5].vertex.x
    MOV EBP,dword ptr [ESP + 0x104]     ; 004571e0
    FLD float ptr [ECX + 0x10]          ; 004571e7
    FSTP float ptr [EDX + 0x1626424]    ; 004571ea | g_LoadedVertices[2].vertex.y | g_LoadedVertices[5].vertex.y
    ADD EBP,0x2                         ; 004571f0
    FLD float ptr [ECX + 0x14]          ; 004571f3
    MOV dword ptr [ESP + 0x10c],EBP     ; 004571f6
    MOV byte ptr [EAX + 0x16e9790],0x0  ; 004571fd | g_ModelPolygonData[0].texture_name[0]
    MOV dword ptr [EAX + 0x16e9830],0x3 ; 00457204 | g_ModelPolygonData[0].vertex_indices_count
    MOV dword ptr [EAX + 0x16e978c],0x1 ; 0045720e | g_ModelPolygonData
    MOV EBP,dword ptr [ESP + 0x104]     ; 00457218
    MOV dword ptr [EAX + 0x16e9844],EBP ; 0045721f | g_ModelPolygonData[0].vertex_indices[0]
    MOV EBP,dword ptr [ESP + 0x108]     ; 00457225
    MOV dword ptr [EAX + 0x16e9848],EBP ; 0045722c | g_ModelPolygonData[0].vertex_indices[1]
    MOV EBP,dword ptr [ESP + 0x10c]     ; 00457232
    MOV dword ptr [EAX + 0x16e984c],EBP ; 00457239 | g_ModelPolygonData[0].vertex_indices[2]
    XOR EBP,EBP                         ; 0045723f
    MOV dword ptr [EAX + 0x16e9884],EBP ; 00457241 | g_ModelPolygonData[0].uv_u[0]
    MOV dword ptr [EAX + 0x16e98c4],EBP ; 00457247 | g_ModelPolygonData[0].uv_v[0]
    ADD EDX,0x3c                        ; 0045724d
    MOV dword ptr [EAX + 0x16e9888],EBP ; 00457250 | g_ModelPolygonData[0].uv_u[1]
    ADD ECX,0x38                        ; 00457256
    MOV dword ptr [EAX + 0x16e98c8],EBP ; 00457259 | g_ModelPolygonData[0].uv_v[1]
    ADD EDI,0x3c                        ; 0045725f
    MOV dword ptr [EAX + 0x16e988c],EBP ; 00457262 | g_ModelPolygonData[0].uv_u[2]
    INC EBX                             ; 00457268
    MOV dword ptr [EAX + 0x16e98cc],EBP ; 00457269 | g_ModelPolygonData[0].uv_v[2]
    FSTP float ptr [EDX + 0x16263ec]    ; 0045726f | g_LoadedVertices[2].vertex.z | g_LoadedVertices[5].vertex.z
    MOV dword ptr [EAX + 0x16e9904],EBP ; 00457275 | g_ModelPolygonData[0].part_assignment
    MOV EBP,dword ptr [ESP + 0x12c]     ; 0045727b
    MOV byte ptr [EAX + 0x16e97e0],0x0  ; 00457282 | g_ModelPolygonData[0].lightmap_name[0]
    CMP EBX,EBP                         ; 00457289
    JL 0x00457173                       ; 0045728b
        ;   XREF to: 00457173 (CONDITIONAL_JUMP)  ; LAB_00457173
    LEA EAX,[EAX]                       ; 00457291
    LEA EDX,[EDX]                       ; 00457297
    LEA EAX,[EAX]                       ; 0045729d
    CALL shape_design.c_calculateVertexNormals_FUN_0045be40 ; 004572a0
        ;   XREF to: 0045be40 (UNCONDITIONAL_CALL)  ; void shape_design.c_calculateVertexNormals_FUN_0045be40()
        ;   Label: LAB_004572a0
    PUSH -0x1                           ; 004572a5
    PUSH 0xbf800000                     ; 004572a7
    PUSH 0x3c23d70a                     ; 004572ac
    CALL shape_design.c_vertexReducer_FUN_00467850 ; 004572b1
        ;   XREF to: 00467850 (UNCONDITIONAL_CALL)  ; void shape_design.c_vertexReducer_FUN_00467850(float tolerance, float angle_tolerance, int ui_mode)
    MOV EAX,[0x01626408]                ; 004572b6 | g_VertexCount
    MOV dword ptr [ESI + 0x20],EAX      ; 004572bb
    MOV EAX,[0x016e990c]                ; 004572be | g_PolygonCount
    ADD ESP,0xc                         ; 004572c3
    MOV dword ptr [ESI + 0x28],EAX      ; 004572c6
    TEST EAX,EAX                        ; 004572c9
    JZ 0x0045740f                       ; 004572cb
        ;   XREF to: 0045740f (CONDITIONAL_JUMP)  ; LAB_0045740f
    CMP dword ptr [ESI + 0x20],0x0      ; 004572d1
    JZ 0x0045740f                       ; 004572d5
        ;   XREF to: 0045740f (CONDITIONAL_JUMP)  ; LAB_0045740f
    PUSH ESI                            ; 004572db
    CALL core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_00456840 ; 004572dc
        ;   XREF to: 00456840 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_00456840(CDemonCube * this_ptr)
    ADD ESP,0x4                         ; 004572e1
    MOV EBX,dword ptr [ESI + 0x20]      ; 004572e4
    XOR ECX,ECX                         ; 004572e7
    TEST EBX,EBX                        ; 004572e9
    JLE 0x00457330                      ; 004572eb
        ;   XREF to: 00457330 (CONDITIONAL_JUMP)  ; LAB_00457330
    XOR EDX,EDX                         ; 004572ed
    XOR EAX,EAX                         ; 004572ef
    ADD EAX,0xc                         ; 004572f1
        ;   Label: LAB_004572f1
    MOV EBX,dword ptr [ESI + 0x24]      ; 004572f4
    FLD float ptr [EDX + 0x162640c]     ; 004572f7 | g_LoadedVertices | g_LoadedVertices[1].vertex.x
    INC ECX                             ; 004572fd
    FSTP float ptr [EBX + EAX*0x1 + -0xc] ; 004572fe
    MOV EBX,dword ptr [ESI + 0x24]      ; 00457302
    MOV EDI,dword ptr [EDX + 0x1626410] ; 00457305 | g_LoadedVertices[0].vertex.y | g_LoadedVertices[1].vertex.y
    MOV dword ptr [EBX + EAX*0x1 + -0x8],EDI ; 0045730b
    MOV EBX,dword ptr [ESI + 0x24]      ; 0045730f
    MOV EDI,dword ptr [EDX + 0x1626414] ; 00457312 | g_LoadedVertices[0].vertex.z | g_LoadedVertices[1].vertex.z
    MOV dword ptr [EBX + EAX*0x1 + -0x4],EDI ; 00457318
    MOV EDI,dword ptr [ESI + 0x20]      ; 0045731c
    ADD EDX,0x14                        ; 0045731f
    CMP ECX,EDI                         ; 00457322
    JL 0x004572f1                       ; 00457324
        ;   XREF to: 004572f1 (CONDITIONAL_JUMP)  ; LAB_004572f1
    LEA EAX,[EAX]                       ; 00457326
    LEA EDX,[EDX]                       ; 0045732c
    MOV EBP,dword ptr [ESI + 0x28]      ; 00457330
        ;   Label: LAB_00457330
    XOR EBX,EBX                         ; 00457333
    TEST EBP,EBP                        ; 00457335
    JLE 0x004573c0                      ; 00457337
        ;   XREF to: 004573c0 (CONDITIONAL_JUMP)  ; LAB_004573c0
    MOV EAX,dword ptr [ESP + 0x138]     ; 0045733d
    XOR EBP,EBP                         ; 00457344
    XOR EDI,EDI                         ; 00457346
    MOV dword ptr [ESP + 0x100],EAX     ; 00457348
    IMUL EDX,dword ptr [EDI + 0x16e99d0],0xc ; 0045734f | g_ModelPolygonData[0].vertex_indices[2] | g_ModelPolygonData[1].vertex_indices[2]
        ;   Label: LAB_0045734f
    MOV EAX,dword ptr [ESI + 0x24]      ; 00457356
    ADD EDX,EAX                         ; 00457359
    MOV ECX,dword ptr [EDI + 0x16e99cc] ; 0045735b | g_ModelPolygonData[0].vertex_indices[1] | g_ModelPolygonData[1].vertex_indices[1]
    PUSH EDX                            ; 00457361
    IMUL EDX,ECX,0xc                    ; 00457362
    ADD EDX,EAX                         ; 00457365
    MOV ECX,dword ptr [EDI + 0x16e99c8] ; 00457367 | g_ModelPolygonData[0].vertex_indices[0] | g_ModelPolygonData[1].vertex_indices[0]
    PUSH EDX                            ; 0045736d
    IMUL EDX,ECX,0xc                    ; 0045736e
    ADD EAX,EDX                         ; 00457371
    PUSH EAX                            ; 00457373
    MOV EAX,dword ptr [ESI + 0x2c]      ; 00457374
    ADD EAX,EBP                         ; 00457377
    PUSH EAX                            ; 00457379
    CALL core_dcube.cpp_CDemonCubeTriangle_init_FUN_00455430 ; 0045737a
        ;   XREF to: 00455430 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_CDemonCubeTriangle_init_FUN_00455430(CDemonCubeTriangle * this_ptr, CVector3f * vertex0, CVector3f * vertex1, CVector3f * vertex2)
    MOV EAX,dword ptr [ESI + 0x30]      ; 0045737f
    ADD ESP,0x10                        ; 00457382
    LEA EDX,[EAX + EBX*0x1]             ; 00457385
    MOV EAX,dword ptr [ESP + 0x100]     ; 00457388
    ADD EDI,0x184                       ; 0045738f
    MOV AL,byte ptr [EAX]               ; 00457395
    ADD EBP,0x20                        ; 00457397
    MOV byte ptr [EDX],AL               ; 0045739a
    MOV EAX,dword ptr [ESP + 0x100]     ; 0045739c
    INC EBX                             ; 004573a3
    INC EAX                             ; 004573a4
    MOV EDX,dword ptr [ESI + 0x28]      ; 004573a5
    MOV dword ptr [ESP + 0x100],EAX     ; 004573a8
    CMP EBX,EDX                         ; 004573af
    JL 0x0045734f                       ; 004573b1
        ;   XREF to: 0045734f (CONDITIONAL_JUMP)  ; LAB_0045734f
    LEA EAX,[EAX]                       ; 004573b3
    LEA EDX,[EDX]                       ; 004573b9
    NOP                                 ; 004573bf
    MOV ECX,0x40                        ; 004573c0
        ;   Label: LAB_004573c0
    MOV EDI,dword ptr [ESI]             ; 004573c5
    MOV ESI,dword ptr [ESP + 0x13c]     ; 004573c7
    PUSH EDI                            ; 004573ce
    MOV EAX,ECX                         ; 004573cf
    SHR ECX,0x2                         ; 004573d1
    MOVSD.REP ES:EDI,ESI                ; 004573d4
    MOV CL,AL                           ; 004573d6
    AND CL,0x3                          ; 004573d8
    MOVSB.REP ES:EDI,ESI                ; 004573db
    POP EDI                             ; 004573dd
    ADD ESP,0x110                       ; 004573de
        ;   Label: LAB_004573de
    POP EBP                             ; 004573e4
    POP EDI                             ; 004573e5
    POP ESI                             ; 004573e6
    POP EBX                             ; 004573e7
    RET                                 ; 004573e8
    MOV EBX,dword ptr [EDX]             ; 004573e9
        ;   Label: LAB_004573e9
    MOV dword ptr [EAX],EBX             ; 004573eb
    MOV EBX,dword ptr [EDX + 0x4]       ; 004573ed
    MOV dword ptr [EAX + 0x4],EBX       ; 004573f0
    MOV EBX,dword ptr [EDX + 0x8]       ; 004573f3
    MOV dword ptr [EAX + 0x8],EBX       ; 004573f6
    JMP 0x004570ca                      ; 004573f9
        ;   XREF to: 004570ca (UNCONDITIONAL_JUMP)  ; LAB_004570ca
    CMP EDX,0x4e20                      ; 004573fe
        ;   Label: LAB_004573fe
    JG 0x0045710f                       ; 00457404
        ;   XREF to: 0045710f (CONDITIONAL_JUMP)  ; LAB_0045710f
    JMP 0x0045714f                      ; 0045740a
        ;   XREF to: 0045714f (UNCONDITIONAL_JUMP)  ; LAB_0045714f
    MOV dword ptr [ESI + 0x28],0x0      ; 0045740f
        ;   Label: LAB_0045740f
    MOV dword ptr [ESI + 0x20],0x0      ; 00457416
    ADD ESP,0x110                       ; 0045741d
    POP EBP                             ; 00457423
    POP EDI                             ; 00457424
    POP ESI                             ; 00457425
    POP EBX                             ; 00457426
    RET                                 ; 00457427

