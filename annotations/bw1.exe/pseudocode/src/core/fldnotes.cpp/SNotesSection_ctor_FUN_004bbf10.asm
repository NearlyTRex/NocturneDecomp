; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SNotesSection * __cdecl core_fldnotes_cpp_SNotesSection_ctor_FUN_004bbf10(SNotesSection *this_ptr)
;
; Parameters:
; SNotesSection *  Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004bbf10
        ;   Label: core_fldnotes.cpp_SNotesSection_ctor_FUN_004bbf10
    MOV byte ptr [EAX + 0x40],0x0       ; 004bbf14
    MOV dword ptr [EAX + 0x150],0x0     ; 004bbf18
    MOV dword ptr [EAX + 0x140],0x0     ; 004bbf22
    MOV dword ptr [EAX + 0x144],0x0     ; 004bbf2c
    MOV byte ptr [EAX],0x0              ; 004bbf36
    RET                                 ; 004bbf39

