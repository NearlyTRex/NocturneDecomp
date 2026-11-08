; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00543190(int param_1,int param_2)
;
;
; XREF[1]:
;   FUN_00425bb0 at 00425d96
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00543190
        ;   Label: FUN_00543190
    CMP dword ptr [EDX + 0xc00],0x2     ; 00543194
    JGE 0x005431a0                      ; 0054319b
        ;   XREF to: 005431a0 (CONDITIONAL_JUMP)  ; LAB_005431a0
    XOR EAX,EAX                         ; 0054319d
    RET                                 ; 0054319f
    MOV EAX,dword ptr [ESP + 0x8]       ; 005431a0
        ;   Label: LAB_005431a0
    MOV EAX,dword ptr [EDX + EAX*0x4 + 0x26fc] ; 005431a4
    RET                                 ; 005431ab

