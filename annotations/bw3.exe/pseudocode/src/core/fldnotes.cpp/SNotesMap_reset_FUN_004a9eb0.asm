; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_SNotesMap_reset_FUN_004a9eb0(SNotesMap *this_ptr)
;
; Parameters:
; SNotesMap *      Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_fldnotes.cpp_CFieldNotes_clear_FUN_004ab7a0 at 004ab7d5
;   core_fldnotes.cpp_SNotesMap_ctor_FUN_004a9e10 at 004a9e56
;   core_fldnotes.cpp_SNotesMap_dtor_FUN_004a9e70 at 004a9e76
;
; Called Functions:
;   crt_unknown.c_FUN_005a3770
;   engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9eb0
        ;   Label: core_fldnotes.cpp_SNotesMap_reset_FUN_004a9eb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a9eb1
    LEA EAX,[EBX + 0x70]                ; 004a9eb5
    MOV dword ptr [EBX],0x0             ; 004a9eb8
    PUSH EAX                            ; 004a9ebe
    MOV dword ptr [EBX + 0x9c],0x0      ; 004a9ebf
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 004a9ec9
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a9ece
    LEA EAX,[EBX + 0x88]                ; 004a9ed1
    PUSH EAX                            ; 004a9ed7
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 004a9ed8
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    MOV dword ptr [EBX + 0x1260],0xffffffff ; 004a9edd
    MOV dword ptr [EBX + 0x1264],0xffffffff ; 004a9ee7
    MOV dword ptr [EBX + 0x1268],0x1    ; 004a9ef1
    ADD ESP,0x4                         ; 004a9efb
    MOV EDX,dword ptr [EBX + 0x84]      ; 004a9efe
    MOV byte ptr [EBX + 0x4],0x0        ; 004a9f04
    TEST EDX,EDX                        ; 004a9f08
    JNZ 0x004a9f0e                      ; 004a9f0a
        ;   XREF to: 004a9f0e (CONDITIONAL_JUMP)  ; LAB_004a9f0e
    POP EBX                             ; 004a9f0c
    RET                                 ; 004a9f0d
    PUSH EDX                            ; 004a9f0e
        ;   Label: LAB_004a9f0e
    CALL crt_unknown.c_FUN_005a3770     ; 004a9f0f
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 004a9f14
    MOV dword ptr [EBX + 0x84],0x0      ; 004a9f17
    POP EBX                             ; 004a9f21
    RET                                 ; 004a9f22

