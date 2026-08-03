; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_allocTriList_FUN_00467560(CDemonRaytrace *this_ptr)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dtrace.cpp_FUN_004673e0 at 00467439
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_0057e07f
;   TerminatedCString s_CDemonRaytrace_allocTriL_0057e092
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   shape_memdbg.cpp_malloc_FUN_00564c18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00467560
        ;   Label: core_dtrace.cpp_CDemonRaytrace_allocTriList_FUN_00467560
    PUSH ESI                            ; 00467561
    PUSH EBP                            ; 00467562
    MOV EBX,dword ptr [ESP + 0x10]      ; 00467563
    MOV ESI,dword ptr [EBX + 0x4]       ; 00467567
    LEA EAX,[ESI*0x8 + 0x0]             ; 0046756a
    MOV EDX,EAX                         ; 00467571
    SHL EAX,0x3                         ; 00467573
    SUB EAX,EDX                         ; 00467576
    ADD EAX,0x4                         ; 00467578
    PUSH EAX                            ; 0046757b
    CALL shape_memdbg.cpp_malloc_FUN_00564c18 ; 0046757c
        ;   XREF to: 00564c18 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_malloc_FUN_00564c18(SIZE_T size)
    ADD ESP,0x4                         ; 00467581
    TEST EAX,EAX                        ; 00467584
    JNZ 0x004675a9                      ; 00467586
        ;   XREF to: 004675a9 (CONDITIONAL_JUMP)  ; LAB_004675a9
    MOV EDX,dword ptr [EBX + 0x4]       ; 00467588
        ;   Label: LAB_00467588
    PUSH EDX                            ; 0046758b
    MOV dword ptr [EBX + 0x8],EAX       ; 0046758c
    CALL shape_memdbg.cpp_malloc_FUN_00564c18 ; 0046758f
        ;   XREF to: 00564c18 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_malloc_FUN_00564c18(SIZE_T size)
    ADD ESP,0x4                         ; 00467594
    MOV ECX,dword ptr [EBX + 0x8]       ; 00467597
    MOV dword ptr [EBX + 0xc],EAX       ; 0046759a
    TEST ECX,ECX                        ; 0046759d
    JZ 0x004675b1                       ; 0046759f
        ;   XREF to: 004675b1 (CONDITIONAL_JUMP)  ; LAB_004675b1
    TEST EAX,EAX                        ; 004675a1
    JZ 0x004675b1                       ; 004675a3
        ;   XREF to: 004675b1 (CONDITIONAL_JUMP)  ; LAB_004675b1
    POP EBP                             ; 004675a5
    POP ESI                             ; 004675a6
    POP EBX                             ; 004675a7
    RET                                 ; 004675a8
    ADD EAX,0x4                         ; 004675a9
        ;   Label: LAB_004675a9
    MOV dword ptr [EAX + -0x4],ESI      ; 004675ac
    JMP 0x00467588                      ; 004675af
        ;   XREF to: 00467588 (UNCONDITIONAL_JUMP)  ; LAB_00467588
    PUSH EDI                            ; 004675b1
        ;   Label: LAB_004675b1
    MOV EDI,0x57e07f                    ; 004675b2 | = "..\\core\\dtrace.cpp"
    MOV EBP,0xf9                        ; 004675b7
    PUSH 0x57e092                       ; 004675bc | = "CDemonRaytrace::allocTriList - Out of..."
    MOV dword ptr [0x01cc4800],EDI      ; 004675c1 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 004675c7 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004675cd
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004675d2
    POP EDI                             ; 004675d5
    POP EBP                             ; 004675d6
    POP ESI                             ; 004675d7
    POP EBX                             ; 004675d8
    RET                                 ; 004675d9

