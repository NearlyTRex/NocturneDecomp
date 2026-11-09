; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SNotesSection * core_fldnotes_cpp_NotesSection_ctor_FUN_004a3520(SNotesSection *this_ptr)
;
; Parameters:
; SNotesSection *  Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a3520
        ;   Label: core_fldnotes.cpp_NotesSection_ctor_FUN_004a3520
    MOV byte ptr [EAX + 0x40],0x0       ; 004a3524
    MOV dword ptr [EAX + 0x150],0x0     ; 004a3528
    MOV dword ptr [EAX + 0x140],0x0     ; 004a3532
    MOV dword ptr [EAX + 0x144],0x0     ; 004a353c
    MOV byte ptr [EAX],0x0              ; 004a3546
    RET                                 ; 004a3549

