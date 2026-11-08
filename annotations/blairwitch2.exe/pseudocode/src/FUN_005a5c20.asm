; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a5c20(undefined4 param_1,undefined4 param_2,int param_3)
;
;
; XREF[1]:
;   FUN_005a5b40 at 005a5bd8
;
; Called Functions:
;   FUN_0059e8c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0xc]       ; 005a5c20
        ;   Label: FUN_005a5c20
    TEST EAX,EAX                        ; 005a5c24
    JNZ 0x005a5c29                      ; 005a5c26
        ;   XREF to: 005a5c29 (CONDITIONAL_JUMP)  ; LAB_005a5c29
    RET                                 ; 005a5c28
    PUSH EAX                            ; 005a5c29
        ;   Label: LAB_005a5c29
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a5c2a
    PUSH dword ptr [ESP + 0xc]          ; 005a5c2e
    PUSH EDX                            ; 005a5c32
    CALL FUN_0059e8c0                   ; 005a5c33
        ;   XREF to: 0059e8c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059e8c0()
    ADD ESP,0xc                         ; 005a5c38
    RET                                 ; 005a5c3b

