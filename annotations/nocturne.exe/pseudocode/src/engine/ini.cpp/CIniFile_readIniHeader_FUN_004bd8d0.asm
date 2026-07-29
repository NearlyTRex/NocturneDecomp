; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_ini_cpp_CIniFile_readIniHeader_FUN_004bd8d0(CIniFile *this_ptr,char *section)
;
; Parameters:
; CIniFile *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   section
;
; XREF[3]:
;   core_inivar.cpp_FUN_004bdb80 at 004bdbc2
;   core_inivar.cpp_writeIniData_FUN_004be2d0 at 004be2f8
;   engine_ini.cpp_CIniFile_ctor_FUN_004bd860 at 004bd879
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004bd8d0
        ;   Label: engine_ini.cpp_CIniFile_readIniHeader_FUN_004bd8d0
    PUSH EDI                            ; 004bd8d1
    MOV EDI,dword ptr [ESP + 0xc]       ; 004bd8d2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004bd8d6
    TEST ESI,ESI                        ; 004bd8da
    JNZ 0x004bd8e8                      ; 004bd8dc
        ;   XREF to: 004bd8e8 (CONDITIONAL_JUMP)  ; LAB_004bd8e8
    MOV byte ptr [EDI + 0x100],0x0      ; 004bd8de
    POP EDI                             ; 004bd8e5
    POP ESI                             ; 004bd8e6
    RET                                 ; 004bd8e7
    ADD EDI,0x100                       ; 004bd8e8
        ;   Label: LAB_004bd8e8
    PUSH EDI                            ; 004bd8ee
    MOV AL,byte ptr [ESI]               ; 004bd8ef
        ;   Label: LAB_004bd8ef
    MOV byte ptr [EDI],AL               ; 004bd8f1
    CMP AL,0x0                          ; 004bd8f3
    JZ 0x004bd907                       ; 004bd8f5
        ;   XREF to: 004bd907 (CONDITIONAL_JUMP)  ; LAB_004bd907
    MOV AL,byte ptr [ESI + 0x1]         ; 004bd8f7
    ADD ESI,0x2                         ; 004bd8fa
    MOV byte ptr [EDI + 0x1],AL         ; 004bd8fd
    ADD EDI,0x2                         ; 004bd900
    CMP AL,0x0                          ; 004bd903
    JNZ 0x004bd8ef                      ; 004bd905
        ;   XREF to: 004bd8ef (CONDITIONAL_JUMP)  ; LAB_004bd8ef
    POP EDI                             ; 004bd907
        ;   Label: LAB_004bd907
    POP EDI                             ; 004bd908
    POP ESI                             ; 004bd909
    RET                                 ; 004bd90a

