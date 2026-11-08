; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c37ec(int param_1)
;
;
; XREF[1]:
;   FUN_005c3750 at 005c3773
;
; Referenced Globals:
;   undefined4 DAT_0061eea0
;
; Called Functions:
;   FUN_005c378c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c37ec
        ;   Label: FUN_005c37ec
    PUSH ESI                            ; 005c37ed
    MOV EAX,dword ptr [ESP + 0xc]       ; 005c37ee
    PUSH EAX                            ; 005c37f2
    MOV ESI,dword ptr [EAX + 0x4]       ; 005c37f3
    MOV EBX,dword ptr [EAX + 0x8]       ; 005c37f6
    CALL FUN_005c378c                   ; 005c37f9
        ;   XREF to: 005c378c (UNCONDITIONAL_CALL)  ; undefined FUN_005c378c()
    ADD ESP,0x4                         ; 005c37fe
    TEST EAX,EAX                        ; 005c3801
    JNZ 0x005c381b                      ; 005c3803
        ;   XREF to: 005c381b (CONDITIONAL_JUMP)  ; LAB_005c381b
    TEST ESI,ESI                        ; 005c3805
    JNZ 0x005c3811                      ; 005c3807
        ;   XREF to: 005c3811 (CONDITIONAL_JUMP)  ; LAB_005c3811
    MOV dword ptr [0x0061eea0],EBX      ; 005c3809 | DAT_0061eea0
    JMP 0x005c3814                      ; 005c380f
        ;   XREF to: 005c3814 (UNCONDITIONAL_JUMP)  ; LAB_005c3814
    MOV dword ptr [ESI + 0x8],EBX       ; 005c3811
        ;   Label: LAB_005c3811
    TEST EBX,EBX                        ; 005c3814
        ;   Label: LAB_005c3814
    JZ 0x005c381b                       ; 005c3816
        ;   XREF to: 005c381b (CONDITIONAL_JUMP)  ; LAB_005c381b
    MOV dword ptr [EBX + 0x4],ESI       ; 005c3818
    POP ESI                             ; 005c381b
        ;   Label: LAB_005c381b
    POP EBX                             ; 005c381c
    RET                                 ; 005c381d

