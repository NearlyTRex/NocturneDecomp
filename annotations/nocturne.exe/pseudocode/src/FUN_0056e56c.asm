; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0056e56c(int param_1)
;
;
; XREF[2]:
;   FUN_0056720c at 0056721f
;   FUN_0056e608 at 0056e61d
;
; Referenced Globals:
;   undefined4 DAT_005c20cc
;
; Called Functions:
;   crt_unknown.c_FUN_00565c50
;   FUN_005713a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056e56c
        ;   Label: FUN_0056e56c
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056e56d
    TEST EBX,EBX                        ; 0056e571
    JNZ 0x0056e59c                      ; 0056e573
        ;   XREF to: 0056e59c (CONDITIONAL_JUMP)  ; LAB_0056e59c
    MOV EDX,dword ptr [0x005c20cc]      ; 0056e575 | DAT_005c20cc
    PUSH EDX                            ; 0056e57b
    PUSH 0x1                            ; 0056e57c
    CALL crt_unknown.c_FUN_00565c50     ; 0056e57e
        ;   XREF to: 00565c50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00565c50()
    ADD ESP,0x8                         ; 0056e583
    MOV EBX,EAX                         ; 0056e586
    TEST EAX,EAX                        ; 0056e588
    JZ 0x0056e59c                       ; 0056e58a
        ;   XREF to: 0056e59c (CONDITIONAL_JUMP)  ; LAB_0056e59c
    MOV EDX,dword ptr [0x005c20cc]      ; 0056e58c | DAT_005c20cc
    MOV byte ptr [EAX + 0x52],0x1       ; 0056e592
    MOV dword ptr [EAX + 0xf0],EDX      ; 0056e596
    PUSH EBX                            ; 0056e59c
        ;   Label: LAB_0056e59c
    CALL FUN_005713a0                   ; 0056e59d
        ;   XREF to: 005713a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005713a0()
    ADD ESP,0x4                         ; 0056e5a2
    MOV EAX,EBX                         ; 0056e5a5
    POP EBX                             ; 0056e5a7
    RET                                 ; 0056e5a8

