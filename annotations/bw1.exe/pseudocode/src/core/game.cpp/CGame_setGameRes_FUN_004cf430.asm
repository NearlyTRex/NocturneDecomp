; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_setGameRes_FUN_004cf430(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_FUN_004cf5e0 at 004cf803
;
; Referenced Globals:
;   TerminatedCString s_core_game_cpp_005e174c
;   TerminatedCString s_CGame_setGameRes_Unable_005e175d
;   undefined4 DAT_0061b49c
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_0152d248
;   undefined4 DAT_01c3eb50
;   undefined4 DAT_01cd0c34
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d1f5d4
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_init_FUN_0044cc30
;   core_main.c_FUN_005030e0
;   engine_2d.c_resetGraphicsSystem_FUN_00402ac0
;   engine_special.cpp_FUN_00582b10
;   wincore_wddvmem.cpp_FUN_005ac300
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cf430
        ;   Label: core_game.cpp_CGame_setGameRes_FUN_004cf430
    PUSH ESI                            ; 004cf431
    PUSH EDI                            ; 004cf432
    PUSH EBP                            ; 004cf433
    MOV EBX,dword ptr [ESP + 0x14]      ; 004cf434
    MOV EDX,dword ptr [0x01d1f5d4]      ; 004cf438 | DAT_01d1f5d4
    TEST EDX,EDX                        ; 004cf43e
    JNZ 0x004cf4ff                      ; 004cf440
        ;   XREF to: 004cf4ff (CONDITIONAL_JUMP)  ; LAB_004cf4ff
    MOV EAX,[0x0061b49c]                ; 004cf446 | DAT_0061b49c
        ;   Label: LAB_004cf446
    CMP EAX,dword ptr [EBX + 0x4]       ; 004cf44b
    JZ 0x004cf50d                       ; 004cf44e
        ;   XREF to: 004cf50d (CONDITIONAL_JUMP)  ; LAB_004cf50d
    MOV EBP,dword ptr [EBX + 0x8]       ; 004cf454
        ;   Label: LAB_004cf454
    PUSH EBP                            ; 004cf457
    MOV EAX,dword ptr [EBX + 0x4]       ; 004cf458
    PUSH EAX                            ; 004cf45b
    MOV EDX,dword ptr [EBX]             ; 004cf45c
    PUSH EDX                            ; 004cf45e
    CALL wincore_wddvmem.cpp_FUN_005ac300 ; 004cf45f
        ;   XREF to: 005ac300 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_FUN_005ac300()
    ADD ESP,0xc                         ; 004cf464
    TEST EAX,EAX                        ; 004cf467
    JNZ 0x004cf4bc                      ; 004cf469
        ;   XREF to: 004cf4bc (CONDITIONAL_JUMP)  ; LAB_004cf4bc
    MOV ECX,dword ptr [EBX + 0x8]       ; 004cf46b
    MOV dword ptr [EBX + 0x4],0x1e0     ; 004cf46e
    PUSH ECX                            ; 004cf475
    MOV ESI,dword ptr [EBX + 0x4]       ; 004cf476
    MOV dword ptr [EBX],0x280           ; 004cf479
    PUSH ESI                            ; 004cf47f
    MOV EDI,dword ptr [EBX]             ; 004cf480
    PUSH EDI                            ; 004cf482
    CALL wincore_wddvmem.cpp_FUN_005ac300 ; 004cf483
        ;   XREF to: 005ac300 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_FUN_005ac300()
    ADD ESP,0xc                         ; 004cf488
    TEST EAX,EAX                        ; 004cf48b
    JNZ 0x004cf4bc                      ; 004cf48d
        ;   XREF to: 004cf4bc (CONDITIONAL_JUMP)  ; LAB_004cf4bc
    MOV EDX,dword ptr [EBX + 0x8]       ; 004cf48f
    PUSH EDX                            ; 004cf492
    MOV ECX,dword ptr [EBX + 0x4]       ; 004cf493
    PUSH ECX                            ; 004cf496
    MOV ESI,dword ptr [EBX]             ; 004cf497
    PUSH ESI                            ; 004cf499
    MOV EBP,0x5e174c                    ; 004cf49a | = "..\\core\\game.cpp"
    MOV EAX,0x529                       ; 004cf49f
    PUSH 0x5e175d                       ; 004cf4a4 | = "CGame::setGameRes - Unable to set the..."
    MOV dword ptr [0x01d1d400],EBP      ; 004cf4a9 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 004cf4af | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004cf4b4
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x10                        ; 004cf4b9
    CALL engine_2d.c_resetGraphicsSystem_FUN_00402ac0 ; 004cf4bc
        ;   XREF to: 00402ac0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_resetGraphicsSystem_FUN_00402ac0()
        ;   Label: LAB_004cf4bc
    MOV EDI,dword ptr [0x0061b49c]      ; 004cf4c1 | DAT_0061b49c
    PUSH EDI                            ; 004cf4c7
    PUSH 0x1fe37ec                      ; 004cf4c8
    CALL core_dcamera.cpp_CDemonCamera_init_FUN_0044cc30 ; 004cf4cd
        ;   XREF to: 0044cc30 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_init_FUN_0044cc30(CDemonCamera * this_ptr, int screen_height)
    MOV EBP,dword ptr [0x0061b49c]      ; 004cf4d2 | DAT_0061b49c
    ADD ESP,0x8                         ; 004cf4d8
    CMP EBP,0x180                       ; 004cf4db
    JL 0x004cf51e                       ; 004cf4e1
        ;   XREF to: 004cf51e (CONDITIONAL_JUMP)  ; LAB_004cf51e
    CMP dword ptr [0x0061b49c],0x1e0    ; 004cf4e3 | DAT_0061b49c
        ;   Label: LAB_004cf4e3
    SETNZ AL                            ; 004cf4ed
    AND EAX,0xff                        ; 004cf4f0
    MOV [0x01cd0c34],EAX                ; 004cf4f5 | DAT_01cd0c34
    POP EBP                             ; 004cf4fa
    POP EDI                             ; 004cf4fb
    POP ESI                             ; 004cf4fc
    POP EBX                             ; 004cf4fd
    RET                                 ; 004cf4fe
    PUSH EDX                            ; 004cf4ff
        ;   Label: LAB_004cf4ff
    CALL engine_special.cpp_FUN_00582b10 ; 004cf500
        ;   XREF to: 00582b10 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_FUN_00582b10(int card_index)
    ADD ESP,0x4                         ; 004cf505
    JMP 0x004cf446                      ; 004cf508
        ;   XREF to: 004cf446 (UNCONDITIONAL_JUMP)  ; LAB_004cf446
    MOV EDI,dword ptr [0x0061b4a0]      ; 004cf50d | DAT_0061b4a0
        ;   Label: LAB_004cf50d
    CMP EDI,dword ptr [EBX + 0x8]       ; 004cf513
    JNZ 0x004cf454                      ; 004cf516
        ;   XREF to: 004cf454 (CONDITIONAL_JUMP)  ; LAB_004cf454
    JMP 0x004cf4bc                      ; 004cf51c
        ;   XREF to: 004cf4bc (UNCONDITIONAL_JUMP)  ; LAB_004cf4bc
    MOV EAX,[0x0152d248]                ; 004cf51e | DAT_0152d248
        ;   Label: LAB_004cf51e
    MOV [0x01c3eb50],EAX                ; 004cf523 | DAT_01c3eb50
    JMP 0x004cf4e3                      ; 004cf528
        ;   XREF to: 004cf4e3 (UNCONDITIONAL_JUMP)  ; LAB_004cf4e3

