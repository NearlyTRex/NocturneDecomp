; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; LPCRITICAL_SECTION unkafter_morph_cpp_FUN_005c2624(void)
;
;
; XREF[2]:
;   unkafter_morph.cpp_FUN_005c2760 at 005c2792
;   unkafter_morph.cpp_FUN_005c2ab4 at 005c2b6a
;
; Referenced Globals:
;   void* PTR_InitializeCriticalSection_005c85dc = 001c8fde
;   TerminatedCString s_Unable_to_allocate_semap_005f1ab0
;   TerminatedCString s_Unable_to_allocate_semap_005f1ad4
;   undefined4 DAT_02681070
;   undefined4 DAT_02681074
;   undefined4 DAT_02681078
;
; Called Functions:
;   crt_memory.c_realloc_FUN_005b8ce0
;   crt_unknown.c_FUN_005b98d0
;   crt_unknown.c_FUN_005c1c20
;   InitializeCriticalSection
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c2624
        ;   Label: unkafter_morph.cpp_FUN_005c2624
    PUSH ESI                            ; 005c2625
    PUSH EDI                            ; 005c2626
    MOV EDX,dword ptr [0x02681070]      ; 005c2627 | DAT_02681070
    CMP EDX,0x40                        ; 005c262d
    JGE 0x005c2650                      ; 005c2630
        ;   XREF to: 005c2650 (CONDITIONAL_JUMP)  ; LAB_005c2650
    LEA EAX,[EDX*0x4 + 0x0]             ; 005c2632
    MOV EBX,0x2680a40                   ; 005c2639
    SUB EAX,EDX                         ; 005c263e
    LEA EDI,[EDX + 0x1]                 ; 005c2640
    SHL EAX,0x3                         ; 005c2643
    MOV dword ptr [0x02681070],EDI      ; 005c2646 | DAT_02681070
    ADD EBX,EAX                         ; 005c264c
    JMP 0x005c26b9                      ; 005c264e
        ;   XREF to: 005c26b9 (UNCONDITIONAL_JUMP)  ; LAB_005c26b9
    PUSH 0x18                           ; 005c2650
        ;   Label: LAB_005c2650
    PUSH 0x1                            ; 005c2652
    CALL crt_unknown.c_FUN_005b98d0     ; 005c2654
        ;   XREF to: 005b98d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b98d0()
    ADD ESP,0x8                         ; 005c2659
    MOV EBX,EAX                         ; 005c265c
    TEST EAX,EAX                        ; 005c265e
    JNZ 0x005c2671                      ; 005c2660
        ;   XREF to: 005c2671 (CONDITIONAL_JUMP)  ; LAB_005c2671
    PUSH 0x1                            ; 005c2662
    PUSH 0x5f1ab0                       ; 005c2664 | = "Unable to allocate semaphore data\r\n"
    CALL crt_unknown.c_FUN_005c1c20     ; 005c2669
        ;   XREF to: 005c1c20 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1c20()
    ADD ESP,0x8                         ; 005c266e
    MOV EAX,[0x02681074]                ; 005c2671 | DAT_02681074
        ;   Label: LAB_005c2671
    INC EAX                             ; 005c2676
    SHL EAX,0x2                         ; 005c2677
    PUSH EAX                            ; 005c267a
    MOV ECX,dword ptr [0x02681078]      ; 005c267b | DAT_02681078
    PUSH ECX                            ; 005c2681
    CALL crt_memory.c_realloc_FUN_005b8ce0 ; 005c2682
        ;   XREF to: 005b8ce0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005b8ce0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 005c2687
    MOV [0x02681078],EAX                ; 005c268a | DAT_02681078
    TEST EAX,EAX                        ; 005c268f
    JNZ 0x005c26a2                      ; 005c2691
        ;   XREF to: 005c26a2 (CONDITIONAL_JUMP)  ; LAB_005c26a2
    PUSH 0x1                            ; 005c2693
    PUSH 0x5f1ad4                       ; 005c2695 | = "Unable to allocate semaphore data\r\n"
    CALL crt_unknown.c_FUN_005c1c20     ; 005c269a
        ;   XREF to: 005c1c20 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1c20()
    ADD ESP,0x8                         ; 005c269f
    MOV EAX,[0x02681074]                ; 005c26a2 | DAT_02681074
        ;   Label: LAB_005c26a2
    MOV EDX,dword ptr [0x02681078]      ; 005c26a7 | DAT_02681078
    LEA ESI,[EAX + 0x1]                 ; 005c26ad
    MOV dword ptr [EDX + EAX*0x4],EBX   ; 005c26b0
    MOV dword ptr [0x02681074],ESI      ; 005c26b3 | DAT_02681074
    PUSH EBX                            ; 005c26b9
        ;   Label: LAB_005c26b9
    CALL dword ptr CS:[0x5c85dc]        ; 005c26ba | PTR_InitializeCriticalSection_005c85dc
    MOV EAX,EBX                         ; 005c26c1
    POP EDI                             ; 005c26c3
    POP ESI                             ; 005c26c4
    POP EBX                             ; 005c26c5
    RET                                 ; 005c26c6

