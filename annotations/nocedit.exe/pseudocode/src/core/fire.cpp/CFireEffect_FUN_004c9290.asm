; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fire.cpp_CFireEffect_FUN_004c9290(CFireEffect * this_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_weather.cpp_CWeather_SomethingWithLightingThunder_FUN_005eeaf0 at 005eebb0
;
; Referenced Globals:
;   CPopcorn* g_CFireEffectPopcornsEnd
;   CRainDrop[256] g_RainDropPool
;   undefined4 DAT_02d76edc
;   undefined4 DAT_02d76ef8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c9290
        ;   Label: core_fire.cpp_CFireEffect_FUN_004c9290
    PUSH ESI                            ; 004c9291
    MOV EBX,dword ptr [0x02d76ec0]      ; 004c9292 | g_CFireEffectPopcornsEnd
    LEA EAX,[EBX*0x8 + 0x0]             ; 004c9298
    MOV ECX,dword ptr [ESP + 0x14]      ; 004c929f
    MOV EDX,EAX                         ; 004c92a3
    PUSH ECX                            ; 004c92a5
    SHL EAX,0x3                         ; 004c92a6
    MOV ESI,dword ptr [ESP + 0x14]      ; 004c92a9
    SUB EAX,EDX                         ; 004c92ad
    PUSH ESI                            ; 004c92af
    ADD EAX,0x2d76ec4                   ; 004c92b0 | g_RainDropPool
    PUSH EAX                            ; 004c92b5
    MOV EDX,dword ptr [EAX + 0x34]      ; 004c92b6 | DAT_02d76ef8
    CALL dword ptr [EDX]                ; 004c92b9
    MOV EBX,dword ptr [0x02d76ec0]      ; 004c92bb | g_CFireEffectPopcornsEnd
    LEA EAX,[EBX*0x8 + 0x0]             ; 004c92c1
    MOV EDX,EAX                         ; 004c92c8
    SHL EAX,0x3                         ; 004c92ca
    SUB EAX,EDX                         ; 004c92cd
    ADD EAX,0x2d76ec4                   ; 004c92cf | g_RainDropPool
    ADD ESP,0xc                         ; 004c92d4
    INC EBX                             ; 004c92d7
    MOV dword ptr [EAX + 0x18],0x3e800000 ; 004c92d8 | DAT_02d76edc
    CMP EBX,0x100                       ; 004c92df
    JL 0x004c92e9                       ; 004c92e5
        ;   XREF to: 004c92e9 (CONDITIONAL_JUMP)  ; LAB_004c92e9
    XOR EBX,EBX                         ; 004c92e7
    MOV dword ptr [0x02d76ec0],EBX      ; 004c92e9 | g_CFireEffectPopcornsEnd
        ;   Label: LAB_004c92e9
    POP ESI                             ; 004c92ef
    POP EBX                             ; 004c92f0
    RET                                 ; 004c92f1

