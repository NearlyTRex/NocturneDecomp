; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * crt_unknown_c_FUN_005c58e5(int *param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c41d2 at 005c4209
;
; Called Functions:
;   crt_unknown.c_FUN_005c5f03
;   crt_unknown.c_FUN_005c5f69
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c58e5
        ;   Label: crt_unknown.c_FUN_005c58e5
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c58e6
    PUSH EBX                            ; 005c58ea
        ;   Label: LAB_005c58ea
    CALL crt_unknown.c_FUN_005c5f03     ; 005c58eb
        ;   XREF to: 005c5f03 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c5f03()
    MOV EDX,EAX                         ; 005c58f0
    MOV EAX,dword ptr [EBX]             ; 005c58f2
    MOV EAX,dword ptr [EAX + 0x4]       ; 005c58f4
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x10] ; 005c58f7
    ADD ESP,0x4                         ; 005c58fb
    AND EAX,0x3                         ; 005c58fe
    JNZ 0x005c5915                      ; 005c5901
        ;   XREF to: 005c5915 (CONDITIONAL_JUMP)  ; LAB_005c5915
    MOV AL,DL                           ; 005c5903
    INC AL                              ; 005c5905
    AND EAX,0xff                        ; 005c5907
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 005c590c
    JNZ 0x005c5919                      ; 005c5913
        ;   XREF to: 005c5919 (CONDITIONAL_JUMP)  ; LAB_005c5919
    MOV EAX,EBX                         ; 005c5915
        ;   Label: LAB_005c5915
    POP EBX                             ; 005c5917
    RET                                 ; 005c5918
    PUSH EBX                            ; 005c5919
        ;   Label: LAB_005c5919
    CALL crt_unknown.c_FUN_005c5f69     ; 005c591a
        ;   XREF to: 005c5f69 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c5f69()
    ADD ESP,0x4                         ; 005c591f
    JMP 0x005c58ea                      ; 005c5922
        ;   XREF to: 005c58ea (UNCONDITIONAL_JUMP)  ; LAB_005c58ea

