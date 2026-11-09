; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_blitSimpleSprite_FUN_00435b50(void *sprite_data,int dest_x,int dest_y,int width,int height)
;
; Parameters:
; void *           Stack[0x4]:4   sprite_data
; int              Stack[0x8]:4   dest_x
; int              Stack[0xc]:4   dest_y
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   height
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c5faf0
;
; Called Functions:
;   cockpit_ckptutil.c_FUN_00434e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00435b50
        ;   Label: cockpit_ckptutil.c_blitSimpleSprite_FUN_00435b50
    PUSH ESI                            ; 00435b51
    PUSH EDI                            ; 00435b52
    PUSH EBP                            ; 00435b53
    SUB ESP,0x1c                        ; 00435b54
    MOV EBX,dword ptr [ESP + 0x30]      ; 00435b57
    MOV ESI,dword ptr [ESP + 0x3c]      ; 00435b5b
    MOV EDI,dword ptr [ESP + 0x40]      ; 00435b5f
    MOV EDX,dword ptr [0x01c5faec]      ; 00435b63 | DAT_01c5faec
    MOV EBP,dword ptr [0x01c5faf0]      ; 00435b69 | DAT_01c5faf0
    SUB EBP,EDX                         ; 00435b6f
    MOV dword ptr [ESP + 0x8],EBP       ; 00435b71
    TEST EBX,EBX                        ; 00435b75
    JNZ 0x00435b88                      ; 00435b77
        ;   XREF to: 00435b88 (CONDITIONAL_JUMP)  ; LAB_00435b88
    LEA EAX,[EAX]                       ; 00435b79
    NOP                                 ; 00435b7f
    ADD ESP,0x1c                        ; 00435b80
        ;   Label: LAB_00435b80
    POP EBP                             ; 00435b83
    POP EDI                             ; 00435b84
    POP ESI                             ; 00435b85
    POP EBX                             ; 00435b86
    RET                                 ; 00435b87
    CALL cockpit_ckptutil.c_FUN_00434e80 ; 00435b88
        ;   XREF to: 00434e80 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_FUN_00434e80()
        ;   Label: LAB_00435b88
    MOV dword ptr [ESP + 0xc],EAX       ; 00435b8d
    MOV EAX,dword ptr [ESP + 0x38]      ; 00435b91
    MOV ECX,dword ptr [0x005fba20]      ; 00435b95 | DAT_005fba20
    SHL EAX,0x2                         ; 00435b9b
    CMP ECX,0x8                         ; 00435b9e
    JNZ 0x00435be0                      ; 00435ba1
        ;   XREF to: 00435be0 (CONDITIONAL_JUMP)  ; LAB_00435be0
    MOV ECX,dword ptr [ESP + 0x34]      ; 00435ba3
    MOV EBP,dword ptr [EAX + 0x1c5faec] ; 00435ba7
    XOR EAX,EAX                         ; 00435bad
    ADD EBP,ECX                         ; 00435baf
    MOV dword ptr [ESP + 0x14],EAX      ; 00435bb1
    TEST EDI,EDI                        ; 00435bb5
    JLE 0x00435b80                      ; 00435bb7
        ;   XREF to: 00435b80 (CONDITIONAL_JUMP)  ; LAB_00435b80
    PUSH ESI                            ; 00435bb9
        ;   Label: LAB_00435bb9
    PUSH EBX                            ; 00435bba
    PUSH EBP                            ; 00435bbb
    CALL dword ptr [ESP + 0x18]         ; 00435bbc
    ADD ESP,0xc                         ; 00435bc0
    ADD EBX,ESI                         ; 00435bc3
    MOV EDX,dword ptr [ESP + 0x14]      ; 00435bc5
    MOV ECX,dword ptr [ESP + 0x8]       ; 00435bc9
    INC EDX                             ; 00435bcd
    ADD EBP,ECX                         ; 00435bce
    MOV dword ptr [ESP + 0x14],EDX      ; 00435bd0
    CMP EDI,EDX                         ; 00435bd4
    JG 0x00435bb9                       ; 00435bd6
        ;   XREF to: 00435bb9 (CONDITIONAL_JUMP)  ; LAB_00435bb9
    ADD ESP,0x1c                        ; 00435bd8
    POP EBP                             ; 00435bdb
    POP EDI                             ; 00435bdc
    POP ESI                             ; 00435bdd
    POP EBX                             ; 00435bde
    RET                                 ; 00435bdf
    CMP ECX,0x10                        ; 00435be0
        ;   Label: LAB_00435be0
    JNZ 0x00435c3d                      ; 00435be3
        ;   XREF to: 00435c3d (CONDITIONAL_JUMP)  ; LAB_00435c3d
    MOV EDX,dword ptr [ESP + 0x34]      ; 00435be5
    MOV EBP,dword ptr [EAX + 0x1c5faec] ; 00435be9
    ADD EDX,EDX                         ; 00435bef
    MOV EAX,dword ptr [ESP + 0x8]       ; 00435bf1
    ADD EBP,EDX                         ; 00435bf5
    MOV EDX,EAX                         ; 00435bf7
    SAR EDX,0x1f                        ; 00435bf9
    SUB EAX,EDX                         ; 00435bfc
    SAR EAX,0x1                         ; 00435bfe
    XOR EDX,EDX                         ; 00435c00
    MOV dword ptr [ESP + 0x8],EAX       ; 00435c02
    MOV dword ptr [ESP + 0x18],EDX      ; 00435c06
    TEST EDI,EDI                        ; 00435c0a
    JLE 0x00435b80                      ; 00435c0c
        ;   XREF to: 00435b80 (CONDITIONAL_JUMP)  ; LAB_00435b80
    ADD EAX,EAX                         ; 00435c12
    MOV dword ptr [ESP],EAX             ; 00435c14
    PUSH ESI                            ; 00435c17
        ;   Label: LAB_00435c17
    PUSH EBX                            ; 00435c18
    PUSH EBP                            ; 00435c19
    CALL dword ptr [ESP + 0x18]         ; 00435c1a
    ADD ESP,0xc                         ; 00435c1e
    ADD EBX,ESI                         ; 00435c21
    MOV EDX,dword ptr [ESP + 0x18]      ; 00435c23
    MOV ECX,dword ptr [ESP]             ; 00435c27
    INC EDX                             ; 00435c2a
    ADD EBP,ECX                         ; 00435c2b
    MOV dword ptr [ESP + 0x18],EDX      ; 00435c2d
    CMP EDI,EDX                         ; 00435c31
    JG 0x00435c17                       ; 00435c33
        ;   XREF to: 00435c17 (CONDITIONAL_JUMP)  ; LAB_00435c17
    ADD ESP,0x1c                        ; 00435c35
    POP EBP                             ; 00435c38
    POP EDI                             ; 00435c39
    POP ESI                             ; 00435c3a
    POP EBX                             ; 00435c3b
    RET                                 ; 00435c3c
    MOV EDX,dword ptr [ESP + 0x34]      ; 00435c3d
        ;   Label: LAB_00435c3d
    MOV EBP,dword ptr [EAX + 0x1c5faec] ; 00435c41
    SHL EDX,0x2                         ; 00435c47
    MOV EAX,dword ptr [ESP + 0x8]       ; 00435c4a
    ADD EBP,EDX                         ; 00435c4e
    MOV EDX,EAX                         ; 00435c50
    SAR EDX,0x1f                        ; 00435c52
    SHL EDX,0x2                         ; 00435c55
    SBB EAX,EDX                         ; 00435c58
    SAR EAX,0x2                         ; 00435c5a
    MOV dword ptr [ESP + 0x8],EAX       ; 00435c5d
    XOR EAX,EAX                         ; 00435c61
    MOV dword ptr [ESP + 0x10],EAX      ; 00435c63
    TEST EDI,EDI                        ; 00435c67
    JLE 0x00435b80                      ; 00435c69
        ;   XREF to: 00435b80 (CONDITIONAL_JUMP)  ; LAB_00435b80
    MOV EAX,dword ptr [ESP + 0x8]       ; 00435c6f
    SHL EAX,0x2                         ; 00435c73
    MOV dword ptr [ESP + 0x4],EAX       ; 00435c76
    PUSH ESI                            ; 00435c7a
        ;   Label: LAB_00435c7a
    PUSH EBX                            ; 00435c7b
    PUSH EBP                            ; 00435c7c
    CALL dword ptr [ESP + 0x18]         ; 00435c7d
    ADD ESP,0xc                         ; 00435c81
    ADD EBX,ESI                         ; 00435c84
    MOV EDX,dword ptr [ESP + 0x10]      ; 00435c86
    MOV ECX,dword ptr [ESP + 0x4]       ; 00435c8a
    INC EDX                             ; 00435c8e
    ADD EBP,ECX                         ; 00435c8f
    MOV dword ptr [ESP + 0x10],EDX      ; 00435c91
    CMP EDI,EDX                         ; 00435c95
    JG 0x00435c7a                       ; 00435c97
        ;   XREF to: 00435c7a (CONDITIONAL_JUMP)  ; LAB_00435c7a
    ADD ESP,0x1c                        ; 00435c99
    POP EBP                             ; 00435c9c
    POP EDI                             ; 00435c9d
    POP ESI                             ; 00435c9e
    POP EBX                             ; 00435c9f
    RET                                 ; 00435ca0

