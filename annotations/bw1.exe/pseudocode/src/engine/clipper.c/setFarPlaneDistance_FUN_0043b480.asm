; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_setFarPlaneDistance_FUN_0043b480(int distance)
;
; Parameters:
; int              Stack[0x4]:4   distance
;
; Referenced Globals:
;   undefined4 DAT_00610d44
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0043b480
        ;   Label: engine_clipper.c_setFarPlaneDistance_FUN_0043b480
    TEST EAX,EAX                        ; 0043b484
    JNZ 0x0043b48d                      ; 0043b486
        ;   XREF to: 0043b48d (CONDITIONAL_JUMP)  ; LAB_0043b48d
    MOV EAX,0x7fffffff                  ; 0043b488
    MOV [0x00610d44],EAX                ; 0043b48d | DAT_00610d44
        ;   Label: LAB_0043b48d
    RET                                 ; 0043b492

