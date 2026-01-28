; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined4 crt_unknown_c_FUN_0060e4f0(void)
;
;
; XREF[1]:
;   crt_environ.c_staticFinal_FUN_0060c73c at 0060c73e
;
; Referenced Globals:
;   char** g_EnvironStringArea
;   char** g_EnvironmentBlock
;
; Called Functions:
;   crt_memory.c_free_FUN_00601cd0
;   crt_memory.c_malloc_FUN_00601bb0
;   crt_memory.c_realloc_FUN_00601df0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060e4f0
        ;   Label: crt_unknown.c_FUN_0060e4f0
    PUSH ESI                            ; 0060e4f1
    PUSH EDI                            ; 0060e4f2
    MOV EDX,dword ptr [0x03f9b864]      ; 0060e4f3 | g_EnvironmentBlock
    TEST EDX,EDX                        ; 0060e4f9
    JZ 0x0060e585                       ; 0060e4fb
        ;   XREF to: 0060e585 (CONDITIONAL_JUMP)  ; LAB_0060e585
    MOV EBX,EDX                         ; 0060e501
    JMP 0x0060e536                      ; 0060e503
        ;   XREF to: 0060e536 (UNCONDITIONAL_JUMP)  ; LAB_0060e536
    MOV ESI,dword ptr [0x03f9b860]      ; 0060e505 | g_EnvironStringArea
        ;   Label: LAB_0060e505
    TEST ESI,ESI                        ; 0060e50b
    JZ 0x0060e533                       ; 0060e50d
        ;   XREF to: 0060e533 (CONDITIONAL_JUMP)  ; LAB_0060e533
    MOV EDI,dword ptr [0x03f9b864]      ; 0060e50f | g_EnvironmentBlock
    MOV ECX,EBX                         ; 0060e515
    SUB ECX,EDI                         ; 0060e517
    MOV EDX,ESI                         ; 0060e519
    SAR ECX,0x2                         ; 0060e51b
    CMP byte ptr [ECX + EDX*0x1],0x0    ; 0060e51e
    JZ 0x0060e52d                       ; 0060e522
        ;   XREF to: 0060e52d (CONDITIONAL_JUMP)  ; LAB_0060e52d
    PUSH EAX                            ; 0060e524
    CALL crt_memory.c_free_FUN_00601cd0 ; 0060e525
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    ADD ESP,0x4                         ; 0060e52a
    MOV dword ptr [EBX],0x0             ; 0060e52d
        ;   Label: LAB_0060e52d
    ADD EBX,0x4                         ; 0060e533
        ;   Label: LAB_0060e533
    MOV EAX,dword ptr [EBX]             ; 0060e536
        ;   Label: LAB_0060e536
    TEST EAX,EAX                        ; 0060e538
    JNZ 0x0060e505                      ; 0060e53a
        ;   XREF to: 0060e505 (CONDITIONAL_JUMP)  ; LAB_0060e505
    CMP dword ptr [0x03f9b860],0x0      ; 0060e53c | g_EnvironStringArea
    JNZ 0x0060e551                      ; 0060e543
        ;   XREF to: 0060e551 (CONDITIONAL_JUMP)  ; LAB_0060e551
    PUSH 0x5                            ; 0060e545
    CALL crt_memory.c_malloc_FUN_00601bb0 ; 0060e547
        ;   XREF to: 00601bb0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_00601bb0(ulong size)
    ADD ESP,0x4                         ; 0060e54c
    JMP 0x0060e562                      ; 0060e54f
        ;   XREF to: 0060e562 (UNCONDITIONAL_JUMP)  ; LAB_0060e562
    PUSH 0x5                            ; 0060e551
        ;   Label: LAB_0060e551
    MOV ECX,dword ptr [0x03f9b864]      ; 0060e553 | g_EnvironmentBlock
    PUSH ECX                            ; 0060e559
    CALL crt_memory.c_realloc_FUN_00601df0 ; 0060e55a
        ;   XREF to: 00601df0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_00601df0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 0060e55f
    TEST EAX,EAX                        ; 0060e562
        ;   Label: LAB_0060e562
    JNZ 0x0060e56f                      ; 0060e564
        ;   XREF to: 0060e56f (CONDITIONAL_JUMP)  ; LAB_0060e56f
    MOV EAX,0xffffffff                  ; 0060e566
    POP EDI                             ; 0060e56b
    POP ESI                             ; 0060e56c
    POP EBX                             ; 0060e56d
    RET                                 ; 0060e56e
    MOV [0x03f9b864],EAX                ; 0060e56f | g_EnvironmentBlock
        ;   Label: LAB_0060e56f
    MOV dword ptr [EAX],0x0             ; 0060e574
    ADD EAX,0x4                         ; 0060e57a
    MOV [0x03f9b860],EAX                ; 0060e57d | g_EnvironStringArea
    MOV byte ptr [EAX],0x0              ; 0060e582
    XOR EAX,EAX                         ; 0060e585
        ;   Label: LAB_0060e585
    POP EDI                             ; 0060e587
    POP ESI                             ; 0060e588
    POP EBX                             ; 0060e589
    RET                                 ; 0060e58a

