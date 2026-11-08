; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00551490(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[3]:
;   FUN_005523d0 at 0055240b
;   FUN_00558d50 at 00558eaa
;   FUN_0055ac50 at 0055ad02
;
; Referenced Globals:
;   undefined4 DAT_02648428
;   undefined4 DAT_02648438
;   undefined4 DAT_02648448
;   undefined4 DAT_026484b8
;   undefined4 DAT_02649024
;
; Called Functions:
;   FUN_00551440
;   FUN_005532f0
;
; *****************************************************************************

section .text

    CALL FUN_005532f0                   ; 00551490
        ;   XREF to: 005532f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005532f0()
        ;   Label: FUN_00551490
    MOV EAX,[0x026484b8]                ; 00551495 | DAT_026484b8
    MOV EDX,dword ptr [ESP + 0x4]       ; 0055149a
    MOV dword ptr [EAX*0x8 + 0x2648428],EDX ; 0055149e | DAT_02648428
    MOV EDX,dword ptr [ESP + 0x8]       ; 005514a5
    MOV dword ptr [EAX*0x8 + 0x264842c],EDX ; 005514a9
    MOV EDX,dword ptr [ESP + 0xc]       ; 005514b0
    MOV dword ptr [EAX*0x8 + 0x2648438],EDX ; 005514b4 | DAT_02648438
    MOV EDX,dword ptr [ESP + 0x10]      ; 005514bb
    MOV dword ptr [EAX*0x8 + 0x264843c],EDX ; 005514bf
    MOV EDX,dword ptr [ESP + 0x14]      ; 005514c6
    MOV dword ptr [EAX*0x8 + 0x2648448],EDX ; 005514ca | DAT_02648448
    MOV EDX,dword ptr [ESP + 0x18]      ; 005514d1
    MOV dword ptr [EAX*0x8 + 0x264844c],EDX ; 005514d5
    OR byte ptr [0x02649024],0x2        ; 005514dc | DAT_02649024
    JMP 0x00551440                      ; 005514e3
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)

