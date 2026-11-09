; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint unkafter_zombie_cpp_FUN_005cb810(HANDLE param_1)
;
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
; undefined2       Stack[-0x20]:2  local_20
; undefined2       Stack[-0x1c]:2  local_1c
; undefined1       Stack[-0x1a]:1  local_1a
; undefined1       Stack[-0x17]:1  local_17
; undefined        Stack[-0x14]:1  local_14
;
; XREF[1]:
;   unkafter_zombie.cpp_FUN_005cb928 at 005cb988
;
; Referenced Globals:
;   void* PTR_ReadConsoleInputA_005d0614 = 001d10e6
;   undefined4 DAT_00626a68
;   undefined4 DAT_02c9ff80
;   undefined4 DAT_02c9ff84
;   undefined4 DAT_02c9ff88
;
; Called Functions:
;   ReadConsoleInputA
;   unkafter_zombie.cpp_FUN_005cd020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cb810
        ;   Label: unkafter_zombie.cpp_FUN_005cb810
    PUSH ESI                            ; 005cb811
    PUSH EDI                            ; 005cb812
    PUSH EBP                            ; 005cb813
    SUB ESP,0x18                        ; 005cb814
    MOV ESI,dword ptr [0x02c9ff88]      ; 005cb817 | DAT_02c9ff88
    MOV EDI,dword ptr [0x02c9ff84]      ; 005cb81d | DAT_02c9ff84
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005cb823
    MOV EAX,[0x00626a68]                ; 005cb827 | DAT_00626a68
    CMP EAX,0x1                         ; 005cb82c
    JC 0x005cb875                       ; 005cb82f
        ;   XREF to: 005cb875 (CONDITIONAL_JUMP)  ; LAB_005cb875
    JBE 0x005cb83a                      ; 005cb831
        ;   XREF to: 005cb83a (CONDITIONAL_JUMP)  ; LAB_005cb83a
    CMP EAX,0x2                         ; 005cb833
    JZ 0x005cb85c                       ; 005cb836
        ;   XREF to: 005cb85c (CONDITIONAL_JUMP)  ; LAB_005cb85c
    JMP 0x005cb875                      ; 005cb838
        ;   XREF to: 005cb875 (UNCONDITIONAL_JUMP)  ; LAB_005cb875
    DEC ESI                             ; 005cb83a
        ;   Label: LAB_005cb83a
    TEST EDI,EDI                        ; 005cb83b
    JZ 0x005cb84b                       ; 005cb83d
        ;   XREF to: 005cb84b (CONDITIONAL_JUMP)  ; LAB_005cb84b
    TEST ESI,ESI                        ; 005cb83f
    JNZ 0x005cb855                      ; 005cb841
        ;   XREF to: 005cb855 (CONDITIONAL_JUMP)  ; LAB_005cb855
    MOV dword ptr [0x00626a68],ESI      ; 005cb843 | DAT_00626a68
    JMP 0x005cb855                      ; 005cb849
        ;   XREF to: 005cb855 (UNCONDITIONAL_JUMP)  ; LAB_005cb855
    MOV dword ptr [0x00626a68],0x2      ; 005cb84b | DAT_00626a68
        ;   Label: LAB_005cb84b
    MOV EAX,EDI                         ; 005cb855
        ;   Label: LAB_005cb855
    JMP 0x005cb914                      ; 005cb857
        ;   XREF to: 005cb914 (UNCONDITIONAL_JUMP)  ; LAB_005cb914
    TEST ESI,ESI                        ; 005cb85c
        ;   Label: LAB_005cb85c
    SETNZ AL                            ; 005cb85e
    AND EAX,0xff                        ; 005cb861
    MOV [0x00626a68],EAX                ; 005cb866 | DAT_00626a68
    MOV EAX,[0x02c9ff80]                ; 005cb86b | DAT_02c9ff80
    JMP 0x005cb914                      ; 005cb870
        ;   XREF to: 005cb914 (UNCONDITIONAL_JUMP)  ; LAB_005cb914
    MOV dword ptr [0x02c9ff88],ESI      ; 005cb875 | DAT_02c9ff88
        ;   Label: LAB_005cb875
    MOV dword ptr [0x02c9ff84],EDI      ; 005cb87b | DAT_02c9ff84
    LEA EAX,[ESP + 0x14]                ; 005cb881
        ;   Label: LAB_005cb881
    PUSH EAX                            ; 005cb885
    PUSH 0x1                            ; 005cb886
    LEA EAX,[ESP + 0x8]                 ; 005cb888
    PUSH EAX                            ; 005cb88c
    PUSH EBX                            ; 005cb88d
    CALL dword ptr CS:[0x5d0614]        ; 005cb88e | PTR_ReadConsoleInputA_005d0614
    TEST EAX,EAX                        ; 005cb895
    JZ 0x005cb903                       ; 005cb897
        ;   XREF to: 005cb903 (CONDITIONAL_JUMP)  ; LAB_005cb903
    MOV EAX,ESP                         ; 005cb899
    PUSH EAX                            ; 005cb89b
    CALL unkafter_zombie.cpp_FUN_005cd020 ; 005cb89c
        ;   XREF to: 005cd020 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005cd020()
    ADD ESP,0x4                         ; 005cb8a1
    TEST EAX,EAX                        ; 005cb8a4
    JZ 0x005cb881                       ; 005cb8a6
        ;   XREF to: 005cb881 (CONDITIONAL_JUMP)  ; LAB_005cb881
    XOR EAX,EAX                         ; 005cb8a8
    MOV AX,word ptr [ESP + 0x8]         ; 005cb8aa
    LEA ESI,[EAX + -0x1]                ; 005cb8af
    MOV AH,byte ptr [ESP + 0x11]        ; 005cb8b2
    MOVZX EDI,byte ptr [ESP + 0xe]      ; 005cb8b6
    TEST AH,0x1                         ; 005cb8bb
    JNZ 0x005cb8c4                      ; 005cb8be
        ;   XREF to: 005cb8c4 (CONDITIONAL_JUMP)  ; LAB_005cb8c4
    TEST EDI,EDI                        ; 005cb8c0
    JNZ 0x005cb8df                      ; 005cb8c2
        ;   XREF to: 005cb8df (CONDITIONAL_JUMP)  ; LAB_005cb8df
    MOV EBP,0x2                         ; 005cb8c4
        ;   Label: LAB_005cb8c4
    XOR EAX,EAX                         ; 005cb8c9
    XOR EDI,EDI                         ; 005cb8cb
    MOV AX,word ptr [ESP + 0xc]         ; 005cb8cd
    MOV dword ptr [0x00626a68],EBP      ; 005cb8d2 | DAT_00626a68
    MOV [0x02c9ff80],EAX                ; 005cb8d8 | DAT_02c9ff80
    JMP 0x005cb8ed                      ; 005cb8dd
        ;   XREF to: 005cb8ed (UNCONDITIONAL_JUMP)  ; LAB_005cb8ed
    TEST ESI,ESI                        ; 005cb8df
        ;   Label: LAB_005cb8df
    JZ 0x005cb8ed                       ; 005cb8e1
        ;   XREF to: 005cb8ed (CONDITIONAL_JUMP)  ; LAB_005cb8ed
    MOV dword ptr [0x00626a68],0x1      ; 005cb8e3 | DAT_00626a68
    MOV EAX,EDI                         ; 005cb8ed
        ;   Label: LAB_005cb8ed
    MOV dword ptr [0x02c9ff84],EDI      ; 005cb8ef | DAT_02c9ff84
    MOV dword ptr [0x02c9ff88],ESI      ; 005cb8f5 | DAT_02c9ff88
    ADD ESP,0x18                        ; 005cb8fb
    POP EBP                             ; 005cb8fe
    POP EDI                             ; 005cb8ff
    POP ESI                             ; 005cb900
    POP EBX                             ; 005cb901
    RET                                 ; 005cb902
    MOV EAX,0xffffffff                  ; 005cb903
        ;   Label: LAB_005cb903
    MOV EDI,dword ptr [0x02c9ff84]      ; 005cb908 | DAT_02c9ff84
    MOV ESI,dword ptr [0x02c9ff88]      ; 005cb90e | DAT_02c9ff88
    MOV dword ptr [0x02c9ff84],EDI      ; 005cb914 | DAT_02c9ff84
        ;   Label: LAB_005cb914
    MOV dword ptr [0x02c9ff88],ESI      ; 005cb91a | DAT_02c9ff88
    ADD ESP,0x18                        ; 005cb920
    POP EBP                             ; 005cb923
    POP EDI                             ; 005cb924
    POP ESI                             ; 005cb925
    POP EBX                             ; 005cb926
    RET                                 ; 005cb927

