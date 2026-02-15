; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_CMotionController_reverseTransition_FUN_0052da50(CMotionController *this_ptr)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_motion.cpp_CMotionController_advance_FUN_0052d610 at 0052d877
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 at 0052db72
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052da50
        ;   Label: core_motion.cpp_CMotionController_reverseTransition_FUN_0052da50
    PUSH ESI                            ; 0052da51
    MOV EAX,dword ptr [ESP + 0xc]       ; 0052da52
    LEA EDX,[EAX + 0x4]                 ; 0052da56
    LEA ECX,[EAX + 0x18]                ; 0052da59
    MOV dword ptr [EAX + 0x20],0x1      ; 0052da5c
    MOV ESI,dword ptr [ECX]             ; 0052da63
    MOV EBX,dword ptr [EDX]             ; 0052da65
    MOV dword ptr [EDX],ESI             ; 0052da67
    MOV dword ptr [ECX],EBX             ; 0052da69
    LEA ECX,[EAX + 0x8]                 ; 0052da6b
    LEA EDX,[EAX + 0x1c]                ; 0052da6e
    MOV EBX,dword ptr [ECX]             ; 0052da71
    MOV ESI,dword ptr [EDX]             ; 0052da73
    MOV dword ptr [ECX],ESI             ; 0052da75
    MOV dword ptr [EDX],EBX             ; 0052da77
    MOV EDX,dword ptr [EAX + 0xc]       ; 0052da79
    CMP EDX,0x5                         ; 0052da7c
    JZ 0x0052da93                       ; 0052da7f
        ;   XREF to: 0052da93 (CONDITIONAL_JUMP)  ; LAB_0052da93
    CMP EDX,0x4                         ; 0052da81
    JZ 0x0052da9c                       ; 0052da84
        ;   XREF to: 0052da9c (CONDITIONAL_JUMP)  ; LAB_0052da9c
    FLD float ptr [EAX + 0x14]          ; 0052da86
        ;   Label: LAB_0052da86
    FLD1                                ; 0052da89
    FSUBRP                              ; 0052da8b
    FSTP float ptr [EAX + 0x14]         ; 0052da8d
    POP ESI                             ; 0052da90
    POP EBX                             ; 0052da91
    RET                                 ; 0052da92
    MOV dword ptr [EAX + 0xc],0x4       ; 0052da93
        ;   Label: LAB_0052da93
    JMP 0x0052da86                      ; 0052da9a
        ;   XREF to: 0052da86 (UNCONDITIONAL_JUMP)  ; LAB_0052da86
    MOV dword ptr [EAX + 0xc],0x5       ; 0052da9c
        ;   Label: LAB_0052da9c
    FLD float ptr [EAX + 0x14]          ; 0052daa3
    FLD1                                ; 0052daa6
    FSUBRP                              ; 0052daa8
    FSTP float ptr [EAX + 0x14]         ; 0052daaa
    POP ESI                             ; 0052daad
    POP EBX                             ; 0052daae
    RET                                 ; 0052daaf

