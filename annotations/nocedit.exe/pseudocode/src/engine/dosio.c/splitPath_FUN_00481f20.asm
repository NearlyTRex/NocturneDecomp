; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, char * extension)
;
; Parameters:
; char *           Stack[0x4]:4   full_path
; char *           Stack[0x8]:4   drive
; char *           Stack[0xc]:4   directory
; char *           Stack[0x10]:4   filename
; char *           Stack[0x14]:4   extension
;
; XREF[33]:
;   core_msnedit.cpp_OpenAndCreateWorld_FUN_00537f60 at 00537fa1
;   core_setedit.cpp_CDemonSet_ExportSomething_FUN_0057a0c0 at 0057a0e6
;   core_setedit.cpp_CDemonSet_OpenAndProcessFileMaybe_FUN_00578a20 at 00578acb
;   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 at 005796b0
;   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 at 00584de3
;   core_setedit.cpp_DefineTexturesMaybe_FUN_00578290 at 005782ae
;   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 at 0057ecbf
;   core_setedit.cpp_DementedFogEditor_FUN_00580730 at 00580e77
;   core_setedit.cpp_EditingGroundTypesAndSaving_FUN_00578630 at 00578743
;   core_setedit.cpp_FUN_005781a0 at 005781be
;   ... and 23 more
;
; Called Functions:
;   crt_string.c_splitpath_FUN_005ff178
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481f20
        ;   Label: engine_dosio.c_splitPath_FUN_00481f20
    PUSH ESI                            ; 00481f21
    PUSH EDI                            ; 00481f22
    MOV EDX,dword ptr [ESP + 0x20]      ; 00481f23
    PUSH EDX                            ; 00481f27
    MOV ECX,dword ptr [ESP + 0x20]      ; 00481f28
    PUSH ECX                            ; 00481f2c
    MOV EBX,dword ptr [ESP + 0x20]      ; 00481f2d
    PUSH EBX                            ; 00481f31
    MOV ESI,dword ptr [ESP + 0x20]      ; 00481f32
    PUSH ESI                            ; 00481f36
    MOV EDI,dword ptr [ESP + 0x20]      ; 00481f37
    PUSH EDI                            ; 00481f3b
    CALL crt_string.c_splitpath_FUN_005ff178 ; 00481f3c | void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00481f41
    POP EDI                             ; 00481f44
    POP ESI                             ; 00481f45
    POP EBX                             ; 00481f46
    RET                                 ; 00481f47

