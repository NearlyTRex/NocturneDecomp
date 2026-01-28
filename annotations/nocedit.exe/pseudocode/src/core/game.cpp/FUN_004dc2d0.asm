; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_game_cpp_FUN_004dc2d0(void)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; Referenced Globals:
;   CGame* g_CGamePtr = 02d81a9c
;   char[256] g_KeyboardState
;   undefined4 g_CGameInstance.delta_time_float
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004dc2d0
        ;   Label: core_game.cpp_FUN_004dc2d0
    MOV EDX,dword ptr [ESP + 0x10]      ; 004dc2d3
    MOV EAX,dword ptr [ESP + 0x8]       ; 004dc2d7
    CMP byte ptr [EAX + 0x2d03e98],0x0  ; 004dc2db | g_KeyboardState
    JNZ 0x004dc320                      ; 004dc2e2
        ;   XREF to: 004dc320 (CONDITIONAL_JUMP)  ; LAB_004dc320
    MOV EAX,dword ptr [ESP + 0xc]       ; 004dc2e4
    CMP byte ptr [EAX + 0x2d03e98],0x0  ; 004dc2e8 | g_KeyboardState
    JZ 0x004dc31c                       ; 004dc2ef
        ;   XREF to: 004dc31c (CONDITIONAL_JUMP)  ; LAB_004dc31c
    FLD float ptr [EDX]                 ; 004dc2f1
    FCOMP float ptr [ESP + 0x18]        ; 004dc2f3
    FNSTSW AX                           ; 004dc2f7
    SAHF                                ; 004dc2f9
    JNC 0x004dc31c                      ; 004dc2fa
        ;   XREF to: 004dc31c (CONDITIONAL_JUMP)  ; LAB_004dc31c
    MOV EAX,[0x0067b654]                ; 004dc2fc | g_CGamePtr
    FLD float ptr [ESP + 0x18]          ; 004dc301
    FLD float ptr [EAX + 0x264]         ; 004dc305 | g_CGameInstance.delta_time_float
    FMUL ST1                            ; 004dc30b
    FDIV float ptr [ESP + 0x14]         ; 004dc30d
    FADD float ptr [EDX]                ; 004dc311
    FST float ptr [EDX]                 ; 004dc313
    FCOMPP                              ; 004dc315
    FNSTSW AX                           ; 004dc317
    SAHF                                ; 004dc319
    JA 0x004dc35b                       ; 004dc31a
        ;   XREF to: 004dc35b (CONDITIONAL_JUMP)  ; LAB_004dc35b
    ADD ESP,0x4                         ; 004dc31c
        ;   Label: LAB_004dc31c
    RET                                 ; 004dc31f
    FLD float ptr [EDX]                 ; 004dc320
        ;   Label: LAB_004dc320
    FLD float ptr [ESP + 0x18]          ; 004dc322
    FCHS                                ; 004dc326
    FSTP float ptr [ESP]                ; 004dc328
    FCOMP float ptr [ESP]               ; 004dc32b
    FNSTSW AX                           ; 004dc32e
    SAHF                                ; 004dc330
    JBE 0x004dc31c                      ; 004dc331
        ;   XREF to: 004dc31c (CONDITIONAL_JUMP)  ; LAB_004dc31c
    MOV EAX,[0x0067b654]                ; 004dc333 | g_CGamePtr
    FLD float ptr [EAX + 0x264]         ; 004dc338 | g_CGameInstance.delta_time_float
    FMUL float ptr [ESP + 0x18]         ; 004dc33e
    FDIV float ptr [ESP + 0x14]         ; 004dc342
    FSUBR float ptr [EDX]               ; 004dc346
    FST float ptr [EDX]                 ; 004dc348
    FCOMP float ptr [ESP]               ; 004dc34a
    FNSTSW AX                           ; 004dc34d
    SAHF                                ; 004dc34f
    JNC 0x004dc31c                      ; 004dc350
        ;   XREF to: 004dc31c (CONDITIONAL_JUMP)  ; LAB_004dc31c
    MOV EAX,dword ptr [ESP]             ; 004dc352
    MOV dword ptr [EDX],EAX             ; 004dc355
    ADD ESP,0x4                         ; 004dc357
    RET                                 ; 004dc35a
    MOV EAX,dword ptr [ESP + 0x18]      ; 004dc35b
        ;   Label: LAB_004dc35b
    MOV dword ptr [EDX],EAX             ; 004dc35f
    ADD ESP,0x4                         ; 004dc361
    RET                                 ; 004dc364

