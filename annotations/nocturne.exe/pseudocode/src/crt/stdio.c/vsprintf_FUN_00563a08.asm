; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_stdio_c_vsprintf_FUN_00563a08(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[26]:
;   FUN_00402780 at 004027ab
;   FUN_00402840 at 0040286b
;   FUN_00402910 at 0040293b
;   FUN_004029f0 at 00402a1c
;   FUN_00402af0 at 00402b1b
;   FUN_00402bb0 at 00402bdb
;   FUN_00402c80 at 00402cab
;   FUN_00402d60 at 00402d8c
;   FUN_0046fb40 at 0046fbac
;   FUN_0046fcd0 at 0046fd3c
;   ... and 16 more
;
; Called Functions:
;   FUN_00569040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00563a08
        ;   Label: crt_stdio.c_vsprintf_FUN_00563a08
    PUSH 0x5639f0                       ; 00563a09 | LAB_005639f0
    MOV EDX,dword ptr [ESP + 0x14]      ; 00563a0e
    PUSH EDX                            ; 00563a12
    MOV EBX,dword ptr [ESP + 0x14]      ; 00563a13
    PUSH EBX                            ; 00563a17
    MOV ECX,dword ptr [ESP + 0x14]      ; 00563a18
    PUSH ECX                            ; 00563a1c
    CALL FUN_00569040                   ; 00563a1d
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined FUN_00569040()
    ADD ESP,0x10                        ; 00563a22
    MOV EDX,dword ptr [ESP + 0x8]       ; 00563a25
    MOV byte ptr [EDX + EAX*0x1],0x0    ; 00563a29
    POP EBX                             ; 00563a2d
    RET                                 ; 00563a2e

