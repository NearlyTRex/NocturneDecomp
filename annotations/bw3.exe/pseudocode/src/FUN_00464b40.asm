; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00464b40(int param_1,int param_2)
;
;
; Called Functions:
;   FUN_004087f0
;   FUN_00408830
;   FUN_0041daf0
;   FUN_00462540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00464b40
        ;   Label: FUN_00464b40
    SUB ESP,0x30                        ; 00464b41
    MOV EBX,dword ptr [ESP + 0x38]      ; 00464b44
    CMP dword ptr [ESP + 0x3c],0x0      ; 00464b48
    JZ 0x00464b58                       ; 00464b4d
        ;   XREF to: 00464b58 (CONDITIONAL_JUMP)  ; LAB_00464b58
    CMP dword ptr [EBX + 0x9c8],0x2     ; 00464b4f
    JGE 0x00464b5d                      ; 00464b56
        ;   XREF to: 00464b5d (CONDITIONAL_JUMP)  ; LAB_00464b5d
    ADD ESP,0x30                        ; 00464b58
        ;   Label: LAB_00464b58
    POP EBX                             ; 00464b5b
    RET                                 ; 00464b5c
    PUSH EDI                            ; 00464b5d
        ;   Label: LAB_00464b5d
    PUSH ESI                            ; 00464b5e
    PUSH EBX                            ; 00464b5f
    MOV dword ptr [EBX + 0x9c8],0x3     ; 00464b60
    CALL FUN_004087f0                   ; 00464b6a
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 00464b6f
    PUSH 0x0                            ; 00464b72
    MOV EAX,dword ptr [EBX + 0x154]     ; 00464b74
    PUSH EBX                            ; 00464b7a
    LEA ESI,[ESP + 0x10]                ; 00464b7b
    LEA EDI,[ESP + 0x28]                ; 00464b7f
    CALL dword ptr [EAX + 0x1c]         ; 00464b83
    MOV ECX,0x6                         ; 00464b86
    ADD ESP,0x4                         ; 00464b8b
    LEA EAX,[ESP + 0x24]                ; 00464b8e
    LEA ESI,[ESP + 0xc]                 ; 00464b92
    PUSH EAX                            ; 00464b96
    MOVSD.REP ES:EDI,ESI                ; 00464b97
    CALL FUN_0041daf0                   ; 00464b99
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041daf0()
    ADD ESP,0x8                         ; 00464b9e
    TEST EAX,EAX                        ; 00464ba1
    JZ 0x00464bb8                       ; 00464ba3
        ;   XREF to: 00464bb8 (CONDITIONAL_JUMP)  ; LAB_00464bb8
    PUSH -0x1                           ; 00464ba5
    LEA EAX,[EBX + 0x158]               ; 00464ba7
    PUSH 0x0                            ; 00464bad
    PUSH EAX                            ; 00464baf
    CALL FUN_00462540                   ; 00464bb0
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; undefined FUN_00462540()
    ADD ESP,0xc                         ; 00464bb5
    PUSH EBX                            ; 00464bb8
        ;   Label: LAB_00464bb8
    CALL FUN_00408830                   ; 00464bb9
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    ADD ESP,0x4                         ; 00464bbe
    POP ESI                             ; 00464bc1
    POP EDI                             ; 00464bc2
    ADD ESP,0x30                        ; 00464bc3
    POP EBX                             ; 00464bc6
    RET                                 ; 00464bc7

