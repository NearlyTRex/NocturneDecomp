; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_setFaceListFromTriangles_FUN_005b6780(CMorphModel *this_ptr,int part_index,SInputFace *face_data,STextureSet *texture_sets ,int *index_data,int start_face,int face_count)
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
;   core_morph.cpp_CMorphModel_addPartFromVertexBuffer_FUN_005b6200 at 005b6337
;
; Referenced Globals:
;   TerminatedCString s_core_morph_cpp_005f16a9
;   TerminatedCString s_CMorphModel_setFaceList_005f16bb
;   TerminatedCString s_core_morph_cpp_005f16e9
;   TerminatedCString s_CMorphModel_setFaceList_005f16fb
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_0268014c
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_morph.cpp_CMorphModel_findOrAddTexture_FUN_005b6940
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b6780
        ;   Label: core_morph.cpp_CMorphModel_setFaceListFromTriangles_FUN_005b6780
    PUSH ESI                            ; 005b6781
    PUSH EDI                            ; 005b6782
    PUSH EBP                            ; 005b6783
    SUB ESP,0x18                        ; 005b6784
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005b6787
    MOV ESI,dword ptr [ESP + 0x30]      ; 005b678b
    MOV EDI,dword ptr [ESP + 0x40]      ; 005b678f
    TEST ESI,ESI                        ; 005b6793
    JL 0x005b679b                       ; 005b6795
        ;   XREF to: 005b679b (CONDITIONAL_JUMP)  ; LAB_005b679b
    CMP ESI,dword ptr [EBX]             ; 005b6797
    JL 0x005b67be                       ; 005b6799
        ;   XREF to: 005b67be (CONDITIONAL_JUMP)  ; LAB_005b67be
    MOV ECX,0x5f16a9                    ; 005b679b | = "..\\core\\morph.cpp"
        ;   Label: LAB_005b679b
    MOV EBP,0x191                       ; 005b67a0
    PUSH 0x5f16bb                       ; 005b67a5 | = "CMorphModel::setFaceList - invalid pa..."
    MOV dword ptr [0x01d046a0],ECX      ; 005b67aa | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 005b67b0 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005b67b6
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005b67bb
    MOV EAX,ESI                         ; 005b67be
        ;   Label: LAB_005b67be
    SHL EAX,0x4                         ; 005b67c0
    MOV EDX,dword ptr [EBX + EAX*0x1 + 0x10] ; 005b67c3
    MOV ECX,dword ptr [EBX + EAX*0x1 + 0x8] ; 005b67c7
    MOV EAX,dword ptr [ESP + 0x44]      ; 005b67cb
    ADD EDI,EDX                         ; 005b67cf
    ADD EDX,ECX                         ; 005b67d1
    ADD EAX,EDI                         ; 005b67d3
    CMP EAX,EDX                         ; 005b67d5
    JLE 0x005b67fb                      ; 005b67d7
        ;   XREF to: 005b67fb (CONDITIONAL_JUMP)  ; LAB_005b67fb
    MOV EBP,0x5f16e9                    ; 005b67d9 | = "..\\core\\morph.cpp"
    MOV EAX,0x198                       ; 005b67de
    PUSH 0x5f16fb                       ; 005b67e3 | = "CMorphModel::setFaceList - invalid ve..."
    MOV dword ptr [0x01d046a0],EBP      ; 005b67e8 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 005b67ee | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005b67f3
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005b67f8
    MOV EAX,dword ptr [ESP + 0x34]      ; 005b67fb
        ;   Label: LAB_005b67fb
    XOR EDX,EDX                         ; 005b67ff
    MOV ECX,dword ptr [ESP + 0x44]      ; 005b6801
    MOV dword ptr [ESP + 0xc],EDX       ; 005b6805
    MOV dword ptr [ESP + 0x4],EAX       ; 005b6809
    TEST ECX,ECX                        ; 005b680d
    JLE 0x005b6930                      ; 005b680f
        ;   XREF to: 005b6930 (CONDITIONAL_JUMP)  ; LAB_005b6930
    SHL ESI,0x4                         ; 005b6815
    LEA EAX,[EBX + ESI*0x1]             ; 005b6818
    MOV dword ptr [ESP + 0x10],EAX      ; 005b681b
    LEA EAX,[EDI*0x4 + 0x0]             ; 005b681f
    MOV EDX,EAX                         ; 005b6826
    SHL EAX,0x4                         ; 005b6828
    SUB EAX,EDX                         ; 005b682b
    MOV dword ptr [ESP + 0x14],EAX      ; 005b682d
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005b6831
    MOV dword ptr [ESP + 0x8],EAX       ; 005b6835
    MOV EAX,dword ptr [ESP + 0x8]       ; 005b6839
        ;   Label: LAB_005b6839
    IMUL EAX,dword ptr [EAX],0x48       ; 005b683d
    ADD EAX,dword ptr [ESP + 0x38]      ; 005b6840
    ADD EAX,0x8                         ; 005b6844
    PUSH EAX                            ; 005b6847
    PUSH EBX                            ; 005b6848
    CALL core_morph.cpp_CMorphModel_findOrAddTexture_FUN_005b6940 ; 005b6849
        ;   XREF to: 005b6940 (UNCONDITIONAL_CALL)  ; int core_morph.cpp_CMorphModel_findOrAddTexture_FUN_005b6940(CMorphModel * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005b684e
    MOV EDI,dword ptr [ESP + 0x14]      ; 005b6851
    MOV dword ptr [ESP],EAX             ; 005b6855
    MOV EAX,dword ptr [EBX + 0x60]      ; 005b6858
    ADD EAX,EDI                         ; 005b685b
    XOR EDX,EDX                         ; 005b685d
    MOV ESI,EDI                         ; 005b685f
    MOV dword ptr [EAX + 0x4],0x3       ; 005b6861
    MOV EAX,dword ptr [ESP + 0x4]       ; 005b6868
    CMP dword ptr [0x0268014c],0x0      ; 005b686c | DAT_0268014c
        ;   Label: LAB_005b686c
    JZ 0x005b6938                       ; 005b6873
        ;   XREF to: 005b6938 (CONDITIONAL_JUMP)  ; LAB_005b6938
    MOV ECX,0x2                         ; 005b6879
    SUB ECX,EDX                         ; 005b687e
    IMUL ECX,ECX,0xc                    ; 005b6880
        ;   Label: LAB_005b6880
    MOV EDI,dword ptr [EBX + 0x60]      ; 005b6883
    ADD EDI,ESI                         ; 005b6886
    MOVZX EBP,word ptr [EAX]            ; 005b6888
    MOV dword ptr [ECX + EDI*0x1 + 0x18],EBP ; 005b688b
    ADD EAX,0x2                         ; 005b688f
    MOV EDI,dword ptr [EBX + 0x60]      ; 005b6892
    MOVZX EBP,word ptr [EAX + 0x4]      ; 005b6895
    ADD EDI,ESI                         ; 005b6899
    SHL EBP,0x8                         ; 005b689b
    INC EDX                             ; 005b689e
    MOV dword ptr [ECX + EDI*0x1 + 0x1c],EBP ; 005b689f
    MOV EBP,dword ptr [EBX + 0x60]      ; 005b68a3
    XOR EDI,EDI                         ; 005b68a6
    ADD EBP,ESI                         ; 005b68a8
    MOV DI,word ptr [EAX + 0xa]         ; 005b68aa
    ADD ECX,EBP                         ; 005b68ae
    SHL EDI,0x8                         ; 005b68b0
    MOV dword ptr [ECX + 0x20],EDI      ; 005b68b3
    CMP EDX,0x3                         ; 005b68b6
    JL 0x005b686c                       ; 005b68b9
        ;   XREF to: 005b686c (CONDITIONAL_JUMP)  ; LAB_005b686c
    MOV EAX,dword ptr [EBX + 0x60]      ; 005b68bb
    MOV EDX,dword ptr [ESP]             ; 005b68be
    MOV dword ptr [ESI + EAX*0x1],EDX   ; 005b68c1
    MOV EDX,dword ptr [ESP + 0x10]      ; 005b68c4
    MOV EAX,dword ptr [EBX + 0x60]      ; 005b68c8
    MOV EDX,dword ptr [EDX + 0xc]       ; 005b68cb
    ADD dword ptr [ESI + EAX*0x1 + 0x18],EDX ; 005b68ce
    MOV EDX,dword ptr [ESP + 0x10]      ; 005b68d2
    MOV EAX,dword ptr [EBX + 0x60]      ; 005b68d6
    MOV ECX,dword ptr [ESP + 0x14]      ; 005b68d9
    MOV EDX,dword ptr [EDX + 0xc]       ; 005b68dd
    MOV EBP,dword ptr [ESI + EAX*0x1 + 0x24] ; 005b68e0
    ADD ECX,0x3c                        ; 005b68e4
    ADD EBP,EDX                         ; 005b68e7
    MOV dword ptr [ESP + 0x14],ECX      ; 005b68e9
    MOV dword ptr [ESI + EAX*0x1 + 0x24],EBP ; 005b68ed
    MOV EDI,dword ptr [ESP + 0x8]       ; 005b68f1
    MOV EAX,dword ptr [EBX + 0x60]      ; 005b68f5
    ADD EDI,0x4                         ; 005b68f8
    ADD ESI,EAX                         ; 005b68fb
    MOV EAX,dword ptr [ESP + 0x10]      ; 005b68fd
    MOV dword ptr [ESP + 0x8],EDI       ; 005b6901
    MOV EDX,dword ptr [ESI + 0x30]      ; 005b6905
    MOV EAX,dword ptr [EAX + 0xc]       ; 005b6908
    MOV EBP,dword ptr [ESP + 0xc]       ; 005b690b
    ADD EDX,EAX                         ; 005b690f
    INC EBP                             ; 005b6911
    MOV dword ptr [ESI + 0x30],EDX      ; 005b6912
    MOV ESI,dword ptr [ESP + 0x4]       ; 005b6915
    MOV dword ptr [ESP + 0xc],EBP       ; 005b6919
    ADD ESI,0x12                        ; 005b691d
    MOV EDX,dword ptr [ESP + 0x44]      ; 005b6920
    MOV dword ptr [ESP + 0x4],ESI       ; 005b6924
    CMP EBP,EDX                         ; 005b6928
    JL 0x005b6839                       ; 005b692a
        ;   XREF to: 005b6839 (CONDITIONAL_JUMP)  ; LAB_005b6839
    ADD ESP,0x18                        ; 005b6930
        ;   Label: LAB_005b6930
    POP EBP                             ; 005b6933
    POP EDI                             ; 005b6934
    POP ESI                             ; 005b6935
    POP EBX                             ; 005b6936
    RET                                 ; 005b6937
    MOV ECX,EDX                         ; 005b6938
        ;   Label: LAB_005b6938
    JMP 0x005b6880                      ; 005b693a
        ;   XREF to: 005b6880 (UNCONDITIONAL_JUMP)  ; LAB_005b6880

