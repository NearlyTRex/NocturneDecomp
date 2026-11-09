; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_box_cpp_FUN_00421af0(float *param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[4]:
;   core_box.cpp_FUN_00421b90 at 00421ba8
;   core_boxactor.cpp_FUN_00422d10 at 00422d80
;   core_enemy.cpp_FUN_004a0980 at 004a0a41
;   core_platfrm.cpp_FUN_00539810 at 00539ea5
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00421af0
        ;   Label: core_box.cpp_FUN_00421af0
    SUB ESP,0xc                         ; 00421af1
    MOV EDX,dword ptr [ESP + 0x14]      ; 00421af4
    MOV ECX,ESI                         ; 00421af8
    MOV ESI,dword ptr [ESP + 0x18]      ; 00421afa
    MOV EDI,ESP                         ; 00421afe
    MOVSD ES:EDI,ESI                    ; 00421b00
    MOVSD ES:EDI,ESI                    ; 00421b01
    MOVSD ES:EDI,ESI                    ; 00421b02
    FLD float ptr [ESP]                 ; 00421b03
    FCOMP float ptr [EDX]               ; 00421b06
    FNSTSW AX                           ; 00421b08
    SAHF                                ; 00421b0a
    JC 0x00421b71                       ; 00421b0b
        ;   XREF to: 00421b71 (CONDITIONAL_JUMP)  ; LAB_00421b71
    FLD float ptr [ESP]                 ; 00421b0d
        ;   Label: LAB_00421b0d
    FCOMP float ptr [EDX + 0xc]         ; 00421b10
    FNSTSW AX                           ; 00421b13
    SAHF                                ; 00421b15
    JBE 0x00421b1e                      ; 00421b16
        ;   XREF to: 00421b1e (CONDITIONAL_JUMP)  ; LAB_00421b1e
    MOV EAX,dword ptr [EDX + 0xc]       ; 00421b18
    MOV dword ptr [ESP],EAX             ; 00421b1b
    FLD float ptr [ESP + 0x4]           ; 00421b1e
        ;   Label: LAB_00421b1e
    FCOMP float ptr [EDX + 0x4]         ; 00421b22
    FNSTSW AX                           ; 00421b25
    SAHF                                ; 00421b27
    JNC 0x00421b31                      ; 00421b28
        ;   XREF to: 00421b31 (CONDITIONAL_JUMP)  ; LAB_00421b31
    MOV EAX,dword ptr [EDX + 0x4]       ; 00421b2a
    MOV dword ptr [ESP + 0x4],EAX       ; 00421b2d
    FLD float ptr [ESP + 0x4]           ; 00421b31
        ;   Label: LAB_00421b31
    FCOMP float ptr [EDX + 0x10]        ; 00421b35
    FNSTSW AX                           ; 00421b38
    SAHF                                ; 00421b3a
    JBE 0x00421b44                      ; 00421b3b
        ;   XREF to: 00421b44 (CONDITIONAL_JUMP)  ; LAB_00421b44
    MOV EAX,dword ptr [EDX + 0x10]      ; 00421b3d
    MOV dword ptr [ESP + 0x4],EAX       ; 00421b40
    FLD float ptr [ESP + 0x8]           ; 00421b44
        ;   Label: LAB_00421b44
    FCOMP float ptr [EDX + 0x8]         ; 00421b48
    FNSTSW AX                           ; 00421b4b
    SAHF                                ; 00421b4d
    JNC 0x00421b57                      ; 00421b4e
        ;   XREF to: 00421b57 (CONDITIONAL_JUMP)  ; LAB_00421b57
    MOV EAX,dword ptr [EDX + 0x8]       ; 00421b50
    MOV dword ptr [ESP + 0x8],EAX       ; 00421b53
    FLD float ptr [ESP + 0x8]           ; 00421b57
        ;   Label: LAB_00421b57
    FCOMP float ptr [EDX + 0x14]        ; 00421b5b
    FNSTSW AX                           ; 00421b5e
    SAHF                                ; 00421b60
    JA 0x00421b78                       ; 00421b61
        ;   XREF to: 00421b78 (CONDITIONAL_JUMP)  ; LAB_00421b78
    MOV ESI,ESP                         ; 00421b63
    MOV EDI,ECX                         ; 00421b65
    MOVSD ES:EDI,ESI                    ; 00421b67
    MOVSD ES:EDI,ESI                    ; 00421b68
    MOVSD ES:EDI,ESI                    ; 00421b69
    MOV EAX,ECX                         ; 00421b6a
    ADD ESP,0xc                         ; 00421b6c
    POP EDI                             ; 00421b6f
    RET                                 ; 00421b70
    MOV EAX,dword ptr [EDX]             ; 00421b71
        ;   Label: LAB_00421b71
    MOV dword ptr [ESP],EAX             ; 00421b73
    JMP 0x00421b0d                      ; 00421b76
        ;   XREF to: 00421b0d (UNCONDITIONAL_JUMP)  ; LAB_00421b0d
    MOV EAX,dword ptr [EDX + 0x14]      ; 00421b78
        ;   Label: LAB_00421b78
    MOV dword ptr [ESP + 0x8],EAX       ; 00421b7b
    MOV ESI,ESP                         ; 00421b7f
    MOV EDI,ECX                         ; 00421b81
    MOVSD ES:EDI,ESI                    ; 00421b83
    MOVSD ES:EDI,ESI                    ; 00421b84
    MOVSD ES:EDI,ESI                    ; 00421b85
    MOV EAX,ECX                         ; 00421b86
    ADD ESP,0xc                         ; 00421b88
    POP EDI                             ; 00421b8b
    RET                                 ; 00421b8c

