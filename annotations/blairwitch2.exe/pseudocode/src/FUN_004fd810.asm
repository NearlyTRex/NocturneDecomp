; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004fd810(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00583f20 at 005845c2
;
; Referenced Globals:
;   undefined4 s_mobster1_dfm_005dec0c+1
;   undefined1 DAT_005dec1a
;   undefined1 DAT_005dec1b
;   undefined1 DAT_005dec1c
;   undefined1 DAT_005dec1d
;   undefined4 DAT_005fa230
;   undefined4 DAT_005fa234
;   undefined4 DAT_005fa244
;
; Called Functions:
;   FUN_0040cfc0
;   FUN_00487db0
;   FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fd810
        ;   Label: FUN_004fd810
    PUSH ESI                            ; 004fd811
    PUSH EDI                            ; 004fd812
    MOV EDX,dword ptr [ESP + 0x10]      ; 004fd813
    PUSH EDX                            ; 004fd817
    CALL FUN_00487db0                   ; 004fd818
        ;   XREF to: 00487db0 (UNCONDITIONAL_CALL)  ; undefined FUN_00487db0()
    ADD ESP,0x4                         ; 004fd81d
    PUSH 0x5dec0d                       ; 004fd820 | s_mobster1_dfm_005dec0c+1
    MOV EBX,EAX                         ; 004fd825
    ADD EAX,0x2b4                       ; 004fd827
    PUSH EAX                            ; 004fd82c
    MOV dword ptr [EAX + -0x4],0x5fa244 ; 004fd82d | DAT_005fa244
    CALL FUN_005478b0                   ; 004fd834
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005478b0()
    FLD float ptr [0x005fa230]          ; 004fd839 | DAT_005fa230
    ADD ESP,0x8                         ; 004fd83f
    MOV dword ptr [EBX + 0x3430],0x3f19999a ; 004fd842
    FLD float ptr [0x005fa234]          ; 004fd84c | DAT_005fa234
    MOV dword ptr [EBX + 0x3434],0x3f666666 ; 004fd852
    PUSH 0xff                           ; 004fd85c
    FXCH                                ; 004fd861
    FSTP float ptr [EBX + 0x3438]       ; 004fd863
    PUSH 0x0                            ; 004fd869
    FSTP float ptr [EBX + 0x343c]       ; 004fd86b
    CALL FUN_0040cfc0                   ; 004fd871
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cfc0()
    MOV dword ptr [EBX + 0x10afc],0x0   ; 004fd876
    MOV dword ptr [EBX + 0x10b00],0x0   ; 004fd880
    MOV dword ptr [EBX + 0x10b04],0x0   ; 004fd88a
    MOV dword ptr [EBX + 0x10bc8],0x0   ; 004fd894
    ADD ESP,0x8                         ; 004fd89e
    MOV dword ptr [EBX + 0x10bcc],0x0   ; 004fd8a1
    PUSH 0x65                           ; 004fd8ab
    MOV dword ptr [EBX + 0x10aec],0x42200000 ; 004fd8ad
    PUSH 0x62                           ; 004fd8b7
    MOV dword ptr [EBX + 0x10af8],EAX   ; 004fd8b9
    CALL FUN_0040cfc0                   ; 004fd8bf
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cfc0()
    MOV dword ptr [EBX + 0x10b10],0x0   ; 004fd8c4
    MOV dword ptr [EBX + 0x10b08],0x0   ; 004fd8ce
    MOV dword ptr [EBX + 0x10b14],0x0   ; 004fd8d8
    MOV dword ptr [EBX + 0x10b18],0x0   ; 004fd8e2
    MOV dword ptr [EBX + 0x10b1c],0x0   ; 004fd8ec
    MOV ESI,0x5dec1a                    ; 004fd8f6 | DAT_005dec1a
    MOV dword ptr [EBX + 0x10b20],0x0   ; 004fd8fb
    ADD ESP,0x8                         ; 004fd905
    MOV dword ptr [EBX + 0x10b24],0x0   ; 004fd908
    LEA EDI,[EBX + 0x10b28]             ; 004fd912
    MOV byte ptr [EBX + 0x10b0c],AL     ; 004fd918
    PUSH EDI                            ; 004fd91e
    MOV AL,byte ptr [ESI]               ; 004fd91f | DAT_005dec1a | DAT_005dec1c
        ;   Label: LAB_004fd91f
    MOV byte ptr [EDI],AL               ; 004fd921
    CMP AL,0x0                          ; 004fd923
    JZ 0x004fd937                       ; 004fd925
        ;   XREF to: 004fd937 (CONDITIONAL_JUMP)  ; LAB_004fd937
    MOV AL,byte ptr [ESI + 0x1]         ; 004fd927 | DAT_005dec1b | DAT_005dec1d
    ADD ESI,0x2                         ; 004fd92a
    MOV byte ptr [EDI + 0x1],AL         ; 004fd92d
    ADD EDI,0x2                         ; 004fd930
    CMP AL,0x0                          ; 004fd933
    JNZ 0x004fd91f                      ; 004fd935
        ;   XREF to: 004fd91f (CONDITIONAL_JUMP)  ; LAB_004fd91f
    POP EDI                             ; 004fd937
        ;   Label: LAB_004fd937
    MOV EAX,EBX                         ; 004fd938
    MOV dword ptr [EBX + 0x10af4],0x0   ; 004fd93a
    POP EDI                             ; 004fd944
    POP ESI                             ; 004fd945
    POP EBX                             ; 004fd946
    RET                                 ; 004fd947

