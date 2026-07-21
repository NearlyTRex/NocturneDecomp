; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CExplosion_process_FUN_00486f90(int param_1)
;
; Local Variables:
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_process_FUN_0048a390 at 0048a51c
;
; Referenced Globals:
;   undefined4 DAT_005b9354
;   undefined4 DAT_01c77850
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00486f90
        ;   Label: core_fire.cpp_CExplosion_process_FUN_00486f90
    MOV EBP,ESP                         ; 00486f91
    SUB ESP,0x8                         ; 00486f93
    AND ESP,0xfffffff8                  ; 00486f96
    MOV EDX,dword ptr [EBP + 0x8]       ; 00486f99
    FLDZ                                ; 00486f9c
    FLD float ptr [EDX + 0xc]           ; 00486f9e
    FSTP double ptr [ESP]               ; 00486fa1
    FCOMP double ptr [ESP]              ; 00486fa4
    FNSTSW AX                           ; 00486fa7
    SAHF                                ; 00486fa9
    JNC 0x00486fc6                      ; 00486faa
        ;   XREF to: 00486fc6 (CONDITIONAL_JUMP)  ; LAB_00486fc6
    MOV EAX,[0x005b9354]                ; 00486fac | DAT_005b9354
    FLD float ptr [EAX + 0x264]         ; 00486fb1 | DAT_01c77850
    FSUBR double ptr [ESP]              ; 00486fb7
    FST float ptr [EDX + 0xc]           ; 00486fba
    FLDZ                                ; 00486fbd
    FCOMPP                              ; 00486fbf
    FNSTSW AX                           ; 00486fc1
    SAHF                                ; 00486fc3
    JA 0x00486fca                       ; 00486fc4
        ;   XREF to: 00486fca (CONDITIONAL_JUMP)  ; LAB_00486fca
    MOV ESP,EBP                         ; 00486fc6
        ;   Label: LAB_00486fc6
    POP EBP                             ; 00486fc8
    RET                                 ; 00486fc9
    MOV dword ptr [EDX + 0xc],0x0       ; 00486fca
        ;   Label: LAB_00486fca
    MOV ESP,EBP                         ; 00486fd1
    POP EBP                             ; 00486fd3
    RET                                 ; 00486fd4

