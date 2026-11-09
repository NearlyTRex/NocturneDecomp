; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_watcom_c_notifyAbnormalTermination_FUN_005a5fb0(void)
;
;
; XREF[1]:
;   core_main.c_FUN_004e4330 at 004e43c6
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005a5fb8_00607674 = 005a5fb8
;
; Called Functions:
;   crt_unknown.c_FUN_005a5fb8
;
; *****************************************************************************

section .text

    CALL dword ptr [0x00607674]         ; 005a5fb0 | PTR_crt_unknown.c_FUN_005a5fb8_00607674
        ;   Label: crt_watcom.c_notifyAbnormalTermination_FUN_005a5fb0
    MOV EAX,EAX                         ; 005a5fb6

