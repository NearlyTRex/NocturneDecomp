; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_0049a8b0(CPickList *this_ptr,char *dialog_title,int initial_selected_index,uint window_flags)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   dialog_title
; int              Stack[0xc]:4   initial_selected_index
; uint             Stack[0x10]:4   window_flags
;
; XREF[9]:
;   core_game.cpp_CGame_runGameSession_FUN_004cf5e0 at 004cfc6f
;   core_game.cpp_FUN_004d7250 at 004d75ef
;   core_menu.cpp_FUN_0050ba70 at 0050c8dc
;   core_menu.cpp_FUN_0050d640 at 0050e6a2
;   core_mission.cpp_FUN_0051c240 at 0051c2bf
;   core_sound.cpp_CSound_selectReverbPreset_FUN_0057db60 at 0057dbac
;   engine_pod.cpp_FUN_0053bfc0 at 0053c211
;   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_00494fd0 at 004950b7
;   shape_edittool.cpp_FUN_00495180 at 004953fe
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005dbc68
;   TerminatedCString s_gEdFont_must_be_set_by_t_005dbc7e
;   CEditorTools* g_CEditorToolsPtr = 01c3eb54
;   undefined4 DAT_0061b4ac
;   undefined4 DAT_01c3eb50
;   undefined4 DAT_01c3f538
;   undefined4 DAT_01c3f53c
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   engine_2d.c_clearInputAndWait_FUN_004032b0
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510
;   shape_edittool.cpp_CPickList_handleDialogInput_FUN_0049add0
;   shape_edittool.cpp_CPickList_initializeDialog_FUN_0049a980
;   shape_edittool.cpp_CPickList_renderDialog_FUN_0049b830
;   shape_edittool.cpp_FUN_00496dd0
;   wincore_wddvmem.cpp_swapBuffers_FUN_005acff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049a8b0
        ;   Label: shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_0049a8b0
    PUSH ESI                            ; 0049a8b1
    PUSH EDI                            ; 0049a8b2
    PUSH EBP                            ; 0049a8b3
    MOV ESI,dword ptr [ESP + 0x14]      ; 0049a8b4
    CMP dword ptr [0x01c3eb50],0x0      ; 0049a8b8 | DAT_01c3eb50
    JNZ 0x0049a8e4                      ; 0049a8bf
        ;   XREF to: 0049a8e4 (CONDITIONAL_JUMP)  ; LAB_0049a8e4
    MOV ECX,0x5dbc68                    ; 0049a8c1 | = "..\\shape\\edittool.cpp"
    MOV EBX,0xa4                        ; 0049a8c6
    PUSH 0x5dbc7e                       ; 0049a8cb | = "gEdFont must be set by the application."
    MOV dword ptr [0x01d1d400],ECX      ; 0049a8d0 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 0049a8d6 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0049a8dc
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0049a8e1
    MOV EAX,[0x01c3eb50]                ; 0049a8e4 | DAT_01c3eb50
        ;   Label: LAB_0049a8e4
    PUSH 0x6a                           ; 0049a8e9
    MOV EBX,dword ptr [EAX + 0x41e8]    ; 0049a8eb
    PUSH EAX                            ; 0049a8f1
    MOV dword ptr [0x01c3f538],EBX      ; 0049a8f2 | DAT_01c3f538
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510 ; 0049a8f8
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 0049a8fd
    MOV EDI,dword ptr [ESI]             ; 0049a900
    MOV [0x01c3f53c],EAX                ; 0049a902 | DAT_01c3f53c
    CMP EDI,0x1                         ; 0049a907
    JL 0x0049a974                       ; 0049a90a
        ;   XREF to: 0049a974 (CONDITIONAL_JUMP)  ; LAB_0049a974
    MOV EAX,dword ptr [ESP + 0x20]      ; 0049a90c
    PUSH EAX                            ; 0049a910
    MOV EDX,dword ptr [ESP + 0x20]      ; 0049a911
    PUSH EDX                            ; 0049a915
    MOV ECX,dword ptr [ESP + 0x20]      ; 0049a916
    PUSH ECX                            ; 0049a91a
    MOV EBP,0x7f                        ; 0049a91b
    PUSH ESI                            ; 0049a920
    MOV EDI,dword ptr [0x0061b4ac]      ; 0049a921 | DAT_0061b4ac
    MOV dword ptr [0x0061b4ac],EBP      ; 0049a927 | DAT_0061b4ac
    CALL shape_edittool.cpp_CPickList_initializeDialog_FUN_0049a980 ; 0049a92d
        ;   XREF to: 0049a980 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_initializeDialog_FUN_0049a980(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 0049a932
    PUSH ESI                            ; 0049a935
        ;   Label: LAB_0049a935
    CALL shape_edittool.cpp_CPickList_handleDialogInput_FUN_0049add0 ; 0049a936
        ;   XREF to: 0049add0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_handleDialogInput_FUN_0049add0(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0049a93b
    PUSH ESI                            ; 0049a93e
    MOV EBX,EAX                         ; 0049a93f
    CALL shape_edittool.cpp_CPickList_renderDialog_FUN_0049b830 ; 0049a941
        ;   XREF to: 0049b830 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_renderDialog_FUN_0049b830(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0049a946
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005acff0 ; 0049a949
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005acff0()
    CMP EBX,-0x2                        ; 0049a94e
    JZ 0x0049a935                       ; 0049a951
        ;   XREF to: 0049a935 (CONDITIONAL_JUMP)  ; LAB_0049a935
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 0049a953
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    MOV ESI,dword ptr [0x0061abc0]      ; 0049a958 | g_CEditorToolsPtr
    PUSH ESI                            ; 0049a95e
    CALL shape_edittool.cpp_FUN_00496dd0 ; 0049a95f
        ;   XREF to: 00496dd0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00496dd0()
    ADD ESP,0x4                         ; 0049a964
    MOV dword ptr [0x0061b4ac],EDI      ; 0049a967 | DAT_0061b4ac
    MOV EAX,EBX                         ; 0049a96d
    POP EBP                             ; 0049a96f
    POP EDI                             ; 0049a970
    POP ESI                             ; 0049a971
    POP EBX                             ; 0049a972
    RET                                 ; 0049a973
    MOV EAX,0xffffffff                  ; 0049a974
        ;   Label: LAB_0049a974
    POP EBP                             ; 0049a979
    POP EDI                             ; 0049a97a
    POP ESI                             ; 0049a97b
    POP EBX                             ; 0049a97c
    RET                                 ; 0049a97d

