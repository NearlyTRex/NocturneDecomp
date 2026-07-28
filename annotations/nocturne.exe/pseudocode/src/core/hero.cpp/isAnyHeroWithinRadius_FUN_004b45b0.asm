; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hero_cpp_isAnyHeroWithinRadius_FUN_004b45b0(CVector3f *point,float radius)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   point
; float            Stack[0x8]:4   radius
;
; XREF[5]:
;   core_fire.cpp_initProcess_FUN_00487fd0 at 00488032
;   core_manpuz.cpp_FUN_004c9cf0 at 004c9cfe
;   core_trash.cpp_FUN_00546e10 at 00546e2b
;   core_trigger.cpp_FUN_00547b30 at 00547b6d
;   core_vampboss.cpp_CVampireBoss_process_FUN_0054c690 at 0054d622
;
; Referenced Globals:
;   undefined4 DAT_01cae0d4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b45b0
        ;   Label: core_hero.cpp_isAnyHeroWithinRadius_FUN_004b45b0
    PUSH ESI                            ; 004b45b1
    SUB ESP,0xc                         ; 004b45b2
    MOV ECX,dword ptr [ESP + 0x18]      ; 004b45b5
    FLD float ptr [ESP + 0x1c]          ; 004b45b9
    FMUL ST0                            ; 004b45bd
    MOV EDX,dword ptr [0x01cae0d4]      ; 004b45bf | DAT_01cae0d4
    FSTP float ptr [ESP + 0x1c]         ; 004b45c5
    TEST EDX,EDX                        ; 004b45c9
    JLE 0x004b45e9                      ; 004b45cb
        ;   XREF to: 004b45e9 (CONDITIONAL_JUMP)  ; LAB_004b45e9
    MOV EBX,dword ptr [0x01cae0d4]      ; 004b45cd | DAT_01cae0d4
    XOR EDX,EDX                         ; 004b45d3
    SHL EBX,0x2                         ; 004b45d5
    MOV ESI,dword ptr [EDX + 0x1cae0d8] ; 004b45d8
        ;   Label: LAB_004b45d8
    TEST ESI,ESI                        ; 004b45de
    JNZ 0x004b45f1                      ; 004b45e0
        ;   XREF to: 004b45f1 (CONDITIONAL_JUMP)  ; LAB_004b45f1
    ADD EDX,0x4                         ; 004b45e2
        ;   Label: LAB_004b45e2
    CMP EDX,EBX                         ; 004b45e5
    JL 0x004b45d8                       ; 004b45e7
        ;   XREF to: 004b45d8 (CONDITIONAL_JUMP)  ; LAB_004b45d8
    XOR EAX,EAX                         ; 004b45e9
        ;   Label: LAB_004b45e9
    ADD ESP,0xc                         ; 004b45eb
    POP ESI                             ; 004b45ee
    POP EBX                             ; 004b45ef
    RET                                 ; 004b45f0
    MOV EAX,ESI                         ; 004b45f1
        ;   Label: LAB_004b45f1
    FLD float ptr [EAX + 0x20]          ; 004b45f3
    FSUB float ptr [ECX]                ; 004b45f6
    FMUL ST0                            ; 004b45f8
    FLD float ptr [EAX + 0x24]          ; 004b45fa
    FSUB float ptr [ECX + 0x4]          ; 004b45fd
    FMUL ST0                            ; 004b4600
    FLD float ptr [EAX + 0x28]          ; 004b4602
    FXCH                                ; 004b4605
    FADDP ST2,ST0                       ; 004b4607
    FSUB float ptr [ECX + 0x8]          ; 004b4609
    FMUL ST0                            ; 004b460c
    FADDP                               ; 004b460e
    FCOMP float ptr [ESP + 0x1c]        ; 004b4610
    FNSTSW AX                           ; 004b4614
    SAHF                                ; 004b4616
    JNC 0x004b45e2                      ; 004b4617
        ;   XREF to: 004b45e2 (CONDITIONAL_JUMP)  ; LAB_004b45e2
    MOV EAX,0x1                         ; 004b4619
    ADD ESP,0xc                         ; 004b461e
    POP ESI                             ; 004b4621
    POP EBX                             ; 004b4622
    RET                                 ; 004b4623

