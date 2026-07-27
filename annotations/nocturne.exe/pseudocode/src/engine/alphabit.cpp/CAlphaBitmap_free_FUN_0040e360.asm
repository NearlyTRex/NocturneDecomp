; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040e360(int *param_1)
;
;
; XREF[7]:
;   core_inv.cpp_freeInventory_FUN_004bf270 at 004bf275
;   core_main.c_FUN_004c8eb0 at 004c9093
;   core_main.c_FUN_004c90e0 at 004c92f3
;   core_menu.cpp_showCalibrationTest_FUN_004cffa0 at 004d0040
;   core_moon.cpp_CMoon_free_FUN_004dea60 at 004deaab
;   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040e340 at 0040e346
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0 at 0040e3d2
;
; Called Functions:
;   crt_unknown.c_FUN_005638d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e360
        ;   Label: engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040e360
    PUSH ESI                            ; 0040e361
    PUSH EBP                            ; 0040e362
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040e363
    MOV EDX,dword ptr [EBX]             ; 0040e367
    TEST EDX,EDX                        ; 0040e369
    JNZ 0x0040e38f                      ; 0040e36b
        ;   XREF to: 0040e38f (CONDITIONAL_JUMP)  ; LAB_0040e38f
    MOV ESI,dword ptr [EBX + 0x4]       ; 0040e36d
        ;   Label: LAB_0040e36d
    TEST ESI,ESI                        ; 0040e370
    JZ 0x0040e384                       ; 0040e372
        ;   XREF to: 0040e384 (CONDITIONAL_JUMP)  ; LAB_0040e384
    PUSH ESI                            ; 0040e374
    CALL crt_unknown.c_FUN_005638d0     ; 0040e375
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    ADD ESP,0x4                         ; 0040e37a
    MOV dword ptr [EBX + 0x4],0x0       ; 0040e37d
    MOV EBP,dword ptr [EBX + 0x8]       ; 0040e384
        ;   Label: LAB_0040e384
    TEST EBP,EBP                        ; 0040e387
    JNZ 0x0040e3a0                      ; 0040e389
        ;   XREF to: 0040e3a0 (CONDITIONAL_JUMP)  ; LAB_0040e3a0
    POP EBP                             ; 0040e38b
    POP ESI                             ; 0040e38c
    POP EBX                             ; 0040e38d
    RET                                 ; 0040e38e
    PUSH EDX                            ; 0040e38f
        ;   Label: LAB_0040e38f
    CALL crt_unknown.c_FUN_005638d0     ; 0040e390
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    ADD ESP,0x4                         ; 0040e395
    MOV dword ptr [EBX],0x0             ; 0040e398
    JMP 0x0040e36d                      ; 0040e39e
        ;   XREF to: 0040e36d (UNCONDITIONAL_JUMP)  ; LAB_0040e36d
    PUSH EBP                            ; 0040e3a0
        ;   Label: LAB_0040e3a0
    CALL crt_unknown.c_FUN_005638d0     ; 0040e3a1
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    ADD ESP,0x4                         ; 0040e3a6
    MOV dword ptr [EBX + 0x8],0x0       ; 0040e3a9
    POP EBP                             ; 0040e3b0
    POP ESI                             ; 0040e3b1
    POP EBX                             ; 0040e3b2
    RET                                 ; 0040e3b3

