; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_giveHeroWeapon_FUN_004a02e0(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_004a0430 at 004a049c
;   core_game.cpp_CGame_processCheatCodes_FUN_004a0550 at 004a13f8
;
; Referenced Globals:
;   TerminatedCString s_core_game_cpp_00582b52
;   TerminatedCString s_giveHeroWeapon_This_is_n_00582b63
;   undefined4 DAT_005baf90
;   undefined4 DAT_01cae0e8
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_02ddf9a8
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_createActorByName_FUN_0040d540
;   core_inv.cpp_CInventory_addItem_FUN_004bf360
;   core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a02e0
        ;   Label: core_game.cpp_giveHeroWeapon_FUN_004a02e0
    PUSH ESI                            ; 004a02e1
    PUSH EDI                            ; 004a02e2
    PUSH EBP                            ; 004a02e3
    MOV EDX,dword ptr [ESP + 0x14]      ; 004a02e4
    PUSH EDX                            ; 004a02e8
    CALL core_actor.cpp_createActorByName_FUN_0040d540 ; 004a02e9
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_createActorByName_FUN_0040d540()
    ADD ESP,0x4                         ; 004a02ee
    PUSH EAX                            ; 004a02f1
    MOV ECX,dword ptr [0x005baf90]      ; 004a02f2 | DAT_005baf90
    PUSH ECX                            ; 004a02f8
    MOV EBX,EAX                         ; 004a02f9
    MOV ESI,EAX                         ; 004a02fb
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720 ; 004a02fd
        ;   XREF to: 004d9720 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720()
    ADD ESP,0x8                         ; 004a0302
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004a0305
    PUSH EBX                            ; 004a030b
    CALL dword ptr [EAX]                ; 004a030c
    ADD ESP,0x4                         ; 004a030e
    MOV EDI,dword ptr [0x02ddf9a8]      ; 004a0311 | DAT_02ddf9a8
    PUSH EDI                            ; 004a0317
    PUSH EBX                            ; 004a0318
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004a0319
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 004a031e
    MOV EBX,EAX                         ; 004a0321
    TEST EAX,EAX                        ; 004a0323
    JZ 0x004a0371                       ; 004a0325
        ;   XREF to: 004a0371 (CONDITIONAL_JUMP)  ; LAB_004a0371
    MOV dword ptr [EBX + 0x560],0x1f4   ; 004a0327
        ;   Label: LAB_004a0327
    MOV EBX,dword ptr [0x01cae0e8]      ; 004a0331 | DAT_01cae0e8
    MOV EDX,dword ptr [EBX*0x4 + 0x1cae0d8] ; 004a0337
    PUSH EDX                            ; 004a033e
    MOV EAX,dword ptr [ESI + 0x14c]     ; 004a033f
    PUSH ESI                            ; 004a0345
    CALL dword ptr [EAX + 0x80]         ; 004a0346
    ADD ESP,0x8                         ; 004a034c
    MOV EAX,[0x01cae0e8]                ; 004a034f | DAT_01cae0e8
    PUSH 0x1                            ; 004a0354
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004a0356
    PUSH ESI                            ; 004a035d
    ADD EAX,0x1f5a0                     ; 004a035e
    PUSH EAX                            ; 004a0363
    CALL core_inv.cpp_CInventory_addItem_FUN_004bf360 ; 004a0364
        ;   XREF to: 004bf360 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_addItem_FUN_004bf360()
    ADD ESP,0xc                         ; 004a0369
    POP EBP                             ; 004a036c
    POP EDI                             ; 004a036d
    POP ESI                             ; 004a036e
    POP EBX                             ; 004a036f
    RET                                 ; 004a0370
    MOV EBP,0x582b52                    ; 004a0371 | = "..\\core\\game.cpp"
        ;   Label: LAB_004a0371
    MOV EAX,0xa0b                       ; 004a0376
    PUSH 0x582b63                       ; 004a037b | = "giveHeroWeapon - This is not a weapon"
    MOV dword ptr [0x01cc4800],EBP      ; 004a0380 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004a0386 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004a038b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004a0390
    JMP 0x004a0327                      ; 004a0393
        ;   XREF to: 004a0327 (UNCONDITIONAL_JUMP)  ; LAB_004a0327

