; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00436ec0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fd8b0
;
; Called Functions:
;   FUN_00408730
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00436ec0
        ;   Label: FUN_00436ec0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00436ec1
    TEST byte ptr [ESP + 0xc],0x4       ; 00436ec5
    JNZ 0x00436ee6                      ; 00436eca
        ;   XREF to: 00436ee6 (CONDITIONAL_JUMP)  ; LAB_00436ee6
    PUSH 0x1                            ; 00436ecc
    PUSH EBX                            ; 00436ece
    CALL FUN_00408730                   ; 00436ecf
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 00436ed4
    MOV DL,byte ptr [ESP + 0xc]         ; 00436ed7
    MOV EBX,EAX                         ; 00436edb
    TEST DL,0x2                         ; 00436edd
    JNZ 0x00436f01                      ; 00436ee0
        ;   XREF to: 00436f01 (CONDITIONAL_JUMP)  ; LAB_00436f01
    MOV EAX,EBX                         ; 00436ee2
    POP EBX                             ; 00436ee4
    RET                                 ; 00436ee5
    PUSH 0x5fd8b0                       ; 00436ee6 | DAT_005fd8b0
        ;   Label: LAB_00436ee6
    PUSH EBX                            ; 00436eeb
    CALL FUN_005c030f                   ; 00436eec
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 00436ef1
    PUSH EAX                            ; 00436ef4
    CALL FUN_005c0336                   ; 00436ef5
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 00436efa
    MOV EAX,EBX                         ; 00436efd
    POP EBX                             ; 00436eff
    RET                                 ; 00436f00
    PUSH EAX                            ; 00436f01
        ;   Label: LAB_00436f01
    CALL FUN_005c0344                   ; 00436f02
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 00436f07
    MOV EAX,EBX                         ; 00436f0a
    POP EBX                             ; 00436f0c
    RET                                 ; 00436f0d

