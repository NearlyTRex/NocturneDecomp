; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_crossbow_cpp_CCrossbow_getCurFrame_FUN_00449540(CCrossbow *this_ptr)
;
; Parameters:
; CCrossbow *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_crossbow.cpp_CCrossbow_renderOpaque_FUN_00448e00 at 00448e45
;
; Referenced Globals:
;   double DOUBLE_00619ba2 = 0.666000000000000
;   double DOUBLE_00619baa = 1.50150150150150
;   double DOUBLE_00619bb2 = 11
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00449540
        ;   Label: core_crossbow.cpp_CCrossbow_getCurFrame_FUN_00449540
    MOV EAX,dword ptr [ESP + 0x8]       ; 00449543
    FLD float ptr [EAX + 0x300]         ; 00449547
    FSUBR double ptr [0x00619ba2]       ; 0044954d | DOUBLE_00619ba2
    FMUL double ptr [0x00619baa]        ; 00449553 | DOUBLE_00619baa
    FMUL double ptr [0x00619bb2]        ; 00449559 | DOUBLE_00619bb2
    FSTP float ptr [ESP]                ; 0044955f
    MOV EAX,dword ptr [ESP]             ; 00449562
    ADD ESP,0x4                         ; 00449565
    RET                                 ; 00449568

