; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_moon_cpp_FUN_005023e0(int *param_1)
;
;
; XREF[2]:
;   core_menu.cpp_FUN_004ee1a0 at 004ee35a
;   core_menu.cpp_FUN_004ee3f0 at 004ee4a0
;
; Referenced Globals:
;   TerminatedCString s_blairwitch_00_005df306
;   TerminatedCString s_blairwitch_01_005df314
;   CGame* g_CGamePtr = 01cb6900
;   void* PTR_s_blairwitch_00_00618340 = 005df306
;   undefined1* PTR_s_blairwitch_01_00618344 = 005df314
;   undefined4 g_CGameInstance.field560_0x230
;
; Called Functions:
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005023e0
        ;   Label: core_moon.cpp_FUN_005023e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005023e1
    MOV EDX,dword ptr [EBX]             ; 005023e5
    TEST EDX,EDX                        ; 005023e7
    JNZ 0x0050243a                      ; 005023e9
        ;   XREF to: 0050243a (CONDITIONAL_JUMP)  ; LAB_0050243a
    MOV EBX,dword ptr [0x00616494]      ; 005023eb | g_CGamePtr
    CMP dword ptr [EBX + 0x230],0x29a   ; 005023f1 | g_CGameInstance.field560_0x230
    JZ 0x0050243c                       ; 005023fb
        ;   XREF to: 0050243c (CONDITIONAL_JUMP)  ; LAB_0050243c
    PUSH EDI                            ; 005023fd
        ;   Label: LAB_005023fd
    PUSH ESI                            ; 005023fe
    MOV ESI,0x1d1c7cc                   ; 005023ff
    XOR EBX,EBX                         ; 00502404
    PUSH 0x11a                          ; 00502406
        ;   Label: LAB_00502406
    PUSH 0x280                          ; 0050240b
    MOV EDI,dword ptr [EBX + 0x618340]  ; 00502410 | PTR_s_blairwitch_00_00618340 | PTR_s_blairwitch_01_00618344
    PUSH EDI                            ; 00502416 | = "blairwitch_00" | s_blairwitch_01_005df314
    PUSH ESI                            ; 00502417
    ADD EBX,0x4                         ; 00502418
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 0050241b
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 00502420
    ADD ESI,0x14                        ; 00502423
    CMP EBX,0x12c                       ; 00502426
    JNZ 0x00502406                      ; 0050242c
        ;   XREF to: 00502406 (CONDITIONAL_JUMP)  ; LAB_00502406
    MOV EBX,dword ptr [ESP + 0x10]      ; 0050242e
    MOV dword ptr [EBX],0x1             ; 00502432
    POP ESI                             ; 00502438
    POP EDI                             ; 00502439
    POP EBX                             ; 0050243a
        ;   Label: LAB_0050243a
    RET                                 ; 0050243b
    MOV dword ptr [EBX + 0x230],EDX     ; 0050243c | g_CGameInstance.field560_0x230
        ;   Label: LAB_0050243c
    JMP 0x005023fd                      ; 00502442
        ;   XREF to: 005023fd (UNCONDITIONAL_JUMP)  ; LAB_005023fd

