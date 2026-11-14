; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_charactr_cpp_FUN_00434b00(int param_1)
;
;
; XREF[2]:
;   core_script.cpp_CScript_process_FUN_00528e00 at 00528e46
;   core_script.cpp_CScript_renderSubtitles_FUN_00528fc0 at 00528fdf
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00434b00
        ;   Label: core_charactr.cpp_FUN_00434b00
    MOV EAX,dword ptr [EAX + 0x314]     ; 00434b04
    RET                                 ; 00434b0a

