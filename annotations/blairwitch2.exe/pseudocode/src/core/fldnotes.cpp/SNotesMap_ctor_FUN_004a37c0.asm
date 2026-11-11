; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SNotesMap * core_fldnotes_cpp_SNotesMap_ctor_FUN_004a37c0(SNotesMap *this_ptr)
;
; Parameters:
; SNotesMap *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_fldnotes.cpp_SNotesMap_reset_FUN_004a3860
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a37c0
        ;   Label: core_fldnotes.cpp_SNotesMap_ctor_FUN_004a37c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a37c1
    ADD EBX,0x70                        ; 004a37c5
    PUSH EBX                            ; 004a37c8
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420 ; 004a37c9
        ;   XREF to: 0040d420 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a37ce
    ADD EAX,0x18                        ; 004a37d1
    PUSH EAX                            ; 004a37d4
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420 ; 004a37d5
        ;   XREF to: 0040d420 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420(CAlphaBitmap * this_ptr)
    LEA EBX,[EAX + 0xffffff78]          ; 004a37da
    MOV byte ptr [EBX + 0x4],0x0        ; 004a37e0
    MOV dword ptr [EBX + 0x84],0x0      ; 004a37e4
    ADD ESP,0x4                         ; 004a37ee
    MOV dword ptr [EBX + 0x9c],0x0      ; 004a37f1
    PUSH EBX                            ; 004a37fb
    MOV dword ptr [EBX + 0x2c0],0x0     ; 004a37fc
    CALL core_fldnotes.cpp_SNotesMap_reset_FUN_004a3860 ; 004a3806
        ;   XREF to: 004a3860 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_SNotesMap_reset_FUN_004a3860(SNotesMap * this_ptr)
    ADD ESP,0x4                         ; 004a380b
    MOV EAX,EBX                         ; 004a380e
    POP EBX                             ; 004a3810
    RET                                 ; 004a3811

