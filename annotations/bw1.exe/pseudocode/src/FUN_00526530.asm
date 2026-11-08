; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00526530(undefined4 param_1,int param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0052b450 at 0052b4ed
;
; Called Functions:
;   FUN_00525cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00526530
        ;   Label: FUN_00526530
    PUSH ESI                            ; 00526531
    PUSH EDI                            ; 00526532
    PUSH EBP                            ; 00526533
    SUB ESP,0xc                         ; 00526534
    MOV EBP,dword ptr [ESP + 0x20]      ; 00526537
    MOV EAX,dword ptr [ESP + 0x28]      ; 0052653b
    MOV EDI,dword ptr [EAX + 0x10]      ; 0052653f
    MOV EAX,dword ptr [EAX + 0x14]      ; 00526542
    MOV dword ptr [ESP],EAX             ; 00526545
    TEST EAX,EAX                        ; 00526548
    JLE 0x00526596                      ; 0052654a
        ;   XREF to: 00526596 (CONDITIONAL_JUMP)  ; LAB_00526596
    XOR EAX,EAX                         ; 0052654c
    MOV dword ptr [ESP + 0x8],EAX       ; 0052654e
    MOV EAX,dword ptr [ESP]             ; 00526552
    SHL EAX,0x2                         ; 00526555
    MOV dword ptr [ESP + 0x4],EAX       ; 00526558
    XOR EBX,EBX                         ; 0052655c
        ;   Label: LAB_0052655c
    TEST EDI,EDI                        ; 0052655e
    JLE 0x00526583                      ; 00526560
        ;   XREF to: 00526583 (CONDITIONAL_JUMP)  ; LAB_00526583
    MOV ESI,dword ptr [ESP + 0x8]       ; 00526562
    ADD ESI,dword ptr [ESP + 0x24]      ; 00526566
    PUSH 0x4                            ; 0052656a
        ;   Label: LAB_0052656a
    PUSH EBP                            ; 0052656c
    ADD ESI,0x80                        ; 0052656d
    INC EBX                             ; 00526573
    CALL FUN_00525cd0                   ; 00526574
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00525cd0()
    ADD ESP,0x8                         ; 00526579
    MOV dword ptr [ESI + -0x80],EAX     ; 0052657c
    CMP EBX,EDI                         ; 0052657f
    JL 0x0052656a                       ; 00526581
        ;   XREF to: 0052656a (CONDITIONAL_JUMP)  ; LAB_0052656a
    MOV ECX,dword ptr [ESP + 0x8]       ; 00526583
        ;   Label: LAB_00526583
    ADD ECX,0x4                         ; 00526587
    MOV EBX,dword ptr [ESP + 0x4]       ; 0052658a
    MOV dword ptr [ESP + 0x8],ECX       ; 0052658e
    CMP ECX,EBX                         ; 00526592
    JL 0x0052655c                       ; 00526594
        ;   XREF to: 0052655c (CONDITIONAL_JUMP)  ; LAB_0052655c
    MOV ESI,dword ptr [ESP]             ; 00526596
        ;   Label: LAB_00526596
    CMP ESI,0x20                        ; 00526599
    JGE 0x005265d3                      ; 0052659c
        ;   XREF to: 005265d3 (CONDITIONAL_JUMP)  ; LAB_005265d3
    SHL ESI,0x2                         ; 0052659e
    PUSH 0x4                            ; 005265a1
        ;   Label: LAB_005265a1
    PUSH EBP                            ; 005265a3
    CALL FUN_00525cd0                   ; 005265a4
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00525cd0()
    ADD ESP,0x8                         ; 005265a9
    MOV EBX,EAX                         ; 005265ac
    XOR EAX,EAX                         ; 005265ae
    TEST EDI,EDI                        ; 005265b0
    JLE 0x005265c8                      ; 005265b2
        ;   XREF to: 005265c8 (CONDITIONAL_JUMP)  ; LAB_005265c8
    MOV EDX,dword ptr [ESP + 0x24]      ; 005265b4
    ADD EDX,ESI                         ; 005265b8
    ADD EDX,0x80                        ; 005265ba
        ;   Label: LAB_005265ba
    INC EAX                             ; 005265c0
    MOV dword ptr [EDX + -0x80],EBX     ; 005265c1
    CMP EAX,EDI                         ; 005265c4
    JL 0x005265ba                       ; 005265c6
        ;   XREF to: 005265ba (CONDITIONAL_JUMP)  ; LAB_005265ba
    ADD ESI,0x4                         ; 005265c8
        ;   Label: LAB_005265c8
    CMP ESI,0x80                        ; 005265cb
    JL 0x005265a1                       ; 005265d1
        ;   XREF to: 005265a1 (CONDITIONAL_JUMP)  ; LAB_005265a1
    ADD ESP,0xc                         ; 005265d3
        ;   Label: LAB_005265d3
    POP EBP                             ; 005265d6
    POP EDI                             ; 005265d7
    POP ESI                             ; 005265d8
    POP EBX                             ; 005265d9
    RET                                 ; 005265da

