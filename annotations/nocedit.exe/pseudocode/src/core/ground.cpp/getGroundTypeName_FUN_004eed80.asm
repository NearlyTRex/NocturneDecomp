; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char * __cdecl core_ground_cpp_getGroundTypeName_FUN_004eed80(int type)
;
; Parameters:
; int              Stack[0x4]:4   type
;
; XREF[6]:
;   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 at 0040f653
;   core_actor.cpp_CActorProperty_renderValue_FUN_0040ea50 at 0040ec06
;   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 at 005799e3
;   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 at 00584a23
;   core_setedit.cpp_EditingGroundTypesAndSaving_FUN_00578630 at 005786a6
;   core_setedit.cpp_ImportingGroundTextures_FUN_00578420 at 005785a1
;
; Referenced Globals:
;   void* switchdataD_004eed48 = 004eed91
;   undefined4 s_NONE_0062e5f8
;   undefined4 s_CONCRETE_0062e604
;   undefined4 s_DIRT_0062e614
;   undefined4 s_GRASS_0062e620
;   undefined4 s_METAL_0062e62d
;   undefined4 s_WATER_0062e63a
;   undefined4 s_WOOD_0062e647
;   undefined4 s_MARBLE_0062e653
;   undefined4 s_MUD_0062e661
;   undefined4 s_CARPET_0062e66c
;   undefined4 s_GLASS_0062e67a
;   undefined4 s_GRAVEL_0062e687
;   TerminatedCString s_DEFAULT_0062e68e
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004eed80
        ;   Label: core_ground.cpp_getGroundTypeName_FUN_004eed80
    DEC EAX                             ; 004eed84
    CMP EAX,0xc                         ; 004eed85
    JA 0x004eedd9                       ; 004eed88
        ;   XREF to: 004eedd9 (CONDITIONAL_JUMP)  ; caseD_b
    JMP dword ptr [EAX*0x4 + 0x4eed48]  ; 004eed8a | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV EAX,0x62e5f8                    ; 004eed91 | s_NONE_0062e5f8
        ;   Label: caseD_1
    RET                                 ; 004eed96
    MOV EAX,0x62e604                    ; 004eed97 | s_CONCRETE_0062e604
        ;   Label: caseD_2
    RET                                 ; 004eed9c
    MOV EAX,0x62e614                    ; 004eed9d | s_DIRT_0062e614
        ;   Label: caseD_3
    RET                                 ; 004eeda2
    MOV EAX,0x62e620                    ; 004eeda3 | s_GRASS_0062e620
        ;   Label: caseD_4
    RET                                 ; 004eeda8
    MOV EAX,0x62e62d                    ; 004eeda9 | s_METAL_0062e62d
        ;   Label: caseD_5
    RET                                 ; 004eedae
    MOV EAX,0x62e63a                    ; 004eedaf | s_WATER_0062e63a
        ;   Label: caseD_6
    RET                                 ; 004eedb4
    MOV EAX,0x62e647                    ; 004eedb5 | s_WOOD_0062e647
        ;   Label: caseD_7
    RET                                 ; 004eedba
    MOV EAX,0x62e653                    ; 004eedbb | s_MARBLE_0062e653
        ;   Label: caseD_8
    RET                                 ; 004eedc0
    MOV EAX,0x62e661                    ; 004eedc1 | s_MUD_0062e661
        ;   Label: caseD_9
    RET                                 ; 004eedc6
    MOV EAX,0x62e66c                    ; 004eedc7 | s_CARPET_0062e66c
        ;   Label: caseD_a
    RET                                 ; 004eedcc
    MOV EAX,0x62e67a                    ; 004eedcd | s_GLASS_0062e67a
        ;   Label: caseD_c
    RET                                 ; 004eedd2
    MOV EAX,0x62e687                    ; 004eedd3 | s_GRAVEL_0062e687
        ;   Label: caseD_d
    RET                                 ; 004eedd8
    MOV EAX,0x62e68e                    ; 004eedd9 | = "DEFAULT"
        ;   Label: caseD_b
    RET                                 ; 004eedde

