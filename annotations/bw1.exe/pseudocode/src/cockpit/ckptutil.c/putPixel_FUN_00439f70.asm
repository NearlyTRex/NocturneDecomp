; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_putPixel_FUN_00439f70(int x,int y,int color)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
; int              Stack[0xc]:4   color
;
; XREF[2]:
;   cockpit_ckptutil.c_drawLineAAWithBlending_FUN_00439370 at 00439433
;   cockpit_ckptutil.c_drawLineAA_FUN_00439640 at 004396c0
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4f008
;   undefined4 DAT_01c4f00c
;   undefined4 DAT_01c4f010
;   undefined4 DAT_01c4f014
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00439f70
        ;   Label: cockpit_ckptutil.c_putPixel_FUN_00439f70
    MOV ECX,dword ptr [ESP + 0x8]       ; 00439f71
    MOV EDX,dword ptr [ESP + 0xc]       ; 00439f75
    MOV EBX,dword ptr [ESP + 0x10]      ; 00439f79
    CMP ECX,dword ptr [0x01c4f008]      ; 00439f7d | DAT_01c4f008
    JL 0x00439faf                       ; 00439f83
        ;   XREF to: 00439faf (CONDITIONAL_JUMP)  ; LAB_00439faf
    CMP ECX,dword ptr [0x01c4f010]      ; 00439f85 | DAT_01c4f010
    JG 0x00439faf                       ; 00439f8b
        ;   XREF to: 00439faf (CONDITIONAL_JUMP)  ; LAB_00439faf
    CMP EDX,dword ptr [0x01c4f00c]      ; 00439f8d | DAT_01c4f00c
    JL 0x00439faf                       ; 00439f93
        ;   XREF to: 00439faf (CONDITIONAL_JUMP)  ; LAB_00439faf
    CMP EDX,dword ptr [0x01c4f014]      ; 00439f95 | DAT_01c4f014
    JG 0x00439faf                       ; 00439f9b
        ;   XREF to: 00439faf (CONDITIONAL_JUMP)  ; LAB_00439faf
    MOV EAX,[0x0061b4a0]                ; 00439f9d | DAT_0061b4a0
    SHL EDX,0x2                         ; 00439fa2
    CMP EAX,0x10                        ; 00439fa5
    JNC 0x00439fe9                      ; 00439fa8
        ;   XREF to: 00439fe9 (CONDITIONAL_JUMP)  ; LAB_00439fe9
    CMP EAX,0x8                         ; 00439faa
    JZ 0x00439fb1                       ; 00439fad
        ;   XREF to: 00439fb1 (CONDITIONAL_JUMP)  ; LAB_00439fb1
    POP EBX                             ; 00439faf
        ;   Label: LAB_00439faf
    RET                                 ; 00439fb0
    MOV EAX,dword ptr [EDX + 0x1c4354c] ; 00439fb1
        ;   Label: LAB_00439fb1
    MOV byte ptr [ECX + EAX*0x1],BL     ; 00439fb7
    POP EBX                             ; 00439fba
    RET                                 ; 00439fbb
    MOV EAX,dword ptr [EDX + 0x1c4354c] ; 00439fbc
        ;   Label: LAB_00439fbc
    ADD ECX,ECX                         ; 00439fc2
    ADD ECX,EAX                         ; 00439fc4
    MOV AX,word ptr [EBX*0x2 + 0x1c4e7d4] ; 00439fc6
    MOV word ptr [ECX],AX               ; 00439fce
    POP EBX                             ; 00439fd1
    RET                                 ; 00439fd2
    SHL ECX,0x2                         ; 00439fd3
        ;   Label: LAB_00439fd3
    MOV EAX,dword ptr [EDX + 0x1c4354c] ; 00439fd6
    ADD ECX,EAX                         ; 00439fdc
    MOV EAX,dword ptr [EBX*0x4 + 0x1c4e3d4] ; 00439fde
    MOV dword ptr [ECX],EAX             ; 00439fe5
    POP EBX                             ; 00439fe7
    RET                                 ; 00439fe8
    JBE 0x00439fbc                      ; 00439fe9
        ;   XREF to: 00439fbc (CONDITIONAL_JUMP)  ; LAB_00439fbc
        ;   Label: LAB_00439fe9
    CMP EAX,0x20                        ; 00439feb
    JZ 0x00439fd3                       ; 00439fee
        ;   XREF to: 00439fd3 (CONDITIONAL_JUMP)  ; LAB_00439fd3
    POP EBX                             ; 00439ff0
    RET                                 ; 00439ff1

