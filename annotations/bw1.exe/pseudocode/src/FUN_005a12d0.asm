; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_005a12d0(int param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a12d0
        ;   Label: FUN_005a12d0
    CMP dword ptr [EAX + 0x4],0x0       ; 005a12d4
    JZ 0x005a12e8                       ; 005a12d8
        ;   XREF to: 005a12e8 (CONDITIONAL_JUMP)  ; LAB_005a12e8
    MOV ECX,dword ptr [EAX + 0x8]       ; 005a12da
    CMP ECX,dword ptr [EAX + 0xc]       ; 005a12dd
    JG 0x005a12ee                       ; 005a12e0
        ;   XREF to: 005a12ee (CONDITIONAL_JUMP)  ; LAB_005a12ee
    MOV EAX,0xffffffff                  ; 005a12e2
    RET                                 ; 005a12e7
    MOV EAX,0xfffffffe                  ; 005a12e8
        ;   Label: LAB_005a12e8
    RET                                 ; 005a12ed
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a12ee
        ;   Label: LAB_005a12ee
    MOV EAX,dword ptr [EAX + 0xc]       ; 005a12f1
    MOV AL,byte ptr [EDX + EAX*0x1]     ; 005a12f4
    AND EAX,0xff                        ; 005a12f7
    RET                                 ; 005a12fc

