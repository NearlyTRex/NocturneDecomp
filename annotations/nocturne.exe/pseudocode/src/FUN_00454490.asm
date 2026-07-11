; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00454490(int param_1)
;
;
; XREF[5]:
;   FUN_0040eb70 at 0040eb86
;   FUN_0041e300 at 0041e314
;   FUN_004a8a10 at 004a8a24
;   FUN_004f5d90 at 004f5da9
;   FUN_00553d90 at 00553da4
;
; Called Functions:
;   FUN_004544b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00454490
        ;   Label: FUN_00454490
    MOV EBX,dword ptr [ESP + 0x8]       ; 00454491
    MOV byte ptr [EBX + 0x78],0x0       ; 00454495
    PUSH EBX                            ; 00454499
    MOV dword ptr [EBX + 0x178],0x0     ; 0045449a
    CALL FUN_004544b0                   ; 004544a4
        ;   XREF to: 004544b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004544b0()
    ADD ESP,0x4                         ; 004544a9
    MOV EAX,EBX                         ; 004544ac
    POP EBX                             ; 004544ae
    RET                                 ; 004544af

