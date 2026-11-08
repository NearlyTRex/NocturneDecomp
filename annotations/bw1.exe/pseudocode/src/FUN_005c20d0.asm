; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * FUN_005c20d0(char *param_1,char *param_2,int param_3)
;
;
; XREF[9]:
;   FUN_004794b0 at 004794d8
;   FUN_00492ec0 at 00492f2c
;   FUN_004f4370 at 004f4537
;   FUN_0052ebd0 at 0052eccf
;   FUN_005375c0 at 005375cc
;   FUN_0053c940 at 0053caaa
;   FUN_0059efd0 at 0059f004
;   FUN_005c8094 at 005c837b
;   FUN_005cdce0 at 005cdd2e
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c20d0
        ;   Label: FUN_005c20d0
    PUSH ESI                            ; 005c20d1
    MOV EAX,dword ptr [ESP + 0xc]       ; 005c20d2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005c20d6
    MOV EDX,dword ptr [ESP + 0x14]      ; 005c20da
    MOV ESI,EAX                         ; 005c20de
    TEST EDX,EDX                        ; 005c20e0
    JZ 0x005c20f3                       ; 005c20e2
        ;   XREF to: 005c20f3 (CONDITIONAL_JUMP)  ; LAB_005c20f3
    CMP byte ptr [EBX],0x0              ; 005c20e4
        ;   Label: LAB_005c20e4
    JZ 0x005c20f3                       ; 005c20e7
        ;   XREF to: 005c20f3 (CONDITIONAL_JUMP)  ; LAB_005c20f3
    INC EAX                             ; 005c20e9
    MOV CL,byte ptr [EBX]               ; 005c20ea
    INC EBX                             ; 005c20ec
    MOV byte ptr [EAX + -0x1],CL        ; 005c20ed
    DEC EDX                             ; 005c20f0
    JNZ 0x005c20e4                      ; 005c20f1
        ;   XREF to: 005c20e4 (CONDITIONAL_JUMP)  ; LAB_005c20e4
    XOR EBX,EBX                         ; 005c20f3
        ;   Label: LAB_005c20f3
    TEST EDX,EDX                        ; 005c20f5
        ;   Label: LAB_005c20f5
    JZ 0x005c2100                       ; 005c20f7
        ;   XREF to: 005c2100 (CONDITIONAL_JUMP)  ; LAB_005c2100
    INC EAX                             ; 005c20f9
    DEC EDX                             ; 005c20fa
    MOV byte ptr [EAX + -0x1],BL        ; 005c20fb
    JMP 0x005c20f5                      ; 005c20fe
        ;   XREF to: 005c20f5 (UNCONDITIONAL_JUMP)  ; LAB_005c20f5
    MOV EAX,ESI                         ; 005c2100
        ;   Label: LAB_005c2100
    POP ESI                             ; 005c2102
    POP EBX                             ; 005c2103
    RET                                 ; 005c2104

