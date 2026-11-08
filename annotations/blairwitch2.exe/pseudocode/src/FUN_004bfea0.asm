; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004bfea0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined        Stack[-0x48]:1  local_48
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
;   FUN_004c0050 at 004c04af
;
; Referenced Globals:
;   undefined4 DAT_005d8d62
;   undefined4 DAT_005d8d66
;
; Called Functions:
;   FUN_0040d0c0
;   FUN_005838f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bfea0
        ;   Label: FUN_004bfea0
    PUSH ESI                            ; 004bfea1
    PUSH EDI                            ; 004bfea2
    PUSH EBP                            ; 004bfea3
    MOV EBP,ESP                         ; 004bfea4
    SUB ESP,0x50                        ; 004bfea6
    AND ESP,0xfffffff8                  ; 004bfea9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004bfeac
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 004bfeaf
    MOV dword ptr [EBX + 0x10b4c],0x0   ; 004bfeb5
    TEST EDX,EDX                        ; 004bfebf
    JZ 0x004bff81                       ; 004bfec1
        ;   XREF to: 004bff81 (CONDITIONAL_JUMP)  ; LAB_004bff81
    MOV EAX,EDX                         ; 004bfec7
    LEA EDX,[EBX + 0x20]                ; 004bfec9
    LEA EDI,[ESP + 0xc]                 ; 004bfecc
    MOV ESI,ESP                         ; 004bfed0
    FLD float ptr [EDX]                 ; 004bfed2
    FLD float ptr [EDX + 0x4]           ; 004bfed4
    FLD float ptr [EDX + 0x8]           ; 004bfed7
    FXCH ST2                            ; 004bfeda
    FSUB float ptr [EAX + 0x20]         ; 004bfedc
    FXCH                                ; 004bfedf
    FSUB float ptr [EAX + 0x24]         ; 004bfee1
    FXCH ST2                            ; 004bfee4
    FSUB float ptr [EAX + 0x28]         ; 004bfee6
    FXCH                                ; 004bfee9
    FSTP float ptr [ESP]                ; 004bfeeb
    FXCH                                ; 004bfeee
    FSTP float ptr [ESP + 0x4]          ; 004bfef0
    FSTP float ptr [ESP + 0x8]          ; 004bfef4
    MOVSD ES:EDI,ESI                    ; 004bfef8
    MOVSD ES:EDI,ESI                    ; 004bfef9
    MOVSD ES:EDI,ESI                    ; 004bfefa
    FLD float ptr [ESP + 0x10]          ; 004bfefb
    FMUL ST0                            ; 004bfeff
    FLD float ptr [ESP + 0xc]           ; 004bff01
    FMUL ST0                            ; 004bff05
    FADDP                               ; 004bff07
    FLD float ptr [ESP + 0x14]          ; 004bff09
    FMUL ST0                            ; 004bff0d
    FADDP                               ; 004bff0f
    FSQRT                               ; 004bff11
    FCOMP float ptr [EBX + 0x10a70]     ; 004bff13
    FNSTSW AX                           ; 004bff19
    SAHF                                ; 004bff1b
    JBE 0x004bffa0                      ; 004bff1c
        ;   XREF to: 004bffa0 (CONDITIONAL_JUMP)  ; LAB_004bffa0
    MOV ECX,dword ptr [EBX + 0x10b34]   ; 004bff22
    TEST ECX,ECX                        ; 004bff28
    JZ 0x004bff81                       ; 004bff2a
        ;   XREF to: 004bff81 (CONDITIONAL_JUMP)  ; LAB_004bff81
    MOV EAX,ECX                         ; 004bff2c
    LEA EDI,[ESP + 0x24]                ; 004bff2e
    LEA ESI,[ESP + 0x30]                ; 004bff32
    FLD float ptr [EAX + 0x20]          ; 004bff36
    FLD float ptr [EAX + 0x24]          ; 004bff39
    FLD float ptr [EAX + 0x28]          ; 004bff3c
    FXCH ST2                            ; 004bff3f
    FSUB float ptr [EDX]                ; 004bff41
    FXCH                                ; 004bff43
    FSUB float ptr [EDX + 0x4]          ; 004bff45
    FXCH ST2                            ; 004bff48
    FSUB float ptr [EDX + 0x8]          ; 004bff4a
    FXCH                                ; 004bff4d
    FSTP float ptr [ESP + 0x30]         ; 004bff4f
    FXCH                                ; 004bff53
    FSTP float ptr [ESP + 0x34]         ; 004bff55
    FSTP float ptr [ESP + 0x38]         ; 004bff59
    MOVSD ES:EDI,ESI                    ; 004bff5d
    MOVSD ES:EDI,ESI                    ; 004bff5e
    MOVSD ES:EDI,ESI                    ; 004bff5f
    FLD float ptr [ESP + 0x28]          ; 004bff60
    FMUL ST0                            ; 004bff64
    FLD float ptr [ESP + 0x24]          ; 004bff66
    FMUL ST0                            ; 004bff6a
    FADDP                               ; 004bff6c
    FLD float ptr [ESP + 0x2c]          ; 004bff6e
    FMUL ST0                            ; 004bff72
    FADDP                               ; 004bff74
    FSQRT                               ; 004bff76
    FLD1                                ; 004bff78
    FCOMPP                              ; 004bff7a
    FNSTSW AX                           ; 004bff7c
    SAHF                                ; 004bff7e
    JBE 0x004bff8a                      ; 004bff7f
        ;   XREF to: 004bff8a (CONDITIONAL_JUMP)  ; LAB_004bff8a
    XOR EAX,EAX                         ; 004bff81
        ;   Label: LAB_004bff81
    MOV ESP,EBP                         ; 004bff83
    POP EBP                             ; 004bff85
    POP EDI                             ; 004bff86
    POP ESI                             ; 004bff87
    POP EBX                             ; 004bff88
    RET                                 ; 004bff89
    MOV EAX,0x1                         ; 004bff8a
        ;   Label: LAB_004bff8a
    MOV dword ptr [EBX + 0x10b4c],0x1   ; 004bff8f
    MOV ESP,EBP                         ; 004bff99
    POP EBP                             ; 004bff9b
    POP EDI                             ; 004bff9c
    POP ESI                             ; 004bff9d
    POP EBX                             ; 004bff9e
    RET                                 ; 004bff9f
    LEA EAX,[ESP + 0xc]                 ; 004bffa0
        ;   Label: LAB_004bffa0
    PUSH EAX                            ; 004bffa4
    LEA ESI,[ESP + 0x1c]                ; 004bffa5
    LEA EDI,[ESP + 0x40]                ; 004bffa9
    CALL FUN_005838f0                   ; 004bffad
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005838f0()
    LEA ESI,[ESP + 0x1c]                ; 004bffb2
    LEA EAX,[ESP + 0x40]                ; 004bffb6
    ADD ESP,0x4                         ; 004bffba
    LEA EDX,[ESP + 0xc]                 ; 004bffbd
    MOVSD ES:EDI,ESI                    ; 004bffc1
    MOVSD ES:EDI,ESI                    ; 004bffc2
    MOVSD ES:EDI,ESI                    ; 004bffc3
    CMP EDX,EAX                         ; 004bffc4
    JZ 0x004bffe0                       ; 004bffc6
        ;   XREF to: 004bffe0 (CONDITIONAL_JUMP)  ; LAB_004bffe0
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004bffc8
    MOV dword ptr [ESP + 0xc],EAX       ; 004bffcc
    MOV EAX,dword ptr [ESP + 0x40]      ; 004bffd0
    MOV dword ptr [ESP + 0x10],EAX      ; 004bffd4
    MOV EAX,dword ptr [ESP + 0x44]      ; 004bffd8
    MOV dword ptr [ESP + 0x14],EAX      ; 004bffdc
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004bffe0
        ;   Label: LAB_004bffe0
    FLD float ptr [EAX + 0x34]          ; 004bffe6
    FSUB float ptr [ESP + 0x10]         ; 004bffe9
    SUB ESP,0x4                         ; 004bffed
    FSTP float ptr [ESP]                ; 004bfff0
    CALL FUN_0040d0c0                   ; 004bfff3
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0c0()
    MOV dword ptr [ESP + 0x50],EAX      ; 004bfff8
    FLD float ptr [ESP + 0x50]          ; 004bfffc
    ADD ESP,0x4                         ; 004c0000
    FST float ptr [ESP + 0x48]          ; 004c0003
    FCOMP float ptr [0x005d8d62]        ; 004c0007 | DAT_005d8d62
    FNSTSW AX                           ; 004c000d
    SAHF                                ; 004c000f
    JC 0x004c0025                       ; 004c0010
        ;   XREF to: 004c0025 (CONDITIONAL_JUMP)  ; LAB_004c0025
    FLD float ptr [ESP + 0x48]          ; 004c0012
    FCOMP float ptr [0x005d8d66]        ; 004c0016 | DAT_005d8d66
    FNSTSW AX                           ; 004c001c
    SAHF                                ; 004c001e
    JBE 0x004bff81                      ; 004c001f
        ;   XREF to: 004bff81 (CONDITIONAL_JUMP)  ; LAB_004bff81
    MOV EAX,0x1                         ; 004c0025
        ;   Label: LAB_004c0025
    MOV ESP,EBP                         ; 004c002a
    POP EBP                             ; 004c002c
    POP EDI                             ; 004c002d
    POP ESI                             ; 004c002e
    POP EBX                             ; 004c002f
    RET                                 ; 004c0030

