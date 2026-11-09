; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_ini_cpp_CIniFile_readIniHeader_FUN_004d89d0(CIniFile *this_ptr,char *section)
;
; Parameters:
; CIniFile *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   section
;
; XREF[3]:
;   core_inivar.cpp_FUN_004d8d60 at 004d8da2
;   core_inivar.cpp_FUN_004d94d0 at 004d94f8
;   engine_ini.cpp_FUN_004d8910 at 004d8933
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004d89d0
        ;   Label: engine_ini.cpp_CIniFile_readIniHeader_FUN_004d89d0
    PUSH EDI                            ; 004d89d1
    MOV EDI,dword ptr [ESP + 0xc]       ; 004d89d2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004d89d6
    TEST ESI,ESI                        ; 004d89da
    JNZ 0x004d89e8                      ; 004d89dc
        ;   XREF to: 004d89e8 (CONDITIONAL_JUMP)  ; LAB_004d89e8
    MOV byte ptr [EDI + 0x100],0x0      ; 004d89de
    POP EDI                             ; 004d89e5
    POP ESI                             ; 004d89e6
    RET                                 ; 004d89e7
    ADD EDI,0x100                       ; 004d89e8
        ;   Label: LAB_004d89e8
    PUSH EDI                            ; 004d89ee
    MOV AL,byte ptr [ESI]               ; 004d89ef
        ;   Label: LAB_004d89ef
    MOV byte ptr [EDI],AL               ; 004d89f1
    CMP AL,0x0                          ; 004d89f3
    JZ 0x004d8a07                       ; 004d89f5
        ;   XREF to: 004d8a07 (CONDITIONAL_JUMP)  ; LAB_004d8a07
    MOV AL,byte ptr [ESI + 0x1]         ; 004d89f7
    ADD ESI,0x2                         ; 004d89fa
    MOV byte ptr [EDI + 0x1],AL         ; 004d89fd
    ADD EDI,0x2                         ; 004d8a00
    CMP AL,0x0                          ; 004d8a03
    JNZ 0x004d89ef                      ; 004d8a05
        ;   XREF to: 004d89ef (CONDITIONAL_JUMP)  ; LAB_004d89ef
    POP EDI                             ; 004d8a07
        ;   Label: LAB_004d8a07
    POP EDI                             ; 004d8a08
    POP ESI                             ; 004d8a09
    RET                                 ; 004d8a0a

