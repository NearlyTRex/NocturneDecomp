; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CPickList_initializeDialog_FUN_00482320(CPickList *this_ptr,char *dialog_title,int initial_selected_index,uint window_flags)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   dialog_title
; int              Stack[0xc]:4   initial_selected_index
; uint             Stack[0x10]:4   window_flags
;
; XREF[2]:
;   core_game.cpp_CGame_runGameSession_FUN_004b6170 at 004b6ca7
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00482250 at 004822cd
;
; Called Functions:
;   shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_00482a00
;   shape_edittool.cpp_CPickList_validateScrollBounds_FUN_004837f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00482320
        ;   Label: shape_edittool.cpp_CPickList_initializeDialog_FUN_00482320
    MOV EBX,dword ptr [ESP + 0x8]       ; 00482321
    MOV EDX,dword ptr [ESP + 0x14]      ; 00482325
    PUSH EDX                            ; 00482329
    MOV ECX,dword ptr [ESP + 0x10]      ; 0048232a
    PUSH ECX                            ; 0048232e
    PUSH EBX                            ; 0048232f
    CALL shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_00482a00 ; 00482330
        ;   XREF to: 00482a00 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_00482a00(CPickList * this_ptr, char * dialog_title, uint window_flags)
    ADD ESP,0xc                         ; 00482335
    MOV EAX,dword ptr [ESP + 0x10]      ; 00482338
    PUSH EBX                            ; 0048233c
    MOV dword ptr [EBX + 0x194],EAX     ; 0048233d
    CALL shape_edittool.cpp_CPickList_validateScrollBounds_FUN_004837f0 ; 00482343
        ;   XREF to: 004837f0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_validateScrollBounds_FUN_004837f0(CPickList * this_ptr)
    ADD ESP,0x4                         ; 00482348
    POP EBX                             ; 0048234b
    RET                                 ; 0048234c

