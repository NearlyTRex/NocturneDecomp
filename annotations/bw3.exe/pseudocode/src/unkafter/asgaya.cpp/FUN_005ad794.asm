; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; LPCRITICAL_SECTION unkafter_asgaya_cpp_FUN_005ad794(void)
;
;
; XREF[2]:
;   unkafter_asgaya.cpp_FUN_005ad8d0 at 005ad902
;   unkafter_asgaya.cpp_FUN_005adc24 at 005adcda
;
; Referenced Globals:
;   void* PTR_InitializeCriticalSection_005b35f0 = 001b4020
;   TerminatedCString s_Unable_to_allocate_semap_005da914
;   TerminatedCString s_Unable_to_allocate_semap_005da938
;   undefined4 DAT_02d261b0
;   undefined4 DAT_02d261b4
;   undefined4 DAT_02d261b8
;
; Called Functions:
;   crt_memory.c_realloc_FUN_005a3e50
;   crt_unknown.c_FUN_005a4b20
;   crt_unknown.c_FUN_005acde0
;   InitializeCriticalSection
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ad794
        ;   Label: unkafter_asgaya.cpp_FUN_005ad794
    PUSH ESI                            ; 005ad795
    PUSH EDI                            ; 005ad796
    MOV EDX,dword ptr [0x02d261b0]      ; 005ad797 | DAT_02d261b0
    CMP EDX,0x40                        ; 005ad79d
    JGE 0x005ad7c0                      ; 005ad7a0
        ;   XREF to: 005ad7c0 (CONDITIONAL_JUMP)  ; LAB_005ad7c0
    LEA EAX,[EDX*0x4 + 0x0]             ; 005ad7a2
    MOV EBX,0x2d25b80                   ; 005ad7a9
    SUB EAX,EDX                         ; 005ad7ae
    LEA EDI,[EDX + 0x1]                 ; 005ad7b0
    SHL EAX,0x3                         ; 005ad7b3
    MOV dword ptr [0x02d261b0],EDI      ; 005ad7b6 | DAT_02d261b0
    ADD EBX,EAX                         ; 005ad7bc
    JMP 0x005ad829                      ; 005ad7be
        ;   XREF to: 005ad829 (UNCONDITIONAL_JUMP)  ; LAB_005ad829
    PUSH 0x18                           ; 005ad7c0
        ;   Label: LAB_005ad7c0
    PUSH 0x1                            ; 005ad7c2
    CALL crt_unknown.c_FUN_005a4b20     ; 005ad7c4
        ;   XREF to: 005a4b20 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a4b20()
    ADD ESP,0x8                         ; 005ad7c9
    MOV EBX,EAX                         ; 005ad7cc
    TEST EAX,EAX                        ; 005ad7ce
    JNZ 0x005ad7e1                      ; 005ad7d0
        ;   XREF to: 005ad7e1 (CONDITIONAL_JUMP)  ; LAB_005ad7e1
    PUSH 0x1                            ; 005ad7d2
    PUSH 0x5da914                       ; 005ad7d4 | = "Unable to allocate semaphore data\r\n"
    CALL crt_unknown.c_FUN_005acde0     ; 005ad7d9
        ;   XREF to: 005acde0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005acde0()
    ADD ESP,0x8                         ; 005ad7de
    MOV EAX,[0x02d261b4]                ; 005ad7e1 | DAT_02d261b4
        ;   Label: LAB_005ad7e1
    INC EAX                             ; 005ad7e6
    SHL EAX,0x2                         ; 005ad7e7
    PUSH EAX                            ; 005ad7ea
    MOV ECX,dword ptr [0x02d261b8]      ; 005ad7eb | DAT_02d261b8
    PUSH ECX                            ; 005ad7f1
    CALL crt_memory.c_realloc_FUN_005a3e50 ; 005ad7f2
        ;   XREF to: 005a3e50 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005a3e50(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 005ad7f7
    MOV [0x02d261b8],EAX                ; 005ad7fa | DAT_02d261b8
    TEST EAX,EAX                        ; 005ad7ff
    JNZ 0x005ad812                      ; 005ad801
        ;   XREF to: 005ad812 (CONDITIONAL_JUMP)  ; LAB_005ad812
    PUSH 0x1                            ; 005ad803
    PUSH 0x5da938                       ; 005ad805 | = "Unable to allocate semaphore data\r\n"
    CALL crt_unknown.c_FUN_005acde0     ; 005ad80a
        ;   XREF to: 005acde0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005acde0()
    ADD ESP,0x8                         ; 005ad80f
    MOV EAX,[0x02d261b4]                ; 005ad812 | DAT_02d261b4
        ;   Label: LAB_005ad812
    MOV EDX,dword ptr [0x02d261b8]      ; 005ad817 | DAT_02d261b8
    LEA ESI,[EAX + 0x1]                 ; 005ad81d
    MOV dword ptr [EDX + EAX*0x4],EBX   ; 005ad820
    MOV dword ptr [0x02d261b4],ESI      ; 005ad823 | DAT_02d261b4
    PUSH EBX                            ; 005ad829
        ;   Label: LAB_005ad829
    CALL dword ptr CS:[0x5b35f0]        ; 005ad82a | PTR_InitializeCriticalSection_005b35f0
    MOV EAX,EBX                         ; 005ad831
    POP EDI                             ; 005ad833
    POP ESI                             ; 005ad834
    POP EBX                             ; 005ad835
    RET                                 ; 005ad836

