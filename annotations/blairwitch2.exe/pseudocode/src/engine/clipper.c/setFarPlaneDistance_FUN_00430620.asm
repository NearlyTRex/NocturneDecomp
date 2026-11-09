; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_setFarPlaneDistance_FUN_00430620(int distance)
;
; Parameters:
; int              Stack[0x4]:4   distance
;
; Referenced Globals:
;   undefined4 DAT_00609b34
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00430620
        ;   Label: engine_clipper.c_setFarPlaneDistance_FUN_00430620
    TEST EAX,EAX                        ; 00430624
    JNZ 0x0043062d                      ; 00430626
        ;   XREF to: 0043062d (CONDITIONAL_JUMP)  ; LAB_0043062d
    MOV EAX,0x7fffffff                  ; 00430628
    MOV [0x00609b34],EAX                ; 0043062d | DAT_00609b34
        ;   Label: LAB_0043062d
    RET                                 ; 00430632

