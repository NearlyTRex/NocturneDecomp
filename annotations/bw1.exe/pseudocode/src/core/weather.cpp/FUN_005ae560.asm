; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_weather_cpp_FUN_005ae560(void)
;
;
; XREF[1]:
;   core_weather.cpp_CWeather_createLightningStrike_FUN_005ae580 at 005ae784
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 g_CDemonSetInstance.field1420984_0x15aeb8
;
; *****************************************************************************

section .text

    MOV EAX,[0x00622c18]                ; 005ae560 | g_CDemonSetPtr
        ;   Label: core_weather.cpp_FUN_005ae560
    MOV EDX,dword ptr [EAX + 0x15aeb8]  ; 005ae565 | g_CDemonSetInstance.field1420984_0x15aeb8
    IMUL EDX,EDX,0x1a4                  ; 005ae56b
    MOV EAX,dword ptr [EDX + EAX*0x1 + 0x14c] ; 005ae571
    RET                                 ; 005ae578

