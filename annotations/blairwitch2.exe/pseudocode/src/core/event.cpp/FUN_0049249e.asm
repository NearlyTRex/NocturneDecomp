; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_event_cpp_FUN_0049249e(int *param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_string.c_memmove_FUN_005ba1f0
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 0049249e
        ;   Label: core_event.cpp_FUN_0049249e
    PUSH EBX                            ; 004924a0
    PUSH ESI                            ; 004924a1
    PUSH EDI                            ; 004924a2
    PUSH EBP                            ; 004924a3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004924a4
    MOV ESI,dword ptr [ESP + 0x18]      ; 004924a8
    TEST ESI,ESI                        ; 004924ac
    JL 0x0049253d                       ; 004924ae
        ;   XREF to: 0049253d (CONDITIONAL_JUMP)  ; LAB_0049253d
    CMP ESI,dword ptr [EBX]             ; 004924b4
    JGE 0x0049253d                      ; 004924b6
        ;   XREF to: 0049253d (CONDITIONAL_JUMP)  ; LAB_0049253d
    MOV EBP,dword ptr [EBX]             ; 004924bc
        ;   Label: LAB_004924bc
    DEC EBP                             ; 004924be
    MOV EDX,EBP                         ; 004924bf
    SUB EDX,ESI                         ; 004924c1
    LEA EAX,[EDX*0x4 + 0x0]             ; 004924c3
    SUB EAX,EDX                         ; 004924ca
    LEA ECX,[EBX + 0x4]                 ; 004924cc
    SHL EAX,0x3                         ; 004924cf
    MOV dword ptr [EBX],EBP             ; 004924d2
    ADD EAX,EDX                         ; 004924d4
    LEA EDX,[ESI + 0x1]                 ; 004924d6
    SHL EAX,0x2                         ; 004924d9
    LEA EDI,[EDX*0x4 + 0x0]             ; 004924dc
    PUSH EAX                            ; 004924e3
    SUB EDI,EDX                         ; 004924e4
    LEA EBP,[ESI*0x4 + 0x0]             ; 004924e6
    SHL EDI,0x3                         ; 004924ed
    SUB EBP,ESI                         ; 004924f0
    ADD EDI,EDX                         ; 004924f2
    SHL EBP,0x3                         ; 004924f4
    SHL EDI,0x2                         ; 004924f7
    ADD EBP,ESI                         ; 004924fa
    LEA EAX,[ECX + EDI*0x1]             ; 004924fc
    SHL EBP,0x2                         ; 004924ff
    PUSH EAX                            ; 00492502
    ADD ECX,EBP                         ; 00492503
    PUSH ECX                            ; 00492505
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 00492506
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    MOV EDX,dword ptr [EBX]             ; 0049250b
    SUB EDX,ESI                         ; 0049250d
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049250f
    SUB EAX,EDX                         ; 00492516
    SHL EAX,0x3                         ; 00492518
    ADD EAX,EDX                         ; 0049251b
    ADD ESP,0xc                         ; 0049251d
    SHL EAX,0x2                         ; 00492520
    ADD EBX,0x1f8                       ; 00492523
    PUSH EAX                            ; 00492529
    ADD EDI,EBX                         ; 0049252a
    PUSH EDI                            ; 0049252c
    ADD EBX,EBP                         ; 0049252d
    PUSH EBX                            ; 0049252f
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 00492530
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00492535
    POP EBP                             ; 00492538
    POP EDI                             ; 00492539
    POP ESI                             ; 0049253a
    POP EBX                             ; 0049253b
    RET                                 ; 0049253c
    MOV ECX,0x5d5211                    ; 0049253d
        ;   Label: LAB_0049253d
    MOV EDI,0x1001                      ; 00492542
    PUSH 0x5d5223                       ; 00492547
    MOV dword ptr [0x01d046a0],ECX      ; 0049254c | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 00492552 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00492558
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0049255d
    JMP 0x004924bc                      ; 00492560
        ;   XREF to: 004924bc (UNCONDITIONAL_JUMP)  ; LAB_004924bc

