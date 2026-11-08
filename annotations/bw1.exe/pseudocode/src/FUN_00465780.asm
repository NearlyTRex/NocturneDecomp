; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00465780(int param_1)
;
;
; XREF[1]:
;   FUN_0044e8e0 at 0044ea0b
;
; Called Functions:
;   FUN_004ab020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00465780
        ;   Label: FUN_00465780
    MOV ECX,dword ptr [ESP + 0x8]       ; 00465781
    MOV EDX,dword ptr [ECX + 0x1cc0]    ; 00465785
    MOV EBX,dword ptr [ECX + 0x1cc4]    ; 0046578b
    IMUL EDX,EBX                        ; 00465791
    MOV EAX,EDX                         ; 00465794
    SAR EDX,0x1f                        ; 00465796
    SHL EDX,0x3                         ; 00465799
    SBB EAX,EDX                         ; 0046579c
    SAR EAX,0x3                         ; 0046579e
    PUSH EAX                            ; 004657a1
    MOV ECX,dword ptr [ECX + 0x2fa0]    ; 004657a2
    XOR EDX,EDX                         ; 004657a8
    CALL FUN_004ab020                   ; 004657aa
        ;   XREF to: 004ab020 (UNCONDITIONAL_CALL)  ; undefined FUN_004ab020()
    POP EBX                             ; 004657af
    RET                                 ; 004657b0

