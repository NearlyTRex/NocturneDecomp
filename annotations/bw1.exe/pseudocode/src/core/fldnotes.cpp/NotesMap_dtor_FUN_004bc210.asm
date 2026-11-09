; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SNotesMap * core_fldnotes_cpp_NotesMap_dtor_FUN_004bc210(SNotesMap *this_ptr,uint flags)
;
; Parameters:
; SNotesMap *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_fldnotes.cpp_FUN_004bc250
;   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d0c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bc210
        ;   Label: core_fldnotes.cpp_NotesMap_dtor_FUN_004bc210
    MOV EBX,dword ptr [ESP + 0x8]       ; 004bc211
    PUSH EBX                            ; 004bc215
    CALL core_fldnotes.cpp_FUN_004bc250 ; 004bc216
        ;   XREF to: 004bc250 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004bc250()
    ADD ESP,0x4                         ; 004bc21b
    PUSH 0x0                            ; 004bc21e
    ADD EBX,0x88                        ; 004bc220
    PUSH EBX                            ; 004bc226
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d0c0 ; 004bc227
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d0c0(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bc22c
    PUSH 0x0                            ; 004bc22f
    SUB EAX,0x18                        ; 004bc231
    PUSH EAX                            ; 004bc234
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d0c0 ; 004bc235
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d0c0(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bc23a
    SUB EAX,0x70                        ; 004bc23d
    POP EBX                             ; 004bc240
    RET                                 ; 004bc241

