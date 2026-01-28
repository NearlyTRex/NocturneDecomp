; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_ini_cpp_CIniFile_readIniHeader_FUN_004fbae0(CIniFile *this_ptr,char *section)
;
; Parameters:
; CIniFile *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   section
;
; XREF[3]:
;   core_inivar.cpp_readIniData_FUN_004fbd90 at 004fc46a
;   core_inivar.cpp_writeIniData_FUN_004fc510 at 004fc6d1
;   engine_ini.cpp_CIniFile_ctor_FUN_004fba70 at 004fba89
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004fbae0
        ;   Label: engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0
    PUSH EDI                            ; 004fbae1
    MOV EDI,dword ptr [ESP + 0xc]       ; 004fbae2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004fbae6
    TEST ESI,ESI                        ; 004fbaea
    JNZ 0x004fbaf8                      ; 004fbaec
        ;   XREF to: 004fbaf8 (CONDITIONAL_JUMP)  ; LAB_004fbaf8
    MOV byte ptr [EDI + 0x100],0x0      ; 004fbaee
    POP EDI                             ; 004fbaf5
    POP ESI                             ; 004fbaf6
    RET                                 ; 004fbaf7
    ADD EDI,0x100                       ; 004fbaf8
        ;   Label: LAB_004fbaf8
    PUSH EDI                            ; 004fbafe
    MOV AL,byte ptr [ESI]               ; 004fbaff
        ;   Label: LAB_004fbaff
    MOV byte ptr [EDI],AL               ; 004fbb01
    CMP AL,0x0                          ; 004fbb03
    JZ 0x004fbb17                       ; 004fbb05
        ;   XREF to: 004fbb17 (CONDITIONAL_JUMP)  ; LAB_004fbb17
    MOV AL,byte ptr [ESI + 0x1]         ; 004fbb07
    ADD ESI,0x2                         ; 004fbb0a
    MOV byte ptr [EDI + 0x1],AL         ; 004fbb0d
    ADD EDI,0x2                         ; 004fbb10
    CMP AL,0x0                          ; 004fbb13
    JNZ 0x004fbaff                      ; 004fbb15
        ;   XREF to: 004fbaff (CONDITIONAL_JUMP)  ; LAB_004fbaff
    POP EDI                             ; 004fbb17
        ;   Label: LAB_004fbb17
    POP EDI                             ; 004fbb18
    POP ESI                             ; 004fbb19
    RET                                 ; 004fbb1a

