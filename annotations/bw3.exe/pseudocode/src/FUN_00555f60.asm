; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00555f60(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[7]:
;   FUN_004179b0 at 004180a0
;   FUN_00419b40 at 0041a1f2
;   FUN_0041f360 at 0041f8a1
;   FUN_004953d0 at 00495416
;   FUN_004a5b10 at 004a5ebf
;   FUN_004c4a60 at 004c4ba4
;   FUN_0056bd40 at 0056bf20
;
; Referenced Globals:
;   undefined4 DAT_02ceb91c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02ceb91c]      ; 00555f60 | DAT_02ceb91c
        ;   Label: FUN_00555f60
    LEA EAX,[EDX*0x4 + 0x0]             ; 00555f66
    SUB EAX,EDX                         ; 00555f6d
    SHL EAX,0x5                         ; 00555f6f
    MOV EDX,dword ptr [ESP + 0x4]       ; 00555f72
    MOV dword ptr [EAX + 0x2ceb970],EDX ; 00555f76
    MOV EDX,dword ptr [ESP + 0x8]       ; 00555f7c
    MOV dword ptr [EAX + 0x2ceb974],EDX ; 00555f80
    MOV EDX,dword ptr [ESP + 0xc]       ; 00555f86
    MOV dword ptr [EAX + 0x2ceb978],EDX ; 00555f8a
    RET                                 ; 00555f90

