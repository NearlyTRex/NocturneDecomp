; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl HMODULE __cdecl wincore_wddvmem_cpp_loadLibrary_FUN_005ede10(LPCSTR lpLibFileName)
;
; Parameters:
; LPCSTR           Stack[0x4]:4   lpLibFileName
;
; XREF[2]:
;   wincore_windll.cpp_initializeExternalRenderer_FUN_005b5ec0 at 005b5ecf
;   wincore_windll.cpp_loadExternalRenderer_FUN_005b6750 at 005b678e
;
; Referenced Globals:
;   LoadLibraryA* g_LoadLibraryAFunc = 0021205c
;
; Called Functions:
;   LoadLibraryA
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005ede10
        ;   Label: wincore_wddvmem.cpp_loadLibrary_FUN_005ede10
    PUSH EDX                            ; 005ede14
    CALL dword ptr CS:[0x6115e8]        ; 005ede15 | g_LoadLibraryAFunc
    RET                                 ; 005ede1c

