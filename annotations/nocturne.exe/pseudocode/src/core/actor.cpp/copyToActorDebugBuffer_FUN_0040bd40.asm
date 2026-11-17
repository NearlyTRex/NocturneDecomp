; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_actor_cpp_copyToActorDebugBuffer_FUN_0040bd40(char *source_string)
;
; Parameters:
; char *           Stack[0x4]:4   source_string
;
; Referenced Globals:
;   char[52] g_ActorDebugBuffer
;   undefined4 g_ActorDebugBuffer+4
;
; Called Functions:
;   crt_memory.c_memset_FUN_00563cc0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0040bd40
        ;   Label: core_actor.cpp_copyToActorDebugBuffer_FUN_0040bd40
    MOV ESI,dword ptr [ESP + 0x8]       ; 0040bd41
    PUSH 0x32                           ; 0040bd45
    PUSH 0x0                            ; 0040bd47
    PUSH 0x763e10                       ; 0040bd49 | g_ActorDebugBuffer
    CALL crt_memory.c_memset_FUN_00563cc0 ; 0040bd4e
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0040bd53
    TEST ESI,ESI                        ; 0040bd56
    JNZ 0x0040bd61                      ; 0040bd58
        ;   XREF to: 0040bd61 (CONDITIONAL_JUMP)  ; LAB_0040bd61
    MOV EAX,0x763e10                    ; 0040bd5a | g_ActorDebugBuffer
    POP ESI                             ; 0040bd5f
    RET                                 ; 0040bd60
    PUSH EDI                            ; 0040bd61
        ;   Label: LAB_0040bd61
    MOV ECX,0x31                        ; 0040bd62
    MOV EDI,0x763e10                    ; 0040bd67 | g_ActorDebugBuffer
    PUSH EDI                            ; 0040bd6c | g_ActorDebugBuffer
    MOV EAX,ECX                         ; 0040bd6d
    SHR ECX,0x2                         ; 0040bd6f
    MOVSD.REP ES:EDI,ESI                ; 0040bd72 | g_ActorDebugBuffer | g_ActorDebugBuffer+4
    MOV CL,AL                           ; 0040bd74
    AND CL,0x3                          ; 0040bd76
    MOVSB.REP ES:EDI,ESI                ; 0040bd79 | g_ActorDebugBuffer+4
    POP EDI                             ; 0040bd7b
    POP EDI                             ; 0040bd7c
    MOV EAX,0x763e10                    ; 0040bd7d | g_ActorDebugBuffer
    POP ESI                             ; 0040bd82
    RET                                 ; 0040bd83

