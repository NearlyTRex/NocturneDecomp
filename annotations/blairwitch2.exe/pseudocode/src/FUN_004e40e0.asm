; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004e40e0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f9700
;
; Called Functions:
;   FUN_00589ae0
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e40e0
        ;   Label: FUN_004e40e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e40e1
    TEST byte ptr [ESP + 0xc],0x4       ; 004e40e5
    JNZ 0x004e4106                      ; 004e40ea
        ;   XREF to: 004e4106 (CONDITIONAL_JUMP)  ; LAB_004e4106
    PUSH 0x1                            ; 004e40ec
    PUSH EBX                            ; 004e40ee
    CALL FUN_00589ae0                   ; 004e40ef
        ;   XREF to: 00589ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00589ae0()
    ADD ESP,0x8                         ; 004e40f4
    MOV DL,byte ptr [ESP + 0xc]         ; 004e40f7
    MOV EBX,EAX                         ; 004e40fb
    TEST DL,0x2                         ; 004e40fd
    JNZ 0x004e4121                      ; 004e4100
        ;   XREF to: 004e4121 (CONDITIONAL_JUMP)  ; LAB_004e4121
    MOV EAX,EBX                         ; 004e4102
    POP EBX                             ; 004e4104
    RET                                 ; 004e4105
    PUSH 0x5f9700                       ; 004e4106 | DAT_005f9700
        ;   Label: LAB_004e4106
    PUSH EBX                            ; 004e410b
    CALL FUN_005b7fa7                   ; 004e410c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 004e4111
    PUSH EAX                            ; 004e4114
    CALL FUN_005b7fce                   ; 004e4115
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 004e411a
    MOV EAX,EBX                         ; 004e411d
    POP EBX                             ; 004e411f
    RET                                 ; 004e4120
    PUSH EAX                            ; 004e4121
        ;   Label: LAB_004e4121
    CALL FUN_005b7fdc                   ; 004e4122
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 004e4127
    MOV EAX,EBX                         ; 004e412a
    POP EBX                             ; 004e412c
    RET                                 ; 004e412d

