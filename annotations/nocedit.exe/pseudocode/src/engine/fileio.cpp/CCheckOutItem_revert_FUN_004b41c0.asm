; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_fileio.cpp_CCheckOutItem_revert_FUN_004b41c0(CCheckOutItem * this_ptr, char * output_buffer)
;
; Parameters:
; CCheckOutItem *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   output_buffer
; Local Variables:
; undefined        Stack[-0x108]:1  local_108
;
; Referenced Globals:
;   TerminatedCString s_anon_00626a5d
;   TerminatedCString s_Select_file_to_undo_chec_00626a5f
;
; Called Functions:
;   engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
;   engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
;   engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b41c0
        ;   Label: engine_fileio.cpp_CCheckOutItem_revert_FUN_004b41c0
    SUB ESP,0x104                       ; 004b41c1
    MOV EBX,dword ptr [ESP + 0x10c]     ; 004b41c7
    PUSH 0x626a5d                       ; 004b41ce | = "*"
    PUSH 0x626a5f                       ; 004b41d3 | = "Select file to undo check out"
    LEA EAX,[ESP + 0x8]                 ; 004b41d8
    PUSH EAX                            ; 004b41dc
    MOV EDX,dword ptr [ESP + 0x11c]     ; 004b41dd
    PUSH EDX                            ; 004b41e4
    PUSH EBX                            ; 004b41e5
    CALL engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50 ; 004b41e6
        ;   XREF to: 004b3f50 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50(CCheckOutItem * this_ptr, char * filename_out, char * out_buffer, char * wildcard_pattern, ...)
    ADD ESP,0x14                        ; 004b41eb
    TEST EAX,EAX                        ; 004b41ee
    JNZ 0x004b41fa                      ; 004b41f0
        ;   XREF to: 004b41fa (CONDITIONAL_JUMP)  ; LAB_004b41fa
    ADD ESP,0x104                       ; 004b41f2
        ;   Label: LAB_004b41f2
    POP EBX                             ; 004b41f8
    RET                                 ; 004b41f9
    MOV EAX,ESP                         ; 004b41fa
        ;   Label: LAB_004b41fa
    PUSH EAX                            ; 004b41fc
    PUSH EBX                            ; 004b41fd
    CALL engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0 ; 004b41fe
        ;   XREF to: 004b35a0 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0(CCheckOutItem * this_ptr, void * unused_param)
    ADD ESP,0x8                         ; 004b4203
    TEST EAX,EAX                        ; 004b4206
    JZ 0x004b41f2                       ; 004b4208
        ;   XREF to: 004b41f2 (CONDITIONAL_JUMP)  ; LAB_004b41f2
    MOV EAX,ESP                         ; 004b420a
    PUSH EAX                            ; 004b420c
    PUSH EBX                            ; 004b420d
    CALL engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220 ; 004b420e
        ;   XREF to: 004b3220 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220(char * base_directory, char * filename)
    ADD ESP,0x8                         ; 004b4213
    ADD ESP,0x104                       ; 004b4216
    POP EBX                             ; 004b421c
    RET                                 ; 004b421d

