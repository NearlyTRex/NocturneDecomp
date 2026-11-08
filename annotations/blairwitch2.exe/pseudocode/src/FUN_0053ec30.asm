; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0053ec30(int param_1)
;
;
; Referenced Globals:
;   undefined1* switchdataD_0053ec18 = 0053ec3f
;
; Called Functions:
;   FUN_005035c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0053ec30
        ;   Label: FUN_0053ec30
    MOV EDX,dword ptr [EAX + 0x70]      ; 0053ec34
    CMP EDX,0x2                         ; 0053ec37
    JNZ 0x0053ec4e                      ; 0053ec3a
        ;   XREF to: 0053ec4e (CONDITIONAL_JUMP)  ; LAB_0053ec4e
    MOV EAX,EDX                         ; 0053ec3c
    RET                                 ; 0053ec3e
    MOV EAX,0x1                         ; 0053ec3f
        ;   Label: caseD_d
    RET                                 ; 0053ec44
    MOV EAX,0x2                         ; 0053ec45
        ;   Label: caseD_f
    RET                                 ; 0053ec4a
    XOR EAX,EAX                         ; 0053ec4b
        ;   Label: default
    RET                                 ; 0053ec4d
    ADD EAX,0x2b4                       ; 0053ec4e
        ;   Label: LAB_0053ec4e
    PUSH EAX                            ; 0053ec53
    CALL FUN_005035c0                   ; 0053ec54
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0053ec59
    SUB EAX,0xd                         ; 0053ec5c
    ADD ESP,0x4                         ; 0053ec5f
    CMP EAX,0x3                         ; 0053ec62
    JA 0x0053ec4b                       ; 0053ec65
        ;   XREF to: 0053ec4b (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x53ec18]  ; 0053ec67 | caseD_e | caseD_10 | switchdataD_0053ec18
        ;   Label: switchD

