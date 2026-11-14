; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_setGameRes_FUN_004b5fd0(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_runGameSession_FUN_004b6170 at 004b63a7
;
; Referenced Globals:
;   TerminatedCString s_core_game_cpp_005d7673
;   TerminatedCString s_CGame_setGameRes_Unable_005d7684
;   undefined4 DAT_006141bc
;   undefined4 DAT_006141c0
;   undefined4 DAT_01511cc4
;   undefined4 DAT_01c25590
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01d06a74
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_init_FUN_0043b570
;   core_main.c_FUN_004e4500
;   engine_2d.c_resetGraphicsSystem_FUN_00402ac0
;   engine_special.cpp_selectCard_FUN_005600c0
;   wincore_wddvmem.cpp_FUN_00588a50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b5fd0
        ;   Label: core_game.cpp_CGame_setGameRes_FUN_004b5fd0
    PUSH ESI                            ; 004b5fd1
    PUSH EDI                            ; 004b5fd2
    PUSH EBP                            ; 004b5fd3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004b5fd4
    MOV EDX,dword ptr [0x01d06a74]      ; 004b5fd8 | DAT_01d06a74
    TEST EDX,EDX                        ; 004b5fde
    JNZ 0x004b6088                      ; 004b5fe0
        ;   XREF to: 004b6088 (CONDITIONAL_JUMP)  ; LAB_004b6088
    MOV EAX,[0x006141bc]                ; 004b5fe6 | DAT_006141bc
        ;   Label: LAB_004b5fe6
    CMP EAX,dword ptr [EBX + 0x4]       ; 004b5feb
    JZ 0x004b6096                       ; 004b5fee
        ;   XREF to: 004b6096 (CONDITIONAL_JUMP)  ; LAB_004b6096
    MOV EBP,dword ptr [EBX + 0x8]       ; 004b5ff4
        ;   Label: LAB_004b5ff4
    PUSH EBP                            ; 004b5ff7
    MOV EAX,dword ptr [EBX + 0x4]       ; 004b5ff8
    PUSH EAX                            ; 004b5ffb
    MOV EDX,dword ptr [EBX]             ; 004b5ffc
    PUSH EDX                            ; 004b5ffe
    CALL wincore_wddvmem.cpp_FUN_00588a50 ; 004b5fff
        ;   XREF to: 00588a50 (UNCONDITIONAL_CALL)  ; int wincore_wddvmem.cpp_FUN_00588a50(int width, int height, int bits_per_pixel)
    ADD ESP,0xc                         ; 004b6004
    TEST EAX,EAX                        ; 004b6007
    JNZ 0x004b605c                      ; 004b6009
        ;   XREF to: 004b605c (CONDITIONAL_JUMP)  ; LAB_004b605c
    MOV ECX,dword ptr [EBX + 0x8]       ; 004b600b
    MOV dword ptr [EBX + 0x4],0x1e0     ; 004b600e
    PUSH ECX                            ; 004b6015
    MOV ESI,dword ptr [EBX + 0x4]       ; 004b6016
    MOV dword ptr [EBX],0x280           ; 004b6019
    PUSH ESI                            ; 004b601f
    MOV EDI,dword ptr [EBX]             ; 004b6020
    PUSH EDI                            ; 004b6022
    CALL wincore_wddvmem.cpp_FUN_00588a50 ; 004b6023
        ;   XREF to: 00588a50 (UNCONDITIONAL_CALL)  ; int wincore_wddvmem.cpp_FUN_00588a50(int width, int height, int bits_per_pixel)
    ADD ESP,0xc                         ; 004b6028
    TEST EAX,EAX                        ; 004b602b
    JNZ 0x004b605c                      ; 004b602d
        ;   XREF to: 004b605c (CONDITIONAL_JUMP)  ; LAB_004b605c
    MOV EDX,dword ptr [EBX + 0x8]       ; 004b602f
    PUSH EDX                            ; 004b6032
    MOV ECX,dword ptr [EBX + 0x4]       ; 004b6033
    PUSH ECX                            ; 004b6036
    MOV ESI,dword ptr [EBX]             ; 004b6037
    PUSH ESI                            ; 004b6039
    MOV EBP,0x5d7673                    ; 004b603a | = "..\\core\\game.cpp"
    MOV EAX,0x504                       ; 004b603f
    PUSH 0x5d7684                       ; 004b6044 | = "CGame::setGameRes - Unable to set the..."
    MOV dword ptr [0x01d046a0],EBP      ; 004b6049 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004b604f | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004b6054
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x10                        ; 004b6059
    CALL engine_2d.c_resetGraphicsSystem_FUN_00402ac0 ; 004b605c
        ;   XREF to: 00402ac0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_resetGraphicsSystem_FUN_00402ac0()
        ;   Label: LAB_004b605c
    MOV EDI,dword ptr [0x006141bc]      ; 004b6061 | DAT_006141bc
    PUSH EDI                            ; 004b6067
    PUSH 0x1fc7838                      ; 004b6068
    CALL core_dcamera.cpp_CDemonCamera_init_FUN_0043b570 ; 004b606d
        ;   XREF to: 0043b570 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_init_FUN_0043b570(CDemonCamera * this_ptr, int screen_height)
    MOV EBP,dword ptr [0x006141bc]      ; 004b6072 | DAT_006141bc
    ADD ESP,0x8                         ; 004b6078
    CMP EBP,0x180                       ; 004b607b
    JL 0x004b60a7                       ; 004b6081
        ;   XREF to: 004b60a7 (CONDITIONAL_JUMP)  ; LAB_004b60a7
    POP EBP                             ; 004b6083
    POP EDI                             ; 004b6084
    POP ESI                             ; 004b6085
    POP EBX                             ; 004b6086
    RET                                 ; 004b6087
    PUSH EDX                            ; 004b6088
        ;   Label: LAB_004b6088
    CALL engine_special.cpp_selectCard_FUN_005600c0 ; 004b6089
        ;   XREF to: 005600c0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_selectCard_FUN_005600c0(int card_index)
    ADD ESP,0x4                         ; 004b608e
    JMP 0x004b5fe6                      ; 004b6091
        ;   XREF to: 004b5fe6 (UNCONDITIONAL_JUMP)  ; LAB_004b5fe6
    MOV EDI,dword ptr [0x006141c0]      ; 004b6096 | DAT_006141c0
        ;   Label: LAB_004b6096
    CMP EDI,dword ptr [EBX + 0x8]       ; 004b609c
    JNZ 0x004b5ff4                      ; 004b609f
        ;   XREF to: 004b5ff4 (CONDITIONAL_JUMP)  ; LAB_004b5ff4
    JMP 0x004b605c                      ; 004b60a5
        ;   XREF to: 004b605c (UNCONDITIONAL_JUMP)  ; LAB_004b605c
    MOV EAX,[0x01511cc4]                ; 004b60a7 | DAT_01511cc4
        ;   Label: LAB_004b60a7
    MOV [0x01c25590],EAX                ; 004b60ac | DAT_01c25590
    POP EBP                             ; 004b60b1
    POP EDI                             ; 004b60b2
    POP ESI                             ; 004b60b3
    POP EBX                             ; 004b60b4
    RET                                 ; 004b60b5

