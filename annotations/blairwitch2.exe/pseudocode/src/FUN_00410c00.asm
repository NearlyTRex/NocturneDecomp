; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00410c00(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f2c40
;
; Called Functions:
;   FUN_004ce3d0
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410c00
        ;   Label: FUN_00410c00
    MOV EBX,dword ptr [ESP + 0x8]       ; 00410c01
    TEST byte ptr [ESP + 0xc],0x4       ; 00410c05
    JNZ 0x00410c26                      ; 00410c0a
        ;   XREF to: 00410c26 (CONDITIONAL_JUMP)  ; LAB_00410c26
    PUSH 0x1                            ; 00410c0c
    PUSH EBX                            ; 00410c0e
    CALL FUN_004ce3d0                   ; 00410c0f
        ;   XREF to: 004ce3d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ce3d0()
    ADD ESP,0x8                         ; 00410c14
    MOV DL,byte ptr [ESP + 0xc]         ; 00410c17
    MOV EBX,EAX                         ; 00410c1b
    TEST DL,0x2                         ; 00410c1d
    JNZ 0x00410c41                      ; 00410c20
        ;   XREF to: 00410c41 (CONDITIONAL_JUMP)  ; LAB_00410c41
    MOV EAX,EBX                         ; 00410c22
    POP EBX                             ; 00410c24
    RET                                 ; 00410c25
    PUSH 0x5f2c40                       ; 00410c26 | DAT_005f2c40
        ;   Label: LAB_00410c26
    PUSH EBX                            ; 00410c2b
    CALL FUN_005b7fa7                   ; 00410c2c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 00410c31
    PUSH EAX                            ; 00410c34
    CALL FUN_005b7fce                   ; 00410c35
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 00410c3a
    MOV EAX,EBX                         ; 00410c3d
    POP EBX                             ; 00410c3f
    RET                                 ; 00410c40
    PUSH EAX                            ; 00410c41
        ;   Label: LAB_00410c41
    CALL FUN_005b7fdc                   ; 00410c42
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 00410c47
    MOV EAX,EBX                         ; 00410c4a
    POP EBX                             ; 00410c4c
    RET                                 ; 00410c4d

