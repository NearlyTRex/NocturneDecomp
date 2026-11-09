; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_FUN_0049a980(CPickList *this_ptr,char *dialog_title,int initial_selected_index,uint window_flags)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   dialog_title
; int              Stack[0xc]:4   initial_selected_index
; uint             Stack[0x10]:4   window_flags
;
; XREF[2]:
;   core_game.cpp_FUN_004cf5e0 at 004d01ca
;   shape_edittool.cpp_FUN_0049a8b0 at 0049a92d
;
; Called Functions:
;   shape_edittool.cpp_FUN_0049b060
;   shape_edittool.cpp_FUN_0049be50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049a980
        ;   Label: shape_edittool.cpp_FUN_0049a980
    MOV EBX,dword ptr [ESP + 0x8]       ; 0049a981
    MOV EDX,dword ptr [ESP + 0x14]      ; 0049a985
    PUSH EDX                            ; 0049a989
    MOV ECX,dword ptr [ESP + 0x10]      ; 0049a98a
    PUSH ECX                            ; 0049a98e
    PUSH EBX                            ; 0049a98f
    CALL shape_edittool.cpp_FUN_0049b060 ; 0049a990
        ;   XREF to: 0049b060 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_FUN_0049b060(CPickList * this_ptr, char * dialog_title, uint window_flags)
    ADD ESP,0xc                         ; 0049a995
    MOV EAX,dword ptr [ESP + 0x10]      ; 0049a998
    PUSH EBX                            ; 0049a99c
    MOV dword ptr [EBX + 0x194],EAX     ; 0049a99d
    CALL shape_edittool.cpp_FUN_0049be50 ; 0049a9a3
        ;   XREF to: 0049be50 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_FUN_0049be50(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0049a9a8
    POP EBX                             ; 0049a9ab
    RET                                 ; 0049a9ac

