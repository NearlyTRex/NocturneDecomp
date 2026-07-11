; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c1da0(int param_1)
;
;
; XREF[1]:
;   FUN_004a3a90 at 004a3aa2
;
; Referenced Globals:
;   undefined4 DAT_01cae0e8
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 004c1da0
        ;   Label: FUN_004c1da0
    MOV EDX,dword ptr [0x01cae0e8]      ; 004c1da4 | DAT_01cae0e8
    MOV EAX,dword ptr [ECX + 0x4]       ; 004c1daa
    CMP EAX,dword ptr [EDX*0x4 + 0x1cae0d8] ; 004c1dad
    JZ 0x004c1db7                       ; 004c1db4
        ;   XREF to: 004c1db7 (CONDITIONAL_JUMP)  ; LAB_004c1db7
    RET                                 ; 004c1db6
    MOV dword ptr [ECX + 0x340],0x40a00000 ; 004c1db7
        ;   Label: LAB_004c1db7
    RET                                 ; 004c1dc1

