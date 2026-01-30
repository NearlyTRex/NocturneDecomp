; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_bugs_cpp_FUN_00425660(void)
;
;
; XREF[1]:
;   core_bugs.cpp_FUN_00427400 at 00427519
;
; Called Functions:
;   core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00425740
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00425660
        ;   Label: core_bugs.cpp_FUN_00425660
    PUSH EDI                            ; 00425661
    PUSH EBP                            ; 00425662
    MOV EDI,dword ptr [ESP + 0x10]      ; 00425663
    MOV EBP,dword ptr [ESP + 0x14]      ; 00425667
    PUSH 0x6d60                         ; 0042566b
    PUSH 0x0                            ; 00425670
    LEA EAX,[EDI + 0x12b38]             ; 00425672
    PUSH EAX                            ; 00425678
    MOV dword ptr [EDI + 0x12b34],0x0   ; 00425679
    XOR ESI,ESI                         ; 00425683
    CALL crt_memory.c_memset_FUN_005fde40 ; 00425685
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0042568a
    TEST EBP,EBP                        ; 0042568d
    JLE 0x00425733                      ; 0042568f
        ;   XREF to: 00425733 (CONDITIONAL_JUMP)  ; LAB_00425733
    PUSH EBX                            ; 00425695
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00425696
    XOR EAX,EAX                         ; 0042569a
        ;   Label: LAB_0042569a
    PUSH ESI                            ; 0042569c
    MOV AX,word ptr [EBX + 0x2]         ; 0042569d
    PUSH EAX                            ; 004256a1
    XOR EAX,EAX                         ; 004256a2
    MOV AX,word ptr [EBX]               ; 004256a4
    PUSH EAX                            ; 004256a7
    PUSH EDI                            ; 004256a8
    CALL core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00425740 ; 004256a9
        ;   XREF to: 00425740 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00425740()
    ADD ESP,0x10                        ; 004256ae
    XOR EAX,EAX                         ; 004256b1
    PUSH ESI                            ; 004256b3
    MOV AX,word ptr [EBX + 0x4]         ; 004256b4
    PUSH EAX                            ; 004256b8
    XOR EAX,EAX                         ; 004256b9
    MOV AX,word ptr [EBX + 0x2]         ; 004256bb
    PUSH EAX                            ; 004256bf
    PUSH EDI                            ; 004256c0
    CALL core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00425740 ; 004256c1
        ;   XREF to: 00425740 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00425740()
    ADD ESP,0x10                        ; 004256c6
    XOR EAX,EAX                         ; 004256c9
    PUSH ESI                            ; 004256cb
    MOV AX,word ptr [EBX]               ; 004256cc
    PUSH EAX                            ; 004256cf
    XOR EAX,EAX                         ; 004256d0
    MOV AX,word ptr [EBX + 0x4]         ; 004256d2
    PUSH EAX                            ; 004256d6
    PUSH EDI                            ; 004256d7
    CALL core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00425740 ; 004256d8
        ;   XREF to: 00425740 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00425740()
    ADD ESP,0x10                        ; 004256dd
    XOR EAX,EAX                         ; 004256e0
    PUSH ESI                            ; 004256e2
    MOV AX,word ptr [EBX]               ; 004256e3
    PUSH EAX                            ; 004256e6
    XOR EAX,EAX                         ; 004256e7
    MOV AX,word ptr [EBX + 0x2]         ; 004256e9
    PUSH EAX                            ; 004256ed
    PUSH EDI                            ; 004256ee
    CALL core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00425740 ; 004256ef
        ;   XREF to: 00425740 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00425740()
    ADD ESP,0x10                        ; 004256f4
    XOR EAX,EAX                         ; 004256f7
    PUSH ESI                            ; 004256f9
    MOV AX,word ptr [EBX + 0x2]         ; 004256fa
    PUSH EAX                            ; 004256fe
    XOR EAX,EAX                         ; 004256ff
    MOV AX,word ptr [EBX + 0x4]         ; 00425701
    PUSH EAX                            ; 00425705
    PUSH EDI                            ; 00425706
    CALL core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00425740 ; 00425707
        ;   XREF to: 00425740 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00425740()
    ADD ESP,0x10                        ; 0042570c
    XOR EAX,EAX                         ; 0042570f
    PUSH ESI                            ; 00425711
    MOV AX,word ptr [EBX + 0x4]         ; 00425712
    PUSH EAX                            ; 00425716
    XOR EAX,EAX                         ; 00425717
    MOV AX,word ptr [EBX]               ; 00425719
    PUSH EAX                            ; 0042571c
    PUSH EDI                            ; 0042571d
    ADD EBX,0x12                        ; 0042571e
    INC ESI                             ; 00425721
    CALL core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00425740 ; 00425722
        ;   XREF to: 00425740 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00425740()
    ADD ESP,0x10                        ; 00425727
    CMP ESI,EBP                         ; 0042572a
    JL 0x0042569a                       ; 0042572c
        ;   XREF to: 0042569a (CONDITIONAL_JUMP)  ; LAB_0042569a
    POP EBX                             ; 00425732
    POP EBP                             ; 00425733
        ;   Label: LAB_00425733
    POP EDI                             ; 00425734
    POP ESI                             ; 00425735
    RET                                 ; 00425736

