; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_00409db0(CDemonActor *this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_bodypart.cpp_CBodyPart_getAllowedMeleeAttackTypes_FUN_00416b60 at 00416b71
;
; Referenced Globals:
;   undefined4 DAT_005b5601
;   undefined4 DAT_005b5609
;   undefined4 DAT_005b5611
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00409db0
        ;   Label: core_actor.cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_00409db0
    PUSH ESI                            ; 00409db1
    PUSH EDI                            ; 00409db2
    PUSH EBP                            ; 00409db3
    MOV EBP,ESP                         ; 00409db4
    SUB ESP,0x70                        ; 00409db6
    AND ESP,0xfffffff8                  ; 00409db9
    MOV ESI,dword ptr [EBP + 0x14]      ; 00409dbc
    PUSH ESI                            ; 00409dbf
    MOV EAX,dword ptr [ESI + 0x154]     ; 00409dc0
    LEA ESI,[ESP + 0x2c]                ; 00409dc6
    LEA EDI,[ESP + 0x44]                ; 00409dca
    CALL dword ptr [EAX + 0x1c]         ; 00409dce
    MOV ECX,0x6                         ; 00409dd1
    LEA ESI,[ESP + 0x2c]                ; 00409dd6
    ADD ESP,0x4                         ; 00409dda
    LEA EAX,[ESP + 0x40]                ; 00409ddd
    MOVSD.REP ES:EDI,ESI                ; 00409de1
    FLD float ptr [EAX + 0xc]           ; 00409de3
    FLD float ptr [EAX + 0x10]          ; 00409de6
    FLD float ptr [EAX + 0x14]          ; 00409de9
    LEA EDI,[ESP + 0x64]                ; 00409dec
    LEA ESI,[ESP + 0x58]                ; 00409df0
    FXCH ST2                            ; 00409df4
    FSUB float ptr [ESP + 0x40]         ; 00409df6
    FXCH                                ; 00409dfa
    FSUB float ptr [ESP + 0x44]         ; 00409dfc
    FXCH ST2                            ; 00409e00
    FSUB float ptr [ESP + 0x48]         ; 00409e02
    FXCH                                ; 00409e06
    FSTP float ptr [ESP + 0x58]         ; 00409e08
    FXCH                                ; 00409e0c
    FSTP float ptr [ESP + 0x5c]         ; 00409e0e
    FSTP float ptr [ESP + 0x60]         ; 00409e12
    MOVSD ES:EDI,ESI                    ; 00409e16
    MOVSD ES:EDI,ESI                    ; 00409e17
    MOVSD ES:EDI,ESI                    ; 00409e18
    XOR EBX,EBX                         ; 00409e19
    FLD float ptr [ESP + 0x64]          ; 00409e1b
    FST double ptr [ESP + 0x18]         ; 00409e1f
    FCOMP double ptr [0x005b5601]       ; 00409e23 | DAT_005b5601
    FNSTSW AX                           ; 00409e29
    SAHF                                ; 00409e2b
    JC 0x00409eed                       ; 00409e2c
        ;   XREF to: 00409eed (CONDITIONAL_JUMP)  ; LAB_00409eed
    FLD float ptr [ESP + 0x64]          ; 00409e32
        ;   Label: LAB_00409e32
    FLD1                                ; 00409e36
    FCOMPP                              ; 00409e38
    FNSTSW AX                           ; 00409e3a
    SAHF                                ; 00409e3c
    JBE 0x00409e89                      ; 00409e3d
        ;   XREF to: 00409e89 (CONDITIONAL_JUMP)  ; LAB_00409e89
    FLD float ptr [ESP + 0x68]          ; 00409e3f
    FLD1                                ; 00409e43
    FCOMPP                              ; 00409e45
    FNSTSW AX                           ; 00409e47
    SAHF                                ; 00409e49
    JBE 0x00409e89                      ; 00409e4a
        ;   XREF to: 00409e89 (CONDITIONAL_JUMP)  ; LAB_00409e89
    FLD float ptr [ESP + 0x6c]          ; 00409e4c
    FST double ptr [ESP]                ; 00409e50
    FCOMP double ptr [0x005b5601]       ; 00409e53 | DAT_005b5601
    FNSTSW AX                           ; 00409e59
    SAHF                                ; 00409e5b
    JBE 0x00409e89                      ; 00409e5c
        ;   XREF to: 00409e89 (CONDITIONAL_JUMP)  ; LAB_00409e89
    FLD double ptr [ESP]                ; 00409e5e
    FCOMP double ptr [0x005b5611]       ; 00409e61 | DAT_005b5611
    FNSTSW AX                           ; 00409e67
    SAHF                                ; 00409e69
    JNC 0x00409e89                      ; 00409e6a
        ;   XREF to: 00409e89 (CONDITIONAL_JUMP)  ; LAB_00409e89
    FLD float ptr [ESP + 0x6c]          ; 00409e6c
    FCOMP float ptr [ESP + 0x64]        ; 00409e70
    FNSTSW AX                           ; 00409e74
    SAHF                                ; 00409e76
    JBE 0x00409e89                      ; 00409e77
        ;   XREF to: 00409e89 (CONDITIONAL_JUMP)  ; LAB_00409e89
    FLD float ptr [ESP + 0x6c]          ; 00409e79
    FCOMP float ptr [ESP + 0x68]        ; 00409e7d
    FNSTSW AX                           ; 00409e81
    SAHF                                ; 00409e83
    JBE 0x00409e89                      ; 00409e84
        ;   XREF to: 00409e89 (CONDITIONAL_JUMP)  ; LAB_00409e89
    OR BL,0x2                           ; 00409e86
    FLD float ptr [ESP + 0x64]          ; 00409e89
        ;   Label: LAB_00409e89
    FLD1                                ; 00409e8d
    FCOMPP                              ; 00409e8f
    FNSTSW AX                           ; 00409e91
    SAHF                                ; 00409e93
    JBE 0x00409ee4                      ; 00409e94
        ;   XREF to: 00409ee4 (CONDITIONAL_JUMP)  ; LAB_00409ee4
    FLD float ptr [ESP + 0x68]          ; 00409e96
    FLD1                                ; 00409e9a
    FCOMPP                              ; 00409e9c
    FNSTSW AX                           ; 00409e9e
    SAHF                                ; 00409ea0
    JBE 0x00409ee4                      ; 00409ea1
        ;   XREF to: 00409ee4 (CONDITIONAL_JUMP)  ; LAB_00409ee4
    FLD float ptr [ESP + 0x6c]          ; 00409ea3
    FLD1                                ; 00409ea7
    FXCH                                ; 00409ea9
    FSTP double ptr [ESP + 0x8]         ; 00409eab
    FCOMP double ptr [ESP + 0x8]        ; 00409eaf
    FNSTSW AX                           ; 00409eb3
    SAHF                                ; 00409eb5
    JNC 0x00409ee4                      ; 00409eb6
        ;   XREF to: 00409ee4 (CONDITIONAL_JUMP)  ; LAB_00409ee4
    FLD double ptr [ESP + 0x8]          ; 00409eb8
    FCOMP double ptr [0x005b5601]       ; 00409ebc | DAT_005b5601
    FNSTSW AX                           ; 00409ec2
    SAHF                                ; 00409ec4
    JNC 0x00409ee4                      ; 00409ec5
        ;   XREF to: 00409ee4 (CONDITIONAL_JUMP)  ; LAB_00409ee4
    FLD float ptr [ESP + 0x6c]          ; 00409ec7
    FCOMP float ptr [ESP + 0x64]        ; 00409ecb
    FNSTSW AX                           ; 00409ecf
    SAHF                                ; 00409ed1
    JBE 0x00409ee4                      ; 00409ed2
        ;   XREF to: 00409ee4 (CONDITIONAL_JUMP)  ; LAB_00409ee4
    FLD float ptr [ESP + 0x6c]          ; 00409ed4
    FCOMP float ptr [ESP + 0x68]        ; 00409ed8
    FNSTSW AX                           ; 00409edc
    SAHF                                ; 00409ede
    JBE 0x00409ee4                      ; 00409edf
        ;   XREF to: 00409ee4 (CONDITIONAL_JUMP)  ; LAB_00409ee4
    OR BL,0x4                           ; 00409ee1
    MOV EAX,EBX                         ; 00409ee4
        ;   Label: LAB_00409ee4
    MOV ESP,EBP                         ; 00409ee6
    POP EBP                             ; 00409ee8
    POP EDI                             ; 00409ee9
    POP ESI                             ; 00409eea
    POP EBX                             ; 00409eeb
    RET                                 ; 00409eec
    FLD float ptr [ESP + 0x68]          ; 00409eed
        ;   Label: LAB_00409eed
    FST double ptr [ESP + 0x20]         ; 00409ef1
    FCOMP double ptr [0x005b5601]       ; 00409ef5 | DAT_005b5601
    FNSTSW AX                           ; 00409efb
    SAHF                                ; 00409efd
    JNC 0x00409e32                      ; 00409efe
        ;   XREF to: 00409e32 (CONDITIONAL_JUMP)  ; LAB_00409e32
    FLD float ptr [ESP + 0x6c]          ; 00409f04
    FST double ptr [ESP + 0x10]         ; 00409f08
    FCOMP double ptr [0x005b5601]       ; 00409f0c | DAT_005b5601
    FNSTSW AX                           ; 00409f12
    SAHF                                ; 00409f14
    JNC 0x00409e32                      ; 00409f15
        ;   XREF to: 00409e32 (CONDITIONAL_JUMP)  ; LAB_00409e32
    FLD double ptr [ESP + 0x18]         ; 00409f1b
    FCOMP double ptr [0x005b5609]       ; 00409f1f | DAT_005b5609
    FNSTSW AX                           ; 00409f25
    SAHF                                ; 00409f27
    JBE 0x00409e32                      ; 00409f28
        ;   XREF to: 00409e32 (CONDITIONAL_JUMP)  ; LAB_00409e32
    FLD double ptr [ESP + 0x20]         ; 00409f2e
    FCOMP double ptr [0x005b5609]       ; 00409f32 | DAT_005b5609
    FNSTSW AX                           ; 00409f38
    SAHF                                ; 00409f3a
    JBE 0x00409e32                      ; 00409f3b
        ;   XREF to: 00409e32 (CONDITIONAL_JUMP)  ; LAB_00409e32
    FLD double ptr [ESP + 0x10]         ; 00409f41
    FCOMP double ptr [0x005b5609]       ; 00409f45 | DAT_005b5609
    FNSTSW AX                           ; 00409f4b
    SAHF                                ; 00409f4d
    JBE 0x00409e32                      ; 00409f4e
        ;   XREF to: 00409e32 (CONDITIONAL_JUMP)  ; LAB_00409e32
    MOV EBX,0x4                         ; 00409f54
    JMP 0x00409e32                      ; 00409f59
        ;   XREF to: 00409e32 (UNCONDITIONAL_JUMP)  ; LAB_00409e32

