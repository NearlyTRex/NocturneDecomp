; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_disableClipping_FUN_004f5d90(void)
;
;
; XREF[1]:
;   engine_font.cpp_FUN_004a97a0 at 004a980e
;
; Referenced Globals:
;   undefined4 DAT_01c37788
;   undefined4 DAT_01d0c39c
;   undefined4 DAT_0264bcc4
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 004f5d90
        ;   Label: engine_mini3d.cpp_disableClipping_FUN_004f5d90
    MOV ECX,dword ptr [0x0264bcc4]      ; 004f5d92 | DAT_0264bcc4
    MOV dword ptr [0x01d0c39c],EDX      ; 004f5d98 | DAT_01d0c39c
    TEST ECX,ECX                        ; 004f5d9e
    JZ 0x004f5dab                       ; 004f5da0
        ;   XREF to: 004f5dab (CONDITIONAL_JUMP)  ; LAB_004f5dab
    CMP dword ptr [0x01c37788],0x0      ; 004f5da2 | DAT_01c37788
    JNZ 0x004f5dac                      ; 004f5da9
        ;   XREF to: 004f5dac (CONDITIONAL_JUMP)  ; LAB_004f5dac
    RET                                 ; 004f5dab
        ;   Label: LAB_004f5dab
    PUSH EDX                            ; 004f5dac
        ;   Label: LAB_004f5dac
    CALL dword ptr [0x0264bcc4]         ; 004f5dad | DAT_0264bcc4
    ADD ESP,0x4                         ; 004f5db3
    RET                                 ; 004f5db6

