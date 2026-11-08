; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0044bb00(undefined4 param_1,int *param_2,int param_3,int *param_4)
;
; Local Variables:
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
;   FUN_00537e20 at 00537e82
;
; Referenced Globals:
;   undefined4 DAT_005ddfc0
;   undefined4 DAT_005ddfc4
;   undefined4 DAT_01d1a0a8
;
; Called Functions:
;   FUN_0044b4a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044bb00
        ;   Label: FUN_0044bb00
    PUSH ESI                            ; 0044bb01
    PUSH EDI                            ; 0044bb02
    PUSH EBP                            ; 0044bb03
    SUB ESP,0x38                        ; 0044bb04
    MOV EBP,dword ptr [ESP + 0x50]      ; 0044bb07
    MOV ECX,dword ptr [ESP + 0x58]      ; 0044bb0b
    TEST ECX,ECX                        ; 0044bb0f
    JNZ 0x0044bb34                      ; 0044bb11
        ;   XREF to: 0044bb34 (CONDITIONAL_JUMP)  ; LAB_0044bb34
    MOV EAX,0xaaaa                      ; 0044bb13
    PUSH EAX                            ; 0044bb18
        ;   Label: LAB_0044bb18
    MOV EDX,dword ptr [ESP + 0x58]      ; 0044bb19
    PUSH EDX                            ; 0044bb1d
    PUSH EBP                            ; 0044bb1e
    MOV ECX,dword ptr [ESP + 0x58]      ; 0044bb1f
    PUSH ECX                            ; 0044bb23
    CALL FUN_0044b4a0                   ; 0044bb24
        ;   XREF to: 0044b4a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044b4a0()
    ADD ESP,0x10                        ; 0044bb29
    ADD ESP,0x38                        ; 0044bb2c
    POP EBP                             ; 0044bb2f
    POP EDI                             ; 0044bb30
    POP ESI                             ; 0044bb31
    POP EBX                             ; 0044bb32
    RET                                 ; 0044bb33
    MOV EBX,ESP                         ; 0044bb34
        ;   Label: LAB_0044bb34
    LEA EDI,[ESP + 0xc]                 ; 0044bb36
    MOV EAX,EBP                         ; 0044bb3a
    LEA ESI,[ESP + 0x24]                ; 0044bb3c
    FILD dword ptr [EAX]                ; 0044bb40
    FMUL float ptr [0x005ddfc4]         ; 0044bb42 | DAT_005ddfc4
    FSTP float ptr [EBX]                ; 0044bb48
    FILD dword ptr [EAX + 0x4]          ; 0044bb4a
    FMUL float ptr [0x005ddfc4]         ; 0044bb4d | DAT_005ddfc4
    FSTP float ptr [EBX + 0x4]          ; 0044bb53
    FILD dword ptr [EAX + 0x8]          ; 0044bb56
    FMUL float ptr [0x005ddfc4]         ; 0044bb59 | DAT_005ddfc4
    FSTP float ptr [EBX + 0x8]          ; 0044bb5f
    FLD float ptr [ESP]                 ; 0044bb62
    FLD float ptr [ESP + 0x4]           ; 0044bb65
    MOV EAX,dword ptr [ESP + 0x54]      ; 0044bb69
    FLD float ptr [ESP + 0x8]           ; 0044bb6d
    FXCH ST2                            ; 0044bb71
    FSUB float ptr [EAX + 0x4]          ; 0044bb73
    FXCH                                ; 0044bb76
    FSUB float ptr [EAX + 0x8]          ; 0044bb78
    FXCH ST2                            ; 0044bb7b
    FSUB float ptr [EAX + 0xc]          ; 0044bb7d
    FXCH                                ; 0044bb80
    FSTP float ptr [ESP + 0x24]         ; 0044bb82
    FXCH                                ; 0044bb86
    FSTP float ptr [ESP + 0x28]         ; 0044bb88
    FSTP float ptr [ESP + 0x2c]         ; 0044bb8c
    MOVSD ES:EDI,ESI                    ; 0044bb90
    MOVSD ES:EDI,ESI                    ; 0044bb91
    MOVSD ES:EDI,ESI                    ; 0044bb92
    FLD float ptr [ESP + 0x10]          ; 0044bb93
    FMUL ST0                            ; 0044bb97
    FLD float ptr [ESP + 0xc]           ; 0044bb99
    FMUL ST0                            ; 0044bb9d
    FADDP                               ; 0044bb9f
    FLD float ptr [ESP + 0x14]          ; 0044bba1
    FMUL ST0                            ; 0044bba5
    FADDP                               ; 0044bba7
    FSTP float ptr [ESP + 0x30]         ; 0044bba9
    MOV EAX,dword ptr [ESP + 0x30]      ; 0044bbad
    MOV EDX,dword ptr [0x01d1a0a8]      ; 0044bbb1 | DAT_01d1a0a8
    SAR EAX,0x1                         ; 0044bbb7
    SUB EDX,EAX                         ; 0044bbb9
    MOV dword ptr [ESP + 0x34],EDX      ; 0044bbbb
    FLD float ptr [ESP + 0xc]           ; 0044bbbf
    FMUL float ptr [ESP + 0x34]         ; 0044bbc3
    FLD float ptr [ESP + 0x10]          ; 0044bbc7
    FMUL float ptr [ESP + 0x34]         ; 0044bbcb
    FLD float ptr [ESP + 0x14]          ; 0044bbcf
    FMUL float ptr [ESP + 0x34]         ; 0044bbd3
    LEA EBX,[ESP + 0x18]                ; 0044bbd7
    LEA EAX,[ESP + 0xc]                 ; 0044bbdb
    FXCH ST2                            ; 0044bbdf
    FSTP float ptr [ESP + 0xc]          ; 0044bbe1
    FSTP float ptr [ESP + 0x10]         ; 0044bbe5
    FSTP float ptr [ESP + 0x14]         ; 0044bbe9
    FLD float ptr [EAX]                 ; 0044bbed
    FMUL float ptr [0x005ddfc0]         ; 0044bbef | DAT_005ddfc0
    FISTP dword ptr [EBX]               ; 0044bbf5
    FLD float ptr [EAX + 0x4]           ; 0044bbf7
    FMUL float ptr [0x005ddfc0]         ; 0044bbfa | DAT_005ddfc0
    FISTP dword ptr [EBX + 0x4]         ; 0044bc00
    FLD float ptr [EAX + 0x8]           ; 0044bc03
    FMUL float ptr [0x005ddfc0]         ; 0044bc06 | DAT_005ddfc0
    FISTP dword ptr [EBX + 0x8]         ; 0044bc0c
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044bc0f
    MOV EDX,dword ptr [ECX]             ; 0044bc13
    IMUL EDX                            ; 0044bc15
    SHRD EAX,EDX,0x10                   ; 0044bc17
    MOV EBX,EAX                         ; 0044bc1b
    MOV EDX,dword ptr [ECX + 0x4]       ; 0044bc1d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0044bc20
    IMUL EDX                            ; 0044bc24
    SHRD EAX,EDX,0x10                   ; 0044bc26
    MOV EDX,dword ptr [ECX + 0x8]       ; 0044bc2a
    ADD EBX,EAX                         ; 0044bc2d
    MOV EAX,dword ptr [ESP + 0x20]      ; 0044bc2f
    IMUL EDX                            ; 0044bc33
    SHRD EAX,EDX,0x10                   ; 0044bc35
    ADD EAX,EBX                         ; 0044bc39
    TEST EAX,EAX                        ; 0044bc3b
    JL 0x0044bc49                       ; 0044bc3d
        ;   XREF to: 0044bc49 (CONDITIONAL_JUMP)  ; LAB_0044bc49
    XOR EAX,EAX                         ; 0044bc3f
    ADD ESP,0x38                        ; 0044bc41
    POP EBP                             ; 0044bc44
    POP EDI                             ; 0044bc45
    POP ESI                             ; 0044bc46
    POP EBX                             ; 0044bc47
    RET                                 ; 0044bc48
    NEG EAX                             ; 0044bc49
        ;   Label: LAB_0044bc49
    JMP 0x0044bb18                      ; 0044bc4b
        ;   XREF to: 0044bb18 (UNCONDITIONAL_JUMP)  ; LAB_0044bb18

