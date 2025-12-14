; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_edittool.cpp_CPickList_enableItem_FUN_004a5410(CPickList * this_ptr, int item_index, bool enable_flag)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   item_index
; bool             Stack[0xc]:1   enable_flag
;
; XREF[3]:
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db83d
;   core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0 at 004e27e1
;   core_game.cpp_FUN_004e1c30 at 004e1c78
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_00623ab6
;   TerminatedCString s_CPickList_enableItem_inv_00623acc
;   TerminatedCString s_shape_edittool_cpp_00623af2
;   TerminatedCString s_shape_edittool_cpp_00623b08
;   TerminatedCString s_Out_of_memory_00623b1e
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_memdbg.cpp_debugRealloc_FUN_0050f540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a5410
        ;   Label: shape_edittool.cpp_CPickList_enableItem_FUN_004a5410
    PUSH ESI                            ; 004a5411
    PUSH EDI                            ; 004a5412
    PUSH EBP                            ; 004a5413
    MOV EBX,dword ptr [ESP + 0x14]      ; 004a5414
    MOV ESI,dword ptr [ESP + 0x18]      ; 004a5418
    TEST ESI,ESI                        ; 004a541c
    JL 0x004a5424                       ; 004a541e
        ;   XREF to: 004a5424 (CONDITIONAL_JUMP)  ; LAB_004a5424
    CMP ESI,dword ptr [EBX]             ; 004a5420
    JL 0x004a5447                       ; 004a5422
        ;   XREF to: 004a5447 (CONDITIONAL_JUMP)  ; LAB_004a5447
    MOV ECX,0x623ab6                    ; 004a5424 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_004a5424
    MOV EDI,0x1025                      ; 004a5429
    PUSH 0x623acc                       ; 004a542e | = "CPickList::enableItem - invalid index"
    MOV dword ptr [0x02f0ca48],ECX      ; 004a5433 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 004a5439 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a543f
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004a5444
    CMP ESI,dword ptr [EBX + 0x194]     ; 004a5447
        ;   Label: LAB_004a5447
    JGE 0x004a546a                      ; 004a544d
        ;   XREF to: 004a546a (CONDITIONAL_JUMP)  ; LAB_004a546a
    CMP dword ptr [ESP + 0x1c],0x0      ; 004a544f
        ;   Label: LAB_004a544f
    SETNZ AL                            ; 004a5454
    MOV EDX,dword ptr [EBX + 0x198]     ; 004a5457
    AND EAX,0xff                        ; 004a545d
    MOV dword ptr [EDX + ESI*0x4],EAX   ; 004a5462
    POP EBP                             ; 004a5465
    POP EDI                             ; 004a5466
    POP ESI                             ; 004a5467
    POP EBX                             ; 004a5468
    RET                                 ; 004a5469
    PUSH 0x102b                         ; 004a546a
        ;   Label: LAB_004a546a
    MOV EAX,dword ptr [EBX]             ; 004a546f
    PUSH 0x623af2                       ; 004a5471 | = "..\\shape\\edittool.cpp"
    SHL EAX,0x2                         ; 004a5476
    PUSH EAX                            ; 004a5479
    MOV EAX,dword ptr [EBX + 0x198]     ; 004a547a
    PUSH EAX                            ; 004a5480
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 004a5481
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
    ADD ESP,0x10                        ; 004a5486
    MOV dword ptr [EBX + 0x198],EAX     ; 004a5489
    TEST EAX,EAX                        ; 004a548f
    JZ 0x004a54b4                       ; 004a5491
        ;   XREF to: 004a54b4 (CONDITIONAL_JUMP)  ; LAB_004a54b4
    MOV EBP,dword ptr [EBX]             ; 004a5493
        ;   Label: LAB_004a5493
    MOV EAX,dword ptr [EBX + 0x194]     ; 004a5495
    CMP EAX,EBP                         ; 004a549b
    JGE 0x004a544f                      ; 004a549d
        ;   XREF to: 004a544f (CONDITIONAL_JUMP)  ; LAB_004a544f
    MOV EDX,dword ptr [EBX + 0x198]     ; 004a549f
    MOV dword ptr [EDX + EAX*0x4],0x1   ; 004a54a5
    INC dword ptr [EBX + 0x194]         ; 004a54ac
    JMP 0x004a5493                      ; 004a54b2
        ;   XREF to: 004a5493 (UNCONDITIONAL_JUMP)  ; LAB_004a5493
    MOV ECX,0x623b08                    ; 004a54b4 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_004a54b4
    MOV EDI,0x102c                      ; 004a54b9
    PUSH 0x623b1e                       ; 004a54be | = "Out of memory"
    MOV dword ptr [0x02f0ca48],ECX      ; 004a54c3 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 004a54c9 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a54cf
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004a54d4
    JMP 0x004a5493                      ; 004a54d7
        ;   XREF to: 004a5493 (UNCONDITIONAL_JUMP)  ; LAB_004a5493

