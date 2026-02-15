; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_saveActor_FUN_00523af0(CDemonMission *this_ptr,CDemonActor *actor_ptr,_FILE *file,CDemonActor *current_actor,char *description)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor_ptr
; _FILE *          Stack[0xc]:4   file
; CDemonActor *    Stack[0x10]:4   current_actor
; char *           Stack[0x14]:4   description
;
; XREF[1]:
;   core_actor.cpp_archiveActor_FUN_0040b870 at 0040b8e2
;
; Referenced Globals:
;   TerminatedCString s_s_08x_0063905e
;   TerminatedCString s_core_mission_cpp_00639063
;   TerminatedCString s_s_00639077
;   TerminatedCString s_s_0063907c
;   TerminatedCString s_anon_00639085
;   TerminatedCString s_none_0067d690
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00523af0
        ;   Label: core_mission.cpp_CDemonMission_saveActor_FUN_00523af0
    PUSH ESI                            ; 00523af1
    MOV EBX,dword ptr [ESP + 0x10]      ; 00523af2
    MOV ESI,dword ptr [ESP + 0x14]      ; 00523af6
    CMP EBX,0xff000000                  ; 00523afa
    JNC 0x00523b49                      ; 00523b00
        ;   XREF to: 00523b49 (CONDITIONAL_JUMP)  ; LAB_00523b49
    MOV EAX,0x67d690                    ; 00523b02 | = "(none)"
    TEST EBX,EBX                        ; 00523b07
    JZ 0x00523b20                       ; 00523b09
        ;   XREF to: 00523b20 (CONDITIONAL_JUMP)  ; LAB_00523b20
    PUSH 0x273                          ; 00523b0b
    PUSH 0x639063                       ; 00523b10 | = "..\\core\\mission.cpp"
    PUSH EBX                            ; 00523b15
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 00523b16
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
    ADD ESP,0xc                         ; 00523b1b
    MOV EAX,EBX                         ; 00523b1e
    PUSH EAX                            ; 00523b20 | = "(none)"
        ;   Label: LAB_00523b20
    PUSH 0x639077                       ; 00523b21 | = "\"%s\""
    PUSH ESI                            ; 00523b26
        ;   Label: LAB_00523b26
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00523b27
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00523b2c
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00523b2f
    TEST EDX,EDX                        ; 00523b33
    JZ 0x00523b51                       ; 00523b35
        ;   XREF to: 00523b51 (CONDITIONAL_JUMP)  ; LAB_00523b51
    PUSH EDX                            ; 00523b37
    PUSH 0x63907c                       ; 00523b38 | = "\t\t// %s\n"
    PUSH ESI                            ; 00523b3d
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00523b3e
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00523b43
    POP ESI                             ; 00523b46
    POP EBX                             ; 00523b47
    RET                                 ; 00523b48
    PUSH EBX                            ; 00523b49
        ;   Label: LAB_00523b49
    PUSH 0x63905e                       ; 00523b4a | = "%08x"
    JMP 0x00523b26                      ; 00523b4f
        ;   XREF to: 00523b26 (UNCONDITIONAL_JUMP)  ; LAB_00523b26
    PUSH 0x639085                       ; 00523b51 | = "\n"
        ;   Label: LAB_00523b51
    PUSH ESI                            ; 00523b56
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00523b57
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 00523b5c
    POP ESI                             ; 00523b5f
    POP EBX                             ; 00523b60
    RET                                 ; 00523b61

