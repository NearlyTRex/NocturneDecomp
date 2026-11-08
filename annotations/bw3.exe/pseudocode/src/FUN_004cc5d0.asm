; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cc5d0(int param_1)
;
;
; XREF[10]:
;   FUN_00409f60 at 0040a640
;   FUN_00410490 at 004113cd
;   FUN_00424550 at 00424d71
;   FUN_00486d40 at 004874b6
;   FUN_0048b020 at 0048b4f2
;   FUN_004ae850 at 004af354
;   FUN_004d0fc0 at 004d1795
;   FUN_00527d70 at 00528415
;   FUN_005353e0 at 00535771
;   FUN_0056b410 at 0056bc2a
;
; Referenced Globals:
;   undefined4 DAT_005fba60
;
; Called Functions:
;   FUN_00491aa0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004cc5d0
        ;   Label: FUN_004cc5d0
    ADD EAX,0x33c                       ; 004cc5d4
    PUSH EAX                            ; 004cc5d9
    MOV EDX,dword ptr [0x005fba60]      ; 004cc5da | DAT_005fba60
    PUSH EDX                            ; 004cc5e0
    CALL FUN_00491aa0                   ; 004cc5e1
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00491aa0()
    ADD ESP,0x8                         ; 004cc5e6
    RET                                 ; 004cc5e9

