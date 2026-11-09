; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setdir_cpp_CZThumb_render_FUN_00538a60(CZThumb *this_ptr,int screen_x,int screen_y)
;
; Parameters:
; CZThumb *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   screen_x
; int              Stack[0xc]:4   screen_y
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_setdir.cpp_CDemonSet_renderVirtualDirectors_FUN_00539d60 at 00539e93
;
; Referenced Globals:
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c3490f
;   undefined4 DAT_01c35e60
;
; Called Functions:
;   engine_2d.c_plotPixel_FUN_00401130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00538a60
        ;   Label: core_setdir.cpp_CZThumb_render_FUN_00538a60
    PUSH ESI                            ; 00538a61
    PUSH EDI                            ; 00538a62
    PUSH EBP                            ; 00538a63
    SUB ESP,0x10                        ; 00538a64
    MOV EBX,dword ptr [ESP + 0x24]      ; 00538a67
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00538a6b
    MOV EDX,dword ptr [ESP + 0x28]      ; 00538a6f
    TEST EDX,EDX                        ; 00538a73
    JL 0x00538bd8                       ; 00538a75
        ;   XREF to: 00538bd8 (CONDITIONAL_JUMP)  ; LAB_00538bd8
    TEST EAX,EAX                        ; 00538a7b
    JL 0x00538bd8                       ; 00538a7d
        ;   XREF to: 00538bd8 (CONDITIONAL_JUMP)  ; LAB_00538bd8
    MOV ECX,dword ptr [EBX]             ; 00538a83
    MOV ESI,dword ptr [0x006141b8]      ; 00538a85 | DAT_006141b8
    ADD EDX,ECX                         ; 00538a8b
    CMP EDX,ESI                         ; 00538a8d
    JGE 0x00538bd8                      ; 00538a8f
        ;   XREF to: 00538bd8 (CONDITIONAL_JUMP)  ; LAB_00538bd8
    MOV EDX,dword ptr [EBX + 0x4]       ; 00538a95
    MOV EDI,dword ptr [0x006141bc]      ; 00538a98 | DAT_006141bc
    ADD EDX,EAX                         ; 00538a9e
    CMP EDX,EDI                         ; 00538aa0
    JGE 0x00538bd8                      ; 00538aa2
        ;   XREF to: 00538bd8 (CONDITIONAL_JUMP)  ; LAB_00538bd8
    CMP dword ptr [0x006141c0],0x20     ; 00538aa8 | DAT_006141c0
    JNZ 0x00538b4a                      ; 00538aaf
        ;   XREF to: 00538b4a (CONDITIONAL_JUMP)  ; LAB_00538b4a
    SHL EAX,0x2                         ; 00538ab5
    MOV EDX,0x1                         ; 00538ab8
    ADD EAX,0x4                         ; 00538abd
    MOV dword ptr [ESP + 0xc],EDX       ; 00538ac0
    MOV dword ptr [ESP + 0x4],EAX       ; 00538ac4
    MOV EAX,dword ptr [EBX + 0x4]       ; 00538ac8
        ;   Label: LAB_00538ac8
    MOV EDX,dword ptr [ESP + 0xc]       ; 00538acb
    DEC EAX                             ; 00538acf
    CMP EAX,EDX                         ; 00538ad0
    JLE 0x00538bd8                      ; 00538ad2
        ;   XREF to: 00538bd8 (CONDITIONAL_JUMP)  ; LAB_00538bd8
    MOV EAX,dword ptr [ESP + 0x28]      ; 00538ad8
    MOV EBP,dword ptr [ESP + 0x4]       ; 00538adc
    SHL EAX,0x2                         ; 00538ae0
    MOV ECX,0x1                         ; 00538ae3
    LEA ESI,[EAX + 0x4]                 ; 00538ae8
    MOV EAX,dword ptr [EBX]             ; 00538aeb
        ;   Label: LAB_00538aeb
    DEC EAX                             ; 00538aed
    CMP ECX,EAX                         ; 00538aee
    JL 0x00538b08                       ; 00538af0
        ;   XREF to: 00538b08 (CONDITIONAL_JUMP)  ; LAB_00538b08
    MOV ESI,dword ptr [ESP + 0xc]       ; 00538af2
    MOV ECX,dword ptr [ESP + 0x4]       ; 00538af6
    INC ESI                             ; 00538afa
    ADD ECX,0x4                         ; 00538afb
    MOV dword ptr [ESP + 0xc],ESI       ; 00538afe
    MOV dword ptr [ESP + 0x4],ECX       ; 00538b02
    JMP 0x00538ac8                      ; 00538b06
        ;   XREF to: 00538ac8 (UNCONDITIONAL_JUMP)  ; LAB_00538ac8
    MOV EAX,dword ptr [ESP + 0xc]       ; 00538b08
        ;   Label: LAB_00538b08
    IMUL EAX,dword ptr [EBX]            ; 00538b0c
    MOV EDI,dword ptr [EBX + 0x24]      ; 00538b0f
    ADD EAX,ECX                         ; 00538b12
    XOR EDX,EDX                         ; 00538b14
    MOV EDI,dword ptr [EDI + EAX*0x4]   ; 00538b16
    MOV EAX,0xffffff                    ; 00538b19
    INC EDI                             ; 00538b1e
    DIV EDI                             ; 00538b1f
    CMP EAX,0xff                        ; 00538b21
    JBE 0x00538b2d                      ; 00538b26
        ;   XREF to: 00538b2d (CONDITIONAL_JUMP)  ; LAB_00538b2d
    MOV EAX,0xff                        ; 00538b28
    MOV EDI,dword ptr [EBP + 0x1c2a38c] ; 00538b2d
        ;   Label: LAB_00538b2d
    LEA EDX,[EDI + ESI*0x1]             ; 00538b33
    MOV EDI,EAX                         ; 00538b36
    SHL EDI,0x8                         ; 00538b38
    ADD EDI,EAX                         ; 00538b3b
    SHL EAX,0x10                        ; 00538b3d
    INC ECX                             ; 00538b40
    ADD EDI,EAX                         ; 00538b41
    ADD ESI,0x4                         ; 00538b43
    MOV dword ptr [EDX],EDI             ; 00538b46
    JMP 0x00538aeb                      ; 00538b48
        ;   XREF to: 00538aeb (UNCONDITIONAL_JUMP)  ; LAB_00538aeb
    MOV EBP,0x1                         ; 00538b4a
        ;   Label: LAB_00538b4a
    ADD EAX,EBP                         ; 00538b4f
    MOV dword ptr [ESP],EAX             ; 00538b51
    MOV EAX,dword ptr [EBX + 0x4]       ; 00538b54
        ;   Label: LAB_00538b54
    DEC EAX                             ; 00538b57
    CMP EBP,EAX                         ; 00538b58
    JGE 0x00538bd8                      ; 00538b5a
        ;   XREF to: 00538bd8 (CONDITIONAL_JUMP)  ; LAB_00538bd8
    MOV EAX,dword ptr [ESP]             ; 00538b60
    MOV EDI,dword ptr [ESP + 0x28]      ; 00538b63
    MOV ESI,0x1                         ; 00538b67
    MOV dword ptr [ESP + 0x8],EAX       ; 00538b6c
    ADD EDI,ESI                         ; 00538b70
    MOV EAX,dword ptr [EBX]             ; 00538b72
        ;   Label: LAB_00538b72
    DEC EAX                             ; 00538b74
    CMP ESI,EAX                         ; 00538b75
    JL 0x00538b83                       ; 00538b77
        ;   XREF to: 00538b83 (CONDITIONAL_JUMP)  ; LAB_00538b83
    MOV ECX,dword ptr [ESP]             ; 00538b79
    INC ECX                             ; 00538b7c
    INC EBP                             ; 00538b7d
    MOV dword ptr [ESP],ECX             ; 00538b7e
    JMP 0x00538b54                      ; 00538b81
        ;   XREF to: 00538b54 (UNCONDITIONAL_JUMP)  ; LAB_00538b54
    MOV EAX,dword ptr [EBX]             ; 00538b83
        ;   Label: LAB_00538b83
    IMUL EAX,EBP                        ; 00538b85
    MOV EDX,dword ptr [EBX + 0x24]      ; 00538b88
    ADD EAX,ESI                         ; 00538b8b
    MOV ECX,dword ptr [EDX + EAX*0x4]   ; 00538b8d
    MOV EAX,0xffffff                    ; 00538b90
    INC ECX                             ; 00538b95
    XOR EDX,EDX                         ; 00538b96
    DIV ECX                             ; 00538b98
    CMP EAX,0xff                        ; 00538b9a
    JBE 0x00538ba6                      ; 00538b9f
        ;   XREF to: 00538ba6 (CONDITIONAL_JUMP)  ; LAB_00538ba6
    MOV EAX,0xff                        ; 00538ba1
    SHR EAX,0x3                         ; 00538ba6
        ;   Label: LAB_00538ba6
    MOV EDX,EAX                         ; 00538ba9
    MOV ECX,EAX                         ; 00538bab
    SHL EDX,0xa                         ; 00538bad
    SHL ECX,0x5                         ; 00538bb0
    ADD EDX,ECX                         ; 00538bb3
    MOV AL,byte ptr [EDX + EAX*0x1 + 0x1c2c910] ; 00538bb5 | DAT_01c3490f
    AND EAX,0xff                        ; 00538bbc
    MOV [0x01c35e60],EAX                ; 00538bc1 | DAT_01c35e60
    MOV EAX,dword ptr [ESP + 0x8]       ; 00538bc6
    PUSH EAX                            ; 00538bca
    PUSH EDI                            ; 00538bcb
    INC ESI                             ; 00538bcc
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00538bcd
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00538bd2
    INC EDI                             ; 00538bd5
    JMP 0x00538b72                      ; 00538bd6
        ;   XREF to: 00538b72 (UNCONDITIONAL_JUMP)  ; LAB_00538b72
    ADD ESP,0x10                        ; 00538bd8
        ;   Label: LAB_00538bd8
    POP EBP                             ; 00538bdb
    POP EDI                             ; 00538bdc
    POP ESI                             ; 00538bdd
    POP EBX                             ; 00538bde
    RET                                 ; 00538bdf

