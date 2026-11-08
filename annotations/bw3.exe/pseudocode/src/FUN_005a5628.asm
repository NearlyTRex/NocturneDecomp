; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a5628(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_00482820 at 00482909
;   FUN_005ab1d0 at 005ab254
;
; Referenced Globals:
;   void* PTR_FUN_006079a0 = 005a7f3c
;
; Called Functions:
;   FUN_005a55d0
;   FUN_005a7f3c
;
; *****************************************************************************

section .text

    CALL dword ptr [0x006079a0]         ; 005a5628 | PTR_FUN_006079a0
        ;   Label: FUN_005a5628
    ADD EAX,0x14                        ; 005a562e
    PUSH EAX                            ; 005a5631
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a5632
    PUSH EDX                            ; 005a5636
    CALL FUN_005a55d0                   ; 005a5637
        ;   XREF to: 005a55d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a55d0()
    ADD ESP,0x8                         ; 005a563c
    RET                                 ; 005a563f

