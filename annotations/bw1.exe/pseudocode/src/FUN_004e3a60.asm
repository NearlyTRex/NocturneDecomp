; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004e3a60(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00601550
;
; Called Functions:
;   FUN_00408730
;   FUN_00518810
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e3a60
        ;   Label: FUN_004e3a60
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e3a61
    TEST byte ptr [ESP + 0xc],0x4       ; 004e3a65
    JNZ 0x004e3a9d                      ; 004e3a6a
        ;   XREF to: 004e3a9d (CONDITIONAL_JUMP)  ; LAB_004e3a9d
    PUSH 0x0                            ; 004e3a6c
    ADD EBX,0x1ec                       ; 004e3a6e
    PUSH EBX                            ; 004e3a74
    CALL FUN_00518810                   ; 004e3a75
        ;   XREF to: 00518810 (UNCONDITIONAL_CALL)  ; undefined FUN_00518810()
    ADD ESP,0x8                         ; 004e3a7a
    PUSH 0x1                            ; 004e3a7d
    LEA EBX,[EAX + 0xfffffe14]          ; 004e3a7f
    PUSH EBX                            ; 004e3a85
    CALL FUN_00408730                   ; 004e3a86
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 004e3a8b
    MOV DL,byte ptr [ESP + 0xc]         ; 004e3a8e
    MOV EBX,EAX                         ; 004e3a92
    TEST DL,0x2                         ; 004e3a94
    JNZ 0x004e3ab8                      ; 004e3a97
        ;   XREF to: 004e3ab8 (CONDITIONAL_JUMP)  ; LAB_004e3ab8
    MOV EAX,EBX                         ; 004e3a99
    POP EBX                             ; 004e3a9b
    RET                                 ; 004e3a9c
    PUSH 0x601550                       ; 004e3a9d | DAT_00601550
        ;   Label: LAB_004e3a9d
    PUSH EBX                            ; 004e3aa2
    CALL FUN_005c030f                   ; 004e3aa3
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 004e3aa8
    PUSH EAX                            ; 004e3aab
    CALL FUN_005c0336                   ; 004e3aac
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 004e3ab1
    MOV EAX,EBX                         ; 004e3ab4
    POP EBX                             ; 004e3ab6
    RET                                 ; 004e3ab7
    PUSH EAX                            ; 004e3ab8
        ;   Label: LAB_004e3ab8
    CALL FUN_005c0344                   ; 004e3ab9
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 004e3abe
    MOV EAX,EBX                         ; 004e3ac1
    POP EBX                             ; 004e3ac3
    RET                                 ; 004e3ac4

