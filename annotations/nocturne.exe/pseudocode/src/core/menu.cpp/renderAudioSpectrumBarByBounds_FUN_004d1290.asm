; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_menu_cpp_renderAudioSpectrumBarByBounds_FUN_004d1290(void)
;
;
; Called Functions:
;   core_menu.cpp_renderAudioSpectrumBar_FUN_004cf2b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d1290
        ;   Label: core_menu.cpp_renderAudioSpectrumBarByBounds_FUN_004d1290
    MOV EDX,dword ptr [ESP + 0x10]      ; 004d1291
    MOV ECX,dword ptr [ESP + 0xc]       ; 004d1295
    MOV EAX,EDX                         ; 004d1299
    SUB EAX,ECX                         ; 004d129b
    INC EAX                             ; 004d129d
    PUSH EAX                            ; 004d129e
    PUSH EDX                            ; 004d129f
    MOV EBX,dword ptr [ESP + 0x10]      ; 004d12a0
    PUSH EBX                            ; 004d12a4
    CALL core_menu.cpp_renderAudioSpectrumBar_FUN_004cf2b0 ; 004d12a5
        ;   XREF to: 004cf2b0 (UNCONDITIONAL_CALL)  ; void core_menu.cpp_renderAudioSpectrumBar_FUN_004cf2b0(int x_center, int y_top, int height_half)
    ADD ESP,0xc                         ; 004d12aa
    POP EBX                             ; 004d12ad
    RET                                 ; 004d12ae

