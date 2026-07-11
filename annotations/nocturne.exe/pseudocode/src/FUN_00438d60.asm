; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00438d60(int *param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_004399a0 at 004399b6
;
; Called Functions:
;   FUN_00564ce5
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438d60
        ;   Label: FUN_00438d60
    PUSH ESI                            ; 00438d61
    MOV EBX,dword ptr [ESP + 0xc]       ; 00438d62
    MOV EDX,dword ptr [EBX]             ; 00438d66
    MOV ESI,dword ptr [ESP + 0x10]      ; 00438d68
    CMP EDX,0x8                         ; 00438d6c
    JL 0x00438d97                       ; 00438d6f
        ;   XREF to: 00438d97 (CONDITIONAL_JUMP)  ; LAB_00438d97
    PUSH EDI                            ; 00438d71
    XOR EAX,EAX                         ; 00438d72
        ;   Label: LAB_00438d72
    MOV AL,byte ptr [EBX + 0x4]         ; 00438d74
    PUSH EAX                            ; 00438d77
    PUSH ESI                            ; 00438d78
    CALL FUN_00564ce5                   ; 00438d79
        ;   XREF to: 00564ce5 (UNCONDITIONAL_CALL)  ; undefined FUN_00564ce5()
    MOV ECX,dword ptr [EBX + 0x4]       ; 00438d7e
    MOV EDI,dword ptr [EBX]             ; 00438d81
    SHR ECX,0x8                         ; 00438d83
    SUB EDI,0x8                         ; 00438d86
    MOV dword ptr [EBX + 0x4],ECX       ; 00438d89
    ADD ESP,0x8                         ; 00438d8c
    MOV dword ptr [EBX],EDI             ; 00438d8f
    CMP EDI,0x8                         ; 00438d91
    JGE 0x00438d72                      ; 00438d94
        ;   XREF to: 00438d72 (CONDITIONAL_JUMP)  ; LAB_00438d72
    POP EDI                             ; 00438d96
    CMP dword ptr [EBX],0x0             ; 00438d97
        ;   Label: LAB_00438d97
    JG 0x00438d9f                       ; 00438d9a
        ;   XREF to: 00438d9f (CONDITIONAL_JUMP)  ; LAB_00438d9f
    POP ESI                             ; 00438d9c
    POP EBX                             ; 00438d9d
    RET                                 ; 00438d9e
    XOR EAX,EAX                         ; 00438d9f
        ;   Label: LAB_00438d9f
    MOV AL,byte ptr [EBX + 0x4]         ; 00438da1
    PUSH EAX                            ; 00438da4
    PUSH ESI                            ; 00438da5
    CALL FUN_00564ce5                   ; 00438da6
        ;   XREF to: 00564ce5 (UNCONDITIONAL_CALL)  ; undefined FUN_00564ce5()
    MOV dword ptr [EBX + 0x4],0x0       ; 00438dab
    ADD ESP,0x8                         ; 00438db2
    MOV dword ptr [EBX],0x0             ; 00438db5
    POP ESI                             ; 00438dbb
    POP EBX                             ; 00438dbc
    RET                                 ; 00438dbd

