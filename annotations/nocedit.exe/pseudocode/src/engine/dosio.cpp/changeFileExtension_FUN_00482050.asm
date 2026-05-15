; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_dosio_cpp_changeFileExtension_FUN_00482050(char *path,char *new_extension)
;
; Parameters:
; char *           Stack[0x4]:4   path
; char *           Stack[0x8]:4   new_extension
; Local Variables:
; char[256]        Stack[-0x208]:256  local_208
; char[256]        Stack[-0x108]:256  local_108
; char[4]          Stack[-0x8]:4  local_8
;
; XREF[1]:
;   engine_dosio.cpp_removeFileExtension_FUN_00482040 at 00482047
;
; Called Functions:
;   engine_dosio.cpp_makePath_FUN_00481f50
;   engine_dosio.cpp_splitPath_FUN_00481f20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00482050
        ;   Label: engine_dosio.cpp_changeFileExtension_FUN_00482050
    SUB ESP,0x204                       ; 00482051
    PUSH 0x0                            ; 00482057
    LEA EAX,[ESP + 0x4]                 ; 00482059
    PUSH EAX                            ; 0048205d
    LEA EAX,[ESP + 0x108]               ; 0048205e
    PUSH EAX                            ; 00482065
    LEA EAX,[ESP + 0x20c]               ; 00482066
    PUSH EAX                            ; 0048206d
    MOV EDX,dword ptr [ESP + 0x21c]     ; 0048206e
    PUSH EDX                            ; 00482075
    CALL engine_dosio.cpp_splitPath_FUN_00481f20 ; 00482076
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0048207b
    MOV ECX,dword ptr [ESP + 0x210]     ; 0048207e
    PUSH ECX                            ; 00482085
    LEA EAX,[ESP + 0x4]                 ; 00482086
    PUSH EAX                            ; 0048208a
    LEA EAX,[ESP + 0x108]               ; 0048208b
    PUSH EAX                            ; 00482092
    LEA EAX,[ESP + 0x20c]               ; 00482093
    PUSH EAX                            ; 0048209a
    MOV EBX,dword ptr [ESP + 0x21c]     ; 0048209b
    PUSH EBX                            ; 004820a2
    CALL engine_dosio.cpp_makePath_FUN_00481f50 ; 004820a3
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004820a8
    ADD ESP,0x204                       ; 004820ab
    POP EBX                             ; 004820b1
    RET                                 ; 004820b2

