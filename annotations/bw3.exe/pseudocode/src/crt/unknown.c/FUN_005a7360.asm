; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005a7360(undefined4 param_1,int param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005acf30 at 005ad09e
;
; Called Functions:
;   crt_unknown.c_FUN_005a72cc
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005a7360
        ;   Label: crt_unknown.c_FUN_005a7360
    MOV EBP,ESP                         ; 005a7361
    PUSH EBX                            ; 005a7363
    PUSH ESI                            ; 005a7364
    MOV EBX,dword ptr [EBP + 0xc]       ; 005a7365
    CMP EBX,0x1000                      ; 005a7368
    JLE 0x005a7381                      ; 005a736e
        ;   XREF to: 005a7381 (CONDITIONAL_JUMP)  ; LAB_005a7381
    PUSH 0x1000                         ; 005a7370
    MOV ECX,dword ptr [EBP + 0x8]       ; 005a7375
    PUSH ECX                            ; 005a7378
    SUB EBX,0x1000                      ; 005a7379
    JMP 0x005a7398                      ; 005a737f
        ;   XREF to: 005a7398 (UNCONDITIONAL_JUMP)  ; LAB_005a7398
    CMP EBX,0xfffff000                  ; 005a7381
        ;   Label: LAB_005a7381
    JGE 0x005a73a0                      ; 005a7387
        ;   XREF to: 005a73a0 (CONDITIONAL_JUMP)  ; LAB_005a73a0
    PUSH 0xfffff000                     ; 005a7389
    MOV EDX,dword ptr [EBP + 0x8]       ; 005a738e
    PUSH EDX                            ; 005a7391
    ADD EBX,0x1000                      ; 005a7392
    CALL crt_unknown.c_FUN_005a72cc     ; 005a7398
        ;   XREF to: 005a72cc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a72cc()
        ;   Label: LAB_005a7398
    ADD ESP,0x8                         ; 005a739d
    PUSH EBX                            ; 005a73a0
        ;   Label: LAB_005a73a0
    MOV ESI,dword ptr [EBP + 0x8]       ; 005a73a1
    PUSH ESI                            ; 005a73a4
    CALL crt_unknown.c_FUN_005a72cc     ; 005a73a5
        ;   XREF to: 005a72cc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a72cc()
    ADD ESP,0x8                         ; 005a73aa
    POP ESI                             ; 005a73ad
    POP EBX                             ; 005a73ae
    POP EBP                             ; 005a73af
    RET                                 ; 005a73b0

