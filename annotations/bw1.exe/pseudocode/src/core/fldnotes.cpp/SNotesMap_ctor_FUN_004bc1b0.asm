; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SNotesMap * __cdecl core_fldnotes_cpp_SNotesMap_ctor_FUN_004bc1b0(SNotesMap *this_ptr)
;
; Parameters:
; SNotesMap *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_fldnotes.cpp_SNotesMap_reset_FUN_004bc250
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bc1b0
        ;   Label: core_fldnotes.cpp_SNotesMap_ctor_FUN_004bc1b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004bc1b1
    ADD EBX,0x70                        ; 004bc1b5
    PUSH EBX                            ; 004bc1b8
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0 ; 004bc1b9
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004bc1be
    ADD EAX,0x18                        ; 004bc1c1
    PUSH EAX                            ; 004bc1c4
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0 ; 004bc1c5
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0(CAlphaBitmap * this_ptr)
    LEA EBX,[EAX + 0xffffff78]          ; 004bc1ca
    MOV byte ptr [EBX + 0x4],0x0        ; 004bc1d0
    MOV dword ptr [EBX + 0x84],0x0      ; 004bc1d4
    ADD ESP,0x4                         ; 004bc1de
    MOV dword ptr [EBX + 0x9c],0x0      ; 004bc1e1
    PUSH EBX                            ; 004bc1eb
    MOV dword ptr [EBX + 0x2c0],0x0     ; 004bc1ec
    CALL core_fldnotes.cpp_SNotesMap_reset_FUN_004bc250 ; 004bc1f6
        ;   XREF to: 004bc250 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_SNotesMap_reset_FUN_004bc250(SNotesMap * this_ptr)
    ADD ESP,0x4                         ; 004bc1fb
    MOV EAX,EBX                         ; 004bc1fe
    POP EBX                             ; 004bc200
    RET                                 ; 004bc201

