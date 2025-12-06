; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallRegister void crt_math.c_function_dispatch_FUN_00606a77(int function_index)
;
;
; XREF[2]:
;   crt_math.c_atan2_FUN_0060c440 at 0060c50f
;   crt_math.c_pow_FUN_005ffd76 at 005ffe59
;
; Referenced Globals:
;   void* PTR_FUN_006873d4 = 00606a81
;
; *****************************************************************************

section .text

    SUB ESP,0x2c                        ; 00606a77
        ;   Label: crt_math.c_function_dispatch_FUN_00606a77
    JMP dword ptr [EAX*0x4 + 0x6873d4]  ; 00606a7a | void * PTR_FUN_006873d4

