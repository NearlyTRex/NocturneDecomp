; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_alphabit_cpp_FUN_0040d1c0(CAlphaBitmap *this_ptr)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
;
; XREF[17]:
;   core_bmppuzzl.cpp_CAudioRecPuzzle_load_FUN_00415fc0 at 004164c2
;   core_bmppuzzl.cpp_CChemPuzzle_load_FUN_004177b0 at 0041795d
;   core_flashlit.cpp_FUN_004b9ff0 at 004b9ffc
;   core_flashlit.cpp_FUN_004ba130 at 004ba144
;   core_fldnotes.cpp_CFieldNotes_clear_FUN_004bdaa0 at 004bdb2c
;   core_fldnotes.cpp_FUN_004be0f0 at 004be4a9
;   core_fldnotes.cpp_FUN_004be970 at 004be9ca
;   core_fldnotes.cpp_SNotesMap_reset_FUN_004bc250 at 004bc269
;   core_fldnotes.cpp_SPageResourceBitmap_dtor_FUN_004baad0 at 004baae7
;   core_game.cpp_FUN_004dc040 at 004dc04f
;   ... and 7 more
;
; Called Functions:
;   crt_unknown.c_FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d1c0
        ;   Label: engine_alphabit.cpp_FUN_0040d1c0
    PUSH ESI                            ; 0040d1c1
    PUSH EBP                            ; 0040d1c2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040d1c3
    MOV EDX,dword ptr [EBX]             ; 0040d1c7
    TEST EDX,EDX                        ; 0040d1c9
    JNZ 0x0040d1ef                      ; 0040d1cb
        ;   XREF to: 0040d1ef (CONDITIONAL_JUMP)  ; LAB_0040d1ef
    MOV ESI,dword ptr [EBX + 0x4]       ; 0040d1cd
        ;   Label: LAB_0040d1cd
    TEST ESI,ESI                        ; 0040d1d0
    JZ 0x0040d1e4                       ; 0040d1d2
        ;   XREF to: 0040d1e4 (CONDITIONAL_JUMP)  ; LAB_0040d1e4
    PUSH ESI                            ; 0040d1d4
    CALL crt_unknown.c_FUN_005c09f0     ; 0040d1d5
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 0040d1da
    MOV dword ptr [EBX + 0x4],0x0       ; 0040d1dd
    MOV EBP,dword ptr [EBX + 0x8]       ; 0040d1e4
        ;   Label: LAB_0040d1e4
    TEST EBP,EBP                        ; 0040d1e7
    JNZ 0x0040d200                      ; 0040d1e9
        ;   XREF to: 0040d200 (CONDITIONAL_JUMP)  ; LAB_0040d200
    POP EBP                             ; 0040d1eb
    POP ESI                             ; 0040d1ec
    POP EBX                             ; 0040d1ed
    RET                                 ; 0040d1ee
    PUSH EDX                            ; 0040d1ef
        ;   Label: LAB_0040d1ef
    CALL crt_unknown.c_FUN_005c09f0     ; 0040d1f0
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 0040d1f5
    MOV dword ptr [EBX],0x0             ; 0040d1f8
    JMP 0x0040d1cd                      ; 0040d1fe
        ;   XREF to: 0040d1cd (UNCONDITIONAL_JUMP)  ; LAB_0040d1cd
    PUSH EBP                            ; 0040d200
        ;   Label: LAB_0040d200
    CALL crt_unknown.c_FUN_005c09f0     ; 0040d201
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 0040d206
    MOV dword ptr [EBX + 0x8],0x0       ; 0040d209
    POP EBP                             ; 0040d210
    POP ESI                             ; 0040d211
    POP EBX                             ; 0040d212
    RET                                 ; 0040d213

