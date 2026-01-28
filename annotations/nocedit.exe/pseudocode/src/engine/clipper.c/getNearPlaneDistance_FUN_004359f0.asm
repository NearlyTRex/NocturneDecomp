; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl engine_clipper_c_getNearPlaneDistance_FUN_004359f0(void)
;
;
; Referenced Globals:
;   int g_NearPlaneDistance = 0x7fffffff
;
; *****************************************************************************

section .text

    MOV EAX,[0x0066e804]                ; 004359f0 | g_NearPlaneDistance
        ;   Label: engine_clipper.c_getNearPlaneDistance_FUN_004359f0
    RET                                 ; 004359f5

