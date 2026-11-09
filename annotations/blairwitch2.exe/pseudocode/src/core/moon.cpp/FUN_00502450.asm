; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_moon_cpp_FUN_00502450(int *param_1)
;
;
; XREF[3]:
;   core_menu.cpp_FUN_004ee1a0 at 004ee3ba
;   core_menu.cpp_FUN_004ee3f0 at 004ee7e7
;   core_moon.cpp_CMoon_dtor_FUN_00502390 at 00502396
;
; Called Functions:
;   engine_alphabit.cpp_FUN_0040d540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00502450
        ;   Label: core_moon.cpp_FUN_00502450
    MOV EBX,dword ptr [ESP + 0x8]       ; 00502451
    CMP dword ptr [EBX],0x0             ; 00502455
    JNZ 0x0050245c                      ; 00502458
        ;   XREF to: 0050245c (CONDITIONAL_JUMP)  ; LAB_0050245c
    POP EBX                             ; 0050245a
    RET                                 ; 0050245b
    PUSH ESI                            ; 0050245c
        ;   Label: LAB_0050245c
    PUSH 0x1d1c7b8                      ; 0050245d
    CALL engine_alphabit.cpp_FUN_0040d540 ; 00502462
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 00502467
    MOV EBX,0x1d1c7cc                   ; 0050246a
    PUSH 0x1d1cda8                      ; 0050246f
    LEA ESI,[EBX + 0x5dc]               ; 00502474
    CALL engine_alphabit.cpp_FUN_0040d540 ; 0050247a
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 0050247f
    PUSH EBX                            ; 00502482
        ;   Label: LAB_00502482
    CALL engine_alphabit.cpp_FUN_0040d540 ; 00502483
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD EBX,0x14                        ; 00502488
    ADD ESP,0x4                         ; 0050248b
    CMP EBX,ESI                         ; 0050248e
    JNZ 0x00502482                      ; 00502490
        ;   XREF to: 00502482 (CONDITIONAL_JUMP)  ; LAB_00502482
    MOV EBX,dword ptr [ESP + 0xc]       ; 00502492
    MOV dword ptr [EBX],0x0             ; 00502496
    POP ESI                             ; 0050249c
    POP EBX                             ; 0050249d
    RET                                 ; 0050249e

