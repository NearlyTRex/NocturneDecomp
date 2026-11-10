; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_dosio_cpp_getFileSize_FUN_00478fb0(char *directory,char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   directory
; char *           Stack[0x8]:4   filename
; Local Variables:
; undefined        Stack[-0x214]:1  local_214
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[22]:
;   cockpit_pkbmpset.cpp_FUN_00538b2e at 00538b5e
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044fff0 at 0045020c
;   core_dfilter.cpp_CDemonFilter_load_FUN_0045da30 at 0045da6b
;   core_event.cpp_FUN_004a1d00 at 004a2fc9
;   core_fldnotes.cpp_FUN_004bcba0 at 004bcc15
;   core_game.cpp_FUN_004d77d0 at 004d780b
;   core_script.cpp_CScript_dbLoad_FUN_0054af20 at 0054af43
;   core_script.cpp_CScript_step_FUN_00544460 at 00545dee
;   core_script.cpp_FUN_00543e00 at 00543e27
;   engine_font.cpp_CBitFont_loadBitmap_FUN_004c0cd0 at 004c0d5c
;   ... and 12 more
;
; Called Functions:
;   engine_dosio.cpp_findFile_FUN_00478e90
;   engine_dosio.cpp_FUN_00478e20
;
; *****************************************************************************

section .text

    SUB ESP,0x214                       ; 00478fb0
        ;   Label: engine_dosio.cpp_getFileSize_FUN_00478fb0
    MOV EDX,dword ptr [ESP + 0x21c]     ; 00478fb6
    PUSH EDX                            ; 00478fbd
    MOV ECX,dword ptr [ESP + 0x21c]     ; 00478fbe
    PUSH ECX                            ; 00478fc5
    LEA EAX,[ESP + 0x8]                 ; 00478fc6
    PUSH EAX                            ; 00478fca
    CALL engine_dosio.cpp_FUN_00478e20  ; 00478fcb
        ;   XREF to: 00478e20 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_FUN_00478e20()
    ADD ESP,0xc                         ; 00478fd0
    MOV EAX,ESP                         ; 00478fd3
    PUSH EAX                            ; 00478fd5
    CALL engine_dosio.cpp_findFile_FUN_00478e90 ; 00478fd6
        ;   XREF to: 00478e90 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_findFile_FUN_00478e90()
    ADD ESP,0x4                         ; 00478fdb
    TEST EAX,EAX                        ; 00478fde
    JZ 0x00478ff0                       ; 00478fe0
        ;   XREF to: 00478ff0 (CONDITIONAL_JUMP)  ; LAB_00478ff0
    MOV EAX,dword ptr [ESP + 0x204]     ; 00478fe2
    ADD ESP,0x214                       ; 00478fe9
    RET                                 ; 00478fef
    MOV EAX,0xffffffff                  ; 00478ff0
        ;   Label: LAB_00478ff0
    ADD ESP,0x214                       ; 00478ff5
    RET                                 ; 00478ffb

