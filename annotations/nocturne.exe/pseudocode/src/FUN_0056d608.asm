; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056d608(void)
;
; Local Variables:
; undefined4       Stack[-0xb4]:4  local_b4
; undefined        Stack[-0xb0]:1  local_b0
; undefined4       Stack[-0x60]:4  local_60
; undefined        Stack[-0x5c]:1  local_5c
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[3]:
;   FUN_00565fb0 at 005660cb
;   FUN_00566590 at 00566596
;   FUN_00566634 at 00566a03
;
; Referenced Globals:
;   void* PTR_GetTimeZoneInformation_0057553c = 00175dfe
;   undefined4 DAT_00598be8
;   undefined4 DAT_005c1e08
;   undefined4 DAT_005c1e88
;   undefined1 DAT_005c1e89
;   undefined4 DAT_005c1f09
;   undefined4 DAT_005c1f14
;   undefined4 DAT_005c1f18
;   undefined4 DAT_005c1f1c
;   undefined1 DAT_005c1f20
;
; Called Functions:
;   FUN_00566e10
;   FUN_0056d87c
;   FUN_00570bd0
;   GetTimeZoneInformation
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056d50c
        ;   Label: LAB_0056d50c
    PUSH ESI                            ; 0056d50d
    SUB ESP,0xac                        ; 0056d50e
    MOV AH,byte ptr [0x005c1f20]        ; 0056d514 | DAT_005c1f20
    TEST AH,0x1                         ; 0056d51a
    JZ 0x0056d528                       ; 0056d51d
        ;   XREF to: 0056d528 (CONDITIONAL_JUMP)  ; LAB_0056d528
    TEST AH,0x2                         ; 0056d51f
    JNZ 0x0056d5fd                      ; 0056d522
        ;   XREF to: 0056d5fd (CONDITIONAL_JUMP)  ; LAB_0056d5fd
    MOV DH,byte ptr [0x005c1f20]        ; 0056d528 | DAT_005c1f20
        ;   Label: LAB_0056d528
    MOV EAX,ESP                         ; 0056d52e
    OR DH,0x2                           ; 0056d530
    PUSH EAX                            ; 0056d533
    MOV byte ptr [0x005c1f20],DH        ; 0056d534 | DAT_005c1f20
    CALL dword ptr CS:[0x57553c]        ; 0056d53a | PTR_GetTimeZoneInformation_0057553c
    CMP EAX,0x1                         ; 0056d541
    JC 0x0056d5fd                       ; 0056d544
        ;   XREF to: 0056d5fd (CONDITIONAL_JUMP)  ; LAB_0056d5fd
    JBE 0x0056d581                      ; 0056d54a
        ;   XREF to: 0056d581 (CONDITIONAL_JUMP)  ; LAB_0056d581
    CMP EAX,0x2                         ; 0056d54c
    JNZ 0x0056d5fd                      ; 0056d54f
        ;   XREF to: 0056d5fd (CONDITIONAL_JUMP)  ; LAB_0056d5fd
    MOV dword ptr [0x005c1f18],0x1      ; 0056d555 | DAT_005c1f18
    MOV EDX,dword ptr [ESP + 0xa8]      ; 0056d55f
    MOV EAX,EDX                         ; 0056d566
    SHL EAX,0x4                         ; 0056d568
    SUB EAX,EDX                         ; 0056d56b
    SHL EAX,0x2                         ; 0056d56d
    MOV EBX,EAX                         ; 0056d570
    MOV [0x005c1f1c],EAX                ; 0056d572 | DAT_005c1f1c
    NEG EBX                             ; 0056d577
    MOV dword ptr [0x005c1f1c],EBX      ; 0056d579 | DAT_005c1f1c
    JMP 0x0056d589                      ; 0056d57f
        ;   XREF to: 0056d589 (UNCONDITIONAL_JUMP)  ; LAB_0056d589
    XOR ECX,ECX                         ; 0056d581
        ;   Label: LAB_0056d581
    MOV dword ptr [0x005c1f18],ECX      ; 0056d583 | DAT_005c1f18
    MOV EDX,dword ptr [ESP + 0x54]      ; 0056d589
        ;   Label: LAB_0056d589
    MOV ESI,dword ptr [ESP]             ; 0056d58d
    ADD EDX,ESI                         ; 0056d590
    MOV EAX,EDX                         ; 0056d592
    SHL EAX,0x4                         ; 0056d594
    SUB EAX,EDX                         ; 0056d597
    SHL EAX,0x2                         ; 0056d599
    PUSH 0x80                           ; 0056d59c
    MOV [0x005c1f14],EAX                ; 0056d5a1 | DAT_005c1f14
    LEA EAX,[ESP + 0x8]                 ; 0056d5a6
    PUSH EAX                            ; 0056d5aa
    PUSH 0x5c1e08                       ; 0056d5ab | DAT_005c1e08
    CALL FUN_00570bd0                   ; 0056d5b0
        ;   XREF to: 00570bd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00570bd0()
    ADD ESP,0xc                         ; 0056d5b5
    CMP EAX,-0x1                        ; 0056d5b8
    JNZ 0x0056d5c7                      ; 0056d5bb
        ;   XREF to: 0056d5c7 (CONDITIONAL_JUMP)  ; LAB_0056d5c7
    XOR BH,BH                           ; 0056d5bd
    MOV byte ptr [0x005c1e08],BH        ; 0056d5bf | DAT_005c1e08
    JMP 0x0056d5cf                      ; 0056d5c5
        ;   XREF to: 0056d5cf (UNCONDITIONAL_JUMP)  ; LAB_0056d5cf
    XOR BL,BL                           ; 0056d5c7
        ;   Label: LAB_0056d5c7
    MOV byte ptr [0x005c1e88],BL        ; 0056d5c9 | DAT_005c1e88
    PUSH 0x80                           ; 0056d5cf
        ;   Label: LAB_0056d5cf
    LEA EAX,[ESP + 0x5c]                ; 0056d5d4
    PUSH EAX                            ; 0056d5d8
    PUSH 0x5c1e89                       ; 0056d5d9 | DAT_005c1e89
    CALL FUN_00570bd0                   ; 0056d5de
        ;   XREF to: 00570bd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00570bd0()
    ADD ESP,0xc                         ; 0056d5e3
    CMP EAX,-0x1                        ; 0056d5e6
    JNZ 0x0056d5f5                      ; 0056d5e9
        ;   XREF to: 0056d5f5 (CONDITIONAL_JUMP)  ; LAB_0056d5f5
    XOR CH,CH                           ; 0056d5eb
    MOV byte ptr [0x005c1e89],CH        ; 0056d5ed | DAT_005c1e89
    JMP 0x0056d5fd                      ; 0056d5f3
        ;   XREF to: 0056d5fd (UNCONDITIONAL_JUMP)  ; LAB_0056d5fd
    XOR CL,CL                           ; 0056d5f5
        ;   Label: LAB_0056d5f5
    MOV byte ptr [0x005c1f09],CL        ; 0056d5f7 | DAT_005c1f09
    ADD ESP,0xac                        ; 0056d5fd
        ;   Label: LAB_0056d5fd
    POP ESI                             ; 0056d603
    POP EBX                             ; 0056d604
    RET                                 ; 0056d605
    PUSH 0x598be8                       ; 0056d608 | DAT_00598be8
        ;   Label: FUN_0056d608
    CALL FUN_00566e10                   ; 0056d60d
        ;   XREF to: 00566e10 (UNCONDITIONAL_CALL)  ; undefined FUN_00566e10()
    ADD ESP,0x4                         ; 0056d612
    TEST EAX,EAX                        ; 0056d615
    JZ 0x0056d50c                       ; 0056d617
        ;   XREF to: 0056d50c (CONDITIONAL_JUMP)  ; LAB_0056d50c
    PUSH EAX                            ; 0056d61d
    CALL FUN_0056d87c                   ; 0056d61e
        ;   XREF to: 0056d87c (UNCONDITIONAL_CALL)  ; undefined FUN_0056d87c()
    ADD ESP,0x4                         ; 0056d623
    RET                                 ; 0056d626

