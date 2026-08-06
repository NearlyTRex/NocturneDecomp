; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00574680(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005740b0 at 005741ce
;
; Referenced Globals:
;   undefined4 DAT_02de54a4
;
; Called Functions:
;   crt_memory.c_free_FUN_005638d0
;   crt_memory.c_malloc_FUN_005635b0
;   crt_unknown.c_FUN_00574000
;   crt_unknown.c_FUN_00574030
;   crt_unknown.c_FUN_00574264
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574680
        ;   Label: crt_unknown.c_FUN_00574680
    PUSH ESI                            ; 00574681
    PUSH EDI                            ; 00574682
    PUSH EBP                            ; 00574683
    MOV EDI,dword ptr [0x02de54a4]      ; 00574684 | DAT_02de54a4
    TEST EDI,EDI                        ; 0057468a
    JZ 0x005746df                       ; 0057468c
        ;   XREF to: 005746df (CONDITIONAL_JUMP)  ; LAB_005746df
    MOV ESI,dword ptr [EDI]             ; 0057468e
        ;   Label: LAB_0057468e
    ADD EDI,0x4                         ; 00574690
    TEST ESI,ESI                        ; 00574693
    JZ 0x005746df                       ; 00574695
        ;   XREF to: 005746df (CONDITIONAL_JUMP)  ; LAB_005746df
    PUSH ESI                            ; 00574697
    CALL crt_unknown.c_FUN_00574000     ; 00574698
        ;   XREF to: 00574000 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00574000()
    LEA EBP,[EAX + 0x1]                 ; 0057469d
    ADD ESP,0x4                         ; 005746a0
    LEA EAX,[EBP*0x2 + 0x0]             ; 005746a3
    PUSH EAX                            ; 005746aa
    CALL crt_memory.c_malloc_FUN_005635b0 ; 005746ab
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005635b0(ulong size)
    MOV EBX,EAX                         ; 005746b0
    ADD ESP,0x4                         ; 005746b2
    TEST EAX,EAX                        ; 005746b5
    JZ 0x0057468e                       ; 005746b7
        ;   XREF to: 0057468e (CONDITIONAL_JUMP)  ; LAB_0057468e
    PUSH EBP                            ; 005746b9
    PUSH ESI                            ; 005746ba
    PUSH EAX                            ; 005746bb
    CALL crt_unknown.c_FUN_00574030     ; 005746bc
        ;   XREF to: 00574030 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00574030()
    ADD ESP,0xc                         ; 005746c1
    CMP EAX,-0x1                        ; 005746c4
    JZ 0x005746d4                       ; 005746c7
        ;   XREF to: 005746d4 (CONDITIONAL_JUMP)  ; LAB_005746d4
    PUSH EBX                            ; 005746c9
    CALL crt_unknown.c_FUN_00574264     ; 005746ca
        ;   XREF to: 00574264 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00574264()
    ADD ESP,0x4                         ; 005746cf
    JMP 0x0057468e                      ; 005746d2
        ;   XREF to: 0057468e (UNCONDITIONAL_JUMP)  ; LAB_0057468e
    PUSH EBX                            ; 005746d4
        ;   Label: LAB_005746d4
    CALL crt_memory.c_free_FUN_005638d0 ; 005746d5
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005638d0(void * ptr)
    ADD ESP,0x4                         ; 005746da
    JMP 0x0057468e                      ; 005746dd
        ;   XREF to: 0057468e (UNCONDITIONAL_JUMP)  ; LAB_0057468e
    POP EBP                             ; 005746df
        ;   Label: LAB_005746df
    POP EDI                             ; 005746e0
    POP ESI                             ; 005746e1
    POP EBX                             ; 005746e2
    RET                                 ; 005746e3

