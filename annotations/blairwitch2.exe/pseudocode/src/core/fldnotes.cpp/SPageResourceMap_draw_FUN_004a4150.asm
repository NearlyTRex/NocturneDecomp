; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_SPageResourceMap_draw_FUN_004a4150(SPageResourceMap *this_ptr)
;
; Parameters:
; SPageResourceMap * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_fldnotes.cpp_SNotesMap_draw_FUN_004a3e40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a4150
        ;   Label: core_fldnotes.cpp_SPageResourceMap_draw_FUN_004a4150
    MOV EAX,dword ptr [ESP + 0x8]       ; 004a4151
    MOV EDX,dword ptr [EAX + 0x4]       ; 004a4155
    PUSH EDX                            ; 004a4158
    MOV ECX,dword ptr [EAX]             ; 004a4159
    PUSH ECX                            ; 004a415b
    MOV EBX,dword ptr [EAX + 0x18]      ; 004a415c
    PUSH EBX                            ; 004a415f
    CALL core_fldnotes.cpp_SNotesMap_draw_FUN_004a3e40 ; 004a4160
        ;   XREF to: 004a3e40 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_SNotesMap_draw_FUN_004a3e40(SNotesMap * this_ptr, int param_2, int param_3)
    ADD ESP,0xc                         ; 004a4165
    POP EBX                             ; 004a4168
    RET                                 ; 004a4169

