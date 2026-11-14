; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_flipEdgeArrayHorizontally_FUN_0043af20(SEdge *edge_array,int edge_count,int flip_width)
;
; Parameters:
; SEdge *          Stack[0x4]:4   edge_array
; int              Stack[0x8]:4   edge_count
; int              Stack[0xc]:4   flip_width
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043af20
        ;   Label: cockpit_ckptutil.c_flipEdgeArrayHorizontally_FUN_0043af20
    PUSH ESI                            ; 0043af21
    PUSH EDI                            ; 0043af22
    PUSH EBP                            ; 0043af23
    SUB ESP,0x1c                        ; 0043af24
    MOV EBP,dword ptr [ESP + 0x34]      ; 0043af27
    XOR ECX,ECX                         ; 0043af2b
    TEST EBP,EBP                        ; 0043af2d
    JLE 0x0043b004                      ; 0043af2f
        ;   XREF to: 0043b004 (CONDITIONAL_JUMP)  ; LAB_0043b004
    MOV EAX,dword ptr [ESP + 0x30]      ; 0043af35
    MOV SI,word ptr [EAX + 0x2]         ; 0043af39
        ;   Label: LAB_0043af39
    MOVSX ESI,SI                        ; 0043af3d
    MOV dword ptr [ESP + 0x4],ESI       ; 0043af40
    MOV SI,word ptr [EAX + 0x4]         ; 0043af44
    MOVSX ESI,SI                        ; 0043af48
    MOV EDI,dword ptr [ESP + 0x38]      ; 0043af4b
    MOV dword ptr [ESP],ESI             ; 0043af4f
    MOV DX,word ptr [EAX]               ; 0043af52
    SUB EDI,dword ptr [ESP]             ; 0043af55
    MOVSX EBX,DX                        ; 0043af58
    MOV dword ptr [ESP + 0xc],EDI       ; 0043af5b
    MOV EDI,dword ptr [ESP + 0x38]      ; 0043af5f
    SUB EDI,EBX                         ; 0043af63
    MOV SI,word ptr [EAX + 0x6]         ; 0043af65
    MOV dword ptr [ESP + 0x8],EDI       ; 0043af69
    MOV EDI,dword ptr [ESP + 0xc]       ; 0043af6d
    ADD ESI,ESI                         ; 0043af71
    DEC EDI                             ; 0043af73
    SAR SI,0x1                          ; 0043af74
    MOV dword ptr [ESP + 0x18],EDI      ; 0043af77
    MOV EDI,dword ptr [ESP + 0x8]       ; 0043af7b
    MOVSX ESI,SI                        ; 0043af7f
    DEC EDI                             ; 0043af82
    MOV dword ptr [ESP + 0x14],ESI      ; 0043af83
    MOV dword ptr [ESP + 0x10],EDI      ; 0043af87
    MOV EDI,dword ptr [ESP]             ; 0043af8b
    MOV ESI,dword ptr [ESP + 0x4]       ; 0043af8e
    CMP EBX,EDI                         ; 0043af92
    JG 0x0043b00c                       ; 0043af94
        ;   XREF to: 0043b00c (CONDITIONAL_JUMP)  ; LAB_0043b00c
    MOV DI,word ptr [EAX + 0x2]         ; 0043af96
    AND EDX,0xffff0000                  ; 0043af9a
    AND EDI,0xffff0000                  ; 0043afa0
    MOV word ptr [EAX],DX               ; 0043afa6
    MOV EDX,dword ptr [ESP + 0x14]      ; 0043afa9
    MOV BX,word ptr [EAX]               ; 0043afad
    MOV word ptr [EAX + 0x2],DI         ; 0043afb0
    OR EBX,EDX                          ; 0043afb4
    MOV EDX,dword ptr [ESP + 0x18]      ; 0043afb6
    MOV word ptr [EAX],BX               ; 0043afba
    MOV EBX,EDI                         ; 0043afbd
    MOV DI,word ptr [EAX + 0x4]         ; 0043afbf
    OR EBX,EDX                          ; 0043afc3
    AND EDI,0xffff0000                  ; 0043afc5
    MOV word ptr [EAX + 0x2],BX         ; 0043afcb
    MOV EDX,EDI                         ; 0043afcf
    MOV BX,word ptr [EAX + 0x6]         ; 0043afd1
    MOV word ptr [EAX + 0x4],DI         ; 0043afd5
    OR EDX,ESI                          ; 0043afd9
    AND EBX,0xffff8000                  ; 0043afdb
    MOV word ptr [EAX + 0x4],DX         ; 0043afe1
    MOV EDX,dword ptr [ESP + 0x10]      ; 0043afe5
    MOV ESI,EBX                         ; 0043afe9
    AND DH,0x7f                         ; 0043afeb
    MOV word ptr [EAX + 0x6],BX         ; 0043afee
    OR ESI,EDX                          ; 0043aff2
    MOV word ptr [EAX + 0x6],SI         ; 0043aff4
    INC ECX                             ; 0043aff8
    ADD EAX,0x8                         ; 0043aff9
    CMP ECX,EBP                         ; 0043affc
    JL 0x0043af39                       ; 0043affe
        ;   XREF to: 0043af39 (CONDITIONAL_JUMP)  ; LAB_0043af39
    ADD ESP,0x1c                        ; 0043b004
        ;   Label: LAB_0043b004
    POP EBP                             ; 0043b007
    POP EDI                             ; 0043b008
    POP ESI                             ; 0043b009
    POP EBX                             ; 0043b00a
    RET                                 ; 0043b00b
    AND EDX,0xffff0000                  ; 0043b00c
        ;   Label: LAB_0043b00c
    MOV BX,word ptr [EAX + 0x2]         ; 0043b012
    MOV EDI,EDX                         ; 0043b016
    AND EBX,0xffff0000                  ; 0043b018
    MOV word ptr [EAX],DX               ; 0043b01e
    OR EDI,ESI                          ; 0043b021
    MOV word ptr [EAX + 0x2],BX         ; 0043b023
    MOV EDX,dword ptr [ESP + 0x10]      ; 0043b027
    MOV word ptr [EAX],DI               ; 0043b02b
    MOV ESI,EBX                         ; 0043b02e
    MOV DI,word ptr [EAX + 0x4]         ; 0043b030
    OR ESI,EDX                          ; 0043b034
    MOV EDX,dword ptr [ESP + 0x14]      ; 0043b036
    AND EDI,0xffff0000                  ; 0043b03a
    MOV word ptr [EAX + 0x2],SI         ; 0043b040
    MOV EBX,EDI                         ; 0043b044
    MOV SI,word ptr [EAX + 0x6]         ; 0043b046
    MOV word ptr [EAX + 0x4],DI         ; 0043b04a
    AND ESI,0xffff8000                  ; 0043b04e
    OR EBX,EDX                          ; 0043b054
    MOV EDX,dword ptr [ESP + 0x18]      ; 0043b056
    MOV EDI,ESI                         ; 0043b05a
    MOV word ptr [EAX + 0x4],BX         ; 0043b05c
    AND DH,0x7f                         ; 0043b060
    MOV word ptr [EAX + 0x6],SI         ; 0043b063
    OR EDI,EDX                          ; 0043b067
    MOV word ptr [EAX + 0x6],DI         ; 0043b069
    INC ECX                             ; 0043b06d
    ADD EAX,0x8                         ; 0043b06e
    CMP ECX,EBP                         ; 0043b071
    JL 0x0043af39                       ; 0043b073
        ;   XREF to: 0043af39 (CONDITIONAL_JUMP)  ; LAB_0043af39
    ADD ESP,0x1c                        ; 0043b079
    POP EBP                             ; 0043b07c
    POP EDI                             ; 0043b07d
    POP ESI                             ; 0043b07e
    POP EBX                             ; 0043b07f
    RET                                 ; 0043b080

