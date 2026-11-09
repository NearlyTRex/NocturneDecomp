; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SNotesMap * core_fldnotes_cpp_NotesMap_dtor_FUN_004a3820(SNotesMap *this_ptr,uint flags)
;
; Parameters:
; SNotesMap *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_fldnotes.cpp_FUN_004a3860
;   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3820
        ;   Label: core_fldnotes.cpp_NotesMap_dtor_FUN_004a3820
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a3821
    PUSH EBX                            ; 004a3825
    CALL core_fldnotes.cpp_FUN_004a3860 ; 004a3826
        ;   XREF to: 004a3860 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a3860()
    ADD ESP,0x4                         ; 004a382b
    PUSH 0x0                            ; 004a382e
    ADD EBX,0x88                        ; 004a3830
    PUSH EBX                            ; 004a3836
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d440 ; 004a3837
        ;   XREF to: 0040d440 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d440(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a383c
    PUSH 0x0                            ; 004a383f
    SUB EAX,0x18                        ; 004a3841
    PUSH EAX                            ; 004a3844
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d440 ; 004a3845
        ;   XREF to: 0040d440 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d440(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a384a
    SUB EAX,0x70                        ; 004a384d
    POP EBX                             ; 004a3850
    RET                                 ; 004a3851

