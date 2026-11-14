; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_special_cpp_FUN_00565820(void)
;
;
; XREF[9]:
;   core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_0044df60 at 0044df6e
;   core_game.cpp_FUN_004b6f30 at 004b729b
;   core_game.cpp_FUN_004bec20 at 004bede4
;   core_mission.cpp_CDemonMission_process_FUN_004f70a0 at 004f71b5
;   engine_mini3d.cpp_lockFrame_FUN_004ec930 at 004ec930
;   engine_special.cpp_presentToExternalRenderer_FUN_00566260 at 005662d4
;   engine_special.cpp_setResolutionAndColorTable_FUN_00565a90 at 00565b32
;   shape_edittool.cpp_CEditorTools_backupScreen_FUN_0047cbd0 at 0047cc20
;   shape_edittool.cpp_FUN_0047ccb0 at 0047ccf0
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_02cf6004
;   undefined4 DAT_02cf6120
;   undefined4 DAT_02cf6128
;   undefined4 DAT_02cf612c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01c6cee8]      ; 00565820 | DAT_01c6cee8
        ;   Label: engine_special.cpp_FUN_00565820
    TEST EDX,EDX                        ; 00565826
    JNZ 0x00565833                      ; 00565828
        ;   XREF to: 00565833 (CONDITIONAL_JUMP)  ; LAB_00565833
    MOV dword ptr [0x02cf612c],EDX      ; 0056582a | DAT_02cf612c
    XOR EAX,EAX                         ; 00565830
        ;   Label: LAB_00565830
    RET                                 ; 00565832
        ;   Label: LAB_00565832
    CALL dword ptr [0x02cf6004]         ; 00565833 | DAT_02cf6004
        ;   Label: LAB_00565833
    TEST EAX,EAX                        ; 00565839
    JZ 0x00565832                       ; 0056583b
        ;   XREF to: 00565832 (CONDITIONAL_JUMP)  ; LAB_00565832
    PUSH EBX                            ; 0056583d
    MOV ECX,0x1                         ; 0056583e
    MOV EAX,[0x005fba20]                ; 00565843 | DAT_005fba20
    XOR EBX,EBX                         ; 00565848
    MOV [0x02cf6128],EAX                ; 0056584a | DAT_02cf6128
    MOV dword ptr [0x02cf612c],ECX      ; 0056584f | DAT_02cf612c
    MOV EAX,[0x02cf6120]                ; 00565855 | DAT_02cf6120
    MOV dword ptr [0x01c6cee8],EBX      ; 0056585a | DAT_01c6cee8
    MOV [0x005fba20],EAX                ; 00565860 | DAT_005fba20
    MOV EAX,ECX                         ; 00565865
    POP EBX                             ; 00565867
    RET                                 ; 00565868

