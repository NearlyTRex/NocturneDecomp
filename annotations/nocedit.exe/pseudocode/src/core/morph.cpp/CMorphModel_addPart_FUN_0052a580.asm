; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_morph_cpp_CMorphModel_addPart_FUN_0052a580(CMorphModel *this_ptr)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_morph.cpp_CMorphModel_FUN_0052a8d0 at 0052a90e
;   core_morph.cpp_FUN_0052b370 at 0052b3b9
;   core_morph.cpp_FUN_0052b3d0 at 0052b419
;   core_morph.cpp_FUN_0052b4b0 at 0052b4f0
;   core_morph.cpp_FUN_0052b500 at 0052b540
;
; Referenced Globals:
;   TerminatedCString s_core_morph_cpp_0063a103
;   TerminatedCString s_CMorphModel_addPart_too__0063a115
;   TerminatedCString s_core_morph_cpp_0063a13c
;   TerminatedCString s_core_morph_cpp_0063a14e
;   TerminatedCString s_core_morph_cpp_0063a160
;   TerminatedCString s_CMorphModel_setup_out_of_0063a172
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_morph.cpp_CMorphModel_animate_FUN_0052a920
;   core_morph.cpp_CMorphModel_setFaceList_FUN_0052aac0
;   shape_memdbg.cpp_debugRealloc_FUN_0050f540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052a580
        ;   Label: core_morph.cpp_CMorphModel_addPart_FUN_0052a580
    PUSH ESI                            ; 0052a581
    PUSH EDI                            ; 0052a582
    PUSH EBP                            ; 0052a583
    MOV ESI,dword ptr [ESP + 0x14]      ; 0052a584
    MOV EBP,dword ptr [ESP + 0x24]      ; 0052a588
    CMP dword ptr [ESI],0x5             ; 0052a58c
    JGE 0x0052a6ac                      ; 0052a58f
        ;   XREF to: 0052a6ac (CONDITIONAL_JUMP)  ; LAB_0052a6ac
    MOV EDI,dword ptr [ESP + 0x28]      ; 0052a595
        ;   Label: LAB_0052a595
    MOV EAX,dword ptr [ESP + 0x20]      ; 0052a599
    MOV EDX,EBP                         ; 0052a59d
    XOR ECX,ECX                         ; 0052a59f
    TEST EAX,EAX                        ; 0052a5a1
    JLE 0x0052a5c0                      ; 0052a5a3
        ;   XREF to: 0052a5c0 (CONDITIONAL_JUMP)  ; LAB_0052a5c0
    MOV EBX,dword ptr [EDX + 0x4]       ; 0052a5a5
        ;   Label: LAB_0052a5a5
    DEC EAX                             ; 0052a5a8
    SUB EBX,0x2                         ; 0052a5a9
    ADD EDX,EDI                         ; 0052a5ac
    ADD ECX,EBX                         ; 0052a5ae
    TEST EAX,EAX                        ; 0052a5b0
    JG 0x0052a5a5                       ; 0052a5b2
        ;   XREF to: 0052a5a5 (CONDITIONAL_JUMP)  ; LAB_0052a5a5
    LEA EAX,[EAX]                       ; 0052a5b4
    LEA EDX,[EDX]                       ; 0052a5ba
    MOV EAX,dword ptr [ESI]             ; 0052a5c0
        ;   Label: LAB_0052a5c0
    SHL EAX,0x4                         ; 0052a5c2
    LEA EDX,[ESI + EAX*0x1]             ; 0052a5c5
    MOV EAX,dword ptr [ESI + 0x54]      ; 0052a5c8
    MOV dword ptr [EDX + 0xc],EAX       ; 0052a5cb
    MOV EAX,dword ptr [ESI]             ; 0052a5ce
    SHL EAX,0x4                         ; 0052a5d0
    MOV EDX,dword ptr [ESP + 0x18]      ; 0052a5d3
    MOV dword ptr [ESI + EAX*0x1 + 0x4],EDX ; 0052a5d7
    MOV EAX,dword ptr [ESI]             ; 0052a5db
    SHL EAX,0x4                         ; 0052a5dd
    MOV EDX,dword ptr [ESI + 0x5c]      ; 0052a5e0
    MOV dword ptr [ESI + EAX*0x1 + 0x10],EDX ; 0052a5e3
    MOV EAX,dword ptr [ESI]             ; 0052a5e7
    SHL EAX,0x4                         ; 0052a5e9
    MOV dword ptr [ESI + EAX*0x1 + 0x8],ECX ; 0052a5ec
    MOV EAX,dword ptr [ESI]             ; 0052a5f0
    SHL EAX,0x4                         ; 0052a5f2
    MOV EDI,dword ptr [ESI + 0x54]      ; 0052a5f5
    ADD EDI,dword ptr [ESI + EAX*0x1 + 0x4] ; 0052a5f8
    MOV EAX,dword ptr [ESI]             ; 0052a5fc
    MOV dword ptr [ESI + 0x54],EDI      ; 0052a5fe
    SHL EAX,0x4                         ; 0052a601
    MOV EDX,dword ptr [ESI + 0x5c]      ; 0052a604
    MOV EAX,dword ptr [ESI + EAX*0x1 + 0x8] ; 0052a607
    PUSH 0x89                           ; 0052a60b
    ADD EDX,EAX                         ; 0052a610
    MOV EAX,dword ptr [ESI + 0x54]      ; 0052a612
    PUSH 0x63a13c                       ; 0052a615 | = "..\\core\\morph.cpp"
    SHL EAX,0x4                         ; 0052a61a
    PUSH EAX                            ; 0052a61d
    MOV ECX,dword ptr [ESI + 0x58]      ; 0052a61e
    PUSH ECX                            ; 0052a621
    MOV dword ptr [ESI + 0x5c],EDX      ; 0052a622
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 0052a625
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
    MOV dword ptr [ESI + 0x58],EAX      ; 0052a62a
    MOV EAX,dword ptr [ESI + 0x5c]      ; 0052a62d
    ADD ESP,0x10                        ; 0052a630
    SHL EAX,0x2                         ; 0052a633
    PUSH 0x8a                           ; 0052a636
    MOV EDX,EAX                         ; 0052a63b
    SHL EAX,0x4                         ; 0052a63d
    PUSH 0x63a14e                       ; 0052a640 | = "..\\core\\morph.cpp"
    SUB EAX,EDX                         ; 0052a645
    PUSH EAX                            ; 0052a647
    MOV EBX,dword ptr [ESI + 0x60]      ; 0052a648
    PUSH EBX                            ; 0052a64b
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 0052a64c
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
    ADD ESP,0x10                        ; 0052a651
    MOV EDI,dword ptr [ESI]             ; 0052a654
    MOV dword ptr [ESI + 0x60],EAX      ; 0052a656
    INC EDI                             ; 0052a659
    MOV EAX,dword ptr [ESI + 0x58]      ; 0052a65a
    MOV dword ptr [ESI],EDI             ; 0052a65d
    TEST EAX,EAX                        ; 0052a65f
    JNZ 0x0052a6d4                      ; 0052a661
        ;   XREF to: 0052a6d4 (CONDITIONAL_JUMP)  ; LAB_0052a6d4
    MOV ECX,0x63a160                    ; 0052a663 | = "..\\core\\morph.cpp"
        ;   Label: LAB_0052a663
    MOV EBX,0x90                        ; 0052a668
    PUSH 0x63a172                       ; 0052a66d | = "CMorphModel::setup - out of memory!"
    MOV dword ptr [0x02f0ca48],ECX      ; 0052a672 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0052a678 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0052a67e
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0052a683
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0052a686
        ;   Label: LAB_0052a686
    TEST EDI,EDI                        ; 0052a68a
    JZ 0x0052a6a3                       ; 0052a68c
        ;   XREF to: 0052a6a3 (CONDITIONAL_JUMP)  ; LAB_0052a6a3
    MOV EAX,dword ptr [ESP + 0x18]      ; 0052a68e
    PUSH EAX                            ; 0052a692
    PUSH 0x0                            ; 0052a693
    MOV EAX,dword ptr [ESI]             ; 0052a695
    PUSH EDI                            ; 0052a697
    DEC EAX                             ; 0052a698
    PUSH EAX                            ; 0052a699
    PUSH ESI                            ; 0052a69a
    CALL core_morph.cpp_CMorphModel_animate_FUN_0052a920 ; 0052a69b
        ;   XREF to: 0052a920 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_animate_FUN_0052a920(CMorphModel * this_ptr)
    ADD ESP,0x14                        ; 0052a6a0
    TEST EBP,EBP                        ; 0052a6a3
        ;   Label: LAB_0052a6a3
    JNZ 0x0052a6dc                      ; 0052a6a5
        ;   XREF to: 0052a6dc (CONDITIONAL_JUMP)  ; LAB_0052a6dc
    POP EBP                             ; 0052a6a7
    POP EDI                             ; 0052a6a8
    POP ESI                             ; 0052a6a9
    POP EBX                             ; 0052a6aa
    RET                                 ; 0052a6ab
    MOV ECX,0x63a103                    ; 0052a6ac | = "..\\core\\morph.cpp"
        ;   Label: LAB_0052a6ac
    MOV EBX,0x77                        ; 0052a6b1
    PUSH 0x63a115                       ; 0052a6b6 | = "CMorphModel::addPart - too many parts!"
    MOV dword ptr [0x02f0ca48],ECX      ; 0052a6bb | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0052a6c1 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0052a6c7
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0052a6cc
    JMP 0x0052a595                      ; 0052a6cf
        ;   XREF to: 0052a595 (UNCONDITIONAL_JUMP)  ; LAB_0052a595
    CMP dword ptr [ESI + 0x60],0x0      ; 0052a6d4
        ;   Label: LAB_0052a6d4
    JZ 0x0052a663                       ; 0052a6d8
        ;   XREF to: 0052a663 (CONDITIONAL_JUMP)  ; LAB_0052a663
    JMP 0x0052a686                      ; 0052a6da
        ;   XREF to: 0052a686 (UNCONDITIONAL_JUMP)  ; LAB_0052a686
    MOV ECX,dword ptr [ESP + 0x20]      ; 0052a6dc
        ;   Label: LAB_0052a6dc
    PUSH ECX                            ; 0052a6e0
    PUSH 0x0                            ; 0052a6e1
    MOV EBX,dword ptr [ESP + 0x38]      ; 0052a6e3
    PUSH EBX                            ; 0052a6e7
    MOV EDI,dword ptr [ESP + 0x38]      ; 0052a6e8
    PUSH EDI                            ; 0052a6ec
    MOV EAX,dword ptr [ESP + 0x38]      ; 0052a6ed
    PUSH EAX                            ; 0052a6f1
    MOV EAX,dword ptr [ESI]             ; 0052a6f2
    PUSH EBP                            ; 0052a6f4
    DEC EAX                             ; 0052a6f5
    PUSH EAX                            ; 0052a6f6
    PUSH ESI                            ; 0052a6f7
    CALL core_morph.cpp_CMorphModel_setFaceList_FUN_0052aac0 ; 0052a6f8
        ;   XREF to: 0052aac0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_setFaceList_FUN_0052aac0(CMorphModel * this_ptr)
    ADD ESP,0x20                        ; 0052a6fd
    POP EBP                             ; 0052a700
    POP EDI                             ; 0052a701
    POP ESI                             ; 0052a702
    POP EBX                             ; 0052a703
    RET                                 ; 0052a704

