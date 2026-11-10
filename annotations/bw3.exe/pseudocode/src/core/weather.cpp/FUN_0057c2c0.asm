; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_weather_cpp_FUN_0057c2c0(void)
;
;
; XREF[1]:
;   core_weather.cpp_FUN_0057c2e0 at 0057c5a8
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 g_CDemonSetInstance.selected_camera_index
;
; *****************************************************************************

section .text

    MOV EAX,[0x00603b28]                ; 0057c2c0 | g_CDemonSetPtr
        ;   Label: core_weather.cpp_FUN_0057c2c0
    MOV EDX,dword ptr [EAX + 0x15aeb8]  ; 0057c2c5 | g_CDemonSetInstance.selected_camera_index
    IMUL EDX,EDX,0x1a4                  ; 0057c2cb
    MOV EAX,dword ptr [EDX + EAX*0x1 + 0x14c] ; 0057c2d1
    RET                                 ; 0057c2d8

