; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_0057d680(int param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0057d680
        ;   Label: FUN_0057d680
    CMP dword ptr [EAX + 0x4],0x0       ; 0057d684
    JZ 0x0057d698                       ; 0057d688
        ;   XREF to: 0057d698 (CONDITIONAL_JUMP)  ; LAB_0057d698
    MOV ECX,dword ptr [EAX + 0x8]       ; 0057d68a
    CMP ECX,dword ptr [EAX + 0xc]       ; 0057d68d
    JG 0x0057d69e                       ; 0057d690
        ;   XREF to: 0057d69e (CONDITIONAL_JUMP)  ; LAB_0057d69e
    MOV EAX,0xffffffff                  ; 0057d692
    RET                                 ; 0057d697
    MOV EAX,0xfffffffe                  ; 0057d698
        ;   Label: LAB_0057d698
    RET                                 ; 0057d69d
    MOV EDX,dword ptr [EAX + 0x4]       ; 0057d69e
        ;   Label: LAB_0057d69e
    MOV EAX,dword ptr [EAX + 0xc]       ; 0057d6a1
    MOV AL,byte ptr [EDX + EAX*0x1]     ; 0057d6a4
    AND EAX,0xff                        ; 0057d6a7
    RET                                 ; 0057d6ac

