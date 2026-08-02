; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00574975(MSG *param_1)
;
;
; Referenced Globals:
;   void* PTR_DispatchMessageA_00575424 = 0017593a
;   void* PTR_Sleep_005755b8 = 00176066
;
; *****************************************************************************

section .text

    AND EAX,0x5755b8                    ; 00574975 | PTR_Sleep_005755b8
        ;   Label: crt_unknown.c_FUN_00574975
    JMP dword ptr [0x00575424]          ; 0057497a | PTR_DispatchMessageA_00575424

