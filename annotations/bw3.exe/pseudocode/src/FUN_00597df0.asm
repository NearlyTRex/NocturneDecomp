; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00597df0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005e7860
;   undefined4 DAT_005e7864
;
; Called Functions:
;   FUN_00488fd0
;   FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00597df0
        ;   Label: FUN_00597df0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00597df1
    PUSH EDX                            ; 00597df5
    CALL FUN_00488fd0                   ; 00597df6
        ;   XREF to: 00488fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00488fd0()
    ADD ESP,0x4                         ; 00597dfb
    PUSH 0x5d96fb                       ; 00597dfe
    MOV EBX,EAX                         ; 00597e03
    ADD EAX,0x158                       ; 00597e05
    PUSH EAX                            ; 00597e0a
    MOV dword ptr [EAX + -0x4],0x5e7874 ; 00597e0b
    CALL FUN_0054eae0                   ; 00597e12
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eae0()
    FLD float ptr [0x005e7860]          ; 00597e17 | DAT_005e7860
    FLD float ptr [0x005e7864]          ; 00597e1d | DAT_005e7864
    MOV dword ptr [EBX + 0x326c],0x3fe00000 ; 00597e23
    ADD ESP,0x8                         ; 00597e2d
    MOV dword ptr [EBX + 0x3270],0x40600000 ; 00597e30
    MOV EAX,EBX                         ; 00597e3a
    FXCH                                ; 00597e3c
    FSTP float ptr [EBX + 0x3274]       ; 00597e3e
    FSTP float ptr [EBX + 0x3278]       ; 00597e44
    POP EBX                             ; 00597e4a
    RET                                 ; 00597e4b

