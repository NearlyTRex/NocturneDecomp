; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044fcc0(undefined4 param_1,float param_2,undefined4 param_3)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[56]:
;   FUN_0040e0f0 at 0040e155
;   FUN_0040e780 at 0040e803
;   FUN_0040ec10 at 0040ec92
;   FUN_0040f3f0 at 0040f451
;   FUN_00410670 at 00410750
;   FUN_004113f0 at 00411459
;   FUN_00414810 at 0041489a
;   FUN_00415b60 at 00415c47
;   FUN_0041c580 at 0041c641
;   FUN_0041c690 at 0041c756
;   ... and 46 more
;
; Called Functions:
;   FUN_0044e6a0
;   FUN_0044fd20
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0044fcc0
        ;   Label: FUN_0044fcc0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0044fcc3
    MOV EDX,dword ptr [ESP + 0x10]      ; 0044fcc7
    FLD float ptr [ESP + 0xc]           ; 0044fccb
    PUSH EDX                            ; 0044fccf
    CALL FUN_005b7ff0                   ; 0044fcd0
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    PUSH EAX                            ; 0044fcd5
    FISTP dword ptr [ESP + 0x8]         ; 0044fcd6
    MOV ECX,dword ptr [ESP + 0x8]       ; 0044fcda
    PUSH ECX                            ; 0044fcde
    PUSH EAX                            ; 0044fcdf
    CALL FUN_0044fd20                   ; 0044fce0
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd20()
    ADD ESP,0x4                         ; 0044fce5
    PUSH EAX                            ; 0044fce8
    CALL FUN_0044e6a0                   ; 0044fce9
        ;   XREF to: 0044e6a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044e6a0()
    ADD ESP,0x10                        ; 0044fcee
    ADD ESP,0x4                         ; 0044fcf1
    RET                                 ; 0044fcf4

