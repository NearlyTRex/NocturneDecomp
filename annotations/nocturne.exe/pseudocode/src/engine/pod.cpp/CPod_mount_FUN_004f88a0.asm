; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_pod_cpp_CPod_mount_FUN_004f88a0(int *param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_engine_pod_cpp_0058db9c
;   TerminatedCString s_Too_many_POD_files_at_on_0058dbae
;   TerminatedCString s_engine_pod_cpp_0058dbcb
;   TerminatedCString s_Out_of_memory_0058dbdd
;   TerminatedCString s_engine_pod_cpp_0058dbec
;   TerminatedCString s_Can_t_mount_s_0058dbfe
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_unknown.c_FUN_0056497c
;   engine_pod.cpp_CPodFile_ctor_FUN_004f7a80
;   engine_pod.cpp_FUN_004f7ae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f88a0
        ;   Label: engine_pod.cpp_CPod_mount_FUN_004f88a0
    PUSH ESI                            ; 004f88a1
    PUSH EBP                            ; 004f88a2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004f88a3
    CMP dword ptr [EBX],0x64            ; 004f88a7
    JGE 0x004f8915                      ; 004f88aa
        ;   XREF to: 004f8915 (CONDITIONAL_JUMP)  ; LAB_004f8915
    PUSH 0x21c                          ; 004f88ac
        ;   Label: LAB_004f88ac
    CALL crt_unknown.c_FUN_0056497c     ; 004f88b1
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 004f88b6
    TEST EAX,EAX                        ; 004f88b9
    JZ 0x004f88c6                       ; 004f88bb
        ;   XREF to: 004f88c6 (CONDITIONAL_JUMP)  ; LAB_004f88c6
    PUSH EAX                            ; 004f88bd
    CALL engine_pod.cpp_CPodFile_ctor_FUN_004f7a80 ; 004f88be
        ;   XREF to: 004f7a80 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_ctor_FUN_004f7a80(CPodFile * this_ptr)
    ADD ESP,0x4                         ; 004f88c3
    MOV EDX,dword ptr [EBX]             ; 004f88c6
        ;   Label: LAB_004f88c6
    MOV dword ptr [EBX + EDX*0x4 + 0x4],EAX ; 004f88c8
    MOV EAX,dword ptr [EBX]             ; 004f88cc
    CMP dword ptr [EBX + EAX*0x4 + 0x4],0x0 ; 004f88ce
    JNZ 0x004f88f7                      ; 004f88d3
        ;   XREF to: 004f88f7 (CONDITIONAL_JUMP)  ; LAB_004f88f7
    MOV EBP,0x58dbcb                    ; 004f88d5 | = "..\\engine\\pod.cpp"
    MOV EAX,0x26d                       ; 004f88da
    PUSH 0x58dbdd                       ; 004f88df | = "Out of memory!"
    MOV dword ptr [0x01cc4800],EBP      ; 004f88e4 | PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 004f88ea | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004f88ef
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004f88f4
    MOV EDX,dword ptr [ESP + 0x14]      ; 004f88f7
        ;   Label: LAB_004f88f7
    MOV EAX,dword ptr [EBX]             ; 004f88fb
    PUSH EDX                            ; 004f88fd
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x4] ; 004f88fe
    PUSH ECX                            ; 004f8902
    CALL engine_pod.cpp_FUN_004f7ae0    ; 004f8903
        ;   XREF to: 004f7ae0 (UNCONDITIONAL_CALL)  ; undefined engine_pod.cpp_FUN_004f7ae0()
    ADD ESP,0x8                         ; 004f8908
    TEST EAX,EAX                        ; 004f890b
    JZ 0x004f893d                       ; 004f890d
        ;   XREF to: 004f893d (CONDITIONAL_JUMP)  ; LAB_004f893d
    INC dword ptr [EBX]                 ; 004f890f
    POP EBP                             ; 004f8911
    POP ESI                             ; 004f8912
    POP EBX                             ; 004f8913
    RET                                 ; 004f8914
    MOV ECX,0x58db9c                    ; 004f8915 | = "..\\engine\\pod.cpp"
        ;   Label: LAB_004f8915
    MOV ESI,0x267                       ; 004f891a
    PUSH 0x58dbae                       ; 004f891f | = "Too many .POD files at once!"
    MOV dword ptr [0x01cc4800],ECX      ; 004f8924 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004f892a | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004f8930
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004f8935
    JMP 0x004f88ac                      ; 004f8938
        ;   XREF to: 004f88ac (UNCONDITIONAL_JUMP)  ; LAB_004f88ac
    PUSH EDI                            ; 004f893d
        ;   Label: LAB_004f893d
    MOV EBP,dword ptr [ESP + 0x18]      ; 004f893e
    PUSH EBP                            ; 004f8942
    MOV ESI,0x58dbec                    ; 004f8943 | = "..\\engine\\pod.cpp"
    MOV EDI,0x26e                       ; 004f8948
    PUSH 0x58dbfe                       ; 004f894d | = "Can't mount %s"
    MOV dword ptr [0x01cc4800],ESI      ; 004f8952 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 004f8958 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004f895e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 004f8963
    POP EDI                             ; 004f8966
    INC dword ptr [EBX]                 ; 004f8967
    POP EBP                             ; 004f8969
    POP ESI                             ; 004f896a
    POP EBX                             ; 004f896b
    RET                                 ; 004f896c

