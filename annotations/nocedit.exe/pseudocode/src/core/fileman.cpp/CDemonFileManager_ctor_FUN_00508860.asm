; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonFileManager * core_fileman.cpp_CDemonFileManager_ctor_FUN_00508860(CDemonFileManager * this_ptr)
;
; Parameters:
; CDemonFileManager * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CFileManager_vtable g_CDemonFileManagerVTable
;
; Called Functions:
;   engine_fileio.cpp_CFileManager_ctor_FUN_004b53a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00508860
        ;   Label: core_fileman.cpp_CDemonFileManager_ctor_FUN_00508860
    PUSH EDX                            ; 00508864
    CALL engine_fileio.cpp_CFileManager_ctor_FUN_004b53a0 ; 00508865 | CFileManager * engine_fileio.cpp_CFileManager_ctor_FUN_004b53a0(CFileManager * this_ptr)
        ;   XREF to: 004b53a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0050886a
    MOV dword ptr [EAX + 0x138810],0x660d24 ; 0050886d | CFileManager_vtable g_CDemonFileManagerVTable
    RET                                 ; 00508877

