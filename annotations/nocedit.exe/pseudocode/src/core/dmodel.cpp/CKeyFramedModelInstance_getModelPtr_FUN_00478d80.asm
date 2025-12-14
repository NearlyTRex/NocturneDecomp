; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
;
; Parameters:
; CKeyFramedModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[84]:
;   core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470 at 0040972a
;   core_ammo.cpp_CAmmo_getBoundingBox_FUN_00410ef0 at 00410eff
;   core_ammobox.cpp_CAmmoBox_FUN_00411820 at 00411870
;   core_ammobox.cpp_CAmmoBox_FUN_004118b0 at 004118bf
;   core_anvil.cpp_CAnvil_FUN_00411fe0 at 00411fef
;   core_anvil.cpp_CAnvil_FUN_00412090 at 004120c6
;   core_backgnd.cpp_CBackgroundActor_FUN_00412940 at 0041294f
;   core_backgnd.cpp_CBackgroundActor_FUN_004129f0 at 00412a09
;   core_bat.cpp_CBat_FUN_00414c60 at 00414c81
;   core_bat.cpp_CBat_process_FUN_00414a00 at 00414ae8
;   ... and 74 more
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_0061f97b
;   TerminatedCString s_Tried_to_do_something_wi_0061f98e
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00478d80
        ;   Label: core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
    MOV EBX,dword ptr [ESP + 0x8]       ; 00478d81
    CMP dword ptr [EBX + 0x178],0x0     ; 00478d85
    JZ 0x00478d96                       ; 00478d8c
        ;   XREF to: 00478d96 (CONDITIONAL_JUMP)  ; LAB_00478d96
    MOV EAX,dword ptr [EBX + 0x178]     ; 00478d8e
    POP EBX                             ; 00478d94
    RET                                 ; 00478d95
    PUSH ESI                            ; 00478d96
        ;   Label: LAB_00478d96
    LEA EAX,[EBX + 0x78]                ; 00478d97
    PUSH EAX                            ; 00478d9a
    MOV ECX,0x61f97b                    ; 00478d9b | = "..\\core\\dmodel.cpp"
    MOV ESI,0x52d                       ; 00478da0
    PUSH 0x61f98e                       ; 00478da5 | = "Tried to do something with model %s, ..."
    MOV dword ptr [0x02f0ca48],ECX      ; 00478daa | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00478db0 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00478db6
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 00478dbb
    POP ESI                             ; 00478dbe
    MOV EAX,dword ptr [EBX + 0x178]     ; 00478dbf
    POP EBX                             ; 00478dc5
    RET                                 ; 00478dc6

