; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonFileManager * __cdecl core_fileman_cpp_CDemonFileManager_dtor_FUN_00508880(CDemonFileManager *this_ptr,uint flags)
;
; Parameters:
; CDemonFileManager * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   engine_fileio.cpp_CFileManager_dtor_FUN_004b53d0
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00508880
        ;   Label: core_fileman.cpp_CDemonFileManager_dtor_FUN_00508880
    MOV EDX,dword ptr [ESP + 0x8]       ; 00508882
    PUSH EDX                            ; 00508886
    CALL engine_fileio.cpp_CFileManager_dtor_FUN_004b53d0 ; 00508887
        ;   XREF to: 004b53d0 (UNCONDITIONAL_CALL)  ; CFileManager * engine_fileio.cpp_CFileManager_dtor_FUN_004b53d0(CFileManager * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0050888c
    RET                                 ; 0050888f

