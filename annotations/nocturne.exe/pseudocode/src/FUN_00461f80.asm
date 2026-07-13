; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00461f80(int param_1,int param_2)
;
;
; XREF[6]:
;   FUN_00482950 at 004829a2
;   FUN_004838c0 at 00483924
;   FUN_004896d0 at 00489731
;   FUN_00489990 at 004899e6
;   FUN_00489d00 at 00489d56
;   FUN_00555020 at 005551cc
;
; Referenced Globals:
;   undefined4 DAT_01bd2fa0
;   undefined4 DAT_01bd4260
;
; Called Functions:
;   FUN_004f99d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00461f80
        ;   Label: FUN_00461f80
    PUSH ESI                            ; 00461f81
    MOV EBX,dword ptr [ESP + 0x10]      ; 00461f82
    TEST byte ptr [EBX + 0x13],0x80     ; 00461f86
    JNZ 0x00461fc1                      ; 00461f8a
        ;   XREF to: 00461fc1 (CONDITIONAL_JUMP)  ; LAB_00461fc1
    MOV EAX,dword ptr [ESP + 0xc]       ; 00461f8c
    CMP dword ptr [EAX + 0x4],0x0       ; 00461f90
    JZ 0x00461fc6                       ; 00461f94
        ;   XREF to: 00461fc6 (CONDITIONAL_JUMP)  ; LAB_00461fc6
    MOV ECX,dword ptr [ESP + 0xc]       ; 00461f96
        ;   Label: LAB_00461f96
    MOV EAX,dword ptr [EBX + 0x10]      ; 00461f9a
    MOV EDX,dword ptr [EBX + 0x14]      ; 00461f9d
    SAR EAX,0x10                        ; 00461fa0
    SAR EDX,0x10                        ; 00461fa3
    MOV ESI,dword ptr [ECX + 0x4]       ; 00461fa6
    SHL EAX,0x2                         ; 00461fa9
    SHL EDX,0x2                         ; 00461fac
    TEST ESI,ESI                        ; 00461faf
    JNZ 0x00461fd3                      ; 00461fb1
        ;   XREF to: 00461fd3 (CONDITIONAL_JUMP)  ; LAB_00461fd3
    MOV EDX,dword ptr [EDX + 0x1bd4260] ; 00461fb3 | DAT_01bd4260
    MOV EAX,dword ptr [EDX + EAX*0x1]   ; 00461fb9
    CMP EAX,dword ptr [EBX + 0x8]       ; 00461fbc
    JLE 0x00461fe6                      ; 00461fbf
        ;   XREF to: 00461fe6 (CONDITIONAL_JUMP)  ; LAB_00461fe6
    XOR EAX,EAX                         ; 00461fc1
        ;   Label: LAB_00461fc1
    POP ESI                             ; 00461fc3
    POP EBX                             ; 00461fc4
    RET                                 ; 00461fc5
    PUSH 0x1                            ; 00461fc6
        ;   Label: LAB_00461fc6
    PUSH EBX                            ; 00461fc8
    CALL FUN_004f99d0                   ; 00461fc9
        ;   XREF to: 004f99d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f99d0()
    ADD ESP,0x8                         ; 00461fce
    JMP 0x00461f96                      ; 00461fd1
        ;   XREF to: 00461f96 (UNCONDITIONAL_JUMP)  ; LAB_00461f96
    MOV EDX,dword ptr [EDX + 0x1bd2fa0] ; 00461fd3 | DAT_01bd2fa0
        ;   Label: LAB_00461fd3
    MOV EAX,dword ptr [EDX + EAX*0x1]   ; 00461fd9
    CMP EAX,dword ptr [EBX + 0x8]       ; 00461fdc
    JLE 0x00461fe6                      ; 00461fdf
        ;   XREF to: 00461fe6 (CONDITIONAL_JUMP)  ; LAB_00461fe6
    XOR EAX,EAX                         ; 00461fe1
    POP ESI                             ; 00461fe3
    POP EBX                             ; 00461fe4
    RET                                 ; 00461fe5
    MOV EAX,0x1                         ; 00461fe6
        ;   Label: LAB_00461fe6
    POP ESI                             ; 00461feb
    POP EBX                             ; 00461fec
    RET                                 ; 00461fed

