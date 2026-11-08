; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049d500(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)
;
;
; XREF[3]:
;   FUN_00486a80 at 00486c65
;   FUN_004964c0 at 004964ee
;   FUN_004e0670 at 004e0b2e
;
; Referenced Globals:
;   undefined4 DAT_01c913d0
;   undefined4 DAT_01c91410
;
; Called Functions:
;   FUN_0040cfc0
;   FUN_00550da0
;   FUN_00550ea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049d500
        ;   Label: FUN_0049d500
    PUSH EDI                            ; 0049d501
    PUSH EBP                            ; 0049d502
    MOV EAX,[0x01c913d0]                ; 0049d503 | DAT_01c913d0
    LEA EBX,[EAX*0x4 + 0x0]             ; 0049d508
    ADD EBX,EAX                         ; 0049d50f
    SHL EBX,0x3                         ; 0049d511
    ADD EBX,EAX                         ; 0049d514
    SHL EBX,0x2                         ; 0049d516
    LEA EDX,[EAX + 0x1]                 ; 0049d519
    ADD EBX,0x1c913d4                   ; 0049d51c
    MOV dword ptr [0x01c913d0],EDX      ; 0049d522 | DAT_01c913d0
    CMP EDX,0x40                        ; 0049d528
    JL 0x0049d537                       ; 0049d52b
        ;   XREF to: 0049d537 (CONDITIONAL_JUMP)  ; LAB_0049d537
    PUSH ESI                            ; 0049d52d
    XOR ESI,ESI                         ; 0049d52e
    MOV dword ptr [0x01c913d0],ESI      ; 0049d530 | DAT_01c913d0
    POP ESI                             ; 0049d536
    MOV EDI,dword ptr [ESP + 0x18]      ; 0049d537
        ;   Label: LAB_0049d537
    PUSH EDI                            ; 0049d53b
    MOV EBP,dword ptr [ESP + 0x18]      ; 0049d53c
    PUSH EBP                            ; 0049d540
    MOV EAX,dword ptr [EBX + 0x3c]      ; 0049d541 | DAT_01c91410
    PUSH EBX                            ; 0049d544
    CALL dword ptr [EAX]                ; 0049d545
    ADD ESP,0xc                         ; 0049d547
    PUSH 0xffff                         ; 0049d54a
    PUSH 0xc000                         ; 0049d54f
    CALL FUN_0040cfc0                   ; 0049d554
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cfc0()
    ADD ESP,0x8                         ; 0049d559
    MOV dword ptr [EBX + 0x40],EAX      ; 0049d55c
    CMP dword ptr [ESP + 0x1c],0x0      ; 0049d55f
    JNZ 0x0049d5a0                      ; 0049d564
        ;   XREF to: 0049d5a0 (CONDITIONAL_JUMP)  ; LAB_0049d5a0
    MOV dword ptr [EBX + 0x44],0x2000   ; 0049d566
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0049d56d
        ;   Label: LAB_0049d56d
    PUSH EBX                            ; 0049d571
    MOV dword ptr [EBX + 0x4c],EAX      ; 0049d572
    MOV EAX,dword ptr [ESP + 0x24]      ; 0049d575
    MOV dword ptr [EBX + 0x48],0x0      ; 0049d579
    PUSH EAX                            ; 0049d580
    MOV dword ptr [EBX + 0x60],EAX      ; 0049d581
    CALL FUN_00550da0                   ; 0049d584
        ;   XREF to: 00550da0 (UNCONDITIONAL_CALL)  ; undefined FUN_00550da0()
    ADD ESP,0x8                         ; 0049d589
    LEA EAX,[EBX + 0xc]                 ; 0049d58c
    PUSH EAX                            ; 0049d58f
    MOV ECX,dword ptr [EBX + 0x60]      ; 0049d590
    PUSH ECX                            ; 0049d593
    CALL FUN_00550ea0                   ; 0049d594
        ;   XREF to: 00550ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00550ea0()
    ADD ESP,0x8                         ; 0049d599
    POP EBP                             ; 0049d59c
    POP EDI                             ; 0049d59d
    POP EBX                             ; 0049d59e
    RET                                 ; 0049d59f
    MOV dword ptr [EBX + 0x44],0x8000   ; 0049d5a0
        ;   Label: LAB_0049d5a0
    JMP 0x0049d56d                      ; 0049d5a7
        ;   XREF to: 0049d56d (UNCONDITIONAL_JUMP)  ; LAB_0049d56d

