; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005c5818(int param_1)
;
;
; XREF[1]:
;   FUN_005c5450 at 005c549d
;
; Referenced Globals:
;   undefined4 DAT_00626114
;
; Called Functions:
;   FUN_005c5430
;   FUN_005c543c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c5818
        ;   Label: FUN_005c5818
    PUSH ESI                            ; 005c5819
    MOV ESI,dword ptr [ESP + 0xc]       ; 005c581a
    XOR EBX,EBX                         ; 005c581e
    PUSH ESI                            ; 005c5820
        ;   Label: LAB_005c5820
    CALL FUN_005c5430                   ; 005c5821
        ;   XREF to: 005c5430 (UNCONDITIONAL_CALL)  ; undefined FUN_005c5430()
    MOV EDX,EAX                         ; 005c5826
    ADD ESP,0x4                         ; 005c5828
    INC DL                              ; 005c582b
    AND EDX,0xff                        ; 005c582d
    TEST byte ptr [EDX + 0x626114],0x2  ; 005c5833 | DAT_00626114
    JZ 0x005c583f                       ; 005c583a
        ;   XREF to: 005c583f (CONDITIONAL_JUMP)  ; LAB_005c583f
    INC EBX                             ; 005c583c
    JMP 0x005c5820                      ; 005c583d
        ;   XREF to: 005c5820 (UNCONDITIONAL_JUMP)  ; LAB_005c5820
    TEST byte ptr [ESI + 0x10],0x2      ; 005c583f
        ;   Label: LAB_005c583f
    JNZ 0x005c584f                      ; 005c5843
        ;   XREF to: 005c584f (CONDITIONAL_JUMP)  ; LAB_005c584f
    PUSH ESI                            ; 005c5845
    PUSH EAX                            ; 005c5846
    CALL FUN_005c543c                   ; 005c5847
        ;   XREF to: 005c543c (UNCONDITIONAL_CALL)  ; undefined FUN_005c543c()
    ADD ESP,0x8                         ; 005c584c
    MOV EAX,EBX                         ; 005c584f
        ;   Label: LAB_005c584f
    POP ESI                             ; 005c5851
    POP EBX                             ; 005c5852
    RET                                 ; 005c5853

