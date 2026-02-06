; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(CDemonSet *this_ptr,int ray_type)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   ray_type
;
; XREF[12]:
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210 at 0040a6ed
;   core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0 at 0042d91d
;   core_crossbow.cpp_CCrossbow_fire_FUN_00448f20 at 00449087
;   core_gabriela.cpp_CGabriella_FUN_004d4190 at 004d4619
;   core_gabriela.cpp_CGabriella_FUN_004d6260 at 004d6495
;   core_gun.cpp_CGun_FUN_004f0350 at 004f04cb
;   core_lightgun.cpp_CLightGun_FUN_00505c70 at 00505e1c
;   core_scat.cpp_CScat_FUN_00558cf0 at 00558f25
;   core_stranger.cpp_CStranger_FUN_005c3150 at 005c31e5
;   core_stranger.cpp_CStranger_FUN_005c3960 at 005c40a0
;   ... and 2 more
;
; Referenced Globals:
;   TerminatedCString s_core_setcolid_cpp_006463b9
;   TerminatedCString s_CDemonSet_setRayType_use_006463ce
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00574230
        ;   Label: core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230
    MOV EDX,dword ptr [ESP + 0x8]       ; 00574234
    MOV dword ptr [EAX + 0x15f680],EDX  ; 00574238
    CMP EDX,0x3                         ; 0057423e
    JZ 0x00574244                       ; 00574241
        ;   XREF to: 00574244 (CONDITIONAL_JUMP)  ; LAB_00574244
    RET                                 ; 00574243
    PUSH EBX                            ; 00574244
        ;   Label: LAB_00574244
    MOV ECX,0x6463b9                    ; 00574245 | = "..\\core\\setcolid.cpp"
    MOV EBX,0x49a                       ; 0057424a
    PUSH 0x6463ce                       ; 0057424f | = "CDemonSet::setRayType - use setRayTyp..."
    MOV dword ptr [0x02f0ca48],ECX      ; 00574254 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0057425a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00574260
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00574265
    POP EBX                             ; 00574268
    RET                                 ; 00574269

