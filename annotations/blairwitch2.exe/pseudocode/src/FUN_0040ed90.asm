; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0040ed90(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f2640
;
; Called Functions:
;   FUN_00408930
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040ed90
        ;   Label: FUN_0040ed90
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040ed91
    TEST byte ptr [ESP + 0xc],0x4       ; 0040ed95
    JNZ 0x0040edb6                      ; 0040ed9a
        ;   XREF to: 0040edb6 (CONDITIONAL_JUMP)  ; LAB_0040edb6
    PUSH 0x1                            ; 0040ed9c
    PUSH EBX                            ; 0040ed9e
    CALL FUN_00408930                   ; 0040ed9f
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 0040eda4
    MOV DL,byte ptr [ESP + 0xc]         ; 0040eda7
    MOV EBX,EAX                         ; 0040edab
    TEST DL,0x2                         ; 0040edad
    JNZ 0x0040edd1                      ; 0040edb0
        ;   XREF to: 0040edd1 (CONDITIONAL_JUMP)  ; LAB_0040edd1
    MOV EAX,EBX                         ; 0040edb2
    POP EBX                             ; 0040edb4
    RET                                 ; 0040edb5
    PUSH 0x5f2640                       ; 0040edb6 | DAT_005f2640
        ;   Label: LAB_0040edb6
    PUSH EBX                            ; 0040edbb
    CALL FUN_005b7fa7                   ; 0040edbc
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 0040edc1
    PUSH EAX                            ; 0040edc4
    CALL FUN_005b7fce                   ; 0040edc5
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 0040edca
    MOV EAX,EBX                         ; 0040edcd
    POP EBX                             ; 0040edcf
    RET                                 ; 0040edd0
    PUSH EAX                            ; 0040edd1
        ;   Label: LAB_0040edd1
    CALL FUN_005b7fdc                   ; 0040edd2
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 0040edd7
    MOV EAX,EBX                         ; 0040edda
    POP EBX                             ; 0040eddc
    RET                                 ; 0040eddd

