; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_FUN_00610900()
;
;
; XREF[1]:
;   crt_unknown.c_FUN_0060fb40 at 0060fc5e
;
; Referenced Globals:
;   char** g_EnvironmentBlock
;
; Called Functions:
;   crt_memory.c_free_FUN_00601cd0
;   crt_memory.c_malloc_FUN_00601bb0
;   crt_unknown.c_FUN_0060fa90
;   crt_unknown.c_FUN_0060fac0
;   crt_unknown.c_FUN_0060fcf4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00610900
        ;   Label: crt_unknown.c_FUN_00610900
    PUSH ESI                            ; 00610901
    PUSH EDI                            ; 00610902
    PUSH EBP                            ; 00610903
    MOV EDI,dword ptr [0x03f9b864]      ; 00610904 | g_EnvironmentBlock
    TEST EDI,EDI                        ; 0061090a
    JZ 0x0061095f                       ; 0061090c
        ;   XREF to: 0061095f (CONDITIONAL_JUMP)  ; LAB_0061095f
    MOV ESI,dword ptr [EDI]             ; 0061090e
        ;   Label: LAB_0061090e
    ADD EDI,0x4                         ; 00610910
    TEST ESI,ESI                        ; 00610913
    JZ 0x0061095f                       ; 00610915
        ;   XREF to: 0061095f (CONDITIONAL_JUMP)  ; LAB_0061095f
    PUSH ESI                            ; 00610917
    CALL crt_unknown.c_FUN_0060fa90     ; 00610918
        ;   XREF to: 0060fa90 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0060fa90()
    LEA EBP,[EAX + 0x1]                 ; 0061091d
    ADD ESP,0x4                         ; 00610920
    LEA EAX,[EBP*0x2 + 0x0]             ; 00610923
    PUSH EAX                            ; 0061092a
    CALL crt_memory.c_malloc_FUN_00601bb0 ; 0061092b
        ;   XREF to: 00601bb0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_00601bb0(ulong size)
    MOV EBX,EAX                         ; 00610930
    ADD ESP,0x4                         ; 00610932
    TEST EAX,EAX                        ; 00610935
    JZ 0x0061090e                       ; 00610937
        ;   XREF to: 0061090e (CONDITIONAL_JUMP)  ; LAB_0061090e
    PUSH EBP                            ; 00610939
    PUSH ESI                            ; 0061093a
    PUSH EAX                            ; 0061093b
    CALL crt_unknown.c_FUN_0060fac0     ; 0061093c
        ;   XREF to: 0060fac0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0060fac0()
    ADD ESP,0xc                         ; 00610941
    CMP EAX,-0x1                        ; 00610944
    JZ 0x00610954                       ; 00610947
        ;   XREF to: 00610954 (CONDITIONAL_JUMP)  ; LAB_00610954
    PUSH EBX                            ; 00610949
    CALL crt_unknown.c_FUN_0060fcf4     ; 0061094a
        ;   XREF to: 0060fcf4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0060fcf4()
    ADD ESP,0x4                         ; 0061094f
    JMP 0x0061090e                      ; 00610952
        ;   XREF to: 0061090e (UNCONDITIONAL_JUMP)  ; LAB_0061090e
    PUSH EBX                            ; 00610954
        ;   Label: LAB_00610954
    CALL crt_memory.c_free_FUN_00601cd0 ; 00610955
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    ADD ESP,0x4                         ; 0061095a
    JMP 0x0061090e                      ; 0061095d
        ;   XREF to: 0061090e (UNCONDITIONAL_JUMP)  ; LAB_0061090e
    POP EBP                             ; 0061095f
        ;   Label: LAB_0061095f
    POP EDI                             ; 00610960
    POP ESI                             ; 00610961
    POP EBX                             ; 00610962
    RET                                 ; 00610963

