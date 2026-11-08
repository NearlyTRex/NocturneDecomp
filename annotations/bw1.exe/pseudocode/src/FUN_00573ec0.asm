; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00573ec0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[3]:
;   FUN_00574e00 at 00574e3b
;   FUN_0057b780 at 0057b8da
;   FUN_0057d6a0 at 0057d752
;
; Referenced Globals:
;   undefined4 DAT_02c7fbf8
;   undefined4 DAT_02c7fc08
;   undefined4 DAT_02c7fc18
;   undefined4 DAT_02c7fc88
;   undefined4 DAT_02c807f4
;
; Called Functions:
;   FUN_00573e70
;   FUN_00575d20
;
; *****************************************************************************

section .text

    CALL FUN_00575d20                   ; 00573ec0
        ;   XREF to: 00575d20 (UNCONDITIONAL_CALL)  ; undefined FUN_00575d20()
        ;   Label: FUN_00573ec0
    MOV EAX,[0x02c7fc88]                ; 00573ec5 | DAT_02c7fc88
    MOV EDX,dword ptr [ESP + 0x4]       ; 00573eca
    MOV dword ptr [EAX*0x8 + 0x2c7fbf8],EDX ; 00573ece | DAT_02c7fbf8
    MOV EDX,dword ptr [ESP + 0x8]       ; 00573ed5
    MOV dword ptr [EAX*0x8 + 0x2c7fbfc],EDX ; 00573ed9
    MOV EDX,dword ptr [ESP + 0xc]       ; 00573ee0
    MOV dword ptr [EAX*0x8 + 0x2c7fc08],EDX ; 00573ee4 | DAT_02c7fc08
    MOV EDX,dword ptr [ESP + 0x10]      ; 00573eeb
    MOV dword ptr [EAX*0x8 + 0x2c7fc0c],EDX ; 00573eef
    MOV EDX,dword ptr [ESP + 0x14]      ; 00573ef6
    MOV dword ptr [EAX*0x8 + 0x2c7fc18],EDX ; 00573efa | DAT_02c7fc18
    MOV EDX,dword ptr [ESP + 0x18]      ; 00573f01
    MOV dword ptr [EAX*0x8 + 0x2c7fc1c],EDX ; 00573f05
    OR byte ptr [0x02c807f4],0x2        ; 00573f0c | DAT_02c807f4
    JMP 0x00573e70                      ; 00573f13
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)

