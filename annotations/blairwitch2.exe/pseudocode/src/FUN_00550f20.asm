; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00550f20(undefined4 param_1,undefined4 param_2)
;
;
; XREF[6]:
;   FUN_00425fb0 at 00426155
;   FUN_00489670 at 0048b34a
;   FUN_004e2e70 at 004e389c
;   FUN_004e38d0 at 004e39b0
;   FUN_004e6b20 at 004e6bb9
;   FUN_0055a3c0 at 0055a4a3
;
; Called Functions:
;   FUN_0054d3a0
;   FUN_00551440
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00550f20
        ;   Label: FUN_00550f20
    MOV EDX,dword ptr [ESP + 0x8]       ; 00550f22
    PUSH EDX                            ; 00550f26
    CALL FUN_0054d3a0                   ; 00550f27
        ;   XREF to: 0054d3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054d3a0()
    ADD ESP,0x8                         ; 00550f2c
    TEST EAX,EAX                        ; 00550f2f
    JNZ 0x00550f34                      ; 00550f31
        ;   XREF to: 00550f34 (CONDITIONAL_JUMP)  ; LAB_00550f34
    RET                                 ; 00550f33
    MOV EDX,dword ptr [ESP + 0x8]       ; 00550f34
        ;   Label: LAB_00550f34
    MOV dword ptr [EAX + 0x38],EDX      ; 00550f38
    OR byte ptr [EAX + 0x118],0x8       ; 00550f3b
    CALL FUN_00551440                   ; 00550f42
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; undefined FUN_00551440()
    MOV EAX,0x1                         ; 00550f47
    RET                                 ; 00550f4c

