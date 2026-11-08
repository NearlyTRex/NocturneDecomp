; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00573950(undefined4 param_1,undefined4 param_2)
;
;
; XREF[8]:
;   FUN_0042f8e0 at 0042fa85
;   FUN_004a1d00 at 004a3a55
;   FUN_00500310 at 00500ce8
;   FUN_00500d20 at 00500e00
;   FUN_00501a70 at 00502448
;   FUN_00502480 at 00502560
;   FUN_005057c0 at 00505859
;   FUN_0057ce10 at 0057cef3
;
; Called Functions:
;   FUN_0056fa10
;   FUN_00573e70
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00573950
        ;   Label: FUN_00573950
    MOV EDX,dword ptr [ESP + 0x8]       ; 00573952
    PUSH EDX                            ; 00573956
    CALL FUN_0056fa10                   ; 00573957
        ;   XREF to: 0056fa10 (UNCONDITIONAL_CALL)  ; undefined FUN_0056fa10()
    ADD ESP,0x8                         ; 0057395c
    TEST EAX,EAX                        ; 0057395f
    JNZ 0x00573964                      ; 00573961
        ;   XREF to: 00573964 (CONDITIONAL_JUMP)  ; LAB_00573964
    RET                                 ; 00573963
    MOV EDX,dword ptr [ESP + 0x8]       ; 00573964
        ;   Label: LAB_00573964
    MOV dword ptr [EAX + 0x38],EDX      ; 00573968
    OR byte ptr [EAX + 0x118],0x8       ; 0057396b
    CALL FUN_00573e70                   ; 00573972
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00573e70()
    MOV EAX,0x1                         ; 00573977
    RET                                 ; 0057397c

