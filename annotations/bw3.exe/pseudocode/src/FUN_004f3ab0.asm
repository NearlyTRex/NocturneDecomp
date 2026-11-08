; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f3ab0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[7]:
;   FUN_0047ee50 at 0047f0ed
;   FUN_0047fa80 at 0047fc9c
;   FUN_00480200 at 004802dd
;   FUN_004850a0 at 00485122
;   FUN_004852f0 at 0048543c
;   FUN_00486120 at 004863f3
;   FUN_004f3a60 at 004f3a77
;
; Called Functions:
;   FUN_004f37e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004f3ab0
        ;   Label: FUN_004f3ab0
    PUSH EAX                            ; 004f3ab4
    MOV EDX,dword ptr [ESP + 0x10]      ; 004f3ab5
    PUSH EDX                            ; 004f3ab9
    PUSH EAX                            ; 004f3aba
    MOV ECX,dword ptr [ESP + 0x10]      ; 004f3abb
    PUSH ECX                            ; 004f3abf
    CALL FUN_004f37e0                   ; 004f3ac0
        ;   XREF to: 004f37e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f37e0()
    ADD ESP,0x10                        ; 004f3ac5
    RET                                 ; 004f3ac8

