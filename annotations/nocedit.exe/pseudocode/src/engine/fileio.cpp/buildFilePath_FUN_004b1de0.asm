; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_fileio_cpp_buildFilePath_FUN_004b1de0(char *base_dir,char *filename,char *dest_path)
;
; Parameters:
; char *           Stack[0x4]:4   base_dir
; char *           Stack[0x8]:4   filename
; char *           Stack[0xc]:4   dest_path
; Local Variables:
; char[256]        Stack[-0x10c]:256  local_10c
; char[4]          Stack[-0xc]:4  local_c
;
; Called Functions:
;   engine_dosio.cpp_ensureTrailingSlash_FUN_00481f80
;   engine_dosio.cpp_makePath_FUN_00481f50
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004b1de0
        ;   Label: engine_fileio.cpp_buildFilePath_FUN_004b1de0
    PUSH EDI                            ; 004b1de1
    SUB ESP,0x104                       ; 004b1de2
    MOV EDI,dword ptr [ESP + 0x118]     ; 004b1de8
    MOV EAX,ESP                         ; 004b1def
    PUSH EAX                            ; 004b1df1
    LEA EAX,[ESP + 0x104]               ; 004b1df2
    PUSH EAX                            ; 004b1df9
    MOV EDX,dword ptr [ESP + 0x118]     ; 004b1dfa
    PUSH EDX                            ; 004b1e01
    CALL engine_dosio.cpp_ensureTrailingSlash_FUN_00481f80 ; 004b1e02
        ;   XREF to: 00481f80 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_ensureTrailingSlash_FUN_00481f80(char * input_path, char * drive, char * output_path)
    ADD ESP,0xc                         ; 004b1e07
    PUSH 0x0                            ; 004b1e0a
    PUSH 0x0                            ; 004b1e0c
    LEA EAX,[ESP + 0x8]                 ; 004b1e0e
    PUSH EAX                            ; 004b1e12
    LEA EAX,[ESP + 0x10c]               ; 004b1e13
    PUSH EAX                            ; 004b1e1a
    PUSH EDI                            ; 004b1e1b
    CALL engine_dosio.cpp_makePath_FUN_00481f50 ; 004b1e1c
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004b1e21
    MOV ESI,dword ptr [ESP + 0x114]     ; 004b1e24
    PUSH EDI                            ; 004b1e2b
    SUB ECX,ECX                         ; 004b1e2c
    DEC ECX                             ; 004b1e2e
    MOV AL,0x0                          ; 004b1e2f
    SCASB.REPNE ES:EDI                  ; 004b1e31
    DEC EDI                             ; 004b1e33
    MOV AL,byte ptr [ESI]               ; 004b1e34
        ;   Label: LAB_004b1e34
    MOV byte ptr [EDI],AL               ; 004b1e36
    CMP AL,0x0                          ; 004b1e38
    JZ 0x004b1e4c                       ; 004b1e3a
        ;   XREF to: 004b1e4c (CONDITIONAL_JUMP)  ; LAB_004b1e4c
    MOV AL,byte ptr [ESI + 0x1]         ; 004b1e3c
    ADD ESI,0x2                         ; 004b1e3f
    MOV byte ptr [EDI + 0x1],AL         ; 004b1e42
    ADD EDI,0x2                         ; 004b1e45
    CMP AL,0x0                          ; 004b1e48
    JNZ 0x004b1e34                      ; 004b1e4a
        ;   XREF to: 004b1e34 (CONDITIONAL_JUMP)  ; LAB_004b1e34
    POP EDI                             ; 004b1e4c
        ;   Label: LAB_004b1e4c
    ADD ESP,0x104                       ; 004b1e4d
    POP EDI                             ; 004b1e53
    POP ESI                             ; 004b1e54
    RET                                 ; 004b1e55

