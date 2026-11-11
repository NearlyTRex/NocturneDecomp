; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_SPageResourceMap_draw_FUN_004bcb40(SPageResourceMap *this_ptr)
;
; Parameters:
; SPageResourceMap * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_fldnotes.cpp_SNotesMap_draw_FUN_004bc830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bcb40
        ;   Label: core_fldnotes.cpp_SPageResourceMap_draw_FUN_004bcb40
    MOV EAX,dword ptr [ESP + 0x8]       ; 004bcb41
    MOV EDX,dword ptr [EAX + 0x4]       ; 004bcb45
    PUSH EDX                            ; 004bcb48
    MOV ECX,dword ptr [EAX]             ; 004bcb49
    PUSH ECX                            ; 004bcb4b
    MOV EBX,dword ptr [EAX + 0x18]      ; 004bcb4c
    PUSH EBX                            ; 004bcb4f
    CALL core_fldnotes.cpp_SNotesMap_draw_FUN_004bc830 ; 004bcb50
        ;   XREF to: 004bc830 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_SNotesMap_draw_FUN_004bc830(SNotesMap * this_ptr, int param_2, int param_3)
    ADD ESP,0xc                         ; 004bcb55
    POP EBX                             ; 004bcb58
    RET                                 ; 004bcb59

