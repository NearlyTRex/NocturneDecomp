; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_skeleton_cpp_CDeformableModel_shatter_FUN_0059cec0 (CDeformableModel *this_ptr,CVector3f *center_position,CVector3f *orientation_vector, int lod_index,CVector3i *skinned_vertices,int *part_visibility_flags, int *texture_set_indices,int particle_lifetime)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   center_position
; CVector3f *      Stack[0xc]:4   orientation_vector
; int              Stack[0x10]:4   lod_index
; CVector3i *      Stack[0x14]:4   skinned_vertices
; int *            Stack[0x18]:4   part_visibility_flags
; int *            Stack[0x1c]:4   texture_set_indices
; int              Stack[0x20]:4   particle_lifetime
; Local Variables:
; undefined1       Stack[-0xe0]:1  local_e0
; char             Stack[-0xb8]:1  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined1       Stack[-0x94]:1  local_94
; undefined1       Stack[-0x88]:1  local_88
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined1       Stack[-0x70]:1  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
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
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_shatter_FUN_005a14b0 at 005a14f4
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_0064ec65
;   TerminatedCString s_CDeformableModel_shatter_0064ec7a
;   WatcomTypeInfo g_CVectorTypeInfo
;   float FLOAT_00662ea0 = 0.00390625
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CFireEffect g_CFireEffectInstance
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   CVector3f[3000] g_ShatterVertexArray
;   undefined4 DAT_03683be4
;   undefined4 DAT_03683be8
;   undefined4 DAT_03683bec
;   undefined4 DAT_03683bf0
;   undefined4 DAT_03683bf4
;   uchar g_ShatterVertexArrayInitialized
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;   core_fire.cpp_CFireEffect_createGlassParticle_FUN_004c7d00
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_memory.c___arrinit_FUN_005fe667
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059cec0
        ;   Label: core_skeleton.cpp_CDeformableModel_shatter_FUN_0059cec0
    PUSH ESI                            ; 0059cec1
    PUSH EDI                            ; 0059cec2
    PUSH EBP                            ; 0059cec3
    SUB ESP,0xd0                        ; 0059cec4
    MOV ECX,dword ptr [ESP + 0xec]      ; 0059ceca
    PUSH ECX                            ; 0059ced1
    LEA EAX,[ESP + 0x4]                 ; 0059ced2
    MOV EDX,0xffff                      ; 0059ced6
    PUSH EAX                            ; 0059cedb
    MOV dword ptr [ESP + 0xcc],EDX      ; 0059cedc
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 0059cee3
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV AH,byte ptr [0x0368c880]        ; 0059cee8 | g_ShatterVertexArrayInitialized
    ADD ESP,0x8                         ; 0059ceee
    TEST AH,0x1                         ; 0059cef1
    JZ 0x0059d2fd                       ; 0059cef4
        ;   XREF to: 0059d2fd (CONDITIONAL_JUMP)  ; LAB_0059d2fd
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0059cefa
        ;   Label: LAB_0059cefa
    MOV EBX,dword ptr [ESP + 0xe4]      ; 0059cf01
    SHL EAX,0x2                         ; 0059cf08
    ADD EAX,EBX                         ; 0059cf0b
    CMP dword ptr [EAX + 0x2c],0xbb8    ; 0059cf0d
    JLE 0x0059cf39                      ; 0059cf14
        ;   XREF to: 0059cf39 (CONDITIONAL_JUMP)  ; LAB_0059cf39
    MOV EDI,0x64ec65                    ; 0059cf16 | = "..\\core\\skeleton.cpp"
    MOV EBP,0x748                       ; 0059cf1b
    PUSH 0x64ec7a                       ; 0059cf20 | = "CDeformableModel::shatter - too many ..."
    MOV dword ptr [0x02f0ca48],EDI      ; 0059cf25 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 0059cf2b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0059cf31
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0059cf36
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0059cf39
        ;   Label: LAB_0059cf39
    MOV EDX,dword ptr [ESP + 0xe4]      ; 0059cf40
    SHL EAX,0x2                         ; 0059cf47
    MOV ESI,0x3683be0                   ; 0059cf4a | g_ShatterVertexArray
    ADD EDX,EAX                         ; 0059cf4f
    MOV EDI,dword ptr [ESP + 0xf4]      ; 0059cf51
    MOV dword ptr [ESP + 0x84],EDX      ; 0059cf58
    MOV EDX,dword ptr [EDX + 0x2c]      ; 0059cf5f
    XOR EBP,EBP                         ; 0059cf62
    TEST EDX,EDX                        ; 0059cf64
    JLE 0x0059cffd                      ; 0059cf66
        ;   XREF to: 0059cffd (CONDITIONAL_JUMP)  ; LAB_0059cffd
    MOV EAX,EDI                         ; 0059cf6c
        ;   Label: LAB_0059cf6c
    MOV EBX,ESI                         ; 0059cf6e | g_ShatterVertexArray | DAT_03683bec
    FILD dword ptr [EAX]                ; 0059cf70
    FMUL float ptr [0x00662ea0]         ; 0059cf72 | FLOAT_00662ea0
    FSTP float ptr [EBX]                ; 0059cf78 | g_ShatterVertexArray | DAT_03683bec
    FILD dword ptr [EAX + 0x4]          ; 0059cf7a
    FMUL float ptr [0x00662ea0]         ; 0059cf7d | FLOAT_00662ea0
    FSTP float ptr [EBX + 0x4]          ; 0059cf83 | DAT_03683be4 | DAT_03683bf0
    FILD dword ptr [EAX + 0x8]          ; 0059cf86
    FMUL float ptr [0x00662ea0]         ; 0059cf89 | FLOAT_00662ea0
    FSTP float ptr [EBX + 0x8]          ; 0059cf8f | DAT_03683be8 | DAT_03683bf4
    PUSH ESI                            ; 0059cf92 | g_ShatterVertexArray | DAT_03683bec
    LEA EAX,[ESP + 0x74]                ; 0059cf93
    PUSH EAX                            ; 0059cf97
    LEA EAX,[ESP + 0x8]                 ; 0059cf98
    PUSH EAX                            ; 0059cf9c
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 0059cf9d
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 0059cfa2
    MOV EDX,dword ptr [ESP + 0xe8]      ; 0059cfa5
    FLD float ptr [EDX]                 ; 0059cfac
    FADD float ptr [EAX]                ; 0059cfae
    FSTP float ptr [ESP + 0x64]         ; 0059cfb0
    FLD float ptr [EDX + 0x4]           ; 0059cfb4
    FADD float ptr [EAX + 0x4]          ; 0059cfb7
    FSTP float ptr [ESP + 0x68]         ; 0059cfba
    FLD float ptr [EDX + 0x8]           ; 0059cfbe
    FADD float ptr [EAX + 0x8]          ; 0059cfc1
    LEA EAX,[ESP + 0x64]                ; 0059cfc4
    FSTP float ptr [ESP + 0x6c]         ; 0059cfc8
    CMP ESI,EAX                         ; 0059cfcc
    JZ 0x0059cfe4                       ; 0059cfce
        ;   XREF to: 0059cfe4 (CONDITIONAL_JUMP)  ; LAB_0059cfe4
    MOV EAX,dword ptr [ESP + 0x64]      ; 0059cfd0
    MOV dword ptr [ESI],EAX             ; 0059cfd4 | g_ShatterVertexArray
    MOV EAX,dword ptr [ESP + 0x68]      ; 0059cfd6
    MOV dword ptr [ESI + 0x4],EAX       ; 0059cfda | DAT_03683be4
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0059cfdd
    MOV dword ptr [ESI + 0x8],EAX       ; 0059cfe1 | DAT_03683be8
    MOV EAX,dword ptr [ESP + 0x84]      ; 0059cfe4
        ;   Label: LAB_0059cfe4
    ADD ESI,0xc                         ; 0059cfeb
    INC EBP                             ; 0059cfee
    MOV ECX,dword ptr [EAX + 0x2c]      ; 0059cfef
    ADD EDI,0xc                         ; 0059cff2
    CMP EBP,ECX                         ; 0059cff5
    JL 0x0059cf6c                       ; 0059cff7
        ;   XREF to: 0059cf6c (CONDITIONAL_JUMP)  ; LAB_0059cf6c
    PUSH 0x6598c0                       ; 0059cffd | g_CVectorTypeInfo
        ;   Label: LAB_0059cffd
    PUSH 0x3                            ; 0059d002
    LEA EAX,[ESP + 0x30]                ; 0059d004
    PUSH EAX                            ; 0059d008
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 0059d009
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0059d00e
    MOV EDX,dword ptr [ESP + 0xe4]      ; 0059d011
    XOR EAX,EAX                         ; 0059d018
    MOV ESI,dword ptr [EDX + 0x7140]    ; 0059d01a
    MOV dword ptr [ESP + 0x9c],EAX      ; 0059d020
    TEST ESI,ESI                        ; 0059d027
    JLE 0x0059d209                      ; 0059d029
        ;   XREF to: 0059d209 (CONDITIONAL_JUMP)  ; LAB_0059d209
    MOV EDX,dword ptr [ESP + 0xf0]      ; 0059d02f
    MOV ECX,dword ptr [ESP + 0xe4]      ; 0059d036
    SHL EDX,0x2                         ; 0059d03d
    ADD ECX,EDX                         ; 0059d040
    MOV dword ptr [ESP + 0xac],ECX      ; 0059d042
    MOV dword ptr [ESP + 0xa8],ECX      ; 0059d049
    MOV ECX,dword ptr [ESP + 0xe4]      ; 0059d050
    ADD ECX,0xc0                        ; 0059d057
    MOV EBP,dword ptr [ESP + 0xe4]      ; 0059d05d
    MOV dword ptr [ESP + 0x80],ECX      ; 0059d064
    MOV ECX,dword ptr [ESP + 0xf8]      ; 0059d06b
    ADD EDX,EBP                         ; 0059d072
    MOV dword ptr [ESP + 0x94],ECX      ; 0059d074
    MOV ECX,dword ptr [ESP + 0xfc]      ; 0059d07b
    MOV dword ptr [ESP + 0x8c],EDX      ; 0059d082
    MOV dword ptr [ESP + 0x88],ECX      ; 0059d089
    MOV EDX,dword ptr [ESP + 0x8c]      ; 0059d090
        ;   Label: LAB_0059d090
    MOV EDX,dword ptr [EDX + 0x7164]    ; 0059d097
    ADD EDX,EAX                         ; 0059d09d
    MOV dword ptr [ESP + 0xa0],EDX      ; 0059d09f
    MOV EDX,dword ptr [ESP + 0x88]      ; 0059d0a6
    IMUL EDX,dword ptr [EDX],0x1680     ; 0059d0ad
    MOV ECX,dword ptr [ESP + 0x80]      ; 0059d0b3
    ADD ECX,EDX                         ; 0059d0ba
    MOV EDX,dword ptr [ESP + 0x94]      ; 0059d0bc
    MOV BL,byte ptr [EDX]               ; 0059d0c3
    MOV dword ptr [ESP + 0xb4],ECX      ; 0059d0c5
    TEST BL,0x1                         ; 0059d0cc
    JZ 0x0059d1a9                       ; 0059d0cf
        ;   XREF to: 0059d1a9 (CONDITIONAL_JUMP)  ; LAB_0059d1a9
    MOV EBX,dword ptr [ESP + 0xa0]      ; 0059d0d5
    CMP EAX,EBX                         ; 0059d0dc
    JGE 0x0059d1a9                      ; 0059d0de
        ;   XREF to: 0059d1a9 (CONDITIONAL_JUMP)  ; LAB_0059d1a9
    IMUL EDI,EAX,0x12                   ; 0059d0e4
    LEA ESI,[EAX*0x4 + 0x0]             ; 0059d0e7
    LEA EAX,[EBX*0x4 + 0x0]             ; 0059d0ee
    MOV dword ptr [ESP + 0xc0],EAX      ; 0059d0f5
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0059d0fc
        ;   Label: LAB_0059d0fc
    MOV EAX,dword ptr [EAX + 0x7c]      ; 0059d103
    LEA ECX,[EAX + EDI*0x1]             ; 0059d106
    XOR EDX,EDX                         ; 0059d109
    LEA EAX,[ESP + 0x28]                ; 0059d10b
    XOR EBX,EBX                         ; 0059d10f
        ;   Label: LAB_0059d10f
    MOV BX,word ptr [ECX]               ; 0059d111
    IMUL EBX,EBX,0xc                    ; 0059d114
    ADD EBX,0x3683be0                   ; 0059d117 | g_ShatterVertexArray
    CMP EAX,EBX                         ; 0059d11d
    JZ 0x0059d131                       ; 0059d11f
        ;   XREF to: 0059d131 (CONDITIONAL_JUMP)  ; LAB_0059d131
    MOV EBP,dword ptr [EBX]             ; 0059d121 | g_ShatterVertexArray
    MOV dword ptr [EAX],EBP             ; 0059d123
    MOV EBP,dword ptr [EBX + 0x4]       ; 0059d125 | DAT_03683be4
    MOV dword ptr [EAX + 0x4],EBP       ; 0059d128
    MOV EBP,dword ptr [EBX + 0x8]       ; 0059d12b | DAT_03683be8
    MOV dword ptr [EAX + 0x8],EBP       ; 0059d12e
    XOR EBX,EBX                         ; 0059d131
        ;   Label: LAB_0059d131
    MOV BX,word ptr [ECX + 0x6]         ; 0059d133
    ADD EAX,0xc                         ; 0059d137
    MOV dword ptr [ESP + EDX*0x1 + 0x4c],EBX ; 0059d13a
    XOR EBX,EBX                         ; 0059d13e
    ADD EDX,0x4                         ; 0059d140
    MOV BX,word ptr [ECX + 0xc]         ; 0059d143
    ADD ECX,0x2                         ; 0059d147
    MOV dword ptr [ESP + EDX*0x1 + 0x54],EBX ; 0059d14a
    CMP EDX,0xc                         ; 0059d14e
    JNZ 0x0059d10f                      ; 0059d151
        ;   XREF to: 0059d10f (CONDITIONAL_JUMP)  ; LAB_0059d10f
    MOV EAX,dword ptr [ESP + 0xac]      ; 0059d153
    MOV EAX,dword ptr [EAX + 0x90]      ; 0059d15a
    IMUL EAX,dword ptr [ESI + EAX*0x1],0x48 ; 0059d160
    MOV EBP,dword ptr [ESP + 0xc4]      ; 0059d164
    MOV ECX,dword ptr [ESP + 0xb4]      ; 0059d16b
    PUSH EBP                            ; 0059d172
    ADD EAX,ECX                         ; 0059d173
    PUSH EAX                            ; 0059d175
    LEA EAX,[ESP + 0x60]                ; 0059d176
    PUSH EAX                            ; 0059d17a
    LEA EAX,[ESP + 0x58]                ; 0059d17b
    PUSH EAX                            ; 0059d17f
    LEA EAX,[ESP + 0x38]                ; 0059d180
    PUSH EAX                            ; 0059d184
    MOV EBX,dword ptr [0x0067a3d0]      ; 0059d185 | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH EBX                            ; 0059d18b | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createGlassParticle_FUN_004c7d00 ; 0059d18c
        ;   XREF to: 004c7d00 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createGlassParticle_FUN_004c7d00(CFireEffect * this_ptr, STriangleVertices * triangle_vertices, CVector3f * uv_u_per_vertex, CVector3f * uv_v_per_vertex, ...)
    ADD ESP,0x18                        ; 0059d191
    ADD ESI,0x4                         ; 0059d194
    MOV EBP,dword ptr [ESP + 0xc0]      ; 0059d197
    ADD EDI,0x12                        ; 0059d19e
    CMP ESI,EBP                         ; 0059d1a1
    JL 0x0059d0fc                       ; 0059d1a3
        ;   XREF to: 0059d0fc (CONDITIONAL_JUMP)  ; LAB_0059d0fc
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0059d1a9
        ;   Label: LAB_0059d1a9
    MOV EDI,dword ptr [ESP + 0x94]      ; 0059d1b0
    MOV EBP,dword ptr [ESP + 0x88]      ; 0059d1b7
    MOV EDX,dword ptr [ESP + 0x8c]      ; 0059d1be
    MOV ECX,dword ptr [ESP + 0x9c]      ; 0059d1c5
    ADD EDI,0x4                         ; 0059d1cc
    ADD EDX,0x60                        ; 0059d1cf
    INC ECX                             ; 0059d1d2
    MOV dword ptr [ESP + 0x8c],EDX      ; 0059d1d3
    MOV dword ptr [ESP + 0x9c],ECX      ; 0059d1da
    MOV EDX,ECX                         ; 0059d1e1
    MOV ECX,dword ptr [ESP + 0xe4]      ; 0059d1e3
    ADD EBP,0x4                         ; 0059d1ea
    MOV dword ptr [ESP + 0x94],EDI      ; 0059d1ed
    MOV EBX,dword ptr [ECX + 0x7140]    ; 0059d1f4
    MOV dword ptr [ESP + 0x88],EBP      ; 0059d1fa
    CMP EDX,EBX                         ; 0059d201
    JL 0x0059d090                       ; 0059d203
        ;   XREF to: 0059d090 (CONDITIONAL_JUMP)  ; LAB_0059d090
    MOV EDX,dword ptr [ESP + 0xe4]      ; 0059d209
        ;   Label: LAB_0059d209
    XOR ESI,ESI                         ; 0059d210
    MOV EDI,dword ptr [EDX + 0x7140]    ; 0059d212
    MOV dword ptr [ESP + 0xa4],ESI      ; 0059d218
    TEST EDI,EDI                        ; 0059d21f
    JLE 0x0059d2f2                      ; 0059d221
        ;   XREF to: 0059d2f2 (CONDITIONAL_JUMP)  ; LAB_0059d2f2
    MOV EDX,dword ptr [ESP + 0xf0]      ; 0059d227
    MOV ECX,dword ptr [ESP + 0xe4]      ; 0059d22e
    SHL EDX,0x2                         ; 0059d235
    ADD ECX,EDX                         ; 0059d238
    MOV dword ptr [ESP + 0xb0],ECX      ; 0059d23a
    MOV dword ptr [ESP + 0xc8],ECX      ; 0059d241
    MOV ECX,dword ptr [ESP + 0xe4]      ; 0059d248
    MOV EDI,dword ptr [ESP + 0xe4]      ; 0059d24f
    ADD ECX,0xc0                        ; 0059d256
    ADD EDX,EDI                         ; 0059d25c
    MOV dword ptr [ESP + 0x7c],ECX      ; 0059d25e
    MOV ECX,dword ptr [ESP + 0xf8]      ; 0059d262
    MOV dword ptr [ESP + 0x90],EDX      ; 0059d269
    MOV dword ptr [ESP + 0x98],ECX      ; 0059d270
    MOV EDX,dword ptr [ESP + 0x90]      ; 0059d277
        ;   Label: LAB_0059d277
    MOV EDX,dword ptr [EDX + 0x7178]    ; 0059d27e
    ADD EDX,EAX                         ; 0059d284
    MOV ECX,dword ptr [ESP + 0x98]      ; 0059d286
    MOV dword ptr [ESP + 0xbc],EDX      ; 0059d28d
    MOV EDX,dword ptr [ESP + 0xa4]      ; 0059d294
    MOV BH,byte ptr [ECX]               ; 0059d29b
    SHL EDX,0x2                         ; 0059d29d
    TEST BH,0x1                         ; 0059d2a0
    JNZ 0x0059d324                      ; 0059d2a3
        ;   XREF to: 0059d324 (CONDITIONAL_JUMP)  ; LAB_0059d324
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0059d2a9
        ;   Label: LAB_0059d2a9
    MOV EDX,dword ptr [ESP + 0x98]      ; 0059d2b0
    MOV ECX,dword ptr [ESP + 0x90]      ; 0059d2b7
    MOV EBX,dword ptr [ESP + 0xa4]      ; 0059d2be
    ADD ECX,0x60                        ; 0059d2c5
    ADD EDX,0x4                         ; 0059d2c8
    MOV dword ptr [ESP + 0x90],ECX      ; 0059d2cb
    MOV ECX,dword ptr [ESP + 0xe4]      ; 0059d2d2
    INC EBX                             ; 0059d2d9
    MOV dword ptr [ESP + 0x98],EDX      ; 0059d2da
    MOV ESI,dword ptr [ECX + 0x7140]    ; 0059d2e1
    MOV dword ptr [ESP + 0xa4],EBX      ; 0059d2e7
    CMP EBX,ESI                         ; 0059d2ee
    JL 0x0059d277                       ; 0059d2f0
        ;   XREF to: 0059d277 (CONDITIONAL_JUMP)  ; LAB_0059d277
    ADD ESP,0xd0                        ; 0059d2f2
        ;   Label: LAB_0059d2f2
    POP EBP                             ; 0059d2f8
    POP EDI                             ; 0059d2f9
    POP ESI                             ; 0059d2fa
    POP EBX                             ; 0059d2fb
    RET                                 ; 0059d2fc
    PUSH 0x6598c0                       ; 0059d2fd | g_CVectorTypeInfo
        ;   Label: LAB_0059d2fd
    MOV DL,AH                           ; 0059d302
    PUSH 0xbb8                          ; 0059d304
    OR DL,0x1                           ; 0059d309
    PUSH 0x3683be0                      ; 0059d30c | g_ShatterVertexArray
    MOV byte ptr [0x0368c880],DL        ; 0059d311 | g_ShatterVertexArrayInitialized
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 0059d317
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0059d31c
    JMP 0x0059cefa                      ; 0059d31f
        ;   XREF to: 0059cefa (UNCONDITIONAL_JUMP)  ; LAB_0059cefa
    ADD EDX,dword ptr [ESP + 0xfc]      ; 0059d324
        ;   Label: LAB_0059d324
    IMUL EDX,dword ptr [EDX],0x1680     ; 0059d32b
    MOV ECX,dword ptr [ESP + 0x7c]      ; 0059d331
    MOV EBX,dword ptr [ESP + 0xbc]      ; 0059d335
    ADD ECX,EDX                         ; 0059d33c
    MOV ESI,EAX                         ; 0059d33e
    MOV dword ptr [ESP + 0xb8],ECX      ; 0059d340
    CMP EAX,EBX                         ; 0059d347
    JGE 0x0059d2a9                      ; 0059d349
        ;   XREF to: 0059d2a9 (CONDITIONAL_JUMP)  ; LAB_0059d2a9
    IMUL EDI,EAX,0x12                   ; 0059d34f
    SHL EAX,0x2                         ; 0059d352
    MOV dword ptr [ESP + 0xcc],EAX      ; 0059d355
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0059d35c
        ;   Label: LAB_0059d35c
    MOV EAX,dword ptr [EAX + 0x7c]      ; 0059d363
    MOV EDX,dword ptr [ESP + 0xc8]      ; 0059d366
    LEA ECX,[EAX + EDI*0x1]             ; 0059d36d
    MOV EBX,dword ptr [EDX + 0x54]      ; 0059d370
    MOV EAX,ESI                         ; 0059d373
    MOV EDX,dword ptr [EDX + 0xa4]      ; 0059d375
    SUB EAX,EBX                         ; 0059d37b
    MOV EAX,dword ptr [EDX + EAX*0x4]   ; 0059d37d
    MOV EBP,dword ptr [ESP + 0xf8]      ; 0059d380
    SHL EAX,0x2                         ; 0059d387
    ADD EAX,EBP                         ; 0059d38a
    TEST byte ptr [EAX],0x1             ; 0059d38c
    JNZ 0x0059d42c                      ; 0059d38f
        ;   XREF to: 0059d42c (CONDITIONAL_JUMP)  ; LAB_0059d42c
    LEA EAX,[ESP + 0x28]                ; 0059d395
    XOR EDX,EDX                         ; 0059d399
    XOR EBX,EBX                         ; 0059d39b
        ;   Label: LAB_0059d39b
    MOV BX,word ptr [ECX]               ; 0059d39d
    IMUL EBX,EBX,0xc                    ; 0059d3a0
    ADD EBX,0x3683be0                   ; 0059d3a3 | g_ShatterVertexArray
    CMP EAX,EBX                         ; 0059d3a9
    JZ 0x0059d3bd                       ; 0059d3ab
        ;   XREF to: 0059d3bd (CONDITIONAL_JUMP)  ; LAB_0059d3bd
    MOV EBP,dword ptr [EBX]             ; 0059d3ad | g_ShatterVertexArray
    MOV dword ptr [EAX],EBP             ; 0059d3af
    MOV EBP,dword ptr [EBX + 0x4]       ; 0059d3b1 | DAT_03683be4
    MOV dword ptr [EAX + 0x4],EBP       ; 0059d3b4
    MOV EBP,dword ptr [EBX + 0x8]       ; 0059d3b7 | DAT_03683be8
    MOV dword ptr [EAX + 0x8],EBP       ; 0059d3ba
    XOR EBX,EBX                         ; 0059d3bd
        ;   Label: LAB_0059d3bd
    MOV BX,word ptr [ECX + 0x6]         ; 0059d3bf
    SHL EBX,0x8                         ; 0059d3c3
    MOV dword ptr [ESP + EDX*0x1 + 0x4c],EBX ; 0059d3c6
    XOR EBX,EBX                         ; 0059d3ca
    ADD EAX,0xc                         ; 0059d3cc
    MOV BX,word ptr [ECX + 0xc]         ; 0059d3cf
    ADD EDX,0x4                         ; 0059d3d3
    SHL EBX,0x8                         ; 0059d3d6
    ADD ECX,0x2                         ; 0059d3d9
    MOV dword ptr [ESP + EDX*0x1 + 0x54],EBX ; 0059d3dc
    CMP EDX,0xc                         ; 0059d3e0
    JNZ 0x0059d39b                      ; 0059d3e3
        ;   XREF to: 0059d39b (CONDITIONAL_JUMP)  ; LAB_0059d39b
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0059d3e5
    PUSH EAX                            ; 0059d3ec
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0059d3ed
    MOV EDX,dword ptr [ESP + 0xd0]      ; 0059d3f4
    MOV EAX,dword ptr [EAX + 0x90]      ; 0059d3fb
    ADD EAX,EDX                         ; 0059d401
    IMUL EAX,dword ptr [EAX],0x48       ; 0059d403
    ADD EAX,dword ptr [ESP + 0xbc]      ; 0059d406
    PUSH EAX                            ; 0059d40d
    LEA EAX,[ESP + 0x60]                ; 0059d40e
    PUSH EAX                            ; 0059d412
    LEA EAX,[ESP + 0x58]                ; 0059d413
    PUSH EAX                            ; 0059d417
    LEA EAX,[ESP + 0x38]                ; 0059d418
    PUSH EAX                            ; 0059d41c
    MOV EBP,dword ptr [0x0067a3d0]      ; 0059d41d | g_CFireEffectPtr
    PUSH EBP                            ; 0059d423 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createGlassParticle_FUN_004c7d00 ; 0059d424
        ;   XREF to: 004c7d00 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createGlassParticle_FUN_004c7d00(CFireEffect * this_ptr, STriangleVertices * triangle_vertices, CVector3f * uv_u_per_vertex, CVector3f * uv_v_per_vertex, ...)
    ADD ESP,0x18                        ; 0059d429
    MOV EBP,dword ptr [ESP + 0xcc]      ; 0059d42c
        ;   Label: LAB_0059d42c
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0059d433
    ADD EDI,0x12                        ; 0059d43a
    ADD EBP,0x4                         ; 0059d43d
    INC ESI                             ; 0059d440
    MOV dword ptr [ESP + 0xcc],EBP      ; 0059d441
    CMP ESI,EAX                         ; 0059d448
    JGE 0x0059d2a9                      ; 0059d44a
        ;   XREF to: 0059d2a9 (CONDITIONAL_JUMP)  ; LAB_0059d2a9
    JMP 0x0059d35c                      ; 0059d450
        ;   XREF to: 0059d35c (UNCONDITIONAL_JUMP)  ; LAB_0059d35c

