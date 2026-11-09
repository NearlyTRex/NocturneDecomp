; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_ini_cpp_initIniFile_FUN_004f4b80(char *dest,char *source)
;
; Parameters:
; char *           Stack[0x4]:4   dest
; char *           Stack[0x8]:4   source
;
; XREF[1]:
;   engine_ini.cpp_FUN_004f4b00 at 004f4b15
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004f4b80
        ;   Label: engine_ini.cpp_initIniFile_FUN_004f4b80
    PUSH EDI                            ; 004f4b81
    MOV EDI,dword ptr [ESP + 0xc]       ; 004f4b82
    MOV ESI,dword ptr [ESP + 0x10]      ; 004f4b86
    TEST ESI,ESI                        ; 004f4b8a
    JNZ 0x004f4b94                      ; 004f4b8c
        ;   XREF to: 004f4b94 (CONDITIONAL_JUMP)  ; LAB_004f4b94
    MOV byte ptr [EDI],0x0              ; 004f4b8e
    POP EDI                             ; 004f4b91
    POP ESI                             ; 004f4b92
    RET                                 ; 004f4b93
    PUSH EDI                            ; 004f4b94
        ;   Label: LAB_004f4b94
    MOV AL,byte ptr [ESI]               ; 004f4b95
        ;   Label: LAB_004f4b95
    MOV byte ptr [EDI],AL               ; 004f4b97
    CMP AL,0x0                          ; 004f4b99
    JZ 0x004f4bad                       ; 004f4b9b
        ;   XREF to: 004f4bad (CONDITIONAL_JUMP)  ; LAB_004f4bad
    MOV AL,byte ptr [ESI + 0x1]         ; 004f4b9d
    ADD ESI,0x2                         ; 004f4ba0
    MOV byte ptr [EDI + 0x1],AL         ; 004f4ba3
    ADD EDI,0x2                         ; 004f4ba6
    CMP AL,0x0                          ; 004f4ba9
    JNZ 0x004f4b95                      ; 004f4bab
        ;   XREF to: 004f4b95 (CONDITIONAL_JUMP)  ; LAB_004f4b95
    POP EDI                             ; 004f4bad
        ;   Label: LAB_004f4bad
    POP EDI                             ; 004f4bae
    POP ESI                             ; 004f4baf
    RET                                 ; 004f4bb0

