; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0056ced8(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0056cfd8 at 0056d00a
;
; Referenced Globals:
;   undefined4 g_fstreambaseTypeInfo_005a4a60.class_name+2
;   undefined4 DAT_005a4a78
;   undefined4 DAT_005a4a90
;   undefined4 DAT_005a4a92
;
; Called Functions:
;   crt_time.c__mktime_FUN_00565fb0
;   FUN_0056cea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056ced8
        ;   Label: FUN_0056ced8
    PUSH ESI                            ; 0056ced9
    PUSH EDI                            ; 0056ceda
    PUSH EBP                            ; 0056cedb
    SUB ESP,0x24                        ; 0056cedc
    MOV EBX,dword ptr [ESP + 0x38]      ; 0056cedf
    MOV EDI,dword ptr [ESP + 0x3c]      ; 0056cee3
    MOV EDX,dword ptr [EBX + 0x20]      ; 0056cee7
    TEST EDX,EDX                        ; 0056ceea
    JNZ 0x0056cfb8                      ; 0056ceec
        ;   XREF to: 0056cfb8 (CONDITIONAL_JUMP)  ; LAB_0056cfb8
    LEA EAX,[EDI + 0x76c]               ; 0056cef2
    PUSH EAX                            ; 0056cef8
    CALL FUN_0056cea0                   ; 0056cef9
        ;   XREF to: 0056cea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056cea0()
    ADD ESP,0x4                         ; 0056cefe
    TEST EAX,EAX                        ; 0056cf01
    JZ 0x0056cf18                       ; 0056cf03
        ;   XREF to: 0056cf18 (CONDITIONAL_JUMP)  ; LAB_0056cf18
    MOV EAX,dword ptr [EBX + 0x10]      ; 0056cf05
    MOV ESI,dword ptr [EAX*0x2 + 0x5a4a92] ; 0056cf08 | DAT_005a4a92
    MOV EAX,dword ptr [EAX*0x2 + 0x5a4a90] ; 0056cf0f | DAT_005a4a90
    JMP 0x0056cf29                      ; 0056cf16
        ;   XREF to: 0056cf29 (UNCONDITIONAL_JUMP)  ; LAB_0056cf29
    MOV EAX,dword ptr [EBX + 0x10]      ; 0056cf18
        ;   Label: LAB_0056cf18
    MOV ESI,dword ptr [EAX*0x2 + 0x5a4a78] ; 0056cf1b | DAT_005a4a78
    MOV EAX,dword ptr [EAX*0x2 + 0x5a4a76] ; 0056cf22 | g_fstreambaseTypeInfo_005a4a60.class_name+2
    SAR ESI,0x10                        ; 0056cf29
        ;   Label: LAB_0056cf29
    SAR EAX,0x10                        ; 0056cf2c
    SUB ESI,EAX                         ; 0056cf2f
    XOR EBP,EBP                         ; 0056cf31
    MOV ECX,0x1                         ; 0056cf33
    MOV dword ptr [ESP],EBP             ; 0056cf38
    MOV dword ptr [ESP + 0x4],EBP       ; 0056cf3b
    MOV dword ptr [ESP + 0x8],EBP       ; 0056cf3f
    MOV dword ptr [ESP + 0xc],ECX       ; 0056cf43
    MOV EAX,dword ptr [EBX + 0x10]      ; 0056cf47
    MOV dword ptr [ESP + 0x10],EAX      ; 0056cf4a
    MOV EAX,ESP                         ; 0056cf4e
    PUSH EAX                            ; 0056cf50
    MOV dword ptr [ESP + 0x18],EDI      ; 0056cf51
    MOV dword ptr [ESP + 0x24],EBP      ; 0056cf55
    CALL crt_time.c__mktime_FUN_00565fb0 ; 0056cf59
        ;   XREF to: 00565fb0 (UNCONDITIONAL_CALL)  ; undefined crt_time.c__mktime_FUN_00565fb0()
    ADD ESP,0x4                         ; 0056cf5e
    MOV EDX,dword ptr [EBX + 0x18]      ; 0056cf61
    SUB EDX,dword ptr [ESP + 0x18]      ; 0056cf64
    ADD EDX,0x7                         ; 0056cf68
    MOV ECX,0x7                         ; 0056cf6b
    MOV EAX,EDX                         ; 0056cf70
    SAR EDX,0x1f                        ; 0056cf72
    IDIV ECX                            ; 0056cf75
    MOV EAX,dword ptr [EBX + 0xc]       ; 0056cf77
    CMP EAX,0x5                         ; 0056cf7a
    JNZ 0x0056cfa0                      ; 0056cf7d
        ;   XREF to: 0056cfa0 (CONDITIONAL_JUMP)  ; LAB_0056cfa0
    LEA EDI,[EAX + -0x1]                ; 0056cf7f
    LEA ECX,[EDI*0x8 + 0x0]             ; 0056cf82
    LEA EAX,[EDX + 0x1]                 ; 0056cf89
    SUB ECX,EDI                         ; 0056cf8c
    ADD EAX,ECX                         ; 0056cf8e
    CMP EAX,ESI                         ; 0056cf90
    JLE 0x0056cf9c                      ; 0056cf92
        ;   XREF to: 0056cf9c (CONDITIONAL_JUMP)  ; LAB_0056cf9c
    MOV EAX,dword ptr [EBX + 0xc]       ; 0056cf94
    SUB EAX,0x2                         ; 0056cf97
    JMP 0x0056cfa1                      ; 0056cf9a
        ;   XREF to: 0056cfa1 (UNCONDITIONAL_JUMP)  ; LAB_0056cfa1
    MOV EAX,EDI                         ; 0056cf9c
        ;   Label: LAB_0056cf9c
    JMP 0x0056cfa1                      ; 0056cf9e
        ;   XREF to: 0056cfa1 (UNCONDITIONAL_JUMP)  ; LAB_0056cfa1
    DEC EAX                             ; 0056cfa0
        ;   Label: LAB_0056cfa0
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0056cfa1
        ;   Label: LAB_0056cfa1
    ADD EBX,EDX                         ; 0056cfa5
    MOV EDX,EAX                         ; 0056cfa7
    SHL EAX,0x3                         ; 0056cfa9
    SUB EAX,EDX                         ; 0056cfac
    ADD EAX,EBX                         ; 0056cfae
    ADD ESP,0x24                        ; 0056cfb0
    POP EBP                             ; 0056cfb3
    POP EDI                             ; 0056cfb4
    POP ESI                             ; 0056cfb5
    POP EBX                             ; 0056cfb6
    RET                                 ; 0056cfb7
    CMP EDX,0x1                         ; 0056cfb8
        ;   Label: LAB_0056cfb8
    JNZ 0x0056cfca                      ; 0056cfbb
        ;   XREF to: 0056cfca (CONDITIONAL_JUMP)  ; LAB_0056cfca
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0056cfbd
    SUB EAX,EDX                         ; 0056cfc0
    ADD ESP,0x24                        ; 0056cfc2
    POP EBP                             ; 0056cfc5
    POP EDI                             ; 0056cfc6
    POP ESI                             ; 0056cfc7
    POP EBX                             ; 0056cfc8
    RET                                 ; 0056cfc9
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0056cfca
        ;   Label: LAB_0056cfca
    ADD ESP,0x24                        ; 0056cfcd
    POP EBP                             ; 0056cfd0
    POP EDI                             ; 0056cfd1
    POP ESI                             ; 0056cfd2
    POP EBX                             ; 0056cfd3
    RET                                 ; 0056cfd4

