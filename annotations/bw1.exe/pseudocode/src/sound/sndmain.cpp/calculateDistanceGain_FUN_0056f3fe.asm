; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl sound_sndmain_cpp_calculateDistanceGain_FUN_0056f3fe(float distance,float reference_distance,float min_distance,float max_distance)
;
; Parameters:
; float            Stack[0x4]:4   distance
; float            Stack[0x8]:4   reference_distance
; float            Stack[0xc]:4   min_distance
; float            Stack[0x10]:4   max_distance
;
; Referenced Globals:
;   undefined4 DAT_005f3148
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 0056f3fe
        ;   Label: sound_sndmain.cpp_calculateDistanceGain_FUN_0056f3fe
    SUB ESP,0x4                         ; 0056f400
    FLD float ptr [ESP + 0x8]           ; 0056f403
    FCOMP float ptr [ESP + 0x10]        ; 0056f407
    FNSTSW AX                           ; 0056f40b
    SAHF                                ; 0056f40d
    JC 0x0056f446                       ; 0056f40e
        ;   XREF to: 0056f446 (CONDITIONAL_JUMP)  ; LAB_0056f446
    FLD float ptr [ESP + 0x8]           ; 0056f410
        ;   Label: LAB_0056f410
    FCOMP float ptr [ESP + 0x14]        ; 0056f414
    FNSTSW AX                           ; 0056f418
    SAHF                                ; 0056f41a
    JBE 0x0056f425                      ; 0056f41b
        ;   XREF to: 0056f425 (CONDITIONAL_JUMP)  ; LAB_0056f425
    MOV EAX,dword ptr [ESP + 0x14]      ; 0056f41d
    MOV dword ptr [ESP + 0x8],EAX       ; 0056f421
    FLD float ptr [ESP + 0xc]           ; 0056f425
        ;   Label: LAB_0056f425
    FMUL float ptr [0x005f3148]         ; 0056f429 | DAT_005f3148
    FCOMP float ptr [ESP + 0x8]         ; 0056f42f
    FNSTSW AX                           ; 0056f433
    SAHF                                ; 0056f435
    JC 0x0056f450                       ; 0056f436
        ;   XREF to: 0056f450 (CONDITIONAL_JUMP)  ; LAB_0056f450
    MOV dword ptr [ESP],0x41a00000      ; 0056f438
    MOV EAX,dword ptr [ESP]             ; 0056f43f
    ADD ESP,0x4                         ; 0056f442
    RET                                 ; 0056f445
    MOV EAX,dword ptr [ESP + 0x10]      ; 0056f446
        ;   Label: LAB_0056f446
    MOV dword ptr [ESP + 0x8],EAX       ; 0056f44a
    JMP 0x0056f410                      ; 0056f44e
        ;   XREF to: 0056f410 (UNCONDITIONAL_JUMP)  ; LAB_0056f410
    FLD float ptr [ESP + 0xc]           ; 0056f450
        ;   Label: LAB_0056f450
    FDIV float ptr [ESP + 0x8]          ; 0056f454
    FSTP float ptr [ESP]                ; 0056f458
    MOV EAX,dword ptr [ESP]             ; 0056f45b
    ADD ESP,0x4                         ; 0056f45e
    RET                                 ; 0056f461

