; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00531ae0(int param_1,int param_2)
;
;
; XREF[1]:
;   FUN_004eefd0 at 004ef015
;
; Called Functions:
;   FUN_0042f320
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00531ae0
        ;   Label: FUN_00531ae0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00531ae4
    CMP dword ptr [EAX + 0x1fab0],0x0   ; 00531ae8
    JZ 0x00531b09                       ; 00531aef
        ;   XREF to: 00531b09 (CONDITIONAL_JUMP)  ; LAB_00531b09
    TEST EDX,EDX                        ; 00531af1
    JZ 0x00531aff                       ; 00531af3
        ;   XREF to: 00531aff (CONDITIONAL_JUMP)  ; LAB_00531aff
    MOV dword ptr [EAX + 0x24fc],0x1    ; 00531af5
    PUSH EDX                            ; 00531aff
        ;   Label: LAB_00531aff
    PUSH EAX                            ; 00531b00
    CALL FUN_0042f320                   ; 00531b01
        ;   XREF to: 0042f320 (UNCONDITIONAL_CALL)  ; undefined FUN_0042f320()
    ADD ESP,0x8                         ; 00531b06
    RET                                 ; 00531b09
        ;   Label: LAB_00531b09

