; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 * FUN_00409d30(int param_1)
;
;
; XREF[46]:
;   FUN_0040eb70 at 0040eb78
;   FUN_0040fed0 at 0040fed6
;   FUN_00411710 at 00411715
;   FUN_00411a10 at 00411a18
;   FUN_00414d80 at 00414d86
;   FUN_00415d20 at 00415d25
;   FUN_0041e300 at 0041e306
;   FUN_00423f40 at 00423f48
;   FUN_0042b750 at 0042b757
;   FUN_0043c810 at 0043c816
;   ... and 36 more
;
; Referenced Globals:
;   undefined1 DAT_0057757d
;   undefined1 DAT_0057757e
;   undefined1 DAT_0057757f
;   undefined1 DAT_00577580
;   undefined1 DAT_00577582
;   undefined1 DAT_00577583
;   undefined1 DAT_00577584
;   undefined1 DAT_00577585
;   undefined1* PTR_FUN_005992d4 = 00409fc0
;   undefined4 DAT_0078a123
;
; Called Functions:
;   FUN_00409cf0
;   FUN_0040a000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00409d30
        ;   Label: FUN_00409d30
    PUSH ESI                            ; 00409d31
    PUSH EDI                            ; 00409d32
    MOV EBX,dword ptr [ESP + 0x10]      ; 00409d33
    ADD EBX,0x128                       ; 00409d37
    PUSH EBX                            ; 00409d3d
    CALL FUN_00409cf0                   ; 00409d3e
        ;   XREF to: 00409cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409cf0()
    LEA EBX,[EAX + 0xfffffed8]          ; 00409d43
    MOV dword ptr [EBX + 0x14c],0x5992d4 ; 00409d49 | PTR_FUN_005992d4
    MOV byte ptr [EBX],0x0              ; 00409d53
    MOV dword ptr [EBX + 0x144],0x0     ; 00409d56
    LEA EAX,[EBX + 0x20]                ; 00409d60
    MOV dword ptr [EBX + 0x148],0x0     ; 00409d63
    MOV dword ptr [EAX + 0x8],0x0       ; 00409d6d
    ADD ESP,0x4                         ; 00409d74
    MOV EDX,dword ptr [EAX + 0x8]       ; 00409d77
    MOV dword ptr [EAX + 0x4],EDX       ; 00409d7a
    MOV EDX,dword ptr [EAX + 0x4]       ; 00409d7d
    MOV dword ptr [EAX],EDX             ; 00409d80
    LEA EAX,[EBX + 0x30]                ; 00409d82
    MOV dword ptr [EBX + 0x2c],0x0      ; 00409d85
    MOV ESI,0x57757d                    ; 00409d8c | DAT_0057757d
    MOV dword ptr [EAX + 0x8],0x0       ; 00409d91
    PUSH EBX                            ; 00409d98
    MOV EDX,dword ptr [EAX + 0x8]       ; 00409d99
    MOV dword ptr [EAX + 0x4],EDX       ; 00409d9c
    MOV EDX,dword ptr [EAX + 0x4]       ; 00409d9f
    MOV dword ptr [EAX],EDX             ; 00409da2
    CALL FUN_0040a000                   ; 00409da4
        ;   XREF to: 0040a000 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a000()
    ADD ESP,0x4                         ; 00409da9
    LEA EDI,[EBX + 0x78]                ; 00409dac
    MOV dword ptr [EBX + 0x74],0x3f800000 ; 00409daf
    PUSH EDI                            ; 00409db6
    MOV AL,byte ptr [ESI]               ; 00409db7 | DAT_0057757d | DAT_0057757f
        ;   Label: LAB_00409db7
    MOV byte ptr [EDI],AL               ; 00409db9
    CMP AL,0x0                          ; 00409dbb
    JZ 0x00409dcf                       ; 00409dbd
        ;   XREF to: 00409dcf (CONDITIONAL_JUMP)  ; LAB_00409dcf
    MOV AL,byte ptr [ESI + 0x1]         ; 00409dbf | DAT_0057757e | DAT_00577580
    ADD ESI,0x2                         ; 00409dc2
    MOV byte ptr [EDI + 0x1],AL         ; 00409dc5
    ADD EDI,0x2                         ; 00409dc8
    CMP AL,0x0                          ; 00409dcb
    JNZ 0x00409db7                      ; 00409dcd
        ;   XREF to: 00409db7 (CONDITIONAL_JUMP)  ; LAB_00409db7
    POP EDI                             ; 00409dcf
        ;   Label: LAB_00409dcf
    MOV dword ptr [EBX + 0x70],0x0      ; 00409dd0
    LEA EAX,[EBX + 0xe0]                ; 00409dd7
    MOV dword ptr [EBX + 0xdc],0x0      ; 00409ddd
    MOV dword ptr [EAX + 0x8],0x0       ; 00409de7
    MOV EDX,dword ptr [EAX + 0x8]       ; 00409dee
    MOV dword ptr [EAX + 0x4],EDX       ; 00409df1
    MOV EDX,dword ptr [EAX + 0x4]       ; 00409df4
    MOV dword ptr [EAX],EDX             ; 00409df7
    LEA EAX,[EBX + 0xec]                ; 00409df9
    MOV dword ptr [EAX + 0x8],0x0       ; 00409dff
    MOV EDX,dword ptr [EAX + 0x8]       ; 00409e06
    MOV dword ptr [EAX + 0x4],EDX       ; 00409e09
    MOV EDX,dword ptr [EAX + 0x4]       ; 00409e0c
    MOV dword ptr [EAX],EDX             ; 00409e0f
    MOV dword ptr [EBX + 0x108],0x10000 ; 00409e11
    MOV dword ptr [EBX + 0x10c],0x10000 ; 00409e1b
    MOV dword ptr [EBX + 0x110],0x10000 ; 00409e25
    MOV dword ptr [EBX + 0xf8],0x1      ; 00409e2f
    MOV dword ptr [EBX + 0xfc],0x0      ; 00409e39
    MOV dword ptr [EBX + 0x114],0x0     ; 00409e43
    MOV dword ptr [EBX + 0x100],0x0     ; 00409e4d
    MOV dword ptr [EBX + 0x104],0x0     ; 00409e57
    MOV ESI,0x577582                    ; 00409e61 | DAT_00577582
    MOV dword ptr [EBX + 0x64],0x64     ; 00409e66
    LEA EDI,[EBX + 0x11c]               ; 00409e6d
    MOV dword ptr [EBX + 0x68],0x78a123 ; 00409e73 | DAT_0078a123
    PUSH EDI                            ; 00409e7a
    MOV AL,byte ptr [ESI]               ; 00409e7b | DAT_00577582 | DAT_00577584
        ;   Label: LAB_00409e7b
    MOV byte ptr [EDI],AL               ; 00409e7d
    CMP AL,0x0                          ; 00409e7f
    JZ 0x00409e93                       ; 00409e81
        ;   XREF to: 00409e93 (CONDITIONAL_JUMP)  ; LAB_00409e93
    MOV AL,byte ptr [ESI + 0x1]         ; 00409e83 | DAT_00577583 | DAT_00577585
    ADD ESI,0x2                         ; 00409e86
    MOV byte ptr [EDI + 0x1],AL         ; 00409e89
    ADD EDI,0x2                         ; 00409e8c
    CMP AL,0x0                          ; 00409e8f
    JNZ 0x00409e7b                      ; 00409e91
        ;   XREF to: 00409e7b (CONDITIONAL_JUMP)  ; LAB_00409e7b
    POP EDI                             ; 00409e93
        ;   Label: LAB_00409e93
    MOV EAX,EBX                         ; 00409e94
    POP EDI                             ; 00409e96
    POP ESI                             ; 00409e97
    POP EBX                             ; 00409e98
    RET                                 ; 00409e99

