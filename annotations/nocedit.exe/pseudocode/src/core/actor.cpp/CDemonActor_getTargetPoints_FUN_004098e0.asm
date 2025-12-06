; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_actor.cpp_CDemonActor_getTargetPoints_FUN_004098e0(CDemonActor * this_ptr, CVector3f * out_points_array)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_006138ce
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;
; *****************************************************************************

section .text

    PUSH 0x4c8                          ; 004098e0
        ;   Label: core_actor.cpp_CDemonActor_getTargetPoints_FUN_004098e0
    PUSH 0x6138ce                       ; 004098e5 | = "..\\core\\actor.cpp" | s_core_actor_cpp_006138ce = ..\core\actor.cpp
    MOV EDX,dword ptr [ESP + 0xc]       ; 004098ea
    PUSH EDX                            ; 004098ee
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 004098ef | void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004098f4
    XOR EAX,EAX                         ; 004098f7
    RET                                 ; 004098f9

