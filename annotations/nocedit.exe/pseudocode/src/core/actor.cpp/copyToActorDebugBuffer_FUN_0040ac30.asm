; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_actor_cpp_copyToActorDebugBuffer_FUN_0040ac30(char *source_string)
;
; Parameters:
; char *           Stack[0x4]:4   source_string
;
; Referenced Globals:
;   char[52] g_ActorDebugBuffer
;   undefined4 CHAR_ARRAY_00821fc4
;
; Called Functions:
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0040ac30
        ;   Label: core_actor.cpp_copyToActorDebugBuffer_FUN_0040ac30
    MOV ESI,dword ptr [ESP + 0x8]       ; 0040ac31
    PUSH 0x32                           ; 0040ac35
    PUSH 0x0                            ; 0040ac37
    PUSH 0x821fc0                       ; 0040ac39 | g_ActorDebugBuffer
    CALL crt_memory.c_memset_FUN_005fde40 ; 0040ac3e
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0040ac43
    TEST ESI,ESI                        ; 0040ac46
    JNZ 0x0040ac51                      ; 0040ac48
        ;   XREF to: 0040ac51 (CONDITIONAL_JUMP)  ; LAB_0040ac51
    MOV EAX,0x821fc0                    ; 0040ac4a | g_ActorDebugBuffer
    POP ESI                             ; 0040ac4f
    RET                                 ; 0040ac50
    PUSH EDI                            ; 0040ac51
        ;   Label: LAB_0040ac51
    MOV ECX,0x31                        ; 0040ac52
    MOV EDI,0x821fc0                    ; 0040ac57 | g_ActorDebugBuffer
    PUSH EDI                            ; 0040ac5c | g_ActorDebugBuffer
    MOV EAX,ECX                         ; 0040ac5d
    SHR ECX,0x2                         ; 0040ac5f
    MOVSD.REP ES:EDI,ESI                ; 0040ac62 | g_ActorDebugBuffer | CHAR_ARRAY_00821fc4
    MOV CL,AL                           ; 0040ac64
    AND CL,0x3                          ; 0040ac66
    MOVSB.REP ES:EDI,ESI                ; 0040ac69 | CHAR_ARRAY_00821fc4
    POP EDI                             ; 0040ac6b
    POP EDI                             ; 0040ac6c
    MOV EAX,0x821fc0                    ; 0040ac6d | g_ActorDebugBuffer
    POP ESI                             ; 0040ac72
    RET                                 ; 0040ac73

