; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_dosio.c_removeFileExtension_FUN_00482040(char * source_path, char * destination_buffer)
;
; Parameters:
; char *           Stack[0x4]:4   source_path
; char *           Stack[0x8]:4   destination_buffer
;
; Called Functions:
;   engine_dosio.c_changeFileExtension_FUN_00482050
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 00482040
        ;   Label: engine_dosio.c_removeFileExtension_FUN_00482040
    MOV EDX,dword ptr [ESP + 0x8]       ; 00482042
    PUSH EDX                            ; 00482046
    CALL engine_dosio.c_changeFileExtension_FUN_00482050 ; 00482047
        ;   XREF to: 00482050 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_changeFileExtension_FUN_00482050(char * source_path, char * destination_buffer, char * new_extension)
    ADD ESP,0x8                         ; 0048204c
    RET                                 ; 0048204f

