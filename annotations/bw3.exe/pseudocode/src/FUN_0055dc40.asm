; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0055dc40(void)
;
;
; Referenced Globals:
;   TerminatedCString s_WavOutDevice_poll_NULL_p_005d4ff8
;   TerminatedCString s_WavOutDevice_poll_sendWa_005d501c
;   undefined4 DAT_02cf5500
;
; Called Functions:
;   FUN_0055a560
;   FUN_0055d6f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055dc40
        ;   Label: FUN_0055dc40
    PUSH ESI                            ; 0055dc41
    PUSH EDI                            ; 0055dc42
    PUSH EBP                            ; 0055dc43
    MOV EDI,0x1                         ; 0055dc44
    MOV EDX,dword ptr [0x02cf5500]      ; 0055dc49 | DAT_02cf5500
    XOR ESI,ESI                         ; 0055dc4f
    TEST EDX,EDX                        ; 0055dc51
    JLE 0x0055dc7e                      ; 0055dc53
        ;   XREF to: 0055dc7e (CONDITIONAL_JUMP)  ; LAB_0055dc7e
    XOR EBX,EBX                         ; 0055dc55
    MOV EBP,dword ptr [EBX + 0x2cf5490] ; 0055dc57
        ;   Label: LAB_0055dc57
    TEST EBP,EBP                        ; 0055dc5d
    JZ 0x0055dc85                       ; 0055dc5f
        ;   XREF to: 0055dc85 (CONDITIONAL_JUMP)  ; LAB_0055dc85
    CMP dword ptr [EBX + 0x2cf54d0],0x0 ; 0055dc61
    JZ 0x0055dc85                       ; 0055dc68
        ;   XREF to: 0055dc85 (CONDITIONAL_JUMP)  ; LAB_0055dc85
    TEST byte ptr [EBP + 0x10],0x1      ; 0055dc6a
    JNZ 0x0055dc96                      ; 0055dc6e
        ;   XREF to: 0055dc96 (CONDITIONAL_JUMP)  ; LAB_0055dc96
    MOV ECX,dword ptr [0x02cf5500]      ; 0055dc70 | DAT_02cf5500
        ;   Label: LAB_0055dc70
    INC ESI                             ; 0055dc76
    ADD EBX,0x4                         ; 0055dc77
    CMP ESI,ECX                         ; 0055dc7a
    JL 0x0055dc57                       ; 0055dc7c
        ;   XREF to: 0055dc57 (CONDITIONAL_JUMP)  ; LAB_0055dc57
    MOV EAX,EDI                         ; 0055dc7e
        ;   Label: LAB_0055dc7e
    POP EBP                             ; 0055dc80
    POP EDI                             ; 0055dc81
    POP ESI                             ; 0055dc82
    POP EBX                             ; 0055dc83
    RET                                 ; 0055dc84
    PUSH 0x5d4ff8                       ; 0055dc85 | = "WavOutDevice::poll - NULL pointer??"
        ;   Label: LAB_0055dc85
    CALL FUN_0055a560                   ; 0055dc8a
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a560()
    XOR EDI,EDI                         ; 0055dc8f
    ADD ESP,0x4                         ; 0055dc91
    JMP 0x0055dc7e                      ; 0055dc94
        ;   XREF to: 0055dc7e (UNCONDITIONAL_JUMP)  ; LAB_0055dc7e
    PUSH ESI                            ; 0055dc96
        ;   Label: LAB_0055dc96
    CALL FUN_0055d6f0                   ; 0055dc97
        ;   XREF to: 0055d6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d6f0()
    ADD ESP,0x4                         ; 0055dc9c
    TEST EAX,EAX                        ; 0055dc9f
    JNZ 0x0055dc70                      ; 0055dca1
        ;   XREF to: 0055dc70 (CONDITIONAL_JUMP)  ; LAB_0055dc70
    PUSH 0x5d501c                       ; 0055dca3 | = "WavOutDevice::poll - sendWavOutBuffer..."
    CALL FUN_0055a560                   ; 0055dca8
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a560()
    XOR EDI,EDI                         ; 0055dcad
    ADD ESP,0x4                         ; 0055dcaf
    MOV EAX,EDI                         ; 0055dcb2
    POP EBP                             ; 0055dcb4
    POP EDI                             ; 0055dcb5
    POP ESI                             ; 0055dcb6
    POP EBX                             ; 0055dcb7
    RET                                 ; 0055dcb8

