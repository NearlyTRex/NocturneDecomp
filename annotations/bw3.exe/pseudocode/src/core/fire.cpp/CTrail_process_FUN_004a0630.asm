; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CTrail_process_FUN_004a0630(CTrail *this_ptr)
;
; Parameters:
; CTrail *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_process_FUN_004a1760 at 004a19ff
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 g_CGameInstance.delta_time_float
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004a0630
        ;   Label: core_fire.cpp_CTrail_process_FUN_004a0630
    FLD float ptr [EDX + 0x10]          ; 004a0634
    FLDZ                                ; 004a0637
    FCOMPP                              ; 004a0639
    FNSTSW AX                           ; 004a063b
    SAHF                                ; 004a063d
    JNC 0x004a0666                      ; 004a063e
        ;   XREF to: 004a0666 (CONDITIONAL_JUMP)  ; LAB_004a0666
    MOV ECX,dword ptr [0x005fe9dc]      ; 004a0640 | g_CGamePtr
    LEA EAX,[EDX + 0x10]                ; 004a0646
    FLD float ptr [ECX + 0x314]         ; 004a0649 | g_CGameInstance.delta_time_float
    FSUBR float ptr [EAX]               ; 004a064f
    FSTP float ptr [EAX]                ; 004a0651
    FLD float ptr [EDX + 0x10]          ; 004a0653
    FLDZ                                ; 004a0656
    FCOMPP                              ; 004a0658
    FNSTSW AX                           ; 004a065a
    SAHF                                ; 004a065c
    JBE 0x004a0667                      ; 004a065d
        ;   XREF to: 004a0667 (CONDITIONAL_JUMP)  ; LAB_004a0667
    MOV dword ptr [EDX + 0x10],0x0      ; 004a065f
    RET                                 ; 004a0666
        ;   Label: LAB_004a0666
    FLD float ptr [EDX + 0x18]          ; 004a0667
        ;   Label: LAB_004a0667
    FSUB float ptr [EDX + 0x10]         ; 004a066a
    FDIV float ptr [EDX + 0x18]         ; 004a066d
    FLD1                                ; 004a0670
    FSUBRP                              ; 004a0672
    FMUL float ptr [EDX + 0x1c]         ; 004a0674
    FSTP float ptr [EDX + 0x14]         ; 004a0677
    RET                                 ; 004a067a

