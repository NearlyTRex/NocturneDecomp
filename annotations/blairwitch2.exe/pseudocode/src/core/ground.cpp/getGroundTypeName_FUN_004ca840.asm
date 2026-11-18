; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_ground_cpp_getGroundTypeName_FUN_004ca840(EGroundType type)
;
; Parameters:
; EGroundType      Stack[0x4]:4   type
;
; Referenced Globals:
;   undefined4 s_GROUND_NONE_005d9680+7
;   undefined4 s_GROUND_CONCRETE_005d968c+7
;   undefined4 s_GROUND_DIRT_005d969c+7
;   undefined4 s_GROUND_GRASS_005d96a8+7
;   undefined4 s_GROUND_METAL_005d96b5+7
;   undefined4 s_GROUND_WATER_005d96c2+7
;   undefined4 s_GROUND_WOOD_005d96cf+7
;   undefined4 s_GROUND_MARBLE_005d96db+7
;   undefined4 s_GROUND_MUD_005d96e9+7
;   undefined4 s_GROUND_CARPET_005d96f4+7
;   undefined4 s_GROUND_GLASS_005d9702+7
;   undefined4 s_GROUND_GRAVEL_005d970f+7
;   undefined4 s_GROUND_LEAVES_005d971d+7
;   TerminatedCString s_DEFAULT_005d972b
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ca840
        ;   Label: core_ground.cpp_getGroundTypeName_FUN_004ca840
    DEC EAX                             ; 004ca844
    CMP EAX,0xd                         ; 004ca845
    JA 0x004ca89f                       ; 004ca848
        ;   XREF to: 004ca89f (CONDITIONAL_JUMP)  ; caseD_b
    JMP dword ptr [EAX*0x4 + 0x4ca7fc]  ; 004ca84a | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV EAX,0x5d9687                    ; 004ca851 | s_GROUND_NONE_005d9680+7
        ;   Label: caseD_1
    RET                                 ; 004ca856
    MOV EAX,0x5d9693                    ; 004ca857 | s_GROUND_CONCRETE_005d968c+7
        ;   Label: caseD_2
    RET                                 ; 004ca85c
    MOV EAX,0x5d96a3                    ; 004ca85d | s_GROUND_DIRT_005d969c+7
        ;   Label: caseD_3
    RET                                 ; 004ca862
    MOV EAX,0x5d96af                    ; 004ca863 | s_GROUND_GRASS_005d96a8+7
        ;   Label: caseD_4
    RET                                 ; 004ca868
    MOV EAX,0x5d96bc                    ; 004ca869 | s_GROUND_METAL_005d96b5+7
        ;   Label: caseD_5
    RET                                 ; 004ca86e
    MOV EAX,0x5d96c9                    ; 004ca86f | s_GROUND_WATER_005d96c2+7
        ;   Label: caseD_6
    RET                                 ; 004ca874
    MOV EAX,0x5d96d6                    ; 004ca875 | s_GROUND_WOOD_005d96cf+7
        ;   Label: caseD_7
    RET                                 ; 004ca87a
    MOV EAX,0x5d96e2                    ; 004ca87b | s_GROUND_MARBLE_005d96db+7
        ;   Label: caseD_8
    RET                                 ; 004ca880
    MOV EAX,0x5d96f0                    ; 004ca881 | s_GROUND_MUD_005d96e9+7
        ;   Label: caseD_9
    RET                                 ; 004ca886
    MOV EAX,0x5d96fb                    ; 004ca887 | s_GROUND_CARPET_005d96f4+7
        ;   Label: caseD_a
    RET                                 ; 004ca88c
    MOV EAX,0x5d9709                    ; 004ca88d | s_GROUND_GLASS_005d9702+7
        ;   Label: caseD_c
    RET                                 ; 004ca892
    MOV EAX,0x5d9716                    ; 004ca893 | s_GROUND_GRAVEL_005d970f+7
        ;   Label: caseD_d
    RET                                 ; 004ca898
    MOV EAX,0x5d9724                    ; 004ca899 | s_GROUND_LEAVES_005d971d+7
        ;   Label: caseD_e
    RET                                 ; 004ca89e
    MOV EAX,0x5d972b                    ; 004ca89f | = "DEFAULT"
        ;   Label: caseD_b
    RET                                 ; 004ca8a4

