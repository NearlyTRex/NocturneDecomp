; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; FARPROC __cdecl wincore_wddvmem_cpp_getProcAddress_FUN_00553d40(HMODULE hModule,LPCSTR lpProcName)
;
; Parameters:
; HMODULE          Stack[0x4]:4   hModule
; LPCSTR           Stack[0x8]:4   lpProcName
;
; XREF[2]:
;   engine_special.cpp_initializeExternalRenderer_FUN_00530e60 at 00530e92
;   engine_special.cpp_loadExternalRenderer_FUN_00531780 at 005317e7
;
; Referenced Globals:
;   void* PTR_GetProcAddress_00575534 = 00175ddc
;
; Called Functions:
;   GetProcAddress
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00553d40
        ;   Label: wincore_wddvmem.cpp_getProcAddress_FUN_00553d40
    PUSH EDX                            ; 00553d44
    MOV ECX,dword ptr [ESP + 0x8]       ; 00553d45
    PUSH ECX                            ; 00553d49
    CALL dword ptr CS:[0x575534]        ; 00553d4a | PTR_GetProcAddress_00575534
    RET                                 ; 00553d51

