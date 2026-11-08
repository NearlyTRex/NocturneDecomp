; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00425a00(int param_1)
;
; Local Variables:
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[2]:
;   FUN_00488940 at 00488961
;   FUN_005108d0 at 005108f1
;
; Called Functions:
;   FUN_004089d0
;   FUN_00408a10
;   FUN_0041a840
;   FUN_00424bd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00425a00
        ;   Label: FUN_00425a00
    SUB ESP,0x30                        ; 00425a01
    MOV EBX,dword ptr [ESP + 0x38]      ; 00425a04
    CMP dword ptr [EBX + 0x2568],0x0    ; 00425a08
    JNZ 0x00425a16                      ; 00425a0f
        ;   XREF to: 00425a16 (CONDITIONAL_JUMP)  ; LAB_00425a16
    ADD ESP,0x30                        ; 00425a11
    POP EBX                             ; 00425a14
    RET                                 ; 00425a15
    PUSH EDI                            ; 00425a16
        ;   Label: LAB_00425a16
    PUSH ESI                            ; 00425a17
    PUSH EBX                            ; 00425a18
    CALL FUN_004089d0                   ; 00425a19
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004089d0()
    ADD ESP,0x4                         ; 00425a1e
    PUSH 0x0                            ; 00425a21
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00425a23
    PUSH EBX                            ; 00425a29
    LEA ESI,[ESP + 0x10]                ; 00425a2a
    LEA EDI,[ESP + 0x28]                ; 00425a2e
    CALL dword ptr [EAX + 0x24]         ; 00425a32
    MOV ECX,0x6                         ; 00425a35
    ADD ESP,0x4                         ; 00425a3a
    LEA EAX,[ESP + 0x24]                ; 00425a3d
    LEA ESI,[ESP + 0xc]                 ; 00425a41
    PUSH EAX                            ; 00425a45
    MOVSD.REP ES:EDI,ESI                ; 00425a46
    CALL FUN_0041a840                   ; 00425a48
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a840()
    ADD ESP,0x8                         ; 00425a4d
    TEST EAX,EAX                        ; 00425a50
    JZ 0x00425a5d                       ; 00425a52
        ;   XREF to: 00425a5d (CONDITIONAL_JUMP)  ; LAB_00425a5d
    PUSH EBX                            ; 00425a54
    CALL FUN_00424bd0                   ; 00425a55
        ;   XREF to: 00424bd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00424bd0()
    ADD ESP,0x4                         ; 00425a5a
    PUSH EBX                            ; 00425a5d
        ;   Label: LAB_00425a5d
    CALL FUN_00408a10                   ; 00425a5e
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a10()
    ADD ESP,0x4                         ; 00425a63
    POP ESI                             ; 00425a66
    POP EDI                             ; 00425a67
    ADD ESP,0x30                        ; 00425a68
    POP EBX                             ; 00425a6b
    RET                                 ; 00425a6c

