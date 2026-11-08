; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00462ba0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f5644
;   undefined4 DAT_005f5648
;
; Called Functions:
;   FUN_00487db0
;   FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00462ba0
        ;   Label: FUN_00462ba0
    MOV ESI,dword ptr [ESP + 0x8]       ; 00462ba1
    PUSH EBX                            ; 00462ba5
    PUSH ESI                            ; 00462ba6
    CALL FUN_00487db0                   ; 00462ba7
        ;   XREF to: 00487db0 (UNCONDITIONAL_CALL)  ; undefined FUN_00487db0()
    ADD ESP,0x4                         ; 00462bac
    MOV EBX,EAX                         ; 00462baf
    PUSH 0x5d0e22                       ; 00462bb1
    MOV ESI,EAX                         ; 00462bb6
    ADD EAX,0x2b4                       ; 00462bb8
    PUSH EAX                            ; 00462bbd
    MOV dword ptr [EAX + -0x4],0x5f5674 ; 00462bbe
    CALL FUN_005478b0                   ; 00462bc5
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005478b0()
    MOV dword ptr [EBX + 0x3430],0x3f000000 ; 00462bca
    MOV dword ptr [EBX + 0x3434],0x3f800000 ; 00462bd4
    MOV byte ptr [EBX + 0x10b1c],0x0    ; 00462bde
    MOV dword ptr [EBX + 0x25a8],0x43070000 ; 00462be5
    FLD float ptr [0x005f5644]          ; 00462bef | DAT_005f5644
    MOV dword ptr [EBX + 0x10b84],0x0   ; 00462bf5
    FLD float ptr [0x005f5648]          ; 00462bff | DAT_005f5648
    MOV dword ptr [EBX + 0x10b88],0x0   ; 00462c05
    LEA EAX,[EBX + 0x10b94]             ; 00462c0f
    FXCH                                ; 00462c15
    FSTP float ptr [EBX + 0x3438]       ; 00462c17
    FSTP float ptr [EBX + 0x343c]       ; 00462c1d
    MOV dword ptr [EAX + 0x8],0x0       ; 00462c23
    ADD ESP,0x8                         ; 00462c2a
    MOV EDX,dword ptr [EAX + 0x8]       ; 00462c2d
    MOV dword ptr [EAX + 0x4],EDX       ; 00462c30
    MOV EDX,dword ptr [EAX + 0x4]       ; 00462c33
    MOV dword ptr [EAX],EDX             ; 00462c36
    MOV dword ptr [EBX + 0x10ba0],0x0   ; 00462c38
    MOV EAX,EBX                         ; 00462c42
    MOV dword ptr [EBX + 0x10b80],0x1   ; 00462c44
    LEA EDX,[EBX + 0x78]                ; 00462c4e
    POP EBX                             ; 00462c51
    ADD EAX,0x4                         ; 00462c52
        ;   Label: LAB_00462c52
    MOV dword ptr [EAX + 0x10ba4],0x0   ; 00462c55
    CMP EAX,EDX                         ; 00462c5f
    JNZ 0x00462c52                      ; 00462c61
        ;   XREF to: 00462c52 (CONDITIONAL_JUMP)  ; LAB_00462c52
    MOV dword ptr [ESI + 0x10ba4],0x0   ; 00462c63
    MOV dword ptr [ESI + 0x10c24],0x0   ; 00462c6d
    MOV dword ptr [ESI + 0x10b90],0x0   ; 00462c77
    MOV EAX,ESI                         ; 00462c81
    MOV dword ptr [ESI + 0x10c20],0x0   ; 00462c83
    POP ESI                             ; 00462c8d
    RET                                 ; 00462c8e

