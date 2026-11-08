; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00459140(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00496460 at 00496468
;
; Called Functions:
;   FUN_00408600
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00459140
        ;   Label: FUN_00459140
    PUSH EDI                            ; 00459141
    MOV EDX,dword ptr [ESP + 0xc]       ; 00459142
    PUSH EDX                            ; 00459146
    MOV ESI,0x5ba9a6                    ; 00459147
    CALL FUN_00408600                   ; 0045914c
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; undefined FUN_00408600()
    MOV EDX,EAX                         ; 00459151
    ADD ESP,0x4                         ; 00459153
    LEA EDI,[EAX + 0x188]               ; 00459156
    MOV dword ptr [EAX + 0x154],0x5de204 ; 0045915c
    PUSH EDI                            ; 00459166
    MOV AL,byte ptr [ESI]               ; 00459167
        ;   Label: LAB_00459167
    MOV byte ptr [EDI],AL               ; 00459169
    CMP AL,0x0                          ; 0045916b
    JZ 0x0045917f                       ; 0045916d
        ;   XREF to: 0045917f (CONDITIONAL_JUMP)  ; LAB_0045917f
    MOV AL,byte ptr [ESI + 0x1]         ; 0045916f
    ADD ESI,0x2                         ; 00459172
    MOV byte ptr [EDI + 0x1],AL         ; 00459175
    ADD EDI,0x2                         ; 00459178
    CMP AL,0x0                          ; 0045917b
    JNZ 0x00459167                      ; 0045917d
        ;   XREF to: 00459167 (CONDITIONAL_JUMP)  ; LAB_00459167
    POP EDI                             ; 0045917f
        ;   Label: LAB_0045917f
    MOV dword ptr [EDX + 0x158],0x0     ; 00459180
    MOV byte ptr [EDX + 0x15c],0x0      ; 0045918a
    MOV dword ptr [EDX + 0x1f0],0x1     ; 00459191
    MOV EAX,EDX                         ; 0045919b
    MOV dword ptr [EDX + 0x1ec],0x1     ; 0045919d
    POP EDI                             ; 004591a7
    POP ESI                             ; 004591a8
    RET                                 ; 004591a9

