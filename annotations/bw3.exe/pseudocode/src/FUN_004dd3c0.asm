; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004dd3c0(int param_1)
;
;
; XREF[1]:
;   FUN_004bd910 at 004bd922
;
; Referenced Globals:
;   undefined4 DAT_01d5ba14
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 004dd3c0
        ;   Label: FUN_004dd3c0
    MOV EDX,dword ptr [0x01d5ba14]      ; 004dd3c4 | DAT_01d5ba14
    MOV EAX,dword ptr [ECX + 0x4]       ; 004dd3ca
    CMP EAX,dword ptr [EDX*0x4 + 0x1d5ba04] ; 004dd3cd
    JZ 0x004dd3d7                       ; 004dd3d4
        ;   XREF to: 004dd3d7 (CONDITIONAL_JUMP)  ; LAB_004dd3d7
    RET                                 ; 004dd3d6
    MOV dword ptr [ECX + 0x348],0x40a00000 ; 004dd3d7
        ;   Label: LAB_004dd3d7
    RET                                 ; 004dd3e1

