; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005058d0(int param_1,undefined4 param_2,int *param_3)
;
;
; XREF[4]:
;   FUN_00504d60 at 00504f15
;   FUN_00505870 at 00505898
;   FUN_00506670 at 005069b9
;   FUN_00507f90 at 00507fb7
;
; Called Functions:
;   FUN_0056fbb0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0xc]       ; 005058d0
        ;   Label: FUN_005058d0
    MOV ECX,dword ptr [ESP + 0x8]       ; 005058d4
    MOV EAX,dword ptr [EDX]             ; 005058d8
    PUSH ECX                            ; 005058da
    SUB EAX,0x4                         ; 005058db
    PUSH EAX                            ; 005058de
    LEA EAX,[EDX + 0x4]                 ; 005058df
    PUSH EAX                            ; 005058e2
    MOV EAX,dword ptr [ESP + 0x10]      ; 005058e3
    ADD EAX,0x180                       ; 005058e7
    PUSH EAX                            ; 005058ec
    CALL FUN_0056fbb0                   ; 005058ed
        ;   XREF to: 0056fbb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056fbb0()
    ADD ESP,0x10                        ; 005058f2
    RET                                 ; 005058f5

