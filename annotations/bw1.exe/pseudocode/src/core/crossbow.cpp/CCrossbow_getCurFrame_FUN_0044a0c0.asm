; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_crossbow_cpp_CCrossbow_getCurFrame_FUN_0044a0c0(CCrossbow *this_ptr)
;
; Parameters:
; CCrossbow *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_crossbow.cpp_FUN_00449920 at 0044997d
;
; Referenced Globals:
;   undefined4 DAT_005d73aa
;   undefined4 DAT_005d73b2
;   undefined4 DAT_005d73ba
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0044a0c0
        ;   Label: core_crossbow.cpp_CCrossbow_getCurFrame_FUN_0044a0c0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0044a0c3
    FLD float ptr [EAX + 0x300]         ; 0044a0c7
    FSUBR double ptr [0x005d73aa]       ; 0044a0cd | DAT_005d73aa
    FMUL double ptr [0x005d73b2]        ; 0044a0d3 | DAT_005d73b2
    FMUL double ptr [0x005d73ba]        ; 0044a0d9 | DAT_005d73ba
    FSTP float ptr [ESP]                ; 0044a0df
    MOV EAX,dword ptr [ESP]             ; 0044a0e2
    ADD ESP,0x4                         ; 0044a0e5
    RET                                 ; 0044a0e8

