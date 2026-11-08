; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004b0f70(int param_1)
;
;
; XREF[1]:
;   FUN_004ad640 at 004ae4fc
;
; Called Functions:
;   FUN_00503620
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b0f70
        ;   Label: FUN_004b0f70
    MOV EDX,dword ptr [EAX + 0x2620]    ; 004b0f74
    MOV dword ptr [EAX + 0x25608],0x0   ; 004b0f7a
    TEST EDX,EDX                        ; 004b0f84
    JNZ 0x004b0f8b                      ; 004b0f86
        ;   XREF to: 004b0f8b (CONDITIONAL_JUMP)  ; LAB_004b0f8b
    XOR EAX,EAX                         ; 004b0f88
    RET                                 ; 004b0f8a
    PUSH 0x1                            ; 004b0f8b
        ;   Label: LAB_004b0f8b
    PUSH 0x5                            ; 004b0f8d
    ADD EAX,0x2b4                       ; 004b0f8f
    PUSH EAX                            ; 004b0f94
    CALL FUN_00503620                   ; 004b0f95
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    MOV EAX,0x1                         ; 004b0f9a
    ADD ESP,0xc                         ; 004b0f9f
    RET                                 ; 004b0fa2

