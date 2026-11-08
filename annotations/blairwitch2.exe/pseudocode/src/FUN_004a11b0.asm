; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004a11b0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f6de0
;
; Called Functions:
;   FUN_00589ae0
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a11b0
        ;   Label: FUN_004a11b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a11b1
    TEST byte ptr [ESP + 0xc],0x4       ; 004a11b5
    JNZ 0x004a11d6                      ; 004a11ba
        ;   XREF to: 004a11d6 (CONDITIONAL_JUMP)  ; LAB_004a11d6
    PUSH 0x1                            ; 004a11bc
    PUSH EBX                            ; 004a11be
    CALL FUN_00589ae0                   ; 004a11bf
        ;   XREF to: 00589ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00589ae0()
    ADD ESP,0x8                         ; 004a11c4
    MOV DL,byte ptr [ESP + 0xc]         ; 004a11c7
    MOV EBX,EAX                         ; 004a11cb
    TEST DL,0x2                         ; 004a11cd
    JNZ 0x004a11f1                      ; 004a11d0
        ;   XREF to: 004a11f1 (CONDITIONAL_JUMP)  ; LAB_004a11f1
    MOV EAX,EBX                         ; 004a11d2
    POP EBX                             ; 004a11d4
    RET                                 ; 004a11d5
    PUSH 0x5f6de0                       ; 004a11d6 | DAT_005f6de0
        ;   Label: LAB_004a11d6
    PUSH EBX                            ; 004a11db
    CALL FUN_005b7fa7                   ; 004a11dc
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 004a11e1
    PUSH EAX                            ; 004a11e4
    CALL FUN_005b7fce                   ; 004a11e5
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 004a11ea
    MOV EAX,EBX                         ; 004a11ed
    POP EBX                             ; 004a11ef
    RET                                 ; 004a11f0
    PUSH EAX                            ; 004a11f1
        ;   Label: LAB_004a11f1
    CALL FUN_005b7fdc                   ; 004a11f2
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 004a11f7
    MOV EAX,EBX                         ; 004a11fa
    POP EBX                             ; 004a11fc
    RET                                 ; 004a11fd

