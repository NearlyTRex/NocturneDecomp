; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CPathMap * __cdecl core_path_cpp_CPathMap_ctor_FUN_00546450(CPathMap *this_ptr)
;
; Parameters:
; CPathMap *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_hero.cpp_CHero_ctor_FUN_004f2340 at 004f2354
;   core_npc.cpp_CNPC_ctor_FUN_005447e0 at 005447f4
;
; Referenced Globals:
;   TerminatedCString s_core_path_cpp_0063e8a2
;   TerminatedCString s_Too_many_pathmaps_0063e8b3
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_PathMapCount
;   CPathMap*[200] g_PathMapList
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_path.cpp_CPathMap_reset_FUN_00548510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00546450
        ;   Label: core_path.cpp_CPathMap_ctor_FUN_00546450
    PUSH EDI                            ; 00546451
    MOV EBX,dword ptr [ESP + 0xc]       ; 00546452
    MOV dword ptr [EBX + 0x138b8],0x7fffffff ; 00546456
    MOV EAX,dword ptr [EBX + 0x138b8]   ; 00546460
    MOV dword ptr [EBX + 0x138b4],EAX   ; 00546466
    PUSH EBX                            ; 0054646c
    MOV dword ptr [EBX + 0x138b0],EAX   ; 0054646d
    CALL core_path.cpp_CPathMap_reset_FUN_00548510 ; 00546473
        ;   XREF to: 00548510 (UNCONDITIONAL_CALL)  ; void core_path.cpp_CPathMap_reset_FUN_00548510(CPathMap * this_ptr)
    MOV EDX,dword ptr [0x030c3ab8]      ; 00546478 | g_PathMapCount
    ADD ESP,0x4                         ; 0054647e
    CMP EDX,0xc8                        ; 00546481
    JGE 0x005464a3                      ; 00546487
        ;   XREF to: 005464a3 (CONDITIONAL_JUMP)  ; LAB_005464a3
    MOV EAX,[0x030c3ab8]                ; 00546489 | g_PathMapCount
        ;   Label: LAB_00546489
    LEA EDI,[EAX + 0x1]                 ; 0054648e
    MOV dword ptr [EAX*0x4 + 0x30c3abc],EBX ; 00546491 | g_PathMapList
    MOV dword ptr [0x030c3ab8],EDI      ; 00546498 | g_PathMapCount
    MOV EAX,EBX                         ; 0054649e
    POP EDI                             ; 005464a0
    POP EBX                             ; 005464a1
    RET                                 ; 005464a2
    PUSH ESI                            ; 005464a3
        ;   Label: LAB_005464a3
    MOV ECX,0x63e8a2                    ; 005464a4 | = "..\\core\\path.cpp"
    MOV ESI,0x123                       ; 005464a9
    PUSH 0x63e8b3                       ; 005464ae | = "Too many pathmaps!"
    MOV dword ptr [0x02f0ca48],ECX      ; 005464b3 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 005464b9 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005464bf
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005464c4
    POP ESI                             ; 005464c7
    JMP 0x00546489                      ; 005464c8
        ;   XREF to: 00546489 (UNCONDITIONAL_JUMP)  ; LAB_00546489

