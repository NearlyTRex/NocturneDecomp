; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_writeActorReference_FUN_00530a90(_FILE *file_handle,CDemonActor **actor)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file_handle
; CDemonActor * *  Stack[0x8]:4   actor
;
; XREF[1]:
;   core_script.cpp_CScript_saveState_FUN_00530e00 at 00530f67
;
; Referenced Globals:
;   TerminatedCString s_s_005cfce7
;   TerminatedCString s_s_005cfced
;   TerminatedCString s_none_006039e8
;
; Called Functions:
;   crt_unknown.c_FUN_005a3140
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00530a90
        ;   Label: core_script.cpp_writeActorReference_FUN_00530a90
    MOV EAX,dword ptr [ESP + 0x8]       ; 00530a94
    MOV EAX,dword ptr [EAX]             ; 00530a98
    TEST EAX,EAX                        ; 00530a9a
    JNZ 0x00530ab2                      ; 00530a9c
        ;   XREF to: 00530ab2 (CONDITIONAL_JUMP)  ; LAB_00530ab2
    PUSH 0x6039e8                       ; 00530a9e | = "(none)"
    PUSH 0x5cfce7                       ; 00530aa3 | = "\"%s\"\n"
    PUSH EDX                            ; 00530aa8
    CALL crt_unknown.c_FUN_005a3140     ; 00530aa9
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 00530aae
    RET                                 ; 00530ab1
    PUSH EAX                            ; 00530ab2
        ;   Label: LAB_00530ab2
    PUSH 0x5cfced                       ; 00530ab3 | = "\"%s\"\n"
    PUSH EDX                            ; 00530ab8
    CALL crt_unknown.c_FUN_005a3140     ; 00530ab9
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 00530abe
    RET                                 ; 00530ac1

