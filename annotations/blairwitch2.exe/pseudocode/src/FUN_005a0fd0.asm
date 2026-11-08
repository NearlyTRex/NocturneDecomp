; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a0fd0(int param_1)
;
;
; Called Functions:
;   FUN_00503620
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a0fd0
        ;   Label: FUN_005a0fd0
    MOV EDX,dword ptr [EAX + 0x11390]   ; 005a0fd4
    TEST EDX,EDX                        ; 005a0fda
    JGE 0x005a0fdf                      ; 005a0fdc
        ;   XREF to: 005a0fdf (CONDITIONAL_JUMP)  ; LAB_005a0fdf
    RET                                 ; 005a0fde
    PUSH 0x1                            ; 005a0fdf
        ;   Label: LAB_005a0fdf
    PUSH EDX                            ; 005a0fe1
    ADD EAX,0x2b4                       ; 005a0fe2
    PUSH EAX                            ; 005a0fe7
    CALL FUN_00503620                   ; 005a0fe8
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 005a0fed
    RET                                 ; 005a0ff0

