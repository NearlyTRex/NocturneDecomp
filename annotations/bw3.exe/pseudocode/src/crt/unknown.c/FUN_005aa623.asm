; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005aa623(void)
;
;
; XREF[2]:
;   crt_math.c_pow_FUN_005a4764 at 005a4847
;   crt_unknown.c_FUN_005af350 at 005af3e6
;
; Referenced Globals:
;   void* g_PTR_00609f14 = 005aa62d
;
; *****************************************************************************

section .text

    SUB ESP,0x2c                        ; 005aa623
        ;   Label: crt_unknown.c_FUN_005aa623
    JMP dword ptr [EAX*0x4 + 0x609f14]  ; 005aa626 | g_PTR_00609f14

