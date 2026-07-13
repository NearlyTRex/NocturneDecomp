; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00546770(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005a33e0
;
; Called Functions:
;   FUN_00553ea0
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00546770
        ;   Label: FUN_00546770
    MOV EBX,dword ptr [ESP + 0x8]       ; 00546771
    TEST byte ptr [ESP + 0xc],0x4       ; 00546775
    JNZ 0x00546796                      ; 0054677a
        ;   XREF to: 00546796 (CONDITIONAL_JUMP)  ; LAB_00546796
    PUSH 0x1                            ; 0054677c
    PUSH EBX                            ; 0054677e
    CALL FUN_00553ea0                   ; 0054677f
        ;   XREF to: 00553ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00553ea0()
    ADD ESP,0x8                         ; 00546784
    MOV DL,byte ptr [ESP + 0xc]         ; 00546787
    MOV EBX,EAX                         ; 0054678b
    TEST DL,0x2                         ; 0054678d
    JNZ 0x005467b1                      ; 00546790
        ;   XREF to: 005467b1 (CONDITIONAL_JUMP)  ; LAB_005467b1
    MOV EAX,EBX                         ; 00546792
    POP EBX                             ; 00546794
    RET                                 ; 00546795
    PUSH 0x5a33e0                       ; 00546796 | DAT_005a33e0
        ;   Label: LAB_00546796
    PUSH EBX                            ; 0054679b
    CALL FUN_0056445f                   ; 0054679c
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 005467a1
    PUSH EAX                            ; 005467a4
    CALL FUN_00564486                   ; 005467a5
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 005467aa
    MOV EAX,EBX                         ; 005467ad
    POP EBX                             ; 005467af
    RET                                 ; 005467b0
    PUSH EAX                            ; 005467b1
        ;   Label: LAB_005467b1
    CALL FUN_00564494                   ; 005467b2
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 005467b7
    MOV EAX,EBX                         ; 005467ba
    POP EBX                             ; 005467bc
    RET                                 ; 005467bd

