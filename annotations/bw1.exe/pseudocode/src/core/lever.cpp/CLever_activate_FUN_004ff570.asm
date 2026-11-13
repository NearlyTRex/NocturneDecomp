; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_lever_cpp_CLever_activate_FUN_004ff570(CLever *this_ptr)
;
; Parameters:
; CLever *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[1]:
;   core_hero.cpp_CHero_toggleLeverNow_FUN_004eb7f0 at 004eb858
;
; Referenced Globals:
;   undefined4 DAT_005e6d5a
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004ff570
        ;   Label: core_lever.cpp_CLever_activate_FUN_004ff570
    PUSH EDI                            ; 004ff571
    PUSH EBP                            ; 004ff572
    MOV EBP,ESP                         ; 004ff573
    SUB ESP,0x8                         ; 004ff575
    AND ESP,0xfffffff8                  ; 004ff578
    MOV EDX,dword ptr [EBP + 0x10]      ; 004ff57b
    FLD float ptr [EDX + 0x2dc]         ; 004ff57e
    MOV dword ptr [EDX + 0x418],0x1     ; 004ff584
    FCOMP double ptr [0x005e6d5a]       ; 004ff58e | DAT_005e6d5a
    FNSTSW AX                           ; 004ff594
    SAHF                                ; 004ff596
    JNC 0x004ff5b6                      ; 004ff597
        ;   XREF to: 004ff5b6 (CONDITIONAL_JUMP)  ; LAB_004ff5b6
    XOR ESI,ESI                         ; 004ff599
    MOV EDI,0x3ff00000                  ; 004ff59b
    MOV dword ptr [ESP],ESI             ; 004ff5a0
    MOV dword ptr [ESP + 0x4],EDI       ; 004ff5a3
    FLD double ptr [ESP]                ; 004ff5a7
    FSTP float ptr [EDX + 0x41c]        ; 004ff5aa
    MOV ESP,EBP                         ; 004ff5b0
    POP EBP                             ; 004ff5b2
    POP EDI                             ; 004ff5b3
    POP ESI                             ; 004ff5b4
    RET                                 ; 004ff5b5
    XOR ECX,ECX                         ; 004ff5b6
        ;   Label: LAB_004ff5b6
    MOV dword ptr [ESP],ECX             ; 004ff5b8
    MOV dword ptr [ESP + 0x4],ECX       ; 004ff5bb
    FLD double ptr [ESP]                ; 004ff5bf
    FSTP float ptr [EDX + 0x41c]        ; 004ff5c2
    MOV ESP,EBP                         ; 004ff5c8
    POP EBP                             ; 004ff5ca
    POP EDI                             ; 004ff5cb
    POP ESI                             ; 004ff5cc
    RET                                 ; 004ff5cd

