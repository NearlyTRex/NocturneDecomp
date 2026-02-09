; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CFileManager * __cdecl engine_fileio_cpp_CFileManager_dtor_FUN_004b53d0(CFileManager *this_ptr)
;
; Parameters:
; CFileManager *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fileman.cpp_CDemonFileManager_dtor_FUN_00508880 at 00508887
;
; Referenced Globals:
;   CFileManager_vtable g_CFileManagerVTable
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b53d0
        ;   Label: engine_fileio.cpp_CFileManager_dtor_FUN_004b53d0
    MOV dword ptr [EAX + 0x138810],0x65d984 ; 004b53d4 | g_CFileManagerVTable
    RET                                 ; 004b53de

