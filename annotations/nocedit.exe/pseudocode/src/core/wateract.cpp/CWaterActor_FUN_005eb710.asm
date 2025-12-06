; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_wateract.cpp_CWaterActor_FUN_005eb710(CWaterActor * this_ptr)
;
; Parameters:
; CWaterActor *    Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 005eb710
        ;   Label: core_wateract.cpp_CWaterActor_FUN_005eb710
    MOV EDX,dword ptr [EAX]             ; 005eb714
    CMP EDX,0x3                         ; 005eb716
    JNZ 0x005eb71e                      ; 005eb719 | LAB_005eb71e
        ;   XREF to: 005eb71e (CONDITIONAL_JUMP)
    MOV EAX,EDX                         ; 005eb71b
    RET                                 ; 005eb71d
    XOR EAX,EAX                         ; 005eb71e
        ;   Label: LAB_005eb71e
    RET                                 ; 005eb720

