; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_setFarPlaneDistance_FUN_00439090(int distance)
;
; Parameters:
; int              Stack[0x4]:4   distance
;
; Referenced Globals:
;   undefined4 DAT_005f12f4
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00439090
        ;   Label: engine_clipper.c_setFarPlaneDistance_FUN_00439090
    TEST EAX,EAX                        ; 00439094
    JNZ 0x0043909d                      ; 00439096
        ;   XREF to: 0043909d (CONDITIONAL_JUMP)  ; LAB_0043909d
    MOV EAX,0x7fffffff                  ; 00439098
    MOV [0x005f12f4],EAX                ; 0043909d | DAT_005f12f4
        ;   Label: LAB_0043909d
    RET                                 ; 004390a2

