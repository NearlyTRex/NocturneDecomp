; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005bd548(int param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005bd180 at 005bd1cd
;
; Referenced Globals:
;   undefined4 DAT_0061ed94
;
; Called Functions:
;   crt_unknown.c_FUN_005bd160
;   crt_unknown.c_FUN_005bd16c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bd548
        ;   Label: crt_unknown.c_FUN_005bd548
    PUSH ESI                            ; 005bd549
    MOV ESI,dword ptr [ESP + 0xc]       ; 005bd54a
    XOR EBX,EBX                         ; 005bd54e
    PUSH ESI                            ; 005bd550
        ;   Label: LAB_005bd550
    CALL crt_unknown.c_FUN_005bd160     ; 005bd551
        ;   XREF to: 005bd160 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bd160()
    MOV EDX,EAX                         ; 005bd556
    ADD ESP,0x4                         ; 005bd558
    INC DL                              ; 005bd55b
    AND EDX,0xff                        ; 005bd55d
    TEST byte ptr [EDX + 0x61ed94],0x2  ; 005bd563 | DAT_0061ed94
    JZ 0x005bd56f                       ; 005bd56a
        ;   XREF to: 005bd56f (CONDITIONAL_JUMP)  ; LAB_005bd56f
    INC EBX                             ; 005bd56c
    JMP 0x005bd550                      ; 005bd56d
        ;   XREF to: 005bd550 (UNCONDITIONAL_JUMP)  ; LAB_005bd550
    TEST byte ptr [ESI + 0x10],0x2      ; 005bd56f
        ;   Label: LAB_005bd56f
    JNZ 0x005bd57f                      ; 005bd573
        ;   XREF to: 005bd57f (CONDITIONAL_JUMP)  ; LAB_005bd57f
    PUSH ESI                            ; 005bd575
    PUSH EAX                            ; 005bd576
    CALL crt_unknown.c_FUN_005bd16c     ; 005bd577
        ;   XREF to: 005bd16c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bd16c()
    ADD ESP,0x8                         ; 005bd57c
    MOV EAX,EBX                         ; 005bd57f
        ;   Label: LAB_005bd57f
    POP ESI                             ; 005bd581
    POP EBX                             ; 005bd582
    RET                                 ; 005bd583

