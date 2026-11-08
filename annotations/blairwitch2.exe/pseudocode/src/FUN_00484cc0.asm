; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00484cc0(int *param_1)
;
;
; XREF[1]:
;   FUN_00484900 at 00484909
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00484cc0
        ;   Label: FUN_00484cc0
    MOV EAX,dword ptr [ESP + 0x8]       ; 00484cc1
    MOV ECX,dword ptr [EAX + 0x8]       ; 00484cc5
    MOV EDX,dword ptr [EAX + 0x4]       ; 00484cc8
    MOV EBX,dword ptr [EAX]             ; 00484ccb
    SUB EDX,ECX                         ; 00484ccd
    CMP EDX,EBX                         ; 00484ccf
    JL 0x00484cda                       ; 00484cd1
        ;   XREF to: 00484cda (CONDITIONAL_JUMP)  ; LAB_00484cda
    CMP dword ptr [EAX],0x0             ; 00484cd3
    JL 0x00484ce3                       ; 00484cd6
        ;   XREF to: 00484ce3 (CONDITIONAL_JUMP)  ; LAB_00484ce3
    POP EBX                             ; 00484cd8
    RET                                 ; 00484cd9
    MOV dword ptr [EAX],EDX             ; 00484cda
        ;   Label: LAB_00484cda
    CMP dword ptr [EAX],0x0             ; 00484cdc
    JL 0x00484ce3                       ; 00484cdf
        ;   XREF to: 00484ce3 (CONDITIONAL_JUMP)  ; LAB_00484ce3
    POP EBX                             ; 00484ce1
    RET                                 ; 00484ce2
    MOV dword ptr [EAX],0x0             ; 00484ce3
        ;   Label: LAB_00484ce3
    POP EBX                             ; 00484ce9
    RET                                 ; 00484cea

