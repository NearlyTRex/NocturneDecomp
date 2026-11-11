; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_dosio_cpp_splitPath_FUN_00479580(char *full_path,char *drive,char *directory,char *filename,char *extension)
;
; Parameters:
; char *           Stack[0x4]:4   full_path
; char *           Stack[0x8]:4   drive
; char *           Stack[0xc]:4   directory
; char *           Stack[0x10]:4   filename
; char *           Stack[0x14]:4   extension
;
; XREF[26]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_004a70d0 at 004a80d8
;   core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004bcba0 at 004bd639
;   core_fldnotes.cpp_FUN_004be0f0 at 004be626
;   core_fldnotes.cpp_SPageResourceBitmap_ctorFromFile_FUN_004baa40 at 004baa81
;   core_game.cpp_FUN_004ce580 at 004cea50
;   core_script.cpp_CScript_step_FUN_00544460 at 00546432
;   core_set.cpp_FUN_0054d3c0 at 0054d7ee
;   engine_dosio.cpp_FUN_004795e0 at 00479612
;   engine_dosio.cpp_changeFileExtension_FUN_004796b0 at 004796d6
;   engine_font.cpp_CBitFont_loadBitmap_FUN_004c0cd0 at 004c0e16
;   ... and 16 more
;
; Called Functions:
;   crt_string.c_splitpath_FUN_005c2238
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00479580
        ;   Label: engine_dosio.cpp_splitPath_FUN_00479580
    PUSH ESI                            ; 00479581
    PUSH EDI                            ; 00479582
    MOV EDX,dword ptr [ESP + 0x20]      ; 00479583
    PUSH EDX                            ; 00479587
    MOV ECX,dword ptr [ESP + 0x20]      ; 00479588
    PUSH ECX                            ; 0047958c
    MOV EBX,dword ptr [ESP + 0x20]      ; 0047958d
    PUSH EBX                            ; 00479591
    MOV ESI,dword ptr [ESP + 0x20]      ; 00479592
    PUSH ESI                            ; 00479596
    MOV EDI,dword ptr [ESP + 0x20]      ; 00479597
    PUSH EDI                            ; 0047959b
    CALL crt_string.c_splitpath_FUN_005c2238 ; 0047959c
        ;   XREF to: 005c2238 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005c2238(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 004795a1
    POP EDI                             ; 004795a4
    POP ESI                             ; 004795a5
    POP EBX                             ; 004795a6
    RET                                 ; 004795a7

