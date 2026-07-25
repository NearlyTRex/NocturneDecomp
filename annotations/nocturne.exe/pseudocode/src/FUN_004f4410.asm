; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f4410(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0045d2d0 at 0045d301
;
; Called Functions:
;   FUN_004f4310
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f4410
        ;   Label: FUN_004f4410
    PUSH ESI                            ; 004f4411
    PUSH EDI                            ; 004f4412
    PUSH EBP                            ; 004f4413
    SUB ESP,0x8                         ; 004f4414
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004f4417
    MOV EDX,dword ptr [ESP + 0x20]      ; 004f441b
    MOV ECX,dword ptr [ESP + 0x24]      ; 004f441f
    MOV ESI,dword ptr [ESP + 0x28]      ; 004f4423
    CMP dword ptr [EAX + 0x20],0x0      ; 004f4427
    JZ 0x004f44bd                       ; 004f442b
        ;   XREF to: 004f44bd (CONDITIONAL_JUMP)  ; LAB_004f44bd
    CMP dword ptr [EAX + 0x14],0x0      ; 004f4431
    JZ 0x004f44bd                       ; 004f4435
        ;   XREF to: 004f44bd (CONDITIONAL_JUMP)  ; LAB_004f44bd
    CMP EDX,dword ptr [ESP + 0x30]      ; 004f443b
    JG 0x004f44bd                       ; 004f443f
        ;   XREF to: 004f44bd (CONDITIONAL_JUMP)  ; LAB_004f44bd
    CMP ECX,dword ptr [ESP + 0x34]      ; 004f4445
    JG 0x004f44bd                       ; 004f4449
        ;   XREF to: 004f44bd (CONDITIONAL_JUMP)  ; LAB_004f44bd
    MOV EDI,dword ptr [EAX + 0x18]      ; 004f444f
    MOV EBX,dword ptr [EAX + 0x1c]      ; 004f4452
    ADD EDI,EDX                         ; 004f4455
    ADD EBX,ECX                         ; 004f4457
    DEC EDI                             ; 004f4459
    DEC EBX                             ; 004f445a
    CMP EDI,ESI                         ; 004f445b
    JL 0x004f44bd                       ; 004f445d
        ;   XREF to: 004f44bd (CONDITIONAL_JUMP)  ; LAB_004f44bd
    CMP EBX,dword ptr [ESP + 0x2c]      ; 004f445f
    JL 0x004f44bd                       ; 004f4463
        ;   XREF to: 004f44bd (CONDITIONAL_JUMP)  ; LAB_004f44bd
    XOR EBP,EBP                         ; 004f4465
    MOV dword ptr [ESP],EBP             ; 004f4467
    CMP EDX,ESI                         ; 004f446a
    JL 0x004f44c5                       ; 004f446c
        ;   XREF to: 004f44c5 (CONDITIONAL_JUMP)  ; LAB_004f44c5
    XOR ESI,ESI                         ; 004f446e
        ;   Label: LAB_004f446e
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004f4470
    MOV dword ptr [ESP + 0x4],ESI       ; 004f4474
    CMP ECX,EBP                         ; 004f4478
    JGE 0x004f4486                      ; 004f447a
        ;   XREF to: 004f4486 (CONDITIONAL_JUMP)  ; LAB_004f4486
    MOV ESI,EBP                         ; 004f447c
    SUB ESI,ECX                         ; 004f447e
    MOV ECX,EBP                         ; 004f4480
    MOV dword ptr [ESP + 0x4],ESI       ; 004f4482
    MOV ESI,dword ptr [EAX + 0x18]      ; 004f4486
        ;   Label: LAB_004f4486
    MOV EBP,dword ptr [ESP + 0x30]      ; 004f4489
    DEC ESI                             ; 004f448d
    CMP EDI,EBP                         ; 004f448e
    JLE 0x004f4496                      ; 004f4490
        ;   XREF to: 004f4496 (CONDITIONAL_JUMP)  ; LAB_004f4496
    SUB EDI,EBP                         ; 004f4492
    SUB ESI,EDI                         ; 004f4494
    MOV EDI,dword ptr [EAX + 0x1c]      ; 004f4496
        ;   Label: LAB_004f4496
    MOV EBP,dword ptr [ESP + 0x34]      ; 004f4499
    DEC EDI                             ; 004f449d
    CMP EBX,EBP                         ; 004f449e
    JLE 0x004f44a6                      ; 004f44a0
        ;   XREF to: 004f44a6 (CONDITIONAL_JUMP)  ; LAB_004f44a6
    SUB EBX,EBP                         ; 004f44a2
    SUB EDI,EBX                         ; 004f44a4
    PUSH EDI                            ; 004f44a6
        ;   Label: LAB_004f44a6
    PUSH ESI                            ; 004f44a7
    MOV EBX,dword ptr [ESP + 0xc]       ; 004f44a8
    PUSH EBX                            ; 004f44ac
    MOV ESI,dword ptr [ESP + 0xc]       ; 004f44ad
    PUSH ESI                            ; 004f44b1
    PUSH ECX                            ; 004f44b2
    PUSH EDX                            ; 004f44b3
    PUSH EAX                            ; 004f44b4
    CALL FUN_004f4310                   ; 004f44b5
        ;   XREF to: 004f4310 (UNCONDITIONAL_CALL)  ; undefined FUN_004f4310()
    ADD ESP,0x1c                        ; 004f44ba
    ADD ESP,0x8                         ; 004f44bd
        ;   Label: LAB_004f44bd
    POP EBP                             ; 004f44c0
    POP EDI                             ; 004f44c1
    POP ESI                             ; 004f44c2
    POP EBX                             ; 004f44c3
    RET                                 ; 004f44c4
    MOV EBP,ESI                         ; 004f44c5
        ;   Label: LAB_004f44c5
    SUB EBP,EDX                         ; 004f44c7
    MOV EDX,ESI                         ; 004f44c9
    MOV dword ptr [ESP],EBP             ; 004f44cb
    JMP 0x004f446e                      ; 004f44ce
        ;   XREF to: 004f446e (UNCONDITIONAL_JUMP)  ; LAB_004f446e

