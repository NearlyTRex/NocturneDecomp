; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005306b0(undefined4 param_1,int param_2)
;
;
; XREF[8]:
;   FUN_0041d020 at 0041d144
;   FUN_00486cb0 at 00486e43
;   FUN_00495960 at 00495a11
;   FUN_004969a0 at 004969e4
;   FUN_004df1c0 at 004df24e
;   FUN_0053c500 at 0053d023
;   FUN_00589fd0 at 0058a1ed
;   FUN_0059d360 at 0059d3a4
;
; Referenced Globals:
;   undefined4 DAT_01fc961c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01fc961c]      ; 005306b0 | DAT_01fc961c
        ;   Label: FUN_005306b0
    MOV ECX,dword ptr [ESP + 0x8]       ; 005306b6
    CMP dword ptr [ECX + 0xc],0x100     ; 005306ba
    JL 0x005306c8                       ; 005306c1
        ;   XREF to: 005306c8 (CONDITIONAL_JUMP)  ; LAB_005306c8
    CMP EDX,0x64                        ; 005306c3
    JL 0x005306cf                       ; 005306c6
        ;   XREF to: 005306cf (CONDITIONAL_JUMP)  ; LAB_005306cf
    MOV dword ptr [0x01fc961c],EDX      ; 005306c8 | DAT_01fc961c
        ;   Label: LAB_005306c8
    RET                                 ; 005306ce
    INC EDX                             ; 005306cf
        ;   Label: LAB_005306cf
    MOV dword ptr [EDX*0x4 + 0x1fc961c],ECX ; 005306d0 | DAT_01fc961c
    MOV dword ptr [0x01fc961c],EDX      ; 005306d7 | DAT_01fc961c
    RET                                 ; 005306dd

