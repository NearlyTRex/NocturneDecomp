; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00596660(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00488fd0
;   FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00596660
        ;   Label: FUN_00596660
    PUSH ESI                            ; 00596661
    MOV ESI,dword ptr [ESP + 0xc]       ; 00596662
    PUSH ESI                            ; 00596666
    CALL FUN_00488fd0                   ; 00596667
        ;   XREF to: 00488fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00488fd0()
    ADD ESP,0x4                         ; 0059666c
    MOV EBX,EAX                         ; 0059666f
    PUSH 0x5d948f                       ; 00596671
    MOV ESI,EAX                         ; 00596676
    ADD EAX,0x158                       ; 00596678
    PUSH EAX                            ; 0059667d
    MOV dword ptr [EAX + -0x4],0x5e76d4 ; 0059667e
    CALL FUN_0054eae0                   ; 00596685
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eae0()
    MOV EAX,EBX                         ; 0059668a
    ADD EBX,0x34                        ; 0059668c
    MOV dword ptr [EBX + 0x3238],0x3f000000 ; 0059668f
    MOV dword ptr [EBX + 0x323c],0x3f800000 ; 00596699
    MOV dword ptr [EBX + 0xd020],0x0    ; 005966a3
    MOV dword ptr [EBX + 0xcdac],0xbf800000 ; 005966ad
    MOV dword ptr [EBX + 0xd01c],0x0    ; 005966b7
    MOV dword ptr [EBX + 0x24f8],0x3fc90fdb ; 005966c1
    MOV dword ptr [EBX + 0xd034],0x1    ; 005966cb
    MOV dword ptr [EBX + 0xd038],0x40000000 ; 005966d5
    MOV dword ptr [EBX + 0xd03c],0x4b   ; 005966df
    MOV dword ptr [EBX + 0xce2c],0x41c80000 ; 005966e9
    MOV dword ptr [EBX + 0xd048],0x0    ; 005966f3
    MOV dword ptr [EBX + 0xd04c],0x0    ; 005966fd
    ADD ESP,0x8                         ; 00596707
    MOV EDX,dword ptr [EBX + 0xd038]    ; 0059670a
    MOV dword ptr [EBX + 0xd030],EDX    ; 00596710
    ADD EAX,0x4                         ; 00596716
        ;   Label: LAB_00596716
    MOV dword ptr [EAX + 0xd080],0x0    ; 00596719
    CMP EAX,EBX                         ; 00596723
    JNZ 0x00596716                      ; 00596725
        ;   XREF to: 00596716 (CONDITIONAL_JUMP)  ; LAB_00596716
    MOV EAX,ESI                         ; 00596727
    POP ESI                             ; 00596729
    POP EBX                             ; 0059672a
    RET                                 ; 0059672b

