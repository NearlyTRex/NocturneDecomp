; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_SPageResourceMap_draw_FUN_004aa7b0(SPageResourceMap *this_ptr)
;
; Parameters:
; SPageResourceMap * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_fldnotes.cpp_SNotesMap_draw_FUN_004aa490
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aa7b0
        ;   Label: core_fldnotes.cpp_SPageResourceMap_draw_FUN_004aa7b0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004aa7b1
    MOV EDX,dword ptr [EAX + 0x4]       ; 004aa7b5
    PUSH EDX                            ; 004aa7b8
    MOV ECX,dword ptr [EAX]             ; 004aa7b9
    PUSH ECX                            ; 004aa7bb
    MOV EBX,dword ptr [EAX + 0x18]      ; 004aa7bc
    PUSH EBX                            ; 004aa7bf
    CALL core_fldnotes.cpp_SNotesMap_draw_FUN_004aa490 ; 004aa7c0
        ;   XREF to: 004aa490 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_SNotesMap_draw_FUN_004aa490(SNotesMap * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 004aa7c5
    POP EBX                             ; 004aa7c8
    RET                                 ; 004aa7c9

