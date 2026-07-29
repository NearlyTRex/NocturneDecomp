; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dlight_cpp_FUN_0044ed80(char *param_1,int param_2,int param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_FUN_0050aa70 at 0050aaa6
;
; Referenced Globals:
;   undefined4 DAT_005b761c
;   undefined4 DAT_005b7620
;   undefined4 DAT_005b9354
;   undefined4 DAT_01bd2fa0
;   undefined4 DAT_01c777d0
;
; Called Functions:
;   engine_2d.c_FUN_00402d30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044ed80
        ;   Label: core_dlight.cpp_FUN_0044ed80
    PUSH ESI                            ; 0044ed81
    PUSH EDI                            ; 0044ed82
    PUSH EBP                            ; 0044ed83
    SUB ESP,0x1c                        ; 0044ed84
    MOV EBX,dword ptr [ESP + 0x30]      ; 0044ed87
    MOV EDX,dword ptr [ESP + 0x34]      ; 0044ed8b
    TEST EDX,EDX                        ; 0044ed8f
    JL 0x0044ef78                       ; 0044ed91
        ;   XREF to: 0044ef78 (CONDITIONAL_JUMP)  ; LAB_0044ef78
    MOV ECX,dword ptr [ESP + 0x38]      ; 0044ed97
    TEST ECX,ECX                        ; 0044ed9b
    JL 0x0044ef78                       ; 0044ed9d
        ;   XREF to: 0044ef78 (CONDITIONAL_JUMP)  ; LAB_0044ef78
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0044eda3
    MOV EDI,dword ptr [0x005b761c]      ; 0044eda7 | DAT_005b761c
    LEA EAX,[EDX + ESI*0x1]             ; 0044edad
    CMP EAX,EDI                         ; 0044edb0
    JG 0x0044ef78                       ; 0044edb2
        ;   XREF to: 0044ef78 (CONDITIONAL_JUMP)  ; LAB_0044ef78
    MOV EDX,dword ptr [0x005b7620]      ; 0044edb8 | DAT_005b7620
    LEA EAX,[ECX + ESI*0x1]             ; 0044edbe
    CMP EAX,EDX                         ; 0044edc1
    JG 0x0044ef78                       ; 0044edc3
        ;   XREF to: 0044ef78 (CONDITIONAL_JUMP)  ; LAB_0044ef78
    MOV EDX,dword ptr [EBX + 0x1cc0]    ; 0044edc9
    SHL EDX,0x8                         ; 0044edcf
    MOV EAX,EDX                         ; 0044edd2
    SAR EDX,0x1f                        ; 0044edd4
    IDIV ESI                            ; 0044edd7
    MOV dword ptr [ESP + 0x18],0x20000  ; 0044edd9
    XOR ESI,ESI                         ; 0044ede1
    MOV EBP,EAX                         ; 0044ede3
    MOV dword ptr [ESP + 0x8],ESI       ; 0044ede5
    MOV EAX,dword ptr [EBX + 0x1cc4]    ; 0044ede9
        ;   Label: LAB_0044ede9
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044edef
    SHL EAX,0x8                         ; 0044edf3
    CMP EAX,EDX                         ; 0044edf6
    JG 0x0044ee51                       ; 0044edf8
        ;   XREF to: 0044ee51 (CONDITIONAL_JUMP)  ; LAB_0044ee51
    MOV ECX,dword ptr [ESP + 0x18]      ; 0044edfa
    CMP ESI,ECX                         ; 0044edfe
    JZ 0x0044eebf                       ; 0044ee00
        ;   XREF to: 0044eebf (CONDITIONAL_JUMP)  ; LAB_0044eebf
    SUB ESI,dword ptr [ESP + 0x18]      ; 0044ee06
        ;   Label: LAB_0044ee06
    XOR EDI,EDI                         ; 0044ee0a
    MOV dword ptr [ESP + 0xc],ESI       ; 0044ee0c
    MOV EAX,dword ptr [EBX + 0x1cc4]    ; 0044ee10
        ;   Label: LAB_0044ee10
    SHL EAX,0x8                         ; 0044ee16
    CMP EDI,EAX                         ; 0044ee19
    JGE 0x0044ef6a                      ; 0044ee1b
        ;   XREF to: 0044ef6a (CONDITIONAL_JUMP)  ; LAB_0044ef6a
    MOV EDX,EDI                         ; 0044ee21
    MOV EAX,EDI                         ; 0044ee23
    SAR EDX,0x1f                        ; 0044ee25
    SHL EDX,0x8                         ; 0044ee28
    SBB EAX,EDX                         ; 0044ee2b
    SAR EAX,0x8                         ; 0044ee2d
    XOR ECX,ECX                         ; 0044ee30
    MOV dword ptr [ESP + 0x10],EAX      ; 0044ee32
    MOV EAX,dword ptr [EBX + 0x1cc0]    ; 0044ee36
        ;   Label: LAB_0044ee36
    SHL EAX,0x8                         ; 0044ee3c
    CMP ECX,EAX                         ; 0044ee3f
    JL 0x0044eec7                       ; 0044ee41
        ;   XREF to: 0044eec7 (CONDITIONAL_JUMP)  ; LAB_0044eec7
    ADD EDI,EBP                         ; 0044ee47
    JMP 0x0044ee10                      ; 0044ee49
        ;   XREF to: 0044ee10 (UNCONDITIONAL_JUMP)  ; LAB_0044ee10
    ADD dword ptr [ESP + 0x8],EBP       ; 0044ee4b
        ;   Label: LAB_0044ee4b
    JMP 0x0044ede9                      ; 0044ee4f
        ;   XREF to: 0044ede9 (UNCONDITIONAL_JUMP)  ; LAB_0044ede9
    MOV EAX,EDX                         ; 0044ee51
        ;   Label: LAB_0044ee51
    SAR EDX,0x1f                        ; 0044ee53
    SHL EDX,0x8                         ; 0044ee56
    SBB EAX,EDX                         ; 0044ee59
    SAR EAX,0x8                         ; 0044ee5b
    XOR ECX,ECX                         ; 0044ee5e
    MOV dword ptr [ESP + 0x14],EAX      ; 0044ee60
    MOV EAX,dword ptr [EBX + 0x1cc0]    ; 0044ee64
        ;   Label: LAB_0044ee64
    SHL EAX,0x8                         ; 0044ee6a
    CMP ECX,EAX                         ; 0044ee6d
    JGE 0x0044ee4b                      ; 0044ee6f
        ;   XREF to: 0044ee4b (CONDITIONAL_JUMP)  ; LAB_0044ee4b
    MOV EDI,dword ptr [ESP + 0x14]      ; 0044ee71
    IMUL EDI,dword ptr [EBX + 0x1cc0]   ; 0044ee75
    MOV EDX,ECX                         ; 0044ee7c
    SAR EDX,0x1f                        ; 0044ee7e
    MOV EAX,ECX                         ; 0044ee81
    SHL EDX,0x8                         ; 0044ee83
    SBB EAX,EDX                         ; 0044ee86
    SAR EAX,0x8                         ; 0044ee88
    MOV EDX,dword ptr [EBX + 0x2f94]    ; 0044ee8b
    ADD EAX,EDI                         ; 0044ee91
    MOV AX,word ptr [EDX + EAX*0x2]     ; 0044ee93
    AND EAX,0xffff                      ; 0044ee97
    TEST EAX,EAX                        ; 0044ee9c
    JLE 0x0044eea7                      ; 0044ee9e
        ;   XREF to: 0044eea7 (CONDITIONAL_JUMP)  ; LAB_0044eea7
    CMP EAX,0xffff                      ; 0044eea0
    JL 0x0044eeab                       ; 0044eea5
        ;   XREF to: 0044eeab (CONDITIONAL_JUMP)  ; LAB_0044eeab
    ADD ECX,EBP                         ; 0044eea7
        ;   Label: LAB_0044eea7
    JMP 0x0044ee64                      ; 0044eea9
        ;   XREF to: 0044ee64 (UNCONDITIONAL_JUMP)  ; LAB_0044ee64
    CMP EAX,dword ptr [ESP + 0x18]      ; 0044eeab
        ;   Label: LAB_0044eeab
    JGE 0x0044eeb5                      ; 0044eeaf
        ;   XREF to: 0044eeb5 (CONDITIONAL_JUMP)  ; LAB_0044eeb5
    MOV dword ptr [ESP + 0x18],EAX      ; 0044eeb1
    CMP EAX,ESI                         ; 0044eeb5
        ;   Label: LAB_0044eeb5
    JLE 0x0044eea7                      ; 0044eeb7
        ;   XREF to: 0044eea7 (CONDITIONAL_JUMP)  ; LAB_0044eea7
    MOV ESI,EAX                         ; 0044eeb9
    ADD ECX,EBP                         ; 0044eebb
    JMP 0x0044ee64                      ; 0044eebd
        ;   XREF to: 0044ee64 (UNCONDITIONAL_JUMP)  ; LAB_0044ee64
    LEA ESI,[ECX + 0x1]                 ; 0044eebf
        ;   Label: LAB_0044eebf
    JMP 0x0044ee06                      ; 0044eec2
        ;   XREF to: 0044ee06 (UNCONDITIONAL_JUMP)  ; LAB_0044ee06
    MOV ESI,dword ptr [ESP + 0x10]      ; 0044eec7
        ;   Label: LAB_0044eec7
    IMUL ESI,dword ptr [EBX + 0x1cc0]   ; 0044eecb
    MOV EDX,ECX                         ; 0044eed2
    SAR EDX,0x1f                        ; 0044eed4
    MOV EAX,ECX                         ; 0044eed7
    SHL EDX,0x8                         ; 0044eed9
    SBB EAX,EDX                         ; 0044eedc
    SAR EAX,0x8                         ; 0044eede
    MOV EDX,dword ptr [EBX + 0x2f94]    ; 0044eee1
    ADD EAX,ESI                         ; 0044eee7
    MOV AX,word ptr [EDX + EAX*0x2]     ; 0044eee9
    AND EAX,0xffff                      ; 0044eeed
    CMP EAX,0xffff                      ; 0044eef2
    JGE 0x0044ef63                      ; 0044eef7
        ;   XREF to: 0044ef63 (CONDITIONAL_JUMP)  ; LAB_0044ef63
    TEST EAX,EAX                        ; 0044eef9
    JLE 0x0044ef63                      ; 0044eefb
        ;   XREF to: 0044ef63 (CONDITIONAL_JUMP)  ; LAB_0044ef63
    SUB EAX,dword ptr [ESP + 0x18]      ; 0044eefd
    IMUL EDX,EAX,0xff                   ; 0044ef01
    MOV ESI,dword ptr [ESP + 0xc]       ; 0044ef07
    MOV EAX,EDX                         ; 0044ef0b
    SAR EDX,0x1f                        ; 0044ef0d
    IDIV ESI                            ; 0044ef10
    MOV ESI,EAX                         ; 0044ef12
    MOV EDX,EDI                         ; 0044ef14
    MOV EAX,EDI                         ; 0044ef16
    SAR EDX,0x1f                        ; 0044ef18
    IDIV EBP                            ; 0044ef1b
    MOV EDX,dword ptr [ESP + 0x38]      ; 0044ef1d
    ADD EDX,EAX                         ; 0044ef21
    MOV dword ptr [ESP + 0x4],EDX       ; 0044ef23
    MOV EDX,ECX                         ; 0044ef27
    MOV EAX,ECX                         ; 0044ef29
    SAR EDX,0x1f                        ; 0044ef2b
    IDIV EBP                            ; 0044ef2e
    ADD EAX,dword ptr [ESP + 0x34]      ; 0044ef30
    MOV EDX,dword ptr [ESP + 0x4]       ; 0044ef34
    SHL EAX,0x2                         ; 0044ef38
    SHL EDX,0x2                         ; 0044ef3b
    MOV dword ptr [ESP + 0x4],EAX       ; 0044ef3e
    MOV EAX,dword ptr [EDX + 0x1bd2fa0] ; 0044ef42 | DAT_01bd2fa0
    MOV EDX,dword ptr [ESP + 0x4]       ; 0044ef48
    ADD EDX,EAX                         ; 0044ef4c
    MOV EAX,ESI                         ; 0044ef4e
    SHL EAX,0x8                         ; 0044ef50
    ADD EAX,ESI                         ; 0044ef53
    SHL ESI,0x10                        ; 0044ef55
    MOV dword ptr [ESP],EDX             ; 0044ef58
    LEA EDX,[ESI + EAX*0x1]             ; 0044ef5b
    MOV EAX,dword ptr [ESP]             ; 0044ef5e
    MOV dword ptr [EAX],EDX             ; 0044ef61
    ADD ECX,EBP                         ; 0044ef63
        ;   Label: LAB_0044ef63
    JMP 0x0044ee36                      ; 0044ef65
        ;   XREF to: 0044ee36 (UNCONDITIONAL_JUMP)  ; LAB_0044ee36
    MOV EAX,[0x005b9354]                ; 0044ef6a | DAT_005b9354
        ;   Label: LAB_0044ef6a
    CMP dword ptr [EAX + 0x1e4],0x0     ; 0044ef6f | DAT_01c777d0
    JNZ 0x0044ef80                      ; 0044ef76
        ;   XREF to: 0044ef80 (CONDITIONAL_JUMP)  ; LAB_0044ef80
    ADD ESP,0x1c                        ; 0044ef78
        ;   Label: LAB_0044ef78
    POP EBP                             ; 0044ef7b
        ;   Label: LAB_0044ef7b
    POP EDI                             ; 0044ef7c
    POP ESI                             ; 0044ef7d
    POP EBX                             ; 0044ef7e
    RET                                 ; 0044ef7f
    MOV EAX,dword ptr [ESP + 0x38]      ; 0044ef80
        ;   Label: LAB_0044ef80
    PUSH EBX                            ; 0044ef84
    MOV EBX,dword ptr [ESP + 0x40]      ; 0044ef85
    ADD EAX,EBX                         ; 0044ef89
    SUB EAX,0xb                         ; 0044ef8b
    PUSH EAX                            ; 0044ef8e
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0044ef8f
    ADD EAX,EBX                         ; 0044ef93
    PUSH EAX                            ; 0044ef95
    MOV EDI,dword ptr [ESP + 0x40]      ; 0044ef96
    PUSH EDI                            ; 0044ef9a
    CALL engine_2d.c_FUN_00402d30       ; 0044ef9b
        ;   XREF to: 00402d30 (UNCONDITIONAL_CALL)  ; void engine_2d.c_FUN_00402d30(int left_x, int right_x, int y, char * text)
    ADD ESP,0x10                        ; 0044efa0
    ADD ESP,0x1c                        ; 0044efa3
    POP EBP                             ; 0044efa6
    POP EDI                             ; 0044efa7
    POP ESI                             ; 0044efa8
    POP EBX                             ; 0044efa9
    RET                                 ; 0044efaa

