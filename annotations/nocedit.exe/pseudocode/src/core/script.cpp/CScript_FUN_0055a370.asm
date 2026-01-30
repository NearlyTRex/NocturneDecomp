; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_script_cpp_CScript_FUN_0055a370(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   core_script.cpp_CScript_FUN_00559f80 at 0055a0c4
;   core_script.cpp_CScript_FUN_00565d00 at 00565dd1
;   core_script.cpp_CScript_FUN_00566080 at 0056608b
;   core_script.cpp_CScript_FUN_00566fa0 at 00566fb9
;   core_script.cpp_CScript_FUN_00567630 at 00567649
;   core_script.cpp_CScript_FUN_00567bc0 at 00567bd2
;
; Referenced Globals:
;   TerminatedCString s_core_script_cpp_006419d9
;   TerminatedCString s_core_script_cpp_006419ec
;   TerminatedCString s_Out_of_memory_loading_sc_006419ff
;   TerminatedCString s_core_script_cpp_00641a27
;   TerminatedCString s_core_script_cpp_00641a3a
;   TerminatedCString s_Out_of_memory_loading_sc_00641a4d
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   undefined1 DAT_031091e8
;   undefined1 DAT_031091e9
;   undefined1 DAT_031091ea
;   undefined1 DAT_031091eb
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_script.cpp_CScript_FUN_005598f0
;   core_script.cpp_FUN_005592c0
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;   shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250
;   shape_memdbg.cpp_debugRealloc_FUN_0050f540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055a370
        ;   Label: core_script.cpp_CScript_FUN_0055a370
    PUSH ESI                            ; 0055a371
    PUSH EDI                            ; 0055a372
    PUSH EBP                            ; 0055a373
    SUB ESP,0x4                         ; 0055a374
    MOV EBX,dword ptr [ESP + 0x18]      ; 0055a377
    PUSH EBX                            ; 0055a37b
    CALL core_script.cpp_CScript_FUN_005598f0 ; 0055a37c
        ;   XREF to: 005598f0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_FUN_005598f0(CScript * this_ptr)
    ADD ESP,0x4                         ; 0055a381
    LEA EAX,[EBX + 0x38]                ; 0055a384
    XOR EBP,EBP                         ; 0055a387
    MOV dword ptr [ESP],EAX             ; 0055a389
    MOV EDX,dword ptr [ESP]             ; 0055a38c
        ;   Label: LAB_0055a38c
    PUSH EDX                            ; 0055a38f
    CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0 ; 0055a390
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0(CBitFont * font_ptr)
    ADD ESP,0x4                         ; 0055a395
    CMP EBP,EAX                         ; 0055a398
    JL 0x0055a3a4                       ; 0055a39a
        ;   XREF to: 0055a3a4 (CONDITIONAL_JUMP)  ; LAB_0055a3a4
    ADD ESP,0x4                         ; 0055a39c
    POP EBP                             ; 0055a39f
    POP EDI                             ; 0055a3a0
    POP ESI                             ; 0055a3a1
    POP EBX                             ; 0055a3a2
    RET                                 ; 0055a3a3
    PUSH 0x31091e8                      ; 0055a3a4 | DAT_031091e8
        ;   Label: LAB_0055a3a4
    PUSH EBP                            ; 0055a3a9
    MOV ECX,dword ptr [ESP + 0x8]       ; 0055a3aa
    PUSH ECX                            ; 0055a3ae
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 0055a3af
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 0055a3b4
    PUSH EAX                            ; 0055a3b7
    CALL core_script.cpp_FUN_005592c0   ; 0055a3b8
        ;   XREF to: 005592c0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_FUN_005592c0(char * param_1, char * param_2)
    MOV AH,byte ptr [0x031091e8]        ; 0055a3bd | DAT_031091e8
    ADD ESP,0x8                         ; 0055a3c3
    TEST AH,AH                          ; 0055a3c6
    JZ 0x0055a4a8                       ; 0055a3c8
        ;   XREF to: 0055a4a8 (CONDITIONAL_JUMP)  ; LAB_0055a4a8
    MOV EAX,dword ptr [EBX + 0x30]      ; 0055a3ce
    PUSH 0x397                          ; 0055a3d1
    INC EAX                             ; 0055a3d6
    PUSH 0x6419d9                       ; 0055a3d7 | = "..\\core\\script.cpp"
    SHL EAX,0x3                         ; 0055a3dc
    PUSH EAX                            ; 0055a3df
    MOV ESI,dword ptr [EBX + 0x34]      ; 0055a3e0
    PUSH ESI                            ; 0055a3e3
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 0055a3e4
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
    ADD ESP,0x10                        ; 0055a3e9
    MOV dword ptr [EBX + 0x34],EAX      ; 0055a3ec
    TEST EAX,EAX                        ; 0055a3ef
    JNZ 0x0055a419                      ; 0055a3f1
        ;   XREF to: 0055a419 (CONDITIONAL_JUMP)  ; LAB_0055a419
    MOV dword ptr [0x02f0ca48],0x6419ec ; 0055a3f3 | g_CurrentFilename | = "..\\core\\script.cpp"
    LEA EAX,[EBP + 0x1]                 ; 0055a3fd
    PUSH EAX                            ; 0055a400
    MOV EDX,0x398                       ; 0055a401
    PUSH 0x6419ff                       ; 0055a406 | = "Out of memory loading script at line %d"
    MOV dword ptr [0x02f0ca4c],EDX      ; 0055a40b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0055a411
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0055a416
    PUSH 0x39a                          ; 0055a419
        ;   Label: LAB_0055a419
    LEA ESI,[EBP + 0x1]                 ; 0055a41e
    MOV EAX,dword ptr [EBX + 0x30]      ; 0055a421
    MOV ECX,dword ptr [EBX + 0x34]      ; 0055a424
    PUSH 0x641a27                       ; 0055a427 | = "..\\core\\script.cpp"
    MOV EDI,0x31091e8                   ; 0055a42c | DAT_031091e8
    MOV dword ptr [ECX + EAX*0x8],ESI   ; 0055a431
    SUB ECX,ECX                         ; 0055a434
    DEC ECX                             ; 0055a436
    XOR EAX,EAX                         ; 0055a437
    SCASB.REPNE ES:EDI                  ; 0055a439 | DAT_031091e8 | DAT_031091e9
    NOT ECX                             ; 0055a43b
    DEC ECX                             ; 0055a43d
    INC ECX                             ; 0055a43e
    PUSH ECX                            ; 0055a43f
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 0055a440
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    MOV ECX,dword ptr [EBX + 0x30]      ; 0055a445
    MOV EDI,dword ptr [EBX + 0x34]      ; 0055a448
    MOV dword ptr [EDI + ECX*0x8 + 0x4],EAX ; 0055a44b
    MOV ECX,dword ptr [EBX + 0x34]      ; 0055a44f
    ADD ESP,0xc                         ; 0055a452
    TEST ECX,ECX                        ; 0055a455
    JNZ 0x0055a47c                      ; 0055a457
        ;   XREF to: 0055a47c (CONDITIONAL_JUMP)  ; LAB_0055a47c
    PUSH ESI                            ; 0055a459
    MOV EDI,0x641a3a                    ; 0055a45a | = "..\\core\\script.cpp"
    MOV EAX,0x39b                       ; 0055a45f
    PUSH 0x641a4d                       ; 0055a464 | = "Out of memory loading script at line %d"
    MOV dword ptr [0x02f0ca48],EDI      ; 0055a469 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0055a46f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0055a474
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0055a479
    MOV EAX,dword ptr [EBX + 0x30]      ; 0055a47c
        ;   Label: LAB_0055a47c
    MOV ECX,dword ptr [EBX + 0x34]      ; 0055a47f
    MOV ESI,0x31091e8                   ; 0055a482 | DAT_031091e8
    MOV EDI,dword ptr [ECX + EAX*0x8 + 0x4] ; 0055a487
    PUSH EDI                            ; 0055a48b
    MOV AL,byte ptr [ESI]               ; 0055a48c | DAT_031091e8 | DAT_031091ea
        ;   Label: LAB_0055a48c
    MOV byte ptr [EDI],AL               ; 0055a48e
    CMP AL,0x0                          ; 0055a490
    JZ 0x0055a4a4                       ; 0055a492
        ;   XREF to: 0055a4a4 (CONDITIONAL_JUMP)  ; LAB_0055a4a4
    MOV AL,byte ptr [ESI + 0x1]         ; 0055a494 | DAT_031091e9 | DAT_031091eb
    ADD ESI,0x2                         ; 0055a497
    MOV byte ptr [EDI + 0x1],AL         ; 0055a49a
    ADD EDI,0x2                         ; 0055a49d
    CMP AL,0x0                          ; 0055a4a0
    JNZ 0x0055a48c                      ; 0055a4a2
        ;   XREF to: 0055a48c (CONDITIONAL_JUMP)  ; LAB_0055a48c
    POP EDI                             ; 0055a4a4
        ;   Label: LAB_0055a4a4
    INC dword ptr [EBX + 0x30]          ; 0055a4a5
    INC EBP                             ; 0055a4a8
        ;   Label: LAB_0055a4a8
    JMP 0x0055a38c                      ; 0055a4a9
        ;   XREF to: 0055a38c (UNCONDITIONAL_JUMP)  ; LAB_0055a38c

