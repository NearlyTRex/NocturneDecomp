; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ca340(int param_1,int param_2)
;
;
; Called Functions:
;   FUN_004089d0
;   FUN_00408a10
;   FUN_0041a840
;   FUN_0044fcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ca340
        ;   Label: FUN_004ca340
    SUB ESP,0x30                        ; 004ca341
    MOV EBX,dword ptr [ESP + 0x38]      ; 004ca344
    CMP dword ptr [ESP + 0x3c],0x0      ; 004ca348
    JZ 0x004ca3cf                       ; 004ca34d
        ;   XREF to: 004ca3cf (CONDITIONAL_JUMP)  ; LAB_004ca3cf
    CMP dword ptr [EBX + 0x438],0x0     ; 004ca353
    JNZ 0x004ca36f                      ; 004ca35a
        ;   XREF to: 004ca36f (CONDITIONAL_JUMP)  ; LAB_004ca36f
    CMP dword ptr [EBX + 0x43c],0x2     ; 004ca35c
    JNZ 0x004ca3cf                      ; 004ca363
        ;   XREF to: 004ca3cf (CONDITIONAL_JUMP)  ; LAB_004ca3cf
    MOV dword ptr [EBX + 0x438],0x1     ; 004ca365
    PUSH EDI                            ; 004ca36f
        ;   Label: LAB_004ca36f
    PUSH ESI                            ; 004ca370
    PUSH EBX                            ; 004ca371
    CALL FUN_004089d0                   ; 004ca372
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004089d0()
    ADD ESP,0x4                         ; 004ca377
    PUSH 0x0                            ; 004ca37a
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004ca37c
    PUSH EBX                            ; 004ca382
    LEA ESI,[ESP + 0x10]                ; 004ca383
    LEA EDI,[ESP + 0x28]                ; 004ca387
    CALL dword ptr [EAX + 0x24]         ; 004ca38b
    MOV ECX,0x6                         ; 004ca38e
    ADD ESP,0x4                         ; 004ca393
    LEA EAX,[ESP + 0x24]                ; 004ca396
    LEA ESI,[ESP + 0xc]                 ; 004ca39a
    PUSH EAX                            ; 004ca39e
    MOVSD.REP ES:EDI,ESI                ; 004ca39f
    CALL FUN_0041a840                   ; 004ca3a1
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a840()
    ADD ESP,0x8                         ; 004ca3a6
    TEST EAX,EAX                        ; 004ca3a9
    JZ 0x004ca3c4                       ; 004ca3ab
        ;   XREF to: 004ca3c4 (CONDITIONAL_JUMP)  ; LAB_004ca3c4
    PUSH -0x1                           ; 004ca3ad
    LEA EAX,[EBX + 0x2b4]               ; 004ca3af
    PUSH dword ptr [EBX + 0x430]        ; 004ca3b5
    PUSH EAX                            ; 004ca3bb
    CALL FUN_0044fcc0                   ; 004ca3bc
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fcc0()
    ADD ESP,0xc                         ; 004ca3c1
    PUSH EBX                            ; 004ca3c4
        ;   Label: LAB_004ca3c4
    CALL FUN_00408a10                   ; 004ca3c5
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a10()
    ADD ESP,0x4                         ; 004ca3ca
    POP ESI                             ; 004ca3cd
    POP EDI                             ; 004ca3ce
    ADD ESP,0x30                        ; 004ca3cf
        ;   Label: LAB_004ca3cf
    POP EBX                             ; 004ca3d2
    RET                                 ; 004ca3d3

