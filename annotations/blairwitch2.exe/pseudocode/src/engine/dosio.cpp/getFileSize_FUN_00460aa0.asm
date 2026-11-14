; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_dosio_cpp_getFileSize_FUN_00460aa0(char *directory,char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   directory
; char *           Stack[0x8]:4   filename
; Local Variables:
; undefined        Stack[-0x214]:1  local_214
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[23]:
;   cockpit_pkbmpset.cpp_FUN_005177e0 at 0051780e
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0043e930 at 0043eb4c
;   core_dfilter.cpp_CDemonFilter_load_FUN_004478d0 at 0044790b
;   core_event.cpp_FUN_00489670 at 0048a8c0
;   core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004a41b0 at 004a4225
;   core_game.cpp_FUN_004bcbf0 at 004bcc37
;   core_script.cpp_CScript_dbLoad_FUN_00529c10 at 00529c33
;   core_script.cpp_CScript_step_FUN_00522350 at 00523f39
;   core_script.cpp_FUN_00521cf0 at 00521d17
;   engine_font.cpp_CBitFont_loadBitmap_FUN_004a7d00 at 004a7d8c
;   ... and 13 more
;
; Called Functions:
;   engine_dosio.cpp_findFile_FUN_00460980
;   engine_dosio.cpp_FUN_00460910
;
; *****************************************************************************

section .text

    SUB ESP,0x214                       ; 00460aa0
        ;   Label: engine_dosio.cpp_getFileSize_FUN_00460aa0
    MOV EDX,dword ptr [ESP + 0x21c]     ; 00460aa6
    PUSH EDX                            ; 00460aad
    MOV ECX,dword ptr [ESP + 0x21c]     ; 00460aae
    PUSH ECX                            ; 00460ab5
    LEA EAX,[ESP + 0x8]                 ; 00460ab6
    PUSH EAX                            ; 00460aba
    CALL engine_dosio.cpp_FUN_00460910  ; 00460abb
        ;   XREF to: 00460910 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_FUN_00460910()
    ADD ESP,0xc                         ; 00460ac0
    MOV EAX,ESP                         ; 00460ac3
    PUSH EAX                            ; 00460ac5
    CALL engine_dosio.cpp_findFile_FUN_00460980 ; 00460ac6
        ;   XREF to: 00460980 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_findFile_FUN_00460980(SFoundFileInfo * context)
    ADD ESP,0x4                         ; 00460acb
    TEST EAX,EAX                        ; 00460ace
    JZ 0x00460ae0                       ; 00460ad0
        ;   XREF to: 00460ae0 (CONDITIONAL_JUMP)  ; LAB_00460ae0
    MOV EAX,dword ptr [ESP + 0x204]     ; 00460ad2
    ADD ESP,0x214                       ; 00460ad9
    RET                                 ; 00460adf
    MOV EAX,0xffffffff                  ; 00460ae0
        ;   Label: LAB_00460ae0
    ADD ESP,0x214                       ; 00460ae5
    RET                                 ; 00460aeb

