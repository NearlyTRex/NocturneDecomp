; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_script_cpp_CScript_addEventXRef_FUN_00567510(CScript *this_ptr,SScriptXRef *xref_data)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; SScriptXRef *    Stack[0x8]:4   xref_data
;
; XREF[4]:
;   core_msnedit.cpp_CDemonMission_FUN_0053ea30 at 0053eaf1
;   core_script.cpp_CCmdParse_applyActorParameters_FUN_00564090 at 00564131
;   core_script.cpp_CScript_extractCrossReferences_FUN_005671a0 at 005672fe
;   core_script.cpp_CScript_parseCommand_FUN_00567080 at 00567188
;
; Referenced Globals:
;   TerminatedCString s_core_script_cpp_00644057
;   TerminatedCString s_core_script_cpp_0064406a
;   TerminatedCString s_Out_of_memory_0064407d
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_memdbg.cpp_debugRealloc_FUN_0050f540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00567510
        ;   Label: core_script.cpp_CScript_addEventXRef_FUN_00567510
    PUSH ESI                            ; 00567511
    PUSH EDI                            ; 00567512
    MOV EBX,dword ptr [ESP + 0x10]      ; 00567513
    MOV EDX,dword ptr [EBX + 0x28]      ; 00567517
    INC EDX                             ; 0056751a
    MOV EAX,EDX                         ; 0056751b
    SHL EAX,0x4                         ; 0056751d
    ADD EAX,EDX                         ; 00567520
    SHL EAX,0x2                         ; 00567522
    PUSH 0x1d37                         ; 00567525
    ADD EAX,EDX                         ; 0056752a
    PUSH 0x644057                       ; 0056752c | = "..\\core\\script.cpp"
    SHL EAX,0x2                         ; 00567531
    PUSH EAX                            ; 00567534
    MOV EDX,dword ptr [EBX + 0x2c]      ; 00567535
    PUSH EDX                            ; 00567538
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 00567539
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
    ADD ESP,0x10                        ; 0056753e
    MOV dword ptr [EBX + 0x2c],EAX      ; 00567541
    TEST EAX,EAX                        ; 00567544
    JZ 0x00567571                       ; 00567546
        ;   XREF to: 00567571 (CONDITIONAL_JUMP)  ; LAB_00567571
    MOV EDX,dword ptr [EBX + 0x28]      ; 00567548
        ;   Label: LAB_00567548
    MOV EAX,EDX                         ; 0056754b
    SHL EAX,0x4                         ; 0056754d
    ADD EAX,EDX                         ; 00567550
    SHL EAX,0x2                         ; 00567552
    MOV ECX,0x45                        ; 00567555
    ADD EAX,EDX                         ; 0056755a
    MOV EDI,dword ptr [EBX + 0x2c]      ; 0056755c
    SHL EAX,0x2                         ; 0056755f
    MOV ESI,dword ptr [ESP + 0x14]      ; 00567562
    ADD EDI,EAX                         ; 00567566
    MOVSD.REP ES:EDI,ESI                ; 00567568
    INC dword ptr [EBX + 0x28]          ; 0056756a
    POP EDI                             ; 0056756d
    POP ESI                             ; 0056756e
    POP EBX                             ; 0056756f
    RET                                 ; 00567570
    MOV ESI,0x64406a                    ; 00567571 | = "..\\core\\script.cpp"
        ;   Label: LAB_00567571
    MOV EDI,0x1d38                      ; 00567576
    PUSH 0x64407d                       ; 0056757b | = "Out of memory"
    MOV dword ptr [0x02f0ca48],ESI      ; 00567580 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 00567586 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0056758c
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00567591
    JMP 0x00567548                      ; 00567594
        ;   XREF to: 00567548 (UNCONDITIONAL_JUMP)  ; LAB_00567548

