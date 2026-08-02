; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056a320(undefined4 param_1,int param_2)
;
;
; XREF[1]:
;   crt_string.c_parseFloatString_FUN_0056f690 at 0056f7fe
;
; Called Functions:
;   crt_unknown.c_FUN_0056a28c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0056a320
        ;   Label: crt_unknown.c_FUN_0056a320
    MOV EBP,ESP                         ; 0056a321
    PUSH EBX                            ; 0056a323
    PUSH ESI                            ; 0056a324
    MOV EBX,dword ptr [EBP + 0xc]       ; 0056a325
    CMP EBX,0x1000                      ; 0056a328
    JLE 0x0056a341                      ; 0056a32e
        ;   XREF to: 0056a341 (CONDITIONAL_JUMP)  ; LAB_0056a341
    PUSH 0x1000                         ; 0056a330
    MOV ECX,dword ptr [EBP + 0x8]       ; 0056a335
    PUSH ECX                            ; 0056a338
    SUB EBX,0x1000                      ; 0056a339
    JMP 0x0056a358                      ; 0056a33f
        ;   XREF to: 0056a358 (UNCONDITIONAL_JUMP)  ; LAB_0056a358
    CMP EBX,0xfffff000                  ; 0056a341
        ;   Label: LAB_0056a341
    JGE 0x0056a360                      ; 0056a347
        ;   XREF to: 0056a360 (CONDITIONAL_JUMP)  ; LAB_0056a360
    PUSH 0xfffff000                     ; 0056a349
    MOV EDX,dword ptr [EBP + 0x8]       ; 0056a34e
    PUSH EDX                            ; 0056a351
    ADD EBX,0x1000                      ; 0056a352
    CALL crt_unknown.c_FUN_0056a28c     ; 0056a358
        ;   XREF to: 0056a28c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056a28c()
        ;   Label: LAB_0056a358
    ADD ESP,0x8                         ; 0056a35d
    PUSH EBX                            ; 0056a360
        ;   Label: LAB_0056a360
    MOV ESI,dword ptr [EBP + 0x8]       ; 0056a361
    PUSH ESI                            ; 0056a364
    CALL crt_unknown.c_FUN_0056a28c     ; 0056a365
        ;   XREF to: 0056a28c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056a28c()
    ADD ESP,0x8                         ; 0056a36a
    POP ESI                             ; 0056a36d
    POP EBX                             ; 0056a36e
    POP EBP                             ; 0056a36f
    RET                                 ; 0056a370

