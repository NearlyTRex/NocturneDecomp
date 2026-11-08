; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00565810(int param_1,int param_2)
;
;
; XREF[1]:
;   FUN_0042f4d0 at 0042f6b6
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00565810
        ;   Label: FUN_00565810
    CMP dword ptr [EDX + 0xc00],0x2     ; 00565814
    JGE 0x00565820                      ; 0056581b
        ;   XREF to: 00565820 (CONDITIONAL_JUMP)  ; LAB_00565820
    XOR EAX,EAX                         ; 0056581d
    RET                                 ; 0056581f
    MOV EAX,dword ptr [ESP + 0x8]       ; 00565820
        ;   Label: LAB_00565820
    MOV EAX,dword ptr [EDX + EAX*0x4 + 0x323c] ; 00565824
    RET                                 ; 0056582b

