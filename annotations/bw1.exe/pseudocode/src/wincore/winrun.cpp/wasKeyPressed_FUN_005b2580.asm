; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_winrun_cpp_wasKeyPressed_FUN_005b2580(void)
;
;
; XREF[8]:
;   core_game.cpp_FUN_004d27b0 at 004d285f
;   core_game.cpp_FUN_004d77d0 at 004d7ba2
;   shape_edittool.cpp_FUN_00494690 at 00494aea
;   shape_edittool.cpp_FUN_004958d0 at 00495b33
;   shape_edittool.cpp_FUN_0049a9b0 at 0049aac0
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_00493d40 at 00493eee
;   shape_edittool.cpp_showTextInputDialog_FUN_00493720 at 004939c3
;   wincore_winvideo.cpp_FUN_005b4cd0 at 005b4fd7
;
; Referenced Globals:
;   undefined4 DAT_02c9a618
;   undefined4 DAT_02c9a61c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02c9a61c]      ; 005b2580 | DAT_02c9a61c
        ;   Label: wincore_winrun.cpp_wasKeyPressed_FUN_005b2580
    MOV EAX,[0x02c9a618]                ; 005b2586 | DAT_02c9a618
    CMP EAX,EDX                         ; 005b258b
    SETNZ AL                            ; 005b258d
    AND EAX,0xff                        ; 005b2590
    RET                                 ; 005b2595

