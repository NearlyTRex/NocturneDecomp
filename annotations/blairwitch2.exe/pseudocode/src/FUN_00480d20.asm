; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00480d20(undefined4 *param_1)
;
;
; XREF[5]:
;   FUN_0047c760 at 0047c78c
;   FUN_00481fc0 at 00481fc8
;   FUN_004a3280 at 004a328a
;   FUN_005215c0 at 005215c8
;   FUN_00558c40 at 00558c52
;
; Referenced Globals:
;   undefined1* PTR_FUN_005f5d14 = 00480d40
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00480d20
        ;   Label: FUN_00480d20
    MOV dword ptr [EAX],0x0             ; 00480d24
    MOV dword ptr [EAX + 0x8],0x0       ; 00480d2a
    MOV dword ptr [EAX + 0x4],0x0       ; 00480d31
    MOV dword ptr [EAX + 0xc],0x5f5d14  ; 00480d38 | PTR_FUN_005f5d14
    RET                                 ; 00480d3f

