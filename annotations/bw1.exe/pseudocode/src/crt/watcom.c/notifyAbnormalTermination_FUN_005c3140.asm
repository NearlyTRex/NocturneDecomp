; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_watcom_c_notifyAbnormalTermination_FUN_005c3140(void)
;
;
; XREF[1]:
;   core_main.c_FUN_005030e0 at 00503176
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005c3148_006262d0 = 005c3148
;
; Called Functions:
;   crt_unknown.c_FUN_005c3148
;
; *****************************************************************************

section .text

    CALL dword ptr [0x006262d0]         ; 005c3140 | PTR_crt_unknown.c_FUN_005c3148_006262d0
        ;   Label: crt_watcom.c_notifyAbnormalTermination_FUN_005c3140
    MOV EAX,EAX                         ; 005c3146

