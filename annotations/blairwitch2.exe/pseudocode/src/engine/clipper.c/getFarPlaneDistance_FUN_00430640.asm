; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_clipper_c_getFarPlaneDistance_FUN_00430640(void)
;
;
; Referenced Globals:
;   int g_FarPlaneDistance = 0x7fffffff
;
; *****************************************************************************

section .text

    MOV EAX,[0x00609b34]                ; 00430640 | g_FarPlaneDistance
        ;   Label: engine_clipper.c_getFarPlaneDistance_FUN_00430640
    RET                                 ; 00430645

