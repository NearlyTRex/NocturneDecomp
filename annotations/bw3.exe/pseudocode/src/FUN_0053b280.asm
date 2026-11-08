; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053b280(int param_1,int param_2,undefined4 param_3)
;
;
; XREF[3]:
;   FUN_0048c2e0 at 0048f98d
;   FUN_004ba540 at 004baf2c
;   FUN_0053b300 at 0053b336
;
; Called Functions:
;   FUN_0044f680
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053b280
        ;   Label: FUN_0053b280
    MOV EDX,dword ptr [ESP + 0x8]       ; 0053b281
    MOV ECX,dword ptr [ESP + 0xc]       ; 0053b285
    IMUL EAX,ECX,0x1a4                  ; 0053b289
    MOV EBX,dword ptr [ESP + 0x10]      ; 0053b28f
    MOV dword ptr [EDX + EAX*0x1 + 0x14c],EBX ; 0053b293
    CMP ECX,dword ptr [EDX + 0x15aeb8]  ; 0053b29a
    JZ 0x0053b2a4                       ; 0053b2a0
        ;   XREF to: 0053b2a4 (CONDITIONAL_JUMP)  ; LAB_0053b2a4
    POP EBX                             ; 0053b2a2
    RET                                 ; 0053b2a3
    PUSH dword ptr [ESP + 0x10]         ; 0053b2a4
        ;   Label: LAB_0053b2a4
    PUSH 0x2038f4c                      ; 0053b2a8
    CALL FUN_0044f680                   ; 0053b2ad
        ;   XREF to: 0044f680 (UNCONDITIONAL_CALL)  ; undefined FUN_0044f680()
    ADD ESP,0x8                         ; 0053b2b2
    POP EBX                             ; 0053b2b5
    RET                                 ; 0053b2b6

