; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_texture_cpp_FUN_0056ac20(void)
;
;
; XREF[3]:
;   core_menu.cpp_showMainGameMenu_FUN_004ea4d0 at 004ea572
;   core_mission.cpp_CDemonMission_freeAllAssets_FUN_004f76f0 at 004f76f0
;   engine_mini3d.cpp_resetTextureCache_FUN_004eda20 at 004eda20
;
; Referenced Globals:
;   undefined4 DAT_02cfd0d0
;   undefined4 DAT_02cfd0d4
;
; Called Functions:
;   engine_texture.cpp_FUN_005695c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02cfd0d0]      ; 0056ac20 | DAT_02cfd0d0
        ;   Label: engine_texture.cpp_FUN_0056ac20
    PUSH EDX                            ; 0056ac26
    CALL engine_texture.cpp_FUN_005695c0 ; 0056ac27
        ;   XREF to: 005695c0 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_FUN_005695c0(CTextureCache * this_ptr)
    XOR ECX,ECX                         ; 0056ac2c
    ADD ESP,0x4                         ; 0056ac2e
    MOV dword ptr [0x02cfd0d4],ECX      ; 0056ac31 | DAT_02cfd0d4
    LEA EAX,[EAX]                       ; 0056ac37
    LEA EDX,[EDX]                       ; 0056ac3d
    RET                                 ; 0056ac40

