; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004166d0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)
;
;
; XREF[1]:
;   FUN_00430590 at 00430758
;
; Called Functions:
;   FUN_00462580
;   FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004166d0
        ;   Label: FUN_004166d0
    PUSH ESI                            ; 004166d1
    PUSH EBP                            ; 004166d2
    MOV EDX,dword ptr [ESP + 0x10]      ; 004166d3
    MOV ECX,dword ptr [ESP + 0x18]      ; 004166d7
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004166db
    MOV ESI,dword ptr [EDX + 0x28c]     ; 004166df
    CMP ESI,0x3                         ; 004166e5
    JGE 0x00416736                      ; 004166e8
        ;   XREF to: 00416736 (CONDITIONAL_JUMP)  ; LAB_00416736
    MOV EBP,ESI                         ; 004166ea
    IMUL ESI,ESI,0x194                  ; 004166ec
    LEA EAX,[EDX + 0x290]               ; 004166f2
    INC EBP                             ; 004166f8
    ADD EAX,ESI                         ; 004166f9
    MOV dword ptr [EDX + 0x28c],EBP     ; 004166fb
    CMP EAX,ECX                         ; 00416701
    JNZ 0x0041673a                      ; 00416703
        ;   XREF to: 0041673a (CONDITIONAL_JUMP)  ; LAB_0041673a
    LEA EDX,[EAX + 0xc]                 ; 00416705
        ;   Label: LAB_00416705
    CMP EDX,EBX                         ; 00416708
    JZ 0x0041671c                       ; 0041670a
        ;   XREF to: 0041671c (CONDITIONAL_JUMP)  ; LAB_0041671c
    MOV ECX,dword ptr [EBX]             ; 0041670c
    MOV dword ptr [EDX],ECX             ; 0041670e
    MOV ECX,dword ptr [EBX + 0x4]       ; 00416710
    MOV dword ptr [EDX + 0x4],ECX       ; 00416713
    MOV ECX,dword ptr [EBX + 0x8]       ; 00416716
    MOV dword ptr [EDX + 0x8],ECX       ; 00416719
    MOV EDX,dword ptr [ESP + 0x14]      ; 0041671c
        ;   Label: LAB_0041671c
    PUSH EDX                            ; 00416720
    LEA EBX,[EAX + 0x18]                ; 00416721
    PUSH EBX                            ; 00416724
    CALL FUN_004625f0                   ; 00416725
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    ADD ESP,0x8                         ; 0041672a
    PUSH EBX                            ; 0041672d
    CALL FUN_00462580                   ; 0041672e
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; undefined FUN_00462580()
    ADD ESP,0x4                         ; 00416733
    POP EBP                             ; 00416736
        ;   Label: LAB_00416736
    POP ESI                             ; 00416737
    POP EBX                             ; 00416738
    RET                                 ; 00416739
    MOV EDX,dword ptr [ECX]             ; 0041673a
        ;   Label: LAB_0041673a
    MOV dword ptr [EAX],EDX             ; 0041673c
    MOV EDX,dword ptr [ECX + 0x4]       ; 0041673e
    MOV dword ptr [EAX + 0x4],EDX       ; 00416741
    MOV EDX,dword ptr [ECX + 0x8]       ; 00416744
    MOV dword ptr [EAX + 0x8],EDX       ; 00416747
    JMP 0x00416705                      ; 0041674a
        ;   XREF to: 00416705 (UNCONDITIONAL_JUMP)  ; LAB_00416705

