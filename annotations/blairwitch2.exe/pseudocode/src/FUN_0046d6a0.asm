; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0046d6a0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f5930
;
; Called Functions:
;   FUN_00408930
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046d6a0
        ;   Label: FUN_0046d6a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0046d6a1
    TEST byte ptr [ESP + 0xc],0x4       ; 0046d6a5
    JNZ 0x0046d6c6                      ; 0046d6aa
        ;   XREF to: 0046d6c6 (CONDITIONAL_JUMP)  ; LAB_0046d6c6
    PUSH 0x1                            ; 0046d6ac
    PUSH EBX                            ; 0046d6ae
    CALL FUN_00408930                   ; 0046d6af
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 0046d6b4
    MOV DL,byte ptr [ESP + 0xc]         ; 0046d6b7
    MOV EBX,EAX                         ; 0046d6bb
    TEST DL,0x2                         ; 0046d6bd
    JNZ 0x0046d6e1                      ; 0046d6c0
        ;   XREF to: 0046d6e1 (CONDITIONAL_JUMP)  ; LAB_0046d6e1
    MOV EAX,EBX                         ; 0046d6c2
    POP EBX                             ; 0046d6c4
    RET                                 ; 0046d6c5
    PUSH 0x5f5930                       ; 0046d6c6 | DAT_005f5930
        ;   Label: LAB_0046d6c6
    PUSH EBX                            ; 0046d6cb
    CALL FUN_005b7fa7                   ; 0046d6cc
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 0046d6d1
    PUSH EAX                            ; 0046d6d4
    CALL FUN_005b7fce                   ; 0046d6d5
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 0046d6da
    MOV EAX,EBX                         ; 0046d6dd
    POP EBX                             ; 0046d6df
    RET                                 ; 0046d6e0
    PUSH EAX                            ; 0046d6e1
        ;   Label: LAB_0046d6e1
    CALL FUN_005b7fdc                   ; 0046d6e2
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 0046d6e7
    MOV EAX,EBX                         ; 0046d6ea
    POP EBX                             ; 0046d6ec
    RET                                 ; 0046d6ed

