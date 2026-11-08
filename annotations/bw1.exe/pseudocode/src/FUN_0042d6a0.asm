; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042d6a0(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; Called Functions:
;   FUN_0042c010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042d6a0
        ;   Label: FUN_0042d6a0
    SUB ESP,0x3c                        ; 0042d6a1
    MOV EBX,dword ptr [ESP + 0x44]      ; 0042d6a4
    PUSH EBX                            ; 0042d6a8
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042d6a9
    CALL dword ptr [EAX + 0x10c]        ; 0042d6af
    ADD ESP,0x4                         ; 0042d6b5
    TEST EAX,EAX                        ; 0042d6b8
    JLE 0x0042d6c1                      ; 0042d6ba
        ;   XREF to: 0042d6c1 (CONDITIONAL_JUMP)  ; LAB_0042d6c1
    ADD ESP,0x3c                        ; 0042d6bc
    POP EBX                             ; 0042d6bf
    RET                                 ; 0042d6c0
    MOV EAX,ESP                         ; 0042d6c1
        ;   Label: LAB_0042d6c1
    PUSH EAX                            ; 0042d6c3
    CALL FUN_0042c010                   ; 0042d6c4
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; undefined FUN_0042c010()
    ADD ESP,0x4                         ; 0042d6c9
    MOV EAX,dword ptr [ESP + 0x48]      ; 0042d6cc
    MOV dword ptr [ESP + 0x30],EAX      ; 0042d6d0
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0042d6d4
    MOV dword ptr [ESP + 0x4],EAX       ; 0042d6d8
    MOV EAX,ESP                         ; 0042d6dc
    PUSH EAX                            ; 0042d6de
    MOV EDX,dword ptr [EBX + 0x154]     ; 0042d6df
    PUSH EBX                            ; 0042d6e5
    CALL dword ptr [EDX + 0x108]        ; 0042d6e6
    ADD ESP,0x8                         ; 0042d6ec
    ADD ESP,0x3c                        ; 0042d6ef
    POP EBX                             ; 0042d6f2
    RET                                 ; 0042d6f3

