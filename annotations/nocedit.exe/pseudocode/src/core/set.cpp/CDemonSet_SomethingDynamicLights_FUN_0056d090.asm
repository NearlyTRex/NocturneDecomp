; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_set.cpp_CDemonSet_SomethingDynamicLights_FUN_0056d090(CDemonSet * this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_boxactor.cpp_FUN_00422a50 at 00422c61
;   core_elephant.cpp_FUN_004a7070 at 004a714b
;   core_lightgun.cpp_ChargedRadianceEmitterGunMaybe_FUN_00506450 at 005065ca
;   core_set.cpp_CDemonSet_FUN_0056c1a0 at 0056c1df
;   core_shotgun.cpp_FUN_00587f70 at 0058804b
;   core_weapon.cpp_CWeapon_process_FUN_005ee110 at 005ee240
;
; Referenced Globals:
;   TerminatedCString s_core_set_cpp_00645dc3
;   TerminatedCString s_Too_many_dynamic_lights_00645dd3
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_DynamicLightCount
;   CDemonLight*[4] g_DynamicLights
;   undefined4 DAT_032776bc
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056d090
        ;   Label: core_set.cpp_CDemonSet_SomethingDynamicLights_FUN_0056d090
    PUSH ESI                            ; 0056d091
    MOV ESI,dword ptr [0x032776b4]      ; 0056d092 | int g_DynamicLightCount
    MOV EBX,dword ptr [ESP + 0x10]      ; 0056d098
    CMP dword ptr [EBX + 0x1cb4],0x0    ; 0056d09c
    JZ 0x0056d0da                       ; 0056d0a3 | LAB_0056d0da
        ;   XREF to: 0056d0da (CONDITIONAL_JUMP)
    TEST ESI,ESI                        ; 0056d0a5
    JLE 0x0056d0c1                      ; 0056d0a7 | LAB_0056d0c1
        ;   XREF to: 0056d0c1 (CONDITIONAL_JUMP)
    LEA EDX,[ESI*0x4 + 0x0]             ; 0056d0a9
    XOR EAX,EAX                         ; 0056d0b0
    CMP EBX,dword ptr [EAX + 0x32776b8] ; 0056d0b2 | CDemonLight *[4] g_DynamicLights
        ;   Label: LAB_0056d0b2
    JZ 0x0056d0da                       ; 0056d0b8 | LAB_0056d0da
        ;   XREF to: 0056d0da (CONDITIONAL_JUMP)
    ADD EAX,0x4                         ; 0056d0ba
    CMP EAX,EDX                         ; 0056d0bd
    JL 0x0056d0b2                       ; 0056d0bf | LAB_0056d0b2
        ;   XREF to: 0056d0b2 (CONDITIONAL_JUMP)
    MOV dword ptr [0x032776b4],ESI      ; 0056d0c1 | int g_DynamicLightCount
        ;   Label: LAB_0056d0c1
    CMP ESI,0x4                         ; 0056d0c7
    JGE 0x0056d0e3                      ; 0056d0ca | LAB_0056d0e3
        ;   XREF to: 0056d0e3 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [0x032776b4]      ; 0056d0cc | int g_DynamicLightCount
        ;   Label: LAB_0056d0cc
    INC ESI                             ; 0056d0d2
    MOV dword ptr [ESI*0x4 + 0x32776b4],EBX ; 0056d0d3 | int g_DynamicLightCount
    MOV dword ptr [0x032776b4],ESI      ; 0056d0da | int g_DynamicLightCount
        ;   Label: LAB_0056d0da
    POP ESI                             ; 0056d0e0
    POP EBX                             ; 0056d0e1
    RET                                 ; 0056d0e2
    PUSH EDI                            ; 0056d0e3
        ;   Label: LAB_0056d0e3
    MOV ECX,0x645dc3                    ; 0056d0e4 | = "..\\core\\set.cpp" | s_core_set_cpp_00645dc3 = ..\core\set.cpp
    MOV EDI,0x8cf                       ; 0056d0e9
    PUSH 0x645dd3                       ; 0056d0ee | = "Too many dynamic lights!" | s_Too_many_dynamic_lights_00645dd3 = Too many dynamic lights!
    MOV dword ptr [0x02f0ca48],ECX      ; 0056d0f3 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 0056d0f9 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0056d0ff | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0056d104
    POP EDI                             ; 0056d107
    JMP 0x0056d0cc                      ; 0056d108 | LAB_0056d0cc
        ;   XREF to: 0056d0cc (UNCONDITIONAL_JUMP)

