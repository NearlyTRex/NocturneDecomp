; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hero_cpp_isAnyHeroWithinCylinder_FUN_004f22a0(CVector3f *point,float horizontal_radius,float vertical_tolerance)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   point
; float            Stack[0x8]:4   horizontal_radius
; float            Stack[0xc]:4   vertical_tolerance
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_process_FUN_00429870 at 00429a71
;
; Referenced Globals:
;   int g_HeroCount
;   CHero*[4] g_HeroActors
;   undefined4 DAT_02db87c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f22a0
        ;   Label: core_hero.cpp_isAnyHeroWithinCylinder_FUN_004f22a0
    PUSH ESI                            ; 004f22a1
    PUSH EBP                            ; 004f22a2
    MOV EBP,ESP                         ; 004f22a3
    SUB ESP,0x10                        ; 004f22a5
    AND ESP,0xfffffff8                  ; 004f22a8
    MOV EAX,dword ptr [EBP + 0x18]      ; 004f22ab
    MOV ECX,dword ptr [EBP + 0x10]      ; 004f22ae
    MOV dword ptr [ESP],EAX             ; 004f22b1
    FLD float ptr [EBP + 0x14]          ; 004f22b4
    FMUL ST0                            ; 004f22b7
    MOV EDX,dword ptr [0x02db87bc]      ; 004f22b9 | g_HeroCount
    FSTP float ptr [EBP + 0x14]         ; 004f22bf
    TEST EDX,EDX                        ; 004f22c2
    JLE 0x004f22e2                      ; 004f22c4
        ;   XREF to: 004f22e2 (CONDITIONAL_JUMP)  ; LAB_004f22e2
    MOV EBX,dword ptr [0x02db87bc]      ; 004f22c6 | g_HeroCount
    XOR EDX,EDX                         ; 004f22cc
    SHL EBX,0x2                         ; 004f22ce
    MOV ESI,dword ptr [EDX + 0x2db87c0] ; 004f22d1 | g_HeroActors | DAT_02db87c4
        ;   Label: LAB_004f22d1
    TEST ESI,ESI                        ; 004f22d7
    JNZ 0x004f22ea                      ; 004f22d9
        ;   XREF to: 004f22ea (CONDITIONAL_JUMP)  ; LAB_004f22ea
    ADD EDX,0x4                         ; 004f22db
        ;   Label: LAB_004f22db
    CMP EDX,EBX                         ; 004f22de
    JL 0x004f22d1                       ; 004f22e0
        ;   XREF to: 004f22d1 (CONDITIONAL_JUMP)  ; LAB_004f22d1
    XOR EAX,EAX                         ; 004f22e2
        ;   Label: LAB_004f22e2
    MOV ESP,EBP                         ; 004f22e4
    POP EBP                             ; 004f22e6
    POP ESI                             ; 004f22e7
    POP EBX                             ; 004f22e8
    RET                                 ; 004f22e9
    MOV EAX,ESI                         ; 004f22ea
        ;   Label: LAB_004f22ea
    FLD float ptr [EAX + 0x20]          ; 004f22ec
    FSUB float ptr [ECX]                ; 004f22ef
    FSTP float ptr [ESP + 0x4]          ; 004f22f1
    FLD float ptr [EAX + 0x24]          ; 004f22f5
    FSUB float ptr [ECX + 0x4]          ; 004f22f8
    FST float ptr [ESP + 0x8]           ; 004f22fb
    FLD float ptr [EAX + 0x28]          ; 004f22ff
    FXCH                                ; 004f2302
    FABS                                ; 004f2304
    FXCH                                ; 004f2306
    FSUB float ptr [ECX + 0x8]          ; 004f2308
    FSTP float ptr [ESP + 0xc]          ; 004f230b
    FLD float ptr [ESP]                 ; 004f230f
    FCOMPP                              ; 004f2312
    FNSTSW AX                           ; 004f2314
    SAHF                                ; 004f2316
    JC 0x004f22db                       ; 004f2317
        ;   XREF to: 004f22db (CONDITIONAL_JUMP)  ; LAB_004f22db
    FLD float ptr [ESP + 0xc]           ; 004f2319
    FMUL ST0                            ; 004f231d
    FLD float ptr [ESP + 0x4]           ; 004f231f
    FMUL ST0                            ; 004f2323
    FADDP                               ; 004f2325
    FCOMP float ptr [EBP + 0x14]        ; 004f2327
    FNSTSW AX                           ; 004f232a
    SAHF                                ; 004f232c
    JNC 0x004f22db                      ; 004f232d
        ;   XREF to: 004f22db (CONDITIONAL_JUMP)  ; LAB_004f22db
    MOV EAX,0x1                         ; 004f232f
    MOV ESP,EBP                         ; 004f2334
    POP EBP                             ; 004f2336
    POP ESI                             ; 004f2337
    POP EBX                             ; 004f2338
    RET                                 ; 004f2339

