; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_ini_cpp_CIniFile_init_FUN_004fbaa0(char *dest,char *source)
;
; Parameters:
; char *           Stack[0x4]:4   dest
; char *           Stack[0x8]:4   source
;
; XREF[1]:
;   engine_ini.cpp_CIniFile_ctor_FUN_004fba70 at 004fba7b
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004fbaa0
        ;   Label: engine_ini.cpp_CIniFile_init_FUN_004fbaa0
    PUSH EDI                            ; 004fbaa1
    MOV EDI,dword ptr [ESP + 0xc]       ; 004fbaa2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004fbaa6
    TEST ESI,ESI                        ; 004fbaaa
    JNZ 0x004fbab4                      ; 004fbaac
        ;   XREF to: 004fbab4 (CONDITIONAL_JUMP)  ; LAB_004fbab4
    MOV byte ptr [EDI],0x0              ; 004fbaae
    POP EDI                             ; 004fbab1
    POP ESI                             ; 004fbab2
    RET                                 ; 004fbab3
    PUSH EDI                            ; 004fbab4
        ;   Label: LAB_004fbab4
    MOV AL,byte ptr [ESI]               ; 004fbab5
        ;   Label: LAB_004fbab5
    MOV byte ptr [EDI],AL               ; 004fbab7
    CMP AL,0x0                          ; 004fbab9
    JZ 0x004fbacd                       ; 004fbabb
        ;   XREF to: 004fbacd (CONDITIONAL_JUMP)  ; LAB_004fbacd
    MOV AL,byte ptr [ESI + 0x1]         ; 004fbabd
    ADD ESI,0x2                         ; 004fbac0
    MOV byte ptr [EDI + 0x1],AL         ; 004fbac3
    ADD EDI,0x2                         ; 004fbac6
    CMP AL,0x0                          ; 004fbac9
    JNZ 0x004fbab5                      ; 004fbacb
        ;   XREF to: 004fbab5 (CONDITIONAL_JUMP)  ; LAB_004fbab5
    POP EDI                             ; 004fbacd
        ;   Label: LAB_004fbacd
    POP EDI                             ; 004fbace
    POP ESI                             ; 004fbacf
    RET                                 ; 004fbad0

