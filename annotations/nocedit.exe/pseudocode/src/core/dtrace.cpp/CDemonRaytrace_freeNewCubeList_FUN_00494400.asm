; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dtrace_cpp_CDemonRaytrace_freeNewCubeList_FUN_00494400(CDemonRaytrace *this_ptr)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dtrace.cpp_CDemonRaytrace_dtor_FUN_00494240 at 00494258
;   core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0 at 004947b2
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_0062265d
;   WatcomTypeInfo g_CDemonCubeTypeInfo
;   char* g_CurrentDebugFilename = 0067d200
;   int g_CurrentDebugLine
;
; Called Functions:
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00494400
        ;   Label: core_dtrace.cpp_CDemonRaytrace_freeNewCubeList_FUN_00494400
    PUSH ESI                            ; 00494401
    MOV EBX,dword ptr [ESP + 0xc]       ; 00494402
    MOV EDX,0x62265d                    ; 00494406 | = "..\\core\\dtrace.cpp"
    PUSH 0x65d290                       ; 0049440b | g_CDemonCubeTypeInfo
    MOV ESI,dword ptr [EBX + 0x50]      ; 00494410
    MOV ECX,0xb8                        ; 00494413
    PUSH ESI                            ; 00494418
    MOV dword ptr [0x0067d20c],EDX      ; 00494419 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],ECX      ; 0049441f | g_CurrentDebugLine
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 00494425
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0049442a
    PUSH EAX                            ; 0049442d
    CALL crt_memory.c_free_FUN_005fe659 ; 0049442e
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    MOV dword ptr [EBX + 0x50],0x0      ; 00494433
    MOV dword ptr [EBX + 0x48],0x0      ; 0049443a
    MOV EAX,dword ptr [EBX + 0x48]      ; 00494441
    MOV dword ptr [EBX + 0x44],EAX      ; 00494444
    ADD ESP,0x4                         ; 00494447
    MOV dword ptr [EBX + 0x40],EAX      ; 0049444a
    POP ESI                             ; 0049444d
    POP EBX                             ; 0049444e
    RET                                 ; 0049444f

