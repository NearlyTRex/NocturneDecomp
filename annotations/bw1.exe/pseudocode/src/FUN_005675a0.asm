; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005675a0(int param_1)
;
;
; XREF[48]:
;   FUN_0040eaa0 at 0040eb59
;   FUN_0040f4d0 at 0040f67a
;   FUN_004115b0 at 0041181b
;   FUN_00412ba0 at 00412e18
;   FUN_00414770 at 004147dc
;   FUN_00414b30 at 00414d24
;   FUN_00415340 at 004155b1
;   FUN_0041bb40 at 0041c15b
;   FUN_00423b70 at 00424754
;   FUN_00428ae0 at 00429875
;   ... and 38 more
;
; Referenced Globals:
;   undefined4 DAT_005f24c9
;
; Called Functions:
;   FUN_00567620
;   FUN_00568100
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005675a0
        ;   Label: FUN_005675a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005675a1
    PUSH -0x1                           ; 005675a5
    MOV EDX,dword ptr [EBX + 0x4]       ; 005675a7
    PUSH dword ptr [EBX + 0x8]          ; 005675aa
    PUSH EDX                            ; 005675ad
    PUSH EBX                            ; 005675ae
    CALL FUN_00567620                   ; 005675af
        ;   XREF to: 00567620 (UNCONDITIONAL_CALL)  ; undefined FUN_00567620()
    FLD float ptr [EBX + 0x14]          ; 005675b4
    ADD ESP,0x10                        ; 005675b7
    FCOMP double ptr [0x005f24c9]       ; 005675ba | DAT_005f24c9
    FNSTSW AX                           ; 005675c0
    SAHF                                ; 005675c2
    JA 0x005675c7                       ; 005675c3
        ;   XREF to: 005675c7 (CONDITIONAL_JUMP)  ; LAB_005675c7
    POP EBX                             ; 005675c5
    RET                                 ; 005675c6
    PUSH 0x567360                       ; 005675c7 | LAB_00567360
        ;   Label: LAB_005675c7
    PUSH -0x1                           ; 005675cc
    PUSH dword ptr [EBX + 0x14]         ; 005675ce
    MOV ECX,dword ptr [EBX + 0x18]      ; 005675d1
    PUSH dword ptr [EBX + 0x1c]         ; 005675d4
    PUSH ECX                            ; 005675d7
    PUSH EBX                            ; 005675d8
    CALL FUN_00568100                   ; 005675d9
        ;   XREF to: 00568100 (UNCONDITIONAL_CALL)  ; undefined FUN_00568100()
    ADD ESP,0x18                        ; 005675de
    POP EBX                             ; 005675e1
    RET                                 ; 005675e2

