; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_podmain_cpp_FUN_0053d580(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005edb98
;   TerminatedCString s_pod_ini_005edb9b
;   TerminatedCString s_pod_005edba3
;   TerminatedCString s_core_podmain_cpp_005edba9
;   TerminatedCString s_Can_t_mount_s_s_005edbbd
;   undefined4 DAT_005edbd0
;   undefined4 DAT_005edbd4
;   TerminatedCString s_core_podmain_cpp_005edbd8
;   TerminatedCString s_Can_t_mount_s_s_005edbec
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_stdio.c_fclose_FUN_005c0d10
;   crt_stdio.c_fopen_FUN_005c157c
;   crt_stdio.c_fscanf_FUN_005c04b0
;   engine_dosio.cpp_CFileFinder_closeSearch_FUN_00479460
;   engine_dosio.cpp_CFileFinder_ctor_FUN_00479320
;   engine_dosio.cpp_CFileFinder_dtor_FUN_00479340
;   engine_dosio.cpp_CFileFinder_findNext_FUN_004793e0
;   engine_dosio.cpp_CFileFinder_openSearch_FUN_00479360
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053d580
        ;   Label: core_podmain.cpp_FUN_0053d580
    PUSH ESI                            ; 0053d581
    PUSH EDI                            ; 0053d582
    PUSH EBP                            ; 0053d583
    SUB ESP,0x318                       ; 0053d584
    MOV EBX,dword ptr [ESP + 0x32c]     ; 0053d58a
    PUSH 0x5edb98                       ; 0053d591 | DAT_005edb98
    PUSH 0x5edb9b                       ; 0053d596 | = "pod.ini"
    CALL crt_stdio.c_fopen_FUN_005c157c ; 0053d59b
        ;   XREF to: 005c157c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005c157c()
    ADD ESP,0x8                         ; 0053d5a0
    MOV EDI,EAX                         ; 0053d5a3
    TEST EAX,EAX                        ; 0053d5a5
    JNZ 0x0053d656                      ; 0053d5a7
        ;   XREF to: 0053d656 (CONDITIONAL_JUMP)  ; LAB_0053d656
    MOV EAX,ESP                         ; 0053d5ad
    PUSH EAX                            ; 0053d5af
    CALL engine_dosio.cpp_CFileFinder_ctor_FUN_00479320 ; 0053d5b0
        ;   XREF to: 00479320 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.cpp_CFileFinder_ctor_FUN_00479320(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 0053d5b5
    PUSH 0x5edba3                       ; 0053d5b8 | = "*.pod"
    LEA EAX,[ESP + 0x4]                 ; 0053d5bd
    PUSH EAX                            ; 0053d5c1
    CALL engine_dosio.cpp_CFileFinder_openSearch_FUN_00479360 ; 0053d5c2
        ;   XREF to: 00479360 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_CFileFinder_openSearch_FUN_00479360(CFileFinder * this_ptr, char * search_pattern)
    ADD ESP,0x8                         ; 0053d5c7
    CMP byte ptr [ESP],0x0              ; 0053d5ca
    JZ 0x0053d5ff                       ; 0053d5ce
        ;   XREF to: 0053d5ff (CONDITIONAL_JUMP)  ; LAB_0053d5ff
    LEA ESI,[ESP + 0x214]               ; 0053d5d0
        ;   Label: LAB_0053d5d0
    PUSH ESI                            ; 0053d5d7
    LEA ESI,[ESP + 0x4]                 ; 0053d5d8
    PUSH ESI                            ; 0053d5dc
    MOV EAX,dword ptr [EBX + 0x194]     ; 0053d5dd
    PUSH EBX                            ; 0053d5e3
    CALL dword ptr [EAX + 0xc]          ; 0053d5e4
    ADD ESP,0xc                         ; 0053d5e7
    TEST EAX,EAX                        ; 0053d5ea
    JZ 0x0053d624                       ; 0053d5ec
        ;   XREF to: 0053d624 (CONDITIONAL_JUMP)  ; LAB_0053d624
    MOV EAX,ESP                         ; 0053d5ee
        ;   Label: LAB_0053d5ee
    PUSH EAX                            ; 0053d5f0
    CALL engine_dosio.cpp_CFileFinder_findNext_FUN_004793e0 ; 0053d5f1
        ;   XREF to: 004793e0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_CFileFinder_findNext_FUN_004793e0(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 0053d5f6
    CMP byte ptr [ESP],0x0              ; 0053d5f9
    JNZ 0x0053d5d0                      ; 0053d5fd
        ;   XREF to: 0053d5d0 (CONDITIONAL_JUMP)  ; LAB_0053d5d0
    MOV EAX,ESP                         ; 0053d5ff
        ;   Label: LAB_0053d5ff
    PUSH EAX                            ; 0053d601
    CALL engine_dosio.cpp_CFileFinder_closeSearch_FUN_00479460 ; 0053d602
        ;   XREF to: 00479460 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_CFileFinder_closeSearch_FUN_00479460(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 0053d607
    PUSH 0x0                            ; 0053d60a
    LEA EAX,[ESP + 0x4]                 ; 0053d60c
    PUSH EAX                            ; 0053d610
    CALL engine_dosio.cpp_CFileFinder_dtor_FUN_00479340 ; 0053d611
        ;   XREF to: 00479340 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.cpp_CFileFinder_dtor_FUN_00479340(CFileFinder * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0053d616
    ADD ESP,0x318                       ; 0053d619
    POP EBP                             ; 0053d61f
    POP EDI                             ; 0053d620
    POP ESI                             ; 0053d621
    POP EBX                             ; 0053d622
    RET                                 ; 0053d623
    LEA EAX,[ESP + 0x214]               ; 0053d624
        ;   Label: LAB_0053d624
    PUSH EAX                            ; 0053d62b
    LEA EAX,[ESP + 0x4]                 ; 0053d62c
    PUSH EAX                            ; 0053d630
    MOV EDX,0x5edba9                    ; 0053d631 | = "..\\core\\podmain.cpp"
    MOV ECX,0x39                        ; 0053d636
    PUSH 0x5edbbd                       ; 0053d63b | = "Can't mount %s: %s"
    MOV dword ptr [0x01d1d400],EDX      ; 0053d640 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0053d646 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0053d64c
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0xc                         ; 0053d651
    JMP 0x0053d5ee                      ; 0053d654
        ;   XREF to: 0053d5ee (UNCONDITIONAL_JUMP)  ; LAB_0053d5ee
    LEA EDX,[ESP + 0x314]               ; 0053d656
        ;   Label: LAB_0053d656
    PUSH EDX                            ; 0053d65d
    PUSH 0x5edbd0                       ; 0053d65e | DAT_005edbd0
    PUSH EAX                            ; 0053d663
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0053d664
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 0053d669
    MOV EDX,dword ptr [ESP + 0x314]     ; 0053d66c
    XOR ESI,ESI                         ; 0053d673
    TEST EDX,EDX                        ; 0053d675
    JLE 0x0053d6c1                      ; 0053d677
        ;   XREF to: 0053d6c1 (CONDITIONAL_JUMP)  ; LAB_0053d6c1
    MOV EBP,0x5edbd8                    ; 0053d679 | = "..\\core\\podmain.cpp"
    LEA EAX,[ESP + 0x114]               ; 0053d67e
        ;   Label: LAB_0053d67e
    PUSH EAX                            ; 0053d685
    PUSH 0x5edbd4                       ; 0053d686 | DAT_005edbd4
    PUSH EDI                            ; 0053d68b
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0053d68c
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 0053d691
    LEA EAX,[ESP + 0x214]               ; 0053d694
    PUSH EAX                            ; 0053d69b
    LEA EAX,[ESP + 0x118]               ; 0053d69c
    PUSH EAX                            ; 0053d6a3
    MOV EDX,dword ptr [EBX + 0x194]     ; 0053d6a4
    PUSH EBX                            ; 0053d6aa
    CALL dword ptr [EDX + 0xc]          ; 0053d6ab
    ADD ESP,0xc                         ; 0053d6ae
    TEST EAX,EAX                        ; 0053d6b1
    JZ 0x0053d6d5                       ; 0053d6b3
        ;   XREF to: 0053d6d5 (CONDITIONAL_JUMP)  ; LAB_0053d6d5
    MOV ECX,dword ptr [ESP + 0x314]     ; 0053d6b5
        ;   Label: LAB_0053d6b5
    INC ESI                             ; 0053d6bc
    CMP ESI,ECX                         ; 0053d6bd
    JL 0x0053d67e                       ; 0053d6bf
        ;   XREF to: 0053d67e (CONDITIONAL_JUMP)  ; LAB_0053d67e
    PUSH EDI                            ; 0053d6c1
        ;   Label: LAB_0053d6c1
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 0053d6c2
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 0053d6c7
    ADD ESP,0x318                       ; 0053d6ca
    POP EBP                             ; 0053d6d0
    POP EDI                             ; 0053d6d1
    POP ESI                             ; 0053d6d2
    POP EBX                             ; 0053d6d3
    RET                                 ; 0053d6d4
    MOV dword ptr [0x01d1d404],0x45     ; 0053d6d5 | DAT_01d1d404
        ;   Label: LAB_0053d6d5
    LEA EAX,[ESP + 0x214]               ; 0053d6df
    PUSH EAX                            ; 0053d6e6
    LEA EAX,[ESP + 0x118]               ; 0053d6e7
    PUSH EAX                            ; 0053d6ee
    PUSH 0x5edbec                       ; 0053d6ef | = "Can't mount %s: %s"
    MOV dword ptr [0x01d1d400],EBP      ; 0053d6f4 | DAT_01d1d400
    CALL core_main.c_FUN_005030e0       ; 0053d6fa
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0xc                         ; 0053d6ff
    JMP 0x0053d6b5                      ; 0053d702
        ;   XREF to: 0053d6b5 (UNCONDITIONAL_JUMP)  ; LAB_0053d6b5

