; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_winrun_cpp_wasKeyPressed_FUN_00558b70(void)
;
;
; XREF[6]:
;   core_game.cpp_CGame_FUN_004a57c0 at 004a5b8e
;   core_game.cpp_CGame_processCheatCodes_FUN_004a0550 at 004a05ff
;   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_00470eb0 at 004710f9
;   shape_edittool.cpp_CPickList_handleInput_FUN_00474ea0 at 00474f0c
;   shape_edittool.cpp_showTextInputDialog_FUN_0046f7e0 at 0046f8ca
;   wincore_winvideo.cpp_playMovie_FUN_0055a510 at 0055a80c
;
; Referenced Globals:
;   undefined4 DAT_02de0848
;   undefined4 DAT_02de084c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02de084c]      ; 00558b70 | DAT_02de084c
        ;   Label: wincore_winrun.cpp_wasKeyPressed_FUN_00558b70
    MOV EAX,[0x02de0848]                ; 00558b76 | DAT_02de0848
    CMP EAX,EDX                         ; 00558b7b
    SETNZ AL                            ; 00558b7d
    AND EAX,0xff                        ; 00558b80
    RET                                 ; 00558b85

