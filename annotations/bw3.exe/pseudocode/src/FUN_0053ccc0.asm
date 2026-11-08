; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0053ccc0(int param_1,float *param_2,float *param_3)
;
; Local Variables:
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
; XREF[16]:
;   FUN_00409f60 at 0040a6e7
;   FUN_00410490 at 004107ad
;   FUN_00424550 at 004247cb
;   FUN_00486d40 at 0048703e
;   FUN_0048b020 at 0048b274
;   FUN_004a2e20 at 004a2ed8
;   FUN_004ae850 at 004aea91
;   FUN_004c07b0 at 004c11fa
;   FUN_004d0fc0 at 004d11e0
;   FUN_004e1070 at 004e1f92
;   ... and 6 more
;
; Referenced Globals:
;   undefined4 DAT_0203b37c
;
; Called Functions:
;   FUN_00473cd0
;   FUN_0053d270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053ccc0
        ;   Label: FUN_0053ccc0
    PUSH ESI                            ; 0053ccc1
    PUSH EDI                            ; 0053ccc2
    PUSH EBP                            ; 0053ccc3
    SUB ESP,0x4c                        ; 0053ccc4
    MOV EBX,dword ptr [ESP + 0x60]      ; 0053ccc7
    MOV EBP,dword ptr [ESP + 0x64]      ; 0053cccb
    MOV ESI,dword ptr [ESP + 0x68]      ; 0053cccf
    LEA EAX,[EBX + 0x14d110]            ; 0053ccd3
    CMP EAX,EBP                         ; 0053ccd9
    JNZ 0x0053ce49                      ; 0053ccdb
        ;   XREF to: 0053ce49 (CONDITIONAL_JUMP)  ; LAB_0053ce49
    LEA EAX,[EBX + 0x14d11c]            ; 0053cce1
        ;   Label: LAB_0053cce1
    CMP EAX,ESI                         ; 0053cce7
    JZ 0x0053ccfb                       ; 0053cce9
        ;   XREF to: 0053ccfb (CONDITIONAL_JUMP)  ; LAB_0053ccfb
    MOV EDX,dword ptr [ESI]             ; 0053cceb
    MOV dword ptr [EAX],EDX             ; 0053cced
    MOV EDX,dword ptr [ESI + 0x4]       ; 0053ccef
    MOV dword ptr [EAX + 0x4],EDX       ; 0053ccf2
    MOV EDX,dword ptr [ESI + 0x8]       ; 0053ccf5
    MOV dword ptr [EAX + 0x8],EDX       ; 0053ccf8
    LEA EAX,[EBX + 0x15f6f0]            ; 0053ccfb
        ;   Label: LAB_0053ccfb
    PUSH EAX                            ; 0053cd01
    LEA EDI,[EBX + 0x15f6e4]            ; 0053cd02
    PUSH EDI                            ; 0053cd08
    PUSH ESI                            ; 0053cd09
    PUSH EBP                            ; 0053cd0a
    PUSH 0x203b37c                      ; 0053cd0b | DAT_0203b37c
    CALL FUN_00473cd0                   ; 0053cd10
        ;   XREF to: 00473cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00473cd0()
    MOV dword ptr [ESP + 0x5c],EAX      ; 0053cd15
    FLD float ptr [ESP + 0x5c]          ; 0053cd19
    LEA EAX,[EBX + 0x14d128]            ; 0053cd1d
    FSTP float ptr [EBX + 0x15f6e0]     ; 0053cd23
    ADD ESP,0x14                        ; 0053cd29
    CMP EAX,EDI                         ; 0053cd2c
    JZ 0x0053cd40                       ; 0053cd2e
        ;   XREF to: 0053cd40 (CONDITIONAL_JUMP)  ; LAB_0053cd40
    MOV EDX,dword ptr [EDI]             ; 0053cd30
    MOV dword ptr [EAX],EDX             ; 0053cd32
    MOV EDX,dword ptr [EDI + 0x4]       ; 0053cd34
    MOV dword ptr [EAX + 0x4],EDX       ; 0053cd37
    MOV EDX,dword ptr [EDI + 0x8]       ; 0053cd3a
    MOV dword ptr [EAX + 0x8],EDX       ; 0053cd3d
    FLD float ptr [EBX + 0x15f6e0]      ; 0053cd40
        ;   Label: LAB_0053cd40
    MOV EAX,dword ptr [EBX + 0x15f6f0]  ; 0053cd46
    FLDZ                                ; 0053cd4c
    MOV dword ptr [EBX + 0x14d134],EAX  ; 0053cd4e
    FCOMPP                              ; 0053cd54
    FNSTSW AX                           ; 0053cd56
    SAHF                                ; 0053cd58
    JBE 0x0053cd65                      ; 0053cd59
        ;   XREF to: 0053cd65 (CONDITIONAL_JUMP)  ; LAB_0053cd65
    MOV dword ptr [EBX + 0x15f6e0],0x3f8147ae ; 0053cd5b
    PUSH dword ptr [EBX + 0x15f6e0]     ; 0053cd65
        ;   Label: LAB_0053cd65
    PUSH ESI                            ; 0053cd6b
    PUSH EBP                            ; 0053cd6c
    PUSH 0xbf800000                     ; 0053cd6d
    PUSH EBX                            ; 0053cd72
    CALL FUN_0053d270                   ; 0053cd73
        ;   XREF to: 0053d270 (UNCONDITIONAL_CALL)  ; undefined FUN_0053d270()
    MOV dword ptr [ESP + 0x5c],EAX      ; 0053cd78
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0053cd7c
    MOV dword ptr [EBX + 0x15f6dc],EAX  ; 0053cd80
    ADD ESP,0x14                        ; 0053cd86
    FLD float ptr [EBX + 0x15f6dc]      ; 0053cd89
    FLD1                                ; 0053cd8f
    FCOMPP                              ; 0053cd91
    FNSTSW AX                           ; 0053cd93
    SAHF                                ; 0053cd95
    JC 0x0053ce3b                       ; 0053cd96
        ;   XREF to: 0053ce3b (CONDITIONAL_JUMP)  ; LAB_0053ce3b
    FLD float ptr [ESI + 0x4]           ; 0053cd9c
    FLD float ptr [ESI + 0x8]           ; 0053cd9f
    FLD float ptr [ESI]                 ; 0053cda2
    LEA EDI,[ESP + 0x24]                ; 0053cda4
    LEA ESI,[ESP + 0x30]                ; 0053cda8
    FSUB float ptr [EBP]                ; 0053cdac
    FXCH ST2                            ; 0053cdaf
    FSUB float ptr [EBP + 0x4]          ; 0053cdb1
    FXCH                                ; 0053cdb4
    FSUB float ptr [EBP + 0x8]          ; 0053cdb6
    FXCH ST2                            ; 0053cdb9
    FSTP float ptr [ESP + 0x30]         ; 0053cdbb
    FSTP float ptr [ESP + 0x34]         ; 0053cdbf
    FSTP float ptr [ESP + 0x38]         ; 0053cdc3
    MOVSD ES:EDI,ESI                    ; 0053cdc7
    MOVSD ES:EDI,ESI                    ; 0053cdc8
    MOVSD ES:EDI,ESI                    ; 0053cdc9
    LEA EAX,[EBX + 0x15f6dc]            ; 0053cdca
    FLD float ptr [ESP + 0x24]          ; 0053cdd0
    FMUL float ptr [EAX]                ; 0053cdd4
    FLD float ptr [ESP + 0x28]          ; 0053cdd6
    FMUL float ptr [EAX]                ; 0053cdda
    FLD float ptr [ESP + 0x2c]          ; 0053cddc
    FMUL float ptr [EAX]                ; 0053cde0
    LEA EDI,[ESP + 0xc]                 ; 0053cde2
    LEA ESI,[ESP + 0x3c]                ; 0053cde6
    FXCH ST2                            ; 0053cdea
    FSTP float ptr [ESP + 0x3c]         ; 0053cdec
    FSTP float ptr [ESP + 0x40]         ; 0053cdf0
    FSTP float ptr [ESP + 0x44]         ; 0053cdf4
    MOVSD ES:EDI,ESI                    ; 0053cdf8
    MOVSD ES:EDI,ESI                    ; 0053cdf9
    MOVSD ES:EDI,ESI                    ; 0053cdfa
    FLD float ptr [EBP]                 ; 0053cdfb
    FLD float ptr [EBP + 0x4]           ; 0053cdfe
    FLD float ptr [EBP + 0x8]           ; 0053ce01
    MOV EDI,ESP                         ; 0053ce04
    LEA ESI,[ESP + 0x18]                ; 0053ce06
    FXCH ST2                            ; 0053ce0a
    FADD float ptr [ESP + 0xc]          ; 0053ce0c
    FXCH                                ; 0053ce10
    FADD float ptr [ESP + 0x10]         ; 0053ce12
    FXCH ST2                            ; 0053ce16
    FADD float ptr [ESP + 0x14]         ; 0053ce18
    FXCH                                ; 0053ce1c
    FSTP float ptr [ESP + 0x18]         ; 0053ce1e
    FXCH                                ; 0053ce22
    FSTP float ptr [ESP + 0x1c]         ; 0053ce24
    FSTP float ptr [ESP + 0x20]         ; 0053ce28
    MOVSD ES:EDI,ESI                    ; 0053ce2c
    MOVSD ES:EDI,ESI                    ; 0053ce2d
    MOVSD ES:EDI,ESI                    ; 0053ce2e
    MOV EAX,ESP                         ; 0053ce2f
    LEA ESI,[EBX + 0x14d138]            ; 0053ce31
    CMP ESI,EAX                         ; 0053ce37
    JNZ 0x0053ce5f                      ; 0053ce39
        ;   XREF to: 0053ce5f (CONDITIONAL_JUMP)  ; LAB_0053ce5f
    MOV EAX,dword ptr [EBX + 0x15f6dc]  ; 0053ce3b
        ;   Label: LAB_0053ce3b
    ADD ESP,0x4c                        ; 0053ce41
    POP EBP                             ; 0053ce44
    POP EDI                             ; 0053ce45
    POP ESI                             ; 0053ce46
    POP EBX                             ; 0053ce47
    RET                                 ; 0053ce48
    MOV EDX,dword ptr [EBP]             ; 0053ce49
        ;   Label: LAB_0053ce49
    MOV dword ptr [EAX],EDX             ; 0053ce4c
    MOV EDX,dword ptr [EBP + 0x4]       ; 0053ce4e
    MOV dword ptr [EAX + 0x4],EDX       ; 0053ce51
    MOV EDX,dword ptr [EBP + 0x8]       ; 0053ce54
    MOV dword ptr [EAX + 0x8],EDX       ; 0053ce57
    JMP 0x0053cce1                      ; 0053ce5a
        ;   XREF to: 0053cce1 (UNCONDITIONAL_JUMP)  ; LAB_0053cce1
    MOV EAX,dword ptr [ESP]             ; 0053ce5f
        ;   Label: LAB_0053ce5f
    MOV dword ptr [ESI],EAX             ; 0053ce62
    MOV EAX,dword ptr [ESP + 0x4]       ; 0053ce64
    MOV dword ptr [ESI + 0x4],EAX       ; 0053ce68
    MOV EAX,dword ptr [ESP + 0x8]       ; 0053ce6b
    MOV dword ptr [ESI + 0x8],EAX       ; 0053ce6f
    MOV EAX,dword ptr [EBX + 0x15f6dc]  ; 0053ce72
    ADD ESP,0x4c                        ; 0053ce78
    POP EBP                             ; 0053ce7b
    POP EDI                             ; 0053ce7c
    POP ESI                             ; 0053ce7d
    POP EBX                             ; 0053ce7e
    RET                                 ; 0053ce7f

