; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_alphabit_cpp_FUN_0040dbb0(int param_1,int param_2)
;
;
; XREF[4]:
;   core_flashlit.cpp_FUN_004a7d70 at 004a7e97
;   core_fldnotes.cpp_CFieldNotes_draw_FUN_004abe00 at 004ac3cc
;   core_fldnotes.cpp_CFieldNotes_loadState_FUN_004ac900 at 004aceac
;   core_fldnotes.cpp_SNotesMap_load_FUN_004a9f30 at 004a9fe2
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040dbb0
        ;   Label: engine_alphabit.cpp_FUN_0040dbb0
    PUSH ESI                            ; 0040dbb1
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040dbb2
    MOV EAX,dword ptr [EDX + 0xc]       ; 0040dbb6
    IMUL EAX,dword ptr [EDX + 0x10]     ; 0040dbb9
    PUSH EAX                            ; 0040dbbd
    MOV EBX,dword ptr [ESP + 0x14]      ; 0040dbbe
    PUSH EBX                            ; 0040dbc2
    MOV ESI,dword ptr [EDX + 0x4]       ; 0040dbc3
    PUSH ESI                            ; 0040dbc6
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0040dbc7
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0040dbcc
    POP ESI                             ; 0040dbcf
    POP EBX                             ; 0040dbd0
    RET                                 ; 0040dbd1

