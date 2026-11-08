; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00598fc0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00606dc0
;
; Called Functions:
;   FUN_005ad5d0
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00598fc0
        ;   Label: FUN_00598fc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00598fc1
    TEST byte ptr [ESP + 0xc],0x4       ; 00598fc5
    JNZ 0x00598fe6                      ; 00598fca
        ;   XREF to: 00598fe6 (CONDITIONAL_JUMP)  ; LAB_00598fe6
    PUSH 0x1                            ; 00598fcc
    PUSH EBX                            ; 00598fce
    CALL FUN_005ad5d0                   ; 00598fcf
        ;   XREF to: 005ad5d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ad5d0()
    ADD ESP,0x8                         ; 00598fd4
    MOV DL,byte ptr [ESP + 0xc]         ; 00598fd7
    MOV EBX,EAX                         ; 00598fdb
    TEST DL,0x2                         ; 00598fdd
    JNZ 0x00599001                      ; 00598fe0
        ;   XREF to: 00599001 (CONDITIONAL_JUMP)  ; LAB_00599001
    MOV EAX,EBX                         ; 00598fe2
    POP EBX                             ; 00598fe4
    RET                                 ; 00598fe5
    PUSH 0x606dc0                       ; 00598fe6 | DAT_00606dc0
        ;   Label: LAB_00598fe6
    PUSH EBX                            ; 00598feb
    CALL FUN_005c030f                   ; 00598fec
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 00598ff1
    PUSH EAX                            ; 00598ff4
    CALL FUN_005c0336                   ; 00598ff5
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 00598ffa
    MOV EAX,EBX                         ; 00598ffd
    POP EBX                             ; 00598fff
    RET                                 ; 00599000
    PUSH EAX                            ; 00599001
        ;   Label: LAB_00599001
    CALL FUN_005c0344                   ; 00599002
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 00599007
    MOV EAX,EBX                         ; 0059900a
    POP EBX                             ; 0059900c
    RET                                 ; 0059900d

