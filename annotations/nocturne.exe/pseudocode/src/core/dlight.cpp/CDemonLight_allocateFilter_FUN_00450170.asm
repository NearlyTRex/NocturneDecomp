; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_allocateFilter_FUN_00450170(CDemonLight *this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_setutil.cpp_C3DSLight_apply_FUN_00515350 at 00515412
;
; Referenced Globals:
;   TerminatedCString s_core_dlight_cpp_0057c826
;   TerminatedCString s_CDemonLight_allocateFilt_0057c839
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   crt_memory.c_malloc_FUN_005635b0
;
; *****************************************************************************

section .text

    PUSH 0x10000                        ; 00450170
        ;   Label: core_dlight.cpp_CDemonLight_allocateFilter_FUN_00450170
    CALL crt_memory.c_malloc_FUN_005635b0 ; 00450175
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005635b0(ulong size)
    ADD ESP,0x4                         ; 0045017a
    MOV EDX,dword ptr [ESP + 0x4]       ; 0045017d
    MOV dword ptr [EDX + 0x1c6c],EAX    ; 00450181
    TEST EAX,EAX                        ; 00450187
    JZ 0x0045018c                       ; 00450189
        ;   XREF to: 0045018c (CONDITIONAL_JUMP)  ; LAB_0045018c
    RET                                 ; 0045018b
    PUSH EBX                            ; 0045018c
        ;   Label: LAB_0045018c
    MOV ECX,0x57c826                    ; 0045018d | = "..\\core\\dlight.cpp"
    MOV EBX,0x541                       ; 00450192
    PUSH 0x57c839                       ; 00450197 | = "CDemonLight::allocateFilter - Out of ..."
    MOV dword ptr [0x01cc4800],ECX      ; 0045019c | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EBX      ; 004501a2 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 004501a8
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 004501ad
    POP EBX                             ; 004501b0
    RET                                 ; 004501b1

