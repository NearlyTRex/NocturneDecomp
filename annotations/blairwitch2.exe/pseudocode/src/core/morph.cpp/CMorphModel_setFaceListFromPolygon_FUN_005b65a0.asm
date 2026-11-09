; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_setFaceListFromPolygon_FUN_005b65a0(CMorphModel *this_ptr,int part_index,SMRGLHeaderPrimitive *poly_data,int poly_stride ,SMRGLTextureModel *texture_list,int *texture_index_list,int start_face,int poly_count)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   part_index
; SMRGLHeaderPrimitive * Stack[0xc]:4   poly_data
; int              Stack[0x10]:4   poly_stride
; SMRGLTextureModel * Stack[0x14]:4   texture_list
; int *            Stack[0x18]:4   texture_index_list
; int              Stack[0x1c]:4   start_face
; int              Stack[0x20]:4   poly_count
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_005b6090 at 005b61f2
;
; Referenced Globals:
;   TerminatedCString s_core_morph_cpp_005f1627
;   TerminatedCString s_CMorphModel_setFaceList_005f1639
;   TerminatedCString s_core_morph_cpp_005f1667
;   TerminatedCString s_CMorphModel_setFaceList_005f1679
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

    PUSH EBX                            ; 005b65a0
        ;   Label: core_morph.cpp_CMorphModel_setFaceListFromPolygon_FUN_005b65a0
    PUSH ESI                            ; 005b65a1
    PUSH EDI                            ; 005b65a2
    PUSH EBP                            ; 005b65a3
    SUB ESP,0x18                        ; 005b65a4
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005b65a7
    MOV ESI,dword ptr [ESP + 0x30]      ; 005b65ab
    MOV EDI,dword ptr [ESP + 0x44]      ; 005b65af
    TEST ESI,ESI                        ; 005b65b3
    JL 0x005b65bb                       ; 005b65b5
        ;   XREF to: 005b65bb (CONDITIONAL_JUMP)  ; LAB_005b65bb
    CMP ESI,dword ptr [EBX]             ; 005b65b7
    JL 0x005b65de                       ; 005b65b9
        ;   XREF to: 005b65de (CONDITIONAL_JUMP)  ; LAB_005b65de
    MOV ECX,0x5f1627                    ; 005b65bb | = "..\\core\\morph.cpp"
        ;   Label: LAB_005b65bb
    MOV EBP,0x152                       ; 005b65c0
    PUSH 0x5f1639                       ; 005b65c5 | = "CMorphModel::setFaceList - invalid pa..."
    MOV dword ptr [0x01d046a0],ECX      ; 005b65ca | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 005b65d0 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005b65d6
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005b65db
    MOV EAX,ESI                         ; 005b65de
        ;   Label: LAB_005b65de
    SHL EAX,0x4                         ; 005b65e0
    MOV EDX,dword ptr [EBX + EAX*0x1 + 0x10] ; 005b65e3
    MOV ECX,dword ptr [EBX + EAX*0x1 + 0x8] ; 005b65e7
    MOV EAX,dword ptr [ESP + 0x48]      ; 005b65eb
    ADD EDI,EDX                         ; 005b65ef
    ADD EDX,ECX                         ; 005b65f1
    ADD EAX,EDI                         ; 005b65f3
    CMP EAX,EDX                         ; 005b65f5
    JLE 0x005b661b                      ; 005b65f7
        ;   XREF to: 005b661b (CONDITIONAL_JUMP)  ; LAB_005b661b
    MOV EBP,0x5f1667                    ; 005b65f9 | = "..\\core\\morph.cpp"
    MOV EAX,0x159                       ; 005b65fe
    PUSH 0x5f1679                       ; 005b6603 | = "CMorphModel::setFaceList - invalid ve..."
    MOV dword ptr [0x01d046a0],EBP      ; 005b6608 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 005b660e | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005b6613
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005b6618
    MOV ECX,dword ptr [ESP + 0x48]      ; 005b661b
        ;   Label: LAB_005b661b
    MOV EBP,dword ptr [ESP + 0x34]      ; 005b661f
    XOR EDX,EDX                         ; 005b6623
    MOV dword ptr [ESP + 0x10],EDI      ; 005b6625
    MOV dword ptr [ESP + 0x8],EDX       ; 005b6629
    TEST ECX,ECX                        ; 005b662d
    JLE 0x005b6747                      ; 005b662f
        ;   XREF to: 005b6747 (CONDITIONAL_JUMP)  ; LAB_005b6747
    SHL ESI,0x4                         ; 005b6635
    LEA EAX,[EBX + ESI*0x1]             ; 005b6638
    MOV dword ptr [ESP + 0x14],EAX      ; 005b663b
    MOV EAX,dword ptr [ESP + 0x40]      ; 005b663f
    MOV dword ptr [ESP + 0x4],EAX       ; 005b6643
    MOV EAX,dword ptr [ESP + 0x4]       ; 005b6647
        ;   Label: LAB_005b6647
    IMUL EAX,dword ptr [EAX],0x48       ; 005b664b
    ADD EAX,dword ptr [ESP + 0x3c]      ; 005b664e
    ADD EAX,0x8                         ; 005b6652
    PUSH EAX                            ; 005b6655
    PUSH EBX                            ; 005b6656
    CALL core_morph.cpp_CMorphModel_findOrAddTexture_FUN_005b6940 ; 005b6657
        ;   XREF to: 005b6940 (UNCONDITIONAL_CALL)  ; int core_morph.cpp_CMorphModel_findOrAddTexture_FUN_005b6940(CMorphModel * this_ptr, char * filename)
    MOV ECX,0x2                         ; 005b665c
    ADD ESP,0x8                         ; 005b6661
    MOV EDI,dword ptr [EBP + 0x4]       ; 005b6664
    MOV dword ptr [ESP + 0xc],EAX       ; 005b6667
    CMP EDI,ECX                         ; 005b666b
    JLE 0x005b6721                      ; 005b666d
        ;   XREF to: 005b6721 (CONDITIONAL_JUMP)  ; LAB_005b6721
    MOV ESI,dword ptr [ESP + 0x10]      ; 005b6673
    LEA EDX,[EBP + 0x18]                ; 005b6677
    IMUL EAX,ESI,0x3c                   ; 005b667a
    MOV ESI,dword ptr [EBX + 0x60]      ; 005b667d
        ;   Label: LAB_005b667d
    MOV EDI,dword ptr [0x0268014c]      ; 005b6680 | DAT_0268014c
    MOV dword ptr [ESI + EAX*0x1 + 0x4],0x3 ; 005b6686
    TEST EDI,EDI                        ; 005b668e
    JZ 0x005b674f                       ; 005b6690
        ;   XREF to: 005b674f (CONDITIONAL_JUMP)  ; LAB_005b674f
    MOV ESI,dword ptr [EBX + 0x60]      ; 005b6696
    LEA EDI,[ESI + EAX*0x1 + 0x18]      ; 005b6699
    LEA ESI,[EDX + 0x18]                ; 005b669d
    MOVSD ES:EDI,ESI                    ; 005b66a0
    MOVSD ES:EDI,ESI                    ; 005b66a1
    MOVSD ES:EDI,ESI                    ; 005b66a2
    MOV ESI,dword ptr [EBX + 0x60]      ; 005b66a3
    LEA EDI,[ESI + EAX*0x1 + 0x24]      ; 005b66a6
    LEA ESI,[EDX + 0xc]                 ; 005b66aa
    MOVSD ES:EDI,ESI                    ; 005b66ad
    MOVSD ES:EDI,ESI                    ; 005b66ae
    MOVSD ES:EDI,ESI                    ; 005b66af
    MOV ESI,dword ptr [EBX + 0x60]      ; 005b66b0
    LEA EDI,[ESI + EAX*0x1 + 0x30]      ; 005b66b3
    LEA ESI,[EBP + 0x18]                ; 005b66b7
    MOVSD ES:EDI,ESI                    ; 005b66ba
        ;   Label: LAB_005b66ba
    MOVSD ES:EDI,ESI                    ; 005b66bb
    MOVSD ES:EDI,ESI                    ; 005b66bc
    MOV ESI,dword ptr [EBX + 0x60]      ; 005b66bd
    MOV EDI,dword ptr [ESP + 0xc]       ; 005b66c0
    MOV dword ptr [ESI + EAX*0x1],EDI   ; 005b66c4
    MOV ESI,dword ptr [EBX + 0x60]      ; 005b66c7
    ADD ESI,EAX                         ; 005b66ca
    MOV dword ptr [ESP],ESI             ; 005b66cc
    MOV ESI,dword ptr [ESP + 0x14]      ; 005b66cf
    MOV EDI,dword ptr [ESP]             ; 005b66d3
    MOV ESI,dword ptr [ESI + 0xc]       ; 005b66d6
    ADD dword ptr [EDI + 0x18],ESI      ; 005b66d9
    MOV ESI,dword ptr [EBX + 0x60]      ; 005b66dc
    ADD ESI,EAX                         ; 005b66df
    MOV dword ptr [ESP],ESI             ; 005b66e1
    MOV ESI,dword ptr [ESP + 0x14]      ; 005b66e4
    MOV EDI,dword ptr [ESP]             ; 005b66e8
    MOV ESI,dword ptr [ESI + 0xc]       ; 005b66eb
    ADD dword ptr [EDI + 0x24],ESI      ; 005b66ee
    MOV ESI,dword ptr [EBX + 0x60]      ; 005b66f1
    ADD ESI,EAX                         ; 005b66f4
    MOV dword ptr [ESP],ESI             ; 005b66f6
    MOV ESI,dword ptr [ESP + 0x14]      ; 005b66f9
    ADD EDX,0xc                         ; 005b66fd
    MOV EDI,dword ptr [ESP]             ; 005b6700
    MOV ESI,dword ptr [ESI + 0xc]       ; 005b6703
    INC ECX                             ; 005b6706
    ADD dword ptr [EDI + 0x30],ESI      ; 005b6707
    MOV ESI,dword ptr [ESP + 0x10]      ; 005b670a
    ADD EAX,0x3c                        ; 005b670e
    INC ESI                             ; 005b6711
    MOV EDI,dword ptr [EBP + 0x4]       ; 005b6712
    MOV dword ptr [ESP + 0x10],ESI      ; 005b6715
    CMP ECX,EDI                         ; 005b6719
    JL 0x005b667d                       ; 005b671b
        ;   XREF to: 005b667d (CONDITIONAL_JUMP)  ; LAB_005b667d
    MOV ESI,dword ptr [ESP + 0x38]      ; 005b6721
        ;   Label: LAB_005b6721
    MOV EDI,dword ptr [ESP + 0x4]       ; 005b6725
    MOV EAX,dword ptr [ESP + 0x8]       ; 005b6729
    MOV EDX,dword ptr [ESP + 0x48]      ; 005b672d
    ADD EDI,0x4                         ; 005b6731
    INC EAX                             ; 005b6734
    ADD EBP,ESI                         ; 005b6735
    MOV dword ptr [ESP + 0x4],EDI       ; 005b6737
    MOV dword ptr [ESP + 0x8],EAX       ; 005b673b
    CMP EAX,EDX                         ; 005b673f
    JL 0x005b6647                       ; 005b6741
        ;   XREF to: 005b6647 (CONDITIONAL_JUMP)  ; LAB_005b6647
    ADD ESP,0x18                        ; 005b6747
        ;   Label: LAB_005b6747
    POP EBP                             ; 005b674a
    POP EDI                             ; 005b674b
    POP ESI                             ; 005b674c
    POP EBX                             ; 005b674d
    RET                                 ; 005b674e
    MOV ESI,dword ptr [EBX + 0x60]      ; 005b674f
        ;   Label: LAB_005b674f
    LEA EDI,[ESI + EAX*0x1 + 0x18]      ; 005b6752
    LEA ESI,[EBP + 0x18]                ; 005b6756
    MOVSD ES:EDI,ESI                    ; 005b6759
    MOVSD ES:EDI,ESI                    ; 005b675a
    MOVSD ES:EDI,ESI                    ; 005b675b
    MOV ESI,dword ptr [EBX + 0x60]      ; 005b675c
    LEA EDI,[ESI + EAX*0x1 + 0x24]      ; 005b675f
    LEA ESI,[EDX + 0xc]                 ; 005b6763
    MOVSD ES:EDI,ESI                    ; 005b6766
    MOVSD ES:EDI,ESI                    ; 005b6767
    MOVSD ES:EDI,ESI                    ; 005b6768
    MOV ESI,dword ptr [EBX + 0x60]      ; 005b6769
    LEA EDI,[ESI + EAX*0x1 + 0x30]      ; 005b676c
    LEA ESI,[EDX + 0x18]                ; 005b6770
    JMP 0x005b66ba                      ; 005b6773
        ;   XREF to: 005b66ba (UNCONDITIONAL_JUMP)  ; LAB_005b66ba

