; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f6930(int param_1,char *param_2)
;
;
; XREF[19]:
;   FUN_00414550 at 00414621
;   FUN_00489c90 at 00489e34
;   FUN_0049cca0 at 0049cd2f
;   FUN_004ced40 at 004cee0c
;   FUN_004f5cc0 at 004f6286
;   FUN_004f7710 at 004f7839
;   FUN_004f7a20 at 004f7b65
;   FUN_0050a7d0 at 0050a8f6
;   FUN_00524940 at 00524c22
;   FUN_00527780 at 005278b3
;   ... and 9 more
;
; Called Functions:
;   FUN_004f7530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6930
        ;   Label: FUN_004f6930
    PUSH ESI                            ; 004f6931
    MOV ESI,dword ptr [ESP + 0xc]       ; 004f6932
    MOV EBX,dword ptr [ESP + 0x10]      ; 004f6936
    TEST EBX,EBX                        ; 004f693a
    JZ 0x004f6965                       ; 004f693c
        ;   XREF to: 004f6965 (CONDITIONAL_JUMP)  ; LAB_004f6965
    CMP byte ptr [EBX],0x0              ; 004f693e
    JZ 0x004f6968                       ; 004f6941
        ;   XREF to: 004f6968 (CONDITIONAL_JUMP)  ; LAB_004f6968
    MOV EDX,dword ptr [ESI + 0x1440]    ; 004f6943
        ;   Label: LAB_004f6943
    TEST EDX,EDX                        ; 004f6949
    JNZ 0x004f6974                      ; 004f694b
        ;   XREF to: 004f6974 (CONDITIONAL_JUMP)  ; LAB_004f6974
    MOV dword ptr [EBX + 0x14c],EDX     ; 004f694d
    MOV dword ptr [EBX + 0x150],EDX     ; 004f6953
    MOV dword ptr [ESI + 0x143c],EBX    ; 004f6959
    MOV dword ptr [ESI + 0x1440],EBX    ; 004f695f
    POP ESI                             ; 004f6965
        ;   Label: LAB_004f6965
    POP EBX                             ; 004f6966
    RET                                 ; 004f6967
    PUSH EBX                            ; 004f6968
        ;   Label: LAB_004f6968
    PUSH ESI                            ; 004f6969
    CALL FUN_004f7530                   ; 004f696a
        ;   XREF to: 004f7530 (UNCONDITIONAL_CALL)  ; undefined FUN_004f7530()
    ADD ESP,0x8                         ; 004f696f
    JMP 0x004f6943                      ; 004f6972
        ;   XREF to: 004f6943 (UNCONDITIONAL_JUMP)  ; LAB_004f6943
    MOV dword ptr [EBX + 0x14c],0x0     ; 004f6974
        ;   Label: LAB_004f6974
    MOV dword ptr [EBX + 0x150],EDX     ; 004f697e
    MOV EAX,dword ptr [ESI + 0x1440]    ; 004f6984
    MOV dword ptr [EAX + 0x14c],EBX     ; 004f698a
    MOV dword ptr [ESI + 0x1440],EBX    ; 004f6990
    POP ESI                             ; 004f6996
    POP EBX                             ; 004f6997
    RET                                 ; 004f6998

