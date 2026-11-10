; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_string_c_strupr_FUN_005ba840(char *string)
;
; Parameters:
; char *           Stack[0x4]:4   string
;
; XREF[7]:
;   core_event.cpp_FUN_00490f80 at 0049102b
;   core_event.cpp_FUN_00491110 at 004911bb
;   engine_font.cpp_CBitFont_loadBitmap_FUN_004a7d00 at 004a7d62
;   engine_font.cpp_FUN_004a859e at 004a85ed
;   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0047d270 at 0047d36a
;   shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_00481620 at 00481825
;   shape_edittool.cpp_FUN_0047cb1e at 0047cf8e
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ba840
        ;   Label: crt_string.c_strupr_FUN_005ba840
    MOV EBX,dword ptr [ESP + 0x8]       ; 005ba841
    MOV EDX,EBX                         ; 005ba845
    MOV AL,byte ptr [EDX]               ; 005ba847
        ;   Label: LAB_005ba847
    TEST AL,AL                          ; 005ba849
    JZ 0x005ba85a                       ; 005ba84b
        ;   XREF to: 005ba85a (CONDITIONAL_JUMP)  ; LAB_005ba85a
    SUB AL,0x61                         ; 005ba84d
    CMP AL,0x19                         ; 005ba84f
    JA 0x005ba857                       ; 005ba851
        ;   XREF to: 005ba857 (CONDITIONAL_JUMP)  ; LAB_005ba857
    ADD AL,0x41                         ; 005ba853
    MOV byte ptr [EDX],AL               ; 005ba855
    INC EDX                             ; 005ba857
        ;   Label: LAB_005ba857
    JMP 0x005ba847                      ; 005ba858
        ;   XREF to: 005ba847 (UNCONDITIONAL_JUMP)  ; LAB_005ba847
    MOV EAX,EBX                         ; 005ba85a
        ;   Label: LAB_005ba85a
    POP EBX                             ; 005ba85c
    RET                                 ; 005ba85d

