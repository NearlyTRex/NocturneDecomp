; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_setGameRes_FUN_0049d870(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049dced
;
; Referenced Globals:
;   TerminatedCString s_core_game_cpp_0058276a
;   TerminatedCString s_CGame_setGameRes_Unable_0058277b
;   int g_WindowHeight = 0xc8
;   int g_BitsPerPixel = 0x8
;   CBitFont* g_CBitFont_PTR_014b9904
;   undefined4 DAT_01bcd070
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   undefined4 DAT_01cc64a4
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_init_FUN_00440010
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   engine_2d.c_resetGraphicsSystem_FUN_00403760
;   engine_special.cpp_selectCard_FUN_00532d00
;   wincore_wddvmem.cpp_setScreenResolution_FUN_00552e00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049d870
        ;   Label: core_game.cpp_CGame_setGameRes_FUN_0049d870
    PUSH ESI                            ; 0049d871
    PUSH EDI                            ; 0049d872
    PUSH EBP                            ; 0049d873
    MOV EBX,dword ptr [ESP + 0x14]      ; 0049d874
    MOV EDX,dword ptr [0x01cc64a4]      ; 0049d878 | DAT_01cc64a4
    TEST EDX,EDX                        ; 0049d87e
    JNZ 0x0049d928                      ; 0049d880
        ;   XREF to: 0049d928 (CONDITIONAL_JUMP)  ; LAB_0049d928
    MOV EAX,[0x005b7620]                ; 0049d886 | g_WindowHeight
        ;   Label: LAB_0049d886
    CMP EAX,dword ptr [EBX + 0x4]       ; 0049d88b
    JZ 0x0049d936                       ; 0049d88e
        ;   XREF to: 0049d936 (CONDITIONAL_JUMP)  ; LAB_0049d936
    MOV EBP,dword ptr [EBX + 0x8]       ; 0049d894
        ;   Label: LAB_0049d894
    PUSH EBP                            ; 0049d897
    MOV EAX,dword ptr [EBX + 0x4]       ; 0049d898
    PUSH EAX                            ; 0049d89b
    MOV EDX,dword ptr [EBX]             ; 0049d89c
    PUSH EDX                            ; 0049d89e
    CALL wincore_wddvmem.cpp_setScreenResolution_FUN_00552e00 ; 0049d89f
        ;   XREF to: 00552e00 (UNCONDITIONAL_CALL)  ; int wincore_wddvmem.cpp_setScreenResolution_FUN_00552e00(int width, int height, int bits_per_pixel)
    ADD ESP,0xc                         ; 0049d8a4
    TEST EAX,EAX                        ; 0049d8a7
    JNZ 0x0049d8fc                      ; 0049d8a9
        ;   XREF to: 0049d8fc (CONDITIONAL_JUMP)  ; LAB_0049d8fc
    MOV ECX,dword ptr [EBX + 0x8]       ; 0049d8ab
    MOV dword ptr [EBX + 0x4],0x1e0     ; 0049d8ae
    PUSH ECX                            ; 0049d8b5
    MOV ESI,dword ptr [EBX + 0x4]       ; 0049d8b6
    MOV dword ptr [EBX],0x280           ; 0049d8b9
    PUSH ESI                            ; 0049d8bf
    MOV EDI,dword ptr [EBX]             ; 0049d8c0
    PUSH EDI                            ; 0049d8c2
    CALL wincore_wddvmem.cpp_setScreenResolution_FUN_00552e00 ; 0049d8c3
        ;   XREF to: 00552e00 (UNCONDITIONAL_CALL)  ; int wincore_wddvmem.cpp_setScreenResolution_FUN_00552e00(int width, int height, int bits_per_pixel)
    ADD ESP,0xc                         ; 0049d8c8
    TEST EAX,EAX                        ; 0049d8cb
    JNZ 0x0049d8fc                      ; 0049d8cd
        ;   XREF to: 0049d8fc (CONDITIONAL_JUMP)  ; LAB_0049d8fc
    MOV EDX,dword ptr [EBX + 0x8]       ; 0049d8cf
    PUSH EDX                            ; 0049d8d2
    MOV ECX,dword ptr [EBX + 0x4]       ; 0049d8d3
    PUSH ECX                            ; 0049d8d6
    MOV ESI,dword ptr [EBX]             ; 0049d8d7
    PUSH ESI                            ; 0049d8d9
    MOV EBP,0x58276a                    ; 0049d8da | = "..\\core\\game.cpp"
    MOV EAX,0x497                       ; 0049d8df
    PUSH 0x58277b                       ; 0049d8e4 | = "CGame::setGameRes - Unable to set the..."
    MOV dword ptr [0x01cc4800],EBP      ; 0049d8e9 | g_CurrentFilename
    MOV [0x01cc4804],EAX                ; 0049d8ef | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0049d8f4
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x10                        ; 0049d8f9
    CALL engine_2d.c_resetGraphicsSystem_FUN_00403760 ; 0049d8fc
        ;   XREF to: 00403760 (UNCONDITIONAL_CALL)  ; void engine_2d.c_resetGraphicsSystem_FUN_00403760()
        ;   Label: LAB_0049d8fc
    MOV EDI,dword ptr [0x005b7620]      ; 0049d901 | g_WindowHeight
    PUSH EDI                            ; 0049d907
    PUSH 0x1fb8508                      ; 0049d908
    CALL core_dcamera.cpp_CDemonCamera_init_FUN_00440010 ; 0049d90d
        ;   XREF to: 00440010 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_init_FUN_00440010(CDemonCamera * this_ptr, int screen_height)
    MOV EBP,dword ptr [0x005b7620]      ; 0049d912 | g_WindowHeight
    ADD ESP,0x8                         ; 0049d918
    CMP EBP,0x180                       ; 0049d91b
    JL 0x0049d947                       ; 0049d921
        ;   XREF to: 0049d947 (CONDITIONAL_JUMP)  ; LAB_0049d947
    POP EBP                             ; 0049d923
    POP EDI                             ; 0049d924
    POP ESI                             ; 0049d925
    POP EBX                             ; 0049d926
    RET                                 ; 0049d927
    PUSH EDX                            ; 0049d928
        ;   Label: LAB_0049d928
    CALL engine_special.cpp_selectCard_FUN_00532d00 ; 0049d929
        ;   XREF to: 00532d00 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_selectCard_FUN_00532d00(int card_index)
    ADD ESP,0x4                         ; 0049d92e
    JMP 0x0049d886                      ; 0049d931
        ;   XREF to: 0049d886 (UNCONDITIONAL_JUMP)  ; LAB_0049d886
    MOV EDI,dword ptr [0x005b7624]      ; 0049d936 | g_BitsPerPixel
        ;   Label: LAB_0049d936
    CMP EDI,dword ptr [EBX + 0x8]       ; 0049d93c
    JNZ 0x0049d894                      ; 0049d93f
        ;   XREF to: 0049d894 (CONDITIONAL_JUMP)  ; LAB_0049d894
    JMP 0x0049d8fc                      ; 0049d945
        ;   XREF to: 0049d8fc (UNCONDITIONAL_JUMP)  ; LAB_0049d8fc
    MOV EAX,[0x014b9904]                ; 0049d947 | g_CBitFont_PTR_014b9904
        ;   Label: LAB_0049d947
    MOV [0x01bcd070],EAX                ; 0049d94c | DAT_01bcd070
    POP EBP                             ; 0049d951
    POP EDI                             ; 0049d952
    POP ESI                             ; 0049d953
    POP EBX                             ; 0049d954
    RET                                 ; 0049d955

