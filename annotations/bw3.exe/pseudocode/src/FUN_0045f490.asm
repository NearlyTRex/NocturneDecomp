; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045f490(int param_1)
;
;
; XREF[1]:
;   FUN_0044aa20 at 0044ab4b
;
; Called Functions:
;   FUN_00495ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045f490
        ;   Label: FUN_0045f490
    MOV ECX,dword ptr [ESP + 0x8]       ; 0045f491
    MOV EDX,dword ptr [ECX + 0x1cc0]    ; 0045f495
    MOV EBX,dword ptr [ECX + 0x1cc4]    ; 0045f49b
    IMUL EDX,EBX                        ; 0045f4a1
    MOV EAX,EDX                         ; 0045f4a4
    SAR EDX,0x1f                        ; 0045f4a6
    SHL EDX,0x3                         ; 0045f4a9
    SBB EAX,EDX                         ; 0045f4ac
    SAR EAX,0x3                         ; 0045f4ae
    PUSH EAX                            ; 0045f4b1
    MOV ECX,dword ptr [ECX + 0x2fa0]    ; 0045f4b2
    XOR EDX,EDX                         ; 0045f4b8
    CALL FUN_00495ec0                   ; 0045f4ba
        ;   XREF to: 00495ec0 (UNCONDITIONAL_CALL)  ; undefined FUN_00495ec0()
    POP EBX                             ; 0045f4bf
    RET                                 ; 0045f4c0

