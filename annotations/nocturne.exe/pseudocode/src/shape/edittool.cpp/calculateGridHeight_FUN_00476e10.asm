; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_calculateGridHeight_FUN_00476e10(void)
;
;
; XREF[1]:
;   shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_00475470 at 004757ce
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;
; Called Functions:
;   shape_edittool.cpp_calculateGridWidth_FUN_00476df0
;
; *****************************************************************************

section .text

    CALL shape_edittool.cpp_calculateGridWidth_FUN_00476df0 ; 00476e10
        ;   XREF to: 00476df0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateGridWidth_FUN_00476df0()
        ;   Label: shape_edittool.cpp_calculateGridHeight_FUN_00476e10
    MOV EDX,dword ptr [0x005b7620]      ; 00476e15 | g_WindowHeight
    IMUL EDX,EAX                        ; 00476e1b
    MOV ECX,dword ptr [0x005b761c]      ; 00476e1e | g_WindowWidth
    MOV EAX,EDX                         ; 00476e24
    SAR EDX,0x1f                        ; 00476e26
    IDIV ECX                            ; 00476e29
    LEA EDX,[EAX*0x4 + 0x0]             ; 00476e2b
    MOV ECX,0x3                         ; 00476e32
    MOV EAX,EDX                         ; 00476e37
    SAR EDX,0x1f                        ; 00476e39
    IDIV ECX                            ; 00476e3c
    RET                                 ; 00476e3e

