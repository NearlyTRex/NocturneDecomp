; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00455100(int param_1)
;
;
; XREF[1]:
;   FUN_0054f0d0 at 0054f775
;
; Referenced Globals:
;   undefined4 DAT_01c4480c
;   undefined4 DAT_01c44810
;
; Called Functions:
;   FUN_004ab0c8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00455100
        ;   Label: FUN_00455100
    PUSH ESI                            ; 00455101
    MOV ESI,dword ptr [ESP + 0xc]       ; 00455102
    MOV EDX,dword ptr [ESI + 0x148]     ; 00455106
    XOR EBX,EBX                         ; 0045510c
    TEST EDX,EDX                        ; 0045510e
    JLE 0x0045514d                      ; 00455110
        ;   XREF to: 0045514d (CONDITIONAL_JUMP)  ; LAB_0045514d
    PUSH EDI                            ; 00455112
    XOR EDI,EDI                         ; 00455113
    MOV ECX,dword ptr [ESI + 0x144]     ; 00455115
        ;   Label: LAB_00455115
    IMUL ECX,EBX                        ; 0045511b
    MOV EDX,dword ptr [ESI + 0x144]     ; 0045511e
    SHL EDX,0x2                         ; 00455124
    MOV EAX,dword ptr [ESI + 0x15c]     ; 00455127
    PUSH EDX                            ; 0045512d
    SHL ECX,0x2                         ; 0045512e
    MOV EDX,dword ptr [EDI + 0x1c4480c] ; 00455131 | DAT_01c4480c | DAT_01c44810
    ADD ECX,EAX                         ; 00455137
    INC EBX                             ; 00455139
    CALL FUN_004ab0c8                   ; 0045513a
        ;   XREF to: 004ab0c8 (UNCONDITIONAL_CALL)  ; undefined FUN_004ab0c8()
    MOV ECX,dword ptr [ESI + 0x148]     ; 0045513f
    ADD EDI,0x4                         ; 00455145
    CMP EBX,ECX                         ; 00455148
    JL 0x00455115                       ; 0045514a
        ;   XREF to: 00455115 (CONDITIONAL_JUMP)  ; LAB_00455115
    POP EDI                             ; 0045514c
    POP ESI                             ; 0045514d
        ;   Label: LAB_0045514d
    POP EBX                             ; 0045514e
    RET                                 ; 0045514f

