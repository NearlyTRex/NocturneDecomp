; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPickList * __cdecl shape_edittool_cpp_CPickList_ctor_FUN_0049a620(CPickList *this_ptr)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
;
; XREF[11]:
;   core_game.cpp_CGame_runGameSession_FUN_004cf5e0 at 004cfc13
;   core_game.cpp_FUN_004d7250 at 004d75b7
;   core_game.cpp_staticInit_FUN_004cb7d0 at 004cb813
;   core_menu.cpp_FUN_0050ba70 at 0050c890
;   core_menu.cpp_FUN_0050d640 at 0050e5cf
;   core_mission.cpp_FUN_0051c240 at 0051c253
;   core_script.cpp_staticInit_FUN_005430c0 at 005430c5
;   core_sound.cpp_CSound_selectReverbPreset_FUN_0057db60 at 0057db6c
;   engine_pod.cpp_FUN_0053bfc0 at 0053c122
;   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_00494fd0 at 00494fe4
;   ... and 1 more
;
; Referenced Globals:
;   undefined4 DAT_005dc605
;   TerminatedCString s_Cancel_005dc608
;   undefined1* g_CPickListVTable = 0049a710
;
; Called Functions:
;   shape_edittool.cpp_CEdButton_ctor_FUN_0049d480
;   shape_edittool.cpp_CEdScrollBar_ctor_FUN_0049c970
;   shape_edittool.cpp_CStrList_ctor_FUN_00499380
;   support_newmsg.cpp_getLocalizedString_FUN_00531090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049a620
        ;   Label: shape_edittool.cpp_CPickList_ctor_FUN_0049a620
    PUSH ESI                            ; 0049a621
    PUSH EDI                            ; 0049a622
    MOV EBX,dword ptr [ESP + 0x10]      ; 0049a623
    PUSH EBX                            ; 0049a627
    CALL shape_edittool.cpp_CStrList_ctor_FUN_00499380 ; 0049a628
        ;   XREF to: 00499380 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_ctor_FUN_00499380(CStrList * this_ptr)
    ADD ESP,0x4                         ; 0049a62d
    ADD EAX,0x1bc                       ; 0049a630
    PUSH EAX                            ; 0049a635
    CALL shape_edittool.cpp_CEdScrollBar_ctor_FUN_0049c970 ; 0049a636
        ;   XREF to: 0049c970 (UNCONDITIONAL_CALL)  ; CEdScrollBar * shape_edittool.cpp_CEdScrollBar_ctor_FUN_0049c970(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 0049a63b
    ADD EAX,0x38                        ; 0049a63e
    PUSH EAX                            ; 0049a641
    CALL shape_edittool.cpp_CEdButton_ctor_FUN_0049d480 ; 0049a642
        ;   XREF to: 0049d480 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_ctor_FUN_0049d480(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 0049a647
    ADD EAX,0xe4                        ; 0049a64a
    PUSH EAX                            ; 0049a64f
    CALL shape_edittool.cpp_CEdButton_ctor_FUN_0049d480 ; 0049a650
        ;   XREF to: 0049d480 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_ctor_FUN_0049d480(CEdButton * this_ptr)
    LEA EBX,[EAX + 0xfffffd28]          ; 0049a655
    MOV dword ptr [EBX + 0xc],0x5ff834  ; 0049a65b | g_CPickListVTable
    MOV dword ptr [EBX + 0x1f0],0x0     ; 0049a662
    MOV dword ptr [EBX + 0x3bc],0xffffffff ; 0049a66c
    MOV dword ptr [EBX + 0x1ac],0x0     ; 0049a676
    MOV dword ptr [EBX + 0x1b0],0x0     ; 0049a680
    ADD ESP,0x4                         ; 0049a68a
    MOV dword ptr [EBX + 0x1b4],0x0     ; 0049a68d
    PUSH 0x5dc605                       ; 0049a697 | DAT_005dc605
    MOV dword ptr [EBX + 0x1b8],0x0     ; 0049a69c
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0049a6a6
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0049a6ab
    LEA EDI,[EBX + 0x5c]                ; 0049a6ae
    MOV ESI,EAX                         ; 0049a6b1
    PUSH EDI                            ; 0049a6b3
    MOV AL,byte ptr [ESI]               ; 0049a6b4
        ;   Label: LAB_0049a6b4
    MOV byte ptr [EDI],AL               ; 0049a6b6
    CMP AL,0x0                          ; 0049a6b8
    JZ 0x0049a6cc                       ; 0049a6ba
        ;   XREF to: 0049a6cc (CONDITIONAL_JUMP)  ; LAB_0049a6cc
    MOV AL,byte ptr [ESI + 0x1]         ; 0049a6bc
    ADD ESI,0x2                         ; 0049a6bf
    MOV byte ptr [EDI + 0x1],AL         ; 0049a6c2
    ADD EDI,0x2                         ; 0049a6c5
    CMP AL,0x0                          ; 0049a6c8
    JNZ 0x0049a6b4                      ; 0049a6ca
        ;   XREF to: 0049a6b4 (CONDITIONAL_JUMP)  ; LAB_0049a6b4
    POP EDI                             ; 0049a6cc
        ;   Label: LAB_0049a6cc
    PUSH 0x5dc608                       ; 0049a6cd | = "Cancel"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0049a6d2
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0049a6d7
    LEA EDI,[EBX + 0xc0]                ; 0049a6da
    MOV ESI,EAX                         ; 0049a6e0
    PUSH EDI                            ; 0049a6e2
    MOV AL,byte ptr [ESI]               ; 0049a6e3
        ;   Label: LAB_0049a6e3
    MOV byte ptr [EDI],AL               ; 0049a6e5
    CMP AL,0x0                          ; 0049a6e7
    JZ 0x0049a6fb                       ; 0049a6e9
        ;   XREF to: 0049a6fb (CONDITIONAL_JUMP)  ; LAB_0049a6fb
    MOV AL,byte ptr [ESI + 0x1]         ; 0049a6eb
    ADD ESI,0x2                         ; 0049a6ee
    MOV byte ptr [EDI + 0x1],AL         ; 0049a6f1
    ADD EDI,0x2                         ; 0049a6f4
    CMP AL,0x0                          ; 0049a6f7
    JNZ 0x0049a6e3                      ; 0049a6f9
        ;   XREF to: 0049a6e3 (CONDITIONAL_JUMP)  ; LAB_0049a6e3
    POP EDI                             ; 0049a6fb
        ;   Label: LAB_0049a6fb
    MOV dword ptr [EBX + 0x54],0xffffffff ; 0049a6fc
    MOV EAX,EBX                         ; 0049a703
    MOV dword ptr [EBX + 0x58],0x0      ; 0049a705
    POP EDI                             ; 0049a70c
    POP ESI                             ; 0049a70d
    POP EBX                             ; 0049a70e
    RET                                 ; 0049a70f

