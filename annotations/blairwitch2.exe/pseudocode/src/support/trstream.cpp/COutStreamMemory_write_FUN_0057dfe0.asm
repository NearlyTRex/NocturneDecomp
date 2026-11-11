; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl support_trstream_cpp_COutStreamMemory_write_FUN_0057dfe0(COutStreamMemory *this_ptr,undefined4 *param_2,uint param_3)
;
; Parameters:
; COutStreamMemory * Stack[0x4]:4   this_ptr
; undefined4 *     Stack[0x8]:4   param_2
; uint             Stack[0xc]:4   param_3
;
; Called Functions:
;   crt_memory.c_realloc_FUN_005b8ce0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057dfe0
        ;   Label: support_trstream.cpp_COutStreamMemory_write_FUN_0057dfe0
    PUSH ESI                            ; 0057dfe1
    PUSH EDI                            ; 0057dfe2
    PUSH EBP                            ; 0057dfe3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0057dfe4
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0057dfe8
    MOV EDX,dword ptr [EBX + 0xc]       ; 0057dfec
    MOV EAX,dword ptr [EBX + 0x8]       ; 0057dfef
    SUB EAX,EDX                         ; 0057dff2
    CMP EBP,EAX                         ; 0057dff4
    JLE 0x0057e004                      ; 0057dff6
        ;   XREF to: 0057e004 (CONDITIONAL_JUMP)  ; LAB_0057e004
    CMP dword ptr [EBX + 0x14],0x0      ; 0057dff8
    JNZ 0x0057e03b                      ; 0057dffc
        ;   XREF to: 0057e03b (CONDITIONAL_JUMP)  ; LAB_0057e03b
    TEST EAX,EAX                        ; 0057dffe
    JZ 0x0057e065                       ; 0057e000
        ;   XREF to: 0057e065 (CONDITIONAL_JUMP)  ; LAB_0057e065
    MOV EBP,EAX                         ; 0057e002
    MOV ESI,dword ptr [ESP + 0x18]      ; 0057e004
        ;   Label: LAB_0057e004
    MOV EDI,dword ptr [EBX + 0x4]       ; 0057e008
    MOV EAX,dword ptr [EBX + 0xc]       ; 0057e00b
    MOV ECX,EBP                         ; 0057e00e
    ADD EDI,EAX                         ; 0057e010
    PUSH EDI                            ; 0057e012
    MOV EAX,ECX                         ; 0057e013
    SHR ECX,0x2                         ; 0057e015
    MOVSD.REP ES:EDI,ESI                ; 0057e018
    MOV CL,AL                           ; 0057e01a
    AND CL,0x3                          ; 0057e01c
    MOVSB.REP ES:EDI,ESI                ; 0057e01f
    POP EDI                             ; 0057e021
    MOV EDX,dword ptr [EBX + 0xc]       ; 0057e022
    ADD EDX,EBP                         ; 0057e025
    MOV ECX,dword ptr [EBX + 0x10]      ; 0057e027
    MOV dword ptr [EBX + 0xc],EDX       ; 0057e02a
    CMP EDX,ECX                         ; 0057e02d
    JL 0x0057e034                       ; 0057e02f
        ;   XREF to: 0057e034 (CONDITIONAL_JUMP)  ; LAB_0057e034
    MOV dword ptr [EBX + 0x10],EDX      ; 0057e031
    XOR EAX,EAX                         ; 0057e034
        ;   Label: LAB_0057e034
    POP EBP                             ; 0057e036
    POP EDI                             ; 0057e037
    POP ESI                             ; 0057e038
    POP EBX                             ; 0057e039
    RET                                 ; 0057e03a
    LEA EDI,[EDX + EBP*0x1 + 0x4000]    ; 0057e03b
        ;   Label: LAB_0057e03b
    PUSH EDI                            ; 0057e042
    MOV ESI,dword ptr [EBX + 0x4]       ; 0057e043
    PUSH ESI                            ; 0057e046
    CALL crt_memory.c_realloc_FUN_005b8ce0 ; 0057e047
        ;   XREF to: 005b8ce0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005b8ce0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 0057e04c
    TEST EAX,EAX                        ; 0057e04f
    JZ 0x0057e05b                       ; 0057e051
        ;   XREF to: 0057e05b (CONDITIONAL_JUMP)  ; LAB_0057e05b
    MOV dword ptr [EBX + 0x4],EAX       ; 0057e053
    MOV dword ptr [EBX + 0x8],EDI       ; 0057e056
    JMP 0x0057e004                      ; 0057e059
        ;   XREF to: 0057e004 (UNCONDITIONAL_JUMP)  ; LAB_0057e004
    MOV EAX,0xfffffffe                  ; 0057e05b
        ;   Label: LAB_0057e05b
    POP EBP                             ; 0057e060
    POP EDI                             ; 0057e061
    POP ESI                             ; 0057e062
    POP EBX                             ; 0057e063
    RET                                 ; 0057e064
    MOV EAX,0xffffffff                  ; 0057e065
        ;   Label: LAB_0057e065
    POP EBP                             ; 0057e06a
    POP EDI                             ; 0057e06b
    POP ESI                             ; 0057e06c
    POP EBX                             ; 0057e06d
    RET                                 ; 0057e06e

