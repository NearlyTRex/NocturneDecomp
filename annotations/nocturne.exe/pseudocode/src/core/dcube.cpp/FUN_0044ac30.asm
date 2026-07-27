; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcube_cpp_FUN_0044ac30(int *param_1)
;
;
; XREF[2]:
;   core_dtrace.cpp_FUN_0046bfe0 at 0046c0cc
;   core_dtrace.cpp_FUN_0046c100 at 0046c1eb
;
; Referenced Globals:
;   TerminatedCString s_core_dcube_cpp_0057bbbb
;   TerminatedCString s_CDemonCube_allocMemory_O_0057bbcd
;   TerminatedCString s_core_dcube_cpp_0057bbfb
;   TerminatedCString s_CDemonCube_allocMemory_O_0057bc0d
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_unknown.c_FUN_00565c50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044ac30
        ;   Label: core_dcube.cpp_FUN_0044ac30
    PUSH EBP                            ; 0044ac31
    MOV EBX,dword ptr [ESP + 0xc]       ; 0044ac32
    PUSH 0x1                            ; 0044ac36
    PUSH 0x40                           ; 0044ac38
    CALL crt_unknown.c_FUN_00565c50     ; 0044ac3a
        ;   XREF to: 00565c50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00565c50()
    ADD ESP,0x8                         ; 0044ac3f
    MOV dword ptr [EBX],EAX             ; 0044ac42
    TEST EAX,EAX                        ; 0044ac44
    JNZ 0x0044ac6d                      ; 0044ac46
        ;   XREF to: 0044ac6d (CONDITIONAL_JUMP)  ; LAB_0044ac6d
    PUSH ESI                            ; 0044ac48
    MOV ECX,0x57bbbb                    ; 0044ac49 | = "..\\core\\dcube.cpp"
    MOV ESI,0x5f3                       ; 0044ac4e
    PUSH 0x57bbcd                       ; 0044ac53 | = "CDemonCube::allocMemory - Out of voxe..."
    MOV dword ptr [0x01cc4800],ECX      ; 0044ac58 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 0044ac5e | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0044ac64
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0044ac69
    POP ESI                             ; 0044ac6c
    PUSH 0x1                            ; 0044ac6d
        ;   Label: LAB_0044ac6d
    PUSH 0x40                           ; 0044ac6f
    CALL crt_unknown.c_FUN_00565c50     ; 0044ac71
        ;   XREF to: 00565c50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00565c50()
    ADD ESP,0x8                         ; 0044ac76
    MOV dword ptr [EBX + 0x4],EAX       ; 0044ac79
    TEST EAX,EAX                        ; 0044ac7c
    JZ 0x0044ac83                       ; 0044ac7e
        ;   XREF to: 0044ac83 (CONDITIONAL_JUMP)  ; LAB_0044ac83
    POP EBP                             ; 0044ac80
    POP EBX                             ; 0044ac81
    RET                                 ; 0044ac82
    MOV EBP,0x57bbfb                    ; 0044ac83 | = "..\\core\\dcube.cpp"
        ;   Label: LAB_0044ac83
    MOV EAX,0x5f5                       ; 0044ac88
    PUSH 0x57bc0d                       ; 0044ac8d | = "CDemonCube::allocMemory - Out of voxe..."
    MOV dword ptr [0x01cc4800],EBP      ; 0044ac92 | PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 0044ac98 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0044ac9d
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0044aca2
    POP EBP                             ; 0044aca5
    POP EBX                             ; 0044aca6
    RET                                 ; 0044aca7

