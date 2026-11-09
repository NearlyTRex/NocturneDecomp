; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_actor_cpp_copyToActorDebugBuffer_FUN_0040ada0(char *source_string)
;
; Parameters:
; char *           Stack[0x4]:4   source_string
;
; Called Functions:
;   crt_memory.c_memset_FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0040ada0
        ;   Label: core_actor.cpp_copyToActorDebugBuffer_FUN_0040ada0
    MOV ESI,dword ptr [ESP + 0x8]       ; 0040ada1
    PUSH 0x32                           ; 0040ada5
    PUSH 0x0                            ; 0040ada7
    PUSH 0x7bbfc0                       ; 0040ada9
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0040adae
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0040adb3
    TEST ESI,ESI                        ; 0040adb6
    JNZ 0x0040adc1                      ; 0040adb8
        ;   XREF to: 0040adc1 (CONDITIONAL_JUMP)  ; LAB_0040adc1
    MOV EAX,0x7bbfc0                    ; 0040adba
    POP ESI                             ; 0040adbf
    RET                                 ; 0040adc0
    PUSH EDI                            ; 0040adc1
        ;   Label: LAB_0040adc1
    MOV ECX,0x31                        ; 0040adc2
    MOV EDI,0x7bbfc0                    ; 0040adc7
    PUSH EDI                            ; 0040adcc
    MOV EAX,ECX                         ; 0040adcd
    SHR ECX,0x2                         ; 0040adcf
    MOVSD.REP ES:EDI,ESI                ; 0040add2
    MOV CL,AL                           ; 0040add4
    AND CL,0x3                          ; 0040add6
    MOVSB.REP ES:EDI,ESI                ; 0040add9
    POP EDI                             ; 0040addb
    POP EDI                             ; 0040addc
    MOV EAX,0x7bbfc0                    ; 0040addd
    POP ESI                             ; 0040ade2
    RET                                 ; 0040ade3

