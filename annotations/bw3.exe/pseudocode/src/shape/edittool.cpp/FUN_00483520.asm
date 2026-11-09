; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_FUN_00483520(CPickList *this_ptr,char *dialog_title,int initial_selected_index,uint window_flags)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   dialog_title
; int              Stack[0xc]:4   initial_selected_index
; uint             Stack[0x10]:4   window_flags
;
; XREF[2]:
;   core_game.cpp_FUN_004b7f90 at 004b8b95
;   shape_edittool.cpp_FUN_00483450 at 004834cd
;
; Called Functions:
;   shape_edittool.cpp_FUN_00483c00
;   shape_edittool.cpp_FUN_004849f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483520
        ;   Label: shape_edittool.cpp_FUN_00483520
    MOV EBX,dword ptr [ESP + 0x8]       ; 00483521
    MOV EDX,dword ptr [ESP + 0x14]      ; 00483525
    PUSH EDX                            ; 00483529
    MOV ECX,dword ptr [ESP + 0x10]      ; 0048352a
    PUSH ECX                            ; 0048352e
    PUSH EBX                            ; 0048352f
    CALL shape_edittool.cpp_FUN_00483c00 ; 00483530
        ;   XREF to: 00483c00 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_FUN_00483c00(CPickList * this_ptr, char * dialog_title, uint window_flags)
    ADD ESP,0xc                         ; 00483535
    MOV EAX,dword ptr [ESP + 0x10]      ; 00483538
    PUSH EBX                            ; 0048353c
    MOV dword ptr [EBX + 0x194],EAX     ; 0048353d
    CALL shape_edittool.cpp_FUN_004849f0 ; 00483543
        ;   XREF to: 004849f0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_FUN_004849f0(CPickList * this_ptr)
    ADD ESP,0x4                         ; 00483548
    POP EBX                             ; 0048354b
    RET                                 ; 0048354c

