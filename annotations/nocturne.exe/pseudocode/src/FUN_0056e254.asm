; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; LPCRITICAL_SECTION FUN_0056e254(void)
;
;
; XREF[2]:
;   FUN_0056e390 at 0056e3c2
;   FUN_0056e6e4 at 0056e79a
;
; Referenced Globals:
;   void* PTR_InitializeCriticalSection_00575558 = 00175e76
;   TerminatedCString s_Unable_to_allocate_semap_00598c1c
;   TerminatedCString s_Unable_to_allocate_semap_00598c40
;   undefined4 DAT_02de5c10
;   undefined4 DAT_02de5c14
;   undefined4 DAT_02de5c18
;
; Called Functions:
;   crt_memory.c_realloc_FUN_00564a70
;   FUN_00565c50
;   FUN_0056ddc0
;   InitializeCriticalSection
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056e254
        ;   Label: FUN_0056e254
    PUSH ESI                            ; 0056e255
    PUSH EDI                            ; 0056e256
    MOV EDX,dword ptr [0x02de5c10]      ; 0056e257 | DAT_02de5c10
    CMP EDX,0x40                        ; 0056e25d
    JGE 0x0056e280                      ; 0056e260
        ;   XREF to: 0056e280 (CONDITIONAL_JUMP)  ; LAB_0056e280
    LEA EAX,[EDX*0x4 + 0x0]             ; 0056e262
    MOV EBX,0x2de55e0                   ; 0056e269
    SUB EAX,EDX                         ; 0056e26e
    LEA EDI,[EDX + 0x1]                 ; 0056e270
    SHL EAX,0x3                         ; 0056e273
    MOV dword ptr [0x02de5c10],EDI      ; 0056e276 | DAT_02de5c10
    ADD EBX,EAX                         ; 0056e27c
    JMP 0x0056e2e9                      ; 0056e27e
        ;   XREF to: 0056e2e9 (UNCONDITIONAL_JUMP)  ; LAB_0056e2e9
    PUSH 0x18                           ; 0056e280
        ;   Label: LAB_0056e280
    PUSH 0x1                            ; 0056e282
    CALL FUN_00565c50                   ; 0056e284
        ;   XREF to: 00565c50 (UNCONDITIONAL_CALL)  ; undefined FUN_00565c50()
    ADD ESP,0x8                         ; 0056e289
    MOV EBX,EAX                         ; 0056e28c
    TEST EAX,EAX                        ; 0056e28e
    JNZ 0x0056e2a1                      ; 0056e290
        ;   XREF to: 0056e2a1 (CONDITIONAL_JUMP)  ; LAB_0056e2a1
    PUSH 0x1                            ; 0056e292
    PUSH 0x598c1c                       ; 0056e294 | = "Unable to allocate semaphore data\r\n"
    CALL FUN_0056ddc0                   ; 0056e299
        ;   XREF to: 0056ddc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056ddc0()
    ADD ESP,0x8                         ; 0056e29e
    MOV EAX,[0x02de5c14]                ; 0056e2a1 | DAT_02de5c14
        ;   Label: LAB_0056e2a1
    INC EAX                             ; 0056e2a6
    SHL EAX,0x2                         ; 0056e2a7
    PUSH EAX                            ; 0056e2aa
    MOV ECX,dword ptr [0x02de5c18]      ; 0056e2ab | DAT_02de5c18
    PUSH ECX                            ; 0056e2b1
    CALL crt_memory.c_realloc_FUN_00564a70 ; 0056e2b2
        ;   XREF to: 00564a70 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_realloc_FUN_00564a70()
    ADD ESP,0x8                         ; 0056e2b7
    MOV [0x02de5c18],EAX                ; 0056e2ba | DAT_02de5c18
    TEST EAX,EAX                        ; 0056e2bf
    JNZ 0x0056e2d2                      ; 0056e2c1
        ;   XREF to: 0056e2d2 (CONDITIONAL_JUMP)  ; LAB_0056e2d2
    PUSH 0x1                            ; 0056e2c3
    PUSH 0x598c40                       ; 0056e2c5 | = "Unable to allocate semaphore data\r\n"
    CALL FUN_0056ddc0                   ; 0056e2ca
        ;   XREF to: 0056ddc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056ddc0()
    ADD ESP,0x8                         ; 0056e2cf
    MOV EAX,[0x02de5c14]                ; 0056e2d2 | DAT_02de5c14
        ;   Label: LAB_0056e2d2
    MOV EDX,dword ptr [0x02de5c18]      ; 0056e2d7 | DAT_02de5c18
    LEA ESI,[EAX + 0x1]                 ; 0056e2dd
    MOV dword ptr [EDX + EAX*0x4],EBX   ; 0056e2e0
    MOV dword ptr [0x02de5c14],ESI      ; 0056e2e3 | DAT_02de5c14
    PUSH EBX                            ; 0056e2e9
        ;   Label: LAB_0056e2e9
    CALL dword ptr CS:[0x575558]        ; 0056e2ea | PTR_InitializeCriticalSection_00575558
    MOV EAX,EBX                         ; 0056e2f1
    POP EDI                             ; 0056e2f3
    POP ESI                             ; 0056e2f4
    POP EBX                             ; 0056e2f5
    RET                                 ; 0056e2f6

