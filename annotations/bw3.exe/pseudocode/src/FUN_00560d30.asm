; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00560d30(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_0048c2e0 at 0048ded5
;
; Referenced Globals:
;   undefined4 DAT_02cf5ecc
;   undefined4 DAT_02cf5ed0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00560d30
        ;   Label: FUN_00560d30
    MOV [0x02cf5ecc],EAX                ; 00560d34 | DAT_02cf5ecc
    MOV EAX,dword ptr [ESP + 0xc]       ; 00560d39
    MOV [0x02cf5ed0],EAX                ; 00560d3d | DAT_02cf5ed0
    RET                                 ; 00560d42

