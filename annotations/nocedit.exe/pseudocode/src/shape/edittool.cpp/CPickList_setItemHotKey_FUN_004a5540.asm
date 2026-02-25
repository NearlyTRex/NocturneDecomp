; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CPickList_setItemHotKey_FUN_004a5540(CPickList *this_ptr,int item_index,int hotkey_code)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   item_index
; int              Stack[0xc]:4   hotkey_code
;
; XREF[2]:
;   core_setedit.cpp_editGroundTypes_FUN_00578630 at 00578889
;   engine_fileio.cpp_showOverwriteConfirmationDialog_FUN_004b2f90 at 004b3048
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_00623b6b
;   TerminatedCString s_CPickList_setItemHotKey__00623b81
;   TerminatedCString s_shape_edittool_cpp_00623baa
;   TerminatedCString s_shape_edittool_cpp_00623bc0
;   TerminatedCString s_Out_of_memory_00623bd6
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_memdbg.cpp_debugRealloc_FUN_0050f540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a5540
        ;   Label: shape_edittool.cpp_CPickList_setItemHotKey_FUN_004a5540
    PUSH ESI                            ; 004a5541
    PUSH EDI                            ; 004a5542
    PUSH EBP                            ; 004a5543
    MOV EBX,dword ptr [ESP + 0x14]      ; 004a5544
    MOV ESI,dword ptr [ESP + 0x18]      ; 004a5548
    TEST ESI,ESI                        ; 004a554c
    JL 0x004a5554                       ; 004a554e
        ;   XREF to: 004a5554 (CONDITIONAL_JUMP)  ; LAB_004a5554
    CMP ESI,dword ptr [EBX]             ; 004a5550
    JL 0x004a5577                       ; 004a5552
        ;   XREF to: 004a5577 (CONDITIONAL_JUMP)  ; LAB_004a5577
    MOV ECX,0x623b6b                    ; 004a5554 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_004a5554
    MOV EDI,0x104e                      ; 004a5559
    PUSH 0x623b81                       ; 004a555e | = "CPickList::setItemHotKey - invalid index"
    MOV dword ptr [0x02f0ca48],ECX      ; 004a5563 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 004a5569 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a556f
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004a5574
    CMP ESI,dword ptr [EBX + 0x19c]     ; 004a5577
        ;   Label: LAB_004a5577
    JGE 0x004a5591                      ; 004a557d
        ;   XREF to: 004a5591 (CONDITIONAL_JUMP)  ; LAB_004a5591
    MOV EAX,dword ptr [EBX + 0x1a0]     ; 004a557f
        ;   Label: LAB_004a557f
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004a5585
    MOV dword ptr [EAX + ESI*0x4],EDX   ; 004a5589
    POP EBP                             ; 004a558c
    POP EDI                             ; 004a558d
    POP ESI                             ; 004a558e
    POP EBX                             ; 004a558f
    RET                                 ; 004a5590
    PUSH 0x1054                         ; 004a5591
        ;   Label: LAB_004a5591
    MOV EAX,dword ptr [EBX]             ; 004a5596
    PUSH 0x623baa                       ; 004a5598 | = "..\\shape\\edittool.cpp"
    SHL EAX,0x2                         ; 004a559d
    PUSH EAX                            ; 004a55a0
    MOV EAX,dword ptr [EBX + 0x1a0]     ; 004a55a1
    PUSH EAX                            ; 004a55a7
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 004a55a8
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
    ADD ESP,0x10                        ; 004a55ad
    MOV dword ptr [EBX + 0x1a0],EAX     ; 004a55b0
    TEST EAX,EAX                        ; 004a55b6
    JZ 0x004a55dd                       ; 004a55b8
        ;   XREF to: 004a55dd (CONDITIONAL_JUMP)  ; LAB_004a55dd
    MOV EBP,dword ptr [EBX]             ; 004a55ba
        ;   Label: LAB_004a55ba
    MOV EAX,dword ptr [EBX + 0x19c]     ; 004a55bc
    CMP EAX,EBP                         ; 004a55c2
    JGE 0x004a557f                      ; 004a55c4
        ;   XREF to: 004a557f (CONDITIONAL_JUMP)  ; LAB_004a557f
    MOV EDX,EAX                         ; 004a55c6
    MOV EAX,dword ptr [EBX + 0x1a0]     ; 004a55c8
    MOV dword ptr [EAX + EDX*0x4],0xffffffff ; 004a55ce
    INC dword ptr [EBX + 0x19c]         ; 004a55d5
    JMP 0x004a55ba                      ; 004a55db
        ;   XREF to: 004a55ba (UNCONDITIONAL_JUMP)  ; LAB_004a55ba
    MOV ECX,0x623bc0                    ; 004a55dd | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_004a55dd
    MOV EDI,0x1055                      ; 004a55e2
    PUSH 0x623bd6                       ; 004a55e7 | = "Out of memory"
    MOV dword ptr [0x02f0ca48],ECX      ; 004a55ec | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 004a55f2 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a55f8
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004a55fd
    JMP 0x004a55ba                      ; 004a5600
        ;   XREF to: 004a55ba (UNCONDITIONAL_JUMP)  ; LAB_004a55ba

