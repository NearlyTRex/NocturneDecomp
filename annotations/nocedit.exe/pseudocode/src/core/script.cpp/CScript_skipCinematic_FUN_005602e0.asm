; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_script_cpp_CScript_skipCinematic_FUN_005602e0(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; Local Variables:
; float            Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db94b
;
; Referenced Globals:
;   TerminatedCString s_Error_processing_script__006431fd
;   TerminatedCString s_core_script_cpp_0064324c
;   TerminatedCString s_Infinite_loop_detected_t_0064325f
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CGame* g_CGamePtr = 02d81a9c
;   CEditorTools g_CEditorToolsInstance
;   undefined4 DAT_02d81cc4
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   char[2048] g_ScriptErrorBuffer
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_script.cpp_CScript_resetDialogState_FUN_005602b0
;   core_script.cpp_CScript_step_FUN_0055a810
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005602e0
        ;   Label: core_script.cpp_CScript_skipCinematic_FUN_005602e0
    PUSH EBP                            ; 005602e1
    SUB ESP,0x4                         ; 005602e2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005602e5
    CMP dword ptr [EBX + 0x458],0x0     ; 005602e9
    JGE 0x005602fa                      ; 005602f0
        ;   XREF to: 005602fa (CONDITIONAL_JUMP)  ; LAB_005602fa
    XOR EAX,EAX                         ; 005602f2
    ADD ESP,0x4                         ; 005602f4
    POP EBP                             ; 005602f7
    POP EBX                             ; 005602f8
    RET                                 ; 005602f9
    PUSH EDI                            ; 005602fa
        ;   Label: LAB_005602fa
    PUSH ESI                            ; 005602fb
    PUSH EBX                            ; 005602fc
    CALL core_script.cpp_CScript_resetDialogState_FUN_005602b0 ; 005602fd
        ;   XREF to: 005602b0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_resetDialogState_FUN_005602b0(CScript * this_ptr)
    XOR ESI,ESI                         ; 00560302
    MOV EAX,dword ptr [EBX + 0x458]     ; 00560304
    ADD ESP,0x4                         ; 0056030a
    MOV dword ptr [EBX + 0x48],EAX      ; 0056030d
    MOV EAX,[0x0067b654]                ; 00560310 | g_CGamePtr
        ;   Label: LAB_00560310
    CMP dword ptr [EAX + 0x228],0x0     ; 00560315 | DAT_02d81cc4
    JZ 0x005603a7                       ; 0056031c
        ;   XREF to: 005603a7 (CONDITIONAL_JUMP)  ; LAB_005603a7
    CMP dword ptr [EBX],0x0             ; 00560322
    JNZ 0x005603a7                      ; 00560325
        ;   XREF to: 005603a7 (CONDITIONAL_JUMP)  ; LAB_005603a7
    LEA EAX,[ESP + 0x8]                 ; 0056032b
    MOV EBP,0x3e800000                  ; 0056032f
    PUSH EAX                            ; 00560334
    MOV dword ptr [ESP + 0xc],EBP       ; 00560335
    PUSH EBX                            ; 00560339
    MOV EDI,dword ptr [EBX + 0x48]      ; 0056033a
    CALL core_script.cpp_CScript_step_FUN_0055a810 ; 0056033d
        ;   XREF to: 0055a810 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_step_FUN_0055a810(CScript * this_ptr, float * time_remaining)
    ADD ESP,0x8                         ; 00560342
    TEST EAX,EAX                        ; 00560345
    JL 0x00560380                       ; 00560347
        ;   XREF to: 00560380 (CONDITIONAL_JUMP)  ; LAB_00560380
    INC ESI                             ; 00560349
        ;   Label: LAB_00560349
    CMP ESI,0x12c                       ; 0056034a
    JLE 0x00560310                      ; 00560350
        ;   XREF to: 00560310 (CONDITIONAL_JUMP)  ; LAB_00560310
    MOV EBP,0x64324c                    ; 00560352 | = "..\\core\\script.cpp"
    MOV EAX,0xea5                       ; 00560357
    MOV EDI,dword ptr [EBX + 0x48]      ; 0056035c
    MOV [0x02f0ca4c],EAX                ; 0056035f | g_CurrentLineNumber
    MOV EAX,dword ptr [EBX + 0x34]      ; 00560364
    MOV dword ptr [0x02f0ca48],EBP      ; 00560367 | g_CurrentFilename
    MOV EDX,dword ptr [EAX + EDI*0x8]   ; 0056036d
    PUSH EDX                            ; 00560370
    PUSH 0x64325f                       ; 00560371 | = "Infinite loop detected trying to skip..."
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00560376
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0056037b
    JMP 0x00560310                      ; 0056037e
        ;   XREF to: 00560310 (UNCONDITIONAL_JUMP)  ; LAB_00560310
    MOV EAX,dword ptr [EBX + 0x34]      ; 00560380
        ;   Label: LAB_00560380
    PUSH 0x310eca0                      ; 00560383 | g_ScriptErrorBuffer
    MOV EDX,dword ptr [EAX + EDI*0x8 + 0x4] ; 00560388
    PUSH EDX                            ; 0056038c
    MOV ECX,dword ptr [EAX + EDI*0x8]   ; 0056038d
    PUSH ECX                            ; 00560390
    PUSH 0x6431fd                       ; 00560391 | = "Error processing script to skip cinem..."
    MOV EDI,dword ptr [0x00678a60]      ; 00560396 | g_CEditorToolsPtr
    PUSH EDI                            ; 0056039c | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0056039d
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 005603a2
    JMP 0x00560349                      ; 005603a5
        ;   XREF to: 00560349 (UNCONDITIONAL_JUMP)  ; LAB_00560349
    MOV EAX,0x1                         ; 005603a7
        ;   Label: LAB_005603a7
    POP ESI                             ; 005603ac
    POP EDI                             ; 005603ad
    ADD ESP,0x4                         ; 005603ae
    POP EBP                             ; 005603b1
    POP EBX                             ; 005603b2
    RET                                 ; 005603b3

