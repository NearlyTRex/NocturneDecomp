; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_ground_cpp_getGroundTypeName_FUN_004cfa50(EGroundType type)
;
; Parameters:
; EGroundType      Stack[0x4]:4   type
;
; Referenced Globals:
;   undefined4 s_GROUND_NONE_005c4899+7
;   undefined4 s_GROUND_CONCRETE_005c48a5+7
;   undefined4 s_GROUND_DIRT_005c48b5+7
;   undefined4 s_GROUND_GRASS_005c48c1+7
;   undefined4 s_GROUND_METAL_005c48ce+7
;   undefined4 s_GROUND_WATER_005c48db+7
;   undefined4 s_GROUND_WOOD_005c48e8+7
;   undefined4 s_GROUND_MARBLE_005c48f4+7
;   undefined4 s_GROUND_MUD_005c4902+7
;   undefined4 s_GROUND_CARPET_005c490d+7
;   undefined4 s_GROUND_GLASS_005c491b+7
;   undefined4 s_GROUND_GRAVEL_005c4928+7
;   undefined4 s_GROUND_LEAVES_005c4936+7
;   TerminatedCString s_DEFAULT_005c4944
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004cfa50
        ;   Label: core_ground.cpp_getGroundTypeName_FUN_004cfa50
    DEC EAX                             ; 004cfa54
    CMP EAX,0xd                         ; 004cfa55
    JA 0x004cfaaf                       ; 004cfa58
        ;   XREF to: 004cfaaf (CONDITIONAL_JUMP)  ; caseD_b
    JMP dword ptr [EAX*0x4 + 0x4cfa0c]  ; 004cfa5a | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV EAX,0x5c48a0                    ; 004cfa61 | s_GROUND_NONE_005c4899+7
        ;   Label: caseD_1
    RET                                 ; 004cfa66
    MOV EAX,0x5c48ac                    ; 004cfa67 | s_GROUND_CONCRETE_005c48a5+7
        ;   Label: caseD_2
    RET                                 ; 004cfa6c
    MOV EAX,0x5c48bc                    ; 004cfa6d | s_GROUND_DIRT_005c48b5+7
        ;   Label: caseD_3
    RET                                 ; 004cfa72
    MOV EAX,0x5c48c8                    ; 004cfa73 | s_GROUND_GRASS_005c48c1+7
        ;   Label: caseD_4
    RET                                 ; 004cfa78
    MOV EAX,0x5c48d5                    ; 004cfa79 | s_GROUND_METAL_005c48ce+7
        ;   Label: caseD_5
    RET                                 ; 004cfa7e
    MOV EAX,0x5c48e2                    ; 004cfa7f | s_GROUND_WATER_005c48db+7
        ;   Label: caseD_6
    RET                                 ; 004cfa84
    MOV EAX,0x5c48ef                    ; 004cfa85 | s_GROUND_WOOD_005c48e8+7
        ;   Label: caseD_7
    RET                                 ; 004cfa8a
    MOV EAX,0x5c48fb                    ; 004cfa8b | s_GROUND_MARBLE_005c48f4+7
        ;   Label: caseD_8
    RET                                 ; 004cfa90
    MOV EAX,0x5c4909                    ; 004cfa91 | s_GROUND_MUD_005c4902+7
        ;   Label: caseD_9
    RET                                 ; 004cfa96
    MOV EAX,0x5c4914                    ; 004cfa97 | s_GROUND_CARPET_005c490d+7
        ;   Label: caseD_a
    RET                                 ; 004cfa9c
    MOV EAX,0x5c4922                    ; 004cfa9d | s_GROUND_GLASS_005c491b+7
        ;   Label: caseD_c
    RET                                 ; 004cfaa2
    MOV EAX,0x5c492f                    ; 004cfaa3 | s_GROUND_GRAVEL_005c4928+7
        ;   Label: caseD_d
    RET                                 ; 004cfaa8
    MOV EAX,0x5c493d                    ; 004cfaa9 | s_GROUND_LEAVES_005c4936+7
        ;   Label: caseD_e
    RET                                 ; 004cfaae
    MOV EAX,0x5c4944                    ; 004cfaaf | = "DEFAULT"
        ;   Label: caseD_b
    RET                                 ; 004cfab4

