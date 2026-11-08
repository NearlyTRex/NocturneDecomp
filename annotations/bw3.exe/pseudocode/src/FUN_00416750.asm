; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00416750(int param_1,undefined4 *param_2)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined        Stack[-0x18]:1  local_18
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   FUN_00430590 at 0043079a
;
; Referenced Globals:
;   undefined4 s_GCHAR2_RAW_005b6c99+1
;   undefined4 s_GCHAR2_RAW_005b6c99+2
;   undefined4 s_GCHAR2_RAW_005b6c99+3
;   undefined4 s_GCHAR2_RAW_005b6c99+4
;
; Called Functions:
;   FUN_00408b80
;   FUN_0040ce40
;   FUN_004a5aa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00416750
        ;   Label: FUN_00416750
    PUSH EBP                            ; 00416751
    SUB ESP,0x1c                        ; 00416752
    MOV EBX,dword ptr [ESP + 0x28]      ; 00416755
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00416759
    MOV EDX,dword ptr [EBX + 0x74c]     ; 0041675d
    CMP EDX,0x2                         ; 00416763
    JGE 0x00416882                      ; 00416766
        ;   XREF to: 00416882 (CONDITIONAL_JUMP)  ; LAB_00416882
    PUSH EDI                            ; 0041676c
    PUSH ESI                            ; 0041676d
    MOV ESI,EDX                         ; 0041676e
    IMUL EBP,EDX,0x2b0                  ; 00416770
    LEA EDX,[EBX + 0x750]               ; 00416776
    INC ESI                             ; 0041677c
    ADD EBP,EDX                         ; 0041677d
    MOV dword ptr [EBX + 0x74c],ESI     ; 0041677f
    CMP EBP,EAX                         ; 00416785
    JZ 0x0041679a                       ; 00416787
        ;   XREF to: 0041679a (CONDITIONAL_JUMP)  ; LAB_0041679a
    MOV EDX,dword ptr [EAX]             ; 00416789
    MOV dword ptr [EBP],EDX             ; 0041678b
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041678e
    MOV dword ptr [EBP + 0x4],EDX       ; 00416791
    MOV EDX,dword ptr [EAX + 0x8]       ; 00416794
    MOV dword ptr [EBP + 0x8],EDX       ; 00416797
    PUSH EBP                            ; 0041679a
        ;   Label: LAB_0041679a
    PUSH EBX                            ; 0041679b
    LEA ESI,[ESP + 0x1c]                ; 0041679c
    LEA EDI,[ESP + 0x10]                ; 004167a0
    CALL FUN_00408b80                   ; 004167a4
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    LEA ESI,[ESP + 0x1c]                ; 004167a9
    ADD ESP,0x8                         ; 004167ad
    MOVSD ES:EDI,ESI                    ; 004167b0
    MOVSD ES:EDI,ESI                    ; 004167b1
    MOVSD ES:EDI,ESI                    ; 004167b2
    LEA EDX,[EBP + 0x2c]                ; 004167b3
    MOV EAX,dword ptr [ESP + 0x8]       ; 004167b6
    MOV dword ptr [EDX],EAX             ; 004167ba
    MOV EAX,dword ptr [ESP + 0xc]       ; 004167bc
    MOV dword ptr [EDX + 0x4],EAX       ; 004167c0
    MOV EAX,dword ptr [ESP + 0x10]      ; 004167c3
    MOV dword ptr [EDX + 0x8],EAX       ; 004167c7
    LEA EAX,[EBP + 0xc]                 ; 004167ca
    PUSH EAX                            ; 004167cd
    CALL FUN_004a5aa0                   ; 004167ce
        ;   XREF to: 004a5aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a5aa0()
    MOV dword ptr [EBP + 0x1b8],0x0     ; 004167d3
    MOV dword ptr [EBP + 0x164],0x3fc00000 ; 004167dd
    MOV dword ptr [EBP + 0x168],0x40400000 ; 004167e7
    MOV ESI,0x5b6c9a                    ; 004167f1 | s_GCHAR2_RAW_005b6c99+1
    MOV dword ptr [EBP + 0x16c],0x3fc00000 ; 004167f6
    ADD ESP,0x4                         ; 00416800
    MOV dword ptr [EBX + 0xfc],0x1      ; 00416803
    LEA EDI,[EBX + 0x198]               ; 0041680d
    MOV dword ptr [EBX + 0x18c],0x1     ; 00416813
    PUSH EDI                            ; 0041681d
    MOV AL,byte ptr [ESI]               ; 0041681e | s_GCHAR2_RAW_005b6c99+1 | s_GCHAR2_RAW_005b6c99+3
        ;   Label: LAB_0041681e
    MOV byte ptr [EDI],AL               ; 00416820
    CMP AL,0x0                          ; 00416822
    JZ 0x00416836                       ; 00416824
        ;   XREF to: 00416836 (CONDITIONAL_JUMP)  ; LAB_00416836
    MOV AL,byte ptr [ESI + 0x1]         ; 00416826 | s_GCHAR2_RAW_005b6c99+2 | s_GCHAR2_RAW_005b6c99+4
    ADD ESI,0x2                         ; 00416829
    MOV byte ptr [EDI + 0x1],AL         ; 0041682c
    ADD EDI,0x2                         ; 0041682f
    CMP AL,0x0                          ; 00416832
    JNZ 0x0041681e                      ; 00416834
        ;   XREF to: 0041681e (CONDITIONAL_JUMP)  ; LAB_0041681e
    POP EDI                             ; 00416836
        ;   Label: LAB_00416836
    MOV EDI,dword ptr [EBX + 0x180]     ; 00416837
    XOR EDX,EDX                         ; 0041683d
    TEST EDI,EDI                        ; 0041683f
    JLE 0x00416860                      ; 00416841
        ;   XREF to: 00416860 (CONDITIONAL_JUMP)  ; LAB_00416860
    XOR EAX,EAX                         ; 00416843
    MOV ECX,dword ptr [EBX + 0x188]     ; 00416845
        ;   Label: LAB_00416845
    MOV dword ptr [ECX + EAX*0x1],0x0   ; 0041684b
    INC EDX                             ; 00416852
    MOV EBP,dword ptr [EBX + 0x180]     ; 00416853
    ADD EAX,0x4                         ; 00416859
    CMP EDX,EBP                         ; 0041685c
    JL 0x00416845                       ; 0041685e
        ;   XREF to: 00416845 (CONDITIONAL_JUMP)  ; LAB_00416845
    PUSH 0x40a00000                     ; 00416860
        ;   Label: LAB_00416860
    PUSH 0x40800000                     ; 00416865
    CALL FUN_0040ce40                   ; 0041686a
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [ESP + 0x28],EAX      ; 0041686f
    MOV EAX,dword ptr [ESP + 0x28]      ; 00416873
    MOV dword ptr [EBX + 0xccc],EAX     ; 00416877
    ADD ESP,0x8                         ; 0041687d
    POP ESI                             ; 00416880
    POP EDI                             ; 00416881
    ADD ESP,0x1c                        ; 00416882
        ;   Label: LAB_00416882
    POP EBP                             ; 00416885
    POP EBX                             ; 00416886
    RET                                 ; 00416887

