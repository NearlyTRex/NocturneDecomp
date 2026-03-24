; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_setFaceListFromPolygon_FUN_0052aac0(CMorphModel *this_ptr,int part_index,SMRGLHeaderPrimitive *poly_data,int poly_stride ,SMRGLTextureLod *texture_list,int *texture_index_list,int start_face,int poly_count)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   part_index
; SMRGLHeaderPrimitive * Stack[0xc]:4   poly_data
; int              Stack[0x10]:4   poly_stride
; SMRGLTextureLod * Stack[0x14]:4   texture_list
; int *            Stack[0x18]:4   texture_index_list
; int              Stack[0x1c]:4   start_face
; int              Stack[0x20]:4   poly_count
; Local Variables:
; int *            Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_0052a580 at 0052a6f8
;
; Referenced Globals:
;   TerminatedCString s_core_morph_cpp_0063a2a3
;   TerminatedCString s_CMorphModel_setFaceList__0063a2b5
;   TerminatedCString s_core_morph_cpp_0063a2e3
;   TerminatedCString s_CMorphModel_setFaceList__0063a2f5
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int INT_02f43974
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_morph.cpp_CMorphModel_findOrAddTexture_FUN_0052ae60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052aac0
        ;   Label: core_morph.cpp_CMorphModel_setFaceListFromPolygon_FUN_0052aac0
    PUSH ESI                            ; 0052aac1
    PUSH EDI                            ; 0052aac2
    PUSH EBP                            ; 0052aac3
    SUB ESP,0x18                        ; 0052aac4
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0052aac7
    MOV ESI,dword ptr [ESP + 0x30]      ; 0052aacb
    MOV EDI,dword ptr [ESP + 0x44]      ; 0052aacf
    TEST ESI,ESI                        ; 0052aad3
    JL 0x0052aadb                       ; 0052aad5
        ;   XREF to: 0052aadb (CONDITIONAL_JUMP)  ; LAB_0052aadb
    CMP ESI,dword ptr [EBX]             ; 0052aad7
    JL 0x0052aafe                       ; 0052aad9
        ;   XREF to: 0052aafe (CONDITIONAL_JUMP)  ; LAB_0052aafe
    MOV ECX,0x63a2a3                    ; 0052aadb | = "..\\core\\morph.cpp"
        ;   Label: LAB_0052aadb
    MOV EBP,0x152                       ; 0052aae0
    PUSH 0x63a2b5                       ; 0052aae5 | = "CMorphModel::setFaceList - invalid pa..."
    MOV dword ptr [0x02f0ca48],ECX      ; 0052aaea | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 0052aaf0 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0052aaf6
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0052aafb
    MOV EAX,ESI                         ; 0052aafe
        ;   Label: LAB_0052aafe
    SHL EAX,0x4                         ; 0052ab00
    MOV EDX,dword ptr [EBX + EAX*0x1 + 0x10] ; 0052ab03
    MOV ECX,dword ptr [EBX + EAX*0x1 + 0x8] ; 0052ab07
    MOV EAX,dword ptr [ESP + 0x48]      ; 0052ab0b
    ADD EDI,EDX                         ; 0052ab0f
    ADD EDX,ECX                         ; 0052ab11
    ADD EAX,EDI                         ; 0052ab13
    CMP EAX,EDX                         ; 0052ab15
    JLE 0x0052ab3b                      ; 0052ab17
        ;   XREF to: 0052ab3b (CONDITIONAL_JUMP)  ; LAB_0052ab3b
    MOV EBP,0x63a2e3                    ; 0052ab19 | = "..\\core\\morph.cpp"
    MOV EAX,0x159                       ; 0052ab1e
    PUSH 0x63a2f5                       ; 0052ab23 | = "CMorphModel::setFaceList - invalid ve..."
    MOV dword ptr [0x02f0ca48],EBP      ; 0052ab28 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0052ab2e | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0052ab33
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0052ab38
    MOV ECX,dword ptr [ESP + 0x48]      ; 0052ab3b
        ;   Label: LAB_0052ab3b
    MOV EBP,dword ptr [ESP + 0x34]      ; 0052ab3f
    XOR EDX,EDX                         ; 0052ab43
    MOV dword ptr [ESP + 0x10],EDI      ; 0052ab45
    MOV dword ptr [ESP + 0x8],EDX       ; 0052ab49
    TEST ECX,ECX                        ; 0052ab4d
    JLE 0x0052ac67                      ; 0052ab4f
        ;   XREF to: 0052ac67 (CONDITIONAL_JUMP)  ; LAB_0052ac67
    SHL ESI,0x4                         ; 0052ab55
    LEA EAX,[EBX + ESI*0x1]             ; 0052ab58
    MOV dword ptr [ESP + 0x14],EAX      ; 0052ab5b
    MOV EAX,dword ptr [ESP + 0x40]      ; 0052ab5f
    MOV dword ptr [ESP + 0x4],EAX       ; 0052ab63
    MOV EAX,dword ptr [ESP + 0x4]       ; 0052ab67
        ;   Label: LAB_0052ab67
    IMUL EAX,dword ptr [EAX],0x48       ; 0052ab6b
    ADD EAX,dword ptr [ESP + 0x3c]      ; 0052ab6e
    ADD EAX,0x8                         ; 0052ab72
    PUSH EAX                            ; 0052ab75
    PUSH EBX                            ; 0052ab76
    CALL core_morph.cpp_CMorphModel_findOrAddTexture_FUN_0052ae60 ; 0052ab77
        ;   XREF to: 0052ae60 (UNCONDITIONAL_CALL)  ; int core_morph.cpp_CMorphModel_findOrAddTexture_FUN_0052ae60(CMorphModel * this_ptr, char * filename)
    MOV ECX,0x2                         ; 0052ab7c
    ADD ESP,0x8                         ; 0052ab81
    MOV EDI,dword ptr [EBP + 0x4]       ; 0052ab84
    MOV dword ptr [ESP + 0xc],EAX       ; 0052ab87
    CMP EDI,ECX                         ; 0052ab8b
    JLE 0x0052ac41                      ; 0052ab8d
        ;   XREF to: 0052ac41 (CONDITIONAL_JUMP)  ; LAB_0052ac41
    MOV ESI,dword ptr [ESP + 0x10]      ; 0052ab93
    LEA EDX,[EBP + 0x18]                ; 0052ab97
    IMUL EAX,ESI,0x3c                   ; 0052ab9a
    MOV ESI,dword ptr [EBX + 0x60]      ; 0052ab9d
        ;   Label: LAB_0052ab9d
    MOV EDI,dword ptr [0x02f43974]      ; 0052aba0 | INT_02f43974
    MOV dword ptr [ESI + EAX*0x1 + 0x4],0x3 ; 0052aba6
    TEST EDI,EDI                        ; 0052abae
    JZ 0x0052ac6f                       ; 0052abb0
        ;   XREF to: 0052ac6f (CONDITIONAL_JUMP)  ; LAB_0052ac6f
    MOV ESI,dword ptr [EBX + 0x60]      ; 0052abb6
    LEA EDI,[ESI + EAX*0x1 + 0x18]      ; 0052abb9
    LEA ESI,[EDX + 0x18]                ; 0052abbd
    JMP 0x0060a11a                      ; 0052abc0
        ;   XREF to: 0060a11a (UNCONDITIONAL_JUMP)  ; LAB_0060a11a
    LEA EDI,[ESI + EAX*0x1 + 0x24]      ; 0052abc6
        ;   Label: LAB_0052abc6
    LEA ESI,[EDX + 0xc]                 ; 0052abca
    JMP 0x0060a138                      ; 0052abcd
        ;   XREF to: 0060a138 (UNCONDITIONAL_JUMP)  ; LAB_0060a138
    LEA EDI,[ESI + EAX*0x1 + 0x30]      ; 0052abd3
        ;   Label: LAB_0052abd3
    LEA ESI,[EBP + 0x18]                ; 0052abd7
    JMP 0x0060a156                      ; 0052abda
        ;   XREF to: 0060a156 (UNCONDITIONAL_JUMP)  ; LAB_0060a156
        ;   Label: LAB_0052abda
    MOV EDI,dword ptr [ESP + 0xc]       ; 0052abe0
        ;   Label: LAB_0052abe0
    MOV dword ptr [ESI + EAX*0x1],EDI   ; 0052abe4
    MOV ESI,dword ptr [EBX + 0x60]      ; 0052abe7
    ADD ESI,EAX                         ; 0052abea
    MOV dword ptr [ESP],ESI             ; 0052abec
    MOV ESI,dword ptr [ESP + 0x14]      ; 0052abef
    MOV EDI,dword ptr [ESP]             ; 0052abf3
    MOV ESI,dword ptr [ESI + 0xc]       ; 0052abf6
    ADD dword ptr [EDI + 0x18],ESI      ; 0052abf9
    MOV ESI,dword ptr [EBX + 0x60]      ; 0052abfc
    ADD ESI,EAX                         ; 0052abff
    MOV dword ptr [ESP],ESI             ; 0052ac01
    MOV ESI,dword ptr [ESP + 0x14]      ; 0052ac04
    MOV EDI,dword ptr [ESP]             ; 0052ac08
    MOV ESI,dword ptr [ESI + 0xc]       ; 0052ac0b
    ADD dword ptr [EDI + 0x24],ESI      ; 0052ac0e
    MOV ESI,dword ptr [EBX + 0x60]      ; 0052ac11
    ADD ESI,EAX                         ; 0052ac14
    MOV dword ptr [ESP],ESI             ; 0052ac16
    MOV ESI,dword ptr [ESP + 0x14]      ; 0052ac19
    ADD EDX,0xc                         ; 0052ac1d
    MOV EDI,dword ptr [ESP]             ; 0052ac20
    MOV ESI,dword ptr [ESI + 0xc]       ; 0052ac23
    INC ECX                             ; 0052ac26
    ADD dword ptr [EDI + 0x30],ESI      ; 0052ac27
    MOV ESI,dword ptr [ESP + 0x10]      ; 0052ac2a
    ADD EAX,0x3c                        ; 0052ac2e
    INC ESI                             ; 0052ac31
    MOV EDI,dword ptr [EBP + 0x4]       ; 0052ac32
    MOV dword ptr [ESP + 0x10],ESI      ; 0052ac35
    CMP ECX,EDI                         ; 0052ac39
    JL 0x0052ab9d                       ; 0052ac3b
        ;   XREF to: 0052ab9d (CONDITIONAL_JUMP)  ; LAB_0052ab9d
    MOV ESI,dword ptr [ESP + 0x38]      ; 0052ac41
        ;   Label: LAB_0052ac41
    MOV EDI,dword ptr [ESP + 0x4]       ; 0052ac45
    MOV EAX,dword ptr [ESP + 0x8]       ; 0052ac49
    MOV EDX,dword ptr [ESP + 0x48]      ; 0052ac4d
    ADD EDI,0x4                         ; 0052ac51
    INC EAX                             ; 0052ac54
    ADD EBP,ESI                         ; 0052ac55
    MOV dword ptr [ESP + 0x4],EDI       ; 0052ac57
    MOV dword ptr [ESP + 0x8],EAX       ; 0052ac5b
    CMP EAX,EDX                         ; 0052ac5f
    JL 0x0052ab67                       ; 0052ac61
        ;   XREF to: 0052ab67 (CONDITIONAL_JUMP)  ; LAB_0052ab67
    ADD ESP,0x18                        ; 0052ac67
        ;   Label: LAB_0052ac67
    POP EBP                             ; 0052ac6a
    POP EDI                             ; 0052ac6b
    POP ESI                             ; 0052ac6c
    POP EBX                             ; 0052ac6d
    RET                                 ; 0052ac6e
    MOV ESI,dword ptr [EBX + 0x60]      ; 0052ac6f
        ;   Label: LAB_0052ac6f
    LEA EDI,[ESI + EAX*0x1 + 0x18]      ; 0052ac72
    LEA ESI,[EBP + 0x18]                ; 0052ac76
    JMP 0x0060a174                      ; 0052ac79
        ;   XREF to: 0060a174 (UNCONDITIONAL_JUMP)  ; LAB_0060a174
    LEA EDI,[ESI + EAX*0x1 + 0x24]      ; 0052ac7f
        ;   Label: LAB_0052ac7f
    LEA ESI,[EDX + 0xc]                 ; 0052ac83
    JMP 0x0060a192                      ; 0052ac86
        ;   XREF to: 0060a192 (UNCONDITIONAL_JUMP)  ; LAB_0060a192
    LEA EDI,[ESI + EAX*0x1 + 0x30]      ; 0052ac8c
        ;   Label: LAB_0052ac8c
    LEA ESI,[EDX + 0x18]                ; 0052ac90
    JMP 0x0052abda                      ; 0052ac93
        ;   XREF to: 0052abda (UNCONDITIONAL_JUMP)  ; LAB_0052abda
    MOV ECX,dword ptr [ESI]             ; 0060a11a
        ;   Label: LAB_0060a11a
    MOV dword ptr [EDI],ECX             ; 0060a11c
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060a11e
    MOV dword ptr [EDI + 0x4],ECX       ; 0060a121
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060a124
    MOV dword ptr [EDI + 0x8],ECX       ; 0060a127
    ADD ESI,0xc                         ; 0060a12a
    ADD EDI,0xc                         ; 0060a12d
    MOV ESI,dword ptr [EBX + 0x60]      ; 0060a130
    JMP 0x0052abc6                      ; 0060a133
        ;   XREF to: 0052abc6 (UNCONDITIONAL_JUMP)  ; LAB_0052abc6
    MOV ECX,dword ptr [ESI]             ; 0060a138
        ;   Label: LAB_0060a138
    MOV dword ptr [EDI],ECX             ; 0060a13a
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060a13c
    MOV dword ptr [EDI + 0x4],ECX       ; 0060a13f
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060a142
    MOV dword ptr [EDI + 0x8],ECX       ; 0060a145
    ADD ESI,0xc                         ; 0060a148
    ADD EDI,0xc                         ; 0060a14b
    MOV ESI,dword ptr [EBX + 0x60]      ; 0060a14e
    JMP 0x0052abd3                      ; 0060a151
        ;   XREF to: 0052abd3 (UNCONDITIONAL_JUMP)  ; LAB_0052abd3
    MOV ECX,dword ptr [ESI]             ; 0060a156
        ;   Label: LAB_0060a156
    MOV dword ptr [EDI],ECX             ; 0060a158
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060a15a
    MOV dword ptr [EDI + 0x4],ECX       ; 0060a15d
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060a160
    MOV dword ptr [EDI + 0x8],ECX       ; 0060a163
    ADD ESI,0xc                         ; 0060a166
    ADD EDI,0xc                         ; 0060a169
    MOV ESI,dword ptr [EBX + 0x60]      ; 0060a16c
    JMP 0x0052abe0                      ; 0060a16f
        ;   XREF to: 0052abe0 (UNCONDITIONAL_JUMP)  ; LAB_0052abe0
    MOV ECX,dword ptr [ESI]             ; 0060a174
        ;   Label: LAB_0060a174
    MOV dword ptr [EDI],ECX             ; 0060a176
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060a178
    MOV dword ptr [EDI + 0x4],ECX       ; 0060a17b
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060a17e
    MOV dword ptr [EDI + 0x8],ECX       ; 0060a181
    ADD ESI,0xc                         ; 0060a184
    ADD EDI,0xc                         ; 0060a187
    MOV ESI,dword ptr [EBX + 0x60]      ; 0060a18a
    JMP 0x0052ac7f                      ; 0060a18d
        ;   XREF to: 0052ac7f (UNCONDITIONAL_JUMP)  ; LAB_0052ac7f
    MOV ECX,dword ptr [ESI]             ; 0060a192
        ;   Label: LAB_0060a192
    MOV dword ptr [EDI],ECX             ; 0060a194
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060a196
    MOV dword ptr [EDI + 0x4],ECX       ; 0060a199
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060a19c
    MOV dword ptr [EDI + 0x8],ECX       ; 0060a19f
    ADD ESI,0xc                         ; 0060a1a2
    ADD EDI,0xc                         ; 0060a1a5
    MOV ESI,dword ptr [EBX + 0x60]      ; 0060a1a8
    JMP 0x0052ac8c                      ; 0060a1ab
        ;   XREF to: 0052ac8c (UNCONDITIONAL_JUMP)  ; LAB_0052ac8c

