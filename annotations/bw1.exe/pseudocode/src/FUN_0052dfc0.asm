; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0052dfc0(int param_1,undefined4 param_2,int *param_3)
;
;
; XREF[4]:
;   FUN_0052d450 at 0052d613
;   FUN_0052df50 at 0052df81
;   FUN_0052ed80 at 0052f0c3
;   FUN_005306d0 at 005306f7
;
; Called Functions:
;   FUN_0059cbc0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0xc]       ; 0052dfc0
        ;   Label: FUN_0052dfc0
    MOV ECX,dword ptr [ESP + 0x8]       ; 0052dfc4
    MOV EAX,dword ptr [EDX]             ; 0052dfc8
    PUSH ECX                            ; 0052dfca
    SUB EAX,0x4                         ; 0052dfcb
    PUSH EAX                            ; 0052dfce
    LEA EAX,[EDX + 0x4]                 ; 0052dfcf
    PUSH EAX                            ; 0052dfd2
    MOV EAX,dword ptr [ESP + 0x10]      ; 0052dfd3
    ADD EAX,0x178                       ; 0052dfd7
    PUSH EAX                            ; 0052dfdc
    CALL FUN_0059cbc0                   ; 0052dfdd
        ;   XREF to: 0059cbc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059cbc0()
    ADD ESP,0x10                        ; 0052dfe2
    RET                                 ; 0052dfe5

