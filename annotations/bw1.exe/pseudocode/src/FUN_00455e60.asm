; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00455e60(int *param_1,undefined4 param_2,int param_3)
;
;
; XREF[1]:
;   FUN_00457e50 at 00457ed1
;
; Referenced Globals:
;   undefined4 DAT_0152c2cc
;   undefined4 DAT_0152c2d0
;   undefined4 DAT_0152c2d4
;
; Called Functions:
;   FUN_005c0b10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00455e60
        ;   Label: FUN_00455e60
    PUSH ESI                            ; 00455e61
    MOV EBX,dword ptr [ESP + 0xc]       ; 00455e62
    MOV ESI,dword ptr [ESP + 0x14]      ; 00455e66
    MOV EDX,dword ptr [ESP + 0x10]      ; 00455e6a
    PUSH EDX                            ; 00455e6e
    PUSH 0x4                            ; 00455e6f
    PUSH 0x3                            ; 00455e71
    PUSH 0x152c2cc                      ; 00455e73 | DAT_0152c2cc
    CALL FUN_005c0b10                   ; 00455e78
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0b10()
    MOV EDX,dword ptr [0x0152c2cc]      ; 00455e7d | DAT_0152c2cc
    LEA EAX,[EDX*0x4 + 0x0]             ; 00455e83
    SUB EAX,EDX                         ; 00455e8a
    SHL EAX,0x2                         ; 00455e8c
    LEA EDX,[ESI + EAX*0x1]             ; 00455e8f
    MOV dword ptr [EBX],EDX             ; 00455e92
    MOV EDX,dword ptr [0x0152c2d0]      ; 00455e94 | DAT_0152c2d0
    LEA EAX,[EDX*0x4 + 0x0]             ; 00455e9a
    SUB EAX,EDX                         ; 00455ea1
    SHL EAX,0x2                         ; 00455ea3
    LEA EDX,[ESI + EAX*0x1]             ; 00455ea6
    ADD ESP,0x10                        ; 00455ea9
    MOV dword ptr [EBX + 0x4],EDX       ; 00455eac
    MOV ECX,dword ptr [ESP + 0x10]      ; 00455eaf
    MOV EDX,dword ptr [0x0152c2d4]      ; 00455eb3 | DAT_0152c2d4
    PUSH ECX                            ; 00455eb9
    LEA EAX,[EDX*0x4 + 0x0]             ; 00455eba
    PUSH 0x1                            ; 00455ec1
    SUB EAX,EDX                         ; 00455ec3
    PUSH 0x14                           ; 00455ec5
    SHL EAX,0x2                         ; 00455ec7
    ADD EBX,0xc                         ; 00455eca
    ADD ESI,EAX                         ; 00455ecd
    PUSH EBX                            ; 00455ecf
    MOV dword ptr [EBX + -0x4],ESI      ; 00455ed0
    CALL FUN_005c0b10                   ; 00455ed3
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0b10()
    ADD ESP,0x10                        ; 00455ed8
    POP ESI                             ; 00455edb
    POP EBX                             ; 00455edc
    RET                                 ; 00455edd

