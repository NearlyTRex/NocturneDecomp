; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004688a0(undefined4 param_1,float param_2,undefined4 param_3)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[55]:
;   FUN_0040dc80 at 0040dce5
;   FUN_0040e320 at 0040e3a3
;   FUN_0040e7b0 at 0040e832
;   FUN_0040ef70 at 0040efd1
;   FUN_004101f0 at 004102d0
;   FUN_00410f70 at 00410fd9
;   FUN_00414500 at 0041458a
;   FUN_00416fa0 at 004171db
;   FUN_00418fc0 at 004190a7
;   FUN_004224f0 at 004225b1
;   ... and 45 more
;
; Called Functions:
;   FUN_00467270
;   FUN_00468900
;   FUN_005c03a0
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004688a0
        ;   Label: FUN_004688a0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004688a3
    MOV EDX,dword ptr [ESP + 0x10]      ; 004688a7
    FLD float ptr [ESP + 0xc]           ; 004688ab
    PUSH EDX                            ; 004688af
    CALL FUN_005c03a0                   ; 004688b0
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    PUSH EAX                            ; 004688b5
    FISTP dword ptr [ESP + 0x8]         ; 004688b6
    MOV ECX,dword ptr [ESP + 0x8]       ; 004688ba
    PUSH ECX                            ; 004688be
    PUSH EAX                            ; 004688bf
    CALL FUN_00468900                   ; 004688c0
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; undefined FUN_00468900()
    ADD ESP,0x4                         ; 004688c5
    PUSH EAX                            ; 004688c8
    CALL FUN_00467270                   ; 004688c9
        ;   XREF to: 00467270 (UNCONDITIONAL_CALL)  ; undefined FUN_00467270()
    ADD ESP,0x10                        ; 004688ce
    ADD ESP,0x4                         ; 004688d1
    RET                                 ; 004688d4

