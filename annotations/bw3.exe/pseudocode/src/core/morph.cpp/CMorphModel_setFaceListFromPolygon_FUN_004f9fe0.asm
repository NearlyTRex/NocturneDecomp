; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_setFaceListFromPolygon_FUN_004f9fe0(CMorphModel *this_ptr,int part_index,SMRGLHeaderPrimitive *poly_data,int poly_stride ,SMRGLTextureModel *texture_list,int *texture_index_list,int start_face,int poly_count)
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
;   core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_004f9ad0 at 004f9c32
;
; Referenced Globals:
;   TerminatedCString s_core_morph_cpp_005c9553
;   TerminatedCString s_CMorphModel_setFaceList_005c9565
;   TerminatedCString s_core_morph_cpp_005c9593
;   TerminatedCString s_CMorphModel_setFaceList_005c95a5
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01d8e408
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_morph.cpp_CMorphModel_findOrAddTexture_FUN_004fa380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9fe0
        ;   Label: core_morph.cpp_CMorphModel_setFaceListFromPolygon_FUN_004f9fe0
    PUSH ESI                            ; 004f9fe1
    PUSH EDI                            ; 004f9fe2
    PUSH EBP                            ; 004f9fe3
    SUB ESP,0x18                        ; 004f9fe4
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004f9fe7
    MOV ESI,dword ptr [ESP + 0x30]      ; 004f9feb
    MOV EDI,dword ptr [ESP + 0x44]      ; 004f9fef
    TEST ESI,ESI                        ; 004f9ff3
    JL 0x004f9ffb                       ; 004f9ff5
        ;   XREF to: 004f9ffb (CONDITIONAL_JUMP)  ; LAB_004f9ffb
    CMP ESI,dword ptr [EBX]             ; 004f9ff7
    JL 0x004fa01e                       ; 004f9ff9
        ;   XREF to: 004fa01e (CONDITIONAL_JUMP)  ; LAB_004fa01e
    MOV ECX,0x5c9553                    ; 004f9ffb | = "..\\core\\morph.cpp"
        ;   Label: LAB_004f9ffb
    MOV EBP,0x152                       ; 004fa000
    PUSH 0x5c9565                       ; 004fa005 | = "CMorphModel::setFaceList - invalid pa..."
    MOV dword ptr [0x01d71de0],ECX      ; 004fa00a | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 004fa010 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004fa016
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004fa01b
    MOV EAX,ESI                         ; 004fa01e
        ;   Label: LAB_004fa01e
    SHL EAX,0x4                         ; 004fa020
    MOV EDX,dword ptr [EBX + EAX*0x1 + 0x10] ; 004fa023
    MOV ECX,dword ptr [EBX + EAX*0x1 + 0x8] ; 004fa027
    MOV EAX,dword ptr [ESP + 0x48]      ; 004fa02b
    ADD EDI,EDX                         ; 004fa02f
    ADD EDX,ECX                         ; 004fa031
    ADD EAX,EDI                         ; 004fa033
    CMP EAX,EDX                         ; 004fa035
    JLE 0x004fa05b                      ; 004fa037
        ;   XREF to: 004fa05b (CONDITIONAL_JUMP)  ; LAB_004fa05b
    MOV EBP,0x5c9593                    ; 004fa039 | = "..\\core\\morph.cpp"
    MOV EAX,0x159                       ; 004fa03e
    PUSH 0x5c95a5                       ; 004fa043 | = "CMorphModel::setFaceList - invalid ve..."
    MOV dword ptr [0x01d71de0],EBP      ; 004fa048 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004fa04e | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004fa053
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004fa058
    MOV ECX,dword ptr [ESP + 0x48]      ; 004fa05b
        ;   Label: LAB_004fa05b
    MOV EBP,dword ptr [ESP + 0x34]      ; 004fa05f
    XOR EDX,EDX                         ; 004fa063
    MOV dword ptr [ESP + 0x10],EDI      ; 004fa065
    MOV dword ptr [ESP + 0x8],EDX       ; 004fa069
    TEST ECX,ECX                        ; 004fa06d
    JLE 0x004fa187                      ; 004fa06f
        ;   XREF to: 004fa187 (CONDITIONAL_JUMP)  ; LAB_004fa187
    SHL ESI,0x4                         ; 004fa075
    LEA EAX,[EBX + ESI*0x1]             ; 004fa078
    MOV dword ptr [ESP + 0x14],EAX      ; 004fa07b
    MOV EAX,dword ptr [ESP + 0x40]      ; 004fa07f
    MOV dword ptr [ESP + 0x4],EAX       ; 004fa083
    MOV EAX,dword ptr [ESP + 0x4]       ; 004fa087
        ;   Label: LAB_004fa087
    IMUL EAX,dword ptr [EAX],0x48       ; 004fa08b
    ADD EAX,dword ptr [ESP + 0x3c]      ; 004fa08e
    ADD EAX,0x8                         ; 004fa092
    PUSH EAX                            ; 004fa095
    PUSH EBX                            ; 004fa096
    CALL core_morph.cpp_CMorphModel_findOrAddTexture_FUN_004fa380 ; 004fa097
        ;   XREF to: 004fa380 (UNCONDITIONAL_CALL)  ; int core_morph.cpp_CMorphModel_findOrAddTexture_FUN_004fa380(CMorphModel * this_ptr, char * filename)
    MOV ECX,0x2                         ; 004fa09c
    ADD ESP,0x8                         ; 004fa0a1
    MOV EDI,dword ptr [EBP + 0x4]       ; 004fa0a4
    MOV dword ptr [ESP + 0xc],EAX       ; 004fa0a7
    CMP EDI,ECX                         ; 004fa0ab
    JLE 0x004fa161                      ; 004fa0ad
        ;   XREF to: 004fa161 (CONDITIONAL_JUMP)  ; LAB_004fa161
    MOV ESI,dword ptr [ESP + 0x10]      ; 004fa0b3
    LEA EDX,[EBP + 0x18]                ; 004fa0b7
    IMUL EAX,ESI,0x3c                   ; 004fa0ba
    MOV ESI,dword ptr [EBX + 0x60]      ; 004fa0bd
        ;   Label: LAB_004fa0bd
    MOV EDI,dword ptr [0x01d8e408]      ; 004fa0c0 | DAT_01d8e408
    MOV dword ptr [ESI + EAX*0x1 + 0x4],0x3 ; 004fa0c6
    TEST EDI,EDI                        ; 004fa0ce
    JZ 0x004fa18f                       ; 004fa0d0
        ;   XREF to: 004fa18f (CONDITIONAL_JUMP)  ; LAB_004fa18f
    MOV ESI,dword ptr [EBX + 0x60]      ; 004fa0d6
    LEA EDI,[ESI + EAX*0x1 + 0x18]      ; 004fa0d9
    LEA ESI,[EDX + 0x18]                ; 004fa0dd
    MOVSD ES:EDI,ESI                    ; 004fa0e0
    MOVSD ES:EDI,ESI                    ; 004fa0e1
    MOVSD ES:EDI,ESI                    ; 004fa0e2
    MOV ESI,dword ptr [EBX + 0x60]      ; 004fa0e3
    LEA EDI,[ESI + EAX*0x1 + 0x24]      ; 004fa0e6
    LEA ESI,[EDX + 0xc]                 ; 004fa0ea
    MOVSD ES:EDI,ESI                    ; 004fa0ed
    MOVSD ES:EDI,ESI                    ; 004fa0ee
    MOVSD ES:EDI,ESI                    ; 004fa0ef
    MOV ESI,dword ptr [EBX + 0x60]      ; 004fa0f0
    LEA EDI,[ESI + EAX*0x1 + 0x30]      ; 004fa0f3
    LEA ESI,[EBP + 0x18]                ; 004fa0f7
    MOVSD ES:EDI,ESI                    ; 004fa0fa
        ;   Label: LAB_004fa0fa
    MOVSD ES:EDI,ESI                    ; 004fa0fb
    MOVSD ES:EDI,ESI                    ; 004fa0fc
    MOV ESI,dword ptr [EBX + 0x60]      ; 004fa0fd
    MOV EDI,dword ptr [ESP + 0xc]       ; 004fa100
    MOV dword ptr [ESI + EAX*0x1],EDI   ; 004fa104
    MOV ESI,dword ptr [EBX + 0x60]      ; 004fa107
    ADD ESI,EAX                         ; 004fa10a
    MOV dword ptr [ESP],ESI             ; 004fa10c
    MOV ESI,dword ptr [ESP + 0x14]      ; 004fa10f
    MOV EDI,dword ptr [ESP]             ; 004fa113
    MOV ESI,dword ptr [ESI + 0xc]       ; 004fa116
    ADD dword ptr [EDI + 0x18],ESI      ; 004fa119
    MOV ESI,dword ptr [EBX + 0x60]      ; 004fa11c
    ADD ESI,EAX                         ; 004fa11f
    MOV dword ptr [ESP],ESI             ; 004fa121
    MOV ESI,dword ptr [ESP + 0x14]      ; 004fa124
    MOV EDI,dword ptr [ESP]             ; 004fa128
    MOV ESI,dword ptr [ESI + 0xc]       ; 004fa12b
    ADD dword ptr [EDI + 0x24],ESI      ; 004fa12e
    MOV ESI,dword ptr [EBX + 0x60]      ; 004fa131
    ADD ESI,EAX                         ; 004fa134
    MOV dword ptr [ESP],ESI             ; 004fa136
    MOV ESI,dword ptr [ESP + 0x14]      ; 004fa139
    ADD EDX,0xc                         ; 004fa13d
    MOV EDI,dword ptr [ESP]             ; 004fa140
    MOV ESI,dword ptr [ESI + 0xc]       ; 004fa143
    INC ECX                             ; 004fa146
    ADD dword ptr [EDI + 0x30],ESI      ; 004fa147
    MOV ESI,dword ptr [ESP + 0x10]      ; 004fa14a
    ADD EAX,0x3c                        ; 004fa14e
    INC ESI                             ; 004fa151
    MOV EDI,dword ptr [EBP + 0x4]       ; 004fa152
    MOV dword ptr [ESP + 0x10],ESI      ; 004fa155
    CMP ECX,EDI                         ; 004fa159
    JL 0x004fa0bd                       ; 004fa15b
        ;   XREF to: 004fa0bd (CONDITIONAL_JUMP)  ; LAB_004fa0bd
    MOV ESI,dword ptr [ESP + 0x38]      ; 004fa161
        ;   Label: LAB_004fa161
    MOV EDI,dword ptr [ESP + 0x4]       ; 004fa165
    MOV EAX,dword ptr [ESP + 0x8]       ; 004fa169
    MOV EDX,dword ptr [ESP + 0x48]      ; 004fa16d
    ADD EDI,0x4                         ; 004fa171
    INC EAX                             ; 004fa174
    ADD EBP,ESI                         ; 004fa175
    MOV dword ptr [ESP + 0x4],EDI       ; 004fa177
    MOV dword ptr [ESP + 0x8],EAX       ; 004fa17b
    CMP EAX,EDX                         ; 004fa17f
    JL 0x004fa087                       ; 004fa181
        ;   XREF to: 004fa087 (CONDITIONAL_JUMP)  ; LAB_004fa087
    ADD ESP,0x18                        ; 004fa187
        ;   Label: LAB_004fa187
    POP EBP                             ; 004fa18a
    POP EDI                             ; 004fa18b
    POP ESI                             ; 004fa18c
    POP EBX                             ; 004fa18d
    RET                                 ; 004fa18e
    MOV ESI,dword ptr [EBX + 0x60]      ; 004fa18f
        ;   Label: LAB_004fa18f
    LEA EDI,[ESI + EAX*0x1 + 0x18]      ; 004fa192
    LEA ESI,[EBP + 0x18]                ; 004fa196
    MOVSD ES:EDI,ESI                    ; 004fa199
    MOVSD ES:EDI,ESI                    ; 004fa19a
    MOVSD ES:EDI,ESI                    ; 004fa19b
    MOV ESI,dword ptr [EBX + 0x60]      ; 004fa19c
    LEA EDI,[ESI + EAX*0x1 + 0x24]      ; 004fa19f
    LEA ESI,[EDX + 0xc]                 ; 004fa1a3
    MOVSD ES:EDI,ESI                    ; 004fa1a6
    MOVSD ES:EDI,ESI                    ; 004fa1a7
    MOVSD ES:EDI,ESI                    ; 004fa1a8
    MOV ESI,dword ptr [EBX + 0x60]      ; 004fa1a9
    LEA EDI,[ESI + EAX*0x1 + 0x30]      ; 004fa1ac
    LEA ESI,[EDX + 0x18]                ; 004fa1b0
    JMP 0x004fa0fa                      ; 004fa1b3
        ;   XREF to: 004fa0fa (UNCONDITIONAL_JUMP)  ; LAB_004fa0fa

