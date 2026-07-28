; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_dtrace_cpp_CDemonRaytrace_getBBoxMin_FUN_0046b9c0(CDemonRaytrace *this_ptr,CVector3f *output_vector)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   output_vector
;
; XREF[3]:
;   core_dskybox.cpp_renderSkyDome_FUN_00463580 at 004635c9
;   core_water.cpp_CWater_calculateVisibleTiles_FUN_00550800 at 0055086b
;   core_weather.cpp_CWeather_createLightningStrike_FUN_00554d40 at 00554dac
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046b9c0
        ;   Label: core_dtrace.cpp_CDemonRaytrace_getBBoxMin_FUN_0046b9c0
    MOV ECX,dword ptr [ESP + 0xc]       ; 0046b9c1
    MOV EAX,dword ptr [ESP + 0x8]       ; 0046b9c5
    ADD EAX,0x10                        ; 0046b9c9
    MOV EDX,dword ptr [EAX]             ; 0046b9cc
    LEA EBX,[EAX + 0x4]                 ; 0046b9ce
    MOV dword ptr [ECX],EDX             ; 0046b9d1
    LEA EDX,[ECX + 0x4]                 ; 0046b9d3
    MOV EBX,dword ptr [EBX]             ; 0046b9d6
    MOV dword ptr [EDX],EBX             ; 0046b9d8
    MOV EAX,dword ptr [EAX + 0x8]       ; 0046b9da
    MOV dword ptr [EDX + 0x4],EAX       ; 0046b9dd
    MOV EAX,ECX                         ; 0046b9e0
    POP EBX                             ; 0046b9e2
    RET                                 ; 0046b9e3

