; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_dosio_cpp_addGetFileInfoHook_FUN_00481710(FileSearchHandlerFunc *handler)
;
; Parameters:
; FileSearchHandlerFunc * Stack[0x4]:4   handler
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_00507a60 at 00507b65
;
; Referenced Globals:
;   TerminatedCString s_engine_dosio_c_00621577
;   TerminatedCString s_addGetFileInfoHook_too_m_00621589
;   int g_NumSearchHandlers
;   FileSearchHandlerFunc*[5] g_SearchHandlers
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00481710
        ;   Label: engine_dosio.cpp_addGetFileInfoHook_FUN_00481710
    CMP dword ptr [0x02c14d18],0x5      ; 00481711 | g_NumSearchHandlers
    JGE 0x00481735                      ; 00481718
        ;   XREF to: 00481735 (CONDITIONAL_JUMP)  ; LAB_00481735
    MOV EAX,[0x02c14d18]                ; 0048171a | g_NumSearchHandlers
        ;   Label: LAB_0048171a
    MOV EDX,dword ptr [ESP + 0x8]       ; 0048171f
    LEA ESI,[EAX + 0x1]                 ; 00481723
    MOV dword ptr [EAX*0x4 + 0x2c14d1c],EDX ; 00481726 | g_SearchHandlers
    MOV dword ptr [0x02c14d18],ESI      ; 0048172d | g_NumSearchHandlers
    POP ESI                             ; 00481733
    RET                                 ; 00481734
    PUSH EBX                            ; 00481735
        ;   Label: LAB_00481735
    MOV ECX,0x621577                    ; 00481736 | = "..\\engine\\dosio.c"
    MOV EBX,0x53                        ; 0048173b
    PUSH 0x621589                       ; 00481740 | = "addGetFileInfoHook - too many!"
    MOV dword ptr [0x02f0ca48],ECX      ; 00481745 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0048174b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00481751
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00481756
    POP EBX                             ; 00481759
    JMP 0x0048171a                      ; 0048175a
        ;   XREF to: 0048171a (UNCONDITIONAL_JUMP)  ; LAB_0048171a

