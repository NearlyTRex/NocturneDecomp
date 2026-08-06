; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_0040a100(CDemonActor *this_ptr,CVector3f *position,float search_radius,float *out_floor_height )
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; float            Stack[0xc]:4   search_radius
; float *          Stack[0x10]:4   out_floor_height
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_005776a4
;   TerminatedCString s_CDemonActor_customGetFlo_005776b6
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EDX,0x5776a4                    ; 0040a100 | = "..\\core\\actor.cpp"
        ;   Label: core_actor.cpp_CDemonActor_customGetFloorHeight_FUN_0040a100
    MOV ECX,0x2a0                       ; 0040a105
    PUSH 0x5776b6                       ; 0040a10a | = "CDemonActor::customGetFloorHeight sho..."
    MOV dword ptr [0x01cc4800],EDX      ; 0040a10f | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ECX      ; 0040a115 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0040a11b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 0040a120
    LEA EAX,[EAX]                       ; 0040a123
    LEA EDX,[EDX]                       ; 0040a129
    NOP                                 ; 0040a12f

