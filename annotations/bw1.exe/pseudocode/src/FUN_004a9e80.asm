; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004a9e80(int param_1,undefined4 param_2)
;
;
; XREF[3]:
;   FUN_004a1d00 at 004a3fb1
;   FUN_004a70d0 at 004a7694
;   FUN_00544460 at 005475a8
;
; Called Functions:
;   FUN_004a9fa0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004a9e80
        ;   Label: FUN_004a9e80
    PUSH EDX                            ; 004a9e84
    MOV ECX,dword ptr [ESP + 0x8]       ; 004a9e85
    PUSH ECX                            ; 004a9e89
    CALL FUN_004a9fa0                   ; 004a9e8a
        ;   XREF to: 004a9fa0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a9fa0()
    ADD ESP,0x8                         ; 004a9e8f
    TEST EAX,EAX                        ; 004a9e92
    JL 0x004a9ea8                       ; 004a9e94
        ;   XREF to: 004a9ea8 (CONDITIONAL_JUMP)  ; LAB_004a9ea8
    PUSH EBX                            ; 004a9e96
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a9e97
    SHL EAX,0x2                         ; 004a9e9b
    ADD EAX,EBX                         ; 004a9e9e
    MOV EAX,dword ptr [EAX + 0x34c0]    ; 004a9ea0
    POP EBX                             ; 004a9ea6
    RET                                 ; 004a9ea7
    XOR EAX,EAX                         ; 004a9ea8
        ;   Label: LAB_004a9ea8
    RET                                 ; 004a9eaa

