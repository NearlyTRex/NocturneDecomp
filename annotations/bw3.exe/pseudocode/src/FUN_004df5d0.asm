; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004df5d0(undefined4 param_1,int param_2)
;
;
; XREF[2]:
;   FUN_004b7f90 at 004b8415
;   FUN_004eae80 at 004ec076
;
; Referenced Globals:
;   undefined4 DAT_005fba2c
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0x8],0x0       ; 004df5d0
        ;   Label: FUN_004df5d0
    JZ 0x004df5e3                       ; 004df5d5
        ;   XREF to: 004df5e3 (CONDITIONAL_JUMP)  ; LAB_004df5e3
    MOV EDX,0x1ff                       ; 004df5d7
    MOV dword ptr [0x005fba2c],EDX      ; 004df5dc | DAT_005fba2c
    RET                                 ; 004df5e2
    MOV EDX,0x7f                        ; 004df5e3
        ;   Label: LAB_004df5e3
    MOV dword ptr [0x005fba2c],EDX      ; 004df5e8 | DAT_005fba2c
    RET                                 ; 004df5ee

