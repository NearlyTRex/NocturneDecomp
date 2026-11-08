; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fe840(undefined4 *param_1,undefined4 param_2,int param_3)
;
; Local Variables:
; undefined        Stack[-0x18]:1  local_18
;
; XREF[3]:
;   FUN_004d6990 at 004d6afc
;   FUN_004d7250 at 004d74fa
;   FUN_0051bad0 at 0051bc0f
;
; Referenced Globals:
;   TerminatedCString s_moon_kfm_005e6cdb
;   TerminatedCString s_load1_005e6ce4
;   undefined4 DAT_00612560
;   undefined4 DAT_0061f2e4
;
; Called Functions:
;   FUN_0040d0a0
;   FUN_0040d0c0
;   FUN_0040d220
;   FUN_0040d4b0
;   FUN_004668a0
;   FUN_00484f00
;   FUN_0057dc40
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004fe840
        ;   Label: FUN_004fe840
    SUB ESP,0x14                        ; 004fe841
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004fe844
    MOV EAX,dword ptr [ESP + 0x24]      ; 004fe848
    MOV dword ptr [ESI + 0x8],0x0       ; 004fe84c
    MOV dword ptr [ESI + 0xc],0x1       ; 004fe853
    MOV dword ptr [ESI],0x0             ; 004fe85a
    MOV EDX,dword ptr [ESP + 0x20]      ; 004fe860
    MOV dword ptr [ESI + 0x110],EAX     ; 004fe864
    MOV dword ptr [ESI + 0x4],EDX       ; 004fe86a
    TEST EAX,EAX                        ; 004fe86d
    JZ 0x004fe982                       ; 004fe86f
        ;   XREF to: 004fe982 (CONDITIONAL_JUMP)  ; LAB_004fe982
    MOV dword ptr [ESI + 0x118],0x0     ; 004fe875
    MOV dword ptr [ESI + 0x11c],0xc0    ; 004fe87f
    MOV dword ptr [ESI + 0x120],0xc0    ; 004fe889
    MOV dword ptr [ESI + 0x114],0x1bf   ; 004fe893
    MOV dword ptr [ESI + 0x124],0xff    ; 004fe89d
        ;   Label: LAB_004fe89d
    PUSH 0x5e6cdb                       ; 004fe8a7 | = "moon.kfm"
    MOV dword ptr [ESI + 0x128],0xff    ; 004fe8ac
    PUSH 0x1d1be4c                      ; 004fe8b6
    MOV dword ptr [ESI + 0x12c],0xff    ; 004fe8bb
    CALL FUN_004668a0                   ; 004fe8c5
        ;   XREF to: 004668a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004668a0()
    ADD ESP,0x8                         ; 004fe8ca
    PUSH 0x61f2e4                       ; 004fe8cd | DAT_0061f2e4
    MOV EDX,dword ptr [0x00612560]      ; 004fe8d2 | DAT_00612560
    PUSH EDX                            ; 004fe8d8
    CALL FUN_00484f00                   ; 004fe8d9
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00484f00()
    ADD ESP,0x8                         ; 004fe8de
    MOV EAX,ESP                         ; 004fe8e1
    PUSH EAX                            ; 004fe8e3
    CALL FUN_0040d0a0                   ; 004fe8e4
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0a0()
    ADD ESP,0x4                         ; 004fe8e9
    PUSH 0x1e0                          ; 004fe8ec
    PUSH 0x280                          ; 004fe8f1
    PUSH 0x5e6ce4                       ; 004fe8f6 | = "load1"
    LEA EAX,[ESP + 0xc]                 ; 004fe8fb
    PUSH EAX                            ; 004fe8ff
    CALL FUN_0040d220                   ; 004fe900
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d220()
    ADD ESP,0x10                        ; 004fe905
    PUSH 0xffff                         ; 004fe908
    PUSH 0x0                            ; 004fe90d
    PUSH 0x0                            ; 004fe90f
    LEA EAX,[ESP + 0xc]                 ; 004fe911
    PUSH EAX                            ; 004fe915
    CALL FUN_0040d4b0                   ; 004fe916
        ;   XREF to: 0040d4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d4b0()
    MOV dword ptr [ESI + 0x114],0x1e4   ; 004fe91b
    MOV dword ptr [ESI + 0x118],0x16    ; 004fe925
    MOV dword ptr [ESI + 0x11c],0x3c    ; 004fe92f
    MOV dword ptr [ESI + 0x120],0x3c    ; 004fe939
    MOV dword ptr [ESI + 0x110],0x1     ; 004fe943
    ADD ESP,0x10                        ; 004fe94d
    MOV dword ptr [ESI + 0x124],0xd7    ; 004fe950
    PUSH 0x0                            ; 004fe95a
    LEA EAX,[ESP + 0x4]                 ; 004fe95c
    MOV dword ptr [ESI + 0x128],0xdc    ; 004fe960
    PUSH EAX                            ; 004fe96a
    MOV dword ptr [ESI + 0x12c],0xe0    ; 004fe96b
    CALL FUN_0040d0c0                   ; 004fe975
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0c0()
    ADD ESP,0x8                         ; 004fe97a
    ADD ESP,0x14                        ; 004fe97d
    POP ESI                             ; 004fe980
    RET                                 ; 004fe981
    PUSH EBX                            ; 004fe982
        ;   Label: LAB_004fe982
    CALL FUN_0057dc40                   ; 004fe983
        ;   XREF to: 0057dc40 (UNCONDITIONAL_CALL)  ; undefined FUN_0057dc40()
    MOV dword ptr [ESI + 0x114],0x0     ; 004fe988
    MOV dword ptr [ESI + 0x118],0x0     ; 004fe992
    MOV dword ptr [ESI + 0x11c],0x280   ; 004fe99c
    MOV dword ptr [ESI + 0x120],0x1e0   ; 004fe9a6
    POP EBX                             ; 004fe9b0
    JMP 0x004fe89d                      ; 004fe9b1
        ;   XREF to: 004fe89d (UNCONDITIONAL_JUMP)  ; LAB_004fe89d

