; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_actor_cpp_copyToActorDebugBuffer_FUN_0040aab0(char *source_string)
;
; Parameters:
; char *           Stack[0x4]:4   source_string
;
; Called Functions:
;   crt_memory.c_memset_FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0040aab0
        ;   Label: core_actor.cpp_copyToActorDebugBuffer_FUN_0040aab0
    MOV ESI,dword ptr [ESP + 0x8]       ; 0040aab1
    PUSH 0x32                           ; 0040aab5
    PUSH 0x0                            ; 0040aab7
    PUSH 0x7c2fc0                       ; 0040aab9
    CALL crt_memory.c_memset_FUN_005bfb70 ; 0040aabe
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0040aac3
    TEST ESI,ESI                        ; 0040aac6
    JNZ 0x0040aad1                      ; 0040aac8
        ;   XREF to: 0040aad1 (CONDITIONAL_JUMP)  ; LAB_0040aad1
    MOV EAX,0x7c2fc0                    ; 0040aaca
    POP ESI                             ; 0040aacf
    RET                                 ; 0040aad0
    PUSH EDI                            ; 0040aad1
        ;   Label: LAB_0040aad1
    MOV ECX,0x31                        ; 0040aad2
    MOV EDI,0x7c2fc0                    ; 0040aad7
    PUSH EDI                            ; 0040aadc
    MOV EAX,ECX                         ; 0040aadd
    SHR ECX,0x2                         ; 0040aadf
    MOVSD.REP ES:EDI,ESI                ; 0040aae2
    MOV CL,AL                           ; 0040aae4
    AND CL,0x3                          ; 0040aae6
    MOVSB.REP ES:EDI,ESI                ; 0040aae9
    POP EDI                             ; 0040aaeb
    POP EDI                             ; 0040aaec
    MOV EAX,0x7c2fc0                    ; 0040aaed
    POP ESI                             ; 0040aaf2
    RET                                 ; 0040aaf3

