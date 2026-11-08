; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00415800(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f36c4
;   undefined4 DAT_005f37f0
;
; Called Functions:
;   FUN_00408930
;   FUN_00415890
;   FUN_00417d10
;   FUN_005b1c70
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415800
        ;   Label: FUN_00415800
    MOV EBX,dword ptr [ESP + 0x8]       ; 00415801
    TEST byte ptr [ESP + 0xc],0x4       ; 00415805
    JNZ 0x00415864                      ; 0041580a
        ;   XREF to: 00415864 (CONDITIONAL_JUMP)  ; LAB_00415864
    PUSH 0x0                            ; 0041580c
    PUSH 0x0                            ; 0041580e
    PUSH EBX                            ; 00415810
    MOV dword ptr [EBX + 0x2b0],0x5f36c4 ; 00415811 | DAT_005f36c4
    CALL FUN_00415890                   ; 0041581b
        ;   XREF to: 00415890 (UNCONDITIONAL_CALL)  ; undefined FUN_00415890()
    ADD ESP,0xc                         ; 00415820
    PUSH 0x0                            ; 00415823
    ADD EBX,0x10e0                      ; 00415825
    PUSH EBX                            ; 0041582b
    CALL FUN_005b1c70                   ; 0041582c
        ;   XREF to: 005b1c70 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1c70()
    ADD ESP,0x8                         ; 00415831
    PUSH 0x0                            ; 00415834
    SUB EAX,0x834                       ; 00415836
    PUSH EAX                            ; 0041583b
    CALL FUN_00417d10                   ; 0041583c
        ;   XREF to: 00417d10 (UNCONDITIONAL_CALL)  ; undefined FUN_00417d10()
    ADD ESP,0x8                         ; 00415841
    PUSH 0x1                            ; 00415844
    LEA EBX,[EAX + 0xfffff754]          ; 00415846
    PUSH EBX                            ; 0041584c
    CALL FUN_00408930                   ; 0041584d
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 00415852
    MOV DL,byte ptr [ESP + 0xc]         ; 00415855
    MOV EBX,EAX                         ; 00415859
    TEST DL,0x2                         ; 0041585b
    JNZ 0x0041587f                      ; 0041585e
        ;   XREF to: 0041587f (CONDITIONAL_JUMP)  ; LAB_0041587f
    MOV EAX,EBX                         ; 00415860
    POP EBX                             ; 00415862
    RET                                 ; 00415863
    PUSH 0x5f37f0                       ; 00415864 | DAT_005f37f0
        ;   Label: LAB_00415864
    PUSH EBX                            ; 00415869
    CALL FUN_005b7fa7                   ; 0041586a
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 0041586f
    PUSH EAX                            ; 00415872
    CALL FUN_005b7fce                   ; 00415873
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 00415878
    MOV EAX,EBX                         ; 0041587b
    POP EBX                             ; 0041587d
    RET                                 ; 0041587e
    PUSH EAX                            ; 0041587f
        ;   Label: LAB_0041587f
    CALL FUN_005b7fdc                   ; 00415880
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 00415885
    MOV EAX,EBX                         ; 00415888
    POP EBX                             ; 0041588a
    RET                                 ; 0041588b

