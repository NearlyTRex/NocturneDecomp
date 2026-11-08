; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00484a40(int param_1,int param_2)
;
;
; XREF[9]:
;   FUN_004101f0 at 00410356
;   FUN_00413970 at 00413ad9
;   FUN_0041d000 at 0041d063
;   FUN_0047cfe0 at 0047d158
;   FUN_004f90d0 at 004f94dd
;   FUN_00522dd0 at 00522de4
;   FUN_0055fc60 at 0055fd37
;   FUN_005611a0 at 0056126b
;   FUN_005a9440 at 005a9555
;
; Referenced Globals:
;   undefined4 DAT_01bc1280
;   undefined4 DAT_01bc1284
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00484a40
        ;   Label: FUN_00484a40
    MOV ECX,dword ptr [EDX + 0x4]       ; 00484a44
    TEST ECX,ECX                        ; 00484a47
    JZ 0x00484a53                       ; 00484a49
        ;   XREF to: 00484a53 (CONDITIONAL_JUMP)  ; LAB_00484a53
    MOV dword ptr [EDX + 0x1c],0x0      ; 00484a4b
    RET                                 ; 00484a52
    PUSH EDI                            ; 00484a53
        ;   Label: LAB_00484a53
    CMP dword ptr [ESP + 0xc],0x0       ; 00484a54
    SETNZ AL                            ; 00484a59
    MOV EDI,0xffffffff                  ; 00484a5c
    AND EAX,0xff                        ; 00484a61
    MOV dword ptr [0x01bc1280],ECX      ; 00484a66 | DAT_01bc1280
    INC EAX                             ; 00484a6c
    MOV dword ptr [0x01bc1284],EDI      ; 00484a6d | DAT_01bc1284
    MOV dword ptr [EDX + 0x1c],EAX      ; 00484a73
    POP EDI                             ; 00484a76
    RET                                 ; 00484a77

