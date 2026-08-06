; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_allocCubeList_FUN_00467250(CDemonRaytrace *this_ptr)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_0057dfce
;   TerminatedCString s_CDemonRaytrace_allocCube_0057dfe1
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   crt_memory.c_calloc_FUN_00565c50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00467250
        ;   Label: core_dtrace.cpp_CDemonRaytrace_allocCubeList_FUN_00467250
    PUSH EBP                            ; 00467251
    MOV EBX,dword ptr [ESP + 0xc]       ; 00467252
    MOV EAX,dword ptr [EBX + 0x40]      ; 00467256
    IMUL EAX,dword ptr [EBX + 0x44]     ; 00467259
    IMUL EAX,dword ptr [EBX + 0x48]     ; 0046725d
    PUSH EAX                            ; 00467261
    PUSH 0x58                           ; 00467262
    CALL crt_memory.c_calloc_FUN_00565c50 ; 00467264
        ;   XREF to: 00565c50 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_calloc_FUN_00565c50(SIZE_T count, SIZE_T size)
    ADD ESP,0x8                         ; 00467269
    MOV dword ptr [EBX + 0x4c],EAX      ; 0046726c
    TEST EAX,EAX                        ; 0046726f
    JZ 0x00467276                       ; 00467271
        ;   XREF to: 00467276 (CONDITIONAL_JUMP)  ; LAB_00467276
    POP EBP                             ; 00467273
    POP EBX                             ; 00467274
    RET                                 ; 00467275
    PUSH EDI                            ; 00467276
        ;   Label: LAB_00467276
    MOV EDI,0x57dfce                    ; 00467277 | = "..\\core\\dtrace.cpp"
    MOV EBP,0x88                        ; 0046727c
    PUSH 0x57dfe1                       ; 00467281 | = "CDemonRaytrace::allocCubeList - Out o..."
    MOV dword ptr [0x01cc4800],EDI      ; 00467286 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EBP      ; 0046728c | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00467292
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00467297
    POP EDI                             ; 0046729a
    POP EBP                             ; 0046729b
    POP EBX                             ; 0046729c
    RET                                 ; 0046729d

