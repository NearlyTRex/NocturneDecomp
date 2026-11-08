; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c4bcc(int param_1)
;
;
; XREF[1]:
;   FUN_005c2a34 at 005c2a5a
;
; Referenced Globals:
;   void* PTR_FUN_0061f2d0 = 005bce04
;   void* PTR_FUN_0061f2d4 = 005bce04
;   undefined4 DAT_026810b0
;
; Called Functions:
;   FUN_005b86a0
;   FUN_005bce04
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c4bcc
        ;   Label: FUN_005c4bcc
    PUSH ESI                            ; 005c4bcd
    PUSH EDI                            ; 005c4bce
    MOV EDI,dword ptr [ESP + 0x10]      ; 005c4bcf
    CALL dword ptr [0x0061f2d0]         ; 005c4bd3 | PTR_FUN_0061f2d0
    MOV EBX,dword ptr [0x026810b0]      ; 005c4bd9 | DAT_026810b0
    MOV ESI,0x26810b0                   ; 005c4bdf
    TEST EBX,EBX                        ; 005c4be4
    JZ 0x005c4c16                       ; 005c4be6
        ;   XREF to: 005c4c16 (CONDITIONAL_JUMP)  ; LAB_005c4c16
    CMP EDI,dword ptr [EBX + 0x4]       ; 005c4be8
        ;   Label: LAB_005c4be8
    JNZ 0x005c4c0e                      ; 005c4beb
        ;   XREF to: 005c4c0e (CONDITIONAL_JUMP)  ; LAB_005c4c0e
    CMP dword ptr [EBX + 0xc],0x0       ; 005c4bed
    JZ 0x005c4bff                       ; 005c4bf1
        ;   XREF to: 005c4bff (CONDITIONAL_JUMP)  ; LAB_005c4bff
    MOV EDI,dword ptr [EBX + 0x8]       ; 005c4bf3
    PUSH EDI                            ; 005c4bf6
    CALL FUN_005b86a0                   ; 005c4bf7
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    ADD ESP,0x4                         ; 005c4bfc
    MOV EDI,dword ptr [EBX]             ; 005c4bff
        ;   Label: LAB_005c4bff
    PUSH EBX                            ; 005c4c01
    MOV dword ptr [ESI],EDI             ; 005c4c02 | DAT_026810b0
    CALL FUN_005b86a0                   ; 005c4c04
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    ADD ESP,0x4                         ; 005c4c09
    JMP 0x005c4c16                      ; 005c4c0c
        ;   XREF to: 005c4c16 (UNCONDITIONAL_JUMP)  ; LAB_005c4c16
    MOV ESI,EBX                         ; 005c4c0e
        ;   Label: LAB_005c4c0e
    MOV EBX,dword ptr [EBX]             ; 005c4c10
    TEST EBX,EBX                        ; 005c4c12
    JNZ 0x005c4be8                      ; 005c4c14
        ;   XREF to: 005c4be8 (CONDITIONAL_JUMP)  ; LAB_005c4be8
    CALL dword ptr [0x0061f2d4]         ; 005c4c16 | PTR_FUN_0061f2d4
        ;   Label: LAB_005c4c16
    POP EDI                             ; 005c4c1c
    POP ESI                             ; 005c4c1d
    POP EBX                             ; 005c4c1e
    RET                                 ; 005c4c1f

