; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hero_cpp_isAnyHeroWithinRadius_FUN_004f2220(CVector3f *point,float radius)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   point
; float            Stack[0x8]:4   radius
;
; XREF[5]:
;   core_fire.cpp_initProcess_FUN_004c4b00 at 004c4b62
;   core_manpuz.cpp_CMansionPuzzleCircle_process_FUN_005091d0 at 005091de
;   core_trash.cpp_CTrash_process_FUN_005decf0 at 005ded0b
;   core_trigger.cpp_CTrigger_process_FUN_005dfac0 at 005dff26
;   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 at 005e6902
;
; Referenced Globals:
;   int g_HeroCount
;   CHero*[4] g_HeroActors
;   undefined4 g_HeroActors[1]
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f2220
        ;   Label: core_hero.cpp_isAnyHeroWithinRadius_FUN_004f2220
    PUSH ESI                            ; 004f2221
    SUB ESP,0xc                         ; 004f2222
    MOV ECX,dword ptr [ESP + 0x18]      ; 004f2225
    FLD float ptr [ESP + 0x1c]          ; 004f2229
    FMUL ST0                            ; 004f222d
    MOV EDX,dword ptr [0x02db87bc]      ; 004f222f | g_HeroCount
    FSTP float ptr [ESP + 0x1c]         ; 004f2235
    TEST EDX,EDX                        ; 004f2239
    JLE 0x004f2259                      ; 004f223b
        ;   XREF to: 004f2259 (CONDITIONAL_JUMP)  ; LAB_004f2259
    MOV EBX,dword ptr [0x02db87bc]      ; 004f223d | g_HeroCount
    XOR EDX,EDX                         ; 004f2243
    SHL EBX,0x2                         ; 004f2245
    MOV ESI,dword ptr [EDX + 0x2db87c0] ; 004f2248 | g_HeroActors | g_HeroActors[1]
        ;   Label: LAB_004f2248
    TEST ESI,ESI                        ; 004f224e
    JNZ 0x004f2261                      ; 004f2250
        ;   XREF to: 004f2261 (CONDITIONAL_JUMP)  ; LAB_004f2261
    ADD EDX,0x4                         ; 004f2252
        ;   Label: LAB_004f2252
    CMP EDX,EBX                         ; 004f2255
    JL 0x004f2248                       ; 004f2257
        ;   XREF to: 004f2248 (CONDITIONAL_JUMP)  ; LAB_004f2248
    XOR EAX,EAX                         ; 004f2259
        ;   Label: LAB_004f2259
    ADD ESP,0xc                         ; 004f225b
    POP ESI                             ; 004f225e
    POP EBX                             ; 004f225f
    RET                                 ; 004f2260
    MOV EAX,ESI                         ; 004f2261
        ;   Label: LAB_004f2261
    FLD float ptr [EAX + 0x20]          ; 004f2263
    FSUB float ptr [ECX]                ; 004f2266
    FMUL ST0                            ; 004f2268
    FLD float ptr [EAX + 0x24]          ; 004f226a
    FSUB float ptr [ECX + 0x4]          ; 004f226d
    FMUL ST0                            ; 004f2270
    FLD float ptr [EAX + 0x28]          ; 004f2272
    FXCH                                ; 004f2275
    FADDP ST2,ST0                       ; 004f2277
    FSUB float ptr [ECX + 0x8]          ; 004f2279
    FMUL ST0                            ; 004f227c
    FADDP                               ; 004f227e
    FCOMP float ptr [ESP + 0x1c]        ; 004f2280
    FNSTSW AX                           ; 004f2284
    SAHF                                ; 004f2286
    JNC 0x004f2252                      ; 004f2287
        ;   XREF to: 004f2252 (CONDITIONAL_JUMP)  ; LAB_004f2252
    MOV EAX,0x1                         ; 004f2289
    ADD ESP,0xc                         ; 004f228e
    POP ESI                             ; 004f2291
    POP EBX                             ; 004f2292
    RET                                 ; 004f2293

