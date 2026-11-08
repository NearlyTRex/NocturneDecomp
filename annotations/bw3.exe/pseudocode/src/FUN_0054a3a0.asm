; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0054a3a0(int param_1,int param_2)
;
;
; XREF[1]:
;   FUN_0042e4b0 at 0042e696
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0054a3a0
        ;   Label: FUN_0054a3a0
    CMP dword ptr [EDX + 0xc00],0x2     ; 0054a3a4
    JGE 0x0054a3b0                      ; 0054a3ab
        ;   XREF to: 0054a3b0 (CONDITIONAL_JUMP)  ; LAB_0054a3b0
    XOR EAX,EAX                         ; 0054a3ad
    RET                                 ; 0054a3af
    MOV EAX,dword ptr [ESP + 0x8]       ; 0054a3b0
        ;   Label: LAB_0054a3b0
    MOV EAX,dword ptr [EDX + EAX*0x4 + 0x323c] ; 0054a3b4
    RET                                 ; 0054a3bb

