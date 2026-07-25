; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_004e9570(void)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   undefined4 DAT_0058b9fa
;   undefined4 DAT_0058ba02
;   undefined4 DAT_0058ba0a
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004e9570
        ;   Label: FUN_004e9570
    MOV EBP,ESP                         ; 004e9571
    SUB ESP,0x8                         ; 004e9573
    AND ESP,0xfffffff8                  ; 004e9576
    MOV EAX,dword ptr [EBP + 0xc]       ; 004e9579
    MOV EDX,dword ptr [EBP + 0x8]       ; 004e957c
    SUB EAX,EDX                         ; 004e957f
    MOV dword ptr [ESP + 0x4],EAX       ; 004e9581
    FILD dword ptr [ESP + 0x4]          ; 004e9585
    FMUL double ptr [0x0058b9fa]        ; 004e9589 | DAT_0058b9fa
    FST float ptr [ESP]                 ; 004e958f
    FCOMP double ptr [0x0058ba02]       ; 004e9592 | DAT_0058ba02
    FNSTSW AX                           ; 004e9598
    SAHF                                ; 004e959a
    JC 0x004e95b2                       ; 004e959b
        ;   XREF to: 004e95b2 (CONDITIONAL_JUMP)  ; LAB_004e95b2
    FLD float ptr [ESP]                 ; 004e959d
        ;   Label: LAB_004e959d
    FCOMP double ptr [0x0058ba0a]       ; 004e95a0 | DAT_0058ba0a
    FNSTSW AX                           ; 004e95a6
    SAHF                                ; 004e95a8
    JA 0x004e95bb                       ; 004e95a9
        ;   XREF to: 004e95bb (CONDITIONAL_JUMP)  ; LAB_004e95bb
    MOV EAX,dword ptr [ESP]             ; 004e95ab
    MOV ESP,EBP                         ; 004e95ae
    POP EBP                             ; 004e95b0
    RET                                 ; 004e95b1
    MOV dword ptr [ESP],0xc1f00000      ; 004e95b2
        ;   Label: LAB_004e95b2
    JMP 0x004e959d                      ; 004e95b9
        ;   XREF to: 004e959d (UNCONDITIONAL_JUMP)  ; LAB_004e959d
    MOV dword ptr [ESP],0x41f00000      ; 004e95bb
        ;   Label: LAB_004e95bb
    MOV EAX,dword ptr [ESP]             ; 004e95c2
    MOV ESP,EBP                         ; 004e95c5
    POP EBP                             ; 004e95c7
    RET                                 ; 004e95c8

