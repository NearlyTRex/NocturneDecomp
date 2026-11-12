; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 * crt_unknown_c_FUN_005ad410(uint *param_1,undefined1 *param_2,int param_3)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005ad370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ad410
        ;   Label: crt_unknown.c_FUN_005ad410
    PUSH ESI                            ; 005ad411
    PUSH EDI                            ; 005ad412
    PUSH ES                             ; 005ad413
    SUB ESP,0x8                         ; 005ad414
    MOV EBX,dword ptr [ESP + 0x20]      ; 005ad417
    MOV ECX,dword ptr [ESP + 0x24]      ; 005ad41b
    MOV EDI,ESP                         ; 005ad41f
    MOV AX,DS                           ; 005ad421
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005ad423
    MOV ES,AX                           ; 005ad427
    MOV EDX,EBX                         ; 005ad429
    MOVSD ES:EDI,ESI                    ; 005ad42b
    MOVSD ES:EDI,ESI                    ; 005ad42c
    CMP ECX,0xa                         ; 005ad42d
    JNZ 0x005ad465                      ; 005ad430
        ;   XREF to: 005ad465 (CONDITIONAL_JUMP)  ; LAB_005ad465
    TEST byte ptr [ESP + 0x7],0x80      ; 005ad432
    JZ 0x005ad465                       ; 005ad437
        ;   XREF to: 005ad465 (CONDITIONAL_JUMP)  ; LAB_005ad465
    MOV byte ptr [EBX],0x2d             ; 005ad439
    MOV EDX,dword ptr [ESP]             ; 005ad43c
    MOV ESI,dword ptr [ESP + 0x4]       ; 005ad43f
    NOT EDX                             ; 005ad443
    NOT ESI                             ; 005ad445
    MOV dword ptr [ESP],EDX             ; 005ad447
    MOV dword ptr [ESP + 0x4],ESI       ; 005ad44a
    MOV EDI,dword ptr [ESP]             ; 005ad44e
    LEA EDX,[EBX + 0x1]                 ; 005ad451
    INC EDI                             ; 005ad454
    MOV dword ptr [ESP],EDI             ; 005ad455
    JNZ 0x005ad45f                      ; 005ad458
        ;   XREF to: 005ad45f (CONDITIONAL_JUMP)  ; LAB_005ad45f
    LEA EAX,[ESI + 0x1]                 ; 005ad45a
    JMP 0x005ad461                      ; 005ad45d
        ;   XREF to: 005ad461 (UNCONDITIONAL_JUMP)  ; LAB_005ad461
    MOV EAX,ESI                         ; 005ad45f
        ;   Label: LAB_005ad45f
    MOV dword ptr [ESP + 0x4],EAX       ; 005ad461
        ;   Label: LAB_005ad461
    PUSH ECX                            ; 005ad465
        ;   Label: LAB_005ad465
    PUSH EDX                            ; 005ad466
    LEA EAX,[ESP + 0x8]                 ; 005ad467
    PUSH EAX                            ; 005ad46b
    CALL crt_unknown.c_FUN_005ad370     ; 005ad46c
        ;   XREF to: 005ad370 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ad370()
    ADD ESP,0xc                         ; 005ad471
    MOV EAX,EBX                         ; 005ad474
    ADD ESP,0x8                         ; 005ad476
    POP ES                              ; 005ad479
    POP EDI                             ; 005ad47a
    POP ESI                             ; 005ad47b
    POP EBX                             ; 005ad47c
    RET                                 ; 005ad47d

