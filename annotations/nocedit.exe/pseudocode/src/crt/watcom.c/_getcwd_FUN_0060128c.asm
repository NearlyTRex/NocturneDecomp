; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_watcom_c__getcwd_FUN_0060128c(char *buffer,SIZE_T size)
;
; Parameters:
; char *           Stack[0x4]:4   buffer
; SIZE_T           Stack[0x8]:4   size
;
; XREF[2]:
;   engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40 at 004b9fca
;   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 at 0049f49a
;
; *****************************************************************************

section .text

    JMP 0x00608d20                      ; 0060128c
        ;   XREF to: 00608d20 (UNCONDITIONAL_JUMP)
        ;   Label: crt_watcom.c__getcwd_FUN_0060128c

