; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_enableClipping_FUN_004f5dc0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c37788
;   undefined4 DAT_01d0c39c
;   undefined4 DAT_0264bcc4
;
; *****************************************************************************

section .text

    MOV EDX,0x1                         ; 004f5dc0
        ;   Label: engine_mini3d.cpp_enableClipping_FUN_004f5dc0
    MOV ECX,dword ptr [0x0264bcc4]      ; 004f5dc5 | DAT_0264bcc4
    MOV dword ptr [0x01d0c39c],EDX      ; 004f5dcb | DAT_01d0c39c
    TEST ECX,ECX                        ; 004f5dd1
    JZ 0x004f5dde                       ; 004f5dd3
        ;   XREF to: 004f5dde (CONDITIONAL_JUMP)  ; LAB_004f5dde
    CMP dword ptr [0x01c37788],0x0      ; 004f5dd5 | DAT_01c37788
    JNZ 0x004f5dac                      ; 004f5ddc
        ;   XREF to: 004f5dac (CONDITIONAL_JUMP)  ; LAB_004f5dac
    RET                                 ; 004f5dde
        ;   Label: LAB_004f5dde

