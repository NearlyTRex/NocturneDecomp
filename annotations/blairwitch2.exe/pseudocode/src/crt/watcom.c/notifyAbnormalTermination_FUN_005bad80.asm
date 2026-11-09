; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_watcom_c_notifyAbnormalTermination_FUN_005bad80(void)
;
;
; XREF[1]:
;   core_main.c_FUN_004e4500 at 004e4596
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005bad88_0061ef50 = 005bad88
;
; Called Functions:
;   crt_unknown.c_FUN_005bad88
;
; *****************************************************************************

section .text

    CALL dword ptr [0x0061ef50]         ; 005bad80 | PTR_crt_unknown.c_FUN_005bad88_0061ef50
        ;   Label: crt_watcom.c_notifyAbnormalTermination_FUN_005bad80
    MOV EAX,EAX                         ; 005bad86

