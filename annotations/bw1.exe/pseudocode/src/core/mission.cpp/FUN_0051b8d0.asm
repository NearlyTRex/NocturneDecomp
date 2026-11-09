; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_FUN_0051b8d0(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x24]:1  local_24
;
; XREF[1]:
;   core_game.cpp_FUN_004d8060 at 004d8481
;
; Referenced Globals:
;   CScript* g_CScriptPtr = 01e81c80
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01d06ab4
;   undefined4 g_CScriptInstance.field16_0x10
;
; Called Functions:
;   core_mission.cpp_CDemonMission_removeActor_FUN_0051b4d0
;   core_mission.cpp_FUN_0051b610
;   core_mission.cpp_FUN_0051b7b0
;   core_set.cpp_CDemonSet_initScene_FUN_0054ec60
;   core_set.cpp_FUN_00551b90
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0
;   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d0c0
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220
;   engine_alphabit.cpp_FUN_0040d1c0
;   engine_alphabit.cpp_FUN_0040d9a0
;   engine_special.cpp_FUN_00581f50
;   engine_special.cpp_unlockFrame_FUN_00581fa0
;   wincore_wddvmem.cpp_FUN_005acff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b8d0
        ;   Label: core_mission.cpp_FUN_0051b8d0
    PUSH ESI                            ; 0051b8d1
    PUSH EDI                            ; 0051b8d2
    PUSH EBP                            ; 0051b8d3
    SUB ESP,0x14                        ; 0051b8d4
    MOV EDI,dword ptr [ESP + 0x28]      ; 0051b8d7
    MOV EDX,dword ptr [EDI + 0x1130]    ; 0051b8db
    TEST EDX,EDX                        ; 0051b8e1
    JZ 0x0051b92a                       ; 0051b8e3
        ;   XREF to: 0051b92a (CONDITIONAL_JUMP)  ; LAB_0051b92a
    XOR ESI,ESI                         ; 0051b8e5
    TEST EDX,EDX                        ; 0051b8e7
    JLE 0x0051b920                      ; 0051b8e9
        ;   XREF to: 0051b920 (CONDITIONAL_JUMP)  ; LAB_0051b920
    MOV EBX,EDI                         ; 0051b8eb
    MOV EBP,dword ptr [EBX + 0x12c4]    ; 0051b8ed
        ;   Label: LAB_0051b8ed
    PUSH EBP                            ; 0051b8f3
    MOV EAX,dword ptr [EBX + 0x1134]    ; 0051b8f4
    PUSH EAX                            ; 0051b8fa
    PUSH EDI                            ; 0051b8fb
    ADD EBX,0x4                         ; 0051b8fc
    INC ESI                             ; 0051b8ff
    CALL core_mission.cpp_CDemonMission_removeActor_FUN_0051b4d0 ; 0051b900
        ;   XREF to: 0051b4d0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_removeActor_FUN_0051b4d0(CDemonMission * this_ptr, CDemonActor * actor, int should_delete)
    MOV EDX,dword ptr [EDI + 0x1130]    ; 0051b905
    ADD ESP,0xc                         ; 0051b90b
    CMP ESI,EDX                         ; 0051b90e
    JL 0x0051b8ed                       ; 0051b910
        ;   XREF to: 0051b8ed (CONDITIONAL_JUMP)  ; LAB_0051b8ed
    LEA EAX,[EAX]                       ; 0051b912
    LEA EDX,[EDX]                       ; 0051b918
    MOV EAX,EAX                         ; 0051b91e
    MOV dword ptr [EDI + 0x1130],0x0    ; 0051b920
        ;   Label: LAB_0051b920
    PUSH EDI                            ; 0051b92a
        ;   Label: LAB_0051b92a
    CALL core_mission.cpp_FUN_0051b7b0  ; 0051b92b
        ;   XREF to: 0051b7b0 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_0051b7b0()
    MOV ECX,dword ptr [EDI + 0x112c]    ; 0051b930
    ADD ESP,0x4                         ; 0051b936
    TEST ECX,ECX                        ; 0051b939
    JL 0x0051b9a7                       ; 0051b93b
        ;   XREF to: 0051b9a7 (CONDITIONAL_JUMP)  ; LAB_0051b9a7
    MOV EBX,dword ptr [0x01d06ab4]      ; 0051b93d | DAT_01d06ab4
    LEA ESI,[EDI + 0x1120]              ; 0051b943
    MOV EBX,dword ptr [EBX*0x4 + 0x1d06aa4] ; 0051b949
    MOV EAX,dword ptr [ESI]             ; 0051b950
    MOV dword ptr [EBX + 0x20],EAX      ; 0051b952
    MOV EAX,dword ptr [ESI + 0x4]       ; 0051b955
    MOV dword ptr [EBX + 0x24],EAX      ; 0051b958
    MOV EAX,dword ptr [ESI + 0x8]       ; 0051b95b
    MOV dword ptr [EBX + 0x28],EAX      ; 0051b95e
    MOV ESI,dword ptr [ESI + 0xc]       ; 0051b961
    MOV dword ptr [EBX + 0x2c],ESI      ; 0051b964
    MOV EBX,dword ptr [EDI + 0x112c]    ; 0051b967
    CMP EBX,dword ptr [EDI]             ; 0051b96d
    JNZ 0x0051b9af                      ; 0051b96f
        ;   XREF to: 0051b9af (CONDITIONAL_JUMP)  ; LAB_0051b9af
    MOV dword ptr [EDI + 0x1014],0x0    ; 0051b971
        ;   Label: LAB_0051b971
    MOV dword ptr [EDI + 0x112c],0xffffffff ; 0051b97b
    MOV dword ptr [EDI + 0x1128],0x0    ; 0051b985
    MOV EAX,dword ptr [EDI + 0x1128]    ; 0051b98f
    MOV dword ptr [EDI + 0x1124],EAX    ; 0051b995
    MOV EAX,dword ptr [EDI + 0x1124]    ; 0051b99b
    MOV dword ptr [EDI + 0x1120],EAX    ; 0051b9a1
    ADD ESP,0x14                        ; 0051b9a7
        ;   Label: LAB_0051b9a7
    POP EBP                             ; 0051b9aa
    POP EDI                             ; 0051b9ab
    POP ESI                             ; 0051b9ac
    POP EBX                             ; 0051b9ad
    RET                                 ; 0051b9ae
    MOV EBX,ESP                         ; 0051b9af
        ;   Label: LAB_0051b9af
    PUSH EBX                            ; 0051b9b1
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0 ; 0051b9b2
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 0051b9b7
    MOV EBX,ESP                         ; 0051b9ba
    PUSH EBX                            ; 0051b9bc
    CALL engine_alphabit.cpp_FUN_0040d1c0 ; 0051b9bd
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 0051b9c2
    PUSH 0x1e0                          ; 0051b9c5
    PUSH 0x280                          ; 0051b9ca
    PUSH 0x1d33b88                      ; 0051b9cf
    LEA EBX,[ESP + 0xc]                 ; 0051b9d4
    PUSH EBX                            ; 0051b9d8
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 0051b9d9
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 0051b9de
    XOR EBX,EBX                         ; 0051b9e1
    MOV ESI,ESP                         ; 0051b9e3
        ;   Label: LAB_0051b9e3
    CALL engine_special.cpp_FUN_00581f50 ; 0051b9e5
        ;   XREF to: 00581f50 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_00581f50()
    PUSH ESI                            ; 0051b9ea
    CALL engine_alphabit.cpp_FUN_0040d9a0 ; 0051b9eb
        ;   XREF to: 0040d9a0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_FUN_0040d9a0()
    ADD ESP,0x4                         ; 0051b9f0
    PUSH 0x0                            ; 0051b9f3
    CALL engine_special.cpp_unlockFrame_FUN_00581fa0 ; 0051b9f5
        ;   XREF to: 00581fa0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_unlockFrame_FUN_00581fa0(int clear_lock_flag)
    ADD ESP,0x4                         ; 0051b9fa
    INC EBX                             ; 0051b9fd
    CALL wincore_wddvmem.cpp_FUN_005acff0 ; 0051b9fe
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_005acff0()
    CMP EBX,0x3                         ; 0051ba03
    JL 0x0051b9e3                       ; 0051ba06
        ;   XREF to: 0051b9e3 (CONDITIONAL_JUMP)  ; LAB_0051b9e3
    MOV EBP,dword ptr [EDI + 0x112c]    ; 0051ba08
    PUSH EBP                            ; 0051ba0e
    PUSH EDI                            ; 0051ba0f
    CALL core_mission.cpp_FUN_0051b610  ; 0051ba10
        ;   XREF to: 0051b610 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_0051b610()
    ADD ESP,0x8                         ; 0051ba15
    MOV EAX,[0x00622c18]                ; 0051ba18 | g_CDemonSetPtr
    PUSH EAX                            ; 0051ba1d
    CALL core_set.cpp_FUN_00551b90      ; 0051ba1e
        ;   XREF to: 00551b90 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_00551b90(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0051ba23
    MOV EDX,dword ptr [0x00622c18]      ; 0051ba26 | g_CDemonSetPtr
    PUSH EDX                            ; 0051ba2c
    CALL core_set.cpp_CDemonSet_initScene_FUN_0054ec60 ; 0051ba2d
        ;   XREF to: 0054ec60 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_initScene_FUN_0054ec60(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0051ba32
    MOV EBX,dword ptr [0x00622ad0]      ; 0051ba35 | g_CScriptPtr
    PUSH 0x0                            ; 0051ba3b
    MOV dword ptr [EBX + 0x10],0x2      ; 0051ba3d | g_CScriptInstance.field16_0x10
    LEA EBX,[ESP + 0x4]                 ; 0051ba44
    PUSH EBX                            ; 0051ba48
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d0c0 ; 0051ba49
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d0c0(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0051ba4e
    JMP 0x0051b971                      ; 0051ba51
        ;   XREF to: 0051b971 (UNCONDITIONAL_JUMP)  ; LAB_0051b971

