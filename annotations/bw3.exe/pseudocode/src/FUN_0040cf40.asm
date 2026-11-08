; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_0040cf40(float param_1)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[36]:
;   FUN_0040cab0 at 0040cbe2
;   FUN_00416b20 at 00416b25
;   FUN_00425da0 at 00426ed8
;   FUN_00428810 at 004288ba
;   FUN_0042fc90 at 0042fcfc
;   FUN_0042fdc0 at 0042fddf
;   FUN_0042fe90 at 0042feaf
;   FUN_00442a20 at 00443616
;   FUN_00445730 at 004457b6
;   FUN_00455080 at 0045725b
;   ... and 26 more
;
; Referenced Globals:
;   undefined4 DAT_005b5f01
;   undefined4 DAT_005b5f05
;   undefined4 DAT_005fe9dc
;   undefined4 DAT_01d2156c
;
; Called Functions:
;   FUN_0040cdd0
;   FUN_005a35cc
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0040cf40
        ;   Label: FUN_0040cf40
    MOV EAX,[0x005fe9dc]                ; 0040cf43 | DAT_005fe9dc
    CMP dword ptr [EAX + 0x260],0x0     ; 0040cf48 | DAT_01d2156c
    JZ 0x0040cf7d                       ; 0040cf4f
        ;   XREF to: 0040cf7d (CONDITIONAL_JUMP)  ; LAB_0040cf7d
    CALL FUN_0040cdd0                   ; 0040cf51
        ;   XREF to: 0040cdd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cdd0()
    MOV dword ptr [ESP + 0x4],EAX       ; 0040cf56
    FILD dword ptr [ESP + 0x4]          ; 0040cf5a
    FMUL float ptr [0x005b5f05]         ; 0040cf5e | DAT_005b5f05
    FSTP float ptr [ESP]                ; 0040cf64
        ;   Label: LAB_0040cf64
    FLD float ptr [ESP]                 ; 0040cf67
    FCOMP float ptr [ESP + 0xc]         ; 0040cf6a
    FNSTSW AX                           ; 0040cf6e
    SAHF                                ; 0040cf70
    SETC AL                             ; 0040cf71
    AND EAX,0xff                        ; 0040cf74
    ADD ESP,0x8                         ; 0040cf79
    RET                                 ; 0040cf7c
    CALL FUN_005a35cc                   ; 0040cf7d
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; undefined FUN_005a35cc()
        ;   Label: LAB_0040cf7d
    MOV dword ptr [ESP + 0x4],EAX       ; 0040cf82
    FILD dword ptr [ESP + 0x4]          ; 0040cf86
    FMUL float ptr [0x005b5f01]         ; 0040cf8a | DAT_005b5f01
    JMP 0x0040cf64                      ; 0040cf90
        ;   XREF to: 0040cf64 (UNCONDITIONAL_JUMP)  ; LAB_0040cf64

