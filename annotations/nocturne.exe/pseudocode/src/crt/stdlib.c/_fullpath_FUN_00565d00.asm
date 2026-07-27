; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char(*) [4] crt_stdlib_c__fullpath_FUN_00565d00(char(*param_1) [4],LPCSTR param_2,uint param_3)
;
;
; XREF[5]:
;   FUN_005687bc at 00568807
;   FUN_0056c864 at 0056c8cd
;   engine_dosio.cpp_findFileNormally_FUN_00456800 at 00456832
;   engine_pod.cpp_FUN_004f7ae0 at 004f7b12
;   shape_edittool.cpp_FUN_00474ae0 at 00474c2c
;
; Referenced Globals:
;   void* PTR_GetFullPathNameA_00575518 = 00175d5c
;   TerminatedCString s_con_005989e4
;   undefined4 DAT_006e6f63
;
; Called Functions:
;   crt_errno.c___set_errno_FUN_0056c73c
;   crt_memory.c_malloc_FUN_005635b0
;   crt_string.c__stricmp_FUN_00564520
;   crt_unknown.c_FUN_005638d0
;   FUN_00568e80
;   FUN_0056c5f0
;   GetFullPathNameA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00565d00
        ;   Label: crt_stdlib.c__fullpath_FUN_00565d00
    PUSH ESI                            ; 00565d01
    PUSH EDI                            ; 00565d02
    PUSH EBP                            ; 00565d03
    SUB ESP,0x4                         ; 00565d04
    MOV EBX,dword ptr [ESP + 0x18]      ; 00565d07
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00565d0b
    MOV EDI,dword ptr [ESP + 0x20]      ; 00565d0f
    TEST EBX,EBX                        ; 00565d13
    JNZ 0x00565d3e                      ; 00565d15
        ;   XREF to: 00565d3e (CONDITIONAL_JUMP)  ; LAB_00565d3e
    MOV EDI,0x104                       ; 00565d17
    PUSH EDI                            ; 00565d1c
    CALL crt_memory.c_malloc_FUN_005635b0 ; 00565d1d
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_malloc_FUN_005635b0()
    ADD ESP,0x4                         ; 00565d22
    MOV EBP,EAX                         ; 00565d25
    TEST EAX,EAX                        ; 00565d27
    JNZ 0x00565d3c                      ; 00565d29
        ;   XREF to: 00565d3c (CONDITIONAL_JUMP)  ; LAB_00565d3c
    PUSH 0x5                            ; 00565d2b
    CALL FUN_00568e80                   ; 00565d2d
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00568e80()
    ADD ESP,0x4                         ; 00565d32
    XOR EAX,EAX                         ; 00565d35
    JMP 0x00565db8                      ; 00565d37
        ;   XREF to: 00565db8 (UNCONDITIONAL_JUMP)  ; LAB_00565db8
    MOV EBX,EAX                         ; 00565d3c
        ;   Label: LAB_00565d3c
    TEST ESI,ESI                        ; 00565d3e
        ;   Label: LAB_00565d3e
    JZ 0x00565d47                       ; 00565d40
        ;   XREF to: 00565d47 (CONDITIONAL_JUMP)  ; LAB_00565d47
    CMP byte ptr [ESI],0x0              ; 00565d42
    JNZ 0x00565d59                      ; 00565d45
        ;   XREF to: 00565d59 (CONDITIONAL_JUMP)  ; LAB_00565d59
    PUSH EDI                            ; 00565d47
        ;   Label: LAB_00565d47
    PUSH EBX                            ; 00565d48
    CALL FUN_0056c5f0                   ; 00565d49
        ;   XREF to: 0056c5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056c5f0()
    ADD ESP,0x8                         ; 00565d4e
    ADD ESP,0x4                         ; 00565d51
    POP EBP                             ; 00565d54
    POP EDI                             ; 00565d55
    POP ESI                             ; 00565d56
    POP EBX                             ; 00565d57
    RET                                 ; 00565d58
    PUSH 0x5989e4                       ; 00565d59 | = "con"
        ;   Label: LAB_00565d59
    PUSH ESI                            ; 00565d5e
    CALL crt_string.c__stricmp_FUN_00564520 ; 00565d5f
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 00565d64
    TEST EAX,EAX                        ; 00565d67
    JNZ 0x00565d96                      ; 00565d69
        ;   XREF to: 00565d96 (CONDITIONAL_JUMP)  ; LAB_00565d96
    CMP EDI,0x4                         ; 00565d6b
    JNC 0x00565d8d                      ; 00565d6e
        ;   XREF to: 00565d8d (CONDITIONAL_JUMP)  ; LAB_00565d8d
    PUSH EBP                            ; 00565d70
    CALL crt_unknown.c_FUN_005638d0     ; 00565d71
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    ADD ESP,0x4                         ; 00565d76
    PUSH 0xe                            ; 00565d79
    CALL FUN_00568e80                   ; 00565d7b
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00568e80()
    ADD ESP,0x4                         ; 00565d80
    XOR EAX,EAX                         ; 00565d83
    ADD ESP,0x4                         ; 00565d85
    POP EBP                             ; 00565d88
    POP EDI                             ; 00565d89
    POP ESI                             ; 00565d8a
    POP EBX                             ; 00565d8b
    RET                                 ; 00565d8c
    MOV EAX,[0x005989e4]                ; 00565d8d | = "con"
        ;   Label: LAB_00565d8d
    MOV dword ptr [EBX],EAX             ; 00565d92 | DAT_006e6f63
    JMP 0x00565db6                      ; 00565d94
        ;   XREF to: 00565db6 (UNCONDITIONAL_JUMP)  ; LAB_00565db6
    MOV EAX,ESP                         ; 00565d96
        ;   Label: LAB_00565d96
    PUSH EAX                            ; 00565d98
    PUSH EBX                            ; 00565d99
    PUSH EDI                            ; 00565d9a
    PUSH ESI                            ; 00565d9b
    CALL dword ptr CS:[0x575518]        ; 00565d9c | PTR_GetFullPathNameA_00575518
    TEST EAX,EAX                        ; 00565da3
    JNZ 0x00565db6                      ; 00565da5
        ;   XREF to: 00565db6 (CONDITIONAL_JUMP)  ; LAB_00565db6
    CALL crt_errno.c___set_errno_FUN_0056c73c ; 00565da7
        ;   XREF to: 0056c73c (UNCONDITIONAL_CALL)  ; undefined crt_errno.c___set_errno_FUN_0056c73c()
    XOR EAX,EAX                         ; 00565dac
    ADD ESP,0x4                         ; 00565dae
    POP EBP                             ; 00565db1
    POP EDI                             ; 00565db2
    POP ESI                             ; 00565db3
    POP EBX                             ; 00565db4
    RET                                 ; 00565db5
    MOV EAX,EBX                         ; 00565db6
        ;   Label: LAB_00565db6
    ADD ESP,0x4                         ; 00565db8
        ;   Label: LAB_00565db8
    POP EBP                             ; 00565dbb
    POP EDI                             ; 00565dbc
    POP ESI                             ; 00565dbd
    POP EBX                             ; 00565dbe
    RET                                 ; 00565dbf

