; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_clipper_c_getFarPlaneDistance_FUN_00431520(void)
;
;
; Referenced Globals:
;   int g_FarPlaneDistance = 0x7fffffff
;
; *****************************************************************************

section .text

    MOV EAX,[0x005ad284]                ; 00431520 | g_FarPlaneDistance
        ;   Label: engine_clipper.c_getFarPlaneDistance_FUN_00431520
    RET                                 ; 00431525

