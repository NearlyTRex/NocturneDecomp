; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_actor_cpp_copyToActorDebugBuffer_FUN_0040acf0(char *source_string)
;
; Parameters:
; char *           Stack[0x4]:4   source_string
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0040acf0
        ;   Label: core_actor.cpp_copyToActorDebugBuffer_FUN_0040acf0
    MOV ESI,dword ptr [ESP + 0x8]       ; 0040acf1
    PUSH 0x32                           ; 0040acf5
    PUSH 0x0                            ; 0040acf7
    PUSH 0x7df940                       ; 0040acf9
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0040acfe
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0040ad03
    TEST ESI,ESI                        ; 0040ad06
    JNZ 0x0040ad11                      ; 0040ad08
        ;   XREF to: 0040ad11 (CONDITIONAL_JUMP)  ; LAB_0040ad11
    MOV EAX,0x7df940                    ; 0040ad0a
    POP ESI                             ; 0040ad0f
    RET                                 ; 0040ad10
    PUSH EDI                            ; 0040ad11
        ;   Label: LAB_0040ad11
    MOV ECX,0x31                        ; 0040ad12
    MOV EDI,0x7df940                    ; 0040ad17
    PUSH EDI                            ; 0040ad1c
    MOV EAX,ECX                         ; 0040ad1d
    SHR ECX,0x2                         ; 0040ad1f
    MOVSD.REP ES:EDI,ESI                ; 0040ad22
    MOV CL,AL                           ; 0040ad24
    AND CL,0x3                          ; 0040ad26
    MOVSB.REP ES:EDI,ESI                ; 0040ad29
    POP EDI                             ; 0040ad2b
    POP EDI                             ; 0040ad2c
    MOV EAX,0x7df940                    ; 0040ad2d
    POP ESI                             ; 0040ad32
    RET                                 ; 0040ad33

