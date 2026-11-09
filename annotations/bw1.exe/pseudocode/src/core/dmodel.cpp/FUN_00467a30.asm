; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_FUN_00467a30(CKeyFramedModel *this_ptr)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dmodel.cpp_CKeyFramedModel_load_FUN_004668a0 at 00466971
;
; Referenced Globals:
;   undefined4 DAT_005d9644
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_expand_FUN_00420500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00467a30
        ;   Label: core_dmodel.cpp_FUN_00467a30
    PUSH ESI                            ; 00467a31
    PUSH EDI                            ; 00467a32
    PUSH EBP                            ; 00467a33
    SUB ESP,0x18                        ; 00467a34
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00467a37
    XOR EDX,EDX                         ; 00467a3b
    MOV ECX,dword ptr [EBP + 0x100]     ; 00467a3d
    MOV dword ptr [ESP + 0x10],EDX      ; 00467a43
    TEST ECX,ECX                        ; 00467a47
    JLE 0x00467b93                      ; 00467a49
        ;   XREF to: 00467b93 (CONDITIONAL_JUMP)  ; LAB_00467b93
    LEA EAX,[EBP + 0x338]               ; 00467a4f
    MOV dword ptr [ESP + 0xc],EDX       ; 00467a55
    MOV dword ptr [ESP + 0x14],EAX      ; 00467a59
    MOV EBX,dword ptr [ESP + 0xc]       ; 00467a5d
        ;   Label: LAB_00467a5d
    MOV EDI,dword ptr [EBP + 0x350]     ; 00467a61
    MOV ESI,dword ptr [EBP + 0x104]     ; 00467a67
    ADD EDI,EBX                         ; 00467a6d
    MOV EBX,dword ptr [ESP + 0x10]      ; 00467a6f
    IMUL EBX,ESI                        ; 00467a73
    LEA EAX,[EBX*0x4 + 0x0]             ; 00467a76
    SUB EAX,EBX                         ; 00467a7d
    SHL EAX,0x2                         ; 00467a7f
    MOV EBX,dword ptr [EBP + 0x10c]     ; 00467a82
    ADD EBX,EAX                         ; 00467a88
    FLD double ptr [0x005d9644]         ; 00467a8a | DAT_005d9644
    FILD dword ptr [EBX]                ; 00467a90
    FMUL ST1                            ; 00467a92
    FSTP float ptr [ESP]                ; 00467a94
    FILD dword ptr [EBX + 0x4]          ; 00467a97
    FMUL ST1                            ; 00467a9a
    FSTP float ptr [ESP + 0x4]          ; 00467a9c
    FILD dword ptr [EBX + 0x8]          ; 00467aa0
    FMULP                               ; 00467aa3
    MOV ESI,EDI                         ; 00467aa5
    MOV EAX,ESP                         ; 00467aa7
    FSTP float ptr [ESP + 0x8]          ; 00467aa9
    CMP EDI,EAX                         ; 00467aad
    JNZ 0x00467b9b                      ; 00467aaf
        ;   XREF to: 00467b9b (CONDITIONAL_JUMP)  ; LAB_00467b9b
    MOV EAX,ESP                         ; 00467ab5
        ;   Label: LAB_00467ab5
    ADD ESI,0xc                         ; 00467ab7
    CMP ESI,EAX                         ; 00467aba
    JZ 0x00467ad1                       ; 00467abc
        ;   XREF to: 00467ad1 (CONDITIONAL_JUMP)  ; LAB_00467ad1
    MOV EAX,dword ptr [ESP]             ; 00467abe
    MOV dword ptr [ESI],EAX             ; 00467ac1
    MOV EAX,dword ptr [ESP + 0x4]       ; 00467ac3
    MOV dword ptr [ESI + 0x4],EAX       ; 00467ac7
    MOV EAX,dword ptr [ESP + 0x8]       ; 00467aca
    MOV dword ptr [ESI + 0x8],EAX       ; 00467ace
    MOV ESI,0x1                         ; 00467ad1
        ;   Label: LAB_00467ad1
    CMP ESI,dword ptr [EBP + 0x104]     ; 00467ad6
    JGE 0x00467b1e                      ; 00467adc
        ;   XREF to: 00467b1e (CONDITIONAL_JUMP)  ; LAB_00467b1e
    FILD dword ptr [EBX + 0xc]          ; 00467ade
        ;   Label: LAB_00467ade
    FMUL double ptr [0x005d9644]        ; 00467ae1 | DAT_005d9644
    FSTP float ptr [ESP]                ; 00467ae7
    FILD dword ptr [EBX + 0x10]         ; 00467aea
    FMUL double ptr [0x005d9644]        ; 00467aed | DAT_005d9644
    MOV EAX,ESP                         ; 00467af3
    FSTP float ptr [ESP + 0x4]          ; 00467af5
    FILD dword ptr [EBX + 0x14]         ; 00467af9
    FMUL double ptr [0x005d9644]        ; 00467afc | DAT_005d9644
    PUSH EAX                            ; 00467b02
    ADD EBX,0xc                         ; 00467b03
    INC ESI                             ; 00467b06
    PUSH EDI                            ; 00467b07
    FSTP float ptr [ESP + 0x10]         ; 00467b08
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420500 ; 00467b0c
        ;   XREF to: 00420500 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_00420500(CBoundingBox3D * this_ptr, CVector3f * point)
    MOV EDX,dword ptr [EBP + 0x104]     ; 00467b11
    ADD ESP,0x8                         ; 00467b17
    CMP ESI,EDX                         ; 00467b1a
    JL 0x00467ade                       ; 00467b1c
        ;   XREF to: 00467ade (CONDITIONAL_JUMP)  ; LAB_00467ade
    CMP dword ptr [ESP + 0x10],0x0      ; 00467b1e
        ;   Label: LAB_00467b1e
    JNZ 0x00467b56                      ; 00467b23
        ;   XREF to: 00467b56 (CONDITIONAL_JUMP)  ; LAB_00467b56
    MOV EAX,dword ptr [ESP + 0x14]      ; 00467b25
    MOV EBX,EDI                         ; 00467b29
    CMP EDI,EAX                         ; 00467b2b
    JZ 0x00467b3f                       ; 00467b2d
        ;   XREF to: 00467b3f (CONDITIONAL_JUMP)  ; LAB_00467b3f
    MOV EDX,dword ptr [EDI]             ; 00467b2f
    MOV dword ptr [EAX],EDX             ; 00467b31
    MOV EDX,dword ptr [EDI + 0x4]       ; 00467b33
    MOV dword ptr [EAX + 0x4],EDX       ; 00467b36
    MOV EDX,dword ptr [EDI + 0x8]       ; 00467b39
    MOV dword ptr [EAX + 0x8],EDX       ; 00467b3c
    ADD EAX,0xc                         ; 00467b3f
        ;   Label: LAB_00467b3f
    CMP EAX,EBX                         ; 00467b42
    JZ 0x00467b56                       ; 00467b44
        ;   XREF to: 00467b56 (CONDITIONAL_JUMP)  ; LAB_00467b56
    MOV EDX,dword ptr [EBX]             ; 00467b46
    MOV dword ptr [EAX],EDX             ; 00467b48
    MOV EDX,dword ptr [EBX + 0x4]       ; 00467b4a
    MOV dword ptr [EAX + 0x4],EDX       ; 00467b4d
    MOV EDX,dword ptr [EBX + 0x8]       ; 00467b50
    MOV dword ptr [EAX + 0x8],EDX       ; 00467b53
    PUSH EDI                            ; 00467b56
        ;   Label: LAB_00467b56
    MOV EBX,dword ptr [ESP + 0x18]      ; 00467b57
    PUSH EBX                            ; 00467b5b
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420500 ; 00467b5c
        ;   XREF to: 00420500 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_00420500(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 00467b61
    ADD EDI,0xc                         ; 00467b64
    PUSH EDI                            ; 00467b67
    PUSH EBX                            ; 00467b68
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420500 ; 00467b69
        ;   XREF to: 00420500 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_00420500(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 00467b6e
    MOV EDX,dword ptr [EBP + 0x100]     ; 00467b71
    MOV EDI,dword ptr [ESP + 0xc]       ; 00467b77
    MOV EAX,dword ptr [ESP + 0x10]      ; 00467b7b
    ADD EDI,0x18                        ; 00467b7f
    INC EAX                             ; 00467b82
    MOV dword ptr [ESP + 0xc],EDI       ; 00467b83
    MOV dword ptr [ESP + 0x10],EAX      ; 00467b87
    CMP EAX,EDX                         ; 00467b8b
    JL 0x00467a5d                       ; 00467b8d
        ;   XREF to: 00467a5d (CONDITIONAL_JUMP)  ; LAB_00467a5d
    ADD ESP,0x18                        ; 00467b93
        ;   Label: LAB_00467b93
    POP EBP                             ; 00467b96
    POP EDI                             ; 00467b97
    POP ESI                             ; 00467b98
    POP EBX                             ; 00467b99
    RET                                 ; 00467b9a
    MOV EAX,dword ptr [ESP]             ; 00467b9b
        ;   Label: LAB_00467b9b
    MOV dword ptr [EDI],EAX             ; 00467b9e
    MOV EAX,dword ptr [ESP + 0x4]       ; 00467ba0
    MOV dword ptr [EDI + 0x4],EAX       ; 00467ba4
    MOV EAX,dword ptr [ESP + 0x8]       ; 00467ba7
    MOV dword ptr [EDI + 0x8],EAX       ; 00467bab
    JMP 0x00467ab5                      ; 00467bae
        ;   XREF to: 00467ab5 (UNCONDITIONAL_JUMP)  ; LAB_00467ab5

