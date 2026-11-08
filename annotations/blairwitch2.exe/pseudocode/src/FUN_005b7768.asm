; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b7768(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[17]:
;   FUN_00436710 at 00436748
;   FUN_00468880 at 004688ad
;   FUN_00468a90 at 00468aba
;   FUN_0047bda0 at 0047bdb8
;   FUN_0047bdf0 at 0047be08
;   FUN_0047be40 at 0047be58
;   FUN_0047be90 at 0047bedb
;   FUN_0047c760 at 0047c77b
;   FUN_00488ba0 at 00488bb7
;   FUN_004a9130 at 004a914f
;   ... and 7 more
;
; Called Functions:
;   FUN_005bb050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b7768
        ;   Label: FUN_005b7768
    PUSH 0x5b7750                       ; 005b7769 | LAB_005b7750
    MOV EDX,dword ptr [ESP + 0x14]      ; 005b776e
    PUSH EDX                            ; 005b7772
    MOV EBX,dword ptr [ESP + 0x14]      ; 005b7773
    PUSH EBX                            ; 005b7777
    MOV ECX,dword ptr [ESP + 0x14]      ; 005b7778
    PUSH ECX                            ; 005b777c
    CALL FUN_005bb050                   ; 005b777d
        ;   XREF to: 005bb050 (UNCONDITIONAL_CALL)  ; undefined FUN_005bb050()
    ADD ESP,0x10                        ; 005b7782
    MOV EDX,dword ptr [ESP + 0x8]       ; 005b7785
    MOV byte ptr [EDX + EAX*0x1],0x0    ; 005b7789
    POP EBX                             ; 005b778d
    RET                                 ; 005b778e

