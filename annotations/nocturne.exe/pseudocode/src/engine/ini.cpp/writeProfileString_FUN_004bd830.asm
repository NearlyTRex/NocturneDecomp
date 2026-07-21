; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_ini_cpp_writeProfileString_FUN_004bd830(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   engine_ini.cpp_CIniFile_setString_FUN_004bd9a0 at 004bd9c6
;
; Called Functions:
;   engine_ini.cpp_CIni_writeProfileString_FUN_004bd480
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bd830
        ;   Label: engine_ini.cpp_writeProfileString_FUN_004bd830
    PUSH ESI                            ; 004bd831
    MOV EDX,dword ptr [ESP + 0x18]      ; 004bd832
    PUSH EDX                            ; 004bd836
    MOV ECX,dword ptr [ESP + 0x18]      ; 004bd837
    PUSH ECX                            ; 004bd83b
    MOV EBX,dword ptr [ESP + 0x18]      ; 004bd83c
    PUSH EBX                            ; 004bd840
    MOV ESI,dword ptr [ESP + 0x18]      ; 004bd841
    PUSH ESI                            ; 004bd845
    PUSH 0x1cae378                      ; 004bd846
    CALL engine_ini.cpp_CIni_writeProfileString_FUN_004bd480 ; 004bd84b
        ;   XREF to: 004bd480 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIni_writeProfileString_FUN_004bd480()
    ADD ESP,0x14                        ; 004bd850
    POP ESI                             ; 004bd853
    POP EBX                             ; 004bd854
    RET                                 ; 004bd855

