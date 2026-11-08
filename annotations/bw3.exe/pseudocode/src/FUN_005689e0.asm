; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005689e0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e4fd0
;
; Called Functions:
;   FUN_00408770
;   FUN_0041adf0
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005689e0
        ;   Label: FUN_005689e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005689e1
    TEST byte ptr [ESP + 0xc],0x4       ; 005689e5
    JNZ 0x00568a1d                      ; 005689ea
        ;   XREF to: 00568a1d (CONDITIONAL_JUMP)  ; LAB_00568a1d
    PUSH 0x0                            ; 005689ec
    ADD EBX,0x394                       ; 005689ee
    PUSH EBX                            ; 005689f4
    CALL FUN_0041adf0                   ; 005689f5
        ;   XREF to: 0041adf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041adf0()
    ADD ESP,0x8                         ; 005689fa
    PUSH 0x1                            ; 005689fd
    LEA EBX,[EAX + 0xfffffc6c]          ; 005689ff
    PUSH EBX                            ; 00568a05
    CALL FUN_00408770                   ; 00568a06
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 00568a0b
    MOV DL,byte ptr [ESP + 0xc]         ; 00568a0e
    MOV EBX,EAX                         ; 00568a12
    TEST DL,0x2                         ; 00568a14
    JNZ 0x00568a38                      ; 00568a17
        ;   XREF to: 00568a38 (CONDITIONAL_JUMP)  ; LAB_00568a38
    MOV EAX,EBX                         ; 00568a19
    POP EBX                             ; 00568a1b
    RET                                 ; 00568a1c
    PUSH 0x5e4fd0                       ; 00568a1d | DAT_005e4fd0
        ;   Label: LAB_00568a1d
    PUSH EBX                            ; 00568a22
    CALL FUN_005a308f                   ; 00568a23
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 00568a28
    PUSH EAX                            ; 00568a2b
    CALL FUN_005a30b6                   ; 00568a2c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 00568a31
    MOV EAX,EBX                         ; 00568a34
    POP EBX                             ; 00568a36
    RET                                 ; 00568a37
    PUSH EAX                            ; 00568a38
        ;   Label: LAB_00568a38
    CALL FUN_005a30c4                   ; 00568a39
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 00568a3e
    MOV EAX,EBX                         ; 00568a41
    POP EBX                             ; 00568a43
    RET                                 ; 00568a44

