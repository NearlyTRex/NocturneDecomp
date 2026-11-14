; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_setGameRes_FUN_004b7de0(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_runGameSession_FUN_004b7f90 at 004b81b3
;
; Referenced Globals:
;   TerminatedCString s_core_game_cpp_005c25a8
;   TerminatedCString s_CGame_setGameRes_Unable_005c25b9
;   undefined4 DAT_005fba1c
;   undefined4 DAT_005fba20
;   undefined4 DAT_01549ab4
;   undefined4 DAT_01c5b0e0
;   undefined4 DAT_01d22c3c
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01d74020
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_init_FUN_00448d70
;   core_main.c_FUN_004e4330
;   engine_2d.c_resetGraphicsSystem_FUN_00402ac0
;   engine_special.cpp_selectCard_FUN_005663e0
;   wincore_wddvmem.cpp_FUN_00579bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b7de0
        ;   Label: core_game.cpp_CGame_setGameRes_FUN_004b7de0
    PUSH ESI                            ; 004b7de1
    PUSH EDI                            ; 004b7de2
    PUSH EBP                            ; 004b7de3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004b7de4
    MOV EDX,dword ptr [0x01d74020]      ; 004b7de8 | DAT_01d74020
    TEST EDX,EDX                        ; 004b7dee
    JNZ 0x004b7eaf                      ; 004b7df0
        ;   XREF to: 004b7eaf (CONDITIONAL_JUMP)  ; LAB_004b7eaf
    MOV EAX,[0x005fba1c]                ; 004b7df6 | DAT_005fba1c
        ;   Label: LAB_004b7df6
    CMP EAX,dword ptr [EBX + 0x4]       ; 004b7dfb
    JZ 0x004b7ebd                       ; 004b7dfe
        ;   XREF to: 004b7ebd (CONDITIONAL_JUMP)  ; LAB_004b7ebd
    MOV EBP,dword ptr [EBX + 0x8]       ; 004b7e04
        ;   Label: LAB_004b7e04
    PUSH EBP                            ; 004b7e07
    MOV EAX,dword ptr [EBX + 0x4]       ; 004b7e08
    PUSH EAX                            ; 004b7e0b
    MOV EDX,dword ptr [EBX]             ; 004b7e0c
    PUSH EDX                            ; 004b7e0e
    CALL wincore_wddvmem.cpp_FUN_00579bb0 ; 004b7e0f
        ;   XREF to: 00579bb0 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_FUN_00579bb0()
    ADD ESP,0xc                         ; 004b7e14
    TEST EAX,EAX                        ; 004b7e17
    JNZ 0x004b7e6c                      ; 004b7e19
        ;   XREF to: 004b7e6c (CONDITIONAL_JUMP)  ; LAB_004b7e6c
    MOV ECX,dword ptr [EBX + 0x8]       ; 004b7e1b
    MOV dword ptr [EBX + 0x4],0x1e0     ; 004b7e1e
    PUSH ECX                            ; 004b7e25
    MOV ESI,dword ptr [EBX + 0x4]       ; 004b7e26
    MOV dword ptr [EBX],0x280           ; 004b7e29
    PUSH ESI                            ; 004b7e2f
    MOV EDI,dword ptr [EBX]             ; 004b7e30
    PUSH EDI                            ; 004b7e32
    CALL wincore_wddvmem.cpp_FUN_00579bb0 ; 004b7e33
        ;   XREF to: 00579bb0 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_FUN_00579bb0()
    ADD ESP,0xc                         ; 004b7e38
    TEST EAX,EAX                        ; 004b7e3b
    JNZ 0x004b7e6c                      ; 004b7e3d
        ;   XREF to: 004b7e6c (CONDITIONAL_JUMP)  ; LAB_004b7e6c
    MOV EDX,dword ptr [EBX + 0x8]       ; 004b7e3f
    PUSH EDX                            ; 004b7e42
    MOV ECX,dword ptr [EBX + 0x4]       ; 004b7e43
    PUSH ECX                            ; 004b7e46
    MOV ESI,dword ptr [EBX]             ; 004b7e47
    PUSH ESI                            ; 004b7e49
    MOV EBP,0x5c25a8                    ; 004b7e4a | = "..\\core\\game.cpp"
    MOV EAX,0x526                       ; 004b7e4f
    PUSH 0x5c25b9                       ; 004b7e54 | = "CGame::setGameRes - Unable to set the..."
    MOV dword ptr [0x01d71de0],EBP      ; 004b7e59 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004b7e5f | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004b7e64
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x10                        ; 004b7e69
    CALL engine_2d.c_resetGraphicsSystem_FUN_00402ac0 ; 004b7e6c
        ;   XREF to: 00402ac0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_resetGraphicsSystem_FUN_00402ac0()
        ;   Label: LAB_004b7e6c
    MOV EDI,dword ptr [0x005fba1c]      ; 004b7e71 | DAT_005fba1c
    PUSH EDI                            ; 004b7e77
    PUSH 0x2038f4c                      ; 004b7e78
    CALL core_dcamera.cpp_CDemonCamera_init_FUN_00448d70 ; 004b7e7d
        ;   XREF to: 00448d70 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_init_FUN_00448d70(CDemonCamera * this_ptr, int screen_height)
    MOV EBP,dword ptr [0x005fba1c]      ; 004b7e82 | DAT_005fba1c
    ADD ESP,0x8                         ; 004b7e88
    CMP EBP,0x180                       ; 004b7e8b
    JL 0x004b7ece                       ; 004b7e91
        ;   XREF to: 004b7ece (CONDITIONAL_JUMP)  ; LAB_004b7ece
    CMP dword ptr [0x005fba1c],0x1e0    ; 004b7e93 | DAT_005fba1c
        ;   Label: LAB_004b7e93
    SETNZ AL                            ; 004b7e9d
    AND EAX,0xff                        ; 004b7ea0
    MOV [0x01d22c3c],EAX                ; 004b7ea5 | DAT_01d22c3c
    POP EBP                             ; 004b7eaa
    POP EDI                             ; 004b7eab
    POP ESI                             ; 004b7eac
    POP EBX                             ; 004b7ead
    RET                                 ; 004b7eae
    PUSH EDX                            ; 004b7eaf
        ;   Label: LAB_004b7eaf
    CALL engine_special.cpp_selectCard_FUN_005663e0 ; 004b7eb0
        ;   XREF to: 005663e0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_selectCard_FUN_005663e0(int card_index)
    ADD ESP,0x4                         ; 004b7eb5
    JMP 0x004b7df6                      ; 004b7eb8
        ;   XREF to: 004b7df6 (UNCONDITIONAL_JUMP)  ; LAB_004b7df6
    MOV EDI,dword ptr [0x005fba20]      ; 004b7ebd | DAT_005fba20
        ;   Label: LAB_004b7ebd
    CMP EDI,dword ptr [EBX + 0x8]       ; 004b7ec3
    JNZ 0x004b7e04                      ; 004b7ec6
        ;   XREF to: 004b7e04 (CONDITIONAL_JUMP)  ; LAB_004b7e04
    JMP 0x004b7e6c                      ; 004b7ecc
        ;   XREF to: 004b7e6c (UNCONDITIONAL_JUMP)  ; LAB_004b7e6c
    MOV EAX,[0x01549ab4]                ; 004b7ece | DAT_01549ab4
        ;   Label: LAB_004b7ece
    MOV [0x01c5b0e0],EAX                ; 004b7ed3 | DAT_01c5b0e0
    JMP 0x004b7e93                      ; 004b7ed8
        ;   XREF to: 004b7e93 (UNCONDITIONAL_JUMP)  ; LAB_004b7e93

