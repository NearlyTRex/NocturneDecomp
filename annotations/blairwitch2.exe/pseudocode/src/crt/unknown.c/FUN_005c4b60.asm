; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c4b60(undefined4 param_1,int param_2)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005c29d8 at 005c2a03
;   crt_unknown.c_FUN_005c2ab4 at 005c2b9f
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2d0 = 005bce04
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2d4 = 005bce04
;   undefined4 DAT_026810b0
;
; Called Functions:
;   crt_memory.c_calloc_FUN_005b98d0
;   crt_unknown.c_FUN_005b86a0
;   crt_unknown.c_FUN_005bce04
;   crt_unknown.c_FUN_005c5d00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c4b60
        ;   Label: crt_unknown.c_FUN_005c4b60
    PUSH ESI                            ; 005c4b61
    PUSH EDI                            ; 005c4b62
    MOV EDI,dword ptr [ESP + 0x14]      ; 005c4b63
    CALL dword ptr [0x0061f2d0]         ; 005c4b67 | PTR_crt_unknown.c_FUN_005bce04_0061f2d0
    PUSH 0x10                           ; 005c4b6d
    MOV ESI,0x1                         ; 005c4b6f
    PUSH ESI                            ; 005c4b74
    CALL crt_memory.c_calloc_FUN_005b98d0 ; 005c4b75
        ;   XREF to: 005b98d0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_calloc_FUN_005b98d0()
    MOV EBX,EAX                         ; 005c4b7a
    ADD ESP,0x8                         ; 005c4b7c
    TEST EAX,EAX                        ; 005c4b7f
    JZ 0x005c4bbe                       ; 005c4b81
        ;   XREF to: 005c4bbe (CONDITIONAL_JUMP)  ; LAB_005c4bbe
    PUSH EDI                            ; 005c4b83
    CALL crt_unknown.c_FUN_005c5d00     ; 005c4b84
        ;   XREF to: 005c5d00 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c5d00()
    ADD ESP,0x4                         ; 005c4b89
    TEST EAX,EAX                        ; 005c4b8c
    JZ 0x005c4b9d                       ; 005c4b8e
        ;   XREF to: 005c4b9d (CONDITIONAL_JUMP)  ; LAB_005c4b9d
    PUSH EBX                            ; 005c4b90
    CALL crt_unknown.c_FUN_005b86a0     ; 005c4b91
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    XOR ESI,ESI                         ; 005c4b96
    ADD ESP,0x4                         ; 005c4b98
    JMP 0x005c4bc0                      ; 005c4b9b
        ;   XREF to: 005c4bc0 (UNCONDITIONAL_JUMP)  ; LAB_005c4bc0
    MOV EAX,dword ptr [ESP + 0x10]      ; 005c4b9d
        ;   Label: LAB_005c4b9d
    MOV dword ptr [EBX + 0x8],EDI       ; 005c4ba1
    MOV dword ptr [EBX + 0x4],EAX       ; 005c4ba4
    XOR EAX,EAX                         ; 005c4ba7
    MOV AL,byte ptr [EDI + 0x52]        ; 005c4ba9
    MOV dword ptr [EBX + 0xc],EAX       ; 005c4bac
    MOV EAX,[0x026810b0]                ; 005c4baf | DAT_026810b0
    MOV dword ptr [0x026810b0],EBX      ; 005c4bb4 | DAT_026810b0
    MOV dword ptr [EBX],EAX             ; 005c4bba
    JMP 0x005c4bc0                      ; 005c4bbc
        ;   XREF to: 005c4bc0 (UNCONDITIONAL_JUMP)  ; LAB_005c4bc0
    XOR ESI,ESI                         ; 005c4bbe
        ;   Label: LAB_005c4bbe
    CALL dword ptr [0x0061f2d4]         ; 005c4bc0 | PTR_crt_unknown.c_FUN_005bce04_0061f2d4
        ;   Label: LAB_005c4bc0
    MOV EAX,ESI                         ; 005c4bc6
    POP EDI                             ; 005c4bc8
    POP ESI                             ; 005c4bc9
    POP EBX                             ; 005c4bca
    RET                                 ; 005c4bcb

