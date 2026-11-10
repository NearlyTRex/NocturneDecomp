; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004b7ee0(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   core_game.cpp_CGame_runGameSession_FUN_004b7f90 at 004b83bf
;
; Referenced Globals:
;   TerminatedCString s_fangs_005c25f6
;   undefined4 DAT_005fba1c
;   undefined4 DAT_00600530
;   undefined4 DAT_01549aa8
;   undefined4 DAT_01c5b0e0
;   undefined4 DAT_01d82088
;
; Called Functions:
;   engine_2d.c_reinitializeGraphicsSystem_FUN_00402ad0
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0
;   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d300
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460
;   engine_special.cpp_clearScreen_FUN_00560d70
;   wincore_wddvmem.cpp_FUN_00579bb0
;   wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b7ee0
        ;   Label: core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004b7ee0
    SUB ESP,0x14                        ; 004b7ee1
    CALL engine_2d.c_reinitializeGraphicsSystem_FUN_00402ad0 ; 004b7ee4
        ;   XREF to: 00402ad0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_reinitializeGraphicsSystem_FUN_00402ad0()
    CMP dword ptr [0x005fba1c],0x1e0    ; 004b7ee9 | DAT_005fba1c
    JNZ 0x004b7eff                      ; 004b7ef3
        ;   XREF to: 004b7eff (CONDITIONAL_JUMP)  ; LAB_004b7eff
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004b7ef5
    CMP dword ptr [EAX + 0x8],0x20      ; 004b7ef9
    JZ 0x004b7f13                       ; 004b7efd
        ;   XREF to: 004b7f13 (CONDITIONAL_JUMP)  ; LAB_004b7f13
    PUSH 0x20                           ; 004b7eff
        ;   Label: LAB_004b7eff
    PUSH 0x1e0                          ; 004b7f01
    PUSH 0x280                          ; 004b7f06
    CALL wincore_wddvmem.cpp_FUN_00579bb0 ; 004b7f0b
        ;   XREF to: 00579bb0 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_FUN_00579bb0()
    ADD ESP,0xc                         ; 004b7f10
    MOV EAX,[0x00600530]                ; 004b7f13 | DAT_00600530
        ;   Label: LAB_004b7f13
    CMP dword ptr [EAX + 0x1008],0x0    ; 004b7f18 | DAT_01d82088
    JZ 0x004b7f7c                       ; 004b7f1f
        ;   XREF to: 004b7f7c (CONDITIONAL_JUMP)  ; LAB_004b7f7c
    CALL engine_special.cpp_clearScreen_FUN_00560d70 ; 004b7f21
        ;   XREF to: 00560d70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_00560d70()
        ;   Label: LAB_004b7f21
    MOV EAX,ESP                         ; 004b7f26
    PUSH EAX                            ; 004b7f28
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0 ; 004b7f29
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004b7f2e
    PUSH 0x1e0                          ; 004b7f31
    PUSH 0x280                          ; 004b7f36
    PUSH 0x5c25f6                       ; 004b7f3b | = "fangs"
    LEA EAX,[ESP + 0xc]                 ; 004b7f40
    PUSH EAX                            ; 004b7f44
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 004b7f45
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004b7f4a
    PUSH 0x8000                         ; 004b7f4d
    PUSH 0x0                            ; 004b7f52
    PUSH 0x0                            ; 004b7f54
    LEA EAX,[ESP + 0xc]                 ; 004b7f56
    PUSH EAX                            ; 004b7f5a
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0 ; 004b7f5b
        ;   XREF to: 0040d6f0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004b7f60
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0 ; 004b7f63
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0()
    PUSH 0x0                            ; 004b7f68
    LEA EAX,[ESP + 0x4]                 ; 004b7f6a
    PUSH EAX                            ; 004b7f6e
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d300 ; 004b7f6f
        ;   XREF to: 0040d300 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d300(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b7f74
    ADD ESP,0x14                        ; 004b7f77
    POP EBX                             ; 004b7f7a
    RET                                 ; 004b7f7b
    MOV EAX,[0x01549aa8]                ; 004b7f7c | DAT_01549aa8
        ;   Label: LAB_004b7f7c
    MOV [0x01c5b0e0],EAX                ; 004b7f81 | DAT_01c5b0e0
    JMP 0x004b7f21                      ; 004b7f86
        ;   XREF to: 004b7f21 (UNCONDITIONAL_JUMP)  ; LAB_004b7f21

