; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_crossbow_cpp_CCrossbow_getCurFrame_FUN_0043ae10(CCrossbow *this_ptr)
;
; Parameters:
; CCrossbow *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_crossbow.cpp_CCrossbow_renderOpaque_FUN_0043a670 at 0043a6cd
;
; Referenced Globals:
;   double g_DOUBLE_005ce23e = 0.666000000000000
;   double g_DOUBLE_005ce246 = 1.50150150150150
;   double g_DOUBLE_005ce24e = 11
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0043ae10
        ;   Label: core_crossbow.cpp_CCrossbow_getCurFrame_FUN_0043ae10
    MOV EAX,dword ptr [ESP + 0x8]       ; 0043ae13
    FLD float ptr [EAX + 0x45c]         ; 0043ae17
    FSUBR double ptr [0x005ce23e]       ; 0043ae1d | g_DOUBLE_005ce23e
    FMUL double ptr [0x005ce246]        ; 0043ae23 | g_DOUBLE_005ce246
    FMUL double ptr [0x005ce24e]        ; 0043ae29 | g_DOUBLE_005ce24e
    FSTP float ptr [ESP]                ; 0043ae2f
    MOV EAX,dword ptr [ESP]             ; 0043ae32
    ADD ESP,0x4                         ; 0043ae35
    RET                                 ; 0043ae38

