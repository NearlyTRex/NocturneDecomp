; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_setFaceListFromTriangles_FUN_005228c0(CMorphModel *this_ptr,int part_index,SInputFace *face_data,STextureSet *texture_sets ,int *index_data,int start_face,int face_count)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   part_index
; SInputFace *     Stack[0xc]:4   face_data
; STextureSet *    Stack[0x10]:4   texture_sets
; int *            Stack[0x14]:4   index_data
; int              Stack[0x18]:4   start_face
; int              Stack[0x1c]:4   face_count
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_morph.cpp_CMorphModel_addPartFromVertexBuffer_FUN_00522340 at 00522477
;
; Referenced Globals:
;   TerminatedCString s_core_morph_cpp_005ea7c4
;   TerminatedCString s_CMorphModel_setFaceList_005ea7d6
;   TerminatedCString s_core_morph_cpp_005ea804
;   TerminatedCString s_CMorphModel_setFaceList_005ea816
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d39d30
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_morph.cpp_CMorphModel_findOrAddTexture_FUN_00522a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005228c0
        ;   Label: core_morph.cpp_CMorphModel_setFaceListFromTriangles_FUN_005228c0
    PUSH ESI                            ; 005228c1
    PUSH EDI                            ; 005228c2
    PUSH EBP                            ; 005228c3
    SUB ESP,0x18                        ; 005228c4
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005228c7
    MOV ESI,dword ptr [ESP + 0x30]      ; 005228cb
    MOV EDI,dword ptr [ESP + 0x40]      ; 005228cf
    TEST ESI,ESI                        ; 005228d3
    JL 0x005228db                       ; 005228d5
        ;   XREF to: 005228db (CONDITIONAL_JUMP)  ; LAB_005228db
    CMP ESI,dword ptr [EBX]             ; 005228d7
    JL 0x005228fe                       ; 005228d9
        ;   XREF to: 005228fe (CONDITIONAL_JUMP)  ; LAB_005228fe
    MOV ECX,0x5ea7c4                    ; 005228db | = "..\\core\\morph.cpp"
        ;   Label: LAB_005228db
    MOV EBP,0x191                       ; 005228e0
    PUSH 0x5ea7d6                       ; 005228e5 | = "CMorphModel::setFaceList - invalid pa..."
    MOV dword ptr [0x01d1d400],ECX      ; 005228ea | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 005228f0 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005228f6
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005228fb
    MOV EAX,ESI                         ; 005228fe
        ;   Label: LAB_005228fe
    SHL EAX,0x4                         ; 00522900
    MOV EDX,dword ptr [EBX + EAX*0x1 + 0x10] ; 00522903
    MOV ECX,dword ptr [EBX + EAX*0x1 + 0x8] ; 00522907
    MOV EAX,dword ptr [ESP + 0x44]      ; 0052290b
    ADD EDI,EDX                         ; 0052290f
    ADD EDX,ECX                         ; 00522911
    ADD EAX,EDI                         ; 00522913
    CMP EAX,EDX                         ; 00522915
    JLE 0x0052293b                      ; 00522917
        ;   XREF to: 0052293b (CONDITIONAL_JUMP)  ; LAB_0052293b
    MOV EBP,0x5ea804                    ; 00522919 | = "..\\core\\morph.cpp"
    MOV EAX,0x198                       ; 0052291e
    PUSH 0x5ea816                       ; 00522923 | = "CMorphModel::setFaceList - invalid ve..."
    MOV dword ptr [0x01d1d400],EBP      ; 00522928 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0052292e | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00522933
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00522938
    MOV EAX,dword ptr [ESP + 0x34]      ; 0052293b
        ;   Label: LAB_0052293b
    XOR EDX,EDX                         ; 0052293f
    MOV ECX,dword ptr [ESP + 0x44]      ; 00522941
    MOV dword ptr [ESP + 0xc],EDX       ; 00522945
    MOV dword ptr [ESP + 0x4],EAX       ; 00522949
    TEST ECX,ECX                        ; 0052294d
    JLE 0x00522a70                      ; 0052294f
        ;   XREF to: 00522a70 (CONDITIONAL_JUMP)  ; LAB_00522a70
    SHL ESI,0x4                         ; 00522955
    LEA EAX,[EBX + ESI*0x1]             ; 00522958
    MOV dword ptr [ESP + 0x10],EAX      ; 0052295b
    LEA EAX,[EDI*0x4 + 0x0]             ; 0052295f
    MOV EDX,EAX                         ; 00522966
    SHL EAX,0x4                         ; 00522968
    SUB EAX,EDX                         ; 0052296b
    MOV dword ptr [ESP + 0x14],EAX      ; 0052296d
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00522971
    MOV dword ptr [ESP + 0x8],EAX       ; 00522975
    MOV EAX,dword ptr [ESP + 0x8]       ; 00522979
        ;   Label: LAB_00522979
    IMUL EAX,dword ptr [EAX],0x48       ; 0052297d
    ADD EAX,dword ptr [ESP + 0x38]      ; 00522980
    ADD EAX,0x8                         ; 00522984
    PUSH EAX                            ; 00522987
    PUSH EBX                            ; 00522988
    CALL core_morph.cpp_CMorphModel_findOrAddTexture_FUN_00522a80 ; 00522989
        ;   XREF to: 00522a80 (UNCONDITIONAL_CALL)  ; int core_morph.cpp_CMorphModel_findOrAddTexture_FUN_00522a80(CMorphModel * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0052298e
    MOV EDI,dword ptr [ESP + 0x14]      ; 00522991
    MOV dword ptr [ESP],EAX             ; 00522995
    MOV EAX,dword ptr [EBX + 0x60]      ; 00522998
    ADD EAX,EDI                         ; 0052299b
    XOR EDX,EDX                         ; 0052299d
    MOV ESI,EDI                         ; 0052299f
    MOV dword ptr [EAX + 0x4],0x3       ; 005229a1
    MOV EAX,dword ptr [ESP + 0x4]       ; 005229a8
    CMP dword ptr [0x01d39d30],0x0      ; 005229ac | DAT_01d39d30
        ;   Label: LAB_005229ac
    JZ 0x00522a78                       ; 005229b3
        ;   XREF to: 00522a78 (CONDITIONAL_JUMP)  ; LAB_00522a78
    MOV ECX,0x2                         ; 005229b9
    SUB ECX,EDX                         ; 005229be
    IMUL ECX,ECX,0xc                    ; 005229c0
        ;   Label: LAB_005229c0
    MOV EDI,dword ptr [EBX + 0x60]      ; 005229c3
    ADD EDI,ESI                         ; 005229c6
    MOVZX EBP,word ptr [EAX]            ; 005229c8
    MOV dword ptr [ECX + EDI*0x1 + 0x18],EBP ; 005229cb
    ADD EAX,0x2                         ; 005229cf
    MOV EDI,dword ptr [EBX + 0x60]      ; 005229d2
    MOVZX EBP,word ptr [EAX + 0x4]      ; 005229d5
    ADD EDI,ESI                         ; 005229d9
    SHL EBP,0x8                         ; 005229db
    INC EDX                             ; 005229de
    MOV dword ptr [ECX + EDI*0x1 + 0x1c],EBP ; 005229df
    MOV EBP,dword ptr [EBX + 0x60]      ; 005229e3
    XOR EDI,EDI                         ; 005229e6
    ADD EBP,ESI                         ; 005229e8
    MOV DI,word ptr [EAX + 0xa]         ; 005229ea
    ADD ECX,EBP                         ; 005229ee
    SHL EDI,0x8                         ; 005229f0
    MOV dword ptr [ECX + 0x20],EDI      ; 005229f3
    CMP EDX,0x3                         ; 005229f6
    JL 0x005229ac                       ; 005229f9
        ;   XREF to: 005229ac (CONDITIONAL_JUMP)  ; LAB_005229ac
    MOV EAX,dword ptr [EBX + 0x60]      ; 005229fb
    MOV EDX,dword ptr [ESP]             ; 005229fe
    MOV dword ptr [ESI + EAX*0x1],EDX   ; 00522a01
    MOV EDX,dword ptr [ESP + 0x10]      ; 00522a04
    MOV EAX,dword ptr [EBX + 0x60]      ; 00522a08
    MOV EDX,dword ptr [EDX + 0xc]       ; 00522a0b
    ADD dword ptr [ESI + EAX*0x1 + 0x18],EDX ; 00522a0e
    MOV EDX,dword ptr [ESP + 0x10]      ; 00522a12
    MOV EAX,dword ptr [EBX + 0x60]      ; 00522a16
    MOV ECX,dword ptr [ESP + 0x14]      ; 00522a19
    MOV EDX,dword ptr [EDX + 0xc]       ; 00522a1d
    MOV EBP,dword ptr [ESI + EAX*0x1 + 0x24] ; 00522a20
    ADD ECX,0x3c                        ; 00522a24
    ADD EBP,EDX                         ; 00522a27
    MOV dword ptr [ESP + 0x14],ECX      ; 00522a29
    MOV dword ptr [ESI + EAX*0x1 + 0x24],EBP ; 00522a2d
    MOV EDI,dword ptr [ESP + 0x8]       ; 00522a31
    MOV EAX,dword ptr [EBX + 0x60]      ; 00522a35
    ADD EDI,0x4                         ; 00522a38
    ADD ESI,EAX                         ; 00522a3b
    MOV EAX,dword ptr [ESP + 0x10]      ; 00522a3d
    MOV dword ptr [ESP + 0x8],EDI       ; 00522a41
    MOV EDX,dword ptr [ESI + 0x30]      ; 00522a45
    MOV EAX,dword ptr [EAX + 0xc]       ; 00522a48
    MOV EBP,dword ptr [ESP + 0xc]       ; 00522a4b
    ADD EDX,EAX                         ; 00522a4f
    INC EBP                             ; 00522a51
    MOV dword ptr [ESI + 0x30],EDX      ; 00522a52
    MOV ESI,dword ptr [ESP + 0x4]       ; 00522a55
    MOV dword ptr [ESP + 0xc],EBP       ; 00522a59
    ADD ESI,0x12                        ; 00522a5d
    MOV EDX,dword ptr [ESP + 0x44]      ; 00522a60
    MOV dword ptr [ESP + 0x4],ESI       ; 00522a64
    CMP EBP,EDX                         ; 00522a68
    JL 0x00522979                       ; 00522a6a
        ;   XREF to: 00522979 (CONDITIONAL_JUMP)  ; LAB_00522979
    ADD ESP,0x18                        ; 00522a70
        ;   Label: LAB_00522a70
    POP EBP                             ; 00522a73
    POP EDI                             ; 00522a74
    POP ESI                             ; 00522a75
    POP EBX                             ; 00522a76
    RET                                 ; 00522a77
    MOV ECX,EDX                         ; 00522a78
        ;   Label: LAB_00522a78
    JMP 0x005229c0                      ; 00522a7a
        ;   XREF to: 005229c0 (UNCONDITIONAL_JUMP)  ; LAB_005229c0

