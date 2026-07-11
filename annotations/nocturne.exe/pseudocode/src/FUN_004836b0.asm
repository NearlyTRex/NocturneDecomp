; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004836b0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   FUN_0048a390 at 0048a427
;
; Referenced Globals:
;   undefined4 DAT_005b9354
;   undefined4 DAT_01c77850
;
; Called Functions:
;   FUN_0041ad10
;
; *****************************************************************************

section .text

    MOV EAX,[0x005b9354]                ; 004836b0 | DAT_005b9354
        ;   Label: FUN_004836b0
    SUB ESP,0x4                         ; 004836b5
    FLD float ptr [EAX + 0x264]         ; 004836b8 | DAT_01c77850
    MOV EAX,dword ptr [ESP + 0x8]       ; 004836be
    ADD EAX,0x4                         ; 004836c2
    FSTP float ptr [ESP]                ; 004836c5
    PUSH EAX                            ; 004836c8
    CALL FUN_0041ad10                   ; 004836c9
        ;   XREF to: 0041ad10 (UNCONDITIONAL_CALL)  ; undefined FUN_0041ad10()
    ADD ESP,0x8                         ; 004836ce
    RET                                 ; 004836d1

