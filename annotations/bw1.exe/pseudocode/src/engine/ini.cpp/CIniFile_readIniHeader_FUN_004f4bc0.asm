; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_ini_cpp_CIniFile_readIniHeader_FUN_004f4bc0(CIniFile *this_ptr,char *section)
;
; Parameters:
; CIniFile *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   section
;
; XREF[3]:
;   core_inivar.cpp_FUN_004f4f50 at 004f4f92
;   core_inivar.cpp_FUN_004f5760 at 004f5788
;   engine_ini.cpp_FUN_004f4b00 at 004f4b23
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004f4bc0
        ;   Label: engine_ini.cpp_CIniFile_readIniHeader_FUN_004f4bc0
    PUSH EDI                            ; 004f4bc1
    MOV EDI,dword ptr [ESP + 0xc]       ; 004f4bc2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004f4bc6
    TEST ESI,ESI                        ; 004f4bca
    JNZ 0x004f4bd8                      ; 004f4bcc
        ;   XREF to: 004f4bd8 (CONDITIONAL_JUMP)  ; LAB_004f4bd8
    MOV byte ptr [EDI + 0x100],0x0      ; 004f4bce
    POP EDI                             ; 004f4bd5
    POP ESI                             ; 004f4bd6
    RET                                 ; 004f4bd7
    ADD EDI,0x100                       ; 004f4bd8
        ;   Label: LAB_004f4bd8
    PUSH EDI                            ; 004f4bde
    MOV AL,byte ptr [ESI]               ; 004f4bdf
        ;   Label: LAB_004f4bdf
    MOV byte ptr [EDI],AL               ; 004f4be1
    CMP AL,0x0                          ; 004f4be3
    JZ 0x004f4bf7                       ; 004f4be5
        ;   XREF to: 004f4bf7 (CONDITIONAL_JUMP)  ; LAB_004f4bf7
    MOV AL,byte ptr [ESI + 0x1]         ; 004f4be7
    ADD ESI,0x2                         ; 004f4bea
    MOV byte ptr [EDI + 0x1],AL         ; 004f4bed
    ADD EDI,0x2                         ; 004f4bf0
    CMP AL,0x0                          ; 004f4bf3
    JNZ 0x004f4bdf                      ; 004f4bf5
        ;   XREF to: 004f4bdf (CONDITIONAL_JUMP)  ; LAB_004f4bdf
    POP EDI                             ; 004f4bf7
        ;   Label: LAB_004f4bf7
    POP EDI                             ; 004f4bf8
    POP ESI                             ; 004f4bf9
    RET                                 ; 004f4bfa

