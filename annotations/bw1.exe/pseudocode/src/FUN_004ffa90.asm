; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ffa90(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_00483a20 at 00483a30
;
; Referenced Globals:
;   undefined4 DAT_01c51d50
;   undefined4 DAT_01c51d54
;   undefined4 DAT_01c51d58
;   undefined4 DAT_01d1c220
;   undefined4 DAT_01d1c224
;   undefined4 DAT_01d1c228
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004ffa90
        ;   Label: FUN_004ffa90
    MOV EAX,dword ptr [ESP + 0x8]       ; 004ffa94
    MOV ECX,dword ptr [ESP + 0xc]       ; 004ffa98
    MOV dword ptr [0x01c51d50],EDX      ; 004ffa9c | DAT_01c51d50
    MOV [0x01d1c224],EAX                ; 004ffaa2 | DAT_01d1c224
    MOV [0x01c51d54],EAX                ; 004ffaa7 | DAT_01c51d54
    MOV dword ptr [0x01d1c228],ECX      ; 004ffaac | DAT_01d1c228
    MOV dword ptr [0x01c51d58],ECX      ; 004ffab2 | DAT_01c51d58
    MOV dword ptr [0x01d1c220],EDX      ; 004ffab8 | DAT_01d1c220
    RET                                 ; 004ffabe

