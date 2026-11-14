; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_ini_cpp_CIniFile_readIniHeader_FUN_004d8ae0(CIniFile *this_ptr,char *section)
;
; Parameters:
; CIniFile *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   section
;
; XREF[3]:
;   core_inivar.cpp_readIniData_FUN_004d8e70 at 004d8eb2
;   core_inivar.cpp_writeIniData_FUN_004d95c0 at 004d95e8
;   engine_ini.cpp_FUN_004d8a20 at 004d8a43
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004d8ae0
        ;   Label: engine_ini.cpp_CIniFile_readIniHeader_FUN_004d8ae0
    PUSH EDI                            ; 004d8ae1
    MOV EDI,dword ptr [ESP + 0xc]       ; 004d8ae2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004d8ae6
    TEST ESI,ESI                        ; 004d8aea
    JNZ 0x004d8af8                      ; 004d8aec
        ;   XREF to: 004d8af8 (CONDITIONAL_JUMP)  ; LAB_004d8af8
    MOV byte ptr [EDI + 0x100],0x0      ; 004d8aee
    POP EDI                             ; 004d8af5
    POP ESI                             ; 004d8af6
    RET                                 ; 004d8af7
    ADD EDI,0x100                       ; 004d8af8
        ;   Label: LAB_004d8af8
    PUSH EDI                            ; 004d8afe
    MOV AL,byte ptr [ESI]               ; 004d8aff
        ;   Label: LAB_004d8aff
    MOV byte ptr [EDI],AL               ; 004d8b01
    CMP AL,0x0                          ; 004d8b03
    JZ 0x004d8b17                       ; 004d8b05
        ;   XREF to: 004d8b17 (CONDITIONAL_JUMP)  ; LAB_004d8b17
    MOV AL,byte ptr [ESI + 0x1]         ; 004d8b07
    ADD ESI,0x2                         ; 004d8b0a
    MOV byte ptr [EDI + 0x1],AL         ; 004d8b0d
    ADD EDI,0x2                         ; 004d8b10
    CMP AL,0x0                          ; 004d8b13
    JNZ 0x004d8aff                      ; 004d8b15
        ;   XREF to: 004d8aff (CONDITIONAL_JUMP)  ; LAB_004d8aff
    POP EDI                             ; 004d8b17
        ;   Label: LAB_004d8b17
    POP EDI                             ; 004d8b18
    POP ESI                             ; 004d8b19
    RET                                 ; 004d8b1a

