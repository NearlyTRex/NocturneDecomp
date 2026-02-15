; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_spawnFlies_FUN_00409e70(CDemonActor *this_ptr,int fly_count,float spawn_radius)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   fly_count
; float            Stack[0xc]:4   spawn_radius
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_spawnFlies_FUN_0042df90 at 0042dfa8
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_006138f2
;   CGore* g_CGorePtr = 02d83364
;   CGore g_CGoreInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;   core_flies.cpp_CFlies_FUN_004cca50
;   core_gore.cpp_CGore_FUN_004ee030
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00409e70
        ;   Label: core_actor.cpp_CDemonActor_spawnFlies_FUN_00409e70
    MOV EBX,dword ptr [ESP + 0x8]       ; 00409e71
    PUSH 0x510                          ; 00409e75
    PUSH 0x6138f2                       ; 00409e7a | = "..\\core\\actor.cpp"
    PUSH EBX                            ; 00409e7f
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 00409e80
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
    ADD ESP,0xc                         ; 00409e85
    PUSH EBX                            ; 00409e88
    CALL core_flies.cpp_CFlies_FUN_004cca50 ; 00409e89
        ;   XREF to: 004cca50 (UNCONDITIONAL_CALL)  ; CDemonActor * core_flies.cpp_CFlies_FUN_004cca50(CFlies * this_ptr)
    ADD ESP,0x4                         ; 00409e8e
    TEST EAX,EAX                        ; 00409e91
    JZ 0x00409e97                       ; 00409e93
        ;   XREF to: 00409e97 (CONDITIONAL_JUMP)  ; LAB_00409e97
    POP EBX                             ; 00409e95
    RET                                 ; 00409e96
    PUSH EAX                            ; 00409e97
        ;   Label: LAB_00409e97
    MOV EDX,dword ptr [ESP + 0x10]      ; 00409e98
    PUSH dword ptr [ESP + 0x14]         ; 00409e9c
    PUSH EDX                            ; 00409ea0
    PUSH EBX                            ; 00409ea1
    MOV ECX,dword ptr [0x0067b9a0]      ; 00409ea2 | g_CGoreInstance | g_CGorePtr
    PUSH ECX                            ; 00409ea8 | g_CGoreInstance
    CALL core_gore.cpp_CGore_FUN_004ee030 ; 00409ea9
        ;   XREF to: 004ee030 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_FUN_004ee030(CGore * this_ptr, CDemonActor * actor)
    ADD ESP,0x14                        ; 00409eae
    POP EBX                             ; 00409eb1
    RET                                 ; 00409eb2

