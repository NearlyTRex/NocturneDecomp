; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0056b650(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00563bb0 at 00563bc2
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005f2794
;   TerminatedCString s_Can_t_load_s_because_ske_005f27a9
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_02c5fc1c
;
; Called Functions:
;   FUN_005030e0
;   FUN_00563000
;   FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056b650
        ;   Label: FUN_0056b650
    PUSH ESI                            ; 0056b651
    PUSH EDI                            ; 0056b652
    PUSH EBP                            ; 0056b653
    MOV EBP,dword ptr [ESP + 0x14]      ; 0056b654
    MOV ESI,0x27903bc                   ; 0056b658
    XOR EBX,EBX                         ; 0056b65d
    ADD ESI,0x1de28                     ; 0056b65f
    IMUL EAX,EBX,0x1ec9c                ; 0056b665
        ;   Label: LAB_0056b665
    PUSH EBP                            ; 0056b66b
    MOV EDI,0x27903bc                   ; 0056b66c
    PUSH ESI                            ; 0056b671
    ADD EDI,EAX                         ; 0056b672
    CALL FUN_005c04e0                   ; 0056b674
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 0056b679
    TEST EAX,EAX                        ; 0056b67c
    JZ 0x0056b6f3                       ; 0056b67e
        ;   XREF to: 0056b6f3 (CONDITIONAL_JUMP)  ; LAB_0056b6f3
    INC EBX                             ; 0056b684
    ADD ESI,0x1ec9c                     ; 0056b685
    CMP EBX,0x28                        ; 0056b68b
    JL 0x0056b665                       ; 0056b68e
        ;   XREF to: 0056b665 (CONDITIONAL_JUMP)  ; LAB_0056b665
    MOV EDX,dword ptr [0x02c5fc1c]      ; 0056b690 | DAT_02c5fc1c
    XOR EBX,EBX                         ; 0056b696
    XOR EAX,EAX                         ; 0056b698
    TEST EDX,EDX                        ; 0056b69a
    JZ 0x0056b6b3                       ; 0056b69c
        ;   XREF to: 0056b6b3 (CONDITIONAL_JUMP)  ; LAB_0056b6b3
    ADD EBX,0x4                         ; 0056b69e
        ;   Label: LAB_0056b69e
    INC EAX                             ; 0056b6a1
    CMP EBX,0xa0                        ; 0056b6a2
    JGE 0x0056b706                      ; 0056b6a8
        ;   XREF to: 0056b706 (CONDITIONAL_JUMP)  ; LAB_0056b706
    CMP dword ptr [EBX + 0x2c5fc1c],0x0 ; 0056b6aa
    JNZ 0x0056b69e                      ; 0056b6b1
        ;   XREF to: 0056b69e (CONDITIONAL_JUMP)  ; LAB_0056b69e
    MOV ESI,EAX                         ; 0056b6b3
        ;   Label: LAB_0056b6b3
    SHL EAX,0x3                         ; 0056b6b5
    SUB EAX,ESI                         ; 0056b6b8
    SHL EAX,0x4                         ; 0056b6ba
    ADD EAX,ESI                         ; 0056b6bd
    SHL EAX,0x2                         ; 0056b6bf
    MOV ESI,EAX                         ; 0056b6c2
    SHL EAX,0x3                         ; 0056b6c4
    ADD EAX,ESI                         ; 0056b6c7
    MOV ESI,EAX                         ; 0056b6c9
    SHL EAX,0x5                         ; 0056b6cb
    SUB EAX,ESI                         ; 0056b6ce
    MOV ESI,0x27903bc                   ; 0056b6d0
    PUSH EBP                            ; 0056b6d5
    ADD ESI,EAX                         ; 0056b6d6
    PUSH ESI                            ; 0056b6d8
    MOV EDI,0x1                         ; 0056b6d9
    CALL FUN_00563000                   ; 0056b6de
        ;   XREF to: 00563000 (UNCONDITIONAL_CALL)  ; undefined FUN_00563000()
    ADD ESP,0x8                         ; 0056b6e3
    MOV EAX,ESI                         ; 0056b6e6
    MOV dword ptr [EBX + 0x2c5fc1c],EDI ; 0056b6e8
    POP EBP                             ; 0056b6ee
    POP EDI                             ; 0056b6ef
    POP ESI                             ; 0056b6f0
    POP EBX                             ; 0056b6f1
    RET                                 ; 0056b6f2
    MOV ECX,0x1                         ; 0056b6f3
        ;   Label: LAB_0056b6f3
    MOV EAX,EDI                         ; 0056b6f8
    MOV dword ptr [EBX*0x4 + 0x2c5fc1c],ECX ; 0056b6fa | DAT_02c5fc1c
    POP EBP                             ; 0056b701
    POP EDI                             ; 0056b702
    POP ESI                             ; 0056b703
    POP EBX                             ; 0056b704
    RET                                 ; 0056b705
    PUSH 0x28                           ; 0056b706
        ;   Label: LAB_0056b706
    PUSH EBP                            ; 0056b708
    MOV EAX,0x5f2794                    ; 0056b709 | = "..\\core\\skeleton.cpp"
    MOV EDX,0x10b5                      ; 0056b70e
    PUSH 0x5f27a9                       ; 0056b713 | = "Can't load %s because skeleton manage..."
    MOV [0x01d1d400],EAX                ; 0056b718 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0056b71d | DAT_01d1d404
    CALL FUN_005030e0                   ; 0056b723
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0xc                         ; 0056b728
    XOR EAX,EAX                         ; 0056b72b
    POP EBP                             ; 0056b72d
    POP EDI                             ; 0056b72e
    POP ESI                             ; 0056b72f
    POP EBX                             ; 0056b730
    RET                                 ; 0056b731

