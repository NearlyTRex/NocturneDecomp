; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00489fc0(int param_1,int param_2)
;
;
; XREF[1]:
;   FUN_004c8c90 at 004c8cae
;
; Called Functions:
;   FUN_0042e300
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00489fc0
        ;   Label: FUN_00489fc0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00489fc4
    CMP dword ptr [EAX + 0xcdd0],0x0    ; 00489fc8
    JZ 0x00489fe9                       ; 00489fcf
        ;   XREF to: 00489fe9 (CONDITIONAL_JUMP)  ; LAB_00489fe9
    TEST EDX,EDX                        ; 00489fd1
    JZ 0x00489fdf                       ; 00489fd3
        ;   XREF to: 00489fdf (CONDITIONAL_JUMP)  ; LAB_00489fdf
    MOV dword ptr [EAX + 0x24fc],0x1    ; 00489fd5
    PUSH EDX                            ; 00489fdf
        ;   Label: LAB_00489fdf
    PUSH EAX                            ; 00489fe0
    CALL FUN_0042e300                   ; 00489fe1
        ;   XREF to: 0042e300 (UNCONDITIONAL_CALL)  ; undefined FUN_0042e300()
    ADD ESP,0x8                         ; 00489fe6
    RET                                 ; 00489fe9
        ;   Label: LAB_00489fe9

