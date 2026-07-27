; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_tbplayer_cpp_FUN_00543150(undefined4 param_1)
;
;
; XREF[1]:
;   core_tbplayer.cpp_FUN_00543120 at 00543133
;
; Referenced Globals:
;   TerminatedCString s_bassplayer_dfm_00596491
;   undefined1* PTR_core_tbplayer.cpp_CBassPlayer_setup_FUN_00543180_005a2c04 = 00543180
;
; Called Functions:
;   core_npc.cpp_FUN_004ee950
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00543150
        ;   Label: core_tbplayer.cpp_FUN_00543150
    MOV EDX,dword ptr [ESP + 0x8]       ; 00543151
    PUSH EDX                            ; 00543155
    CALL core_npc.cpp_FUN_004ee950      ; 00543156
        ;   XREF to: 004ee950 (UNCONDITIONAL_CALL)  ; undefined core_npc.cpp_FUN_004ee950()
    ADD ESP,0x4                         ; 0054315b
    PUSH 0x596491                       ; 0054315e | = "bassplayer.dfm"
    MOV EBX,EAX                         ; 00543163
    ADD EAX,0x150                       ; 00543165
    PUSH EAX                            ; 0054316a
    MOV dword ptr [EAX + -0x4],0x5a2c04 ; 0054316b | PTR_core_tbplayer.cpp_CBassPlayer_setup_FUN_00543180_005a2c04
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 00543172
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0()
    ADD ESP,0x8                         ; 00543177
    MOV EAX,EBX                         ; 0054317a
    POP EBX                             ; 0054317c
    RET                                 ; 0054317d

