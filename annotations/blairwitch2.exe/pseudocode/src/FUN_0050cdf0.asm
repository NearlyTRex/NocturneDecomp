; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050cdf0(int param_1,undefined4 param_2,int *param_3)
;
;
; XREF[4]:
;   FUN_0050c280 at 0050c435
;   FUN_0050cd90 at 0050cdb8
;   FUN_0050db90 at 0050ded9
;   FUN_0050f4b0 at 0050f4d7
;
; Called Functions:
;   FUN_005792e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0xc]       ; 0050cdf0
        ;   Label: FUN_0050cdf0
    MOV ECX,dword ptr [ESP + 0x8]       ; 0050cdf4
    MOV EAX,dword ptr [EDX]             ; 0050cdf8
    PUSH ECX                            ; 0050cdfa
    SUB EAX,0x4                         ; 0050cdfb
    PUSH EAX                            ; 0050cdfe
    LEA EAX,[EDX + 0x4]                 ; 0050cdff
    PUSH EAX                            ; 0050ce02
    MOV EAX,dword ptr [ESP + 0x10]      ; 0050ce03
    ADD EAX,0x180                       ; 0050ce07
    PUSH EAX                            ; 0050ce0c
    CALL FUN_005792e0                   ; 0050ce0d
        ;   XREF to: 005792e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005792e0()
    ADD ESP,0x10                        ; 0050ce12
    RET                                 ; 0050ce15

