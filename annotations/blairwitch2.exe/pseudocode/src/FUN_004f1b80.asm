; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f1b80(int param_1,int param_2)
;
;
; Called Functions:
;   FUN_004089d0
;   FUN_00408a10
;   FUN_0041a840
;   FUN_00547170
;   FUN_005b0fe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f1b80
        ;   Label: FUN_004f1b80
    SUB ESP,0x30                        ; 004f1b81
    MOV EBX,dword ptr [ESP + 0x38]      ; 004f1b84
    CMP dword ptr [EBX + 0x10a64],0x0   ; 004f1b88
    JZ 0x004f1c17                       ; 004f1b8f
        ;   XREF to: 004f1c17 (CONDITIONAL_JUMP)  ; LAB_004f1c17
    CMP dword ptr [ESP + 0x3c],0x0      ; 004f1b95
    JZ 0x004f1ba6                       ; 004f1b9a
        ;   XREF to: 004f1ba6 (CONDITIONAL_JUMP)  ; LAB_004f1ba6
    MOV dword ptr [EBX + 0x2568],0x1    ; 004f1b9c
    PUSH EDI                            ; 004f1ba6
        ;   Label: LAB_004f1ba6
    PUSH ESI                            ; 004f1ba7
    PUSH EBX                            ; 004f1ba8
    CALL FUN_004089d0                   ; 004f1ba9
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004089d0()
    ADD ESP,0x4                         ; 004f1bae
    PUSH 0x0                            ; 004f1bb1
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004f1bb3
    PUSH EBX                            ; 004f1bb9
    LEA ESI,[ESP + 0x10]                ; 004f1bba
    LEA EDI,[ESP + 0x28]                ; 004f1bbe
    CALL dword ptr [EAX + 0x24]         ; 004f1bc2
    MOV ECX,0x6                         ; 004f1bc5
    ADD ESP,0x4                         ; 004f1bca
    LEA EAX,[ESP + 0x24]                ; 004f1bcd
    LEA ESI,[ESP + 0xc]                 ; 004f1bd1
    PUSH EAX                            ; 004f1bd5
    MOVSD.REP ES:EDI,ESI                ; 004f1bd6
    CALL FUN_0041a840                   ; 004f1bd8
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a840()
    ADD ESP,0x8                         ; 004f1bdd
    TEST EAX,EAX                        ; 004f1be0
    JZ 0x004f1c0c                       ; 004f1be2
        ;   XREF to: 004f1c0c (CONDITIONAL_JUMP)  ; LAB_004f1c0c
    PUSH 0x0                            ; 004f1be4
    PUSH 0x1                            ; 004f1be6
    PUSH -0x1                           ; 004f1be8
    PUSH -0x1                           ; 004f1bea
    LEA EAX,[EBX + 0x2b4]               ; 004f1bec
    PUSH EAX                            ; 004f1bf2
    CALL FUN_00547170                   ; 004f1bf3
        ;   XREF to: 00547170 (UNCONDITIONAL_CALL)  ; undefined FUN_00547170()
    ADD ESP,0x14                        ; 004f1bf8
    PUSH 0x0                            ; 004f1bfb
    LEA EAX,[EBX + 0x10bc0]             ; 004f1bfd
    PUSH EAX                            ; 004f1c03
    CALL FUN_005b0fe0                   ; 004f1c04
        ;   XREF to: 005b0fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b0fe0()
    ADD ESP,0x8                         ; 004f1c09
    PUSH EBX                            ; 004f1c0c
        ;   Label: LAB_004f1c0c
    CALL FUN_00408a10                   ; 004f1c0d
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a10()
    ADD ESP,0x4                         ; 004f1c12
    POP ESI                             ; 004f1c15
    POP EDI                             ; 004f1c16
    ADD ESP,0x30                        ; 004f1c17
        ;   Label: LAB_004f1c17
    POP EBX                             ; 004f1c1a
    RET                                 ; 004f1c1b

