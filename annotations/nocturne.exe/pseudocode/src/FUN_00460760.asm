; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00460760(undefined4 param_1,undefined4 *param_2)
;
;
; Called Functions:
;   FUN_004ce730
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460760
        ;   Label: FUN_00460760
    MOV EAX,dword ptr [ESP + 0xc]       ; 00460761
    MOV EDX,dword ptr [EAX + 0x8]       ; 00460765
    PUSH EDX                            ; 00460768
    MOV ECX,dword ptr [EAX + 0x4]       ; 00460769
    PUSH ECX                            ; 0046076c
    MOV EBX,dword ptr [EAX]             ; 0046076d
    PUSH EBX                            ; 0046076f
    CALL FUN_004ce730                   ; 00460770
        ;   XREF to: 004ce730 (UNCONDITIONAL_CALL)  ; undefined FUN_004ce730()
    ADD ESP,0xc                         ; 00460775
    POP EBX                             ; 00460778
    RET                                 ; 00460779

