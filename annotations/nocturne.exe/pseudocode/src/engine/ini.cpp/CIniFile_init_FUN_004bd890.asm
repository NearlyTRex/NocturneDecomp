; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_ini_cpp_CIniFile_init_FUN_004bd890(char *dest,char *source)
;
; Parameters:
; char *           Stack[0x4]:4   dest
; char *           Stack[0x8]:4   source
;
; XREF[1]:
;   engine_ini.cpp_CIniFile_ctor_FUN_004bd860 at 004bd86b
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004bd890
        ;   Label: engine_ini.cpp_CIniFile_init_FUN_004bd890
    PUSH EDI                            ; 004bd891
    MOV EDI,dword ptr [ESP + 0xc]       ; 004bd892
    MOV ESI,dword ptr [ESP + 0x10]      ; 004bd896
    TEST ESI,ESI                        ; 004bd89a
    JNZ 0x004bd8a4                      ; 004bd89c
        ;   XREF to: 004bd8a4 (CONDITIONAL_JUMP)  ; LAB_004bd8a4
    MOV byte ptr [EDI],0x0              ; 004bd89e
    POP EDI                             ; 004bd8a1
    POP ESI                             ; 004bd8a2
    RET                                 ; 004bd8a3
    PUSH EDI                            ; 004bd8a4
        ;   Label: LAB_004bd8a4
    MOV AL,byte ptr [ESI]               ; 004bd8a5
        ;   Label: LAB_004bd8a5
    MOV byte ptr [EDI],AL               ; 004bd8a7
    CMP AL,0x0                          ; 004bd8a9
    JZ 0x004bd8bd                       ; 004bd8ab
        ;   XREF to: 004bd8bd (CONDITIONAL_JUMP)  ; LAB_004bd8bd
    MOV AL,byte ptr [ESI + 0x1]         ; 004bd8ad
    ADD ESI,0x2                         ; 004bd8b0
    MOV byte ptr [EDI + 0x1],AL         ; 004bd8b3
    ADD EDI,0x2                         ; 004bd8b6
    CMP AL,0x0                          ; 004bd8b9
    JNZ 0x004bd8a5                      ; 004bd8bb
        ;   XREF to: 004bd8a5 (CONDITIONAL_JUMP)  ; LAB_004bd8a5
    POP EDI                             ; 004bd8bd
        ;   Label: LAB_004bd8bd
    POP EDI                             ; 004bd8be
    POP ESI                             ; 004bd8bf
    RET                                 ; 004bd8c0

