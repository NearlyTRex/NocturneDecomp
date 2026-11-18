; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_ground_cpp_getGroundTypeName_FUN_004e70c0(EGroundType type)
;
; Parameters:
; EGroundType      Stack[0x4]:4   type
;
; Referenced Globals:
;   undefined4 s_GROUND_NONE_005e4275+7
;   undefined4 s_GROUND_CONCRETE_005e4281+7
;   undefined4 s_GROUND_DIRT_005e4291+7
;   undefined4 s_GROUND_GRASS_005e429d+7
;   undefined4 s_GROUND_METAL_005e42aa+7
;   undefined4 s_GROUND_WATER_005e42b7+7
;   undefined4 s_GROUND_WOOD_005e42c4+7
;   undefined4 s_GROUND_MARBLE_005e42d0+7
;   undefined4 s_GROUND_MUD_005e42de+7
;   undefined4 s_GROUND_CARPET_005e42e9+7
;   undefined4 s_GROUND_GLASS_005e42f7+7
;   undefined4 s_GROUND_GRAVEL_005e4304+7
;   undefined4 s_GROUND_LEAVES_005e4312+7
;   TerminatedCString s_DEFAULT_005e4320
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e70c0
        ;   Label: core_ground.cpp_getGroundTypeName_FUN_004e70c0
    DEC EAX                             ; 004e70c4
    CMP EAX,0xd                         ; 004e70c5
    JA 0x004e711f                       ; 004e70c8
        ;   XREF to: 004e711f (CONDITIONAL_JUMP)  ; caseD_b
    JMP dword ptr [EAX*0x4 + 0x4e707c]  ; 004e70ca | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV EAX,0x5e427c                    ; 004e70d1 | s_GROUND_NONE_005e4275+7
        ;   Label: caseD_1
    RET                                 ; 004e70d6
    MOV EAX,0x5e4288                    ; 004e70d7 | s_GROUND_CONCRETE_005e4281+7
        ;   Label: caseD_2
    RET                                 ; 004e70dc
    MOV EAX,0x5e4298                    ; 004e70dd | s_GROUND_DIRT_005e4291+7
        ;   Label: caseD_3
    RET                                 ; 004e70e2
    MOV EAX,0x5e42a4                    ; 004e70e3 | s_GROUND_GRASS_005e429d+7
        ;   Label: caseD_4
    RET                                 ; 004e70e8
    MOV EAX,0x5e42b1                    ; 004e70e9 | s_GROUND_METAL_005e42aa+7
        ;   Label: caseD_5
    RET                                 ; 004e70ee
    MOV EAX,0x5e42be                    ; 004e70ef | s_GROUND_WATER_005e42b7+7
        ;   Label: caseD_6
    RET                                 ; 004e70f4
    MOV EAX,0x5e42cb                    ; 004e70f5 | s_GROUND_WOOD_005e42c4+7
        ;   Label: caseD_7
    RET                                 ; 004e70fa
    MOV EAX,0x5e42d7                    ; 004e70fb | s_GROUND_MARBLE_005e42d0+7
        ;   Label: caseD_8
    RET                                 ; 004e7100
    MOV EAX,0x5e42e5                    ; 004e7101 | s_GROUND_MUD_005e42de+7
        ;   Label: caseD_9
    RET                                 ; 004e7106
    MOV EAX,0x5e42f0                    ; 004e7107 | s_GROUND_CARPET_005e42e9+7
        ;   Label: caseD_a
    RET                                 ; 004e710c
    MOV EAX,0x5e42fe                    ; 004e710d | s_GROUND_GLASS_005e42f7+7
        ;   Label: caseD_c
    RET                                 ; 004e7112
    MOV EAX,0x5e430b                    ; 004e7113 | s_GROUND_GRAVEL_005e4304+7
        ;   Label: caseD_d
    RET                                 ; 004e7118
    MOV EAX,0x5e4319                    ; 004e7119 | s_GROUND_LEAVES_005e4312+7
        ;   Label: caseD_e
    RET                                 ; 004e711e
    MOV EAX,0x5e4320                    ; 004e711f | = "DEFAULT"
        ;   Label: caseD_b
    RET                                 ; 004e7124

