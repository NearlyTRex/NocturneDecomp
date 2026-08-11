; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint crt_unknown_c_FUN_0060d576(int *param_1)
;
;
; XREF[1]:
;   crt_string.c_mbstrncpy_core_FUN_0060b6d7 at 0060b70c
;
; Called Functions:
;   crt_stdio.c_reportStreamError_FUN_00606020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060d576
        ;   Label: crt_unknown.c_FUN_0060d576
    PUSH ESI                            ; 0060d577
    MOV EBX,dword ptr [ESP + 0xc]       ; 0060d578
    PUSH 0x1                            ; 0060d57c
    PUSH EBX                            ; 0060d57e
    MOV ESI,0xffffffff                  ; 0060d57f
    CALL 0x00608cd1                     ; 0060d584
        ;   XREF to: 00608cd1 (UNCONDITIONAL_CALL)  ; LAB_00608ccf+2
    ADD ESP,0x8                         ; 0060d589
    TEST EAX,EAX                        ; 0060d58c
    JZ 0x0060d5f7                       ; 0060d58e
        ;   XREF to: 0060d5f7 (CONDITIONAL_JUMP)  ; LAB_0060d5f7
    MOV EAX,dword ptr [EBX]             ; 0060d590
    MOV EAX,dword ptr [EAX + 0x4]       ; 0060d592
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4] ; 0060d595
    MOV EDX,dword ptr [EAX + 0x14]      ; 0060d599
    MOV ECX,dword ptr [EAX + 0x10]      ; 0060d59c
    MOV ESI,EAX                         ; 0060d59f
    CMP EDX,ECX                         ; 0060d5a1
    JNC 0x0060d5c8                      ; 0060d5a3
        ;   XREF to: 0060d5c8 (CONDITIONAL_JUMP)  ; LAB_0060d5c8
    MOV EAX,dword ptr [ESI + 0x14]      ; 0060d5a5
        ;   Label: LAB_0060d5a5
    LEA EDX,[EAX + 0x1]                 ; 0060d5a8
    MOV dword ptr [ESI + 0x14],EDX      ; 0060d5ab
    MOV AL,byte ptr [EAX]               ; 0060d5ae
    AND EAX,0xff                        ; 0060d5b0
    MOV ESI,EAX                         ; 0060d5b5
        ;   Label: LAB_0060d5b5
    CMP EAX,-0x1                        ; 0060d5b7
    JZ 0x0060d5d9                       ; 0060d5ba
        ;   XREF to: 0060d5d9 (CONDITIONAL_JUMP)  ; LAB_0060d5d9
    MOV dword ptr [EBX + 0x4],0x1       ; 0060d5bc
    MOV EAX,ESI                         ; 0060d5c3
    POP ESI                             ; 0060d5c5
    POP EBX                             ; 0060d5c6
    RET                                 ; 0060d5c7
    PUSH EAX                            ; 0060d5c8
        ;   Label: LAB_0060d5c8
    MOV EDX,dword ptr [EAX + 0x28]      ; 0060d5c9
    CALL dword ptr [EDX + 0x10]         ; 0060d5cc
    ADD ESP,0x4                         ; 0060d5cf
    CMP EAX,-0x1                        ; 0060d5d2
    JNZ 0x0060d5a5                      ; 0060d5d5
        ;   XREF to: 0060d5a5 (CONDITIONAL_JUMP)  ; LAB_0060d5a5
    JMP 0x0060d5b5                      ; 0060d5d7
        ;   XREF to: 0060d5b5 (UNCONDITIONAL_JUMP)  ; LAB_0060d5b5
    MOV EAX,dword ptr [EBX]             ; 0060d5d9
        ;   Label: LAB_0060d5d9
    MOV EAX,dword ptr [EAX + 0x4]       ; 0060d5db
    PUSH 0x4                            ; 0060d5de
    ADD EAX,EBX                         ; 0060d5e0
    PUSH EAX                            ; 0060d5e2
    CALL crt_stdio.c_reportStreamError_FUN_00606020 ; 0060d5e3
        ;   XREF to: 00606020 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_reportStreamError_FUN_00606020(FileEmbeddedData * embedded_data, uint error_flags)
    ADD ESP,0x8                         ; 0060d5e8
    MOV dword ptr [EBX + 0x4],0x0       ; 0060d5eb
    MOV EAX,ESI                         ; 0060d5f2
    POP ESI                             ; 0060d5f4
    POP EBX                             ; 0060d5f5
    RET                                 ; 0060d5f6
    MOV dword ptr [EBX + 0x4],EAX       ; 0060d5f7
        ;   Label: LAB_0060d5f7
    MOV EAX,ESI                         ; 0060d5fa
    POP ESI                             ; 0060d5fc
    POP EBX                             ; 0060d5fd
    RET                                 ; 0060d5fe

