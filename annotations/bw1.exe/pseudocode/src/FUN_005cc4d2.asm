; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_005cc4d2(int *param_1,int param_2)
;
;
; XREF[1]:
;   FUN_005c8f5f at 005c8f9e
;
; Called Functions:
;   FUN_005c8e45
;   FUN_005cdbe5
;   FUN_005cdc9c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cc4d2
        ;   Label: FUN_005cc4d2
    MOV EBX,dword ptr [ESP + 0x8]       ; 005cc4d3
    MOV EAX,dword ptr [EBX]             ; 005cc4d7
    MOV EAX,dword ptr [EAX + 0x4]       ; 005cc4d9
    MOV EDX,dword ptr [EBX + EAX*0x1 + 0x10] ; 005cc4dc
    TEST EDX,EDX                        ; 005cc4e0
    JNZ 0x005cc53e                      ; 005cc4e2
        ;   XREF to: 005cc53e (CONDITIONAL_JUMP)  ; LAB_005cc53e
    MOV EAX,dword ptr [EBX]             ; 005cc4e4
    MOV dword ptr [EBX + 0x4],EDX       ; 005cc4e6
    MOV EAX,dword ptr [EAX + 0x4]       ; 005cc4e9
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x8] ; 005cc4ec
    TEST EAX,EAX                        ; 005cc4f0
    JNZ 0x005cc554                      ; 005cc4f2
        ;   XREF to: 005cc554 (CONDITIONAL_JUMP)  ; LAB_005cc554
    CMP dword ptr [ESP + 0xc],0x0       ; 005cc4f4
        ;   Label: LAB_005cc4f4
    JNZ 0x005cc52b                      ; 005cc4f9
        ;   XREF to: 005cc52b (CONDITIONAL_JUMP)  ; LAB_005cc52b
    MOV EAX,dword ptr [EBX]             ; 005cc4fb
    MOV EAX,dword ptr [EAX + 0x4]       ; 005cc4fd
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0xc] ; 005cc500
    TEST AL,0x1                         ; 005cc504
    JZ 0x005cc52b                       ; 005cc506
        ;   XREF to: 005cc52b (CONDITIONAL_JUMP)  ; LAB_005cc52b
    PUSH EBX                            ; 005cc508
    CALL FUN_005cdbe5                   ; 005cc509
        ;   XREF to: 005cdbe5 (UNCONDITIONAL_CALL)  ; undefined FUN_005cdbe5()
    MOV EAX,dword ptr [EBX]             ; 005cc50e
    MOV EAX,dword ptr [EAX + 0x4]       ; 005cc510
    ADD EAX,EBX                         ; 005cc513
    MOV EDX,dword ptr [EAX + 0x10]      ; 005cc515
    ADD ESP,0x4                         ; 005cc518
    AND EDX,0x4                         ; 005cc51b
    JZ 0x005cc52b                       ; 005cc51e
        ;   XREF to: 005cc52b (CONDITIONAL_JUMP)  ; LAB_005cc52b
    PUSH 0x2                            ; 005cc520
    PUSH EAX                            ; 005cc522
    CALL FUN_005c8e45                   ; 005cc523
        ;   XREF to: 005c8e45 (UNCONDITIONAL_CALL)  ; undefined FUN_005c8e45()
    ADD ESP,0x8                         ; 005cc528
    MOV EAX,dword ptr [EBX]             ; 005cc52b
        ;   Label: LAB_005cc52b
    ADD EBX,dword ptr [EAX + 0x4]       ; 005cc52d
    CMP dword ptr [EBX + 0x10],0x0      ; 005cc530
    SETZ AL                             ; 005cc534
    AND EAX,0xff                        ; 005cc537
    POP EBX                             ; 005cc53c
    RET                                 ; 005cc53d
    MOV EAX,dword ptr [EBX]             ; 005cc53e
        ;   Label: LAB_005cc53e
    MOV ECX,dword ptr [EAX + 0x4]       ; 005cc540
    PUSH 0x2                            ; 005cc543
    ADD EBX,ECX                         ; 005cc545
    PUSH EBX                            ; 005cc547
    CALL FUN_005c8e45                   ; 005cc548
        ;   XREF to: 005c8e45 (UNCONDITIONAL_CALL)  ; undefined FUN_005c8e45()
    ADD ESP,0x8                         ; 005cc54d
    XOR EAX,EAX                         ; 005cc550
    POP EBX                             ; 005cc552
    RET                                 ; 005cc553
    PUSH EAX                            ; 005cc554
        ;   Label: LAB_005cc554
    CALL FUN_005cdc9c                   ; 005cc555
        ;   XREF to: 005cdc9c (UNCONDITIONAL_CALL)  ; undefined FUN_005cdc9c()
    ADD ESP,0x4                         ; 005cc55a
    JMP 0x005cc4f4                      ; 005cc55d
        ;   XREF to: 005cc4f4 (UNCONDITIONAL_JUMP)  ; LAB_005cc4f4

