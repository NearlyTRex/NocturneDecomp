; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_dosio_cpp_FUN_00465e50(char *full_path,char *drive,char *directory,char *filename,char *extension)
;
; Parameters:
; char *           Stack[0x4]:4   full_path
; char *           Stack[0x8]:4   drive
; char *           Stack[0xc]:4   directory
; char *           Stack[0x10]:4   filename
; char *           Stack[0x14]:4   extension
;
; XREF[27]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_00491f40 at 00492f48
;   core_fldnotes.cpp_FUN_004a8680 at 004a86c1
;   core_fldnotes.cpp_FUN_004aa810 at 004ab331
;   core_fldnotes.cpp_FUN_004abe00 at 004ac378
;   core_game.cpp_FUN_004b6f30 at 004b7400
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052bb19
;   core_set.cpp_FUN_00532b80 at 00532fae
;   engine_dosio.cpp_FUN_00465eb0 at 00465ee2
;   engine_dosio.cpp_changeFileExtension_FUN_00465f80 at 00465fa6
;   engine_font.cpp_FUN_004af920 at 004afa66
;   ... and 17 more
;
; Called Functions:
;   crt_string.c_splitpath_FUN_005a5128
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00465e50
        ;   Label: engine_dosio.cpp_FUN_00465e50
    PUSH ESI                            ; 00465e51
    PUSH EDI                            ; 00465e52
    MOV EDX,dword ptr [ESP + 0x20]      ; 00465e53
    PUSH EDX                            ; 00465e57
    MOV ECX,dword ptr [ESP + 0x20]      ; 00465e58
    PUSH ECX                            ; 00465e5c
    MOV EBX,dword ptr [ESP + 0x20]      ; 00465e5d
    PUSH EBX                            ; 00465e61
    MOV ESI,dword ptr [ESP + 0x20]      ; 00465e62
    PUSH ESI                            ; 00465e66
    MOV EDI,dword ptr [ESP + 0x20]      ; 00465e67
    PUSH EDI                            ; 00465e6b
    CALL crt_string.c_splitpath_FUN_005a5128 ; 00465e6c
        ;   XREF to: 005a5128 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005a5128(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 00465e71
    POP EDI                             ; 00465e74
    POP ESI                             ; 00465e75
    POP EBX                             ; 00465e76
    RET                                 ; 00465e77

