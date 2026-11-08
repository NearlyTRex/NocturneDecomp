; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048f5b0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00559580 at 00559585
;
; Called Functions:
;   FUN_0048afe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048f5b0
        ;   Label: FUN_0048f5b0
    PUSH ESI                            ; 0048f5b1
    PUSH EDI                            ; 0048f5b2
    PUSH EBP                            ; 0048f5b3
    SUB ESP,0x8                         ; 0048f5b4
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0048f5b7
    XOR EDX,EDX                         ; 0048f5bb
    MOV ECX,dword ptr [EBP + 0x40]      ; 0048f5bd
    MOV dword ptr [ESP],EDX             ; 0048f5c0
    TEST ECX,ECX                        ; 0048f5c3
    JLE 0x0048f619                      ; 0048f5c5
        ;   XREF to: 0048f619 (CONDITIONAL_JUMP)  ; LAB_0048f619
    XOR EDI,EDI                         ; 0048f5c7
        ;   Label: LAB_0048f5c7
    MOV EAX,dword ptr [EBP + 0x44]      ; 0048f5c9
    MOV dword ptr [ESP + 0x4],EDI       ; 0048f5cc
    TEST EAX,EAX                        ; 0048f5d0
    JLE 0x0048f60b                      ; 0048f5d2
        ;   XREF to: 0048f60b (CONDITIONAL_JUMP)  ; LAB_0048f60b
    MOV ESI,dword ptr [EBP + 0x48]      ; 0048f5d4
        ;   Label: LAB_0048f5d4
    XOR EBX,EBX                         ; 0048f5d7
    TEST ESI,ESI                        ; 0048f5d9
    JLE 0x0048f5fb                      ; 0048f5db
        ;   XREF to: 0048f5fb (CONDITIONAL_JUMP)  ; LAB_0048f5fb
    PUSH EBX                            ; 0048f5dd
        ;   Label: LAB_0048f5dd
    MOV EAX,dword ptr [ESP + 0x8]       ; 0048f5de
    PUSH EAX                            ; 0048f5e2
    MOV EDX,dword ptr [ESP + 0x8]       ; 0048f5e3
    PUSH EDX                            ; 0048f5e7
    PUSH EBP                            ; 0048f5e8
    CALL FUN_0048afe0                   ; 0048f5e9
        ;   XREF to: 0048afe0 (UNCONDITIONAL_CALL)  ; undefined FUN_0048afe0()
    ADD ESP,0x10                        ; 0048f5ee
    TEST EAX,EAX                        ; 0048f5f1
    JNZ 0x0048f621                      ; 0048f5f3
        ;   XREF to: 0048f621 (CONDITIONAL_JUMP)  ; LAB_0048f621
    INC EBX                             ; 0048f5f5
        ;   Label: LAB_0048f5f5
    CMP EBX,dword ptr [EBP + 0x48]      ; 0048f5f6
    JL 0x0048f5dd                       ; 0048f5f9
        ;   XREF to: 0048f5dd (CONDITIONAL_JUMP)  ; LAB_0048f5dd
    MOV EDX,dword ptr [ESP + 0x4]       ; 0048f5fb
        ;   Label: LAB_0048f5fb
    INC EDX                             ; 0048f5ff
    MOV ECX,dword ptr [EBP + 0x44]      ; 0048f600
    MOV dword ptr [ESP + 0x4],EDX       ; 0048f603
    CMP EDX,ECX                         ; 0048f607
    JL 0x0048f5d4                       ; 0048f609
        ;   XREF to: 0048f5d4 (CONDITIONAL_JUMP)  ; LAB_0048f5d4
    MOV EBX,dword ptr [ESP]             ; 0048f60b
        ;   Label: LAB_0048f60b
    INC EBX                             ; 0048f60e
    MOV ESI,dword ptr [EBP + 0x40]      ; 0048f60f
    MOV dword ptr [ESP],EBX             ; 0048f612
    CMP EBX,ESI                         ; 0048f615
    JL 0x0048f5c7                       ; 0048f617
        ;   XREF to: 0048f5c7 (CONDITIONAL_JUMP)  ; LAB_0048f5c7
    ADD ESP,0x8                         ; 0048f619
        ;   Label: LAB_0048f619
    POP EBP                             ; 0048f61c
    POP EDI                             ; 0048f61d
    POP ESI                             ; 0048f61e
    POP EBX                             ; 0048f61f
    RET                                 ; 0048f620
    MOV ECX,dword ptr [EAX]             ; 0048f621
        ;   Label: LAB_0048f621
    TEST ECX,ECX                        ; 0048f623
    JZ 0x0048f5f5                       ; 0048f625
        ;   XREF to: 0048f5f5 (CONDITIONAL_JUMP)  ; LAB_0048f5f5
    MOV ESI,dword ptr [EAX + 0x4]       ; 0048f627
    TEST ESI,ESI                        ; 0048f62a
    JZ 0x0048f5f5                       ; 0048f62c
        ;   XREF to: 0048f5f5 (CONDITIONAL_JUMP)  ; LAB_0048f5f5
    MOV EDI,ECX                         ; 0048f62e
    MOV ECX,0x40                        ; 0048f630
    PUSH EDI                            ; 0048f635
    MOV EAX,ECX                         ; 0048f636
    SHR ECX,0x2                         ; 0048f638
    MOVSD.REP ES:EDI,ESI                ; 0048f63b
    MOV CL,AL                           ; 0048f63d
    AND CL,0x3                          ; 0048f63f
    MOVSB.REP ES:EDI,ESI                ; 0048f642
    POP EDI                             ; 0048f644
    JMP 0x0048f5f5                      ; 0048f645
        ;   XREF to: 0048f5f5 (UNCONDITIONAL_JUMP)  ; LAB_0048f5f5

