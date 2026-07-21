; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_setLookAtTarget_FUN_00429f60(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 00502697
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00429f60
        ;   Label: core_charactr.cpp_CCharacter_setLookAtTarget_FUN_00429f60
    MOV EAX,dword ptr [ESP + 0x8]       ; 00429f64
    MOV dword ptr [EDX + 0x25cc],EAX    ; 00429f68
    RET                                 ; 00429f6e

