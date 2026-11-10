; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_string_c_strupr_FUN_005c2c20(char *string)
;
; Parameters:
; char *           Stack[0x4]:4   string
;
; XREF[7]:
;   core_event.cpp_FUN_004a9870 at 004a9930
;   core_event.cpp_FUN_004a9a60 at 004a9b20
;   engine_font.cpp_CBitFont_loadBitmap_FUN_004c0cd0 at 004c0d32
;   engine_font.cpp_FUN_004c157e at 004c15cd
;   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_004958d0 at 004959ca
;   shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_00499c80 at 00499e85
;   shape_edittool.cpp_FUN_0049517e at 004955ee
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c2c20
        ;   Label: crt_string.c_strupr_FUN_005c2c20
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c2c21
    MOV EDX,EBX                         ; 005c2c25
    MOV AL,byte ptr [EDX]               ; 005c2c27
        ;   Label: LAB_005c2c27
    TEST AL,AL                          ; 005c2c29
    JZ 0x005c2c3a                       ; 005c2c2b
        ;   XREF to: 005c2c3a (CONDITIONAL_JUMP)  ; LAB_005c2c3a
    SUB AL,0x61                         ; 005c2c2d
    CMP AL,0x19                         ; 005c2c2f
    JA 0x005c2c37                       ; 005c2c31
        ;   XREF to: 005c2c37 (CONDITIONAL_JUMP)  ; LAB_005c2c37
    ADD AL,0x41                         ; 005c2c33
    MOV byte ptr [EDX],AL               ; 005c2c35
    INC EDX                             ; 005c2c37
        ;   Label: LAB_005c2c37
    JMP 0x005c2c27                      ; 005c2c38
        ;   XREF to: 005c2c27 (UNCONDITIONAL_JUMP)  ; LAB_005c2c27
    MOV EAX,EBX                         ; 005c2c3a
        ;   Label: LAB_005c2c3a
    POP EBX                             ; 005c2c3c
    RET                                 ; 005c2c3d

