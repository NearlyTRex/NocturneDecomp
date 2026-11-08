; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004837b0(void)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[59]:
;   FUN_004087b0 at 004087bf
;   FUN_0040e7b0 at 0040e7d5
;   FUN_004101f0 at 00410297
;   FUN_00414500 at 00414515
;   FUN_00416fa0 at 00417109
;   FUN_004224f0 at 00422550
;   FUN_00422600 at 00422638
;   FUN_004493e0 at 004493f5
;   FUN_00457f70 at 00457f85
;   FUN_0045ea60 at 0045ea79
;   ... and 49 more
;
; Referenced Globals:
;   undefined4 DAT_005db37c
;
; Called Functions:
;   FUN_004037e0
;   FUN_005c03a0
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 004837b0
        ;   Label: FUN_004837b0
    MOV EAX,dword ptr [ESP + 0x18]      ; 004837b3
    FLD double ptr [0x005db37c]         ; 004837b7 | DAT_005db37c
    FLD float ptr [EAX]                 ; 004837bd
    FMUL ST1                            ; 004837bf
    CALL FUN_005c03a0                   ; 004837c1
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x4]         ; 004837c6
    FLD float ptr [EAX + 0x4]           ; 004837ca
    FMUL ST1                            ; 004837cd
    CALL FUN_005c03a0                   ; 004837cf
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x8]         ; 004837d4
    FMUL float ptr [EAX + 0x8]          ; 004837d8
    MOV EAX,ESP                         ; 004837db
    CALL FUN_005c03a0                   ; 004837dd
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    PUSH EAX                            ; 004837e2
    FISTP dword ptr [ESP + 0x10]        ; 004837e3
    CALL FUN_004037e0                   ; 004837e7
        ;   XREF to: 004037e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004037e0()
    ADD ESP,0x4                         ; 004837ec
    ADD ESP,0x10                        ; 004837ef
    RET                                 ; 004837f2

