; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_unlockFrame_FUN_00581fa0(int clear_lock_flag)
;
; Parameters:
; int              Stack[0x4]:4   clear_lock_flag
;
; XREF[9]:
;   core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00451e20 at 00451e93
;   core_game.cpp_FUN_004ce580 at 004cf026
;   core_game.cpp_FUN_004d77d0 at 004d79a0
;   core_mission.cpp_CDemonMission_process_FUN_0051b8d0 at 0051b9f5
;   engine_mini3d.cpp_unlockFrame_FUN_00511170 at 00511172
;   engine_special.cpp_presentToExternalRenderer_FUN_00582990 at 00582a42
;   engine_special.cpp_setResolutionAndColorTable_FUN_005821c0 at 0058229c
;   shape_edittool.cpp_CEditorTools_backupScreen_FUN_00494030 at 004940f3
;   shape_edittool.cpp_FUN_00494110 at 004941c3
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c50948
;   undefined4 DAT_02c833ac
;   undefined4 DAT_02c834cc
;   undefined4 DAT_02c834d0
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02c834d0],0x0      ; 00581fa0 | DAT_02c834d0
        ;   Label: engine_special.cpp_unlockFrame_FUN_00581fa0
    JZ 0x00581f60                       ; 00581fa7
        ;   XREF to: 00581f60 (CONDITIONAL_JUMP)  ; LAB_00581f60
    PUSH EBX                            ; 00581fa9
    MOV ECX,0x1                         ; 00581faa
    MOV EAX,[0x02c834cc]                ; 00581faf | DAT_02c834cc
    MOV EBX,dword ptr [ESP + 0x8]       ; 00581fb4
    MOV [0x0061b4a0],EAX                ; 00581fb8 | DAT_0061b4a0
    MOV dword ptr [0x01c50948],ECX      ; 00581fbd | DAT_01c50948
    TEST EBX,EBX                        ; 00581fc3
    JZ 0x00581fd1                       ; 00581fc5
        ;   XREF to: 00581fd1 (CONDITIONAL_JUMP)  ; LAB_00581fd1
    PUSH ESI                            ; 00581fc7
    XOR ESI,ESI                         ; 00581fc8
    MOV dword ptr [0x02c834d0],ESI      ; 00581fca | DAT_02c834d0
    POP ESI                             ; 00581fd0
    CALL dword ptr [0x02c833ac]         ; 00581fd1 | DAT_02c833ac
        ;   Label: LAB_00581fd1
    POP EBX                             ; 00581fd7
    RET                                 ; 00581fd8

