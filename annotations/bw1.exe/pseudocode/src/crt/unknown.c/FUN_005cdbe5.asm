; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * crt_unknown_c_FUN_005cdbe5(int *param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005cc4d2 at 005cc509
;
; Called Functions:
;   crt_unknown.c_FUN_005ce203
;   crt_unknown.c_FUN_005ce269
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cdbe5
        ;   Label: crt_unknown.c_FUN_005cdbe5
    MOV EBX,dword ptr [ESP + 0x8]       ; 005cdbe6
    PUSH EBX                            ; 005cdbea
        ;   Label: LAB_005cdbea
    CALL crt_unknown.c_FUN_005ce203     ; 005cdbeb
        ;   XREF to: 005ce203 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ce203()
    MOV EDX,EAX                         ; 005cdbf0
    MOV EAX,dword ptr [EBX]             ; 005cdbf2
    MOV EAX,dword ptr [EAX + 0x4]       ; 005cdbf4
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x10] ; 005cdbf7
    ADD ESP,0x4                         ; 005cdbfb
    AND EAX,0x3                         ; 005cdbfe
    JNZ 0x005cdc15                      ; 005cdc01
        ;   XREF to: 005cdc15 (CONDITIONAL_JUMP)  ; LAB_005cdc15
    MOV AL,DL                           ; 005cdc03
    INC AL                              ; 005cdc05
    AND EAX,0xff                        ; 005cdc07
    TEST byte ptr [EAX + 0x626114],0x2  ; 005cdc0c
    JNZ 0x005cdc19                      ; 005cdc13
        ;   XREF to: 005cdc19 (CONDITIONAL_JUMP)  ; LAB_005cdc19
    MOV EAX,EBX                         ; 005cdc15
        ;   Label: LAB_005cdc15
    POP EBX                             ; 005cdc17
    RET                                 ; 005cdc18
    PUSH EBX                            ; 005cdc19
        ;   Label: LAB_005cdc19
    CALL crt_unknown.c_FUN_005ce269     ; 005cdc1a
        ;   XREF to: 005ce269 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ce269()
    ADD ESP,0x4                         ; 005cdc1f
    JMP 0x005cdbea                      ; 005cdc22
        ;   XREF to: 005cdbea (UNCONDITIONAL_JUMP)  ; LAB_005cdbea

