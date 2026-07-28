; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0056dfc0(void)
;
;
; XREF[1]:
;   crt_stdio.c_CreateFileImpl_FUN_0056b960 at 0056b96b
;
; Referenced Globals:
;   undefined4 DAT_005c1f54
;   undefined4 DAT_005c1f58
;   undefined4 DAT_005c1f90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056dfc0
        ;   Label: FUN_0056dfc0
    MOV ECX,dword ptr [0x005c1f54]      ; 0056dfc1 | DAT_005c1f54
    MOV EAX,[0x005c1f58]                ; 0056dfc7 | DAT_005c1f58
    CMP EAX,dword ptr [0x005c1f90]      ; 0056dfcc | DAT_005c1f90
    JNC 0x0056dfd8                      ; 0056dfd2
        ;   XREF to: 0056dfd8 (CONDITIONAL_JUMP)  ; LAB_0056dfd8
    XOR EAX,EAX                         ; 0056dfd4
    JMP 0x0056e005                      ; 0056dfd6
        ;   XREF to: 0056e005 (UNCONDITIONAL_JUMP)  ; LAB_0056e005
    TEST EAX,EAX                        ; 0056dfd8
        ;   Label: LAB_0056dfd8
    JLE 0x0056e000                      ; 0056dfda
        ;   XREF to: 0056e000 (CONDITIONAL_JUMP)  ; LAB_0056e000
    MOV EBX,dword ptr [0x005c1f58]      ; 0056dfdc | DAT_005c1f58
    MOV EDX,ECX                         ; 0056dfe2
    XOR EAX,EAX                         ; 0056dfe4
    SHL EBX,0x2                         ; 0056dfe6
    CMP dword ptr [EDX + EAX*0x1],0x0   ; 0056dfe9
        ;   Label: LAB_0056dfe9
    JNZ 0x0056dff9                      ; 0056dfed
        ;   XREF to: 0056dff9 (CONDITIONAL_JUMP)  ; LAB_0056dff9
    XOR EAX,EAX                         ; 0056dfef
    MOV dword ptr [0x005c1f54],ECX      ; 0056dff1 | DAT_005c1f54
    POP EBX                             ; 0056dff7
    RET                                 ; 0056dff8
    ADD EAX,0x4                         ; 0056dff9
        ;   Label: LAB_0056dff9
    CMP EAX,EBX                         ; 0056dffc
    JL 0x0056dfe9                       ; 0056dffe
        ;   XREF to: 0056dfe9 (CONDITIONAL_JUMP)  ; LAB_0056dfe9
    MOV EAX,0x1                         ; 0056e000
        ;   Label: LAB_0056e000
    MOV dword ptr [0x005c1f54],ECX      ; 0056e005 | DAT_005c1f54
        ;   Label: LAB_0056e005
    POP EBX                             ; 0056e00b
    RET                                 ; 0056e00c

