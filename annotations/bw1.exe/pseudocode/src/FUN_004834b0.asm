; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004834b0(undefined4 param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[13]:
;   FUN_00416fa0 at 004170c9
;   FUN_0044ceb0 at 0044d097
;   FUN_0044d700 at 0044d85e
;   FUN_00462820 at 004628b8
;   FUN_004f90d0 at 004f930a
;   FUN_004fe9c0 at 004fea3b
;   FUN_005188a0 at 005188b0
;   FUN_00521e40 at 00521ee2
;   FUN_00550da0 at 005510ce
;   FUN_00555590 at 0055559f
;   ... and 3 more
;
; Referenced Globals:
;   undefined4 DAT_005db35c
;
; Called Functions:
;   FUN_00509000
;   FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004834b0
        ;   Label: FUN_004834b0
    SUB ESP,0x8                         ; 004834b1
    MOV EAX,dword ptr [ESP + 0x14]      ; 004834b4
    FLD double ptr [0x005db35c]         ; 004834b8 | DAT_005db35c
    FLD float ptr [EAX + 0x8]           ; 004834be
    FMUL ST1                            ; 004834c1
    FLD float ptr [EAX + 0x4]           ; 004834c3
    FMUL ST2                            ; 004834c6
    FLD float ptr [EAX]                 ; 004834c8
    FMULP ST3                           ; 004834ca
    FXCH                                ; 004834cc
    CALL FUN_005c03a0                   ; 004834ce
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH                                ; 004834d3
    CALL FUN_005c03a0                   ; 004834d5
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH                                ; 004834da
    FISTP dword ptr [ESP]               ; 004834dc
    FISTP dword ptr [ESP + 0x4]         ; 004834df
    MOV EDX,dword ptr [ESP]             ; 004834e3
    MOV ECX,dword ptr [ESP + 0x4]       ; 004834e6
    PUSH EDX                            ; 004834ea
    CALL FUN_005c03a0                   ; 004834eb
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    PUSH ECX                            ; 004834f0
    FISTP dword ptr [ESP + 0xc]         ; 004834f1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004834f5
    PUSH EBX                            ; 004834f9
    CALL FUN_00509000                   ; 004834fa
        ;   XREF to: 00509000 (UNCONDITIONAL_CALL)  ; undefined FUN_00509000()
    ADD ESP,0xc                         ; 004834ff
    ADD ESP,0x8                         ; 00483502
    POP EBX                             ; 00483505
    RET                                 ; 00483506

