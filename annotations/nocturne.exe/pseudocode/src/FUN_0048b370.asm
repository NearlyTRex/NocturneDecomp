; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048b370(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10)
;
;
; XREF[2]:
;   FUN_0048b440 at 0048b5e7
;   FUN_0048b6f0 at 0048bfd3
;
; Referenced Globals:
;   undefined4 DAT_01c5c700
;
; Called Functions:
;   FUN_004858f0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0048b370
        ;   Label: FUN_0048b370
    MOV EDX,dword ptr [0x01c5c700]      ; 0048b371 | DAT_01c5c700
    CMP EDX,0x40                        ; 0048b377
    JL 0x0048b37e                       ; 0048b37a
        ;   XREF to: 0048b37e (CONDITIONAL_JUMP)  ; LAB_0048b37e
    POP EBP                             ; 0048b37c
    RET                                 ; 0048b37d
    PUSH EDI                            ; 0048b37e
        ;   Label: LAB_0048b37e
    PUSH ESI                            ; 0048b37f
    PUSH EBX                            ; 0048b380
    PUSH 0x0                            ; 0048b381
    MOV ECX,dword ptr [ESP + 0x38]      ; 0048b383
    PUSH dword ptr [ESP + 0x3c]         ; 0048b387
    PUSH ECX                            ; 0048b38b
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0048b38c
    PUSH EBX                            ; 0048b390
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0048b391
    PUSH ESI                            ; 0048b395
    MOV EDI,dword ptr [ESP + 0x3c]      ; 0048b396
    PUSH EDI                            ; 0048b39a
    PUSH dword ptr [ESP + 0x3c]         ; 0048b39b
    MOV EBP,dword ptr [ESP + 0x38]      ; 0048b39f
    PUSH dword ptr [ESP + 0x3c]         ; 0048b3a3
    PUSH EBP                            ; 0048b3a7
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0048b3a8
    PUSH EAX                            ; 0048b3ac
    MOV EAX,EDX                         ; 0048b3ad
    SHL EAX,0x6                         ; 0048b3af
    ADD EAX,0x1c5c704                   ; 0048b3b2
    PUSH EAX                            ; 0048b3b7
    CALL FUN_004858f0                   ; 0048b3b8
        ;   XREF to: 004858f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004858f0()
    MOV EDX,dword ptr [0x01c5c700]      ; 0048b3bd | DAT_01c5c700
    INC EDX                             ; 0048b3c3
    ADD ESP,0x2c                        ; 0048b3c4
    MOV dword ptr [0x01c5c700],EDX      ; 0048b3c7 | DAT_01c5c700
    POP EBX                             ; 0048b3cd
    POP ESI                             ; 0048b3ce
    POP EDI                             ; 0048b3cf
    POP EBP                             ; 0048b3d0
    RET                                 ; 0048b3d1

