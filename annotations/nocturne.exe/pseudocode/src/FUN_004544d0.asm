; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004544d0(undefined4 param_1,float param_2,undefined4 param_3)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[49]:
;   FUN_0040ff80 at 0040ffc9
;   FUN_004110f0 at 004111d0
;   FUN_00411e30 at 00411e85
;   FUN_00414e70 at 00414ee6
;   FUN_004161a0 at 00416275
;   FUN_0041ea00 at 0041eaae
;   FUN_0041eaf0 at 0041eba4
;   FUN_00421540 at 00421676
;   FUN_004265a0 at 00426678
;   FUN_0043cbc0 at 0043cc3c
;   ... and 39 more
;
; Called Functions:
;   FUN_00453040
;   FUN_00454530
;   FUN_00563a30
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004544d0
        ;   Label: FUN_004544d0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004544d3
    MOV EDX,dword ptr [ESP + 0x10]      ; 004544d7
    FLD float ptr [ESP + 0xc]           ; 004544db
    PUSH EDX                            ; 004544df
    CALL FUN_00563a30                   ; 004544e0
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    PUSH EAX                            ; 004544e5
    FISTP dword ptr [ESP + 0x8]         ; 004544e6
    MOV ECX,dword ptr [ESP + 0x8]       ; 004544ea
    PUSH ECX                            ; 004544ee
    PUSH EAX                            ; 004544ef
    CALL FUN_00454530                   ; 004544f0
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined FUN_00454530()
    ADD ESP,0x4                         ; 004544f5
    PUSH EAX                            ; 004544f8
    CALL FUN_00453040                   ; 004544f9
        ;   XREF to: 00453040 (UNCONDITIONAL_CALL)  ; undefined FUN_00453040()
    ADD ESP,0x10                        ; 004544fe
    ADD ESP,0x4                         ; 00454501
    RET                                 ; 00454504

