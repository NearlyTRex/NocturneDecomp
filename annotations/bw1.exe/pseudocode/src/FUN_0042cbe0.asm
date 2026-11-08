; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042cbe0(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[2]:
;   FUN_0046ea40 at 0046ea66
;   FUN_0058a320 at 0058a346
;
; Referenced Globals:
;   undefined4 DAT_005fd614
;
; Called Functions:
;   FUN_00409cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042cbe0
        ;   Label: FUN_0042cbe0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0042cbe1
    PUSH EBX                            ; 0042cbe5
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042cbe6
    CALL dword ptr [EAX + 0xf8]         ; 0042cbec
    ADD ESP,0x4                         ; 0042cbf2
    MOV EDX,dword ptr [ESP + 0x10]      ; 0042cbf5
    PUSH EDX                            ; 0042cbf9
    MOV ECX,dword ptr [ESP + 0x10]      ; 0042cbfa
    PUSH ECX                            ; 0042cbfe
    PUSH EBX                            ; 0042cbff
    CALL FUN_00409cc0                   ; 0042cc00
        ;   XREF to: 00409cc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409cc0()
    LEA EAX,[EBX + 0x2518]              ; 0042cc05
    FLD float ptr [0x005fd614]          ; 0042cc0b | DAT_005fd614
    MOV dword ptr [EAX + 0x8],0x0       ; 0042cc11
    ADD ESP,0xc                         ; 0042cc18
    MOV EDX,dword ptr [EAX + 0x8]       ; 0042cc1b
    MOV dword ptr [EAX + 0x4],EDX       ; 0042cc1e
    MOV EDX,dword ptr [EAX + 0x4]       ; 0042cc21
    MOV dword ptr [EAX],EDX             ; 0042cc24
    FSTP float ptr [EBX + 0x2504]       ; 0042cc26
    POP EBX                             ; 0042cc2c
    RET                                 ; 0042cc2d

