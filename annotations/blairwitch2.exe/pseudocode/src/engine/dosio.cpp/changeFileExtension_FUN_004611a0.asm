; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_dosio_cpp_changeFileExtension_FUN_004611a0(char *path,char *new_extension)
;
; Parameters:
; char *           Stack[0x4]:4   path
; char *           Stack[0x8]:4   new_extension
; Local Variables:
; undefined        Stack[-0x208]:1  local_208
; undefined        Stack[-0x108]:1  local_108
; undefined        Stack[-0x8]:1  local_8
;
; XREF[2]:
;   core_fldnotes.cpp_FUN_004a41b0 at 004a4de8
;   engine_texture.cpp_CTextureCache_loadTexture_FUN_00573b80 at 00573cbd
;
; Called Functions:
;   engine_dosio.cpp_FUN_00461070
;   engine_dosio.cpp_FUN_004610a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004611a0
        ;   Label: engine_dosio.cpp_changeFileExtension_FUN_004611a0
    SUB ESP,0x204                       ; 004611a1
    PUSH 0x0                            ; 004611a7
    LEA EAX,[ESP + 0x4]                 ; 004611a9
    PUSH EAX                            ; 004611ad
    LEA EAX,[ESP + 0x108]               ; 004611ae
    PUSH EAX                            ; 004611b5
    LEA EAX,[ESP + 0x20c]               ; 004611b6
    PUSH EAX                            ; 004611bd
    MOV EDX,dword ptr [ESP + 0x21c]     ; 004611be
    PUSH EDX                            ; 004611c5
    CALL engine_dosio.cpp_FUN_00461070  ; 004611c6
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_00461070(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004611cb
    MOV ECX,dword ptr [ESP + 0x210]     ; 004611ce
    PUSH ECX                            ; 004611d5
    LEA EAX,[ESP + 0x4]                 ; 004611d6
    PUSH EAX                            ; 004611da
    LEA EAX,[ESP + 0x108]               ; 004611db
    PUSH EAX                            ; 004611e2
    LEA EAX,[ESP + 0x20c]               ; 004611e3
    PUSH EAX                            ; 004611ea
    MOV EBX,dword ptr [ESP + 0x21c]     ; 004611eb
    PUSH EBX                            ; 004611f2
    CALL engine_dosio.cpp_FUN_004610a0  ; 004611f3
        ;   XREF to: 004610a0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_004610a0(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004611f8
    ADD ESP,0x204                       ; 004611fb
    POP EBX                             ; 00461201
    RET                                 ; 00461202

