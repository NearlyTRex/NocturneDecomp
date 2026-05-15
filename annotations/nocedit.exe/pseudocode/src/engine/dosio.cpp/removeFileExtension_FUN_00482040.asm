; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_dosio_cpp_removeFileExtension_FUN_00482040(char *source_path)
;
; Parameters:
; char *           Stack[0x4]:4   source_path
;
; Called Functions:
;   engine_dosio.cpp_changeFileExtension_FUN_00482050
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 00482040
        ;   Label: engine_dosio.cpp_removeFileExtension_FUN_00482040
    MOV EDX,dword ptr [ESP + 0x8]       ; 00482042
    PUSH EDX                            ; 00482046
    CALL engine_dosio.cpp_changeFileExtension_FUN_00482050 ; 00482047
        ;   XREF to: 00482050 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_changeFileExtension_FUN_00482050(char * path, char * new_extension)
    ADD ESP,0x8                         ; 0048204c
    RET                                 ; 0048204f

