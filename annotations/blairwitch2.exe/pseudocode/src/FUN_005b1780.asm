; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b1780(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[7]:
;   FUN_00422930 at 00422afa
;   FUN_00422ec0 at 00422f2d
;   FUN_00429e90 at 00429f0d
;   FUN_00450620 at 004509a9
;   FUN_0056f3a0 at 0056f451
;   FUN_0056f6d0 at 0056fb12
;   FUN_0059e6a0 at 0059e765
;
; Called Functions:
;   FUN_005afdf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b1780
        ;   Label: FUN_005b1780
    PUSH EDI                            ; 005b1781
    PUSH EBP                            ; 005b1782
    MOV EDI,dword ptr [ESP + 0x10]      ; 005b1783
    MOV EBP,dword ptr [ESP + 0x24]      ; 005b1787
    MOV EDX,dword ptr [EDI]             ; 005b178b
    XOR EBX,EBX                         ; 005b178d
    TEST EDX,EDX                        ; 005b178f
    JLE 0x005b17c3                      ; 005b1791
        ;   XREF to: 005b17c3 (CONDITIONAL_JUMP)  ; LAB_005b17c3
    PUSH ESI                            ; 005b1793
    MOV ESI,EDI                         ; 005b1794
    PUSH EBP                            ; 005b1796
        ;   Label: LAB_005b1796
    PUSH dword ptr [ESP + 0x28]         ; 005b1797
    MOV ECX,dword ptr [ESP + 0x24]      ; 005b179b
    PUSH dword ptr [ESP + 0x28]         ; 005b179f
    PUSH ECX                            ; 005b17a3
    MOV EAX,dword ptr [ESP + 0x28]      ; 005b17a4
    PUSH EAX                            ; 005b17a8
    MOV EDX,dword ptr [ESI + 0x194]     ; 005b17a9
    PUSH EDX                            ; 005b17af
    ADD ESI,0x4                         ; 005b17b0
    INC EBX                             ; 005b17b3
    CALL FUN_005afdf0                   ; 005b17b4
        ;   XREF to: 005afdf0 (UNCONDITIONAL_CALL)  ; undefined FUN_005afdf0()
    MOV ECX,dword ptr [EDI]             ; 005b17b9
    ADD ESP,0x18                        ; 005b17bb
    CMP EBX,ECX                         ; 005b17be
    JL 0x005b1796                       ; 005b17c0
        ;   XREF to: 005b1796 (CONDITIONAL_JUMP)  ; LAB_005b1796
    POP ESI                             ; 005b17c2
    POP EBP                             ; 005b17c3
        ;   Label: LAB_005b17c3
    POP EDI                             ; 005b17c4
    POP EBX                             ; 005b17c5
    RET                                 ; 005b17c6

