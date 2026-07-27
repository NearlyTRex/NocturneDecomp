; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setutil_cpp_C3DSCamera_loadPVS_FUN_00514800(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   core_set.cpp_CDemonSet_load_FUN_00506f10 at 00507773
;
; Referenced Globals:
;   TerminatedCString s_d_00590cc7
;   TerminatedCString s_core_setutil_cpp_00590ccb
;   TerminatedCString s_Out_of_memory_for_pvsLis_00590cdf
;   TerminatedCString s_d_00590cfe
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_memory.c_realloc_FUN_00564a70
;   crt_stdio.c_fscanf_FUN_00563350
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00514800
        ;   Label: core_setutil.cpp_C3DSCamera_loadPVS_FUN_00514800
    PUSH EDI                            ; 00514801
    PUSH EBP                            ; 00514802
    MOV EDI,dword ptr [ESP + 0x10]      ; 00514803
    MOV EBP,dword ptr [ESP + 0x14]      ; 00514807
    LEA EAX,[EDI + 0x190]               ; 0051480b
    PUSH EAX                            ; 00514811
    PUSH 0x590cc7                       ; 00514812 | = "%d\n"
    PUSH EBP                            ; 00514817
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00514818
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    MOV EAX,dword ptr [EDI + 0x190]     ; 0051481d
    ADD ESP,0xc                         ; 00514823
    SHL EAX,0x2                         ; 00514826
    PUSH EAX                            ; 00514829
    MOV EDX,dword ptr [EDI + 0x194]     ; 0051482a
    PUSH EDX                            ; 00514830
    CALL crt_memory.c_realloc_FUN_00564a70 ; 00514831
        ;   XREF to: 00564a70 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_realloc_FUN_00564a70()
    ADD ESP,0x8                         ; 00514836
    MOV ECX,dword ptr [EDI + 0x190]     ; 00514839
    MOV dword ptr [EDI + 0x194],EAX     ; 0051483f
    TEST ECX,ECX                        ; 00514845
    JLE 0x00514882                      ; 00514847
        ;   XREF to: 00514882 (CONDITIONAL_JUMP)  ; LAB_00514882
    TEST EAX,EAX                        ; 00514849
    JZ 0x00514886                       ; 0051484b
        ;   XREF to: 00514886 (CONDITIONAL_JUMP)  ; LAB_00514886
    MOV ECX,dword ptr [EDI + 0x190]     ; 0051484d
        ;   Label: LAB_0051484d
    XOR ESI,ESI                         ; 00514853
    TEST ECX,ECX                        ; 00514855
    JLE 0x00514882                      ; 00514857
        ;   XREF to: 00514882 (CONDITIONAL_JUMP)  ; LAB_00514882
    PUSH EBX                            ; 00514859
    XOR EBX,EBX                         ; 0051485a
    MOV EAX,dword ptr [EDI + 0x194]     ; 0051485c
        ;   Label: LAB_0051485c
    ADD EAX,EBX                         ; 00514862
    PUSH EAX                            ; 00514864
    PUSH 0x590cfe                       ; 00514865 | = "\t%d\n"
    PUSH EBP                            ; 0051486a
    INC ESI                             ; 0051486b
    ADD EBX,0x4                         ; 0051486c
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0051486f
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    MOV EAX,dword ptr [EDI + 0x190]     ; 00514874
    ADD ESP,0xc                         ; 0051487a
    CMP ESI,EAX                         ; 0051487d
    JL 0x0051485c                       ; 0051487f
        ;   XREF to: 0051485c (CONDITIONAL_JUMP)  ; LAB_0051485c
    POP EBX                             ; 00514881
    POP EBP                             ; 00514882
        ;   Label: LAB_00514882
    POP EDI                             ; 00514883
    POP ESI                             ; 00514884
    RET                                 ; 00514885
    PUSH ECX                            ; 00514886
        ;   Label: LAB_00514886
    MOV ESI,0x590ccb                    ; 00514887 | = "..\\core\\setutil.cpp"
    MOV EAX,0xcf                        ; 0051488c
    PUSH 0x590cdf                       ; 00514891 | = "Out of memory for pvsList - %d"
    MOV dword ptr [0x01cc4800],ESI      ; 00514896 | PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 0051489c | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 005148a1
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 005148a6
    JMP 0x0051484d                      ; 005148a9
        ;   XREF to: 0051484d (UNCONDITIONAL_JUMP)  ; LAB_0051484d

