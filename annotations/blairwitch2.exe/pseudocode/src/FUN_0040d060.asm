; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_0040d060(float param_1)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[47]:
;   FUN_00411a10 at 00411ec3
;   FUN_00412500 at 004125aa
;   FUN_00412ec0 at 00412ec5
;   FUN_00412f40 at 0041383d
;   FUN_00413f40 at 00413fea
;   FUN_00417a70 at 00417a75
;   FUN_0041dbe0 at 0041df97
;   FUN_0041e8a0 at 0041e93f
;   FUN_0041ead0 at 0041ebdf
;   FUN_00426f30 at 00426f9c
;   ... and 37 more
;
; Referenced Globals:
;   undefined4 DAT_005caf36
;   undefined4 DAT_005caf3a
;   undefined4 DAT_00616494
;   undefined4 DAT_01cb6b58
;
; Called Functions:
;   FUN_0040cef0
;   FUN_005b849c
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0040d060
        ;   Label: FUN_0040d060
    MOV EAX,[0x00616494]                ; 0040d063 | DAT_00616494
    CMP dword ptr [EAX + 0x258],0x0     ; 0040d068 | DAT_01cb6b58
    JZ 0x0040d09d                       ; 0040d06f
        ;   XREF to: 0040d09d (CONDITIONAL_JUMP)  ; LAB_0040d09d
    CALL FUN_0040cef0                   ; 0040d071
        ;   XREF to: 0040cef0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cef0()
    MOV dword ptr [ESP + 0x4],EAX       ; 0040d076
    FILD dword ptr [ESP + 0x4]          ; 0040d07a
    FMUL float ptr [0x005caf3a]         ; 0040d07e | DAT_005caf3a
    FSTP float ptr [ESP]                ; 0040d084
        ;   Label: LAB_0040d084
    FLD float ptr [ESP]                 ; 0040d087
    FCOMP float ptr [ESP + 0xc]         ; 0040d08a
    FNSTSW AX                           ; 0040d08e
    SAHF                                ; 0040d090
    SETC AL                             ; 0040d091
    AND EAX,0xff                        ; 0040d094
    ADD ESP,0x8                         ; 0040d099
    RET                                 ; 0040d09c
    CALL FUN_005b849c                   ; 0040d09d
        ;   XREF to: 005b849c (UNCONDITIONAL_CALL)  ; undefined FUN_005b849c()
        ;   Label: LAB_0040d09d
    MOV dword ptr [ESP + 0x4],EAX       ; 0040d0a2
    FILD dword ptr [ESP + 0x4]          ; 0040d0a6
    FMUL float ptr [0x005caf36]         ; 0040d0aa | DAT_005caf36
    JMP 0x0040d084                      ; 0040d0b0
        ;   XREF to: 0040d084 (UNCONDITIONAL_JUMP)  ; LAB_0040d084

