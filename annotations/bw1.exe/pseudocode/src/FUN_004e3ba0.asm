; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004e3ba0(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_0040c550
;
; *****************************************************************************

section .text

    PUSH 0x5e4005                       ; 004e3ba0
        ;   Label: FUN_004e3ba0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e3ba5
    PUSH EDX                            ; 004e3ba9
    CALL FUN_0040c550                   ; 004e3baa
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c550()
    ADD ESP,0x8                         ; 004e3baf
    TEST EAX,EAX                        ; 004e3bb2
    JZ 0x004e3bc0                       ; 004e3bb4
        ;   XREF to: 004e3bc0 (CONDITIONAL_JUMP)  ; LAB_004e3bc0
    MOV EAX,0x2                         ; 004e3bb6
    LEA EAX,[EAX]                       ; 004e3bbb
    MOV ECX,ECX                         ; 004e3bbe
    RET                                 ; 004e3bc0
        ;   Label: LAB_004e3bc0

