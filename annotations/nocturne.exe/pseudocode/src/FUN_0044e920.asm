; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044e920(int param_1)
;
;
; XREF[1]:
;   FUN_005088f0 at 00508fdb
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_01ab99f0
;   undefined4 DAT_01ab99f4
;   undefined4 DAT_01ab99f8
;   undefined4 DAT_01ab99f9
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01bd2fa0
;   undefined4 DAT_01bd2fa4
;   undefined4 DAT_01bd2fa5
;
; Called Functions:
;   FUN_00461070
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01ab99f0]      ; 0044e920 | DAT_01ab99f0
        ;   Label: FUN_0044e920
    DEC EDX                             ; 0044e926
    MOV dword ptr [0x01ab99f0],EDX      ; 0044e927 | DAT_01ab99f0
    JZ 0x0044e930                       ; 0044e92d
        ;   XREF to: 0044e930 (CONDITIONAL_JUMP)  ; LAB_0044e930
    RET                                 ; 0044e92f
    PUSH EDI                            ; 0044e930
        ;   Label: LAB_0044e930
    PUSH ESI                            ; 0044e931
    PUSH EBX                            ; 0044e932
    MOV ECX,dword ptr [ESP + 0x10]      ; 0044e933
    MOV ESI,0x1ab99f4                   ; 0044e937
    MOV ECX,dword ptr [ECX + 0x1cc4]    ; 0044e93c
    MOV EDI,0x1bd2fa0                   ; 0044e942
    SHL ECX,0x2                         ; 0044e947
    PUSH EDI                            ; 0044e94a | DAT_01bd2fa0
    MOV EAX,ECX                         ; 0044e94b
    SHR ECX,0x2                         ; 0044e94d
    MOVSD.REP ES:EDI,ESI                ; 0044e950 | DAT_01ab99f4 | DAT_01bd2fa0 | DAT_01ab99f8
    MOV CL,AL                           ; 0044e952
    AND CL,0x3                          ; 0044e954
    MOVSB.REP ES:EDI,ESI                ; 0044e957 | DAT_01ab99f8 | DAT_01bd2fa4 | DAT_01ab99f9
    POP EDI                             ; 0044e959
    PUSH EDX                            ; 0044e95a
    MOV EBX,dword ptr [0x005ae704]      ; 0044e95b | DAT_005ae704
    PUSH EBX                            ; 0044e961 | DAT_01b4d738
    CALL FUN_00461070                   ; 0044e962
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; undefined FUN_00461070()
    ADD ESP,0x8                         ; 0044e967
    POP EBX                             ; 0044e96a
    POP ESI                             ; 0044e96b
    POP EDI                             ; 0044e96c
    RET                                 ; 0044e96d

