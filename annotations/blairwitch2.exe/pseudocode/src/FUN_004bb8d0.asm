; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bb8d0(int param_1,char *param_2,undefined4 param_3,float param_4)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   FUN_004244b0 at 0042458a
;   FUN_00427fb0 at 00428122
;   FUN_00581910 at 00582c7c
;
; Called Functions:
;   FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bb8d0
        ;   Label: FUN_004bb8d0
    PUSH ESI                            ; 004bb8d1
    PUSH EDI                            ; 004bb8d2
    PUSH EBP                            ; 004bb8d3
    SUB ESP,0x4                         ; 004bb8d4
    MOV EBX,dword ptr [ESP + 0x18]      ; 004bb8d7
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004bb8db
    FLD float ptr [ESP + 0x24]          ; 004bb8df
    FLDZ                                ; 004bb8e3
    FCOMPP                              ; 004bb8e5
    FNSTSW AX                           ; 004bb8e7
    SAHF                                ; 004bb8e9
    JNC 0x004bb937                      ; 004bb8ea
        ;   XREF to: 004bb937 (CONDITIONAL_JUMP)  ; LAB_004bb937
    TEST EBP,EBP                        ; 004bb8ec
    JZ 0x004bb937                       ; 004bb8ee
        ;   XREF to: 004bb937 (CONDITIONAL_JUMP)  ; LAB_004bb937
    CMP byte ptr [EBP],0x0              ; 004bb8f0
    JZ 0x004bb937                       ; 004bb8f4
        ;   XREF to: 004bb937 (CONDITIONAL_JUMP)  ; LAB_004bb937
    LEA EAX,[EBX + 0x3b0]               ; 004bb8f6
    MOV EDX,dword ptr [EBX + 0x3ac]     ; 004bb8fc
    XOR ESI,ESI                         ; 004bb902
    MOV dword ptr [ESP],EAX             ; 004bb904
    MOV EDI,EAX                         ; 004bb907
    TEST EDX,EDX                        ; 004bb909
    JLE 0x004bb92c                      ; 004bb90b
        ;   XREF to: 004bb92c (CONDITIONAL_JUMP)  ; LAB_004bb92c
    PUSH EBP                            ; 004bb90d
        ;   Label: LAB_004bb90d
    PUSH EDI                            ; 004bb90e
    CALL FUN_005b8130                   ; 004bb90f
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 004bb914
    TEST EAX,EAX                        ; 004bb917
    JZ 0x004bb93f                       ; 004bb919
        ;   XREF to: 004bb93f (CONDITIONAL_JUMP)  ; LAB_004bb93f
    INC ESI                             ; 004bb91b
    MOV ECX,dword ptr [EBX + 0x3ac]     ; 004bb91c
    ADD EDI,0x100                       ; 004bb922
    CMP ESI,ECX                         ; 004bb928
    JL 0x004bb90d                       ; 004bb92a
        ;   XREF to: 004bb90d (CONDITIONAL_JUMP)  ; LAB_004bb90d
    MOV ESI,dword ptr [EBX + 0x3ac]     ; 004bb92c
        ;   Label: LAB_004bb92c
    CMP ESI,0x5                         ; 004bb932
    JL 0x004bb957                       ; 004bb935
        ;   XREF to: 004bb957 (CONDITIONAL_JUMP)  ; LAB_004bb957
    ADD ESP,0x4                         ; 004bb937
        ;   Label: LAB_004bb937
    POP EBP                             ; 004bb93a
    POP EDI                             ; 004bb93b
    POP ESI                             ; 004bb93c
    POP EBX                             ; 004bb93d
    RET                                 ; 004bb93e
    MOV EAX,dword ptr [ESP + 0x20]      ; 004bb93f
        ;   Label: LAB_004bb93f
    MOV dword ptr [EBX + ESI*0x4 + 0x8b0],EAX ; 004bb943
    MOV EAX,dword ptr [ESP + 0x24]      ; 004bb94a
    MOV dword ptr [EBX + ESI*0x4 + 0x8c4],EAX ; 004bb94e
    JMP 0x004bb937                      ; 004bb955
        ;   XREF to: 004bb937 (UNCONDITIONAL_JUMP)  ; LAB_004bb937
    MOV EDI,ESI                         ; 004bb957
        ;   Label: LAB_004bb957
    MOV EAX,dword ptr [ESP]             ; 004bb959
    SHL EDI,0x8                         ; 004bb95c
    MOV ESI,EBP                         ; 004bb95f
    ADD EDI,EAX                         ; 004bb961
    PUSH EDI                            ; 004bb963
    MOV AL,byte ptr [ESI]               ; 004bb964
        ;   Label: LAB_004bb964
    MOV byte ptr [EDI],AL               ; 004bb966
    CMP AL,0x0                          ; 004bb968
    JZ 0x004bb97c                       ; 004bb96a
        ;   XREF to: 004bb97c (CONDITIONAL_JUMP)  ; LAB_004bb97c
    MOV AL,byte ptr [ESI + 0x1]         ; 004bb96c
    ADD ESI,0x2                         ; 004bb96f
    MOV byte ptr [EDI + 0x1],AL         ; 004bb972
    ADD EDI,0x2                         ; 004bb975
    CMP AL,0x0                          ; 004bb978
    JNZ 0x004bb964                      ; 004bb97a
        ;   XREF to: 004bb964 (CONDITIONAL_JUMP)  ; LAB_004bb964
    POP EDI                             ; 004bb97c
        ;   Label: LAB_004bb97c
    MOV EAX,dword ptr [EBX + 0x3ac]     ; 004bb97d
    MOV ESI,dword ptr [ESP + 0x20]      ; 004bb983
    MOV dword ptr [EBX + EAX*0x4 + 0x8b0],ESI ; 004bb987
    MOV EAX,dword ptr [EBX + 0x3ac]     ; 004bb98e
    MOV ESI,dword ptr [ESP + 0x24]      ; 004bb994
    MOV dword ptr [EBX + EAX*0x4 + 0x8c4],ESI ; 004bb998
    INC dword ptr [EBX + 0x3ac]         ; 004bb99f
    ADD ESP,0x4                         ; 004bb9a5
    POP EBP                             ; 004bb9a8
    POP EDI                             ; 004bb9a9
    POP ESI                             ; 004bb9aa
    POP EBX                             ; 004bb9ab
    RET                                 ; 004bb9ac

