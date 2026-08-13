; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_allocNewCubeList_FUN_00467330(CDemonRaytrace *this_ptr)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004676c0 at 004677d7
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_0057e010
;   TerminatedCString s_CDemonRaytrace_allocNewC_0057e023
;   WatcomTypeInfo g_CDemonCubeTypeInfo_0059c8c0
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   crt_memory.c___vec_new_FUN_00566234
;   shape_memdbg.cpp_malloc_FUN_00564c18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00467330
        ;   Label: core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_00467330
    MOV EBX,dword ptr [ESP + 0x8]       ; 00467331
    MOV EAX,dword ptr [EBX + 0x40]      ; 00467335
    IMUL EAX,dword ptr [EBX + 0x44]     ; 00467338
    MOV EDX,dword ptr [EBX + 0x48]      ; 0046733c
    IMUL EDX,EAX                        ; 0046733f
    PUSH 0x59c8c0                       ; 00467342 | g_CDemonCubeTypeInfo_0059c8c0
    PUSH EDX                            ; 00467347
    LEA EAX,[EDX*0x4 + 0x0]             ; 00467348
    SUB EAX,EDX                         ; 0046734f
    SHL EAX,0x2                         ; 00467351
    ADD EAX,EDX                         ; 00467354
    SHL EAX,0x2                         ; 00467356
    ADD EAX,0x4                         ; 00467359
    PUSH EAX                            ; 0046735c
    CALL shape_memdbg.cpp_malloc_FUN_00564c18 ; 0046735d
        ;   XREF to: 00564c18 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_malloc_FUN_00564c18(SIZE_T size)
    ADD ESP,0x4                         ; 00467362
    PUSH EAX                            ; 00467365
    CALL crt_memory.c___vec_new_FUN_00566234 ; 00467366
        ;   XREF to: 00566234 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_new_FUN_00566234(void * array_memory, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0046736b
    MOV dword ptr [EBX + 0x50],EAX      ; 0046736e
    TEST EAX,EAX                        ; 00467371
    JZ 0x00467377                       ; 00467373
        ;   XREF to: 00467377 (CONDITIONAL_JUMP)  ; LAB_00467377
    POP EBX                             ; 00467375
    RET                                 ; 00467376
    PUSH ESI                            ; 00467377
        ;   Label: LAB_00467377
    MOV EBX,0x57e010                    ; 00467378 | = "..\\core\\dtrace.cpp"
    MOV ESI,0xae                        ; 0046737d
    PUSH 0x57e023                       ; 00467382 | = "CDemonRaytrace::allocNewCubeList - Ou..."
    MOV dword ptr [0x01cc4800],EBX      ; 00467387 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ESI      ; 0046738d | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00467393
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00467398
    POP ESI                             ; 0046739b
    POP EBX                             ; 0046739c
    RET                                 ; 0046739d

