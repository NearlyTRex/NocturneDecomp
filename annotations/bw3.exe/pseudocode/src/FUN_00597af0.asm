; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00597af0(int param_1,int param_2)
;
;
; Called Functions:
;   FUN_0040cea0
;   FUN_00489b80
;   FUN_0048a1b0
;   FUN_004fc070
;   FUN_004fc0d0
;   FUN_00597be0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00597af0
        ;   Label: FUN_00597af0
    PUSH EDI                            ; 00597af1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00597af2
    MOV EDI,dword ptr [ESP + 0x10]      ; 00597af6
    CMP dword ptr [EDI + 0x30],0x70     ; 00597afa
    JZ 0x00597b63                       ; 00597afe
        ;   XREF to: 00597b63 (CONDITIONAL_JUMP)  ; LAB_00597b63
    PUSH ESI                            ; 00597b00
    FLD float ptr [EDI + 0x4]           ; 00597b01
    FSUBR float ptr [EBX + 0x2538]      ; 00597b04
    LEA ESI,[EBX + 0x158]               ; 00597b0a
    FST float ptr [EBX + 0x2538]        ; 00597b10
    FLDZ                                ; 00597b16
    FCOMPP                              ; 00597b18
    FNSTSW AX                           ; 00597b1a
    SAHF                                ; 00597b1c
    JNC 0x00597b66                      ; 00597b1d
        ;   XREF to: 00597b66 (CONDITIONAL_JUMP)  ; LAB_00597b66
    PUSH dword ptr [EDI + 0x4]          ; 00597b1f
    PUSH EBX                            ; 00597b22
    CALL FUN_0048a1b0                   ; 00597b23
        ;   XREF to: 0048a1b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0048a1b0()
    ADD ESP,0x8                         ; 00597b28
    TEST EAX,EAX                        ; 00597b2b
    JZ 0x00597b3c                       ; 00597b2d
        ;   XREF to: 00597b3c (CONDITIONAL_JUMP)  ; LAB_00597b3c
    PUSH 0x1                            ; 00597b2f
    PUSH 0x7                            ; 00597b31
    PUSH ESI                            ; 00597b33
    CALL FUN_004fc0d0                   ; 00597b34
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc0d0()
    ADD ESP,0xc                         ; 00597b39
    PUSH 0x64                           ; 00597b3c
        ;   Label: LAB_00597b3c
    PUSH 0x0                            ; 00597b3e
    CALL FUN_0040cea0                   ; 00597b40
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cea0()
    ADD ESP,0x8                         ; 00597b45
    CMP EAX,0x5a                        ; 00597b48
    JLE 0x00597b58                      ; 00597b4b
        ;   XREF to: 00597b58 (CONDITIONAL_JUMP)  ; LAB_00597b58
    PUSH 0x0                            ; 00597b4d
    PUSH EBX                            ; 00597b4f
    CALL FUN_00597be0                   ; 00597b50
        ;   XREF to: 00597be0 (UNCONDITIONAL_CALL)  ; undefined FUN_00597be0()
    ADD ESP,0x8                         ; 00597b55
    PUSH EDI                            ; 00597b58
        ;   Label: LAB_00597b58
    PUSH EBX                            ; 00597b59
    CALL FUN_00489b80                   ; 00597b5a
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00489b80()
    ADD ESP,0x8                         ; 00597b5f
    POP ESI                             ; 00597b62
    POP EDI                             ; 00597b63
        ;   Label: LAB_00597b63
    POP EBX                             ; 00597b64
    RET                                 ; 00597b65
    PUSH 0x0                            ; 00597b66
        ;   Label: LAB_00597b66
    MOV dword ptr [EBX + 0x2540],0x0    ; 00597b68
    PUSH 0x0                            ; 00597b72
    MOV EAX,dword ptr [EBX + 0x154]     ; 00597b74
    PUSH EBX                            ; 00597b7a
    MOV dword ptr [EBX + 0x2538],0x0    ; 00597b7b
    CALL dword ptr [EAX + 0x128]        ; 00597b85
    ADD ESP,0xc                         ; 00597b8b
    PUSH ESI                            ; 00597b8e
    CALL FUN_004fc070                   ; 00597b8f
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc070()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00597b94
    ADD ESP,0x4                         ; 00597b97
    CMP EAX,0x9                         ; 00597b9a
    JZ 0x00597b58                       ; 00597b9d
        ;   XREF to: 00597b58 (CONDITIONAL_JUMP)  ; LAB_00597b58
    CMP EAX,0x8                         ; 00597b9f
    JZ 0x00597b58                       ; 00597ba2
        ;   XREF to: 00597b58 (CONDITIONAL_JUMP)  ; LAB_00597b58
    PUSH 0x1                            ; 00597ba4
    PUSH 0x8                            ; 00597ba6
    PUSH ESI                            ; 00597ba8
    CALL FUN_004fc0d0                   ; 00597ba9
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc0d0()
    ADD ESP,0xc                         ; 00597bae
    PUSH 0x41c80000                     ; 00597bb1
    PUSH 0x32                           ; 00597bb6
    MOV EAX,dword ptr [EBX + 0x154]     ; 00597bb8
    PUSH EBX                            ; 00597bbe
    CALL dword ptr [EAX + 0xa8]         ; 00597bbf
    ADD ESP,0xc                         ; 00597bc5
    PUSH EDI                            ; 00597bc8
    PUSH EBX                            ; 00597bc9
    CALL FUN_00489b80                   ; 00597bca
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00489b80()
    ADD ESP,0x8                         ; 00597bcf
    POP ESI                             ; 00597bd2
    POP EDI                             ; 00597bd3
    POP EBX                             ; 00597bd4
    RET                                 ; 00597bd5

