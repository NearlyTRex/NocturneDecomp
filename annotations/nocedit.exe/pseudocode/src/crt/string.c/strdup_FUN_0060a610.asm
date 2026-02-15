; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_string_c_strdup_FUN_0060a610(char *str)
;
; Parameters:
; char *           Stack[0x4]:4   str
;
; XREF[1]:
;   crt_startup.c_initialize_runtime_FUN_0060245c at 00602556
;
; Called Functions:
;   crt_memory.c_malloc_FUN_00601bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060a610
        ;   Label: crt_string.c_strdup_FUN_0060a610
    PUSH ESI                            ; 0060a611
    PUSH EDI                            ; 0060a612
    MOV ESI,dword ptr [ESP + 0x10]      ; 0060a613
    MOV EDI,ESI                         ; 0060a617
    PUSH ES                             ; 0060a619
    MOV AX,DS                           ; 0060a61a
    MOV ES,AX                           ; 0060a61c
    SUB ECX,ECX                         ; 0060a61e
    DEC ECX                             ; 0060a620
    XOR EAX,EAX                         ; 0060a621
    SCASB.REPNE ES:EDI                  ; 0060a623
    NOT ECX                             ; 0060a625
    DEC ECX                             ; 0060a627
    POP ES                              ; 0060a628
    LEA EBX,[ECX + 0x1]                 ; 0060a629
    PUSH EBX                            ; 0060a62c
    CALL crt_memory.c_malloc_FUN_00601bb0 ; 0060a62d
        ;   XREF to: 00601bb0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_00601bb0(ulong size)
    ADD ESP,0x4                         ; 0060a632
    MOV EDX,EAX                         ; 0060a635
    TEST EAX,EAX                        ; 0060a637
    JZ 0x0060a655                       ; 0060a639
        ;   XREF to: 0060a655 (CONDITIONAL_JUMP)  ; LAB_0060a655
    MOV ECX,EBX                         ; 0060a63b
    MOV EDI,EAX                         ; 0060a63d
    PUSH ES                             ; 0060a63f
    MOV AX,DS                           ; 0060a640
    MOV ES,AX                           ; 0060a642
    PUSH EDI                            ; 0060a644
    MOV EAX,ECX                         ; 0060a645
    SHR ECX,0x2                         ; 0060a647
    MOVSD.REP ES:EDI,ESI                ; 0060a64a
    MOV CL,AL                           ; 0060a64c
    AND CL,0x3                          ; 0060a64e
    MOVSB.REP ES:EDI,ESI                ; 0060a651
    POP EDI                             ; 0060a653
    POP ES                              ; 0060a654
    MOV EAX,EDX                         ; 0060a655
        ;   Label: LAB_0060a655
    POP EDI                             ; 0060a657
    POP ESI                             ; 0060a658
    POP EBX                             ; 0060a659
    RET                                 ; 0060a65a

