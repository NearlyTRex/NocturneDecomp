; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_dosio_cpp_getFileSize_FUN_004657f0(char *directory,char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   directory
; char *           Stack[0x8]:4   filename
; Local Variables:
; undefined        Stack[-0x214]:1  local_214
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[23]:
;   cockpit_pkbmpset.cpp_FUN_00510810 at 0051083e
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044c130 at 0044c34c
;   core_dfilter.cpp_CDemonFilter_load_FUN_00459980 at 004599bb
;   core_event.cpp_FUN_0048c2e0 at 0048d5ab
;   core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004aa810 at 004aa887
;   core_game.cpp_FUN_004bec20 at 004bec5b
;   core_script.cpp_CScript_dbLoad_FUN_00530610 at 00530633
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052b4d5
;   core_script.cpp_FUN_00529410 at 00529437
;   engine_font.cpp_CBitFont_loadBitmap_FUN_004af920 at 004af9ac
;   ... and 13 more
;
; Called Functions:
;   engine_dosio.cpp_findFile_FUN_004656d0
;   engine_dosio.cpp_FUN_00465660
;
; *****************************************************************************

section .text

    SUB ESP,0x214                       ; 004657f0
        ;   Label: engine_dosio.cpp_getFileSize_FUN_004657f0
    MOV EDX,dword ptr [ESP + 0x21c]     ; 004657f6
    PUSH EDX                            ; 004657fd
    MOV ECX,dword ptr [ESP + 0x21c]     ; 004657fe
    PUSH ECX                            ; 00465805
    LEA EAX,[ESP + 0x8]                 ; 00465806
    PUSH EAX                            ; 0046580a
    CALL engine_dosio.cpp_FUN_00465660  ; 0046580b
        ;   XREF to: 00465660 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_FUN_00465660()
    ADD ESP,0xc                         ; 00465810
    MOV EAX,ESP                         ; 00465813
    PUSH EAX                            ; 00465815
    CALL engine_dosio.cpp_findFile_FUN_004656d0 ; 00465816
        ;   XREF to: 004656d0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_findFile_FUN_004656d0(SFoundFileInfo * context)
    ADD ESP,0x4                         ; 0046581b
    TEST EAX,EAX                        ; 0046581e
    JZ 0x00465830                       ; 00465820
        ;   XREF to: 00465830 (CONDITIONAL_JUMP)  ; LAB_00465830
    MOV EAX,dword ptr [ESP + 0x204]     ; 00465822
    ADD ESP,0x214                       ; 00465829
    RET                                 ; 0046582f
    MOV EAX,0xffffffff                  ; 00465830
        ;   Label: LAB_00465830
    ADD ESP,0x214                       ; 00465835
    RET                                 ; 0046583b

