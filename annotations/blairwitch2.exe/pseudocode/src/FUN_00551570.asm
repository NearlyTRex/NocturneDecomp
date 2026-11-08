; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00551570(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[3]:
;   FUN_005523d0 at 0055243c
;   FUN_0055a1d0 at 0055a206
;   FUN_0055ac50 at 0055ad33
;
; Referenced Globals:
;   undefined4 DAT_026484b8
;   undefined4 DAT_02649024
;
; Called Functions:
;   FUN_00551440
;   FUN_005532f0
;
; *****************************************************************************

section .text

    CALL FUN_005532f0                   ; 00551570
        ;   XREF to: 005532f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005532f0()
        ;   Label: FUN_00551570
    MOV EAX,[0x026484b8]                ; 00551575 | DAT_026484b8
    MOV EDX,dword ptr [ESP + 0x4]       ; 0055157a
    MOV dword ptr [EAX*0x4 + 0x2648458],EDX ; 0055157e
    MOV EDX,dword ptr [ESP + 0x8]       ; 00551585
    MOV dword ptr [EAX*0x4 + 0x2648460],EDX ; 00551589
    MOV EDX,dword ptr [ESP + 0xc]       ; 00551590
    MOV dword ptr [EAX*0x4 + 0x2648468],EDX ; 00551594
    OR byte ptr [0x02649024],0x4        ; 0055159b | DAT_02649024
    JMP 0x00551440                      ; 005515a2
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)

