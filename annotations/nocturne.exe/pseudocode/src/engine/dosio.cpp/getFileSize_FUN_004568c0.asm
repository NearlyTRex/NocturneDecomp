; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl engine_dosio_cpp_getFileSize_FUN_004568c0(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x214]:1  local_214
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[27]:
;   cockpit_pkbmpset.cpp_FUN_004f54c0 at 004f54ee
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_00443250 at 0044346c
;   core_dfilter.cpp_CDemonFilter_load_FUN_0044bf90 at 0044bfcb
;   core_event.cpp_CEventList_executeCommand_FUN_0047ac50 at 0047b3d4
;   core_game.cpp_FUN_004a3b90 at 004a3e2c
;   core_game.cpp_FUN_004a4170 at 004a43e2
;   core_game.cpp_FUN_004a57c0 at 004a57fb
;   core_menu.cpp_configureGraphicsOptions_FUN_004d0080 at 004d0136
;   core_script.cpp_CScript_dbLoad_FUN_00504e70 at 00504e93
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 00500872
;   ... and 17 more
;
; Called Functions:
;   engine_dosio.cpp_findFile_FUN_004567a0
;   engine_dosio.cpp_getRelativeFilePath_FUN_00456700
;
; *****************************************************************************

section .text

    SUB ESP,0x214                       ; 004568c0
        ;   Label: engine_dosio.cpp_getFileSize_FUN_004568c0
    MOV EDX,dword ptr [ESP + 0x21c]     ; 004568c6
    PUSH EDX                            ; 004568cd
    MOV ECX,dword ptr [ESP + 0x21c]     ; 004568ce
    PUSH ECX                            ; 004568d5
    LEA EAX,[ESP + 0x8]                 ; 004568d6
    PUSH EAX                            ; 004568da
    CALL engine_dosio.cpp_getRelativeFilePath_FUN_00456700 ; 004568db
        ;   XREF to: 00456700 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getRelativeFilePath_FUN_00456700()
    ADD ESP,0xc                         ; 004568e0
    MOV EAX,ESP                         ; 004568e3
    PUSH EAX                            ; 004568e5
    CALL engine_dosio.cpp_findFile_FUN_004567a0 ; 004568e6
        ;   XREF to: 004567a0 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_findFile_FUN_004567a0()
    ADD ESP,0x4                         ; 004568eb
    TEST EAX,EAX                        ; 004568ee
    JZ 0x00456900                       ; 004568f0
        ;   XREF to: 00456900 (CONDITIONAL_JUMP)  ; LAB_00456900
    MOV EAX,dword ptr [ESP + 0x204]     ; 004568f2
    ADD ESP,0x214                       ; 004568f9
    RET                                 ; 004568ff
    MOV EAX,0xffffffff                  ; 00456900
        ;   Label: LAB_00456900
    ADD ESP,0x214                       ; 00456905
    RET                                 ; 0045690b

