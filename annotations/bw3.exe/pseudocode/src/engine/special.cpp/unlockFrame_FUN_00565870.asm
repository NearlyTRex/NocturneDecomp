; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_unlockFrame_FUN_00565870(int clear_lock_flag)
;
; Parameters:
; int              Stack[0x4]:4   clear_lock_flag
;
; XREF[9]:
;   core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_0044df60 at 0044dfd3
;   core_game.cpp_FUN_004b6f30 at 004b79d6
;   core_game.cpp_FUN_004bec20 at 004bedf0
;   core_mission.cpp_FUN_004f70a0 at 004f71c5
;   engine_special.cpp_FUN_00565a90 at 00565b6c
;   engine_special.cpp_presentToExternalRenderer_FUN_00566260 at 00566312
;   shape_edittool.cpp_FUN_0047cbd0 at 0047cc93
;   shape_edittool.cpp_FUN_0047ccb0 at 0047cd63
;   unkafter_minecar.cpp_FUN_004ec940 at 004ec942
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_02cf6008
;   undefined4 DAT_02cf6128
;   undefined4 DAT_02cf612c
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02cf612c],0x0      ; 00565870 | DAT_02cf612c
        ;   Label: engine_special.cpp_unlockFrame_FUN_00565870
    JZ 0x00565830                       ; 00565877
        ;   XREF to: 00565830 (CONDITIONAL_JUMP)  ; LAB_00565830
    PUSH EBX                            ; 00565879
    MOV ECX,0x1                         ; 0056587a
    MOV EAX,[0x02cf6128]                ; 0056587f | DAT_02cf6128
    MOV EBX,dword ptr [ESP + 0x8]       ; 00565884
    MOV [0x005fba20],EAX                ; 00565888 | DAT_005fba20
    MOV dword ptr [0x01c6cee8],ECX      ; 0056588d | DAT_01c6cee8
    TEST EBX,EBX                        ; 00565893
    JZ 0x005658a1                       ; 00565895
        ;   XREF to: 005658a1 (CONDITIONAL_JUMP)  ; LAB_005658a1
    PUSH ESI                            ; 00565897
    XOR ESI,ESI                         ; 00565898
    MOV dword ptr [0x02cf612c],ESI      ; 0056589a | DAT_02cf612c
    POP ESI                             ; 005658a0
    CALL dword ptr [0x02cf6008]         ; 005658a1 | DAT_02cf6008
        ;   Label: LAB_005658a1
    POP EBX                             ; 005658a7
    RET                                 ; 005658a8

