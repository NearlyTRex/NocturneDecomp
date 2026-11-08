; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004d8a50(int param_1,uint param_2)
;
;
; XREF[4]:
;   FUN_004be8d0 at 004beb2c
;   FUN_004d8e70 at 004d9583
;   FUN_004d95c0 at 004d9c6f
;   FUN_00529a70 at 0052ccea
;
; Referenced Globals:
;   undefined4 DAT_005e0730
;   void* PTR_FUN_005e2074 = 004d8a50
;
; Called Functions:
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8a50
        ;   Label: FUN_004d8a50
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d8a51
    MOV EAX,dword ptr [ESP + 0xc]       ; 004d8a55
    TEST AL,0x4                         ; 004d8a59
    JNZ 0x004d8a6f                      ; 004d8a5b
        ;   XREF to: 004d8a6f (CONDITIONAL_JUMP)  ; LAB_004d8a6f
    MOV dword ptr [EBX + 0x200],0x5e2074 ; 004d8a5d | PTR_FUN_005e2074
    TEST AL,0x2                         ; 004d8a67
    JNZ 0x004d8a8a                      ; 004d8a69
        ;   XREF to: 004d8a8a (CONDITIONAL_JUMP)  ; LAB_004d8a8a
    MOV EAX,EBX                         ; 004d8a6b
    POP EBX                             ; 004d8a6d
    RET                                 ; 004d8a6e
    PUSH 0x5e0730                       ; 004d8a6f | DAT_005e0730
        ;   Label: LAB_004d8a6f
    PUSH EBX                            ; 004d8a74
    CALL FUN_005a308f                   ; 004d8a75
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 004d8a7a
    PUSH EAX                            ; 004d8a7d
    CALL FUN_005a30b6                   ; 004d8a7e
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 004d8a83
    MOV EAX,EBX                         ; 004d8a86
    POP EBX                             ; 004d8a88
    RET                                 ; 004d8a89
    PUSH EBX                            ; 004d8a8a
        ;   Label: LAB_004d8a8a
    CALL FUN_005a30c4                   ; 004d8a8b
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 004d8a90
    MOV EAX,EBX                         ; 004d8a93
    POP EBX                             ; 004d8a95
    RET                                 ; 004d8a96

