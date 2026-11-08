; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0045d0e0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fe810
;
; Called Functions:
;   FUN_00408730
;   FUN_0040ee30
;   FUN_00441ca0
;   FUN_005673f0
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045d0e0
        ;   Label: FUN_0045d0e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0045d0e1
    TEST byte ptr [ESP + 0xc],0x4       ; 0045d0e5
    JNZ 0x0045d13d                      ; 0045d0ea
        ;   XREF to: 0045d13d (CONDITIONAL_JUMP)  ; LAB_0045d13d
    PUSH 0x0                            ; 0045d0ec
    ADD EBX,0x35dc                      ; 0045d0ee
    PUSH EBX                            ; 0045d0f4
    CALL FUN_0040ee30                   ; 0045d0f5
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ee30()
    ADD ESP,0x8                         ; 0045d0fa
    PUSH 0x0                            ; 0045d0fd
    SUB EAX,0x93c                       ; 0045d0ff
    PUSH EAX                            ; 0045d104
    CALL FUN_00441ca0                   ; 0045d105
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ca0()
    ADD ESP,0x8                         ; 0045d10a
    PUSH 0x0                            ; 0045d10d
    SUB EAX,0x2b48                      ; 0045d10f
    PUSH EAX                            ; 0045d114
    CALL FUN_005673f0                   ; 0045d115
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005673f0()
    ADD ESP,0x8                         ; 0045d11a
    PUSH 0x1                            ; 0045d11d
    LEA EBX,[EAX + 0xfffffea8]          ; 0045d11f
    PUSH EBX                            ; 0045d125
    CALL FUN_00408730                   ; 0045d126
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 0045d12b
    MOV DL,byte ptr [ESP + 0xc]         ; 0045d12e
    MOV EBX,EAX                         ; 0045d132
    TEST DL,0x2                         ; 0045d134
    JNZ 0x0045d158                      ; 0045d137
        ;   XREF to: 0045d158 (CONDITIONAL_JUMP)  ; LAB_0045d158
    MOV EAX,EBX                         ; 0045d139
    POP EBX                             ; 0045d13b
    RET                                 ; 0045d13c
    PUSH 0x5fe810                       ; 0045d13d | DAT_005fe810
        ;   Label: LAB_0045d13d
    PUSH EBX                            ; 0045d142
    CALL FUN_005c030f                   ; 0045d143
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 0045d148
    PUSH EAX                            ; 0045d14b
    CALL FUN_005c0336                   ; 0045d14c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 0045d151
    MOV EAX,EBX                         ; 0045d154
    POP EBX                             ; 0045d156
    RET                                 ; 0045d157
    PUSH EAX                            ; 0045d158
        ;   Label: LAB_0045d158
    CALL FUN_005c0344                   ; 0045d159
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 0045d15e
    MOV EAX,EBX                         ; 0045d161
    POP EBX                             ; 0045d163
    RET                                 ; 0045d164

