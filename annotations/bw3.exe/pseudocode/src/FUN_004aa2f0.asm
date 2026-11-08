; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004aa2f0(int param_1,int param_2,int param_3,int param_4)
;
;
; XREF[1]:
;   FUN_004aa200 at 004aa2da
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aa2f0
        ;   Label: FUN_004aa2f0
    PUSH EBP                            ; 004aa2f1
    MOV EAX,dword ptr [ESP + 0xc]       ; 004aa2f2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004aa2f6
    MOV EDX,dword ptr [ESP + 0x14]      ; 004aa2fa
    TEST EBX,EBX                        ; 004aa2fe
    JL 0x004aa331                       ; 004aa300
        ;   XREF to: 004aa331 (CONDITIONAL_JUMP)  ; LAB_004aa331
    TEST EDX,EDX                        ; 004aa302
    JL 0x004aa331                       ; 004aa304
        ;   XREF to: 004aa331 (CONDITIONAL_JUMP)  ; LAB_004aa331
    MOV ECX,dword ptr [EAX + 0x94]      ; 004aa306
    CMP EBX,ECX                         ; 004aa30c
    JGE 0x004aa331                      ; 004aa30e
        ;   XREF to: 004aa331 (CONDITIONAL_JUMP)  ; LAB_004aa331
    CMP EDX,dword ptr [EAX + 0x98]      ; 004aa310
    JGE 0x004aa331                      ; 004aa316
        ;   XREF to: 004aa331 (CONDITIONAL_JUMP)  ; LAB_004aa331
    IMUL EDX,ECX                        ; 004aa318
    MOV ECX,dword ptr [EAX + 0x8c]      ; 004aa31b
    ADD EDX,ECX                         ; 004aa321
    ADD EDX,EBX                         ; 004aa323
    XOR ECX,ECX                         ; 004aa325
    MOV EBP,dword ptr [ESP + 0x18]      ; 004aa327
    MOV CL,byte ptr [EDX]               ; 004aa32b
    CMP ECX,EBP                         ; 004aa32d
    JL 0x004aa334                       ; 004aa32f
        ;   XREF to: 004aa334 (CONDITIONAL_JUMP)  ; LAB_004aa334
    POP EBP                             ; 004aa331
        ;   Label: LAB_004aa331
    POP EBX                             ; 004aa332
    RET                                 ; 004aa333
    MOV BL,byte ptr [ESP + 0x18]        ; 004aa334
        ;   Label: LAB_004aa334
    MOV byte ptr [EDX],BL               ; 004aa338
    MOV dword ptr [EAX + 0x1268],0x1    ; 004aa33a
    POP EBP                             ; 004aa344
    POP EBX                             ; 004aa345
    RET                                 ; 004aa346

