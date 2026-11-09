; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_netgame_cpp_computeTimeDelta_FUN_0050afa0(int start_time,int end_time)
;
; Parameters:
; int              Stack[0x4]:4   start_time
; int              Stack[0x8]:4   end_time
;
; Referenced Globals:
;   undefined4 DAT_005e0375
;   undefined4 DAT_005e037d
;   undefined4 DAT_005e0385
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0050afa0
        ;   Label: core_netgame.cpp_computeTimeDelta_FUN_0050afa0
    MOV EBP,ESP                         ; 0050afa1
    SUB ESP,0x8                         ; 0050afa3
    AND ESP,0xfffffff8                  ; 0050afa6
    MOV EAX,dword ptr [EBP + 0xc]       ; 0050afa9
    MOV EDX,dword ptr [EBP + 0x8]       ; 0050afac
    SUB EAX,EDX                         ; 0050afaf
    MOV dword ptr [ESP + 0x4],EAX       ; 0050afb1
    FILD dword ptr [ESP + 0x4]          ; 0050afb5
    FMUL double ptr [0x005e0375]        ; 0050afb9 | DAT_005e0375
    FST float ptr [ESP]                 ; 0050afbf
    FCOMP double ptr [0x005e037d]       ; 0050afc2 | DAT_005e037d
    FNSTSW AX                           ; 0050afc8
    SAHF                                ; 0050afca
    JC 0x0050afe2                       ; 0050afcb
        ;   XREF to: 0050afe2 (CONDITIONAL_JUMP)  ; LAB_0050afe2
    FLD float ptr [ESP]                 ; 0050afcd
        ;   Label: LAB_0050afcd
    FCOMP double ptr [0x005e0385]       ; 0050afd0 | DAT_005e0385
    FNSTSW AX                           ; 0050afd6
    SAHF                                ; 0050afd8
    JA 0x0050afeb                       ; 0050afd9
        ;   XREF to: 0050afeb (CONDITIONAL_JUMP)  ; LAB_0050afeb
    MOV EAX,dword ptr [ESP]             ; 0050afdb
    MOV ESP,EBP                         ; 0050afde
    POP EBP                             ; 0050afe0
    RET                                 ; 0050afe1
    MOV dword ptr [ESP],0xc1f00000      ; 0050afe2
        ;   Label: LAB_0050afe2
    JMP 0x0050afcd                      ; 0050afe9
        ;   XREF to: 0050afcd (UNCONDITIONAL_JUMP)  ; LAB_0050afcd
    MOV dword ptr [ESP],0x41f00000      ; 0050afeb
        ;   Label: LAB_0050afeb
    MOV EAX,dword ptr [ESP]             ; 0050aff2
    MOV ESP,EBP                         ; 0050aff5
    POP EBP                             ; 0050aff7
    RET                                 ; 0050aff8

