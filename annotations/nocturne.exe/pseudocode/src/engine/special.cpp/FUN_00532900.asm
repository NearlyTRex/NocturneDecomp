; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_special_cpp_FUN_00532900(void)
;
;
; Referenced Globals:
;   int g_UseExternalRenderer
;   undefined4 DAT_02dc9db8
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c02594],0x0      ; 00532900 | g_UseExternalRenderer
        ;   Label: engine_special.cpp_FUN_00532900
    JNZ 0x0053290c                      ; 00532907
        ;   XREF to: 0053290c (CONDITIONAL_JUMP)  ; LAB_0053290c
    XOR EAX,EAX                         ; 00532909
    RET                                 ; 0053290b
    PUSH EBX                            ; 0053290c
        ;   Label: LAB_0053290c
    MOV ECX,dword ptr [ESP + 0xc]       ; 0053290d
    PUSH ECX                            ; 00532911
    MOV EBX,dword ptr [ESP + 0xc]       ; 00532912
    PUSH EBX                            ; 00532916
    CALL dword ptr [0x02dc9db8]         ; 00532917 | DAT_02dc9db8
    ADD ESP,0x8                         ; 0053291d
    POP EBX                             ; 00532920
    RET                                 ; 00532921

