; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_string_c_strupr_FUN_005a5b10(char *string)
;
; Parameters:
; char *           Stack[0x4]:4   string
;
; XREF[7]:
;   core_event.cpp_FUN_004946f0 at 004947b0
;   core_event.cpp_FUN_004948e0 at 004949a0
;   engine_font.cpp_CBitFont_loadBitmap_FUN_004af920 at 004af982
;   engine_font.cpp_FUN_004b01ce at 004b021d
;   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0047e470 at 0047e56a
;   shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_00482820 at 00482a25
;   shape_edittool.cpp_FUN_0047dd1e at 0047e18e
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a5b10
        ;   Label: crt_string.c_strupr_FUN_005a5b10
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a5b11
    MOV EDX,EBX                         ; 005a5b15
    MOV AL,byte ptr [EDX]               ; 005a5b17
        ;   Label: LAB_005a5b17
    TEST AL,AL                          ; 005a5b19
    JZ 0x005a5b2a                       ; 005a5b1b
        ;   XREF to: 005a5b2a (CONDITIONAL_JUMP)  ; LAB_005a5b2a
    SUB AL,0x61                         ; 005a5b1d
    CMP AL,0x19                         ; 005a5b1f
    JA 0x005a5b27                       ; 005a5b21
        ;   XREF to: 005a5b27 (CONDITIONAL_JUMP)  ; LAB_005a5b27
    ADD AL,0x41                         ; 005a5b23
    MOV byte ptr [EDX],AL               ; 005a5b25
    INC EDX                             ; 005a5b27
        ;   Label: LAB_005a5b27
    JMP 0x005a5b17                      ; 005a5b28
        ;   XREF to: 005a5b17 (UNCONDITIONAL_JUMP)  ; LAB_005a5b17
    MOV EAX,EBX                         ; 005a5b2a
        ;   Label: LAB_005a5b2a
    POP EBX                             ; 005a5b2c
    RET                                 ; 005a5b2d

