; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_alphabit_cpp_FUN_0040d540(CAlphaBitmap *this_ptr)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
;
; XREF[14]:
;   core_fldnotes.cpp_FUN_004a3860 at 004a3879
;   core_fldnotes.cpp_FUN_004a50b0 at 004a513c
;   core_fldnotes.cpp_FUN_004a5700 at 004a5ab9
;   core_fldnotes.cpp_FUN_004a5f60 at 004a5fba
;   core_fldnotes.cpp_PageResource_Bitmap_dtor_FUN_004a2200 at 004a2217
;   core_inv.cpp_freeInventory_FUN_004dacc0 at 004dacc5
;   core_menu.cpp_showCalibrationTest_FUN_004ebe30 at 004ebed0
;   core_mission.cpp_FUN_004fc940 at 004fca28
;   core_moon.cpp_FUN_00502450 at 00502462
;   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d440 at 0040d446
;   ... and 4 more
;
; Called Functions:
;   crt_unknown.c_FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d540
        ;   Label: engine_alphabit.cpp_FUN_0040d540
    PUSH ESI                            ; 0040d541
    PUSH EBP                            ; 0040d542
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040d543
    MOV EDX,dword ptr [EBX]             ; 0040d547
    TEST EDX,EDX                        ; 0040d549
    JNZ 0x0040d56f                      ; 0040d54b
        ;   XREF to: 0040d56f (CONDITIONAL_JUMP)  ; LAB_0040d56f
    MOV ESI,dword ptr [EBX + 0x4]       ; 0040d54d
        ;   Label: LAB_0040d54d
    TEST ESI,ESI                        ; 0040d550
    JZ 0x0040d564                       ; 0040d552
        ;   XREF to: 0040d564 (CONDITIONAL_JUMP)  ; LAB_0040d564
    PUSH ESI                            ; 0040d554
    CALL crt_unknown.c_FUN_005b86a0     ; 0040d555
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 0040d55a
    MOV dword ptr [EBX + 0x4],0x0       ; 0040d55d
    MOV EBP,dword ptr [EBX + 0x8]       ; 0040d564
        ;   Label: LAB_0040d564
    TEST EBP,EBP                        ; 0040d567
    JNZ 0x0040d580                      ; 0040d569
        ;   XREF to: 0040d580 (CONDITIONAL_JUMP)  ; LAB_0040d580
    POP EBP                             ; 0040d56b
    POP ESI                             ; 0040d56c
    POP EBX                             ; 0040d56d
    RET                                 ; 0040d56e
    PUSH EDX                            ; 0040d56f
        ;   Label: LAB_0040d56f
    CALL crt_unknown.c_FUN_005b86a0     ; 0040d570
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 0040d575
    MOV dword ptr [EBX],0x0             ; 0040d578
    JMP 0x0040d54d                      ; 0040d57e
        ;   XREF to: 0040d54d (UNCONDITIONAL_JUMP)  ; LAB_0040d54d
    PUSH EBP                            ; 0040d580
        ;   Label: LAB_0040d580
    CALL crt_unknown.c_FUN_005b86a0     ; 0040d581
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 0040d586
    MOV dword ptr [EBX + 0x8],0x0       ; 0040d589
    POP EBP                             ; 0040d590
    POP ESI                             ; 0040d591
    POP EBX                             ; 0040d592
    RET                                 ; 0040d593

