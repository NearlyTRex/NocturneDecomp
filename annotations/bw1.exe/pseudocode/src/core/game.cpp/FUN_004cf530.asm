; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_FUN_004cf530(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   core_game.cpp_FUN_004cf5e0 at 004cfa0b
;
; Referenced Globals:
;   TerminatedCString s_fangs_005e179a
;   undefined4 DAT_0061b49c
;   undefined4 DAT_0061f650
;   undefined4 DAT_0152d244
;   undefined4 DAT_01c3eb50
;   undefined4 DAT_01d2d908
;
; Called Functions:
;   engine_2d.c_reinitializeGraphicsSystem_FUN_00402ad0
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0
;   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d0c0
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220
;   engine_special.cpp_clearScreen_FUN_0057dc40
;   wincore_wddvmem.cpp_FUN_005ac300
;   wincore_wddvmem.cpp_FUN_005acff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cf530
        ;   Label: core_game.cpp_FUN_004cf530
    SUB ESP,0x14                        ; 004cf531
    CALL engine_2d.c_reinitializeGraphicsSystem_FUN_00402ad0 ; 004cf534
        ;   XREF to: 00402ad0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_reinitializeGraphicsSystem_FUN_00402ad0()
    CMP dword ptr [0x0061b49c],0x1e0    ; 004cf539 | DAT_0061b49c
    JNZ 0x004cf54f                      ; 004cf543
        ;   XREF to: 004cf54f (CONDITIONAL_JUMP)  ; LAB_004cf54f
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004cf545
    CMP dword ptr [EAX + 0x8],0x20      ; 004cf549
    JZ 0x004cf563                       ; 004cf54d
        ;   XREF to: 004cf563 (CONDITIONAL_JUMP)  ; LAB_004cf563
    PUSH 0x20                           ; 004cf54f
        ;   Label: LAB_004cf54f
    PUSH 0x1e0                          ; 004cf551
    PUSH 0x280                          ; 004cf556
    CALL wincore_wddvmem.cpp_FUN_005ac300 ; 004cf55b
        ;   XREF to: 005ac300 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_FUN_005ac300()
    ADD ESP,0xc                         ; 004cf560
    MOV EAX,[0x0061f650]                ; 004cf563 | DAT_0061f650
        ;   Label: LAB_004cf563
    CMP dword ptr [EAX + 0x1008],0x0    ; 004cf568 | DAT_01d2d908
    JZ 0x004cf5cc                       ; 004cf56f
        ;   XREF to: 004cf5cc (CONDITIONAL_JUMP)  ; LAB_004cf5cc
    CALL engine_special.cpp_clearScreen_FUN_0057dc40 ; 004cf571
        ;   XREF to: 0057dc40 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0057dc40()
        ;   Label: LAB_004cf571
    MOV EAX,ESP                         ; 004cf576
    PUSH EAX                            ; 004cf578
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0 ; 004cf579
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004cf57e
    PUSH 0x1e0                          ; 004cf581
    PUSH 0x280                          ; 004cf586
    PUSH 0x5e179a                       ; 004cf58b | = "fangs"
    LEA EAX,[ESP + 0xc]                 ; 004cf590
    PUSH EAX                            ; 004cf594
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004cf595
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004cf59a
    PUSH 0x8000                         ; 004cf59d
    PUSH 0x0                            ; 004cf5a2
    PUSH 0x0                            ; 004cf5a4
    LEA EAX,[ESP + 0xc]                 ; 004cf5a6
    PUSH EAX                            ; 004cf5aa
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0 ; 004cf5ab
        ;   XREF to: 0040d4b0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004cf5b0
    CALL wincore_wddvmem.cpp_FUN_005acff0 ; 004cf5b3
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_005acff0()
    PUSH 0x0                            ; 004cf5b8
    LEA EAX,[ESP + 0x4]                 ; 004cf5ba
    PUSH EAX                            ; 004cf5be
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d0c0 ; 004cf5bf
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d0c0(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004cf5c4
    ADD ESP,0x14                        ; 004cf5c7
    POP EBX                             ; 004cf5ca
    RET                                 ; 004cf5cb
    MOV EAX,[0x0152d244]                ; 004cf5cc | DAT_0152d244
        ;   Label: LAB_004cf5cc
    MOV [0x01c3eb50],EAX                ; 004cf5d1 | DAT_01c3eb50
    JMP 0x004cf571                      ; 004cf5d6
        ;   XREF to: 004cf571 (UNCONDITIONAL_JUMP)  ; LAB_004cf571

