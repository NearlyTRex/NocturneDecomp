; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_crossbow_cpp_CCrossbow_getCurFrame_FUN_0043d810(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   FUN_0043d0a0 at 0043d0e9
;
; Referenced Globals:
;   double DOUBLE_0057b4a6 = 0.666000000000000
;   double DOUBLE_0057b4ae = 1.50150150150150
;   double DOUBLE_0057b4b6 = 11
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0043d810
        ;   Label: core_crossbow.cpp_CCrossbow_getCurFrame_FUN_0043d810
    MOV EAX,dword ptr [ESP + 0x8]       ; 0043d813
    FLD float ptr [EAX + 0x2f8]         ; 0043d817
    FSUBR double ptr [0x0057b4a6]       ; 0043d81d | DOUBLE_0057b4a6
    FMUL double ptr [0x0057b4ae]        ; 0043d823 | DOUBLE_0057b4ae
    FMUL double ptr [0x0057b4b6]        ; 0043d829 | DOUBLE_0057b4b6
    FSTP float ptr [ESP]                ; 0043d82f
    MOV EAX,dword ptr [ESP]             ; 0043d832
    ADD ESP,0x4                         ; 0043d835
    RET                                 ; 0043d838

