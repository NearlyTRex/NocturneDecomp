; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_ini_cpp_initIniFile_FUN_004d8aa0(char *dest,char *source)
;
; Parameters:
; char *           Stack[0x4]:4   dest
; char *           Stack[0x8]:4   source
;
; XREF[1]:
;   engine_ini.cpp_FUN_004d8a20 at 004d8a35
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004d8aa0
        ;   Label: engine_ini.cpp_initIniFile_FUN_004d8aa0
    PUSH EDI                            ; 004d8aa1
    MOV EDI,dword ptr [ESP + 0xc]       ; 004d8aa2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004d8aa6
    TEST ESI,ESI                        ; 004d8aaa
    JNZ 0x004d8ab4                      ; 004d8aac
        ;   XREF to: 004d8ab4 (CONDITIONAL_JUMP)  ; LAB_004d8ab4
    MOV byte ptr [EDI],0x0              ; 004d8aae
    POP EDI                             ; 004d8ab1
    POP ESI                             ; 004d8ab2
    RET                                 ; 004d8ab3
    PUSH EDI                            ; 004d8ab4
        ;   Label: LAB_004d8ab4
    MOV AL,byte ptr [ESI]               ; 004d8ab5
        ;   Label: LAB_004d8ab5
    MOV byte ptr [EDI],AL               ; 004d8ab7
    CMP AL,0x0                          ; 004d8ab9
    JZ 0x004d8acd                       ; 004d8abb
        ;   XREF to: 004d8acd (CONDITIONAL_JUMP)  ; LAB_004d8acd
    MOV AL,byte ptr [ESI + 0x1]         ; 004d8abd
    ADD ESI,0x2                         ; 004d8ac0
    MOV byte ptr [EDI + 0x1],AL         ; 004d8ac3
    ADD EDI,0x2                         ; 004d8ac6
    CMP AL,0x0                          ; 004d8ac9
    JNZ 0x004d8ab5                      ; 004d8acb
        ;   XREF to: 004d8ab5 (CONDITIONAL_JUMP)  ; LAB_004d8ab5
    POP EDI                             ; 004d8acd
        ;   Label: LAB_004d8acd
    POP EDI                             ; 004d8ace
    POP ESI                             ; 004d8acf
    RET                                 ; 004d8ad0

