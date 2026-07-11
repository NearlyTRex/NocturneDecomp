; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_00460e20(void)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   FUN_0050e080 at 0050e0fa
;
; Referenced Globals:
;   undefined4 DAT_0057dc85
;   undefined4 DAT_0057dc8d
;   undefined4 DAT_005b7648
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00460e20
        ;   Label: FUN_00460e20
    FILD dword ptr [0x005b7648]         ; 00460e23 | DAT_005b7648
    FDIVR double ptr [0x0057dc85]       ; 00460e29 | DAT_0057dc85
    FMUL double ptr [0x0057dc8d]        ; 00460e2f | DAT_0057dc8d
    FSTP float ptr [ESP]                ; 00460e35
    MOV EAX,dword ptr [ESP]             ; 00460e38
    ADD ESP,0x4                         ; 00460e3b
    RET                                 ; 00460e3e

