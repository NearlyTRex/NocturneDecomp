; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00558940(UINT_PTR param_1,char *param_2)
;
; Local Variables:
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x34]:1  local_34
; undefined1       Stack[-0x33]:1  local_33
;
; XREF[1]:
;   FUN_00552890 at 005528c7
;
; Referenced Globals:
;   void* PTR_waveOutGetDevCapsA_005c8474 = 001c89c6
;   TerminatedCString s_WavOutWrite_005ea6c6
;
; Called Functions:
;   FUN_0050fe80
;   waveOutGetDevCapsA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00558940
        ;   Label: FUN_00558940
    PUSH ESI                            ; 00558941
    SUB ESP,0x34                        ; 00558942
    MOV ESI,dword ptr [ESP + 0x40]      ; 00558945
    MOV EBX,dword ptr [ESP + 0x44]      ; 00558949
    PUSH 0x34                           ; 0055894d
    LEA EAX,[ESP + 0x4]                 ; 0055894f
    PUSH EAX                            ; 00558953
    PUSH ESI                            ; 00558954
    CALL dword ptr CS:[0x5c8474]        ; 00558955 | PTR_waveOutGetDevCapsA_005c8474
    TEST EAX,EAX                        ; 0055895c
    JZ 0x00558968                       ; 0055895e
        ;   XREF to: 00558968 (CONDITIONAL_JUMP)  ; LAB_00558968
    XOR EAX,EAX                         ; 00558960
    ADD ESP,0x34                        ; 00558962
    POP ESI                             ; 00558965
    POP EBX                             ; 00558966
    RET                                 ; 00558967
    PUSH EDI                            ; 00558968
        ;   Label: LAB_00558968
    MOV dword ptr [EBX + 0x100],EAX     ; 00558969
    MOV dword ptr [EBX + 0x104],ESI     ; 0055896f
    MOV dword ptr [EBX + 0x108],EAX     ; 00558975
    PUSH 0x5ea6c6                       ; 0055897b | = "WavOutWrite: "
    MOV dword ptr [EBX + 0x10c],EAX     ; 00558980
    CALL FUN_0050fe80                   ; 00558986
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 0055898b
    MOV EDI,EBX                         ; 0055898e
    MOV ESI,EAX                         ; 00558990
    PUSH EDI                            ; 00558992
    MOV AL,byte ptr [ESI]               ; 00558993
        ;   Label: LAB_00558993
    MOV byte ptr [EDI],AL               ; 00558995
    CMP AL,0x0                          ; 00558997
    JZ 0x005589ab                       ; 00558999
        ;   XREF to: 005589ab (CONDITIONAL_JUMP)  ; LAB_005589ab
    MOV AL,byte ptr [ESI + 0x1]         ; 0055899b
    ADD ESI,0x2                         ; 0055899e
    MOV byte ptr [EDI + 0x1],AL         ; 005589a1
    ADD EDI,0x2                         ; 005589a4
    CMP AL,0x0                          ; 005589a7
    JNZ 0x00558993                      ; 005589a9
        ;   XREF to: 00558993 (CONDITIONAL_JUMP)  ; LAB_00558993
    POP EDI                             ; 005589ab
        ;   Label: LAB_005589ab
    LEA ESI,[ESP + 0xc]                 ; 005589ac
    PUSH EDI                            ; 005589b0
    SUB ECX,ECX                         ; 005589b1
    DEC ECX                             ; 005589b3
    MOV AL,0x0                          ; 005589b4
    SCASB.REPNE ES:EDI                  ; 005589b6
    DEC EDI                             ; 005589b8
    MOV AL,byte ptr [ESI]               ; 005589b9
        ;   Label: LAB_005589b9
    MOV byte ptr [EDI],AL               ; 005589bb
    CMP AL,0x0                          ; 005589bd
    JZ 0x005589d1                       ; 005589bf
        ;   XREF to: 005589d1 (CONDITIONAL_JUMP)  ; LAB_005589d1
    MOV AL,byte ptr [ESI + 0x1]         ; 005589c1
    ADD ESI,0x2                         ; 005589c4
    MOV byte ptr [EDI + 0x1],AL         ; 005589c7
    ADD EDI,0x2                         ; 005589ca
    CMP AL,0x0                          ; 005589cd
    JNZ 0x005589b9                      ; 005589cf
        ;   XREF to: 005589b9 (CONDITIONAL_JUMP)  ; LAB_005589b9
    POP EDI                             ; 005589d1
        ;   Label: LAB_005589d1
    MOV EAX,0x1                         ; 005589d2
    POP EDI                             ; 005589d7
    ADD ESP,0x34                        ; 005589d8
    POP ESI                             ; 005589db
    POP EBX                             ; 005589dc
    RET                                 ; 005589dd

