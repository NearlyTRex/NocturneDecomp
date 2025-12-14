; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_menu.cpp_renderAudioSpectrumBarByBounds_FUN_00511e00(int x_center, int y_bottom, int y_top)
;
; Parameters:
; int              Stack[0x4]:4   x_center
; int              Stack[0x8]:4   y_bottom
; int              Stack[0xc]:4   y_top
;
; Called Functions:
;   core_menu.cpp_renderAudioSpectrumBar_FUN_0050fe70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00511e00
        ;   Label: core_menu.cpp_renderAudioSpectrumBarByBounds_FUN_00511e00
    MOV EDX,dword ptr [ESP + 0x10]      ; 00511e01
    MOV ECX,dword ptr [ESP + 0xc]       ; 00511e05
    MOV EAX,EDX                         ; 00511e09
    SUB EAX,ECX                         ; 00511e0b
    INC EAX                             ; 00511e0d
    PUSH EAX                            ; 00511e0e
    PUSH EDX                            ; 00511e0f
    MOV EBX,dword ptr [ESP + 0x10]      ; 00511e10
    PUSH EBX                            ; 00511e14
    CALL core_menu.cpp_renderAudioSpectrumBar_FUN_0050fe70 ; 00511e15
        ;   XREF to: 0050fe70 (UNCONDITIONAL_CALL)  ; void core_menu.cpp_renderAudioSpectrumBar_FUN_0050fe70(int x_center, int y_top, int height_half)
    ADD ESP,0xc                         ; 00511e1a
    POP EBX                             ; 00511e1d
    RET                                 ; 00511e1e

