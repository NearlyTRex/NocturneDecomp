; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a92c0(undefined4 param_1)
;
;
; XREF[25]:
;   FUN_005a32b0 at 005a32f1
;   FUN_005a3890 at 005a38b6
;   FUN_005a4140 at 005a4194
;   FUN_005a4404 at 005a4471
;   FUN_005a457c at 005a45c2
;   FUN_005a48e0 at 005a4906
;   FUN_005a53f0 at 005a541d
;   FUN_005a5d70 at 005a5dba
;   FUN_005a92d0 at 005a92d2
;   FUN_005a92dc at 005a92de
;   ... and 15 more
;
; Referenced Globals:
;   void* PTR_FUN_006079a0 = 005a7f3c
;
; Called Functions:
;   FUN_005a7f3c
;
; *****************************************************************************

section .text

    CALL dword ptr [0x006079a0]         ; 005a92c0 | PTR_FUN_006079a0
        ;   Label: FUN_005a92c0
    MOV EDX,dword ptr [ESP + 0x4]       ; 005a92c6
    MOV dword ptr [EAX + 0x4],EDX       ; 005a92ca
    RET                                 ; 005a92cd

