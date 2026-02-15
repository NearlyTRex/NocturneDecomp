; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_meshlod_cpp_CLodMesh_markDuplicateFaces_FUN_00516a40(CLodMesh *this_ptr)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   shape_meshlod.cpp_CLodMesh_getLOD_FUN_0051b920 at 0051b9da
;   shape_meshlod.cpp_CLodMesh_postprocessMesh_FUN_0051b330 at 0051b398
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516a40
        ;   Label: shape_meshlod.cpp_CLodMesh_markDuplicateFaces_FUN_00516a40
    PUSH ESI                            ; 00516a41
    PUSH EDI                            ; 00516a42
    PUSH EBP                            ; 00516a43
    SUB ESP,0x18                        ; 00516a44
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00516a47
    XOR EDX,EDX                         ; 00516a4b
    MOV ECX,dword ptr [EAX + 0x8]       ; 00516a4d
    MOV dword ptr [ESP + 0x4],EDX       ; 00516a50
    TEST ECX,ECX                        ; 00516a54
    JLE 0x00516a91                      ; 00516a56
        ;   XREF to: 00516a91 (CONDITIONAL_JUMP)  ; LAB_00516a91
    MOV dword ptr [ESP],EDX             ; 00516a58
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00516a5b
        ;   Label: LAB_00516a5b
    MOV EDX,dword ptr [ESP]             ; 00516a5f
    MOV EAX,dword ptr [EAX + 0xc]       ; 00516a62
    ADD EDX,EAX                         ; 00516a65
    MOV dword ptr [ESP + 0x10],EDX      ; 00516a67
    CMP dword ptr [EDX + 0x40],0x0      ; 00516a6b
    JZ 0x00516a99                       ; 00516a6f
        ;   XREF to: 00516a99 (CONDITIONAL_JUMP)  ; LAB_00516a99
    MOV EBX,dword ptr [ESP]             ; 00516a71
        ;   Label: LAB_00516a71
    MOV ESI,dword ptr [ESP + 0x4]       ; 00516a74
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00516a78
    ADD EBX,0x8c                        ; 00516a7c
    INC ESI                             ; 00516a82
    MOV EDI,dword ptr [EDX + 0x8]       ; 00516a83
    MOV dword ptr [ESP],EBX             ; 00516a86
    MOV dword ptr [ESP + 0x4],ESI       ; 00516a89
    CMP ESI,EDI                         ; 00516a8d
    JL 0x00516a5b                       ; 00516a8f
        ;   XREF to: 00516a5b (CONDITIONAL_JUMP)  ; LAB_00516a5b
    ADD ESP,0x18                        ; 00516a91
        ;   Label: LAB_00516a91
    POP EBP                             ; 00516a94
    POP EDI                             ; 00516a95
    POP ESI                             ; 00516a96
    POP EBX                             ; 00516a97
    RET                                 ; 00516a98
    MOV EAX,dword ptr [ESP + 0x4]       ; 00516a99
        ;   Label: LAB_00516a99
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00516a9d
    INC EAX                             ; 00516aa1
    MOV ECX,dword ptr [EDX + 0x8]       ; 00516aa2
    MOV dword ptr [ESP + 0xc],EAX       ; 00516aa5
    CMP EAX,ECX                         ; 00516aa9
    JGE 0x00516a71                      ; 00516aab
        ;   XREF to: 00516a71 (CONDITIONAL_JUMP)  ; LAB_00516a71
    IMUL EAX,EAX,0x8c                   ; 00516aad
    MOV dword ptr [ESP + 0x8],EAX       ; 00516ab3
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00516ab7
        ;   Label: LAB_00516ab7
    MOV EAX,dword ptr [ESP + 0x8]       ; 00516abb
    MOV EDI,dword ptr [EDI + 0xc]       ; 00516abf
    ADD EDI,EAX                         ; 00516ac2
    CMP dword ptr [EDI + 0x40],0x0      ; 00516ac4
    JNZ 0x00516afc                      ; 00516ac8
        ;   XREF to: 00516afc (CONDITIONAL_JUMP)  ; LAB_00516afc
    XOR EBP,EBP                         ; 00516aca
    MOV ESI,dword ptr [ESP + 0x10]      ; 00516acc
        ;   Label: LAB_00516acc
    MOV ECX,EBP                         ; 00516ad0
    XOR EBX,EBX                         ; 00516ad2
    MOV dword ptr [ESP + 0x14],0x3      ; 00516ad4
        ;   Label: LAB_00516ad4
    MOV EDX,ECX                         ; 00516adc
    MOV EAX,ECX                         ; 00516ade
    SAR EDX,0x1f                        ; 00516ae0
    IDIV dword ptr [ESP + 0x14]         ; 00516ae3
    MOV EAX,dword ptr [ESI + 0x10]      ; 00516ae7
    CMP EAX,dword ptr [EDI + EDX*0x4 + 0x10] ; 00516aea
    JZ 0x00516b2c                       ; 00516aee
        ;   XREF to: 00516b2c (CONDITIONAL_JUMP)  ; LAB_00516b2c
    CMP EBX,0x3                         ; 00516af0
        ;   Label: LAB_00516af0
    JNZ 0x00516b24                      ; 00516af3
        ;   XREF to: 00516b24 (CONDITIONAL_JUMP)  ; LAB_00516b24
    MOV dword ptr [EDI + 0x40],0x1      ; 00516af5
    MOV EBX,dword ptr [ESP + 0x8]       ; 00516afc
        ;   Label: LAB_00516afc
    MOV ESI,dword ptr [ESP + 0xc]       ; 00516b00
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00516b04
    ADD EBX,0x8c                        ; 00516b08
    INC ESI                             ; 00516b0e
    MOV EDI,dword ptr [EDX + 0x8]       ; 00516b0f
    MOV dword ptr [ESP + 0x8],EBX       ; 00516b12
    MOV dword ptr [ESP + 0xc],ESI       ; 00516b16
    CMP ESI,EDI                         ; 00516b1a
    JGE 0x00516a71                      ; 00516b1c
        ;   XREF to: 00516a71 (CONDITIONAL_JUMP)  ; LAB_00516a71
    JMP 0x00516ab7                      ; 00516b22
        ;   XREF to: 00516ab7 (UNCONDITIONAL_JUMP)  ; LAB_00516ab7
    INC EBP                             ; 00516b24
        ;   Label: LAB_00516b24
    CMP EBP,0x3                         ; 00516b25
    JL 0x00516acc                       ; 00516b28
        ;   XREF to: 00516acc (CONDITIONAL_JUMP)  ; LAB_00516acc
    JMP 0x00516afc                      ; 00516b2a
        ;   XREF to: 00516afc (UNCONDITIONAL_JUMP)  ; LAB_00516afc
    INC ECX                             ; 00516b2c
        ;   Label: LAB_00516b2c
    INC EBX                             ; 00516b2d
    ADD ESI,0x4                         ; 00516b2e
    CMP EBX,0x3                         ; 00516b31
    JL 0x00516ad4                       ; 00516b34
        ;   XREF to: 00516ad4 (CONDITIONAL_JUMP)  ; LAB_00516ad4
    JMP 0x00516af0                      ; 00516b36
        ;   XREF to: 00516af0 (UNCONDITIONAL_JUMP)  ; LAB_00516af0

