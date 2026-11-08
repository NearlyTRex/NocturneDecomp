; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00443790(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_004d6990 at 004d6cd9
;
; Called Functions:
;   FUN_00443110
;   FUN_00443370
;   FUN_004433f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00443790
        ;   Label: FUN_00443790
    PUSH ESI                            ; 00443791
    MOV EBX,dword ptr [ESP + 0xc]       ; 00443792
    MOV EDX,dword ptr [ESP + 0x10]      ; 00443796
    MOV ECX,dword ptr [EBX + 0x2c]      ; 0044379a
    TEST ECX,ECX                        ; 0044379d
    JL 0x004437f3                       ; 0044379f
        ;   XREF to: 004437f3 (CONDITIONAL_JUMP)  ; LAB_004437f3
    MOV ESI,dword ptr [EBX + 0x30]      ; 004437a1
    LEA EAX,[EBX + 0x4]                 ; 004437a4
    TEST ESI,ESI                        ; 004437a7
    JGE 0x004437fb                      ; 004437a9
        ;   XREF to: 004437fb (CONDITIONAL_JUMP)  ; LAB_004437fb
    PUSH EDX                            ; 004437ab
    PUSH ECX                            ; 004437ac
    PUSH EAX                            ; 004437ad
    CALL FUN_00443370                   ; 004437ae
        ;   XREF to: 00443370 (UNCONDITIONAL_CALL)  ; undefined FUN_00443370()
    ADD ESP,0xc                         ; 004437b3
    CMP EAX,-0x1                        ; 004437b6
        ;   Label: LAB_004437b6
    JZ 0x00443809                       ; 004437b9
        ;   XREF to: 00443809 (CONDITIONAL_JUMP)  ; LAB_00443809
    TEST EAX,EAX                        ; 004437bb
    JL 0x00443811                       ; 004437bd
        ;   XREF to: 00443811 (CONDITIONAL_JUMP)  ; LAB_00443811
    MOV ECX,dword ptr [EBX + 0x28]      ; 004437bf
    MOV dword ptr [EBX + 0x30],0xffffffff ; 004437c2
    TEST ECX,ECX                        ; 004437c9
    JL 0x004437e6                       ; 004437cb
        ;   XREF to: 004437e6 (CONDITIONAL_JUMP)  ; LAB_004437e6
    PUSH ECX                            ; 004437cd
    PUSH EAX                            ; 004437ce
    LEA EAX,[EBX + 0x4]                 ; 004437cf
    PUSH EAX                            ; 004437d2
    CALL FUN_00443110                   ; 004437d3
        ;   XREF to: 00443110 (UNCONDITIONAL_CALL)  ; undefined FUN_00443110()
    ADD ESP,0xc                         ; 004437d8
    TEST EAX,EAX                        ; 004437db
    JZ 0x004437e6                       ; 004437dd
        ;   XREF to: 004437e6 (CONDITIONAL_JUMP)  ; LAB_004437e6
    MOV dword ptr [EBX + 0x2c],0xffffffff ; 004437df
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004437e6
        ;   Label: LAB_004437e6
    MOV dword ptr [EBX + 0x2c],0xffffffff ; 004437e9
    MOV dword ptr [EBX + 0x28],EAX      ; 004437f0
    MOV EAX,0x1                         ; 004437f3
        ;   Label: LAB_004437f3
    POP ESI                             ; 004437f8
    POP EBX                             ; 004437f9
    RET                                 ; 004437fa
    PUSH EDX                            ; 004437fb
        ;   Label: LAB_004437fb
    PUSH ESI                            ; 004437fc
    PUSH ECX                            ; 004437fd
    PUSH EAX                            ; 004437fe
    CALL FUN_004433f0                   ; 004437ff
        ;   XREF to: 004433f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004433f0()
    ADD ESP,0x10                        ; 00443804
    JMP 0x004437b6                      ; 00443807
        ;   XREF to: 004437b6 (UNCONDITIONAL_JUMP)  ; LAB_004437b6
    MOV dword ptr [EBX + 0x30],EAX      ; 00443809
        ;   Label: LAB_00443809
    XOR EAX,EAX                         ; 0044380c
    POP ESI                             ; 0044380e
    POP EBX                             ; 0044380f
    RET                                 ; 00443810
    MOV EDX,0xfffffffe                  ; 00443811
        ;   Label: LAB_00443811
    SUB EDX,EAX                         ; 00443816
    MOV EAX,0x2                         ; 00443818
    MOV dword ptr [EBX + 0x30],EDX      ; 0044381d
    POP ESI                             ; 00443820
    POP EBX                             ; 00443821
    RET                                 ; 00443822

