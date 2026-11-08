; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005c30e0(byte *param_1)
;
;
; XREF[2]:
;   FUN_005960d0 at 00596224
;   FUN_005b4cd0 at 005b4db0
;
; Referenced Globals:
;   undefined4 DAT_00626114
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c30e0
        ;   Label: FUN_005c30e0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005c30e1
    MOV DL,byte ptr [EAX]               ; 005c30e5
        ;   Label: LAB_005c30e5
    INC DL                              ; 005c30e7
    AND EDX,0xff                        ; 005c30e9
    TEST byte ptr [EDX + 0x626114],0x2  ; 005c30ef | DAT_00626114
    JZ 0x005c30fb                       ; 005c30f6
        ;   XREF to: 005c30fb (CONDITIONAL_JUMP)  ; LAB_005c30fb
    INC EAX                             ; 005c30f8
    JMP 0x005c30e5                      ; 005c30f9
        ;   XREF to: 005c30e5 (UNCONDITIONAL_JUMP)  ; LAB_005c30e5
    MOV CL,byte ptr [EAX]               ; 005c30fb
        ;   Label: LAB_005c30fb
    CMP CL,0x2b                         ; 005c30fd
    JZ 0x005c3107                       ; 005c3100
        ;   XREF to: 005c3107 (CONDITIONAL_JUMP)  ; LAB_005c3107
    CMP CL,0x2d                         ; 005c3102
    JNZ 0x005c3108                      ; 005c3105
        ;   XREF to: 005c3108 (CONDITIONAL_JUMP)  ; LAB_005c3108
    INC EAX                             ; 005c3107
        ;   Label: LAB_005c3107
    XOR EDX,EDX                         ; 005c3108
        ;   Label: LAB_005c3108
    MOV BL,byte ptr [EAX]               ; 005c310a
        ;   Label: LAB_005c310a
    INC BL                              ; 005c310c
    AND EBX,0xff                        ; 005c310e
    TEST byte ptr [EBX + 0x626114],0x20 ; 005c3114 | DAT_00626114
    JZ 0x005c312c                       ; 005c311b
        ;   XREF to: 005c312c (CONDITIONAL_JUMP)  ; LAB_005c312c
    IMUL EDX,EDX,0xa                    ; 005c311d
    XOR EBX,EBX                         ; 005c3120
    MOV BL,byte ptr [EAX]               ; 005c3122
    ADD EDX,EBX                         ; 005c3124
    INC EAX                             ; 005c3126
    SUB EDX,0x30                        ; 005c3127
    JMP 0x005c310a                      ; 005c312a
        ;   XREF to: 005c310a (UNCONDITIONAL_JUMP)  ; LAB_005c310a
    CMP CL,0x2d                         ; 005c312c
        ;   Label: LAB_005c312c
    JNZ 0x005c3133                      ; 005c312f
        ;   XREF to: 005c3133 (CONDITIONAL_JUMP)  ; LAB_005c3133
    NEG EDX                             ; 005c3131
    MOV EAX,EDX                         ; 005c3133
        ;   Label: LAB_005c3133
    POP EBX                             ; 005c3135
    RET                                 ; 005c3136

