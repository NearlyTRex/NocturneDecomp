; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_writeActorReference_FUN_0052a090(_FILE *file_handle,CDemonActor **actor)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file_handle
; CDemonActor * *  Stack[0x8]:4   actor
;
; XREF[1]:
;   core_script.cpp_CScript_saveState_FUN_0052a400 at 0052a567
;
; Referenced Globals:
;   TerminatedCString s_s_005e5032
;   TerminatedCString s_s_005e5038
;   TerminatedCString s_none_0061b468
;
; Called Functions:
;   crt_unknown.c_FUN_005b8010
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0052a090
        ;   Label: core_script.cpp_writeActorReference_FUN_0052a090
    MOV EAX,dword ptr [ESP + 0x8]       ; 0052a094
    MOV EAX,dword ptr [EAX]             ; 0052a098
    TEST EAX,EAX                        ; 0052a09a
    JNZ 0x0052a0b2                      ; 0052a09c
        ;   XREF to: 0052a0b2 (CONDITIONAL_JUMP)  ; LAB_0052a0b2
    PUSH 0x61b468                       ; 0052a09e | = "(none)"
    PUSH 0x5e5032                       ; 0052a0a3 | = "\"%s\"\n"
    PUSH EDX                            ; 0052a0a8
    CALL crt_unknown.c_FUN_005b8010     ; 0052a0a9
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 0052a0ae
    RET                                 ; 0052a0b1
    PUSH EAX                            ; 0052a0b2
        ;   Label: LAB_0052a0b2
    PUSH 0x5e5038                       ; 0052a0b3 | = "\"%s\"\n"
    PUSH EDX                            ; 0052a0b8
    CALL crt_unknown.c_FUN_005b8010     ; 0052a0b9
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 0052a0be
    RET                                 ; 0052a0c1

