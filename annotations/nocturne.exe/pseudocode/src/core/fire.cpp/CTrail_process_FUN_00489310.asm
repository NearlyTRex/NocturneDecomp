; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CTrail_process_FUN_00489310(CTrail *this_ptr)
;
; Parameters:
; CTrail *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_process_FUN_0048a390 at 0048a5be
;
; Referenced Globals:
;   CGame* g_CGame_PTR_005b9354 = 01c775ec
;   undefined4 g_CGame_01c775ec.delta_time_float
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00489310
        ;   Label: core_fire.cpp_CTrail_process_FUN_00489310
    FLD float ptr [EDX + 0x10]          ; 00489314
    FLDZ                                ; 00489317
    FCOMPP                              ; 00489319
    FNSTSW AX                           ; 0048931b
    SAHF                                ; 0048931d
    JNC 0x00489346                      ; 0048931e
        ;   XREF to: 00489346 (CONDITIONAL_JUMP)  ; LAB_00489346
    MOV ECX,dword ptr [0x005b9354]      ; 00489320 | g_CGame_PTR_005b9354
    LEA EAX,[EDX + 0x10]                ; 00489326
    FLD float ptr [ECX + 0x264]         ; 00489329 | g_CGame_01c775ec.delta_time_float
    FSUBR float ptr [EAX]               ; 0048932f
    FSTP float ptr [EAX]                ; 00489331
    FLD float ptr [EDX + 0x10]          ; 00489333
    FLDZ                                ; 00489336
    FCOMPP                              ; 00489338
    FNSTSW AX                           ; 0048933a
    SAHF                                ; 0048933c
    JBE 0x00489347                      ; 0048933d
        ;   XREF to: 00489347 (CONDITIONAL_JUMP)  ; LAB_00489347
    MOV dword ptr [EDX + 0x10],0x0      ; 0048933f
    RET                                 ; 00489346
        ;   Label: LAB_00489346
    FLD float ptr [EDX + 0x18]          ; 00489347
        ;   Label: LAB_00489347
    FSUB float ptr [EDX + 0x10]         ; 0048934a
    FDIV float ptr [EDX + 0x18]         ; 0048934d
    FLD1                                ; 00489350
    FSUBRP                              ; 00489352
    FMUL float ptr [EDX + 0x1c]         ; 00489354
    FSTP float ptr [EDX + 0x14]         ; 00489357
    RET                                 ; 0048935a

