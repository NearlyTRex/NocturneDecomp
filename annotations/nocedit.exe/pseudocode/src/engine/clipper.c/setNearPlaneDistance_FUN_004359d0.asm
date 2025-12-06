; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_clipper.c_setNearPlaneDistance_FUN_004359d0(int distance)
;
; Parameters:
; int              Stack[0x4]:4   distance
;
; Referenced Globals:
;   int g_NearPlaneDistance = 0x7fffffff
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004359d0
        ;   Label: engine_clipper.c_setNearPlaneDistance_FUN_004359d0
    TEST EAX,EAX                        ; 004359d4
    JNZ 0x004359dd                      ; 004359d6 | LAB_004359dd
        ;   XREF to: 004359dd (CONDITIONAL_JUMP)
    MOV EAX,0x7fffffff                  ; 004359d8
    MOV [0x0066e804],EAX                ; 004359dd | int g_NearPlaneDistance
        ;   Label: LAB_004359dd
    RET                                 ; 004359e2

