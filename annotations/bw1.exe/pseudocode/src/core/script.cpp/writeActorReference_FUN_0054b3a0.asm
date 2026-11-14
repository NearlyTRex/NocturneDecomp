; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_writeActorReference_FUN_0054b3a0(_FILE *file_handle,CDemonActor **actor)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file_handle
; CDemonActor * *  Stack[0x8]:4   actor
;
; XREF[1]:
;   core_script.cpp_CScript_saveState_FUN_0054b710 at 0054b877
;
; Referenced Globals:
;   TerminatedCString s_s_005f0056
;   TerminatedCString s_s_005f005c
;   TerminatedCString s_none_00622ad8
;
; Called Functions:
;   crt_unknown.c_FUN_005c03c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0054b3a0
        ;   Label: core_script.cpp_writeActorReference_FUN_0054b3a0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0054b3a4
    MOV EAX,dword ptr [EAX]             ; 0054b3a8
    TEST EAX,EAX                        ; 0054b3aa
    JNZ 0x0054b3c2                      ; 0054b3ac
        ;   XREF to: 0054b3c2 (CONDITIONAL_JUMP)  ; LAB_0054b3c2
    PUSH 0x622ad8                       ; 0054b3ae | = "(none)"
    PUSH 0x5f0056                       ; 0054b3b3 | = "\"%s\"\n"
    PUSH EDX                            ; 0054b3b8
    CALL crt_unknown.c_FUN_005c03c0     ; 0054b3b9
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 0054b3be
    RET                                 ; 0054b3c1
    PUSH EAX                            ; 0054b3c2
        ;   Label: LAB_0054b3c2
    PUSH 0x5f005c                       ; 0054b3c3 | = "\"%s\"\n"
    PUSH EDX                            ; 0054b3c8
    CALL crt_unknown.c_FUN_005c03c0     ; 0054b3c9
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 0054b3ce
    RET                                 ; 0054b3d1

