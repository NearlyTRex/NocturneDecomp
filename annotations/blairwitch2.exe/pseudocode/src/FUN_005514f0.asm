; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005514f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)
;
;
; XREF[3]:
;   FUN_005523d0 at 0055242e
;   FUN_00558d50 at 00558fb8
;   FUN_0055ac50 at 0055ad25
;
; Referenced Globals:
;   undefined4 DAT_026484b8
;   undefined4 DAT_02649027
;
; Called Functions:
;   FUN_00551440
;   FUN_005532f0
;
; *****************************************************************************

section .text

    CALL FUN_005532f0                   ; 005514f0
        ;   XREF to: 005532f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005532f0()
        ;   Label: FUN_005514f0
    MOV EAX,[0x026484b8]                ; 005514f5 | DAT_026484b8
    MOV EDX,dword ptr [ESP + 0x4]       ; 005514fa
    MOV dword ptr [EAX*0x4 + 0x2648470],EDX ; 005514fe
    MOV EDX,dword ptr [ESP + 0x8]       ; 00551505
    MOV dword ptr [EAX*0x4 + 0x2648478],EDX ; 00551509
    MOV EDX,dword ptr [ESP + 0xc]       ; 00551510
    MOV dword ptr [EAX*0x4 + 0x2648480],EDX ; 00551514
    MOV EDX,dword ptr [ESP + 0x10]      ; 0055151b
    MOV dword ptr [EAX*0x4 + 0x2648488],EDX ; 0055151f
    MOV EDX,dword ptr [ESP + 0x14]      ; 00551526
    MOV dword ptr [EAX*0x4 + 0x2648490],EDX ; 0055152a
    MOV EDX,dword ptr [ESP + 0x18]      ; 00551531
    MOV dword ptr [EAX*0x4 + 0x2648498],EDX ; 00551535
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0055153c
    MOV dword ptr [EAX*0x4 + 0x26484a0],EDX ; 00551540
    MOV EDX,dword ptr [ESP + 0x20]      ; 00551547
    MOV dword ptr [EAX*0x4 + 0x26484a8],EDX ; 0055154b
    MOV EDX,dword ptr [ESP + 0x24]      ; 00551552
    MOV dword ptr [EAX*0x4 + 0x26484b0],EDX ; 00551556
    OR byte ptr [0x02649027],0x20       ; 0055155d | DAT_02649027
    JMP 0x00551440                      ; 00551564
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)

