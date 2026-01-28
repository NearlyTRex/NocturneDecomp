; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_morph_cpp_CMorphModel_FUN_0052a710(CMorphModel *this_ptr)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_morph.cpp_CMorphModel_FUN_0052a870 at 0052a8bf
;
; Referenced Globals:
;   TerminatedCString s_core_morph_cpp_0063a196
;   TerminatedCString s_CMorphModel_addPart_too__0063a1a8
;   TerminatedCString s_core_morph_cpp_0063a1cf
;   TerminatedCString s_core_morph_cpp_0063a1e1
;   TerminatedCString s_core_morph_cpp_0063a1f3
;   TerminatedCString s_CMorphModel_setup_out_of_0063a205
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_morph.cpp_CMorphModel_animate_FUN_0052a920
;   core_morph.cpp_CMorphModel_FUN_0052aca0
;   shape_memdbg.cpp_debugRealloc_FUN_0050f540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052a710
        ;   Label: core_morph.cpp_CMorphModel_FUN_0052a710
    PUSH ESI                            ; 0052a711
    PUSH EDI                            ; 0052a712
    PUSH EBP                            ; 0052a713
    MOV EBX,dword ptr [ESP + 0x14]      ; 0052a714
    CMP dword ptr [EBX],0x5             ; 0052a718
    JGE 0x0052a816                      ; 0052a71b
        ;   XREF to: 0052a816 (CONDITIONAL_JUMP)  ; LAB_0052a816
    MOV EAX,dword ptr [EBX]             ; 0052a721
        ;   Label: LAB_0052a721
    SHL EAX,0x4                         ; 0052a723
    LEA EDX,[EBX + EAX*0x1]             ; 0052a726
    MOV EAX,dword ptr [EBX + 0x54]      ; 0052a729
    MOV dword ptr [EDX + 0xc],EAX       ; 0052a72c
    MOV EAX,dword ptr [EBX]             ; 0052a72f
    SHL EAX,0x4                         ; 0052a731
    MOV EDX,dword ptr [ESP + 0x18]      ; 0052a734
    MOV dword ptr [EBX + EAX*0x1 + 0x4],EDX ; 0052a738
    MOV EAX,dword ptr [EBX]             ; 0052a73c
    SHL EAX,0x4                         ; 0052a73e
    LEA EDX,[EBX + EAX*0x1]             ; 0052a741
    MOV EAX,dword ptr [EBX + 0x5c]      ; 0052a744
    MOV dword ptr [EDX + 0x10],EAX      ; 0052a747
    MOV EAX,dword ptr [EBX]             ; 0052a74a
    SHL EAX,0x4                         ; 0052a74c
    MOV EDX,dword ptr [ESP + 0x20]      ; 0052a74f
    MOV dword ptr [EBX + EAX*0x1 + 0x8],EDX ; 0052a753
    MOV EAX,dword ptr [EBX]             ; 0052a757
    SHL EAX,0x4                         ; 0052a759
    MOV EDI,dword ptr [EBX + 0x54]      ; 0052a75c
    ADD EDI,dword ptr [EBX + EAX*0x1 + 0x4] ; 0052a75f
    MOV EAX,dword ptr [EBX]             ; 0052a763
    MOV dword ptr [EBX + 0x54],EDI      ; 0052a765
    SHL EAX,0x4                         ; 0052a768
    MOV EBP,dword ptr [EBX + 0x5c]      ; 0052a76b
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x8] ; 0052a76e
    PUSH 0xbe                           ; 0052a772
    ADD EBP,EAX                         ; 0052a777
    MOV EAX,dword ptr [EBX + 0x54]      ; 0052a779
    PUSH 0x63a1cf                       ; 0052a77c | = "..\\core\\morph.cpp"
    SHL EAX,0x4                         ; 0052a781
    PUSH EAX                            ; 0052a784
    MOV EAX,dword ptr [EBX + 0x58]      ; 0052a785
    PUSH EAX                            ; 0052a788
    MOV dword ptr [EBX + 0x5c],EBP      ; 0052a789
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 0052a78c
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
    MOV dword ptr [EBX + 0x58],EAX      ; 0052a791
    MOV EAX,dword ptr [EBX + 0x5c]      ; 0052a794
    ADD ESP,0x10                        ; 0052a797
    SHL EAX,0x2                         ; 0052a79a
    PUSH 0xbf                           ; 0052a79d
    MOV EDX,EAX                         ; 0052a7a2
    SHL EAX,0x4                         ; 0052a7a4
    PUSH 0x63a1e1                       ; 0052a7a7 | = "..\\core\\morph.cpp"
    SUB EAX,EDX                         ; 0052a7ac
    PUSH EAX                            ; 0052a7ae
    MOV EDX,dword ptr [EBX + 0x60]      ; 0052a7af
    PUSH EDX                            ; 0052a7b2
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 0052a7b3
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
    ADD ESP,0x10                        ; 0052a7b8
    MOV ECX,dword ptr [EBX]             ; 0052a7bb
    MOV dword ptr [EBX + 0x60],EAX      ; 0052a7bd
    INC ECX                             ; 0052a7c0
    MOV ESI,dword ptr [EBX + 0x58]      ; 0052a7c1
    MOV dword ptr [EBX],ECX             ; 0052a7c4
    TEST ESI,ESI                        ; 0052a7c6
    JNZ 0x0052a83e                      ; 0052a7c8
        ;   XREF to: 0052a83e (CONDITIONAL_JUMP)  ; LAB_0052a83e
    MOV EBP,0x63a1f3                    ; 0052a7ca | = "..\\core\\morph.cpp"
        ;   Label: LAB_0052a7ca
    MOV EAX,0xc5                        ; 0052a7cf
    PUSH 0x63a205                       ; 0052a7d4 | = "CMorphModel::setup - out of memory!"
    MOV dword ptr [0x02f0ca48],EBP      ; 0052a7d9 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0052a7df | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0052a7e4
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0052a7e9
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0052a7ec
        ;   Label: LAB_0052a7ec
    TEST EDX,EDX                        ; 0052a7f0
    JZ 0x0052a809                       ; 0052a7f2
        ;   XREF to: 0052a809 (CONDITIONAL_JUMP)  ; LAB_0052a809
    MOV ECX,dword ptr [ESP + 0x18]      ; 0052a7f4
    PUSH ECX                            ; 0052a7f8
    PUSH 0x0                            ; 0052a7f9
    MOV EAX,dword ptr [EBX]             ; 0052a7fb
    PUSH EDX                            ; 0052a7fd
    DEC EAX                             ; 0052a7fe
    PUSH EAX                            ; 0052a7ff
    PUSH EBX                            ; 0052a800
    CALL core_morph.cpp_CMorphModel_animate_FUN_0052a920 ; 0052a801
        ;   XREF to: 0052a920 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_animate_FUN_0052a920(CMorphModel * this_ptr)
    ADD ESP,0x14                        ; 0052a806
    MOV EDI,dword ptr [ESP + 0x24]      ; 0052a809
        ;   Label: LAB_0052a809
    TEST EDI,EDI                        ; 0052a80d
    JNZ 0x0052a846                      ; 0052a80f
        ;   XREF to: 0052a846 (CONDITIONAL_JUMP)  ; LAB_0052a846
    POP EBP                             ; 0052a811
    POP EDI                             ; 0052a812
    POP ESI                             ; 0052a813
    POP EBX                             ; 0052a814
    RET                                 ; 0052a815
    MOV ECX,0x63a196                    ; 0052a816 | = "..\\core\\morph.cpp"
        ;   Label: LAB_0052a816
    MOV ESI,0xac                        ; 0052a81b
    PUSH 0x63a1a8                       ; 0052a820 | = "CMorphModel::addPart - too many parts!"
    MOV dword ptr [0x02f0ca48],ECX      ; 0052a825 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0052a82b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0052a831
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0052a836
    JMP 0x0052a721                      ; 0052a839
        ;   XREF to: 0052a721 (UNCONDITIONAL_JUMP)  ; LAB_0052a721
    CMP dword ptr [EBX + 0x60],0x0      ; 0052a83e
        ;   Label: LAB_0052a83e
    JZ 0x0052a7ca                       ; 0052a842
        ;   XREF to: 0052a7ca (CONDITIONAL_JUMP)  ; LAB_0052a7ca
    JMP 0x0052a7ec                      ; 0052a844
        ;   XREF to: 0052a7ec (UNCONDITIONAL_JUMP)  ; LAB_0052a7ec
    MOV EBP,dword ptr [ESP + 0x20]      ; 0052a846
        ;   Label: LAB_0052a846
    PUSH EBP                            ; 0052a84a
    PUSH 0x0                            ; 0052a84b
    MOV EAX,dword ptr [ESP + 0x34]      ; 0052a84d
    PUSH EAX                            ; 0052a851
    MOV EDX,dword ptr [ESP + 0x34]      ; 0052a852
    PUSH EDX                            ; 0052a856
    MOV EAX,dword ptr [EBX]             ; 0052a857
    PUSH EDI                            ; 0052a859
    DEC EAX                             ; 0052a85a
    PUSH EAX                            ; 0052a85b
    PUSH EBX                            ; 0052a85c
    CALL core_morph.cpp_CMorphModel_FUN_0052aca0 ; 0052a85d
        ;   XREF to: 0052aca0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_FUN_0052aca0(CMorphModel * this_ptr)
    ADD ESP,0x1c                        ; 0052a862
    POP EBP                             ; 0052a865
    POP EDI                             ; 0052a866
    POP ESI                             ; 0052a867
    POP EBX                             ; 0052a868
    RET                                 ; 0052a869

