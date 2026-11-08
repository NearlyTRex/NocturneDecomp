; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00502cc0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00603290
;
; Called Functions:
;   FUN_005ad5d0
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00502cc0
        ;   Label: FUN_00502cc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00502cc1
    TEST byte ptr [ESP + 0xc],0x4       ; 00502cc5
    JNZ 0x00502ce6                      ; 00502cca
        ;   XREF to: 00502ce6 (CONDITIONAL_JUMP)  ; LAB_00502ce6
    PUSH 0x1                            ; 00502ccc
    PUSH EBX                            ; 00502cce
    CALL FUN_005ad5d0                   ; 00502ccf
        ;   XREF to: 005ad5d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ad5d0()
    ADD ESP,0x8                         ; 00502cd4
    MOV DL,byte ptr [ESP + 0xc]         ; 00502cd7
    MOV EBX,EAX                         ; 00502cdb
    TEST DL,0x2                         ; 00502cdd
    JNZ 0x00502d01                      ; 00502ce0
        ;   XREF to: 00502d01 (CONDITIONAL_JUMP)  ; LAB_00502d01
    MOV EAX,EBX                         ; 00502ce2
    POP EBX                             ; 00502ce4
    RET                                 ; 00502ce5
    PUSH 0x603290                       ; 00502ce6 | DAT_00603290
        ;   Label: LAB_00502ce6
    PUSH EBX                            ; 00502ceb
    CALL FUN_005c030f                   ; 00502cec
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 00502cf1
    PUSH EAX                            ; 00502cf4
    CALL FUN_005c0336                   ; 00502cf5
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 00502cfa
    MOV EAX,EBX                         ; 00502cfd
    POP EBX                             ; 00502cff
    RET                                 ; 00502d00
    PUSH EAX                            ; 00502d01
        ;   Label: LAB_00502d01
    CALL FUN_005c0344                   ; 00502d02
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 00502d07
    MOV EAX,EBX                         ; 00502d0a
    POP EBX                             ; 00502d0c
    RET                                 ; 00502d0d

