; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_dismember_FUN_00565b10(CDeformableModel *this_ptr,int lod_index,CBodyPart *body_part_ptr,int part_index,CVector3i *skinned_vertices,int texture_set_index)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
; CBodyPart *      Stack[0xc]:4   body_part_ptr
; int              Stack[0x10]:4   part_index
; CVector3i *      Stack[0x14]:4   skinned_vertices
; int              Stack[0x18]:4   texture_set_index
; Local Variables:
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
;   core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_0056a7d0 at 0056a858
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005f2276
;   TerminatedCString s_CDeformableModel_dismemb_005f228b
;   TerminatedCString s_core_skeleton_cpp_005f22c5
;   TerminatedCString s_CDeformableModel_dismemb_005f22da
;   TerminatedCString s_core_skeleton_cpp_005f230b
;   TerminatedCString s_CDeformableModel_dismemb_005f2320
;   TerminatedCString s_core_skeleton_cpp_005f234c
;   TerminatedCString s_CDeformableModel_dismemb_005f2361
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_bodypart.cpp_CBodyPart_addTexture_FUN_0041ac60
;   core_bodypart.cpp_setCounts_FUN_00418d00
;   core_main.c_FUN_005030e0
;   crt_memory.c_memset_FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00565b10
        ;   Label: core_skeleton.cpp_CDeformableModel_dismember_FUN_00565b10
    PUSH ESI                            ; 00565b11
    PUSH EDI                            ; 00565b12
    PUSH EBP                            ; 00565b13
    SUB ESP,0x44                        ; 00565b14
    MOV EBP,dword ptr [ESP + 0x60]      ; 00565b17
    TEST EBP,EBP                        ; 00565b1b
    JZ 0x00566079                       ; 00565b1d
        ;   XREF to: 00566079 (CONDITIONAL_JUMP)  ; LAB_00566079
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00565b23
    MOV EDX,dword ptr [ESP + 0x58]      ; 00565b27
    SHL EAX,0x3                         ; 00565b2b
    ADD EAX,EDX                         ; 00565b2e
    CMP dword ptr [EAX + 0x8],0x0       ; 00565b30
    JNZ 0x00565d16                      ; 00565b34
        ;   XREF to: 00565d16 (CONDITIONAL_JUMP)  ; LAB_00565d16
    MOV ECX,dword ptr [ESP + 0x5c]      ; 00565b3a
        ;   Label: LAB_00565b3a
    MOV EAX,dword ptr [ESP + 0x58]      ; 00565b3e
    SHL ECX,0x2                         ; 00565b42
    ADD EAX,ECX                         ; 00565b45
    MOV EBX,dword ptr [ESP + 0x64]      ; 00565b47
    XOR EDI,EDI                         ; 00565b4b
    MOV EDX,dword ptr [EAX + 0x54]      ; 00565b4d
    MOV dword ptr [ESP + 0x28],EDI      ; 00565b50
    MOV dword ptr [ESP + 0x24],EDX      ; 00565b54
    XOR EDX,EDX                         ; 00565b58
    TEST EBX,EBX                        ; 00565b5a
    JLE 0x00565b90                      ; 00565b5c
        ;   XREF to: 00565b90 (CONDITIONAL_JUMP)  ; LAB_00565b90
    MOV ESI,dword ptr [ESP + 0x28]      ; 00565b5e
        ;   Label: LAB_00565b5e
    MOV EDI,dword ptr [ESP + 0x24]      ; 00565b62
    MOV EBX,dword ptr [EAX + 0xc24]     ; 00565b66
    ADD EAX,0x60                        ; 00565b6c
    INC EDX                             ; 00565b6f
    ADD ESI,EBX                         ; 00565b70
    MOV EBX,dword ptr [EAX + 0xbd8]     ; 00565b72
    MOV dword ptr [ESP + 0x28],ESI      ; 00565b78
    ADD EDI,EBX                         ; 00565b7c
    MOV EBX,dword ptr [ESP + 0x64]      ; 00565b7e
    MOV dword ptr [ESP + 0x24],EDI      ; 00565b82
    CMP EDX,EBX                         ; 00565b86
    JL 0x00565b5e                       ; 00565b88
        ;   XREF to: 00565b5e (CONDITIONAL_JUMP)  ; LAB_00565b5e
    LEA EAX,[EAX]                       ; 00565b8a
    MOV EDX,dword ptr [ESP + 0x64]      ; 00565b90
        ;   Label: LAB_00565b90
    LEA EAX,[EDX*0x4 + 0x0]             ; 00565b94
    SUB EAX,EDX                         ; 00565b9b
    MOV ESI,dword ptr [ESP + 0x58]      ; 00565b9d
    SHL EAX,0x5                         ; 00565ba1
    ADD EAX,ESI                         ; 00565ba4
    MOV EDX,dword ptr [ESP + 0x28]      ; 00565ba6
    ADD EDX,dword ptr [ECX + EAX*0x1 + 0xc24] ; 00565baa
    MOV EBX,dword ptr [ECX + EAX*0x1 + 0xc38] ; 00565bb1
    MOV dword ptr [ESP],EDX             ; 00565bb8
    MOV EDX,dword ptr [ESP + 0x24]      ; 00565bbb
    ADD ECX,ESI                         ; 00565bbf
    ADD EDX,EBX                         ; 00565bc1
    MOV EDI,dword ptr [ECX + 0x2c]      ; 00565bc3
    MOV dword ptr [ESP + 0x4],EDX       ; 00565bc6
    CMP EDI,0xfa0                       ; 00565bca
    JLE 0x00565bf4                      ; 00565bd0
        ;   XREF to: 00565bf4 (CONDITIONAL_JUMP)  ; LAB_00565bf4
    MOV EAX,0x5f22c5                    ; 00565bd2 | = "..\\core\\skeleton.cpp"
    MOV EDX,0x66b                       ; 00565bd7
    PUSH 0x5f22da                       ; 00565bdc | = "CDeformableModel::dismember - too man..."
    MOV [0x01d1d400],EAX                ; 00565be1 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 00565be6 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00565bec
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00565bf1
    MOV ESI,dword ptr [ESP + 0x5c]      ; 00565bf4
        ;   Label: LAB_00565bf4
    MOV ECX,dword ptr [ESP + 0x58]      ; 00565bf8
    SHL ESI,0x2                         ; 00565bfc
    ADD ESI,ECX                         ; 00565bff
    MOV EAX,dword ptr [ESI + 0x2c]      ; 00565c01
    SHL EAX,0x2                         ; 00565c04
    PUSH EAX                            ; 00565c07
    PUSH 0x0                            ; 00565c08
    PUSH 0x269cd1c                      ; 00565c0a
    CALL crt_memory.c_memset_FUN_005bfb70 ; 00565c0f
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00565c14
    MOV EAX,dword ptr [ESP + 0x28]      ; 00565c17
    MOV EBX,dword ptr [ESP]             ; 00565c1b
    CMP EAX,EBX                         ; 00565c1e
    JGE 0x00565c70                      ; 00565c20
        ;   XREF to: 00565c70 (CONDITIONAL_JUMP)  ; LAB_00565c70
    MOV EDX,EAX                         ; 00565c22
    SHL EAX,0x3                         ; 00565c24
    ADD EAX,EDX                         ; 00565c27
    MOV EDX,EBX                         ; 00565c29
    SHL EBX,0x3                         ; 00565c2b
    MOV EDI,0x1                         ; 00565c2e
    ADD EBX,EDX                         ; 00565c33
    ADD EAX,EAX                         ; 00565c35
    ADD EBX,EBX                         ; 00565c37
    MOV EDX,dword ptr [ESI + 0x7c]      ; 00565c39
        ;   Label: LAB_00565c39
    XOR ECX,ECX                         ; 00565c3c
    MOV CX,word ptr [EDX + EAX*0x1]     ; 00565c3e
    MOV dword ptr [ECX*0x4 + 0x269cd1c],EDI ; 00565c42
    XOR ECX,ECX                         ; 00565c49
    MOV CX,word ptr [EDX + EAX*0x1 + 0x2] ; 00565c4b
    MOV dword ptr [ECX*0x4 + 0x269cd1c],EDI ; 00565c50
    MOV DX,word ptr [EDX + EAX*0x1 + 0x4] ; 00565c57
    AND EDX,0xffff                      ; 00565c5c
    ADD EAX,0x12                        ; 00565c62
    MOV dword ptr [EDX*0x4 + 0x269cd1c],EDI ; 00565c65
    CMP EAX,EBX                         ; 00565c6c
    JL 0x00565c39                       ; 00565c6e
        ;   XREF to: 00565c39 (CONDITIONAL_JUMP)  ; LAB_00565c39
    MOV EAX,dword ptr [ESP + 0x24]      ; 00565c70
        ;   Label: LAB_00565c70
    CMP EAX,dword ptr [ESP + 0x4]       ; 00565c74
    JGE 0x00565ce0                      ; 00565c78
        ;   XREF to: 00565ce0 (CONDITIONAL_JUMP)  ; LAB_00565ce0
    MOV EDI,dword ptr [ESP + 0x5c]      ; 00565c7a
    MOV EBX,dword ptr [ESP + 0x58]      ; 00565c7e
    MOV EDX,EAX                         ; 00565c82
    SHL EAX,0x3                         ; 00565c84
    SHL EDI,0x2                         ; 00565c87
    ADD EAX,EDX                         ; 00565c8a
    MOV EDX,dword ptr [ESP + 0x4]       ; 00565c8c
    ADD EDI,EBX                         ; 00565c90
    LEA EBX,[EDX*0x8 + 0x0]             ; 00565c92
    MOV ESI,0x1                         ; 00565c99
    ADD EBX,EDX                         ; 00565c9e
    ADD EAX,EAX                         ; 00565ca0
    ADD EBX,EBX                         ; 00565ca2
    MOV EDX,dword ptr [EDI + 0x7c]      ; 00565ca4
        ;   Label: LAB_00565ca4
    XOR ECX,ECX                         ; 00565ca7
    MOV CX,word ptr [EDX + EAX*0x1]     ; 00565ca9
    MOV dword ptr [ECX*0x4 + 0x269cd1c],ESI ; 00565cad
    XOR ECX,ECX                         ; 00565cb4
    MOV CX,word ptr [EDX + EAX*0x1 + 0x2] ; 00565cb6
    MOV dword ptr [ECX*0x4 + 0x269cd1c],ESI ; 00565cbb
    MOV DX,word ptr [EDX + EAX*0x1 + 0x4] ; 00565cc2
    AND EDX,0xffff                      ; 00565cc7
    ADD EAX,0x12                        ; 00565ccd
    MOV dword ptr [EDX*0x4 + 0x269cd1c],ESI ; 00565cd0
    CMP EAX,EBX                         ; 00565cd7
    JL 0x00565ca4                       ; 00565cd9
        ;   XREF to: 00565ca4 (CONDITIONAL_JUMP)  ; LAB_00565ca4
    LEA EAX,[EAX]                       ; 00565cdb
    MOV ECX,ECX                         ; 00565cde
    MOV EDI,dword ptr [ESP + 0x5c]      ; 00565ce0
        ;   Label: LAB_00565ce0
    MOV EAX,dword ptr [EBP + 0x180]     ; 00565ce4
    MOV EBX,dword ptr [EBP + 0x174]     ; 00565cea
    XOR EDX,EDX                         ; 00565cf0
    MOV dword ptr [ESP + 0x40],EAX      ; 00565cf2
    MOV ECX,EBX                         ; 00565cf6
    SHL EDI,0x2                         ; 00565cf8
    XOR EAX,EAX                         ; 00565cfb
    MOV ESI,dword ptr [ESP + 0x58]      ; 00565cfd
        ;   Label: LAB_00565cfd
    CMP EAX,dword ptr [EDI + ESI*0x1 + 0x2c] ; 00565d01
    JGE 0x00565d41                      ; 00565d05
        ;   XREF to: 00565d41 (CONDITIONAL_JUMP)  ; LAB_00565d41
    CMP dword ptr [EDX + 0x269cd1c],0x0 ; 00565d07
    JNZ 0x00565d3e                      ; 00565d0e
        ;   XREF to: 00565d3e (CONDITIONAL_JUMP)  ; LAB_00565d3e
    INC EAX                             ; 00565d10
        ;   Label: LAB_00565d10
    ADD EDX,0x4                         ; 00565d11
    JMP 0x00565cfd                      ; 00565d14
        ;   XREF to: 00565cfd (UNCONDITIONAL_JUMP)  ; LAB_00565cfd
    MOV EBX,0x5f2276                    ; 00565d16 | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_00565d16
    MOV ESI,0x656                       ; 00565d1b
    PUSH 0x5f228b                       ; 00565d20 | = "CDeformableModel::dismember - can't d..."
    MOV dword ptr [0x01d1d400],EBX      ; 00565d25 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00565d2b | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00565d31
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00565d36
    JMP 0x00565b3a                      ; 00565d39
        ;   XREF to: 00565b3a (UNCONDITIONAL_JUMP)  ; LAB_00565b3a
    INC ECX                             ; 00565d3e
        ;   Label: LAB_00565d3e
    JMP 0x00565d10                      ; 00565d3f
        ;   XREF to: 00565d10 (UNCONDITIONAL_JUMP)  ; LAB_00565d10
    MOV EDX,dword ptr [ESP + 0x64]      ; 00565d41
        ;   Label: LAB_00565d41
    LEA EAX,[EDX*0x4 + 0x0]             ; 00565d45
    SUB EAX,EDX                         ; 00565d4c
    SHL EAX,0x5                         ; 00565d4e
    ADD EAX,ESI                         ; 00565d51
    ADD EDI,EAX                         ; 00565d53
    MOV EAX,dword ptr [EBP + 0x180]     ; 00565d55
    MOV EDX,dword ptr [EDI + 0xc24]     ; 00565d5b
    MOV ESI,dword ptr [EDI + 0xc38]     ; 00565d61
    ADD EAX,EDX                         ; 00565d67
    ADD EAX,ESI                         ; 00565d69
    PUSH EAX                            ; 00565d6b
    PUSH ECX                            ; 00565d6c
    PUSH EBP                            ; 00565d6d
    CALL core_bodypart.cpp_setCounts_FUN_00418d00 ; 00565d6e
        ;   XREF to: 00418d00 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_setCounts_FUN_00418d00()
    ADD ESP,0xc                         ; 00565d73
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00565d76
    MOV EDX,dword ptr [ESP + 0x58]      ; 00565d7a
    SHL EAX,0x2                         ; 00565d7e
    XOR EDI,EDI                         ; 00565d81
    ADD EDX,EAX                         ; 00565d83
    MOV dword ptr [ESP + 0x3c],EDI      ; 00565d85
    MOV dword ptr [ESP + 0x10],EDX      ; 00565d89
    LEA EDX,[EBX*0x4 + 0x0]             ; 00565d8d
    MOV ESI,dword ptr [ESP + 0x10]      ; 00565d94
    SUB EDX,EBX                         ; 00565d98
    XOR EAX,EAX                         ; 00565d9a
    LEA ECX,[EDX*0x4 + 0x0]             ; 00565d9c
    MOV EDI,dword ptr [ESI + 0x2c]      ; 00565da3
    MOV EDX,dword ptr [ESP + 0x68]      ; 00565da6
    TEST EDI,EDI                        ; 00565daa
    JLE 0x00565dec                      ; 00565dac
        ;   XREF to: 00565dec (CONDITIONAL_JUMP)  ; LAB_00565dec
    CMP dword ptr [EAX + 0x269cd1c],0x0 ; 00565dae
        ;   Label: LAB_00565dae
    JZ 0x00566081                       ; 00565db5
        ;   XREF to: 00566081 (CONDITIONAL_JUMP)  ; LAB_00566081
    MOV dword ptr [EAX + 0x269cd1c],EBX ; 00565dbb
    MOV EDI,dword ptr [EBP + 0x178]     ; 00565dc1
    MOV ESI,EDX                         ; 00565dc7
    ADD EDI,ECX                         ; 00565dc9
    INC EBX                             ; 00565dcb
    ADD ECX,0xc                         ; 00565dcc
    MOVSD ES:EDI,ESI                    ; 00565dcf
    MOVSD ES:EDI,ESI                    ; 00565dd0
    MOVSD ES:EDI,ESI                    ; 00565dd1
    MOV EDI,dword ptr [ESP + 0x3c]      ; 00565dd2
        ;   Label: LAB_00565dd2
    INC EDI                             ; 00565dd6
    MOV dword ptr [ESP + 0x3c],EDI      ; 00565dd7
    MOV ESI,EDI                         ; 00565ddb
    MOV EDI,dword ptr [ESP + 0x10]      ; 00565ddd
    ADD EAX,0x4                         ; 00565de1
    ADD EDX,0xc                         ; 00565de4
    CMP ESI,dword ptr [EDI + 0x2c]      ; 00565de7
    JL 0x00565dae                       ; 00565dea
        ;   XREF to: 00565dae (CONDITIONAL_JUMP)  ; LAB_00565dae
    CMP EBX,dword ptr [EBP + 0x174]     ; 00565dec
        ;   Label: LAB_00565dec
    JZ 0x00565e17                       ; 00565df2
        ;   XREF to: 00565e17 (CONDITIONAL_JUMP)  ; LAB_00565e17
    MOV EDX,0x5f230b                    ; 00565df4 | = "..\\core\\skeleton.cpp"
    MOV ECX,0x6a1                       ; 00565df9
    PUSH 0x5f2320                       ; 00565dfe | = "CDeformableModel::dismember - Hell fr..."
    MOV dword ptr [0x01d1d400],EDX      ; 00565e03 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00565e09 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00565e0f
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00565e14
    MOV EAX,dword ptr [ESP + 0x28]      ; 00565e17
        ;   Label: LAB_00565e17
    MOV EBX,dword ptr [ESP]             ; 00565e1b
    CMP EAX,EBX                         ; 00565e1e
    JGE 0x00565f40                      ; 00565e20
        ;   XREF to: 00565f40 (CONDITIONAL_JUMP)  ; LAB_00565f40
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00565e26
    MOV EDX,dword ptr [ESP + 0x58]      ; 00565e2a
    SHL EAX,0x2                         ; 00565e2e
    ADD EDX,EAX                         ; 00565e31
    MOV dword ptr [ESP + 0x20],EDX      ; 00565e33
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00565e37
    LEA EAX,[EDX*0x8 + 0x0]             ; 00565e3b
    ADD EDX,EAX                         ; 00565e42
    MOV EAX,dword ptr [ESP + 0x58]      ; 00565e44
    SHL EDX,0x6                         ; 00565e48
    ADD EAX,0xc0                        ; 00565e4b
    ADD EAX,EDX                         ; 00565e50
    MOV EDX,dword ptr [ESP + 0x28]      ; 00565e52
    MOV dword ptr [ESP + 0x8],EAX       ; 00565e56
    LEA EAX,[EDX*0x8 + 0x0]             ; 00565e5a
    ADD EAX,EDX                         ; 00565e61
    ADD EAX,EAX                         ; 00565e63
    MOV dword ptr [ESP + 0x34],EAX      ; 00565e65
    MOV EAX,dword ptr [ESP + 0x40]      ; 00565e69
    SHL EAX,0x2                         ; 00565e6d
    MOV EDI,EAX                         ; 00565e70
    SHL EDI,0x4                         ; 00565e72
    SUB EDI,EAX                         ; 00565e75
    MOV EAX,dword ptr [ESP + 0x40]      ; 00565e77
    SHL EAX,0x2                         ; 00565e7b
    MOV dword ptr [ESP + 0x2c],EAX      ; 00565e7e
    LEA EAX,[EBX*0x4 + 0x0]             ; 00565e82
    LEA ESI,[EDX*0x4 + 0x0]             ; 00565e89
    MOV dword ptr [ESP + 0x18],EAX      ; 00565e90
    MOV EBX,dword ptr [ESP + 0x20]      ; 00565e94
        ;   Label: LAB_00565e94
    MOV EAX,dword ptr [ESP + 0x34]      ; 00565e98
    MOV EDX,dword ptr [EBP + 0x184]     ; 00565e9c
    MOV EBX,dword ptr [EBX + 0x7c]      ; 00565ea2
    ADD EDX,EDI                         ; 00565ea5
    ADD EBX,EAX                         ; 00565ea7
    MOV dword ptr [EDX + 0x4],0x3       ; 00565ea9
    MOV EAX,EBX                         ; 00565eb0
    ADD EBX,0x6                         ; 00565eb2
    XOR ECX,ECX                         ; 00565eb5
        ;   Label: LAB_00565eb5
    MOV CX,word ptr [EAX]               ; 00565eb7
    MOV ECX,dword ptr [ECX*0x4 + 0x269cd1c] ; 00565eba
    MOV dword ptr [EDX + 0x18],ECX      ; 00565ec1
    XOR ECX,ECX                         ; 00565ec4
    MOV CX,word ptr [EAX + 0x6]         ; 00565ec6
    SHL ECX,0x8                         ; 00565eca
    MOV dword ptr [EDX + 0x1c],ECX      ; 00565ecd
    XOR ECX,ECX                         ; 00565ed0
    MOV CX,word ptr [EAX + 0xc]         ; 00565ed2
    ADD EDX,0xc                         ; 00565ed6
    SHL ECX,0x8                         ; 00565ed9
    ADD EAX,0x2                         ; 00565edc
    MOV dword ptr [EDX + 0x14],ECX      ; 00565edf
    CMP EAX,EBX                         ; 00565ee2
    JNZ 0x00565eb5                      ; 00565ee4
        ;   XREF to: 00565eb5 (CONDITIONAL_JUMP)  ; LAB_00565eb5
    MOV EAX,dword ptr [ESP + 0x20]      ; 00565ee6
    MOV EAX,dword ptr [EAX + 0x90]      ; 00565eea
    IMUL EAX,dword ptr [ESI + EAX*0x1],0x48 ; 00565ef0
    ADD EAX,dword ptr [ESP + 0x8]       ; 00565ef4
    ADD EAX,0x8                         ; 00565ef8
    PUSH EAX                            ; 00565efb
    PUSH EBP                            ; 00565efc
    ADD EDI,0x3c                        ; 00565efd
    CALL core_bodypart.cpp_CBodyPart_addTexture_FUN_0041ac60 ; 00565f00
        ;   XREF to: 0041ac60 (UNCONDITIONAL_CALL)  ; int core_bodypart.cpp_CBodyPart_addTexture_FUN_0041ac60(CBodyPart * this_ptr, char * texture_name)
    ADD ESP,0x8                         ; 00565f05
    MOV EDX,dword ptr [EBP + 0x188]     ; 00565f08
    MOV ECX,dword ptr [ESP + 0x34]      ; 00565f0e
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00565f12
    ADD ECX,0x12                        ; 00565f16
    ADD EDX,EBX                         ; 00565f19
    ADD ESI,0x4                         ; 00565f1b
    MOV dword ptr [ESP + 0x34],ECX      ; 00565f1e
    MOV dword ptr [EDX],EAX             ; 00565f22
    LEA EAX,[EBX + 0x4]                 ; 00565f24
    MOV EDX,dword ptr [ESP + 0x40]      ; 00565f27
    MOV EBX,dword ptr [ESP + 0x18]      ; 00565f2b
    INC EDX                             ; 00565f2f
    MOV dword ptr [ESP + 0x2c],EAX      ; 00565f30
    MOV dword ptr [ESP + 0x40],EDX      ; 00565f34
    CMP ESI,EBX                         ; 00565f38
    JL 0x00565e94                       ; 00565f3a
        ;   XREF to: 00565e94 (CONDITIONAL_JUMP)  ; LAB_00565e94
    MOV EAX,dword ptr [ESP + 0x24]      ; 00565f40
        ;   Label: LAB_00565f40
    CMP EAX,dword ptr [ESP + 0x4]       ; 00565f44
    JGE 0x0056606d                      ; 00565f48
        ;   XREF to: 0056606d (CONDITIONAL_JUMP)  ; LAB_0056606d
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00565f4e
    MOV EDX,dword ptr [ESP + 0x58]      ; 00565f52
    SHL EAX,0x2                         ; 00565f56
    ADD EDX,EAX                         ; 00565f59
    MOV dword ptr [ESP + 0x1c],EDX      ; 00565f5b
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00565f5f
    LEA EAX,[EDX*0x8 + 0x0]             ; 00565f63
    ADD EAX,EDX                         ; 00565f6a
    MOV EDX,dword ptr [ESP + 0x58]      ; 00565f6c
    SHL EAX,0x6                         ; 00565f70
    ADD EDX,0xc0                        ; 00565f73
    ADD EDX,EAX                         ; 00565f79
    MOV dword ptr [ESP + 0xc],EDX       ; 00565f7b
    MOV EDX,dword ptr [ESP + 0x24]      ; 00565f7f
    LEA EAX,[EDX*0x8 + 0x0]             ; 00565f83
    ADD EAX,EDX                         ; 00565f8a
    ADD EAX,EAX                         ; 00565f8c
    MOV dword ptr [ESP + 0x30],EAX      ; 00565f8e
    MOV EAX,dword ptr [ESP + 0x40]      ; 00565f92
    SHL EAX,0x2                         ; 00565f96
    MOV EDX,EAX                         ; 00565f99
    SHL EAX,0x4                         ; 00565f9b
    MOV EDI,dword ptr [ESP + 0x40]      ; 00565f9e
    SUB EAX,EDX                         ; 00565fa2
    MOV ESI,dword ptr [ESP + 0x24]      ; 00565fa4
    MOV dword ptr [ESP + 0x38],EAX      ; 00565fa8
    MOV EAX,dword ptr [ESP + 0x4]       ; 00565fac
    SHL EDI,0x2                         ; 00565fb0
    SHL EAX,0x2                         ; 00565fb3
    SHL ESI,0x2                         ; 00565fb6
    MOV dword ptr [ESP + 0x14],EAX      ; 00565fb9
    MOV EAX,dword ptr [ESP + 0x38]      ; 00565fbd
        ;   Label: LAB_00565fbd
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00565fc1
    MOV ECX,dword ptr [ESP + 0x30]      ; 00565fc5
    MOV EDX,dword ptr [EBP + 0x184]     ; 00565fc9
    MOV EBX,dword ptr [EBX + 0x7c]      ; 00565fcf
    ADD EDX,EAX                         ; 00565fd2
    ADD EBX,ECX                         ; 00565fd4
    MOV dword ptr [EDX + 0x4],0x3       ; 00565fd6
    MOV EAX,EBX                         ; 00565fdd
    ADD EBX,0x6                         ; 00565fdf
    XOR ECX,ECX                         ; 00565fe2
        ;   Label: LAB_00565fe2
    MOV CX,word ptr [EAX]               ; 00565fe4
    MOV ECX,dword ptr [ECX*0x4 + 0x269cd1c] ; 00565fe7
    MOV dword ptr [EDX + 0x18],ECX      ; 00565fee
    XOR ECX,ECX                         ; 00565ff1
    MOV CX,word ptr [EAX + 0x6]         ; 00565ff3
    SHL ECX,0x8                         ; 00565ff7
    MOV dword ptr [EDX + 0x1c],ECX      ; 00565ffa
    XOR ECX,ECX                         ; 00565ffd
    MOV CX,word ptr [EAX + 0xc]         ; 00565fff
    ADD EDX,0xc                         ; 00566003
    SHL ECX,0x8                         ; 00566006
    ADD EAX,0x2                         ; 00566009
    MOV dword ptr [EDX + 0x14],ECX      ; 0056600c
    CMP EAX,EBX                         ; 0056600f
    JNZ 0x00565fe2                      ; 00566011
        ;   XREF to: 00565fe2 (CONDITIONAL_JUMP)  ; LAB_00565fe2
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00566013
    MOV EAX,dword ptr [EAX + 0x90]      ; 00566017
    IMUL EAX,dword ptr [ESI + EAX*0x1],0x48 ; 0056601d
    ADD EAX,dword ptr [ESP + 0xc]       ; 00566021
    ADD EAX,0x8                         ; 00566025
    PUSH EAX                            ; 00566028
    PUSH EBP                            ; 00566029
    ADD EDI,0x4                         ; 0056602a
    ADD ESI,0x4                         ; 0056602d
    CALL core_bodypart.cpp_CBodyPart_addTexture_FUN_0041ac60 ; 00566030
        ;   XREF to: 0041ac60 (UNCONDITIONAL_CALL)  ; int core_bodypart.cpp_CBodyPart_addTexture_FUN_0041ac60(CBodyPart * this_ptr, char * texture_name)
    ADD ESP,0x8                         ; 00566035
    MOV EDX,dword ptr [EBP + 0x188]     ; 00566038
    MOV EBX,dword ptr [ESP + 0x38]      ; 0056603e
    MOV ECX,dword ptr [ESP + 0x14]      ; 00566042
    MOV dword ptr [EDX + EDI*0x1 + -0x4],EAX ; 00566046
    MOV EAX,dword ptr [ESP + 0x40]      ; 0056604a
    ADD EBX,0x3c                        ; 0056604e
    MOV EDX,dword ptr [ESP + 0x30]      ; 00566051
    MOV dword ptr [ESP + 0x38],EBX      ; 00566055
    INC EAX                             ; 00566059
    ADD EDX,0x12                        ; 0056605a
    MOV dword ptr [ESP + 0x40],EAX      ; 0056605d
    MOV dword ptr [ESP + 0x30],EDX      ; 00566061
    CMP ESI,ECX                         ; 00566065
    JL 0x00565fbd                       ; 00566067
        ;   XREF to: 00565fbd (CONDITIONAL_JUMP)  ; LAB_00565fbd
    MOV EAX,dword ptr [ESP + 0x40]      ; 0056606d
        ;   Label: LAB_0056606d
    CMP EAX,dword ptr [EBP + 0x180]     ; 00566071
    JNZ 0x00566090                      ; 00566077
        ;   XREF to: 00566090 (CONDITIONAL_JUMP)  ; LAB_00566090
    ADD ESP,0x44                        ; 00566079
        ;   Label: LAB_00566079
    POP EBP                             ; 0056607c
    POP EDI                             ; 0056607d
    POP ESI                             ; 0056607e
    POP EBX                             ; 0056607f
    RET                                 ; 00566080
    MOV dword ptr [EAX + 0x269cd1c],0xffffffff ; 00566081
        ;   Label: LAB_00566081
    JMP 0x00565dd2                      ; 0056608b
        ;   XREF to: 00565dd2 (UNCONDITIONAL_JUMP)  ; LAB_00565dd2
    MOV ESI,0x5f234c                    ; 00566090 | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_00566090
    MOV EDI,0x6d8                       ; 00566095
    PUSH 0x5f2361                       ; 0056609a | = "CDeformableModel::dismember - Hell fr..."
    MOV dword ptr [0x01d1d400],ESI      ; 0056609f | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 005660a5 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005660ab
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005660b0
    ADD ESP,0x44                        ; 005660b3
    POP EBP                             ; 005660b6
    POP EDI                             ; 005660b7
    POP ESI                             ; 005660b8
    POP EBX                             ; 005660b9
    RET                                 ; 005660ba

