; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_edittool.cpp_CPickList_initializeDialog_FUN_004a3ef0(CPickList * this_ptr, char * dialog_title, int initial_selected_index, int config_parameter)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   dialog_title
; int              Stack[0xc]:4   initial_selected_index
; int              Stack[0x10]:4   config_parameter
;
; XREF[2]:
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004dba62
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 at 004a3e9d
;
; Called Functions:
;   shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_004a45d0
;   shape_edittool.cpp_CPickList_validateScrollBounds_FUN_004a5240
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3ef0
        ;   Label: shape_edittool.cpp_CPickList_initializeDialog_FUN_004a3ef0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a3ef1
    MOV EDX,dword ptr [ESP + 0x14]      ; 004a3ef5
    PUSH EDX                            ; 004a3ef9
    MOV ECX,dword ptr [ESP + 0x10]      ; 004a3efa
    PUSH ECX                            ; 004a3efe
    PUSH EBX                            ; 004a3eff
    CALL shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_004a45d0 ; 004a3f00 | void shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_004a45d0(CPickList * this_ptr, char * dialog_title, int config_parameter)
        ;   XREF to: 004a45d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004a3f05
    MOV EAX,dword ptr [ESP + 0x10]      ; 004a3f08
    PUSH EBX                            ; 004a3f0c
    MOV dword ptr [EBX + 0x17c],EAX     ; 004a3f0d
    CALL shape_edittool.cpp_CPickList_validateScrollBounds_FUN_004a5240 ; 004a3f13 | void shape_edittool.cpp_CPickList_validateScrollBounds_FUN_004a5240(CPickList * this_ptr)
        ;   XREF to: 004a5240 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004a3f18
    POP EBX                             ; 004a3f1b
    RET                                 ; 004a3f1c

