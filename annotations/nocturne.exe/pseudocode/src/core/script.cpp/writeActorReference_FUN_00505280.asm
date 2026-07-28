; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_writeActorReference_FUN_00505280(_FILE *file_handle,CDemonActor **actor)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file_handle
; CDemonActor * *  Stack[0x8]:4   actor
;
; XREF[1]:
;   core_script.cpp_FUN_005055f0 at 00505757
;
; Referenced Globals:
;   TerminatedCString s_s_0058fcba
;   TerminatedCString s_s_0058fcc0
;   TerminatedCString s_none_005be228
;
; Called Functions:
;   crt_stdio.c_fprintf_FUN_005644f0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00505280
        ;   Label: core_script.cpp_writeActorReference_FUN_00505280
    MOV EAX,dword ptr [ESP + 0x8]       ; 00505284
    MOV EAX,dword ptr [EAX]             ; 00505288
    TEST EAX,EAX                        ; 0050528a
    JNZ 0x005052a2                      ; 0050528c
        ;   XREF to: 005052a2 (CONDITIONAL_JUMP)  ; LAB_005052a2
    PUSH 0x5be228                       ; 0050528e | = "(none)"
    PUSH 0x58fcba                       ; 00505293 | = "\"%s\"\n"
    PUSH EDX                            ; 00505298
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 00505299
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 0050529e
    RET                                 ; 005052a1
    PUSH EAX                            ; 005052a2
        ;   Label: LAB_005052a2
    PUSH 0x58fcc0                       ; 005052a3 | = "\"%s\"\n"
    PUSH EDX                            ; 005052a8
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 005052a9
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 005052ae
    RET                                 ; 005052b1

