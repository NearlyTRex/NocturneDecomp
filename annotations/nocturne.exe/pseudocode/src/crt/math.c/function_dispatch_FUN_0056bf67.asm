; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float10 __watcallRegister crt_math_c_function_dispatch_FUN_0056bf67(int function_index)
;
;
; XREF[2]:
;   crt_math.c_pow_FUN_00565ad6 at 00565bb9
;   crt_unknown.c_FUN_00570d50 at 00570de6
;
; Referenced Globals:
;   undefined1* PTR_crt_unknown.c_FUN_0056bf71_005c3f84 = 0056bf71
;
; *****************************************************************************

section .text

    SUB ESP,0x2c                        ; 0056bf67
        ;   Label: crt_math.c_function_dispatch_FUN_0056bf67
    JMP dword ptr [EAX*0x4 + 0x5c3f84]  ; 0056bf6a | PTR_crt_unknown.c_FUN_0056bf71_005c3f84

