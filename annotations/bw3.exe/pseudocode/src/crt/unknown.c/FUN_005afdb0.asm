; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005afdb0(short *param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005ae680 at 005ae70c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005afdb0
        ;   Label: crt_unknown.c_FUN_005afdb0
    CMP word ptr [EAX],0x1              ; 005afdb4
    JNZ 0x005afdd6                      ; 005afdb8
        ;   XREF to: 005afdd6 (CONDITIONAL_JUMP)  ; LAB_005afdd6
    CMP dword ptr [EAX + 0x4],0x0       ; 005afdba
    JZ 0x005afdd6                       ; 005afdbe
        ;   XREF to: 005afdd6 (CONDITIONAL_JUMP)  ; LAB_005afdd6
    MOV AX,word ptr [EAX + 0xa]         ; 005afdc0
    CMP AX,0x10                         ; 005afdc4
    JC 0x005afdd0                       ; 005afdc8
        ;   XREF to: 005afdd0 (CONDITIONAL_JUMP)  ; LAB_005afdd0
    CMP AX,0x12                         ; 005afdca
    JBE 0x005afdd6                      ; 005afdce
        ;   XREF to: 005afdd6 (CONDITIONAL_JUMP)  ; LAB_005afdd6
    MOV EAX,0x1                         ; 005afdd0
        ;   Label: LAB_005afdd0
    RET                                 ; 005afdd5
    XOR EAX,EAX                         ; 005afdd6
        ;   Label: LAB_005afdd6
    RET                                 ; 005afdd8

