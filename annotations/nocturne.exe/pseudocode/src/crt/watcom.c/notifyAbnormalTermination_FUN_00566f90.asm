; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_watcom_c_notifyAbnormalTermination_FUN_00566f90(void)
;
;
; XREF[1]:
;   FUN_004c8440 at 004c84d6
;
; Referenced Globals:
;   void* PTR_FUN_005c1890 = 00566f98
;
; Called Functions:
;   FUN_00566f98
;
; *****************************************************************************

section .text

    CALL dword ptr [0x005c1890]         ; 00566f90 | PTR_FUN_005c1890
        ;   Label: crt_watcom.c_notifyAbnormalTermination_FUN_00566f90
    MOV EAX,EAX                         ; 00566f96

