; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * crt_unknown_c_FUN_005c2d10(char *param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005bce2c at 005bcf26
;
; Called Functions:
;   crt_memory.c_malloc_FUN_005b8580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c2d10
        ;   Label: crt_unknown.c_FUN_005c2d10
    PUSH ESI                            ; 005c2d11
    PUSH EDI                            ; 005c2d12
    MOV ESI,dword ptr [ESP + 0x10]      ; 005c2d13
    MOV EDI,ESI                         ; 005c2d17
    PUSH ES                             ; 005c2d19
    MOV AX,DS                           ; 005c2d1a
    MOV ES,AX                           ; 005c2d1c
    SUB ECX,ECX                         ; 005c2d1e
    DEC ECX                             ; 005c2d20
    XOR EAX,EAX                         ; 005c2d21
    SCASB.REPNE ES:EDI                  ; 005c2d23
    NOT ECX                             ; 005c2d25
    DEC ECX                             ; 005c2d27
    POP ES                              ; 005c2d28
    LEA EBX,[ECX + 0x1]                 ; 005c2d29
    PUSH EBX                            ; 005c2d2c
    CALL crt_memory.c_malloc_FUN_005b8580 ; 005c2d2d
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 005c2d32
    MOV EDX,EAX                         ; 005c2d35
    TEST EAX,EAX                        ; 005c2d37
    JZ 0x005c2d55                       ; 005c2d39
        ;   XREF to: 005c2d55 (CONDITIONAL_JUMP)  ; LAB_005c2d55
    MOV ECX,EBX                         ; 005c2d3b
    MOV EDI,EAX                         ; 005c2d3d
    PUSH ES                             ; 005c2d3f
    MOV AX,DS                           ; 005c2d40
    MOV ES,AX                           ; 005c2d42
    PUSH EDI                            ; 005c2d44
    MOV EAX,ECX                         ; 005c2d45
    SHR ECX,0x2                         ; 005c2d47
    MOVSD.REP ES:EDI,ESI                ; 005c2d4a
    MOV CL,AL                           ; 005c2d4c
    AND CL,0x3                          ; 005c2d4e
    MOVSB.REP ES:EDI,ESI                ; 005c2d51
    POP EDI                             ; 005c2d53
    POP ES                              ; 005c2d54
    MOV EAX,EDX                         ; 005c2d55
        ;   Label: LAB_005c2d55
    POP EDI                             ; 005c2d57
    POP ESI                             ; 005c2d58
    POP EBX                             ; 005c2d59
    RET                                 ; 005c2d5a

