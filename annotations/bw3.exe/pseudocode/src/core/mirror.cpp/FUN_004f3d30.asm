; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f3d30(float *param_1,float *param_2,float *param_3,float *param_4)
;
; Local Variables:
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004f3e90 at 004f3f70
;
; Referenced Globals:
;   TerminatedCString s_core_mirror_cpp_005c834d
;   TerminatedCString s_Bad_clip_005c8360
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3d30
        ;   Label: FUN_004f3d30
    PUSH ESI                            ; 004f3d31
    PUSH EDI                            ; 004f3d32
    PUSH EBP                            ; 004f3d33
    SUB ESP,0x50                        ; 004f3d34
    MOV ESI,dword ptr [ESP + 0x64]      ; 004f3d37
    MOV EBX,dword ptr [ESP + 0x68]      ; 004f3d3b
    MOV EDI,dword ptr [ESP + 0x6c]      ; 004f3d3f
    MOV EBP,dword ptr [ESP + 0x70]      ; 004f3d43
    FLD float ptr [EDI + 0x4]           ; 004f3d47
    FSUB float ptr [EBX + 0x4]          ; 004f3d4a
    FMUL float ptr [ESI + 0x4]          ; 004f3d4d
    FLD float ptr [EDI]                 ; 004f3d50
    FSUB float ptr [EBX]                ; 004f3d52
    FMUL float ptr [ESI]                ; 004f3d54
    FADDP                               ; 004f3d56
    FLD float ptr [EDI + 0x8]           ; 004f3d58
    FSUB float ptr [EBX + 0x8]          ; 004f3d5b
    FMUL float ptr [ESI + 0x8]          ; 004f3d5e
    FADDP                               ; 004f3d61
    FSTP float ptr [ESP + 0x4c]         ; 004f3d63
    TEST dword ptr [ESP + 0x4c],0x7fffffff ; 004f3d67
    JZ 0x004f3e38                       ; 004f3d6f
        ;   XREF to: 004f3e38 (CONDITIONAL_JUMP)  ; LAB_004f3e38
    FLD float ptr [ESI]                 ; 004f3d75
        ;   Label: LAB_004f3d75
    FMUL float ptr [EBX]                ; 004f3d77
    FADD float ptr [ESI + 0xc]          ; 004f3d79
    FLD float ptr [ESI + 0x4]           ; 004f3d7c
    FMUL float ptr [EBX + 0x4]          ; 004f3d7f
    FADDP                               ; 004f3d82
    FLD float ptr [ESI + 0x8]           ; 004f3d84
    FMUL float ptr [EBX + 0x8]          ; 004f3d87
    FADDP                               ; 004f3d8a
    FCHS                                ; 004f3d8c
    FDIV float ptr [ESP + 0x4c]         ; 004f3d8e
    FLD float ptr [EDI + 0x4]           ; 004f3d92
    FLD float ptr [EDI + 0x8]           ; 004f3d95
    FLD float ptr [EDI]                 ; 004f3d98
    MOV EDI,ESP                         ; 004f3d9a
    FSUB float ptr [EBX]                ; 004f3d9c
    FXCH ST2                            ; 004f3d9e
    FSUB float ptr [EBX + 0x4]          ; 004f3da0
    FXCH                                ; 004f3da3
    FSUB float ptr [EBX + 0x8]          ; 004f3da5
    FXCH ST2                            ; 004f3da8
    FSTP float ptr [ESP + 0x30]         ; 004f3daa
    FSTP float ptr [ESP + 0x34]         ; 004f3dae
    LEA ESI,[ESP + 0x30]                ; 004f3db2
    FSTP float ptr [ESP + 0x38]         ; 004f3db6
    MOVSD ES:EDI,ESI                    ; 004f3dba
    MOVSD ES:EDI,ESI                    ; 004f3dbb
    MOVSD ES:EDI,ESI                    ; 004f3dbc
    FLD float ptr [ESP]                 ; 004f3dbd
    FXCH                                ; 004f3dc0
    FSTP float ptr [ESP + 0x48]         ; 004f3dc2
    FMUL float ptr [ESP + 0x48]         ; 004f3dc6
    FLD float ptr [ESP + 0x4]           ; 004f3dca
    FMUL float ptr [ESP + 0x48]         ; 004f3dce
    FLD float ptr [ESP + 0x8]           ; 004f3dd2
    FMUL float ptr [ESP + 0x48]         ; 004f3dd6
    LEA EDI,[ESP + 0x24]                ; 004f3dda
    LEA ESI,[ESP + 0x3c]                ; 004f3dde
    FXCH ST2                            ; 004f3de2
    FSTP float ptr [ESP + 0x3c]         ; 004f3de4
    FSTP float ptr [ESP + 0x40]         ; 004f3de8
    FSTP float ptr [ESP + 0x44]         ; 004f3dec
    MOVSD ES:EDI,ESI                    ; 004f3df0
    MOVSD ES:EDI,ESI                    ; 004f3df1
    MOVSD ES:EDI,ESI                    ; 004f3df2
    LEA EAX,[ESP + 0x18]                ; 004f3df3
    FLD float ptr [EBX]                 ; 004f3df7
    FLD float ptr [EBX + 0x4]           ; 004f3df9
    FLD float ptr [EBX + 0x8]           ; 004f3dfc
    LEA EDI,[ESP + 0x18]                ; 004f3dff
    LEA ESI,[ESP + 0xc]                 ; 004f3e03
    FXCH ST2                            ; 004f3e07
    FADD float ptr [ESP + 0x24]         ; 004f3e09
    FXCH                                ; 004f3e0d
    FADD float ptr [ESP + 0x28]         ; 004f3e0f
    FXCH ST2                            ; 004f3e13
    FADD float ptr [ESP + 0x2c]         ; 004f3e15
    FXCH                                ; 004f3e19
    FSTP float ptr [ESP + 0xc]          ; 004f3e1b
    FXCH                                ; 004f3e1f
    FSTP float ptr [ESP + 0x10]         ; 004f3e21
    FSTP float ptr [ESP + 0x14]         ; 004f3e25
    MOVSD ES:EDI,ESI                    ; 004f3e29
    MOVSD ES:EDI,ESI                    ; 004f3e2a
    MOVSD ES:EDI,ESI                    ; 004f3e2b
    CMP EBP,EAX                         ; 004f3e2c
    JNZ 0x004f3e5f                      ; 004f3e2e
        ;   XREF to: 004f3e5f (CONDITIONAL_JUMP)  ; LAB_004f3e5f
    ADD ESP,0x50                        ; 004f3e30
    POP EBP                             ; 004f3e33
    POP EDI                             ; 004f3e34
    POP ESI                             ; 004f3e35
    POP EBX                             ; 004f3e36
    RET                                 ; 004f3e37
    MOV ECX,0x5c834d                    ; 004f3e38 | = "..\\core\\mirror.cpp"
        ;   Label: LAB_004f3e38
    MOV EAX,0x42                        ; 004f3e3d
    PUSH 0x5c8360                       ; 004f3e42 | = "Bad clip!"
    MOV dword ptr [0x01d71de0],ECX      ; 004f3e47 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004f3e4d | DAT_01d71de4
    CALL FUN_004e4330                   ; 004f3e52
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004f3e57
    JMP 0x004f3d75                      ; 004f3e5a
        ;   XREF to: 004f3d75 (UNCONDITIONAL_JUMP)  ; LAB_004f3d75
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f3e5f
        ;   Label: LAB_004f3e5f
    MOV dword ptr [EBP],EAX             ; 004f3e63
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004f3e66
    MOV dword ptr [EBP + 0x4],EAX       ; 004f3e6a
    MOV EAX,dword ptr [ESP + 0x20]      ; 004f3e6d
    MOV dword ptr [EBP + 0x8],EAX       ; 004f3e71
    ADD ESP,0x50                        ; 004f3e74
    POP EBP                             ; 004f3e77
    POP EDI                             ; 004f3e78
    POP ESI                             ; 004f3e79
    POP EBX                             ; 004f3e7a
    RET                                 ; 004f3e7b

