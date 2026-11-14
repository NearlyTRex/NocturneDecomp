; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * crt_unknown_c_FUN_005ade80(char *param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005a7f6c at 005a8066
;
; Called Functions:
;   crt_memory.c_malloc_FUN_005a3650
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ade80
        ;   Label: crt_unknown.c_FUN_005ade80
    PUSH ESI                            ; 005ade81
    PUSH EDI                            ; 005ade82
    MOV ESI,dword ptr [ESP + 0x10]      ; 005ade83
    MOV EDI,ESI                         ; 005ade87
    PUSH ES                             ; 005ade89
    MOV AX,DS                           ; 005ade8a
    MOV ES,AX                           ; 005ade8c
    SUB ECX,ECX                         ; 005ade8e
    DEC ECX                             ; 005ade90
    XOR EAX,EAX                         ; 005ade91
    SCASB.REPNE ES:EDI                  ; 005ade93
    NOT ECX                             ; 005ade95
    DEC ECX                             ; 005ade97
    POP ES                              ; 005ade98
    LEA EBX,[ECX + 0x1]                 ; 005ade99
    PUSH EBX                            ; 005ade9c
    CALL crt_memory.c_malloc_FUN_005a3650 ; 005ade9d
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 005adea2
    MOV EDX,EAX                         ; 005adea5
    TEST EAX,EAX                        ; 005adea7
    JZ 0x005adec5                       ; 005adea9
        ;   XREF to: 005adec5 (CONDITIONAL_JUMP)  ; LAB_005adec5
    MOV ECX,EBX                         ; 005adeab
    MOV EDI,EAX                         ; 005adead
    PUSH ES                             ; 005adeaf
    MOV AX,DS                           ; 005adeb0
    MOV ES,AX                           ; 005adeb2
    PUSH EDI                            ; 005adeb4
    MOV EAX,ECX                         ; 005adeb5
    SHR ECX,0x2                         ; 005adeb7
    MOVSD.REP ES:EDI,ESI                ; 005adeba
    MOV CL,AL                           ; 005adebc
    AND CL,0x3                          ; 005adebe
    MOVSB.REP ES:EDI,ESI                ; 005adec1
    POP EDI                             ; 005adec3
    POP ES                              ; 005adec4
    MOV EAX,EDX                         ; 005adec5
        ;   Label: LAB_005adec5
    POP EDI                             ; 005adec7
    POP ESI                             ; 005adec8
    POP EBX                             ; 005adec9
    RET                                 ; 005adeca

