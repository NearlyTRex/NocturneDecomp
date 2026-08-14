; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_clearKeypresses_FUN_00558ae0(void)
;
;
; XREF[3]:
;   engine_2d.c_clearInputAndWait_FUN_00403f50 at 00403f50
;   engine_keys.cpp_clearKeypresses_FUN_004c41b0 at 004c41b0
;   shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0046f390 at 0046f4fd
;
; Referenced Globals:
;   undefined4 DAT_02de0848
;   undefined4 DAT_02de084c
;   undefined4 DAT_02de0850
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 00558ae0
        ;   Label: wincore_winrun.cpp_clearKeypresses_FUN_00558ae0
    XOR EAX,EAX                         ; 00558ae2
    MOV dword ptr [0x02de084c],EDX      ; 00558ae4 | DAT_02de084c
    MOV dword ptr [0x02de0848],EDX      ; 00558aea | DAT_02de0848
    MOV dword ptr [0x02de0850],EDX      ; 00558af0 | DAT_02de0850
    RET                                 ; 00558af6

