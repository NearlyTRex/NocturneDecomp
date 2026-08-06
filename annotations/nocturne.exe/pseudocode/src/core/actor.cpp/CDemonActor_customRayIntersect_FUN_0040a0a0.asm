; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_actor_cpp_CDemonActor_customRayIntersect_FUN_0040a0a0(CDemonActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   ray_origin
; CVector3f *      Stack[0xc]:4   ray_direction
; CVector3f *      Stack[0x10]:4   out_normal
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_005775e7
;   TerminatedCString s_CDemonActor_customRayInt_005775f9
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040a0a0
        ;   Label: core_actor.cpp_CDemonActor_customRayIntersect_FUN_0040a0a0
    MOV EDX,0x5775e7                    ; 0040a0a1 | = "..\\core\\actor.cpp"
    MOV ECX,0x295                       ; 0040a0a6
    PUSH 0x5775f9                       ; 0040a0ab | = "CDemonActor::customRayIntersect shoul..."
    MOV EBX,0x40000000                  ; 0040a0b0
    MOV dword ptr [0x01cc4800],EDX      ; 0040a0b5 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ECX      ; 0040a0bb | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0040a0c1
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 0040a0c6
    MOV EAX,EBX                         ; 0040a0c9
    POP EBX                             ; 0040a0cb
    RET                                 ; 0040a0cc

