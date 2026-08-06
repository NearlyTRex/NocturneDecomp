; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_0040a0d0(CDemonActor *this_ptr,SIntersectXZCylinder *cylinder)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; SIntersectXZCylinder * Stack[0x8]:4   cylinder
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_00577642
;   TerminatedCString s_CDemonActor_customInters_00577654
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EDX,0x577642                    ; 0040a0d0 | = "..\\core\\actor.cpp"
        ;   Label: core_actor.cpp_CDemonActor_customIntersectCylinderXZ_FUN_0040a0d0
    MOV ECX,0x29b                       ; 0040a0d5
    PUSH 0x577654                       ; 0040a0da | = "CDemonActor::customIntersectCylinderX..."
    MOV dword ptr [0x01cc4800],EDX      ; 0040a0df | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ECX      ; 0040a0e5 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0040a0eb
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 0040a0f0
    RET                                 ; 0040a0f3

