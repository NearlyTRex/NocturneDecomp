; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00444010(int param_1,undefined4 *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_007f8e64
;   undefined4 DAT_007f8e94
;   undefined4 DAT_007f8e9c
;
; Called Functions:
;   FUN_0054dcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00444010
        ;   Label: FUN_00444010
    PUSH ESI                            ; 00444011
    PUSH EDI                            ; 00444012
    PUSH EBP                            ; 00444013
    SUB ESP,0x48                        ; 00444014
    MOV EBP,dword ptr [ESP + 0x5c]      ; 00444017
    MOV EBX,dword ptr [ESP + 0x60]      ; 0044401b
    MOV EDX,dword ptr [0x007f8e64]      ; 0044401f | DAT_007f8e64
    PUSH EDX                            ; 00444025
    LEA EAX,[EBP + 0x158]               ; 00444026
    PUSH EAX                            ; 0044402c
    LEA ESI,[ESP + 0x44]                ; 0044402d
    LEA EDI,[ESP + 0x14]                ; 00444031
    CALL FUN_0054dcc0                   ; 00444035
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dcc0()
    LEA ESI,[ESP + 0x44]                ; 0044403a
    ADD ESP,0x8                         ; 0044403e
    LEA EAX,[ESP + 0xc]                 ; 00444041
    MOVSD ES:EDI,ESI                    ; 00444045
    MOVSD ES:EDI,ESI                    ; 00444046
    MOVSD ES:EDI,ESI                    ; 00444047
    CMP EBX,EAX                         ; 00444048
    JZ 0x00444060                       ; 0044404a
        ;   XREF to: 00444060 (CONDITIONAL_JUMP)  ; LAB_00444060
    MOV EAX,dword ptr [ESP + 0xc]       ; 0044404c
    MOV dword ptr [EBX],EAX             ; 00444050
    MOV EAX,dword ptr [ESP + 0x10]      ; 00444052
    MOV dword ptr [EBX + 0x4],EAX       ; 00444056
    MOV EAX,dword ptr [ESP + 0x14]      ; 00444059
    MOV dword ptr [EBX + 0x8],EAX       ; 0044405d
    MOV ECX,dword ptr [0x007f8e94]      ; 00444060 | DAT_007f8e94
        ;   Label: LAB_00444060
    PUSH ECX                            ; 00444066
    LEA EAX,[EBP + 0x158]               ; 00444067
    PUSH EAX                            ; 0044406d
    LEA ESI,[ESP + 0x20]                ; 0044406e
    LEA EDI,[ESP + 0x2c]                ; 00444072
    CALL FUN_0054dcc0                   ; 00444076
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dcc0()
    LEA ESI,[ESP + 0x20]                ; 0044407b
    LEA EAX,[ESP + 0x2c]                ; 0044407f
    ADD ESP,0x8                         ; 00444083
    LEA EDX,[EBX + 0xc]                 ; 00444086
    MOVSD ES:EDI,ESI                    ; 00444089
    MOVSD ES:EDI,ESI                    ; 0044408a
    MOVSD ES:EDI,ESI                    ; 0044408b
    CMP EDX,EAX                         ; 0044408c
    JZ 0x004440a4                       ; 0044408e
        ;   XREF to: 004440a4 (CONDITIONAL_JUMP)  ; LAB_004440a4
    MOV EAX,dword ptr [ESP + 0x24]      ; 00444090
    MOV dword ptr [EDX],EAX             ; 00444094
    MOV EAX,dword ptr [ESP + 0x28]      ; 00444096
    MOV dword ptr [EDX + 0x4],EAX       ; 0044409a
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0044409d
    MOV dword ptr [EDX + 0x8],EAX       ; 004440a1
    MOV ESI,dword ptr [0x007f8e9c]      ; 004440a4 | DAT_007f8e9c
        ;   Label: LAB_004440a4
    PUSH ESI                            ; 004440aa
    LEA EAX,[EBP + 0x158]               ; 004440ab
    PUSH EAX                            ; 004440b1
    LEA ESI,[ESP + 0x8]                 ; 004440b2
    LEA EDI,[ESP + 0x38]                ; 004440b6
    CALL FUN_0054dcc0                   ; 004440ba
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dcc0()
    LEA ESI,[ESP + 0x8]                 ; 004440bf
    LEA EAX,[ESP + 0x38]                ; 004440c3
    ADD ESP,0x8                         ; 004440c7
    LEA EDX,[EBX + 0x18]                ; 004440ca
    MOVSD ES:EDI,ESI                    ; 004440cd
    MOVSD ES:EDI,ESI                    ; 004440ce
    MOVSD ES:EDI,ESI                    ; 004440cf
    CMP EDX,EAX                         ; 004440d0
    JNZ 0x004440e1                      ; 004440d2
        ;   XREF to: 004440e1 (CONDITIONAL_JUMP)  ; LAB_004440e1
    MOV EAX,0x3                         ; 004440d4
    ADD ESP,0x48                        ; 004440d9
    POP EBP                             ; 004440dc
    POP EDI                             ; 004440dd
    POP ESI                             ; 004440de
    POP EBX                             ; 004440df
    RET                                 ; 004440e0
    MOV EAX,dword ptr [ESP + 0x30]      ; 004440e1
        ;   Label: LAB_004440e1
    MOV dword ptr [EDX],EAX             ; 004440e5
    MOV EAX,dword ptr [ESP + 0x34]      ; 004440e7
    MOV dword ptr [EDX + 0x4],EAX       ; 004440eb
    MOV EAX,dword ptr [ESP + 0x38]      ; 004440ee
    MOV dword ptr [EDX + 0x8],EAX       ; 004440f2
    MOV EAX,0x3                         ; 004440f5
    ADD ESP,0x48                        ; 004440fa
    POP EBP                             ; 004440fd
    POP EDI                             ; 004440fe
    POP ESI                             ; 004440ff
    POP EBX                             ; 00444100
    RET                                 ; 00444101

