; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050db90(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x158]:4  local_158
; undefined4       Stack[-0x154]:4  local_154
; undefined4       Stack[-0x150]:4  local_150
; undefined4       Stack[-0x14c]:4  local_14c
; undefined1       Stack[-0x148]:1  local_148
; undefined4       Stack[-0x147]:4  local_147
; undefined        Stack[-0x143]:1  local_143
; undefined1       Stack[-0x142]:1  local_142
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_0050c190 at 0050c225
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_005e039d
;   TerminatedCString s_removeChatOut_invalid_in_005e03b1
;   undefined4 DAT_005e0c75
;   undefined4 DAT_005e0c7d
;   undefined4 DAT_005e0c85
;   undefined4 DAT_005e0c8d
;   undefined4 DAT_005e0c95
;   undefined4 DAT_005e0c9d
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01d34e34
;   undefined4 DAT_01d34e38
;   undefined4 DAT_01d51050
;   undefined4 DAT_01d51054
;   undefined4 DAT_01d51058
;   ... and 7 more
;
; Called Functions:
;   FUN_004e4500
;   FUN_0050cdf0
;   FUN_0058e9e0
;   FUN_005ba1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050db90
        ;   Label: FUN_0050db90
    PUSH ESI                            ; 0050db91
    PUSH EDI                            ; 0050db92
    PUSH EBP                            ; 0050db93
    MOV EBP,ESP                         ; 0050db94
    SUB ESP,0x144                       ; 0050db96
    AND ESP,0xfffffff8                  ; 0050db9c
    CALL FUN_0058e9e0                   ; 0050db9f
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0058e9e0()
    MOV EDX,EAX                         ; 0050dba4
    MOV EBX,0x12                        ; 0050dba6
    SAR EDX,0x1f                        ; 0050dbab
    IDIV EBX                            ; 0050dbae
    MOV ECX,dword ptr [0x01d34e34]      ; 0050dbb0 | DAT_01d34e34
    MOV EDX,EAX                         ; 0050dbb6
    SUB EAX,ECX                         ; 0050dbb8
    MOV dword ptr [0x01d34e34],EDX      ; 0050dbba | DAT_01d34e34
    TEST EAX,EAX                        ; 0050dbc0
    JL 0x0050ddd8                       ; 0050dbc2
        ;   XREF to: 0050ddd8 (CONDITIONAL_JUMP)  ; LAB_0050ddd8
    CMP EAX,0x20000                     ; 0050dbc8
    JLE 0x0050dbd4                      ; 0050dbcd
        ;   XREF to: 0050dbd4 (CONDITIONAL_JUMP)  ; LAB_0050dbd4
    MOV EAX,0x20000                     ; 0050dbcf
    MOV EBX,dword ptr [0x01d34e38]      ; 0050dbd4 | DAT_01d34e38
        ;   Label: LAB_0050dbd4
    MOV EDI,dword ptr [0x01d51050]      ; 0050dbda | DAT_01d51050
    XOR ESI,ESI                         ; 0050dbe0
    ADD EBX,EAX                         ; 0050dbe2
    MOV dword ptr [ESP + 0x120],ESI     ; 0050dbe4
    MOV dword ptr [0x01d34e38],EBX      ; 0050dbeb | DAT_01d34e38
    TEST EDI,EDI                        ; 0050dbf1
    JLE 0x0050ddd1                      ; 0050dbf3
        ;   XREF to: 0050ddd1 (CONDITIONAL_JUMP)  ; LAB_0050ddd1
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050dbf9
    MOV ECX,0x1d51054                   ; 0050dbfc
    ADD EAX,0x20                        ; 0050dc01
    MOV dword ptr [ESP + 0x11c],ECX     ; 0050dc04 | DAT_01d51054
    MOV dword ptr [ESP + 0x118],EAX     ; 0050dc0b
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0050dc12
        ;   Label: LAB_0050dc12
    MOV EDX,dword ptr [0x01d34e38]      ; 0050dc19 | DAT_01d34e38
    MOV dword ptr [ESP + 0x12c],EAX     ; 0050dc1f | DAT_01d51054
    MOV EAX,dword ptr [EAX]             ; 0050dc26 | DAT_01d51054
    SUB EDX,EAX                         ; 0050dc28
    MOV dword ptr [ESP + 0x140],EDX     ; 0050dc2a
    MOV EBX,0x1                         ; 0050dc31
    FILD dword ptr [ESP + 0x140]        ; 0050dc36
    FMUL double ptr [0x005e0c75]        ; 0050dc3d | DAT_005e0c75
    MOV dword ptr [ESP + 0x128],EBX     ; 0050dc43
    FST float ptr [ESP + 0x4]           ; 0050dc4a
    FLDZ                                ; 0050dc4e
    FCOMPP                              ; 0050dc50
    FNSTSW AX                           ; 0050dc52
    SAHF                                ; 0050dc54
    JA 0x0050dddf                       ; 0050dc55
        ;   XREF to: 0050dddf (CONDITIONAL_JUMP)  ; LAB_0050dddf
    FLD float ptr [ESP + 0x4]           ; 0050dc5b
        ;   Label: LAB_0050dc5b
    FCOMP double ptr [0x005e0c85]       ; 0050dc5f | DAT_005e0c85
    FNSTSW AX                           ; 0050dc65
    SAHF                                ; 0050dc67
    JBE 0x0050dc72                      ; 0050dc68
        ;   XREF to: 0050dc72 (CONDITIONAL_JUMP)  ; LAB_0050dc72
    MOV dword ptr [ESP + 0x4],0x41f00000 ; 0050dc6a
    FLD float ptr [ESP + 0x4]           ; 0050dc72
        ;   Label: LAB_0050dc72
    FCOMP double ptr [0x005e0c8d]       ; 0050dc76 | DAT_005e0c8d
    FNSTSW AX                           ; 0050dc7c
    SAHF                                ; 0050dc7e
    JNC 0x0050dd40                      ; 0050dc7f
        ;   XREF to: 0050dd40 (CONDITIONAL_JUMP)  ; LAB_0050dd40
    XOR EAX,EAX                         ; 0050dc85
    MOV dword ptr [ESP + 0x130],EAX     ; 0050dc87
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050dc8e
    CMP dword ptr [EAX + 0x1c],0x0      ; 0050dc91
    JLE 0x0050dd40                      ; 0050dc95
        ;   XREF to: 0050dd40 (CONDITIONAL_JUMP)  ; LAB_0050dd40
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0050dc9b
    ADD EAX,0x14                        ; 0050dca2
    MOV dword ptr [ESP + 0x124],EAX     ; 0050dca5
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0050dcac
    MOV dword ptr [ESP + 0x138],EAX     ; 0050dcb3 | DAT_01d51054
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050dcba
    MOV dword ptr [ESP + 0x134],EAX     ; 0050dcbd
    MOV EAX,dword ptr [ESP + 0x118]     ; 0050dcc4
    ADD EAX,0x1c                        ; 0050dccb
    MOV EBX,dword ptr [ESP + 0x12c]     ; 0050dcce
    MOV dword ptr [ESP + 0x13c],EAX     ; 0050dcd5
    MOV EAX,dword ptr [ESP + 0x138]     ; 0050dcdc
        ;   Label: LAB_0050dcdc
    CMP byte ptr [EAX + 0x8],0x0        ; 0050dce3 | DAT_01d5105c | DAT_01d5105d
    JZ 0x0050ddea                       ; 0050dce7
        ;   XREF to: 0050ddea (CONDITIONAL_JUMP)  ; LAB_0050ddea
    MOV ECX,dword ptr [ESP + 0x138]     ; 0050dced
        ;   Label: LAB_0050dced
    MOV ESI,dword ptr [ESP + 0x134]     ; 0050dcf4
    MOV EDI,dword ptr [ESP + 0x13c]     ; 0050dcfb
    MOV EAX,dword ptr [ESP + 0x130]     ; 0050dd02
    MOV EDX,dword ptr [EBP + 0x14]      ; 0050dd09
    ADD EBX,0x4                         ; 0050dd0c
    INC ECX                             ; 0050dd0f
    ADD ESI,0x80                        ; 0050dd10
    ADD EDI,0x80                        ; 0050dd16
    INC EAX                             ; 0050dd1c
    MOV dword ptr [ESP + 0x138],ECX     ; 0050dd1d
    MOV dword ptr [ESP + 0x134],ESI     ; 0050dd24
    MOV dword ptr [ESP + 0x13c],EDI     ; 0050dd2b
    MOV ECX,dword ptr [EDX + 0x1c]      ; 0050dd32
    MOV dword ptr [ESP + 0x130],EAX     ; 0050dd35
    CMP EAX,ECX                         ; 0050dd3c
    JL 0x0050dcdc                       ; 0050dd3e
        ;   XREF to: 0050dcdc (CONDITIONAL_JUMP)  ; LAB_0050dcdc
    CMP dword ptr [ESP + 0x128],0x0     ; 0050dd40
        ;   Label: LAB_0050dd40
    JZ 0x0050deee                       ; 0050dd48
        ;   XREF to: 0050deee (CONDITIONAL_JUMP)  ; LAB_0050deee
    MOV EBX,dword ptr [ESP + 0x120]     ; 0050dd4e
    TEST EBX,EBX                        ; 0050dd55
    JL 0x0050dd61                       ; 0050dd57
        ;   XREF to: 0050dd61 (CONDITIONAL_JUMP)  ; LAB_0050dd61
    CMP EBX,dword ptr [0x01d51050]      ; 0050dd59 | DAT_01d51050
    JL 0x0050dd83                       ; 0050dd5f
        ;   XREF to: 0050dd83 (CONDITIONAL_JUMP)  ; LAB_0050dd83
    MOV EAX,0x5e039d                    ; 0050dd61 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_0050dd61
    MOV EDX,0x107                       ; 0050dd66
    PUSH 0x5e03b1                       ; 0050dd6b | = "removeChatOut - invalid index"
    MOV [0x01d046a0],EAX                ; 0050dd70 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 0050dd75 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0050dd7b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0050dd80
    MOV ECX,dword ptr [0x01d51050]      ; 0050dd83 | DAT_01d51050
        ;   Label: LAB_0050dd83
    DEC ECX                             ; 0050dd89
    MOV EAX,ECX                         ; 0050dd8a
    SUB EAX,EBX                         ; 0050dd8c
    IMUL EAX,EAX,0x114                  ; 0050dd8e
    PUSH EAX                            ; 0050dd94
    LEA EAX,[EBX + 0x1]                 ; 0050dd95
    IMUL EAX,EAX,0x114                  ; 0050dd98
    ADD EAX,0x1d51054                   ; 0050dd9e
    PUSH EAX                            ; 0050dda3
    IMUL EAX,EBX,0x114                  ; 0050dda4
    ADD EAX,0x1d51054                   ; 0050ddaa
    PUSH EAX                            ; 0050ddaf
    MOV dword ptr [0x01d51050],ECX      ; 0050ddb0 | DAT_01d51050
    CALL FUN_005ba1f0                   ; 0050ddb6
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ba1f0()
    ADD ESP,0xc                         ; 0050ddbb
    MOV EAX,dword ptr [ESP + 0x120]     ; 0050ddbe
        ;   Label: LAB_0050ddbe
    CMP EAX,dword ptr [0x01d51050]      ; 0050ddc5 | DAT_01d51050
    JL 0x0050dc12                       ; 0050ddcb
        ;   XREF to: 0050dc12 (CONDITIONAL_JUMP)  ; LAB_0050dc12
    MOV ESP,EBP                         ; 0050ddd1
        ;   Label: LAB_0050ddd1
    POP EBP                             ; 0050ddd3
    POP EDI                             ; 0050ddd4
    POP ESI                             ; 0050ddd5
    POP EBX                             ; 0050ddd6
    RET                                 ; 0050ddd7
    XOR EAX,EAX                         ; 0050ddd8
        ;   Label: LAB_0050ddd8
    JMP 0x0050dbd4                      ; 0050ddda
        ;   XREF to: 0050dbd4 (UNCONDITIONAL_JUMP)  ; LAB_0050dbd4
    XOR ESI,ESI                         ; 0050dddf
        ;   Label: LAB_0050dddf
    MOV dword ptr [ESP + 0x4],ESI       ; 0050dde1
    JMP 0x0050dc5b                      ; 0050dde5
        ;   XREF to: 0050dc5b (UNCONDITIONAL_JUMP)  ; LAB_0050dc5b
    MOV EAX,dword ptr [ESP + 0x134]     ; 0050ddea
        ;   Label: LAB_0050ddea
    XOR ESI,ESI                         ; 0050ddf1
    FLD float ptr [EAX + 0x48]          ; 0050ddf3
    FMUL double ptr [0x005e0c7d]        ; 0050ddf6 | DAT_005e0c7d
    MOV dword ptr [ESP + 0x128],ESI     ; 0050ddfc
    FST float ptr [ESP + 0x8]           ; 0050de03
    FCOMP double ptr [0x005e0c95]       ; 0050de07 | DAT_005e0c95
    FNSTSW AX                           ; 0050de0d
    SAHF                                ; 0050de0f
    JNC 0x0050de1a                      ; 0050de10
        ;   XREF to: 0050de1a (CONDITIONAL_JUMP)  ; LAB_0050de1a
    MOV dword ptr [ESP + 0x8],0x40000000 ; 0050de12
    FLD float ptr [ESP + 0x8]           ; 0050de1a
        ;   Label: LAB_0050de1a
    FCOMP double ptr [0x005e0c9d]       ; 0050de1e | DAT_005e0c9d
    FNSTSW AX                           ; 0050de24
    SAHF                                ; 0050de26
    JBE 0x0050de31                      ; 0050de27
        ;   XREF to: 0050de31 (CONDITIONAL_JUMP)  ; LAB_0050de31
    MOV dword ptr [ESP + 0x8],0x40a00000 ; 0050de29
    MOV EDX,dword ptr [0x01d34e38]      ; 0050de31 | DAT_01d34e38
        ;   Label: LAB_0050de31
    MOV EAX,dword ptr [EBX + 0xc]       ; 0050de37 | DAT_01d51064
    SUB EDX,EAX                         ; 0050de3a
    MOV dword ptr [ESP + 0x140],EDX     ; 0050de3c
    FILD dword ptr [ESP + 0x140]        ; 0050de43
    FMUL double ptr [0x005e0c75]        ; 0050de4a | DAT_005e0c75
    FST float ptr [ESP]                 ; 0050de50
    FLDZ                                ; 0050de53
    FCOMPP                              ; 0050de55
    FNSTSW AX                           ; 0050de57
    SAHF                                ; 0050de59
    JBE 0x0050de61                      ; 0050de5a
        ;   XREF to: 0050de61 (CONDITIONAL_JUMP)  ; LAB_0050de61
    XOR EDX,EDX                         ; 0050de5c
    MOV dword ptr [ESP],EDX             ; 0050de5e
    FLD float ptr [ESP]                 ; 0050de61
        ;   Label: LAB_0050de61
    FCOMP double ptr [0x005e0c85]       ; 0050de64 | DAT_005e0c85
    FNSTSW AX                           ; 0050de6a
    SAHF                                ; 0050de6c
    JBE 0x0050de76                      ; 0050de6d
        ;   XREF to: 0050de76 (CONDITIONAL_JUMP)  ; LAB_0050de76
    MOV dword ptr [ESP],0x41f00000      ; 0050de6f
    FLD float ptr [ESP]                 ; 0050de76
        ;   Label: LAB_0050de76
    FCOMP float ptr [ESP + 0x8]         ; 0050de79
    FNSTSW AX                           ; 0050de7d
    SAHF                                ; 0050de7f
    JBE 0x0050dced                      ; 0050de80
        ;   XREF to: 0050dced (CONDITIONAL_JUMP)  ; LAB_0050dced
    MOV ESI,0x109                       ; 0050de86
    MOV DH,0x6                          ; 0050de8b
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0050de8d
    MOV dword ptr [ESP + 0xc],ESI       ; 0050de94
    MOV byte ptr [ESP + 0x10],DH        ; 0050de98
    LEA EDI,[ESP + 0x15]                ; 0050de9c
    MOV EAX,dword ptr [EAX + 0x4]       ; 0050dea0 | DAT_01d51058
    MOV ESI,dword ptr [ESP + 0x124]     ; 0050dea3
    MOV dword ptr [ESP + 0x11],EAX      ; 0050deaa
    PUSH EDI                            ; 0050deae
    MOV AL,byte ptr [ESI]               ; 0050deaf | DAT_01d51068 | DAT_01d5106a
        ;   Label: LAB_0050deaf
    MOV byte ptr [EDI],AL               ; 0050deb1
    CMP AL,0x0                          ; 0050deb3
    JZ 0x0050dec7                       ; 0050deb5
        ;   XREF to: 0050dec7 (CONDITIONAL_JUMP)  ; LAB_0050dec7
    MOV AL,byte ptr [ESI + 0x1]         ; 0050deb7 | DAT_01d51069 | DAT_01d5106b
    ADD ESI,0x2                         ; 0050deba
    MOV byte ptr [EDI + 0x1],AL         ; 0050debd
    ADD EDI,0x2                         ; 0050dec0
    CMP AL,0x0                          ; 0050dec3
    JNZ 0x0050deaf                      ; 0050dec5
        ;   XREF to: 0050deaf (CONDITIONAL_JUMP)  ; LAB_0050deaf
    POP EDI                             ; 0050dec7
        ;   Label: LAB_0050dec7
    LEA EAX,[ESP + 0xc]                 ; 0050dec8
    PUSH EAX                            ; 0050decc
    MOV EDI,dword ptr [ESP + 0x140]     ; 0050decd
    PUSH EDI                            ; 0050ded4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050ded5
    PUSH EAX                            ; 0050ded8
    CALL FUN_0050cdf0                   ; 0050ded9
        ;   XREF to: 0050cdf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0050cdf0()
    MOV EAX,[0x01d34e38]                ; 0050dede | DAT_01d34e38
    ADD ESP,0xc                         ; 0050dee3
    MOV dword ptr [EBX + 0xc],EAX       ; 0050dee6 | DAT_01d51064
    JMP 0x0050dced                      ; 0050dee9
        ;   XREF to: 0050dced (UNCONDITIONAL_JUMP)  ; LAB_0050dced
    MOV EBX,dword ptr [ESP + 0x120]     ; 0050deee
        ;   Label: LAB_0050deee
    MOV ECX,dword ptr [ESP + 0x11c]     ; 0050def5
    INC EBX                             ; 0050defc
    ADD ECX,0x114                       ; 0050defd
    MOV dword ptr [ESP + 0x120],EBX     ; 0050df03
    MOV dword ptr [ESP + 0x11c],ECX     ; 0050df0a
    JMP 0x0050ddbe                      ; 0050df11
        ;   XREF to: 0050ddbe (UNCONDITIONAL_JUMP)  ; LAB_0050ddbe

