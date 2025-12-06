; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_actor.cpp_CDemonActor_getSurfaceProperties_FUN_00409840(CDemonActor * this_ptr, SSurfaceInfo * surface_info)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; SSurfaceInfo *   Stack[0x8]:4   surface_info
;
; XREF[5]:
;   core_glass.cpp_CGlass_getSurfaceProperties_FUN_004eb250 at 004eb261
;   core_manpuz.cpp_FUN_005097e0 at 005097f4
;   core_manpuz.cpp_FUN_0050b2c0 at 0050b2cb
;   core_trigger.cpp_CTrigger_FUN_005e0a50 at 005e0a5c
;   core_wateract.cpp_CWaterActor_FUN_005eb910 at 005eb91b
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_00613886
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00409840
        ;   Label: core_actor.cpp_CDemonActor_getSurfaceProperties_FUN_00409840
    MOV EBX,dword ptr [ESP + 0xc]       ; 00409841
    PUSH 0x495                          ; 00409845
    PUSH 0x613886                       ; 0040984a | = "..\\core\\actor.cpp" | s_core_actor_cpp_00613886 = ..\core\actor.cpp
    MOV EDX,dword ptr [ESP + 0x10]      ; 0040984f
    PUSH EDX                            ; 00409853
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 00409854 | void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
    MOV dword ptr [EBX + 0x48],0x0      ; 00409859
    FLD float ptr [EBX + 0x44]          ; 00409860
    MOV dword ptr [EBX + 0x50],0x0      ; 00409863
    ADD ESP,0xc                         ; 0040986a
    FSTP float ptr [EBX + 0x4c]         ; 0040986d
    POP EBX                             ; 00409870
    RET                                 ; 00409871

