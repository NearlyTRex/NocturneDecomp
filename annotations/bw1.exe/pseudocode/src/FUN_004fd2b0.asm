; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fd2b0(undefined4 param_1,int param_2)
;
;
; XREF[2]:
;   FUN_004cf5e0 at 004cfa61
;   FUN_0050d640 at 0050e938
;
; Referenced Globals:
;   undefined4 DAT_0061b4ac
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0x8],0x0       ; 004fd2b0
        ;   Label: FUN_004fd2b0
    JZ 0x004fd2c3                       ; 004fd2b5
        ;   XREF to: 004fd2c3 (CONDITIONAL_JUMP)  ; LAB_004fd2c3
    MOV EDX,0x1ff                       ; 004fd2b7
    MOV dword ptr [0x0061b4ac],EDX      ; 004fd2bc | DAT_0061b4ac
    RET                                 ; 004fd2c2
    MOV EDX,0x7f                        ; 004fd2c3
        ;   Label: LAB_004fd2c3
    MOV dword ptr [0x0061b4ac],EDX      ; 004fd2c8 | DAT_0061b4ac
    RET                                 ; 004fd2ce

