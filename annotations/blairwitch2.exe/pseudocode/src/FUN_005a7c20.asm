; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a7c20(undefined4 param_1,undefined4 param_2,int param_3)
;
;
; XREF[1]:
;   FUN_005a7b10 at 005a7ba8
;
; Called Functions:
;   FUN_0059e8c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0xc]       ; 005a7c20
        ;   Label: FUN_005a7c20
    TEST EAX,EAX                        ; 005a7c24
    JNZ 0x005a7c29                      ; 005a7c26
        ;   XREF to: 005a7c29 (CONDITIONAL_JUMP)  ; LAB_005a7c29
    RET                                 ; 005a7c28
    PUSH EAX                            ; 005a7c29
        ;   Label: LAB_005a7c29
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a7c2a
    PUSH dword ptr [ESP + 0xc]          ; 005a7c2e
    PUSH EDX                            ; 005a7c32
    CALL FUN_0059e8c0                   ; 005a7c33
        ;   XREF to: 0059e8c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059e8c0()
    ADD ESP,0xc                         ; 005a7c38
    RET                                 ; 005a7c3b

