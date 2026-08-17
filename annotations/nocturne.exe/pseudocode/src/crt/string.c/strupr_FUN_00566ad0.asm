; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_string_c_strupr_FUN_00566ad0(char *string)
;
; Parameters:
; char *           Stack[0x4]:4   string
;
; XREF[6]:
;   core_event.cpp_CEventList_addOrRemoveGameFlag_FUN_00480420 at 004804cb
;   core_event.cpp_CEventList_addOrRemovePersistentEvent_FUN_004802e0 at 0048038b
;   engine_font.cpp_CBitFont_loadBitmap_FUN_0048ff70 at 0048ffd2
;   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_00470730 at 00470bbd
;   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_00470eb0 at 00470faa
;   shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_00474460 at 00474665
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566ad0
        ;   Label: crt_string.c_strupr_FUN_00566ad0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00566ad1
    MOV EDX,EBX                         ; 00566ad5
    MOV AL,byte ptr [EDX]               ; 00566ad7
        ;   Label: LAB_00566ad7
    TEST AL,AL                          ; 00566ad9
    JZ 0x00566aea                       ; 00566adb
        ;   XREF to: 00566aea (CONDITIONAL_JUMP)  ; LAB_00566aea
    SUB AL,0x61                         ; 00566add
    CMP AL,0x19                         ; 00566adf
    JA 0x00566ae7                       ; 00566ae1
        ;   XREF to: 00566ae7 (CONDITIONAL_JUMP)  ; LAB_00566ae7
    ADD AL,0x41                         ; 00566ae3
    MOV byte ptr [EDX],AL               ; 00566ae5
    INC EDX                             ; 00566ae7
        ;   Label: LAB_00566ae7
    JMP 0x00566ad7                      ; 00566ae8
        ;   XREF to: 00566ad7 (UNCONDITIONAL_JUMP)  ; LAB_00566ad7
    MOV EAX,EBX                         ; 00566aea
        ;   Label: LAB_00566aea
    POP EBX                             ; 00566aec
    RET                                 ; 00566aed

