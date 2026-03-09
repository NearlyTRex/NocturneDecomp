; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hero_cpp_closestHeroToPoint_FUN_004f2170(CLocation *location)
;
; Parameters:
; CLocation *      Stack[0x4]:4   location
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_charactr.cpp_CCharacter_moveOutOfHeroWay_FUN_0042ede0 at 0042ee67
;   core_emitter.cpp_CEmitter_launchFireballAtHero_FUN_004a7e80 at 004a7e91
;
; Referenced Globals:
;   TerminatedCString s_core_hero_cpp_0062ea7d
;   TerminatedCString s_closestHeroToPoint_no_he_0062ea8e
;   int g_HeroCount
;   CHero*[4] g_HeroActors
;   undefined4 DAT_02db87c4
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f2170
        ;   Label: core_hero.cpp_closestHeroToPoint_FUN_004f2170
    PUSH ESI                            ; 004f2171
    PUSH EDI                            ; 004f2172
    PUSH EBP                            ; 004f2173
    SUB ESP,0x14                        ; 004f2174
    MOV EBX,dword ptr [ESP + 0x28]      ; 004f2177
    MOV EDX,0x7149f2ca                  ; 004f217b
    MOV ECX,dword ptr [0x02db87bc]      ; 004f2180 | g_HeroCount
    XOR ESI,ESI                         ; 004f2186
    MOV dword ptr [ESP + 0x8],EDX       ; 004f2188
    TEST ECX,ECX                        ; 004f218c
    JLE 0x004f21aa                      ; 004f218e
        ;   XREF to: 004f21aa (CONDITIONAL_JUMP)  ; LAB_004f21aa
    LEA EDI,[ECX*0x4 + 0x0]             ; 004f2190
    XOR EDX,EDX                         ; 004f2197
    MOV EBP,dword ptr [EDX + 0x2db87c0] ; 004f2199 | g_HeroActors | DAT_02db87c4
        ;   Label: LAB_004f2199
    TEST EBP,EBP                        ; 004f219f
    JNZ 0x004f21b8                      ; 004f21a1
        ;   XREF to: 004f21b8 (CONDITIONAL_JUMP)  ; LAB_004f21b8
    ADD EDX,0x4                         ; 004f21a3
        ;   Label: LAB_004f21a3
    CMP EDX,EDI                         ; 004f21a6
    JL 0x004f2199                       ; 004f21a8
        ;   XREF to: 004f2199 (CONDITIONAL_JUMP)  ; LAB_004f2199
    TEST ESI,ESI                        ; 004f21aa
        ;   Label: LAB_004f21aa
    JZ 0x004f21f2                       ; 004f21ac
        ;   XREF to: 004f21f2 (CONDITIONAL_JUMP)  ; LAB_004f21f2
    MOV EAX,ESI                         ; 004f21ae
    ADD ESP,0x14                        ; 004f21b0
    POP EBP                             ; 004f21b3
    POP EDI                             ; 004f21b4
    POP ESI                             ; 004f21b5
    POP EBX                             ; 004f21b6
    RET                                 ; 004f21b7
    MOV ECX,EBP                         ; 004f21b8
        ;   Label: LAB_004f21b8
    LEA EAX,[EBP + 0x20]                ; 004f21ba
    FLD float ptr [EAX]                 ; 004f21bd
    FSUB float ptr [EBX]                ; 004f21bf
    FMUL ST0                            ; 004f21c1
    FLD float ptr [EAX + 0x4]           ; 004f21c3
    FSUB float ptr [EBX + 0x4]          ; 004f21c6
    FMUL ST0                            ; 004f21c9
    FLD float ptr [EAX + 0x8]           ; 004f21cb
    FXCH                                ; 004f21ce
    FADDP ST2,ST0                       ; 004f21d0
    FSUB float ptr [EBX + 0x8]          ; 004f21d2
    FMUL ST0                            ; 004f21d5
    FADDP                               ; 004f21d7
    FST float ptr [ESP + 0xc]           ; 004f21d9
    FCOMP float ptr [ESP + 0x8]         ; 004f21dd
    FNSTSW AX                           ; 004f21e1
    SAHF                                ; 004f21e3
    JNC 0x004f21a3                      ; 004f21e4
        ;   XREF to: 004f21a3 (CONDITIONAL_JUMP)  ; LAB_004f21a3
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f21e6
    MOV ESI,EBP                         ; 004f21ea
    MOV dword ptr [ESP + 0x8],EAX       ; 004f21ec
    JMP 0x004f21a3                      ; 004f21f0
        ;   XREF to: 004f21a3 (UNCONDITIONAL_JUMP)  ; LAB_004f21a3
    MOV EBX,0x62ea7d                    ; 004f21f2 | = "..\\core\\hero.cpp"
        ;   Label: LAB_004f21f2
    MOV EDI,0x34                        ; 004f21f7
    PUSH 0x62ea8e                       ; 004f21fc | = "closestHeroToPoint - no heros!"
    MOV dword ptr [0x02f0ca48],EBX      ; 004f2201 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 004f2207 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004f220d
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004f2212
    MOV EAX,ESI                         ; 004f2215
    ADD ESP,0x14                        ; 004f2217
    POP EBP                             ; 004f221a
    POP EDI                             ; 004f221b
    POP ESI                             ; 004f221c
    POP EBX                             ; 004f221d
    RET                                 ; 004f221e

