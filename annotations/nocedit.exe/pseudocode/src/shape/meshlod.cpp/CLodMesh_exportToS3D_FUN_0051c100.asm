; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_meshlod_cpp_CLodMesh_exportToS3D_FUN_0051c100(CLodMesh *this_ptr,_FILE *file_ptr)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_ptr
; Local Variables:
; undefined8       Stack[-0x48]:8  local_48
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x34]:8  local_34
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[1]:
;   shape_meshlod.cpp_CLodMesh_exportToFile_FUN_0051c070 at 0051c0b2
;
; Referenced Globals:
;   TerminatedCString s_S3D_version_00637e84
;   TerminatedCString s_d_00637e94
;   TerminatedCString s_numTextures_numTris_numV_00637e98
;   TerminatedCString s_s_0_d_d_1_1_0_0_00637ee1
;   TerminatedCString s_partList_firstVert_numVe_00637ef2
;   TerminatedCString s_s_0_d_0_d_TheOnlyPart_00637f2b
;   TerminatedCString s_texture_list_name_00637f45
;   TerminatedCString s_triList_textureIndex_ver_00637f5c
;   TerminatedCString s_d_d_f_f_d_f_f_d_f_f_00637f92
;   TerminatedCString s_vertexList_x_y_z_00637fb4
;   TerminatedCString s_f_f_f_00637fca
;
; Called Functions:
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   shape_meshlod.cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051c100
        ;   Label: shape_meshlod.cpp_CLodMesh_exportToS3D_FUN_0051c100
    PUSH ESI                            ; 0051c101
    PUSH EDI                            ; 0051c102
    PUSH EBP                            ; 0051c103
    MOV EBX,dword ptr [ESP + 0x14]      ; 0051c104
    MOV EBP,dword ptr [ESP + 0x18]      ; 0051c108
    PUSH 0x637e84                       ; 0051c10c | = "// S3D version\n"
    PUSH EBP                            ; 0051c111
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0051c112
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0051c117
    PUSH 0x67                           ; 0051c11a
    PUSH 0x637e94                       ; 0051c11c | = "%d\n"
    PUSH EBP                            ; 0051c121
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0051c122
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0051c127
    PUSH EBX                            ; 0051c12a
    CALL shape_meshlod.cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0 ; 0051c12b
        ;   XREF to: 005164d0 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 0051c130
    PUSH 0x637e98                       ; 0051c133 | = "// numTextures,numTris,numVerts,numPa..."
    PUSH EBP                            ; 0051c138
    MOV ESI,EAX                         ; 0051c139
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0051c13b
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0051c140
    MOV EDX,dword ptr [EBX]             ; 0051c143
    PUSH EDX                            ; 0051c145
    PUSH ESI                            ; 0051c146
    PUSH 0x637ee1                       ; 0051c147 | = "0,%d,%d,1,1,0,0\n"
    PUSH EBP                            ; 0051c14c
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0051c14d
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 0051c152
    PUSH 0x637ef2                       ; 0051c155 | = "// partList: firstVert,numVerts,first..."
    PUSH EBP                            ; 0051c15a
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0051c15b
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0051c160
    PUSH ESI                            ; 0051c163
    MOV ECX,dword ptr [EBX]             ; 0051c164
    PUSH ECX                            ; 0051c166
    PUSH 0x637f2b                       ; 0051c167 | = "0,%d,0,%d, \"TheOnlyPart\"\n"
    PUSH EBP                            ; 0051c16c
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0051c16d
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 0051c172
    PUSH 0x637f45                       ; 0051c175 | = "// texture list: name\n"
    PUSH EBP                            ; 0051c17a
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0051c17b
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0051c180
    PUSH 0x637f5c                       ; 0051c183 | = "// triList: textureIndex,vertices(ind..."
    PUSH EBP                            ; 0051c188
    XOR EDI,EDI                         ; 0051c189
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0051c18b
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV ESI,dword ptr [EBX + 0x8]       ; 0051c190
    ADD ESP,0x8                         ; 0051c193
    TEST ESI,ESI                        ; 0051c196
    JLE 0x0051c1b9                      ; 0051c198
        ;   XREF to: 0051c1b9 (CONDITIONAL_JUMP)  ; LAB_0051c1b9
    XOR ESI,ESI                         ; 0051c19a
    MOV EAX,dword ptr [EBX + 0xc]       ; 0051c19c
        ;   Label: LAB_0051c19c
    ADD EAX,ESI                         ; 0051c19f
    CMP dword ptr [EAX + 0x40],0x0      ; 0051c1a1
    JZ 0x0051c215                       ; 0051c1a5
        ;   XREF to: 0051c215 (CONDITIONAL_JUMP)  ; LAB_0051c215
    INC EDI                             ; 0051c1ab
        ;   Label: LAB_0051c1ab
    MOV EAX,dword ptr [EBX + 0x8]       ; 0051c1ac
    ADD ESI,0x8c                        ; 0051c1af
    CMP EDI,EAX                         ; 0051c1b5
    JL 0x0051c19c                       ; 0051c1b7
        ;   XREF to: 0051c19c (CONDITIONAL_JUMP)  ; LAB_0051c19c
    PUSH 0x637fb4                       ; 0051c1b9 | = "// vertexList: x,y,z\n"
        ;   Label: LAB_0051c1b9
    PUSH EBP                            ; 0051c1be
    XOR EDI,EDI                         ; 0051c1bf
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0051c1c1
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV EDX,dword ptr [EBX]             ; 0051c1c6
    ADD ESP,0x8                         ; 0051c1c8
    TEST EDX,EDX                        ; 0051c1cb
    JLE 0x0051c210                      ; 0051c1cd
        ;   XREF to: 0051c210 (CONDITIONAL_JUMP)  ; LAB_0051c210
    XOR ESI,ESI                         ; 0051c1cf
    MOV EAX,dword ptr [EBX + 0x4]       ; 0051c1d1
        ;   Label: LAB_0051c1d1
    SUB ESP,0x8                         ; 0051c1d4
    FLD float ptr [ESI + EAX*0x1 + 0x8] ; 0051c1d7
    FSTP double ptr [ESP]               ; 0051c1db
    SUB ESP,0x8                         ; 0051c1de
    FLD float ptr [ESI + EAX*0x1 + 0x4] ; 0051c1e1
    FSTP double ptr [ESP]               ; 0051c1e5
    SUB ESP,0x8                         ; 0051c1e8
    FLD float ptr [ESI + EAX*0x1]       ; 0051c1eb
    FSTP double ptr [ESP]               ; 0051c1ee
    PUSH 0x637fca                       ; 0051c1f1 | = "%f,%f,%f\n"
    PUSH EBP                            ; 0051c1f6
    ADD ESI,0x4c4                       ; 0051c1f7
    INC EDI                             ; 0051c1fd
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0051c1fe
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV ECX,dword ptr [EBX]             ; 0051c203
    ADD ESP,0x20                        ; 0051c205
    CMP EDI,ECX                         ; 0051c208
    JL 0x0051c1d1                       ; 0051c20a
        ;   XREF to: 0051c1d1 (CONDITIONAL_JUMP)  ; LAB_0051c1d1
    LEA EAX,[EAX]                       ; 0051c20c
    POP EBP                             ; 0051c210
        ;   Label: LAB_0051c210
    POP EDI                             ; 0051c211
    POP ESI                             ; 0051c212
    POP EBX                             ; 0051c213
    RET                                 ; 0051c214
    SUB ESP,0x8                         ; 0051c215
        ;   Label: LAB_0051c215
    FLD float ptr [EAX + 0x30]          ; 0051c218
    FSTP double ptr [ESP]               ; 0051c21b
    SUB ESP,0x8                         ; 0051c21e
    FLD float ptr [EAX + 0x2c]          ; 0051c221
    FSTP double ptr [ESP]               ; 0051c224
    MOV EDX,dword ptr [EAX + 0x18]      ; 0051c227
    PUSH EDX                            ; 0051c22a
    SUB ESP,0x8                         ; 0051c22b
    FLD float ptr [EAX + 0x28]          ; 0051c22e
    FSTP double ptr [ESP]               ; 0051c231
    SUB ESP,0x8                         ; 0051c234
    FLD float ptr [EAX + 0x24]          ; 0051c237
    FSTP double ptr [ESP]               ; 0051c23a
    MOV ECX,dword ptr [EAX + 0x14]      ; 0051c23d
    PUSH ECX                            ; 0051c240
    SUB ESP,0x8                         ; 0051c241
    FLD float ptr [EAX + 0x20]          ; 0051c244
    FSTP double ptr [ESP]               ; 0051c247
    SUB ESP,0x8                         ; 0051c24a
    FLD float ptr [EAX + 0x1c]          ; 0051c24d
    FSTP double ptr [ESP]               ; 0051c250
    MOV EDX,dword ptr [EAX + 0x10]      ; 0051c253
    PUSH EDX                            ; 0051c256
    PUSH -0x1                           ; 0051c257
    PUSH 0x637f92                       ; 0051c259 | = "%d, %d,%f,%f, %d,%f,%f, %d,%f,%f\n"
    PUSH EBP                            ; 0051c25e
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0051c25f
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x48                        ; 0051c264
    JMP 0x0051c1ab                      ; 0051c267
        ;   XREF to: 0051c1ab (UNCONDITIONAL_JUMP)  ; LAB_0051c1ab

