; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_flipEdgeArrayHorizontally_FUN_00438b30(SEdge *edge_array,int edge_count,int flip_width)
;
; Parameters:
; SEdge *          Stack[0x4]:4   edge_array
; int              Stack[0x8]:4   edge_count
; int              Stack[0xc]:4   flip_width
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438b30
        ;   Label: cockpit_ckptutil.c_flipEdgeArrayHorizontally_FUN_00438b30
    PUSH ESI                            ; 00438b31
    PUSH EDI                            ; 00438b32
    PUSH EBP                            ; 00438b33
    SUB ESP,0x1c                        ; 00438b34
    MOV EBP,dword ptr [ESP + 0x34]      ; 00438b37
    XOR ECX,ECX                         ; 00438b3b
    TEST EBP,EBP                        ; 00438b3d
    JLE 0x00438c14                      ; 00438b3f
        ;   XREF to: 00438c14 (CONDITIONAL_JUMP)  ; LAB_00438c14
    MOV EAX,dword ptr [ESP + 0x30]      ; 00438b45
    MOV SI,word ptr [EAX + 0x2]         ; 00438b49
        ;   Label: LAB_00438b49
    MOVSX ESI,SI                        ; 00438b4d
    MOV dword ptr [ESP + 0x4],ESI       ; 00438b50
    MOV SI,word ptr [EAX + 0x4]         ; 00438b54
    MOVSX ESI,SI                        ; 00438b58
    MOV EDI,dword ptr [ESP + 0x38]      ; 00438b5b
    MOV dword ptr [ESP],ESI             ; 00438b5f
    MOV DX,word ptr [EAX]               ; 00438b62
    SUB EDI,dword ptr [ESP]             ; 00438b65
    MOVSX EBX,DX                        ; 00438b68
    MOV dword ptr [ESP + 0xc],EDI       ; 00438b6b
    MOV EDI,dword ptr [ESP + 0x38]      ; 00438b6f
    SUB EDI,EBX                         ; 00438b73
    MOV SI,word ptr [EAX + 0x6]         ; 00438b75
    MOV dword ptr [ESP + 0x8],EDI       ; 00438b79
    MOV EDI,dword ptr [ESP + 0xc]       ; 00438b7d
    ADD ESI,ESI                         ; 00438b81
    DEC EDI                             ; 00438b83
    SAR SI,0x1                          ; 00438b84
    MOV dword ptr [ESP + 0x18],EDI      ; 00438b87
    MOV EDI,dword ptr [ESP + 0x8]       ; 00438b8b
    MOVSX ESI,SI                        ; 00438b8f
    DEC EDI                             ; 00438b92
    MOV dword ptr [ESP + 0x14],ESI      ; 00438b93
    MOV dword ptr [ESP + 0x10],EDI      ; 00438b97
    MOV EDI,dword ptr [ESP]             ; 00438b9b
    MOV ESI,dword ptr [ESP + 0x4]       ; 00438b9e
    CMP EBX,EDI                         ; 00438ba2
    JG 0x00438c1c                       ; 00438ba4
        ;   XREF to: 00438c1c (CONDITIONAL_JUMP)  ; LAB_00438c1c
    MOV DI,word ptr [EAX + 0x2]         ; 00438ba6
    AND EDX,0xffff0000                  ; 00438baa
    AND EDI,0xffff0000                  ; 00438bb0
    MOV word ptr [EAX],DX               ; 00438bb6
    MOV EDX,dword ptr [ESP + 0x14]      ; 00438bb9
    MOV BX,word ptr [EAX]               ; 00438bbd
    MOV word ptr [EAX + 0x2],DI         ; 00438bc0
    OR EBX,EDX                          ; 00438bc4
    MOV EDX,dword ptr [ESP + 0x18]      ; 00438bc6
    MOV word ptr [EAX],BX               ; 00438bca
    MOV EBX,EDI                         ; 00438bcd
    MOV DI,word ptr [EAX + 0x4]         ; 00438bcf
    OR EBX,EDX                          ; 00438bd3
    AND EDI,0xffff0000                  ; 00438bd5
    MOV word ptr [EAX + 0x2],BX         ; 00438bdb
    MOV EDX,EDI                         ; 00438bdf
    MOV BX,word ptr [EAX + 0x6]         ; 00438be1
    MOV word ptr [EAX + 0x4],DI         ; 00438be5
    OR EDX,ESI                          ; 00438be9
    AND EBX,0xffff8000                  ; 00438beb
    MOV word ptr [EAX + 0x4],DX         ; 00438bf1
    MOV EDX,dword ptr [ESP + 0x10]      ; 00438bf5
    MOV ESI,EBX                         ; 00438bf9
    AND DH,0x7f                         ; 00438bfb
    MOV word ptr [EAX + 0x6],BX         ; 00438bfe
    OR ESI,EDX                          ; 00438c02
    MOV word ptr [EAX + 0x6],SI         ; 00438c04
    INC ECX                             ; 00438c08
    ADD EAX,0x8                         ; 00438c09
    CMP ECX,EBP                         ; 00438c0c
    JL 0x00438b49                       ; 00438c0e
        ;   XREF to: 00438b49 (CONDITIONAL_JUMP)  ; LAB_00438b49
    ADD ESP,0x1c                        ; 00438c14
        ;   Label: LAB_00438c14
    POP EBP                             ; 00438c17
    POP EDI                             ; 00438c18
    POP ESI                             ; 00438c19
    POP EBX                             ; 00438c1a
    RET                                 ; 00438c1b
    AND EDX,0xffff0000                  ; 00438c1c
        ;   Label: LAB_00438c1c
    MOV BX,word ptr [EAX + 0x2]         ; 00438c22
    MOV EDI,EDX                         ; 00438c26
    AND EBX,0xffff0000                  ; 00438c28
    MOV word ptr [EAX],DX               ; 00438c2e
    OR EDI,ESI                          ; 00438c31
    MOV word ptr [EAX + 0x2],BX         ; 00438c33
    MOV EDX,dword ptr [ESP + 0x10]      ; 00438c37
    MOV word ptr [EAX],DI               ; 00438c3b
    MOV ESI,EBX                         ; 00438c3e
    MOV DI,word ptr [EAX + 0x4]         ; 00438c40
    OR ESI,EDX                          ; 00438c44
    MOV EDX,dword ptr [ESP + 0x14]      ; 00438c46
    AND EDI,0xffff0000                  ; 00438c4a
    MOV word ptr [EAX + 0x2],SI         ; 00438c50
    MOV EBX,EDI                         ; 00438c54
    MOV SI,word ptr [EAX + 0x6]         ; 00438c56
    MOV word ptr [EAX + 0x4],DI         ; 00438c5a
    AND ESI,0xffff8000                  ; 00438c5e
    OR EBX,EDX                          ; 00438c64
    MOV EDX,dword ptr [ESP + 0x18]      ; 00438c66
    MOV EDI,ESI                         ; 00438c6a
    MOV word ptr [EAX + 0x4],BX         ; 00438c6c
    AND DH,0x7f                         ; 00438c70
    MOV word ptr [EAX + 0x6],SI         ; 00438c73
    OR EDI,EDX                          ; 00438c77
    MOV word ptr [EAX + 0x6],DI         ; 00438c79
    INC ECX                             ; 00438c7d
    ADD EAX,0x8                         ; 00438c7e
    CMP ECX,EBP                         ; 00438c81
    JL 0x00438b49                       ; 00438c83
        ;   XREF to: 00438b49 (CONDITIONAL_JUMP)  ; LAB_00438b49
    ADD ESP,0x1c                        ; 00438c89
    POP EBP                             ; 00438c8c
    POP EDI                             ; 00438c8d
    POP ESI                             ; 00438c8e
    POP EBX                             ; 00438c8f
    RET                                 ; 00438c90

