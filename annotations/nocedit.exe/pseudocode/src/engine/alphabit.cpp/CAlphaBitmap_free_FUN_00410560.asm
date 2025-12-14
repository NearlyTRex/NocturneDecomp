; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap * this_ptr)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
;
; XREF[7]:
;   core_inv.cpp_freeInventory_FUN_004fd510 at 004fd522
;   core_main.c_finalizeGameSystems_FUN_00508570 at 005087a2
;   core_main.c_showPromoScreen_FUN_00508340 at 00508523
;   core_menu.cpp_showCalibrationTest_FUN_00510ba0 at 00510c40
;   core_moon.cpp_CMoon_free_FUN_00529ce0 at 00529d2b
;   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540 at 00410546
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 at 004105e2
;
; Referenced Globals:
;   TerminatedCString s_engine_alphabit_cpp_00614702
;   TerminatedCString s_engine_alphabit_cpp_00614719
;   TerminatedCString s_engine_alphabit_cpp_00614730
;
; Called Functions:
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410560
        ;   Label: engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560
    PUSH ESI                            ; 00410561
    PUSH EBP                            ; 00410562
    MOV EBX,dword ptr [ESP + 0x10]      ; 00410563
    MOV EDX,dword ptr [EBX]             ; 00410567
    TEST EDX,EDX                        ; 00410569
    JNZ 0x00410596                      ; 0041056b
        ;   XREF to: 00410596 (CONDITIONAL_JUMP)  ; LAB_00410596
    MOV ESI,dword ptr [EBX + 0x4]       ; 0041056d
        ;   Label: LAB_0041056d
    TEST ESI,ESI                        ; 00410570
    JZ 0x0041058b                       ; 00410572
        ;   XREF to: 0041058b (CONDITIONAL_JUMP)  ; LAB_0041058b
    PUSH 0x33                           ; 00410574
    PUSH 0x614719                       ; 00410576 | = "..\\engine\\alphabit.cpp"
    PUSH ESI                            ; 0041057b
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 0041057c
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 00410581
    MOV dword ptr [EBX + 0x4],0x0       ; 00410584
    MOV EBP,dword ptr [EBX + 0x8]       ; 0041058b
        ;   Label: LAB_0041058b
    TEST EBP,EBP                        ; 0041058e
    JNZ 0x004105ae                      ; 00410590
        ;   XREF to: 004105ae (CONDITIONAL_JUMP)  ; LAB_004105ae
    POP EBP                             ; 00410592
    POP ESI                             ; 00410593
    POP EBX                             ; 00410594
    RET                                 ; 00410595
    PUSH 0x2f                           ; 00410596
        ;   Label: LAB_00410596
    PUSH 0x614702                       ; 00410598 | = "..\\engine\\alphabit.cpp"
    PUSH EDX                            ; 0041059d
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 0041059e
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 004105a3
    MOV dword ptr [EBX],0x0             ; 004105a6
    JMP 0x0041056d                      ; 004105ac
        ;   XREF to: 0041056d (UNCONDITIONAL_JUMP)  ; LAB_0041056d
    PUSH 0x37                           ; 004105ae
        ;   Label: LAB_004105ae
    PUSH 0x614730                       ; 004105b0 | = "..\\engine\\alphabit.cpp"
    PUSH EBP                            ; 004105b5
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 004105b6
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 004105bb
    MOV dword ptr [EBX + 0x8],0x0       ; 004105be
    POP EBP                             ; 004105c5
    POP ESI                             ; 004105c6
    POP EBX                             ; 004105c7
    RET                                 ; 004105c8

