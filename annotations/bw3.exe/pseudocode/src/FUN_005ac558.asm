; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ac558(void)
;
; Local Variables:
; undefined4       Stack[-0xb4]:4  local_b4
; undefined        Stack[-0xb0]:1  local_b0
; undefined4       Stack[-0x60]:4  local_60
; undefined        Stack[-0x5c]:1  local_5c
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[3]:
;   FUN_005a4f20 at 005a503b
;   FUN_005a55d0 at 005a55d6
;   FUN_005a5674 at 005a5a43
;
; Referenced Globals:
;   void* PTR_GetTimeZoneInformation_005b35d4 = 001b3fa8
;   undefined4 DAT_005da8bc
;   undefined4 DAT_00607c30
;   undefined4 DAT_00607cb0
;   undefined1 DAT_00607cb1
;   undefined4 DAT_00607d31
;   undefined4 DAT_00607d3c
;   undefined4 DAT_00607d40
;   undefined4 DAT_00607d44
;   undefined1 DAT_00607d48
;
; Called Functions:
;   FUN_005a5ec0
;   FUN_005ac7cc
;   FUN_005af1d0
;   GetTimeZoneInformation
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ac45c
        ;   Label: LAB_005ac45c
    PUSH ESI                            ; 005ac45d
    SUB ESP,0xac                        ; 005ac45e
    MOV AH,byte ptr [0x00607d48]        ; 005ac464 | DAT_00607d48
    TEST AH,0x1                         ; 005ac46a
    JZ 0x005ac478                       ; 005ac46d
        ;   XREF to: 005ac478 (CONDITIONAL_JUMP)  ; LAB_005ac478
    TEST AH,0x2                         ; 005ac46f
    JNZ 0x005ac54d                      ; 005ac472
        ;   XREF to: 005ac54d (CONDITIONAL_JUMP)  ; LAB_005ac54d
    MOV DH,byte ptr [0x00607d48]        ; 005ac478 | DAT_00607d48
        ;   Label: LAB_005ac478
    MOV EAX,ESP                         ; 005ac47e
    OR DH,0x2                           ; 005ac480
    PUSH EAX                            ; 005ac483
    MOV byte ptr [0x00607d48],DH        ; 005ac484 | DAT_00607d48
    CALL dword ptr CS:[0x5b35d4]        ; 005ac48a | PTR_GetTimeZoneInformation_005b35d4
    CMP EAX,0x1                         ; 005ac491
    JC 0x005ac54d                       ; 005ac494
        ;   XREF to: 005ac54d (CONDITIONAL_JUMP)  ; LAB_005ac54d
    JBE 0x005ac4d1                      ; 005ac49a
        ;   XREF to: 005ac4d1 (CONDITIONAL_JUMP)  ; LAB_005ac4d1
    CMP EAX,0x2                         ; 005ac49c
    JNZ 0x005ac54d                      ; 005ac49f
        ;   XREF to: 005ac54d (CONDITIONAL_JUMP)  ; LAB_005ac54d
    MOV dword ptr [0x00607d40],0x1      ; 005ac4a5 | DAT_00607d40
    MOV EDX,dword ptr [ESP + 0xa8]      ; 005ac4af
    MOV EAX,EDX                         ; 005ac4b6
    SHL EAX,0x4                         ; 005ac4b8
    SUB EAX,EDX                         ; 005ac4bb
    SHL EAX,0x2                         ; 005ac4bd
    MOV EBX,EAX                         ; 005ac4c0
    MOV [0x00607d44],EAX                ; 005ac4c2 | DAT_00607d44
    NEG EBX                             ; 005ac4c7
    MOV dword ptr [0x00607d44],EBX      ; 005ac4c9 | DAT_00607d44
    JMP 0x005ac4d9                      ; 005ac4cf
        ;   XREF to: 005ac4d9 (UNCONDITIONAL_JUMP)  ; LAB_005ac4d9
    XOR ECX,ECX                         ; 005ac4d1
        ;   Label: LAB_005ac4d1
    MOV dword ptr [0x00607d40],ECX      ; 005ac4d3 | DAT_00607d40
    MOV EDX,dword ptr [ESP + 0x54]      ; 005ac4d9
        ;   Label: LAB_005ac4d9
    MOV ESI,dword ptr [ESP]             ; 005ac4dd
    ADD EDX,ESI                         ; 005ac4e0
    MOV EAX,EDX                         ; 005ac4e2
    SHL EAX,0x4                         ; 005ac4e4
    SUB EAX,EDX                         ; 005ac4e7
    SHL EAX,0x2                         ; 005ac4e9
    PUSH 0x80                           ; 005ac4ec
    MOV [0x00607d3c],EAX                ; 005ac4f1 | DAT_00607d3c
    LEA EAX,[ESP + 0x8]                 ; 005ac4f6
    PUSH EAX                            ; 005ac4fa
    PUSH 0x607c30                       ; 005ac4fb | DAT_00607c30
    CALL FUN_005af1d0                   ; 005ac500
        ;   XREF to: 005af1d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005af1d0()
    ADD ESP,0xc                         ; 005ac505
    CMP EAX,-0x1                        ; 005ac508
    JNZ 0x005ac517                      ; 005ac50b
        ;   XREF to: 005ac517 (CONDITIONAL_JUMP)  ; LAB_005ac517
    XOR BH,BH                           ; 005ac50d
    MOV byte ptr [0x00607c30],BH        ; 005ac50f | DAT_00607c30
    JMP 0x005ac51f                      ; 005ac515
        ;   XREF to: 005ac51f (UNCONDITIONAL_JUMP)  ; LAB_005ac51f
    XOR BL,BL                           ; 005ac517
        ;   Label: LAB_005ac517
    MOV byte ptr [0x00607cb0],BL        ; 005ac519 | DAT_00607cb0
    PUSH 0x80                           ; 005ac51f
        ;   Label: LAB_005ac51f
    LEA EAX,[ESP + 0x5c]                ; 005ac524
    PUSH EAX                            ; 005ac528
    PUSH 0x607cb1                       ; 005ac529 | DAT_00607cb1
    CALL FUN_005af1d0                   ; 005ac52e
        ;   XREF to: 005af1d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005af1d0()
    ADD ESP,0xc                         ; 005ac533
    CMP EAX,-0x1                        ; 005ac536
    JNZ 0x005ac545                      ; 005ac539
        ;   XREF to: 005ac545 (CONDITIONAL_JUMP)  ; LAB_005ac545
    XOR CH,CH                           ; 005ac53b
    MOV byte ptr [0x00607cb1],CH        ; 005ac53d | DAT_00607cb1
    JMP 0x005ac54d                      ; 005ac543
        ;   XREF to: 005ac54d (UNCONDITIONAL_JUMP)  ; LAB_005ac54d
    XOR CL,CL                           ; 005ac545
        ;   Label: LAB_005ac545
    MOV byte ptr [0x00607d31],CL        ; 005ac547 | DAT_00607d31
    ADD ESP,0xac                        ; 005ac54d
        ;   Label: LAB_005ac54d
    POP ESI                             ; 005ac553
    POP EBX                             ; 005ac554
    RET                                 ; 005ac555
    PUSH 0x5da8bc                       ; 005ac558 | DAT_005da8bc
        ;   Label: FUN_005ac558
    CALL FUN_005a5ec0                   ; 005ac55d
        ;   XREF to: 005a5ec0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a5ec0()
    ADD ESP,0x4                         ; 005ac562
    TEST EAX,EAX                        ; 005ac565
    JZ 0x005ac45c                       ; 005ac567
        ;   XREF to: 005ac45c (CONDITIONAL_JUMP)  ; LAB_005ac45c
    PUSH EAX                            ; 005ac56d
    CALL FUN_005ac7cc                   ; 005ac56e
        ;   XREF to: 005ac7cc (UNCONDITIONAL_CALL)  ; undefined FUN_005ac7cc()
    ADD ESP,0x4                         ; 005ac573
    RET                                 ; 005ac576

