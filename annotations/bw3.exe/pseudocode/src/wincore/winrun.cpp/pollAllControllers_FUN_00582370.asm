; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_pollAllControllers_FUN_00582370(void)
;
;
; Referenced Globals:
;   float g_FLOAT_005d7f02 = 0.00001525879
;   int g_INT_01c5fad0
;
; Called Functions:
;   wincore_winrun.cpp_pollController_FUN_00581f50
;   wincore_winrun.cpp_updateInputIdleTimers_FUN_00582500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00582370
        ;   Label: wincore_winrun.cpp_pollAllControllers_FUN_00582370
    XOR EBX,EBX                         ; 00582371
    PUSH EBX                            ; 00582373
        ;   Label: LAB_00582373
    CALL wincore_winrun.cpp_pollController_FUN_00581f50 ; 00582374
        ;   XREF to: 00581f50 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_pollController_FUN_00581f50(int controller_index)
    INC EBX                             ; 00582379
    ADD ESP,0x4                         ; 0058237a
    CMP EBX,0x4                         ; 0058237d
    JL 0x00582373                       ; 00582380
        ;   XREF to: 00582373 (CONDITIONAL_JUMP)  ; LAB_00582373
    FILD dword ptr [0x01c5fad0]         ; 00582382 | g_INT_01c5fad0
    FMUL float ptr [0x005d7f02]         ; 00582388 | g_FLOAT_005d7f02
    SUB ESP,0x4                         ; 0058238e
    FSTP float ptr [ESP]                ; 00582391
    CALL wincore_winrun.cpp_updateInputIdleTimers_FUN_00582500 ; 00582394
        ;   XREF to: 00582500 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_updateInputIdleTimers_FUN_00582500(float delta_time)
    ADD ESP,0x4                         ; 00582399
    POP EBX                             ; 0058239c
    RET                                 ; 0058239d

