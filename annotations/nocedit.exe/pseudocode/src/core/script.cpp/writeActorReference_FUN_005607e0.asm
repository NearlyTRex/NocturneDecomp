; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_writeActorReference_FUN_005607e0(_FILE *file_handle,CDemonActor *actor)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file_handle
; CDemonActor *    Stack[0x8]:4   actor
;
; XREF[1]:
;   core_script.cpp_CScript_saveState_FUN_00560b50 at 00560cd2
;
; Referenced Globals:
;   TerminatedCString s_s_006433e6
;   TerminatedCString s_s_006433ec
;   TerminatedCString s_none_00680d58
;
; Called Functions:
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005607e0
        ;   Label: core_script.cpp_writeActorReference_FUN_005607e0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005607e4
    MOV EAX,dword ptr [EAX]             ; 005607e8
    TEST EAX,EAX                        ; 005607ea
    JNZ 0x00560802                      ; 005607ec
        ;   XREF to: 00560802 (CONDITIONAL_JUMP)  ; LAB_00560802
    PUSH 0x680d58                       ; 005607ee | = "(none)"
    PUSH 0x6433e6                       ; 005607f3 | = "\"%s\"\n"
    PUSH EDX                            ; 005607f8
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005607f9
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 005607fe
    RET                                 ; 00560801
    PUSH EAX                            ; 00560802
        ;   Label: LAB_00560802
    PUSH 0x6433ec                       ; 00560803 | = "\"%s\"\n"
    PUSH EDX                            ; 00560808
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00560809
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0056080e
    RET                                 ; 00560811

