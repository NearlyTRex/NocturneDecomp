; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_SNotesEntry_ctor_FUN_004a3280(SNotesEntry *this_ptr)
;
; Parameters:
; SNotesEntry *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fldnotes.cpp_SNotesSection_addEntry_FUN_004a3630 at 004a365b
;
; Called Functions:
;   shape_edittool.cpp_CStrList_ctor_FUN_00480d20
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a3280
        ;   Label: core_fldnotes.cpp_SNotesEntry_ctor_FUN_004a3280
    ADD EAX,0x148                       ; 004a3284
    PUSH EAX                            ; 004a3289
    CALL shape_edittool.cpp_CStrList_ctor_FUN_00480d20 ; 004a328a
        ;   XREF to: 00480d20 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_ctor_FUN_00480d20(CStrList * this_ptr)
    SUB EAX,0x148                       ; 004a328f
    MOV byte ptr [EAX + 0x40],0x0       ; 004a3294
    MOV dword ptr [EAX + 0x144],0x0     ; 004a3298
    MOV dword ptr [EAX + 0x140],0xffffffff ; 004a32a2
    MOV dword ptr [EAX + 0x158],0xffffffff ; 004a32ac
    ADD ESP,0x4                         ; 004a32b6
    MOV byte ptr [EAX],0x0              ; 004a32b9
    RET                                 ; 004a32bc

