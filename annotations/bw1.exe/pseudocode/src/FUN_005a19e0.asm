; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005a19e0(int *param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[3]:
;   FUN_004d6420 at 004d6748
;   FUN_004d6990 at 004d6c72
;   FUN_005a17f0 at 005a1819
;
; Called Functions:
;   FUN_005c157c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a19e0
        ;   Label: FUN_005a19e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a19e1
    PUSH EBX                            ; 005a19e5
    MOV EAX,dword ptr [EBX]             ; 005a19e6
    CALL dword ptr [EAX + 0x18]         ; 005a19e8
    ADD ESP,0x4                         ; 005a19eb
    MOV EDX,dword ptr [ESP + 0x10]      ; 005a19ee
    PUSH EDX                            ; 005a19f2
    MOV ECX,dword ptr [ESP + 0x10]      ; 005a19f3
    PUSH ECX                            ; 005a19f7
    CALL FUN_005c157c                   ; 005a19f8
        ;   XREF to: 005c157c (UNCONDITIONAL_CALL)  ; undefined FUN_005c157c()
    ADD ESP,0x8                         ; 005a19fd
    MOV dword ptr [EBX + 0x4],EAX       ; 005a1a00
    TEST EAX,EAX                        ; 005a1a03
    JZ 0x005a1a0e                       ; 005a1a05
        ;   XREF to: 005a1a0e (CONDITIONAL_JUMP)  ; LAB_005a1a0e
    MOV EAX,0x1                         ; 005a1a07
    POP EBX                             ; 005a1a0c
    RET                                 ; 005a1a0d
    PUSH EBX                            ; 005a1a0e
        ;   Label: LAB_005a1a0e
    MOV EAX,dword ptr [EBX]             ; 005a1a0f
    CALL dword ptr [EAX + 0x18]         ; 005a1a11
    ADD ESP,0x4                         ; 005a1a14
    XOR EAX,EAX                         ; 005a1a17
    POP EBX                             ; 005a1a19
    RET                                 ; 005a1a1a

