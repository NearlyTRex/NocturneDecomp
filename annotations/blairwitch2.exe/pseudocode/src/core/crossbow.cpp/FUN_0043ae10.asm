; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_crossbow_cpp_FUN_0043ae10(int param_1)
;
;
; XREF[1]:
;   core_crossbow.cpp_FUN_0043a670 at 0043a6cd
;
; Referenced Globals:
;   undefined4 DAT_005ce23e
;   undefined4 DAT_005ce246
;   undefined4 DAT_005ce24e
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0043ae10
        ;   Label: core_crossbow.cpp_FUN_0043ae10
    MOV EAX,dword ptr [ESP + 0x8]       ; 0043ae13
    FLD float ptr [EAX + 0x45c]         ; 0043ae17
    FSUBR double ptr [0x005ce23e]       ; 0043ae1d | DAT_005ce23e
    FMUL double ptr [0x005ce246]        ; 0043ae23 | DAT_005ce246
    FMUL double ptr [0x005ce24e]        ; 0043ae29 | DAT_005ce24e
    FSTP float ptr [ESP]                ; 0043ae2f
    MOV EAX,dword ptr [ESP]             ; 0043ae32
    ADD ESP,0x4                         ; 0043ae35
    RET                                 ; 0043ae38

