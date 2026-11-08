; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00587b90(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fddf0
;
; Called Functions:
;   FUN_00408930
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00587b90
        ;   Label: FUN_00587b90
    MOV EBX,dword ptr [ESP + 0x8]       ; 00587b91
    TEST byte ptr [ESP + 0xc],0x4       ; 00587b95
    JNZ 0x00587bb6                      ; 00587b9a
        ;   XREF to: 00587bb6 (CONDITIONAL_JUMP)  ; LAB_00587bb6
    PUSH 0x1                            ; 00587b9c
    PUSH EBX                            ; 00587b9e
    CALL FUN_00408930                   ; 00587b9f
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 00587ba4
    MOV DL,byte ptr [ESP + 0xc]         ; 00587ba7
    MOV EBX,EAX                         ; 00587bab
    TEST DL,0x2                         ; 00587bad
    JNZ 0x00587bd1                      ; 00587bb0
        ;   XREF to: 00587bd1 (CONDITIONAL_JUMP)  ; LAB_00587bd1
    MOV EAX,EBX                         ; 00587bb2
    POP EBX                             ; 00587bb4
    RET                                 ; 00587bb5
    PUSH 0x5fddf0                       ; 00587bb6 | DAT_005fddf0
        ;   Label: LAB_00587bb6
    PUSH EBX                            ; 00587bbb
    CALL FUN_005b7fa7                   ; 00587bbc
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 00587bc1
    PUSH EAX                            ; 00587bc4
    CALL FUN_005b7fce                   ; 00587bc5
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 00587bca
    MOV EAX,EBX                         ; 00587bcd
    POP EBX                             ; 00587bcf
    RET                                 ; 00587bd0
    PUSH EAX                            ; 00587bd1
        ;   Label: LAB_00587bd1
    CALL FUN_005b7fdc                   ; 00587bd2
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 00587bd7
    MOV EAX,EBX                         ; 00587bda
    POP EBX                             ; 00587bdc
    RET                                 ; 00587bdd

