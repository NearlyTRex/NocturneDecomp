; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005aba00(int param_1)
;
;
; XREF[3]:
;   crt_unknown.c_FUN_005a7f48 at 005a7f4d
;   crt_unknown.c_FUN_005abb90 at 005abbaa
;   unkafter_asgaya.cpp_FUN_005ad9b4 at 005ad9b9
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079d4 = 005a7f44
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079d8 = 005a7f44
;   undefined4 DAT_00607bdc
;   undefined4 DAT_00607be0
;
; Called Functions:
;   crt_memory.c_realloc_FUN_005a3e50
;   crt_unknown.c_FUN_005a7f44
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aba00
        ;   Label: crt_unknown.c_FUN_005aba00
    CALL dword ptr [0x006079d4]         ; 005aba01 | PTR_crt_unknown.c_FUN_005a7f44_006079d4
    MOV EDX,dword ptr [0x00607be0]      ; 005aba07 | DAT_00607be0
    XOR EBX,EBX                         ; 005aba0d
    TEST EDX,EDX                        ; 005aba0f
    JLE 0x005aba41                      ; 005aba11
        ;   XREF to: 005aba41 (CONDITIONAL_JUMP)  ; LAB_005aba41
    LEA ECX,[EDX*0x4 + 0x0]             ; 005aba13
    XOR EAX,EAX                         ; 005aba1a
    MOV EDX,dword ptr [0x00607bdc]      ; 005aba1c | DAT_00607bdc
        ;   Label: LAB_005aba1c
    ADD EDX,EAX                         ; 005aba22
    CMP dword ptr [EDX],0x0             ; 005aba24
    JNZ 0x005aba39                      ; 005aba27
        ;   XREF to: 005aba39 (CONDITIONAL_JUMP)  ; LAB_005aba39
    MOV EAX,dword ptr [ESP + 0x8]       ; 005aba29
    MOV dword ptr [EDX],EAX             ; 005aba2d
    CALL dword ptr [0x006079d8]         ; 005aba2f | PTR_crt_unknown.c_FUN_005a7f44_006079d8
    MOV EAX,EBX                         ; 005aba35
    POP EBX                             ; 005aba37
    RET                                 ; 005aba38
    ADD EAX,0x4                         ; 005aba39
        ;   Label: LAB_005aba39
    INC EBX                             ; 005aba3c
    CMP EAX,ECX                         ; 005aba3d
    JL 0x005aba1c                       ; 005aba3f
        ;   XREF to: 005aba1c (CONDITIONAL_JUMP)  ; LAB_005aba1c
    MOV EAX,[0x00607be0]                ; 005aba41 | DAT_00607be0
        ;   Label: LAB_005aba41
    INC EAX                             ; 005aba46
    SHL EAX,0x2                         ; 005aba47
    PUSH EAX                            ; 005aba4a
    MOV EBX,dword ptr [0x00607bdc]      ; 005aba4b | DAT_00607bdc
    PUSH EBX                            ; 005aba51
    CALL crt_memory.c_realloc_FUN_005a3e50 ; 005aba52
        ;   XREF to: 005a3e50 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005a3e50(void * ptr, ulong new_size)
    MOV EDX,dword ptr [0x00607be0]      ; 005aba57 | DAT_00607be0
    MOV ECX,dword ptr [0x00607be0]      ; 005aba5d | DAT_00607be0
    ADD ESP,0x8                         ; 005aba63
    MOV [0x00607bdc],EAX                ; 005aba66 | DAT_00607bdc
    SHL EDX,0x2                         ; 005aba6b
    INC ECX                             ; 005aba6e
    ADD EAX,EDX                         ; 005aba6f
    MOV EDX,dword ptr [ESP + 0x8]       ; 005aba71
    MOV dword ptr [0x00607be0],ECX      ; 005aba75 | DAT_00607be0
    MOV dword ptr [EAX],EDX             ; 005aba7b
    CALL dword ptr [0x006079d8]         ; 005aba7d | PTR_crt_unknown.c_FUN_005a7f44_006079d8
    MOV EAX,[0x00607be0]                ; 005aba83 | DAT_00607be0
    DEC EAX                             ; 005aba88
    POP EBX                             ; 005aba89
    RET                                 ; 005aba8a

