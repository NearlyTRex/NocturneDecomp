; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004591b0(int param_1)
;
;
; XREF[1]:
;   FUN_00496520 at 00496526
;
; Referenced Globals:
;   undefined4 DAT_00600530
;
; Called Functions:
;   FUN_00408890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004591b0
        ;   Label: FUN_004591b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004591b1
    PUSH EBX                            ; 004591b5
    CALL FUN_00408890                   ; 004591b6
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; undefined FUN_00408890()
    MOV EAX,[0x00600530]                ; 004591bb | DAT_00600530
    MOV dword ptr [EBX + 0xf8],0x0      ; 004591c0
    MOV EAX,dword ptr [EAX + 0x1008]    ; 004591ca
    MOV dword ptr [EBX + 0x184],0x0     ; 004591d0
    MOV dword ptr [EBX + 0x1f0],0x1     ; 004591da
    ADD ESP,0x4                         ; 004591e4
    MOV dword ptr [EBX + 0xfc],EAX      ; 004591e7
    POP EBX                             ; 004591ed
    RET                                 ; 004591ee

