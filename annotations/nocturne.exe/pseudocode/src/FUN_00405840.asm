; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00405840(void)
;
;
; XREF[2]:
;   FUN_00405870 at 00405877
;   FUN_00405900 at 00405907
;
; Referenced Globals:
;   undefined4 DAT_005acbc4
;   undefined4 DAT_006b0260
;   undefined4 DAT_01c00c70
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x006b0260]      ; 00405840 | DAT_006b0260
        ;   Label: FUN_00405840
    TEST EDX,EDX                        ; 00405846
    JL 0x0040585e                       ; 00405848
        ;   XREF to: 0040585e (CONDITIONAL_JUMP)  ; LAB_0040585e
    MOV ECX,dword ptr [EDX*0x4 + 0x5acbc4] ; 0040584a | DAT_005acbc4
    MOV dword ptr [0x01c00c70],ECX      ; 00405851 | DAT_01c00c70
    MOV dword ptr [0x006b0260],EDX      ; 00405857 | DAT_006b0260
    RET                                 ; 0040585d
    MOV ECX,EDX                         ; 0040585e
        ;   Label: LAB_0040585e
    NEG ECX                             ; 00405860
    MOV dword ptr [0x01c00c70],ECX      ; 00405862 | DAT_01c00c70
    MOV dword ptr [0x006b0260],EDX      ; 00405868 | DAT_006b0260
    RET                                 ; 0040586e

