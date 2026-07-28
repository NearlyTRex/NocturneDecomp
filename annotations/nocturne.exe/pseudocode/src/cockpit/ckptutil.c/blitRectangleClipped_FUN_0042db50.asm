; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int cockpit_ckptutil_c_blitRectangleClipped_FUN_0042db50(int param_1,int param_2,int param_3,int param_4,int param_5)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01bd2fa0
;   undefined4 DAT_01bd2fa4
;   undefined4 DAT_01c00c58
;   undefined4 DAT_01c00c60
;
; Called Functions:
;   cockpit_ckptutil.c_FUN_0042d130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042db50
        ;   Label: cockpit_ckptutil.c_blitRectangleClipped_FUN_0042db50
    PUSH ESI                            ; 0042db51
    PUSH EDI                            ; 0042db52
    PUSH EBP                            ; 0042db53
    SUB ESP,0x1c                        ; 0042db54
    MOV EBX,dword ptr [ESP + 0x30]      ; 0042db57
    MOV EBP,dword ptr [ESP + 0x34]      ; 0042db5b
    MOV EAX,[0x01c00c60]                ; 0042db5f | DAT_01c00c60
    SUB EAX,EBP                         ; 0042db64
    MOV EDX,dword ptr [0x01bd2fa0]      ; 0042db66 | DAT_01bd2fa0
    MOV dword ptr [ESP],EAX             ; 0042db6c
    MOV EAX,[0x01bd2fa4]                ; 0042db6f | DAT_01bd2fa4
    MOV ESI,dword ptr [0x01c00c58]      ; 0042db74 | DAT_01c00c58
    SUB EAX,EDX                         ; 0042db7a
    SUB ESI,EBP                         ; 0042db7c
    MOV dword ptr [ESP + 0x14],EAX      ; 0042db7e
    TEST EBX,EBX                        ; 0042db82
    JNZ 0x0042db98                      ; 0042db84
        ;   XREF to: 0042db98 (CONDITIONAL_JUMP)  ; LAB_0042db98
    LEA EAX,[EAX]                       ; 0042db86
    LEA EDX,[EDX]                       ; 0042db8c
    ADD ESP,0x1c                        ; 0042db90
        ;   Label: LAB_0042db90
    POP EBP                             ; 0042db93
    POP EDI                             ; 0042db94
    POP ESI                             ; 0042db95
    POP EBX                             ; 0042db96
    RET                                 ; 0042db97
    CALL cockpit_ckptutil.c_FUN_0042d130 ; 0042db98
        ;   XREF to: 0042d130 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_FUN_0042d130()
        ;   Label: LAB_0042db98
    MOV ECX,dword ptr [ESP + 0x38]      ; 0042db9d
    MOV EDI,dword ptr [0x005b7624]      ; 0042dba1 | DAT_005b7624
    MOV dword ptr [ESP + 0x18],EAX      ; 0042dba7
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0042dbab
    SHL ECX,0x2                         ; 0042dbaf
    DEC EAX                             ; 0042dbb2
    CMP EDI,0x8                         ; 0042dbb3
    JNZ 0x0042dc1d                      ; 0042dbb6
        ;   XREF to: 0042dc1d (CONDITIONAL_JUMP)  ; LAB_0042dc1d
    MOV EDI,dword ptr [ECX + 0x1bd2fa0] ; 0042dbb8 | DAT_01bd2fa0
    MOV ECX,EAX                         ; 0042dbbe
    ADD EDI,EBP                         ; 0042dbc0
    XOR EBP,EBP                         ; 0042dbc2
    TEST ESI,ESI                        ; 0042dbc4
    JLE 0x0042dbce                      ; 0042dbc6
        ;   XREF to: 0042dbce (CONDITIONAL_JUMP)  ; LAB_0042dbce
    CMP EAX,ESI                         ; 0042dbc8
    JL 0x0042db90                       ; 0042dbca
        ;   XREF to: 0042db90 (CONDITIONAL_JUMP)  ; LAB_0042db90
    MOV EBP,ESI                         ; 0042dbcc
    MOV EDX,dword ptr [ESP]             ; 0042dbce
        ;   Label: LAB_0042dbce
    CMP ECX,EDX                         ; 0042dbd1
    JLE 0x0042dbdb                      ; 0042dbd3
        ;   XREF to: 0042dbdb (CONDITIONAL_JUMP)  ; LAB_0042dbdb
    CMP EBP,EDX                         ; 0042dbd5
    JG 0x0042db90                       ; 0042dbd7
        ;   XREF to: 0042db90 (CONDITIONAL_JUMP)  ; LAB_0042db90
    MOV ECX,EDX                         ; 0042dbd9
    MOV EAX,dword ptr [ESP + 0x40]      ; 0042dbdb
        ;   Label: LAB_0042dbdb
    XOR ESI,ESI                         ; 0042dbdf
    TEST EAX,EAX                        ; 0042dbe1
    JLE 0x0042db90                      ; 0042dbe3
        ;   XREF to: 0042db90 (CONDITIONAL_JUMP)  ; LAB_0042db90
    SUB ECX,EBP                         ; 0042dbe5
    INC ECX                             ; 0042dbe7
    MOV dword ptr [ESP + 0x4],ECX       ; 0042dbe8
    MOV ECX,dword ptr [ESP + 0x4]       ; 0042dbec
        ;   Label: LAB_0042dbec
    PUSH ECX                            ; 0042dbf0
    LEA EAX,[EBX + EBP*0x1]             ; 0042dbf1
    PUSH EAX                            ; 0042dbf4
    LEA EAX,[EDI + EBP*0x1]             ; 0042dbf5
    PUSH EAX                            ; 0042dbf8
    CALL dword ptr [ESP + 0x24]         ; 0042dbf9
    ADD ESP,0xc                         ; 0042dbfd
    INC ESI                             ; 0042dc00
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042dc01
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0042dc05
    MOV ECX,dword ptr [ESP + 0x40]      ; 0042dc09
    ADD EDI,EAX                         ; 0042dc0d
    ADD EBX,EDX                         ; 0042dc0f
    CMP ESI,ECX                         ; 0042dc11
    JL 0x0042dbec                       ; 0042dc13
        ;   XREF to: 0042dbec (CONDITIONAL_JUMP)  ; LAB_0042dbec
    ADD ESP,0x1c                        ; 0042dc15
    POP EBP                             ; 0042dc18
    POP EDI                             ; 0042dc19
    POP ESI                             ; 0042dc1a
    POP EBX                             ; 0042dc1b
    RET                                 ; 0042dc1c
    MOV EDI,dword ptr [ECX + 0x1bd2fa0] ; 0042dc1d | DAT_01bd2fa0
        ;   Label: LAB_0042dc1d
    ADD EBP,EBP                         ; 0042dc23
    MOV ECX,EAX                         ; 0042dc25
    ADD EDI,EBP                         ; 0042dc27
    XOR EBP,EBP                         ; 0042dc29
    TEST ESI,ESI                        ; 0042dc2b
    JLE 0x0042dc39                      ; 0042dc2d
        ;   XREF to: 0042dc39 (CONDITIONAL_JUMP)  ; LAB_0042dc39
    CMP EAX,ESI                         ; 0042dc2f
    JL 0x0042db90                       ; 0042dc31
        ;   XREF to: 0042db90 (CONDITIONAL_JUMP)  ; LAB_0042db90
    MOV EBP,ESI                         ; 0042dc37
    MOV EAX,dword ptr [ESP]             ; 0042dc39
        ;   Label: LAB_0042dc39
    CMP ECX,EAX                         ; 0042dc3c
    JLE 0x0042dc4a                      ; 0042dc3e
        ;   XREF to: 0042dc4a (CONDITIONAL_JUMP)  ; LAB_0042dc4a
    CMP EBP,EAX                         ; 0042dc40
    JG 0x0042db90                       ; 0042dc42
        ;   XREF to: 0042db90 (CONDITIONAL_JUMP)  ; LAB_0042db90
    MOV ECX,EAX                         ; 0042dc48
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042dc4a
        ;   Label: LAB_0042dc4a
    MOV EDX,EAX                         ; 0042dc4e
    SAR EDX,0x1f                        ; 0042dc50
    SUB EAX,EDX                         ; 0042dc53
    SAR EAX,0x1                         ; 0042dc55
    MOV dword ptr [ESP + 0x14],EAX      ; 0042dc57
    MOV EAX,dword ptr [ESP + 0x40]      ; 0042dc5b
    XOR ESI,ESI                         ; 0042dc5f
    TEST EAX,EAX                        ; 0042dc61
    JLE 0x0042db90                      ; 0042dc63
        ;   XREF to: 0042db90 (CONDITIONAL_JUMP)  ; LAB_0042db90
    SUB ECX,EBP                         ; 0042dc69
    LEA EAX,[EBP + EBP*0x1]             ; 0042dc6b
    MOV dword ptr [ESP + 0xc],EAX       ; 0042dc6f
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042dc73
    INC ECX                             ; 0042dc77
    ADD EAX,EAX                         ; 0042dc78
    MOV dword ptr [ESP + 0x10],ECX      ; 0042dc7a
    MOV dword ptr [ESP + 0x8],EAX       ; 0042dc7e
    MOV EDX,dword ptr [ESP + 0x10]      ; 0042dc82
        ;   Label: LAB_0042dc82
    PUSH EDX                            ; 0042dc86
    LEA EAX,[EBX + EBP*0x1]             ; 0042dc87
    PUSH EAX                            ; 0042dc8a
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042dc8b
    ADD EAX,EDI                         ; 0042dc8f
    PUSH EAX                            ; 0042dc91
    CALL dword ptr [ESP + 0x24]         ; 0042dc92
    ADD ESP,0xc                         ; 0042dc96
    INC ESI                             ; 0042dc99
    MOV ECX,dword ptr [ESP + 0x8]       ; 0042dc9a
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0042dc9e
    MOV EDX,dword ptr [ESP + 0x40]      ; 0042dca2
    ADD EDI,ECX                         ; 0042dca6
    ADD EBX,EAX                         ; 0042dca8
    CMP ESI,EDX                         ; 0042dcaa
    JL 0x0042dc82                       ; 0042dcac
        ;   XREF to: 0042dc82 (CONDITIONAL_JUMP)  ; LAB_0042dc82
    ADD ESP,0x1c                        ; 0042dcae
    POP EBP                             ; 0042dcb1
    POP EDI                             ; 0042dcb2
    POP ESI                             ; 0042dcb3
    POP EBX                             ; 0042dcb4
    RET                                 ; 0042dcb5

