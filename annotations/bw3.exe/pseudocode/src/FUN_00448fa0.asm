; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00448fa0(undefined4 param_1,int param_2)
;
;
; XREF[2]:
;   FUN_00448ff0 at 00449137
;   FUN_0045c530 at 0045c555
;
; Referenced Globals:
;   undefined4 DAT_007e2a54
;   undefined4 DAT_00874584
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00448fa0
        ;   Label: FUN_00448fa0
    MOV ECX,dword ptr [ESP + 0x8]       ; 00448fa4
    MOV dword ptr [0x007e2a54],EDX      ; 00448fa8 | DAT_007e2a54
    TEST ECX,ECX                        ; 00448fae
    JZ 0x00448fb9                       ; 00448fb0
        ;   XREF to: 00448fb9 (CONDITIONAL_JUMP)  ; LAB_00448fb9
    MOV dword ptr [0x00874584],EDX      ; 00448fb2 | DAT_00874584
    RET                                 ; 00448fb8
    XOR EDX,EDX                         ; 00448fb9
        ;   Label: LAB_00448fb9
    MOV dword ptr [0x00874584],EDX      ; 00448fbb | DAT_00874584
    RET                                 ; 00448fc1

