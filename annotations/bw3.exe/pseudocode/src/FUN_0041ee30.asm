; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041ee30(float *param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[4]:
;   FUN_0041eed0 at 0041eee8
;   FUN_004201a0 at 00420210
;   FUN_00489600 at 004896c1
;   FUN_005114f0 at 00511b85
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0041ee30
        ;   Label: FUN_0041ee30
    SUB ESP,0xc                         ; 0041ee31
    MOV EDX,dword ptr [ESP + 0x14]      ; 0041ee34
    MOV ECX,ESI                         ; 0041ee38
    MOV ESI,dword ptr [ESP + 0x18]      ; 0041ee3a
    MOV EDI,ESP                         ; 0041ee3e
    MOVSD ES:EDI,ESI                    ; 0041ee40
    MOVSD ES:EDI,ESI                    ; 0041ee41
    MOVSD ES:EDI,ESI                    ; 0041ee42
    FLD float ptr [ESP]                 ; 0041ee43
    FCOMP float ptr [EDX]               ; 0041ee46
    FNSTSW AX                           ; 0041ee48
    SAHF                                ; 0041ee4a
    JC 0x0041eeb1                       ; 0041ee4b
        ;   XREF to: 0041eeb1 (CONDITIONAL_JUMP)  ; LAB_0041eeb1
    FLD float ptr [ESP]                 ; 0041ee4d
        ;   Label: LAB_0041ee4d
    FCOMP float ptr [EDX + 0xc]         ; 0041ee50
    FNSTSW AX                           ; 0041ee53
    SAHF                                ; 0041ee55
    JBE 0x0041ee5e                      ; 0041ee56
        ;   XREF to: 0041ee5e (CONDITIONAL_JUMP)  ; LAB_0041ee5e
    MOV EAX,dword ptr [EDX + 0xc]       ; 0041ee58
    MOV dword ptr [ESP],EAX             ; 0041ee5b
    FLD float ptr [ESP + 0x4]           ; 0041ee5e
        ;   Label: LAB_0041ee5e
    FCOMP float ptr [EDX + 0x4]         ; 0041ee62
    FNSTSW AX                           ; 0041ee65
    SAHF                                ; 0041ee67
    JNC 0x0041ee71                      ; 0041ee68
        ;   XREF to: 0041ee71 (CONDITIONAL_JUMP)  ; LAB_0041ee71
    MOV EAX,dword ptr [EDX + 0x4]       ; 0041ee6a
    MOV dword ptr [ESP + 0x4],EAX       ; 0041ee6d
    FLD float ptr [ESP + 0x4]           ; 0041ee71
        ;   Label: LAB_0041ee71
    FCOMP float ptr [EDX + 0x10]        ; 0041ee75
    FNSTSW AX                           ; 0041ee78
    SAHF                                ; 0041ee7a
    JBE 0x0041ee84                      ; 0041ee7b
        ;   XREF to: 0041ee84 (CONDITIONAL_JUMP)  ; LAB_0041ee84
    MOV EAX,dword ptr [EDX + 0x10]      ; 0041ee7d
    MOV dword ptr [ESP + 0x4],EAX       ; 0041ee80
    FLD float ptr [ESP + 0x8]           ; 0041ee84
        ;   Label: LAB_0041ee84
    FCOMP float ptr [EDX + 0x8]         ; 0041ee88
    FNSTSW AX                           ; 0041ee8b
    SAHF                                ; 0041ee8d
    JNC 0x0041ee97                      ; 0041ee8e
        ;   XREF to: 0041ee97 (CONDITIONAL_JUMP)  ; LAB_0041ee97
    MOV EAX,dword ptr [EDX + 0x8]       ; 0041ee90
    MOV dword ptr [ESP + 0x8],EAX       ; 0041ee93
    FLD float ptr [ESP + 0x8]           ; 0041ee97
        ;   Label: LAB_0041ee97
    FCOMP float ptr [EDX + 0x14]        ; 0041ee9b
    FNSTSW AX                           ; 0041ee9e
    SAHF                                ; 0041eea0
    JA 0x0041eeb8                       ; 0041eea1
        ;   XREF to: 0041eeb8 (CONDITIONAL_JUMP)  ; LAB_0041eeb8
    MOV ESI,ESP                         ; 0041eea3
    MOV EDI,ECX                         ; 0041eea5
    MOVSD ES:EDI,ESI                    ; 0041eea7
    MOVSD ES:EDI,ESI                    ; 0041eea8
    MOVSD ES:EDI,ESI                    ; 0041eea9
    MOV EAX,ECX                         ; 0041eeaa
    ADD ESP,0xc                         ; 0041eeac
    POP EDI                             ; 0041eeaf
    RET                                 ; 0041eeb0
    MOV EAX,dword ptr [EDX]             ; 0041eeb1
        ;   Label: LAB_0041eeb1
    MOV dword ptr [ESP],EAX             ; 0041eeb3
    JMP 0x0041ee4d                      ; 0041eeb6
        ;   XREF to: 0041ee4d (UNCONDITIONAL_JUMP)  ; LAB_0041ee4d
    MOV EAX,dword ptr [EDX + 0x14]      ; 0041eeb8
        ;   Label: LAB_0041eeb8
    MOV dword ptr [ESP + 0x8],EAX       ; 0041eebb
    MOV ESI,ESP                         ; 0041eebf
    MOV EDI,ECX                         ; 0041eec1
    MOVSD ES:EDI,ESI                    ; 0041eec3
    MOVSD ES:EDI,ESI                    ; 0041eec4
    MOVSD ES:EDI,ESI                    ; 0041eec5
    MOV EAX,ECX                         ; 0041eec6
    ADD ESP,0xc                         ; 0041eec8
    POP EDI                             ; 0041eecb
    RET                                 ; 0041eecc

