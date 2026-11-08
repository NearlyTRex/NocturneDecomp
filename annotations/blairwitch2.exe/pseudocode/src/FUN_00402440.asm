; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00402440(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[4]:
;   FUN_00402540 at 00402562
;   FUN_00402600 at 0040262b
;   FUN_004026d0 at 004026ff
;   FUN_00467f70 at 00468189
;
; Referenced Globals:
;   undefined4 DAT_0060936c
;   undefined4 DAT_00609370
;   undefined4 DAT_01c35e50
;   undefined4 DAT_01c35e54
;
; Called Functions:
;   FUN_00401ec0
;   FUN_00401f50
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00402440
        ;   Label: FUN_00402440
    PUSH EDI                            ; 00402441
    PUSH EBP                            ; 00402442
    MOV EDX,dword ptr [ESP + 0x10]      ; 00402443
    MOV EAX,dword ptr [ESP + 0x14]      ; 00402447
    MOV ECX,dword ptr [ESP + 0x18]      ; 0040244b
    CMP dword ptr [0x0060936c],0x0      ; 0040244f | DAT_0060936c
    JZ 0x0040247e                       ; 00402456
        ;   XREF to: 0040247e (CONDITIONAL_JUMP)  ; LAB_0040247e
    PUSH EBX                            ; 00402458
    MOV EBX,dword ptr [0x00609370]      ; 00402459 | DAT_00609370
    PUSH EBX                            ; 0040245f
    MOV ESI,dword ptr [0x01c35e54]      ; 00402460 | DAT_01c35e54
    PUSH ESI                            ; 00402466
    MOV EDI,dword ptr [0x01c35e50]      ; 00402467 | DAT_01c35e50
    PUSH EDI                            ; 0040246d
    PUSH ECX                            ; 0040246e
    PUSH EAX                            ; 0040246f
    PUSH EDX                            ; 00402470
    CALL FUN_00401ec0                   ; 00402471
        ;   XREF to: 00401ec0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401ec0()
    ADD ESP,0x18                        ; 00402476
    POP EBX                             ; 00402479
    POP EBP                             ; 0040247a
    POP EDI                             ; 0040247b
    POP ESI                             ; 0040247c
    RET                                 ; 0040247d
    MOV ESI,dword ptr [0x00609370]      ; 0040247e | DAT_00609370
        ;   Label: LAB_0040247e
    PUSH ESI                            ; 00402484
    MOV EDI,dword ptr [0x01c35e54]      ; 00402485 | DAT_01c35e54
    PUSH EDI                            ; 0040248b
    MOV EBP,dword ptr [0x01c35e50]      ; 0040248c | DAT_01c35e50
    PUSH EBP                            ; 00402492
    PUSH ECX                            ; 00402493
    PUSH EAX                            ; 00402494
    PUSH EDX                            ; 00402495
    CALL FUN_00401f50                   ; 00402496
        ;   XREF to: 00401f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00401f50()
    ADD ESP,0x18                        ; 0040249b
    POP EBP                             ; 0040249e
    POP EDI                             ; 0040249f
    POP ESI                             ; 004024a0
    RET                                 ; 004024a1

