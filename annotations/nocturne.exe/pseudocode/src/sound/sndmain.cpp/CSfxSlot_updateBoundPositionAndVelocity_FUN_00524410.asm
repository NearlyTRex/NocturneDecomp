; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_CSfxSlot_updateBoundPositionAndVelocity_FUN_00524410(CSfxSlot *this_ptr)
;
; Parameters:
; CSfxSlot *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_00524830 at 005248f4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00524410
        ;   Label: sound_sndmain.cpp_CSfxSlot_updateBoundPositionAndVelocity_FUN_00524410
    MOV EAX,dword ptr [ESP + 0x8]       ; 00524411
    MOV EDX,dword ptr [EAX + 0x20]      ; 00524415
    CMP EDX,0x1                         ; 00524418
    JZ 0x00524451                       ; 0052441b
        ;   XREF to: 00524451 (CONDITIONAL_JUMP)  ; LAB_00524451
    CMP EDX,0x2                         ; 0052441d
    JNZ 0x00524442                      ; 00524420
        ;   XREF to: 00524442 (CONDITIONAL_JUMP)  ; LAB_00524442
    MOV EDX,dword ptr [EAX + 0x1c]      ; 00524422
    FLD double ptr [EDX]                ; 00524425
    MOV EDX,dword ptr [EAX + 0x1c]      ; 00524427
    FSTP double ptr [EAX + 0x4]         ; 0052442a
    FLD double ptr [EDX + 0x8]          ; 0052442d
    MOV EDX,dword ptr [EAX + 0x1c]      ; 00524430
    FSTP double ptr [EAX + 0xc]         ; 00524433
    MOV ECX,dword ptr [EDX + 0x10]      ; 00524436
    MOV dword ptr [EAX + 0x14],ECX      ; 00524439
    MOV ECX,dword ptr [EDX + 0x14]      ; 0052443c
    MOV dword ptr [EAX + 0x18],ECX      ; 0052443f
    MOV EBX,dword ptr [EAX + 0x40]      ; 00524442
        ;   Label: LAB_00524442
    CMP EBX,0x1                         ; 00524445
    JZ 0x0052446d                       ; 00524448
        ;   XREF to: 0052446d (CONDITIONAL_JUMP)  ; LAB_0052446d
    CMP EBX,0x2                         ; 0052444a
    JZ 0x00524489                       ; 0052444d
        ;   XREF to: 00524489 (CONDITIONAL_JUMP)  ; LAB_00524489
    POP EBX                             ; 0052444f
    RET                                 ; 00524450
    MOV EDX,dword ptr [EAX + 0x1c]      ; 00524451
        ;   Label: LAB_00524451
    FLD float ptr [EDX]                 ; 00524454
    MOV EDX,dword ptr [EAX + 0x1c]      ; 00524456
    FSTP double ptr [EAX + 0x4]         ; 00524459
    FLD float ptr [EDX + 0x4]           ; 0052445c
    MOV EDX,dword ptr [EAX + 0x1c]      ; 0052445f
    FSTP double ptr [EAX + 0xc]         ; 00524462
    FLD float ptr [EDX + 0x8]           ; 00524465
    FSTP double ptr [EAX + 0x14]        ; 00524468
    JMP 0x00524442                      ; 0052446b
        ;   XREF to: 00524442 (UNCONDITIONAL_JUMP)  ; LAB_00524442
    MOV EDX,dword ptr [EAX + 0x3c]      ; 0052446d
        ;   Label: LAB_0052446d
    FLD float ptr [EDX]                 ; 00524470
    MOV EDX,dword ptr [EAX + 0x3c]      ; 00524472
    FSTP double ptr [EAX + 0x24]        ; 00524475
    FLD float ptr [EDX + 0x4]           ; 00524478
    MOV EDX,dword ptr [EAX + 0x3c]      ; 0052447b
    FSTP double ptr [EAX + 0x2c]        ; 0052447e
    FLD float ptr [EDX + 0x8]           ; 00524481
    FSTP double ptr [EAX + 0x34]        ; 00524484
    POP EBX                             ; 00524487
    RET                                 ; 00524488
    MOV EDX,dword ptr [EAX + 0x3c]      ; 00524489
        ;   Label: LAB_00524489
    FLD double ptr [EDX]                ; 0052448c
    MOV EDX,dword ptr [EAX + 0x3c]      ; 0052448e
    FSTP double ptr [EAX + 0x24]        ; 00524491
    FLD double ptr [EDX + 0x8]          ; 00524494
    MOV EDX,dword ptr [EAX + 0x3c]      ; 00524497
    FSTP double ptr [EAX + 0x2c]        ; 0052449a
    MOV ECX,dword ptr [EDX + 0x10]      ; 0052449d
    MOV dword ptr [EAX + 0x34],ECX      ; 005244a0
    MOV ECX,dword ptr [EDX + 0x14]      ; 005244a3
    MOV dword ptr [EAX + 0x38],ECX      ; 005244a6
    POP EBX                             ; 005244a9
    RET                                 ; 005244aa

