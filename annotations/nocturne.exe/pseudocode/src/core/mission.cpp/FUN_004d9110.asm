; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d9110(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[3]:
;   FUN_0043cdb0 at 0043ce46
;   FUN_004bf360 at 004c00bd
;   FUN_004d5e20 at 004d5ee4
;
; Referenced Globals:
;   string s_..\\core\\mission.cpp_00589cfb
;   string s_CDemonMission::markActorToDelete_00589d0f
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d9110
        ;   Label: FUN_004d9110
    MOV EDX,dword ptr [EAX + 0x52c]     ; 004d9114
    MOV ECX,dword ptr [ESP + 0x8]       ; 004d911a
    MOV dword ptr [EAX + EDX*0x4 + 0x530],ECX ; 004d911e
    MOV EDX,dword ptr [EAX + 0x52c]     ; 004d9125
    MOV ECX,dword ptr [ESP + 0xc]       ; 004d912b
    MOV dword ptr [EAX + EDX*0x4 + 0x6c0],ECX ; 004d912f
    MOV EDX,dword ptr [EAX + 0x52c]     ; 004d9136
    INC EDX                             ; 004d913c
    MOV dword ptr [EAX + 0x52c],EDX     ; 004d913d
    CMP EDX,0x64                        ; 004d9143
    JGE 0x004d9149                      ; 004d9146
        ;   XREF to: 004d9149 (CONDITIONAL_JUMP)  ; LAB_004d9149
    RET                                 ; 004d9148
    PUSH ESI                            ; 004d9149
        ;   Label: LAB_004d9149
    PUSH EBX                            ; 004d914a
    MOV EBX,0x589cfb                    ; 004d914b | = "..\\core\\mission.cpp"
    MOV ESI,0x408                       ; 004d9150
    PUSH 0x589d0f                       ; 004d9155 | = "CDemonMission::markActorToDelete - To..."
    MOV dword ptr [0x01cc4800],EBX      ; 004d915a | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004d9160 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004d9166
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004d916b
    POP EBX                             ; 004d916e
    POP ESI                             ; 004d916f
    RET                                 ; 004d9170

