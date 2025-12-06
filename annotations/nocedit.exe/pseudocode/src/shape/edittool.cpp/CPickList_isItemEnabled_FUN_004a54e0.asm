; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_edittool.cpp_CPickList_isItemEnabled_FUN_004a54e0(CPickList * this_ptr, int item_index)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   item_index
;
; XREF[3]:
;   shape_edittool.cpp_CPickList_handleDialogInput_FUN_004a4340 at 004a436a
;   shape_edittool.cpp_CPickList_handleInput_FUN_004a3f20 at 004a3f57
;   shape_edittool.cpp_CPickList_renderDialog_FUN_004a4d40 at 004a50c7
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_00623b2c
;   TerminatedCString s_CPickList_isItemEnabled__00623b42
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a54e0
        ;   Label: shape_edittool.cpp_CPickList_isItemEnabled_FUN_004a54e0
    PUSH ESI                            ; 004a54e1
    MOV ESI,dword ptr [ESP + 0xc]       ; 004a54e2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004a54e6
    TEST EBX,EBX                        ; 004a54ea
    JL 0x004a54f2                       ; 004a54ec | LAB_004a54f2
        ;   XREF to: 004a54f2 (CONDITIONAL_JUMP)
    CMP EBX,dword ptr [ESI]             ; 004a54ee
    JL 0x004a5517                       ; 004a54f0 | LAB_004a5517
        ;   XREF to: 004a5517 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 004a54f2
        ;   Label: LAB_004a54f2
    MOV ECX,0x623b2c                    ; 004a54f3 | = "..\\shape\\edittool.cpp" | s_shape_edittool_cpp_00623b2c = ..\shape\edittool.cpp
    MOV EDI,0x103d                      ; 004a54f8
    PUSH 0x623b42                       ; 004a54fd | = "CPickList::isItemEnabled - invalid index" | s_CPickList_isItemEnabled__00623b42 = CPickList::isItemEnabled - invalid index
    MOV dword ptr [0x02f0ca48],ECX      ; 004a5502 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 004a5508 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a550e | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004a5513
    POP EDI                             ; 004a5516
    CMP EBX,dword ptr [ESI + 0x194]     ; 004a5517
        ;   Label: LAB_004a5517
    JL 0x004a5527                       ; 004a551d | LAB_004a5527
        ;   XREF to: 004a5527 (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 004a551f
    POP ESI                             ; 004a5524
    POP EBX                             ; 004a5525
    RET                                 ; 004a5526
    MOV EAX,dword ptr [ESI + 0x198]     ; 004a5527
        ;   Label: LAB_004a5527
    CMP dword ptr [EAX + EBX*0x4],0x0   ; 004a552d
    SETNZ AL                            ; 004a5531
    AND EAX,0xff                        ; 004a5534
    POP ESI                             ; 004a5539
    POP EBX                             ; 004a553a
    RET                                 ; 004a553b

