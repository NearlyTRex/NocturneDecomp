; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004ddc80(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00601280
;
; Called Functions:
;   FUN_00408730
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ddc80
        ;   Label: FUN_004ddc80
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ddc81
    TEST byte ptr [ESP + 0xc],0x4       ; 004ddc85
    JNZ 0x004ddca6                      ; 004ddc8a
        ;   XREF to: 004ddca6 (CONDITIONAL_JUMP)  ; LAB_004ddca6
    PUSH 0x1                            ; 004ddc8c
    PUSH EBX                            ; 004ddc8e
    CALL FUN_00408730                   ; 004ddc8f
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 004ddc94
    MOV DL,byte ptr [ESP + 0xc]         ; 004ddc97
    MOV EBX,EAX                         ; 004ddc9b
    TEST DL,0x2                         ; 004ddc9d
    JNZ 0x004ddcc1                      ; 004ddca0
        ;   XREF to: 004ddcc1 (CONDITIONAL_JUMP)  ; LAB_004ddcc1
    MOV EAX,EBX                         ; 004ddca2
    POP EBX                             ; 004ddca4
    RET                                 ; 004ddca5
    PUSH 0x601280                       ; 004ddca6 | DAT_00601280
        ;   Label: LAB_004ddca6
    PUSH EBX                            ; 004ddcab
    CALL FUN_005c030f                   ; 004ddcac
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 004ddcb1
    PUSH EAX                            ; 004ddcb4
    CALL FUN_005c0336                   ; 004ddcb5
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 004ddcba
    MOV EAX,EBX                         ; 004ddcbd
    POP EBX                             ; 004ddcbf
    RET                                 ; 004ddcc0
    PUSH EAX                            ; 004ddcc1
        ;   Label: LAB_004ddcc1
    CALL FUN_005c0344                   ; 004ddcc2
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 004ddcc7
    MOV EAX,EBX                         ; 004ddcca
    POP EBX                             ; 004ddccc
    RET                                 ; 004ddccd

