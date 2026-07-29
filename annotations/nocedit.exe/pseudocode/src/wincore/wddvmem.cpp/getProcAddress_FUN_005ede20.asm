; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; FARPROC __cdecl wincore_wddvmem_cpp_getProcAddress_FUN_005ede20(HMODULE hModule,LPCSTR lpProcName)
;
; Parameters:
; HMODULE          Stack[0x4]:4   hModule
; LPCSTR           Stack[0x8]:4   lpProcName
;
; XREF[2]:
;   engine_special.cpp_initializeExternalRenderer_FUN_005b5ec0 at 005b5ef6
;   engine_special.cpp_loadExternalRenderer_FUN_005b6750 at 005b6ac0
;
; Referenced Globals:
;   GET_PROC_ADDRESS_FUNC* g_GetProcAddressFunc = 00211f8e
;
; Called Functions:
;   GetProcAddress
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005ede20
        ;   Label: wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
    PUSH EDX                            ; 005ede24
    MOV ECX,dword ptr [ESP + 0x8]       ; 005ede25
    PUSH ECX                            ; 005ede29
    CALL dword ptr CS:[0x6115bc]        ; 005ede2a | g_GetProcAddressFunc
    RET                                 ; 005ede31

