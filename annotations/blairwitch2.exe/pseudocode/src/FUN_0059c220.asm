; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0059c220(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fe720
;
; Called Functions:
;   FUN_00408930
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059c220
        ;   Label: FUN_0059c220
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059c221
    TEST byte ptr [ESP + 0xc],0x4       ; 0059c225
    JNZ 0x0059c246                      ; 0059c22a
        ;   XREF to: 0059c246 (CONDITIONAL_JUMP)  ; LAB_0059c246
    PUSH 0x1                            ; 0059c22c
    PUSH EBX                            ; 0059c22e
    CALL FUN_00408930                   ; 0059c22f
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 0059c234
    MOV DL,byte ptr [ESP + 0xc]         ; 0059c237
    MOV EBX,EAX                         ; 0059c23b
    TEST DL,0x2                         ; 0059c23d
    JNZ 0x0059c261                      ; 0059c240
        ;   XREF to: 0059c261 (CONDITIONAL_JUMP)  ; LAB_0059c261
    MOV EAX,EBX                         ; 0059c242
    POP EBX                             ; 0059c244
    RET                                 ; 0059c245
    PUSH 0x5fe720                       ; 0059c246 | DAT_005fe720
        ;   Label: LAB_0059c246
    PUSH EBX                            ; 0059c24b
    CALL FUN_005b7fa7                   ; 0059c24c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 0059c251
    PUSH EAX                            ; 0059c254
    CALL FUN_005b7fce                   ; 0059c255
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 0059c25a
    MOV EAX,EBX                         ; 0059c25d
    POP EBX                             ; 0059c25f
    RET                                 ; 0059c260
    PUSH EAX                            ; 0059c261
        ;   Label: LAB_0059c261
    CALL FUN_005b7fdc                   ; 0059c262
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 0059c267
    MOV EAX,EBX                         ; 0059c26a
    POP EBX                             ; 0059c26c
    RET                                 ; 0059c26d

