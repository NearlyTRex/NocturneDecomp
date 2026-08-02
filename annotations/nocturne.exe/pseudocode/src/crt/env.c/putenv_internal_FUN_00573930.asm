; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_env_c_putenv_internal_FUN_00573930(char *envstr)
;
; Parameters:
; char *           Stack[0x4]:4   envstr
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   crt_unknown.c_FUN_00572b70 at 00572c9e
;
; Referenced Globals:
;   undefined4 DAT_02de54a8
;
; Called Functions:
;   crt_env.c_updateEnvironTable_FUN_00573afc
;   crt_errno.c_convertWindowsErrorToErrno_FUN_0056c6d0
;   crt_memory.c_malloc_FUN_005635b0
;   crt_string.c_char_in_set_FUN_00572a90
;   crt_unknown.c_FUN_005638d0
;   crt_unknown.c_FUN_00574000
;   crt_unknown.c_FUN_00574030
;   crt_unknown.c_FUN_00574264
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00573930
        ;   Label: crt_env.c_putenv_internal_FUN_00573930
    PUSH ESI                            ; 00573931
    PUSH EDI                            ; 00573932
    PUSH EBP                            ; 00573933
    SUB ESP,0x14                        ; 00573934
    MOV EDX,0x2                         ; 00573937
    PUSH 0x3d                           ; 0057393c
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0057393e
    MOV EBX,0x1                         ; 00573942
    PUSH ECX                            ; 00573947
    MOV dword ptr [ESP + 0xc],EDX       ; 00573948
    MOV dword ptr [ESP + 0x8],EBX       ; 0057394c
    CALL crt_string.c_char_in_set_FUN_00572a90 ; 00573950
        ;   XREF to: 00572a90 (UNCONDITIONAL_CALL)  ; char * crt_string.c_char_in_set_FUN_00572a90(char * charset, wchar_t wc)
    MOV EBP,EAX                         ; 00573955
    ADD ESP,0x8                         ; 00573957
    TEST EAX,EAX                        ; 0057395a
    JNZ 0x00573968                      ; 0057395c
        ;   XREF to: 00573968 (CONDITIONAL_JUMP)  ; LAB_00573968
    MOV EAX,0xffffffff                  ; 0057395e
    JMP 0x00573af4                      ; 00573963
        ;   XREF to: 00573af4 (UNCONDITIONAL_JUMP)  ; LAB_00573af4
    MOV ESI,dword ptr [ESP + 0x28]      ; 00573968
        ;   Label: LAB_00573968
    CMP EAX,ESI                         ; 0057396c
    JNZ 0x0057397d                      ; 0057396e
        ;   XREF to: 0057397d (CONDITIONAL_JUMP)  ; LAB_0057397d
    MOV EAX,0xffffffff                  ; 00573970
    ADD ESP,0x14                        ; 00573975
    POP EBP                             ; 00573978
    POP EDI                             ; 00573979
    POP ESI                             ; 0057397a
    POP EBX                             ; 0057397b
    RET                                 ; 0057397c
    SUB EAX,ESI                         ; 0057397d
        ;   Label: LAB_0057397d
    MOV dword ptr [ESP + 0x10],EAX      ; 0057397f
    ADD EAX,EBX                         ; 00573983
    PUSH EAX                            ; 00573985
    CALL crt_memory.c_malloc_FUN_005635b0 ; 00573986
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005635b0(ulong size)
    ADD ESP,0x4                         ; 0057398b
    MOV EBX,EAX                         ; 0057398e
    MOV dword ptr [ESP + 0x8],EAX       ; 00573990
    TEST EAX,EAX                        ; 00573994
    JNZ 0x005739a5                      ; 00573996
        ;   XREF to: 005739a5 (CONDITIONAL_JUMP)  ; LAB_005739a5
    MOV EAX,0xffffffff                  ; 00573998
    ADD ESP,0x14                        ; 0057399d
    POP EBP                             ; 005739a0
    POP EDI                             ; 005739a1
    POP ESI                             ; 005739a2
    POP EBX                             ; 005739a3
    RET                                 ; 005739a4
    MOV ECX,dword ptr [ESP + 0x10]      ; 005739a5
        ;   Label: LAB_005739a5
    MOV EDI,EAX                         ; 005739a9
    PUSH ES                             ; 005739ab
    MOV AX,DS                           ; 005739ac
    MOV ES,AX                           ; 005739ae
    PUSH EDI                            ; 005739b0
    MOV EAX,ECX                         ; 005739b1
    SHR ECX,0x2                         ; 005739b3
    MOVSD.REP ES:EDI,ESI                ; 005739b6
    MOV CL,AL                           ; 005739b8
    AND CL,0x3                          ; 005739ba
    MOVSB.REP ES:EDI,ESI                ; 005739bd
    POP EDI                             ; 005739bf
    POP ES                              ; 005739c0
    LEA ESI,[EBP + 0x1]                 ; 005739c1
    MOV EAX,dword ptr [ESP + 0x10]      ; 005739c4
    PUSH ESI                            ; 005739c8
    MOV byte ptr [EBX + EAX*0x1],0x0    ; 005739c9
    CALL crt_unknown.c_FUN_00574000     ; 005739cd
        ;   XREF to: 00574000 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00574000()
    MOV EBP,EAX                         ; 005739d2
    ADD ESP,0x4                         ; 005739d4
    TEST EAX,EAX                        ; 005739d7
    JZ 0x00573a1f                       ; 005739d9
        ;   XREF to: 00573a1f (CONDITIONAL_JUMP)  ; LAB_00573a1f
    INC EAX                             ; 005739db
    PUSH EAX                            ; 005739dc
    CALL crt_memory.c_malloc_FUN_005635b0 ; 005739dd
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005635b0(ulong size)
    ADD ESP,0x4                         ; 005739e2
    MOV EDX,EAX                         ; 005739e5
    MOV dword ptr [ESP + 0xc],EAX       ; 005739e7
    TEST EAX,EAX                        ; 005739eb
    JNZ 0x005739ff                      ; 005739ed
        ;   XREF to: 005739ff (CONDITIONAL_JUMP)  ; LAB_005739ff
    PUSH EBX                            ; 005739ef
    CALL crt_unknown.c_FUN_005638d0     ; 005739f0
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    MOV EAX,0xffffffff                  ; 005739f5
    JMP 0x00573af1                      ; 005739fa
        ;   XREF to: 00573af1 (UNCONDITIONAL_JUMP)  ; LAB_00573af1
    MOV ECX,EBP                         ; 005739ff
        ;   Label: LAB_005739ff
    MOV EDI,EAX                         ; 00573a01
    PUSH ES                             ; 00573a03
    MOV AX,DS                           ; 00573a04
    MOV ES,AX                           ; 00573a06
    PUSH EDI                            ; 00573a08
    MOV EAX,ECX                         ; 00573a09
    SHR ECX,0x2                         ; 00573a0b
    MOVSD.REP ES:EDI,ESI                ; 00573a0e
    MOV CL,AL                           ; 00573a10
    AND CL,0x3                          ; 00573a12
    MOVSB.REP ES:EDI,ESI                ; 00573a15
    POP EDI                             ; 00573a17
    POP ES                              ; 00573a18
    MOV byte ptr [EDX + EBP*0x1],0x0    ; 00573a19
    JMP 0x00573a23                      ; 00573a1d
        ;   XREF to: 00573a23 (UNCONDITIONAL_JUMP)  ; LAB_00573a23
    MOV dword ptr [ESP + 0xc],EAX       ; 00573a1f
        ;   Label: LAB_00573a1f
    MOV EAX,dword ptr [ESP + 0xc]       ; 00573a23
        ;   Label: LAB_00573a23
    PUSH EAX                            ; 00573a27
    MOV EDX,dword ptr [ESP + 0xc]       ; 00573a28
    PUSH EDX                            ; 00573a2c
    CALL dword ptr CS:[0x575590]        ; 00573a2d
    MOV ECX,dword ptr [ESP + 0x8]       ; 00573a34
    PUSH ECX                            ; 00573a38
    MOV EBX,EAX                         ; 00573a39
    CALL crt_unknown.c_FUN_005638d0     ; 00573a3b
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    ADD ESP,0x4                         ; 00573a40
    MOV ESI,dword ptr [ESP + 0xc]       ; 00573a43
    PUSH ESI                            ; 00573a47
    CALL crt_unknown.c_FUN_005638d0     ; 00573a48
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    ADD ESP,0x4                         ; 00573a4d
    TEST EBX,EBX                        ; 00573a50
    JNZ 0x00573a61                      ; 00573a52
        ;   XREF to: 00573a61 (CONDITIONAL_JUMP)  ; LAB_00573a61
    MOV EAX,0xffffffff                  ; 00573a54
    ADD ESP,0x14                        ; 00573a59
    POP EBP                             ; 00573a5c
    POP EDI                             ; 00573a5d
    POP ESI                             ; 00573a5e
    POP EBX                             ; 00573a5f
    RET                                 ; 00573a60
    MOV EDI,dword ptr [ESP + 0x28]      ; 00573a61
        ;   Label: LAB_00573a61
    PUSH EDI                            ; 00573a65
    CALL crt_env.c_updateEnvironTable_FUN_00573afc ; 00573a66
        ;   XREF to: 00573afc (UNCONDITIONAL_CALL)  ; int crt_env.c_updateEnvironTable_FUN_00573afc(char * envstr)
    ADD ESP,0x4                         ; 00573a6b
    TEST EAX,EAX                        ; 00573a6e
    JZ 0x00573a7f                       ; 00573a70
        ;   XREF to: 00573a7f (CONDITIONAL_JUMP)  ; LAB_00573a7f
    MOV EAX,0xffffffff                  ; 00573a72
    ADD ESP,0x14                        ; 00573a77
    POP EBP                             ; 00573a7a
    POP EDI                             ; 00573a7b
    POP ESI                             ; 00573a7c
    POP EBX                             ; 00573a7d
    RET                                 ; 00573a7e
    CMP dword ptr [0x02de54a8],0x0      ; 00573a7f | DAT_02de54a8
        ;   Label: LAB_00573a7f
    JZ 0x00573af4                       ; 00573a86
        ;   XREF to: 00573af4 (CONDITIONAL_JUMP)  ; LAB_00573af4
    PUSH EDI                            ; 00573a88
    CALL crt_unknown.c_FUN_00574000     ; 00573a89
        ;   XREF to: 00574000 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00574000()
    ADD ESP,0x4                         ; 00573a8e
    LEA ESI,[EAX + 0x1]                 ; 00573a91
    MOV EAX,dword ptr [ESP + 0x4]       ; 00573a94
    IMUL EAX,ESI                        ; 00573a98
    PUSH EAX                            ; 00573a9b
    CALL crt_memory.c_malloc_FUN_005635b0 ; 00573a9c
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005635b0(ulong size)
    MOV EBX,EAX                         ; 00573aa1
    ADD ESP,0x4                         ; 00573aa3
    TEST EAX,EAX                        ; 00573aa6
    JNZ 0x00573ac1                      ; 00573aa8
        ;   XREF to: 00573ac1 (CONDITIONAL_JUMP)  ; LAB_00573ac1
    PUSH 0x5                            ; 00573aaa
    CALL crt_errno.c_convertWindowsErrorToErrno_FUN_0056c6d0 ; 00573aac
        ;   XREF to: 0056c6d0 (UNCONDITIONAL_CALL)  ; int crt_errno.c_convertWindowsErrorToErrno_FUN_0056c6d0(DWORD windows_error)
    MOV EAX,0xffffffff                  ; 00573ab1
    ADD ESP,0x4                         ; 00573ab6
    ADD ESP,0x14                        ; 00573ab9
    POP EBP                             ; 00573abc
    POP EDI                             ; 00573abd
    POP ESI                             ; 00573abe
    POP EBX                             ; 00573abf
    RET                                 ; 00573ac0
    IMUL ESI,dword ptr [ESP]            ; 00573ac1
        ;   Label: LAB_00573ac1
    PUSH ESI                            ; 00573ac5
    PUSH EDI                            ; 00573ac6
    PUSH EAX                            ; 00573ac7
    CALL crt_unknown.c_FUN_00574030     ; 00573ac8
        ;   XREF to: 00574030 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00574030()
    ADD ESP,0xc                         ; 00573acd
    CMP EAX,-0x1                        ; 00573ad0
    JNZ 0x00573aeb                      ; 00573ad3
        ;   XREF to: 00573aeb (CONDITIONAL_JUMP)  ; LAB_00573aeb
    PUSH EBX                            ; 00573ad5
    CALL crt_unknown.c_FUN_005638d0     ; 00573ad6
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    MOV EAX,0xffffffff                  ; 00573adb
    ADD ESP,0x4                         ; 00573ae0
    ADD ESP,0x14                        ; 00573ae3
    POP EBP                             ; 00573ae6
    POP EDI                             ; 00573ae7
    POP ESI                             ; 00573ae8
    POP EBX                             ; 00573ae9
    RET                                 ; 00573aea
    PUSH EBX                            ; 00573aeb
        ;   Label: LAB_00573aeb
    CALL crt_unknown.c_FUN_00574264     ; 00573aec
        ;   XREF to: 00574264 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00574264()
    ADD ESP,0x4                         ; 00573af1
        ;   Label: LAB_00573af1
    ADD ESP,0x14                        ; 00573af4
        ;   Label: LAB_00573af4
    POP EBP                             ; 00573af7
    POP EDI                             ; 00573af8
    POP ESI                             ; 00573af9
    POP EBX                             ; 00573afa
    RET                                 ; 00573afb

