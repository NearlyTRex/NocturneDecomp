; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0053ff00(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fb820
;
; Called Functions:
;   FUN_00589ae0
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053ff00
        ;   Label: FUN_0053ff00
    MOV EBX,dword ptr [ESP + 0x8]       ; 0053ff01
    TEST byte ptr [ESP + 0xc],0x4       ; 0053ff05
    JNZ 0x0053ff26                      ; 0053ff0a
        ;   XREF to: 0053ff26 (CONDITIONAL_JUMP)  ; LAB_0053ff26
    PUSH 0x1                            ; 0053ff0c
    PUSH EBX                            ; 0053ff0e
    CALL FUN_00589ae0                   ; 0053ff0f
        ;   XREF to: 00589ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00589ae0()
    ADD ESP,0x8                         ; 0053ff14
    MOV DL,byte ptr [ESP + 0xc]         ; 0053ff17
    MOV EBX,EAX                         ; 0053ff1b
    TEST DL,0x2                         ; 0053ff1d
    JNZ 0x0053ff41                      ; 0053ff20
        ;   XREF to: 0053ff41 (CONDITIONAL_JUMP)  ; LAB_0053ff41
    MOV EAX,EBX                         ; 0053ff22
    POP EBX                             ; 0053ff24
    RET                                 ; 0053ff25
    PUSH 0x5fb820                       ; 0053ff26 | DAT_005fb820
        ;   Label: LAB_0053ff26
    PUSH EBX                            ; 0053ff2b
    CALL FUN_005b7fa7                   ; 0053ff2c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 0053ff31
    PUSH EAX                            ; 0053ff34
    CALL FUN_005b7fce                   ; 0053ff35
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 0053ff3a
    MOV EAX,EBX                         ; 0053ff3d
    POP EBX                             ; 0053ff3f
    RET                                 ; 0053ff40
    PUSH EAX                            ; 0053ff41
        ;   Label: LAB_0053ff41
    CALL FUN_005b7fdc                   ; 0053ff42
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 0053ff47
    MOV EAX,EBX                         ; 0053ff4a
    POP EBX                             ; 0053ff4c
    RET                                 ; 0053ff4d

