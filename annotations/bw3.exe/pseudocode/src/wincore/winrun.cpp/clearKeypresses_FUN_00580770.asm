; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_clearKeypresses_FUN_00580770(void)
;
;
; XREF[3]:
;   engine_2d.c_clearInputAndWait_FUN_004032b0 at 004032b0
;   engine_keys.cpp_clearKeypresses_FUN_004df570 at 004df570
;   shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0047bd50 at 0047bebd
;
; Referenced Globals:
;   undefined4 DAT_02d20328
;   undefined4 DAT_02d2032c
;   undefined4 DAT_02d20330
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 00580770
        ;   Label: wincore_winrun.cpp_clearKeypresses_FUN_00580770
    XOR EAX,EAX                         ; 00580772
    MOV dword ptr [0x02d2032c],EDX      ; 00580774 | DAT_02d2032c
    MOV dword ptr [0x02d20328],EDX      ; 0058077a | DAT_02d20328
    MOV dword ptr [0x02d20330],EDX      ; 00580780 | DAT_02d20330
    RET                                 ; 00580786

