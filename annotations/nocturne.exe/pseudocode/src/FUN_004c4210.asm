; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c4210(undefined4 param_1,int param_2)
;
;
; XREF[2]:
;   FUN_0049da10 at 0049ddfe
;   FUN_004d2d00 at 004d3e20
;
; Referenced Globals:
;   undefined4 DAT_005b7630
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0x8],0x0       ; 004c4210
        ;   Label: FUN_004c4210
    JZ 0x004c4223                       ; 004c4215
        ;   XREF to: 004c4223 (CONDITIONAL_JUMP)  ; LAB_004c4223
    MOV EDX,0x1ff                       ; 004c4217
    MOV dword ptr [0x005b7630],EDX      ; 004c421c | DAT_005b7630
    RET                                 ; 004c4222
    MOV EDX,0x7f                        ; 004c4223
        ;   Label: LAB_004c4223
    MOV dword ptr [0x005b7630],EDX      ; 004c4228 | DAT_005b7630
    RET                                 ; 004c422e

