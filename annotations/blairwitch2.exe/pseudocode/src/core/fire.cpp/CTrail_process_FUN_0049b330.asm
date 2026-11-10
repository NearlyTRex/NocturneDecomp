; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CTrail_process_FUN_0049b330(CTrail *this_ptr)
;
; Parameters:
; CTrail *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_process_FUN_0049c430 at 0049c6ee
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 g_CGameInstance.delta_time_float
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0049b330
        ;   Label: core_fire.cpp_CTrail_process_FUN_0049b330
    FLD float ptr [EDX + 0x10]          ; 0049b334
    FLDZ                                ; 0049b337
    FCOMPP                              ; 0049b339
    FNSTSW AX                           ; 0049b33b
    SAHF                                ; 0049b33d
    JNC 0x0049b366                      ; 0049b33e
        ;   XREF to: 0049b366 (CONDITIONAL_JUMP)  ; LAB_0049b366
    MOV ECX,dword ptr [0x00616494]      ; 0049b340 | g_CGamePtr
    LEA EAX,[EDX + 0x10]                ; 0049b346
    FLD float ptr [ECX + 0x284]         ; 0049b349 | g_CGameInstance.delta_time_float
    FSUBR float ptr [EAX]               ; 0049b34f
    FSTP float ptr [EAX]                ; 0049b351
    FLD float ptr [EDX + 0x10]          ; 0049b353
    FLDZ                                ; 0049b356
    FCOMPP                              ; 0049b358
    FNSTSW AX                           ; 0049b35a
    SAHF                                ; 0049b35c
    JBE 0x0049b367                      ; 0049b35d
        ;   XREF to: 0049b367 (CONDITIONAL_JUMP)  ; LAB_0049b367
    MOV dword ptr [EDX + 0x10],0x0      ; 0049b35f
    RET                                 ; 0049b366
        ;   Label: LAB_0049b366
    FLD float ptr [EDX + 0x18]          ; 0049b367
        ;   Label: LAB_0049b367
    FSUB float ptr [EDX + 0x10]         ; 0049b36a
    FDIV float ptr [EDX + 0x18]         ; 0049b36d
    FLD1                                ; 0049b370
    FSUBRP                              ; 0049b372
    FMUL float ptr [EDX + 0x1c]         ; 0049b374
    FSTP float ptr [EDX + 0x14]         ; 0049b377
    RET                                 ; 0049b37a

