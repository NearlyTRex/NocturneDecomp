; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0059bdf0(int param_1,int param_2)
;
;
; XREF[10]:
;   FUN_00409f20 at 0040a2c5
;   FUN_00449a50 at 00449d92
;   FUN_0049e1a0 at 0049e6d4
;   FUN_004e8630 at 004e8e36
;   FUN_00500310 at 00500773
;   FUN_00501a70 at 00501ed3
;   FUN_00540080 at 00540759
;   FUN_00561760 at 00561c85
;   FUN_00598420 at 00598c6b
;   FUN_005a3870 at 005a3d5b
;
; Called Functions:
;   FUN_0049dea0
;
; *****************************************************************************

section .text

    XOR EAX,EAX                         ; 0059b8c0
        ;   Label: LAB_0059b8c0
    RET                                 ; 0059b8c2
    MOV EAX,dword ptr [ESP + 0x4]       ; 0059bdf0
        ;   Label: FUN_0059bdf0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0059bdf4
    TEST EDX,EDX                        ; 0059bdf8
    JZ 0x0059b8c0                       ; 0059bdfa
        ;   XREF to: 0059b8c0 (CONDITIONAL_JUMP)  ; LAB_0059b8c0
    CMP dword ptr [EAX + 0x174],0x7     ; 0059be00
    JNZ 0x0059b8c0                      ; 0059be07
        ;   XREF to: 0059b8c0 (CONDITIONAL_JUMP)  ; LAB_0059b8c0
    CMP byte ptr [EAX + 0x308],0x0      ; 0059be0d
    JNZ 0x0059be1c                      ; 0059be14
        ;   XREF to: 0059be1c (CONDITIONAL_JUMP)  ; LAB_0059be1c
    MOV EAX,0x1                         ; 0059be16
    RET                                 ; 0059be1b
    PUSH 0x0                            ; 0059be1c
        ;   Label: LAB_0059be1c
    PUSH EDX                            ; 0059be1e
    ADD EAX,0x308                       ; 0059be1f
    PUSH EAX                            ; 0059be24
    CALL FUN_0049dea0                   ; 0059be25
        ;   XREF to: 0049dea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0049dea0()
    ADD ESP,0xc                         ; 0059be2a
    RET                                 ; 0059be2d

