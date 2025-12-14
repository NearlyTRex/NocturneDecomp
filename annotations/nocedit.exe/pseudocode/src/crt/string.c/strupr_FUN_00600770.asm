; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char * crt_string.c_strupr_FUN_00600770(char * string)
;
; Parameters:
; char *           Stack[0x4]:4   string
;
; XREF[12]:
;   core_event.cpp_CEventList_FUN_004b0330 at 004b03db
;   core_event.cpp_CEventList_FUN_004b0470 at 004b051b
;   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 at 00584e21
;   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 at 0057ecfd
;   core_setedit.cpp_DementedFogEditor_FUN_00580730 at 00580eb5
;   core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0 at 0057cd2b
;   engine_fileio.cpp_CFileManager_catalogPodFile_FUN_004b7460 at 004b75fa
;   engine_font.cpp_CBitFont_loadBitmap_FUN_004ccff0 at 004cd052
;   shape_design.c_cramTextureList_FUN_0046bb80 at 0046cf09
;   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 at 0049f964
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00600770
        ;   Label: crt_string.c_strupr_FUN_00600770
    MOV EBX,dword ptr [ESP + 0x8]       ; 00600771
    MOV EDX,EBX                         ; 00600775
    MOV AL,byte ptr [EDX]               ; 00600777
        ;   Label: LAB_00600777
    TEST AL,AL                          ; 00600779
    JZ 0x0060078a                       ; 0060077b
        ;   XREF to: 0060078a (CONDITIONAL_JUMP)  ; LAB_0060078a
    SUB AL,0x61                         ; 0060077d
    CMP AL,0x19                         ; 0060077f
    JA 0x00600787                       ; 00600781
        ;   XREF to: 00600787 (CONDITIONAL_JUMP)  ; LAB_00600787
    ADD AL,0x41                         ; 00600783
    MOV byte ptr [EDX],AL               ; 00600785
    INC EDX                             ; 00600787
        ;   Label: LAB_00600787
    JMP 0x00600777                      ; 00600788
        ;   XREF to: 00600777 (UNCONDITIONAL_JUMP)  ; LAB_00600777
    MOV EAX,EBX                         ; 0060078a
        ;   Label: LAB_0060078a
    POP EBX                             ; 0060078c
    RET                                 ; 0060078d

