; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_alphabit_cpp_FUN_0040d400(CAlphaBitmap *this_ptr)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
;
; XREF[17]:
;   core_fldnotes.cpp_CFieldNotes_clear_FUN_004ab7a0 at 004ab82c
;   core_fldnotes.cpp_FUN_004abe00 at 004ac1fb
;   core_fldnotes.cpp_FUN_004ac6b0 at 004ac70a
;   core_fldnotes.cpp_SNotesMap_reset_FUN_004a9eb0 at 004a9ec9
;   core_fldnotes.cpp_SPageResourceBitmap_dtor_FUN_004a8710 at 004a8727
;   core_game.cpp_FUN_004c48b0 at 004c48bf
;   core_game.cpp_FUN_004c49f0 at 004c49fe
;   core_inv.cpp_FUN_004da840 at 004da845
;   core_menu.cpp_showCalibrationTest_FUN_004e84d0 at 004e8570
;   core_mission.cpp_CDemonMission_process_FUN_004f70a0 at 004f718d
;   ... and 7 more
;
; Called Functions:
;   crt_unknown.c_FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d400
        ;   Label: engine_alphabit.cpp_FUN_0040d400
    PUSH ESI                            ; 0040d401
    PUSH EBP                            ; 0040d402
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040d403
    MOV EDX,dword ptr [EBX]             ; 0040d407
    TEST EDX,EDX                        ; 0040d409
    JNZ 0x0040d42f                      ; 0040d40b
        ;   XREF to: 0040d42f (CONDITIONAL_JUMP)  ; LAB_0040d42f
    MOV ESI,dword ptr [EBX + 0x4]       ; 0040d40d
        ;   Label: LAB_0040d40d
    TEST ESI,ESI                        ; 0040d410
    JZ 0x0040d424                       ; 0040d412
        ;   XREF to: 0040d424 (CONDITIONAL_JUMP)  ; LAB_0040d424
    PUSH ESI                            ; 0040d414
    CALL crt_unknown.c_FUN_005a3770     ; 0040d415
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 0040d41a
    MOV dword ptr [EBX + 0x4],0x0       ; 0040d41d
    MOV EBP,dword ptr [EBX + 0x8]       ; 0040d424
        ;   Label: LAB_0040d424
    TEST EBP,EBP                        ; 0040d427
    JNZ 0x0040d440                      ; 0040d429
        ;   XREF to: 0040d440 (CONDITIONAL_JUMP)  ; LAB_0040d440
    POP EBP                             ; 0040d42b
    POP ESI                             ; 0040d42c
    POP EBX                             ; 0040d42d
    RET                                 ; 0040d42e
    PUSH EDX                            ; 0040d42f
        ;   Label: LAB_0040d42f
    CALL crt_unknown.c_FUN_005a3770     ; 0040d430
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 0040d435
    MOV dword ptr [EBX],0x0             ; 0040d438
    JMP 0x0040d40d                      ; 0040d43e
        ;   XREF to: 0040d40d (UNCONDITIONAL_JUMP)  ; LAB_0040d40d
    PUSH EBP                            ; 0040d440
        ;   Label: LAB_0040d440
    CALL crt_unknown.c_FUN_005a3770     ; 0040d441
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 0040d446
    MOV dword ptr [EBX + 0x8],0x0       ; 0040d449
    POP EBP                             ; 0040d450
    POP ESI                             ; 0040d451
    POP EBX                             ; 0040d452
    RET                                 ; 0040d453

