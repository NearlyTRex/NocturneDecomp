; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_box_cpp_FUN_0041bb80(float *param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[4]:
;   core_box.cpp_FUN_0041bc20 at 0041bc38
;   core_boxactor.cpp_FUN_0041cda0 at 0041ce10
;   core_enemy.cpp_FUN_00488320 at 004883e1
;   core_platfrm.cpp_CPlatform_process_FUN_005184c0 at 00518b55
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0041bb80
        ;   Label: core_box.cpp_FUN_0041bb80
    SUB ESP,0xc                         ; 0041bb81
    MOV EDX,dword ptr [ESP + 0x14]      ; 0041bb84
    MOV ECX,ESI                         ; 0041bb88
    MOV ESI,dword ptr [ESP + 0x18]      ; 0041bb8a
    MOV EDI,ESP                         ; 0041bb8e
    MOVSD ES:EDI,ESI                    ; 0041bb90
    MOVSD ES:EDI,ESI                    ; 0041bb91
    MOVSD ES:EDI,ESI                    ; 0041bb92
    FLD float ptr [ESP]                 ; 0041bb93
    FCOMP float ptr [EDX]               ; 0041bb96
    FNSTSW AX                           ; 0041bb98
    SAHF                                ; 0041bb9a
    JC 0x0041bc01                       ; 0041bb9b
        ;   XREF to: 0041bc01 (CONDITIONAL_JUMP)  ; LAB_0041bc01
    FLD float ptr [ESP]                 ; 0041bb9d
        ;   Label: LAB_0041bb9d
    FCOMP float ptr [EDX + 0xc]         ; 0041bba0
    FNSTSW AX                           ; 0041bba3
    SAHF                                ; 0041bba5
    JBE 0x0041bbae                      ; 0041bba6
        ;   XREF to: 0041bbae (CONDITIONAL_JUMP)  ; LAB_0041bbae
    MOV EAX,dword ptr [EDX + 0xc]       ; 0041bba8
    MOV dword ptr [ESP],EAX             ; 0041bbab
    FLD float ptr [ESP + 0x4]           ; 0041bbae
        ;   Label: LAB_0041bbae
    FCOMP float ptr [EDX + 0x4]         ; 0041bbb2
    FNSTSW AX                           ; 0041bbb5
    SAHF                                ; 0041bbb7
    JNC 0x0041bbc1                      ; 0041bbb8
        ;   XREF to: 0041bbc1 (CONDITIONAL_JUMP)  ; LAB_0041bbc1
    MOV EAX,dword ptr [EDX + 0x4]       ; 0041bbba
    MOV dword ptr [ESP + 0x4],EAX       ; 0041bbbd
    FLD float ptr [ESP + 0x4]           ; 0041bbc1
        ;   Label: LAB_0041bbc1
    FCOMP float ptr [EDX + 0x10]        ; 0041bbc5
    FNSTSW AX                           ; 0041bbc8
    SAHF                                ; 0041bbca
    JBE 0x0041bbd4                      ; 0041bbcb
        ;   XREF to: 0041bbd4 (CONDITIONAL_JUMP)  ; LAB_0041bbd4
    MOV EAX,dword ptr [EDX + 0x10]      ; 0041bbcd
    MOV dword ptr [ESP + 0x4],EAX       ; 0041bbd0
    FLD float ptr [ESP + 0x8]           ; 0041bbd4
        ;   Label: LAB_0041bbd4
    FCOMP float ptr [EDX + 0x8]         ; 0041bbd8
    FNSTSW AX                           ; 0041bbdb
    SAHF                                ; 0041bbdd
    JNC 0x0041bbe7                      ; 0041bbde
        ;   XREF to: 0041bbe7 (CONDITIONAL_JUMP)  ; LAB_0041bbe7
    MOV EAX,dword ptr [EDX + 0x8]       ; 0041bbe0
    MOV dword ptr [ESP + 0x8],EAX       ; 0041bbe3
    FLD float ptr [ESP + 0x8]           ; 0041bbe7
        ;   Label: LAB_0041bbe7
    FCOMP float ptr [EDX + 0x14]        ; 0041bbeb
    FNSTSW AX                           ; 0041bbee
    SAHF                                ; 0041bbf0
    JA 0x0041bc08                       ; 0041bbf1
        ;   XREF to: 0041bc08 (CONDITIONAL_JUMP)  ; LAB_0041bc08
    MOV ESI,ESP                         ; 0041bbf3
    MOV EDI,ECX                         ; 0041bbf5
    MOVSD ES:EDI,ESI                    ; 0041bbf7
    MOVSD ES:EDI,ESI                    ; 0041bbf8
    MOVSD ES:EDI,ESI                    ; 0041bbf9
    MOV EAX,ECX                         ; 0041bbfa
    ADD ESP,0xc                         ; 0041bbfc
    POP EDI                             ; 0041bbff
    RET                                 ; 0041bc00
    MOV EAX,dword ptr [EDX]             ; 0041bc01
        ;   Label: LAB_0041bc01
    MOV dword ptr [ESP],EAX             ; 0041bc03
    JMP 0x0041bb9d                      ; 0041bc06
        ;   XREF to: 0041bb9d (UNCONDITIONAL_JUMP)  ; LAB_0041bb9d
    MOV EAX,dword ptr [EDX + 0x14]      ; 0041bc08
        ;   Label: LAB_0041bc08
    MOV dword ptr [ESP + 0x8],EAX       ; 0041bc0b
    MOV ESI,ESP                         ; 0041bc0f
    MOV EDI,ECX                         ; 0041bc11
    MOVSD ES:EDI,ESI                    ; 0041bc13
    MOVSD ES:EDI,ESI                    ; 0041bc14
    MOVSD ES:EDI,ESI                    ; 0041bc15
    MOV EAX,ECX                         ; 0041bc16
    ADD ESP,0xc                         ; 0041bc18
    POP EDI                             ; 0041bc1b
    RET                                 ; 0041bc1c

