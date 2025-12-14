; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CFileManager * engine_fileio.cpp_CFileManager_ctor_FUN_004b53a0(CFileManager * this_ptr)
;
; Parameters:
; CFileManager *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_fileman.cpp_CDemonFileManager_ctor_FUN_00508860 at 00508865
;   core_main.c_staticInit_FUN_00506e80 at 00506e85
;
; Referenced Globals:
;   CFileManager_vtable g_CFileManagerVTable
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b53a0
        ;   Label: engine_fileio.cpp_CFileManager_ctor_FUN_004b53a0
    MOV dword ptr [EAX + 0x138808],0x1  ; 004b53a4
    MOV dword ptr [EAX + 0x13880c],0x0  ; 004b53ae
    MOV dword ptr [EAX + 0x138810],0x65d984 ; 004b53b8 | g_CFileManagerVTable
    RET                                 ; 004b53c2

