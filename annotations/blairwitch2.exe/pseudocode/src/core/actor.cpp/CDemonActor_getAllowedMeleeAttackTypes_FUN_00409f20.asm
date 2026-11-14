; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_00409f20(CDemonActor *this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_bodypart.cpp_CBodyPart_getAllowedMeleeAttackTypes_FUN_00417ab0 at 00417ac1
;
; Referenced Globals:
;   undefined4 DAT_005ca66e
;   undefined4 DAT_005ca676
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00409f20
        ;   Label: core_actor.cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_00409f20
    PUSH ESI                            ; 00409f21
    PUSH EDI                            ; 00409f22
    PUSH EBP                            ; 00409f23
    MOV EBP,ESP                         ; 00409f24
    SUB ESP,0x58                        ; 00409f26
    AND ESP,0xfffffff8                  ; 00409f29
    MOV ESI,dword ptr [EBP + 0x14]      ; 00409f2c
    PUSH ESI                            ; 00409f2f
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 00409f30
    LEA ESI,[ESP + 0x2c]                ; 00409f36
    LEA EDI,[ESP + 0x14]                ; 00409f3a
    CALL dword ptr [EAX + 0x24]         ; 00409f3e
    MOV ECX,0x6                         ; 00409f41
    LEA ESI,[ESP + 0x2c]                ; 00409f46
    ADD ESP,0x4                         ; 00409f4a
    LEA EAX,[ESP + 0x10]                ; 00409f4d
    MOVSD.REP ES:EDI,ESI                ; 00409f51
    FLD float ptr [EAX + 0xc]           ; 00409f53
    FLD float ptr [EAX + 0x10]          ; 00409f56
    FLD float ptr [EAX + 0x14]          ; 00409f59
    LEA EDI,[ESP + 0x4c]                ; 00409f5c
    LEA ESI,[ESP + 0x40]                ; 00409f60
    FXCH ST2                            ; 00409f64
    FSUB float ptr [ESP + 0x10]         ; 00409f66
    FXCH                                ; 00409f6a
    FSUB float ptr [ESP + 0x14]         ; 00409f6c
    FXCH ST2                            ; 00409f70
    FSUB float ptr [ESP + 0x18]         ; 00409f72
    FXCH                                ; 00409f76
    FSTP float ptr [ESP + 0x40]         ; 00409f78
    FXCH                                ; 00409f7c
    FSTP float ptr [ESP + 0x44]         ; 00409f7e
    FSTP float ptr [ESP + 0x48]         ; 00409f82
    MOVSD ES:EDI,ESI                    ; 00409f86
    MOVSD ES:EDI,ESI                    ; 00409f87
    MOVSD ES:EDI,ESI                    ; 00409f88
    XOR EBX,EBX                         ; 00409f89
    FLD float ptr [ESP + 0x4c]          ; 00409f8b
    FLD1                                ; 00409f8f
    FCOMPP                              ; 00409f91
    FNSTSW AX                           ; 00409f93
    SAHF                                ; 00409f95
    JBE 0x00409fe6                      ; 00409f96
        ;   XREF to: 00409fe6 (CONDITIONAL_JUMP)  ; LAB_00409fe6
    FLD float ptr [ESP + 0x50]          ; 00409f98
    FLD1                                ; 00409f9c
    FCOMPP                              ; 00409f9e
    FNSTSW AX                           ; 00409fa0
    SAHF                                ; 00409fa2
    JBE 0x00409fe6                      ; 00409fa3
        ;   XREF to: 00409fe6 (CONDITIONAL_JUMP)  ; LAB_00409fe6
    FLD float ptr [ESP + 0x54]          ; 00409fa5
    FST double ptr [ESP + 0x8]          ; 00409fa9
    FCOMP double ptr [0x005ca66e]       ; 00409fad | DAT_005ca66e
    FNSTSW AX                           ; 00409fb3
    SAHF                                ; 00409fb5
    JBE 0x00409fe6                      ; 00409fb6
        ;   XREF to: 00409fe6 (CONDITIONAL_JUMP)  ; LAB_00409fe6
    FLD double ptr [ESP + 0x8]          ; 00409fb8
    FCOMP double ptr [0x005ca676]       ; 00409fbc | DAT_005ca676
    FNSTSW AX                           ; 00409fc2
    SAHF                                ; 00409fc4
    JNC 0x00409fe6                      ; 00409fc5
        ;   XREF to: 00409fe6 (CONDITIONAL_JUMP)  ; LAB_00409fe6
    FLD float ptr [ESP + 0x54]          ; 00409fc7
    FCOMP float ptr [ESP + 0x4c]        ; 00409fcb
    FNSTSW AX                           ; 00409fcf
    SAHF                                ; 00409fd1
    JBE 0x00409fe6                      ; 00409fd2
        ;   XREF to: 00409fe6 (CONDITIONAL_JUMP)  ; LAB_00409fe6
    FLD float ptr [ESP + 0x54]          ; 00409fd4
    FCOMP float ptr [ESP + 0x50]        ; 00409fd8
    FNSTSW AX                           ; 00409fdc
    SAHF                                ; 00409fde
    JBE 0x00409fe6                      ; 00409fdf
        ;   XREF to: 00409fe6 (CONDITIONAL_JUMP)  ; LAB_00409fe6
    MOV EBX,0x2                         ; 00409fe1
    FLD float ptr [ESP + 0x4c]          ; 00409fe6
        ;   Label: LAB_00409fe6
    FLD1                                ; 00409fea
    FCOMPP                              ; 00409fec
    FNSTSW AX                           ; 00409fee
    SAHF                                ; 00409ff0
    JBE 0x0040a03e                      ; 00409ff1
        ;   XREF to: 0040a03e (CONDITIONAL_JUMP)  ; LAB_0040a03e
    FLD float ptr [ESP + 0x50]          ; 00409ff3
    FLD1                                ; 00409ff7
    FCOMPP                              ; 00409ff9
    FNSTSW AX                           ; 00409ffb
    SAHF                                ; 00409ffd
    JBE 0x0040a03e                      ; 00409ffe
        ;   XREF to: 0040a03e (CONDITIONAL_JUMP)  ; LAB_0040a03e
    FLD float ptr [ESP + 0x54]          ; 0040a000
    FLD1                                ; 0040a004
    FXCH                                ; 0040a006
    FSTP double ptr [ESP]               ; 0040a008
    FCOMP double ptr [ESP]              ; 0040a00b
    FNSTSW AX                           ; 0040a00e
    SAHF                                ; 0040a010
    JNC 0x0040a03e                      ; 0040a011
        ;   XREF to: 0040a03e (CONDITIONAL_JUMP)  ; LAB_0040a03e
    FLD double ptr [ESP]                ; 0040a013
    FCOMP double ptr [0x005ca66e]       ; 0040a016 | DAT_005ca66e
    FNSTSW AX                           ; 0040a01c
    SAHF                                ; 0040a01e
    JNC 0x0040a03e                      ; 0040a01f
        ;   XREF to: 0040a03e (CONDITIONAL_JUMP)  ; LAB_0040a03e
    FLD float ptr [ESP + 0x54]          ; 0040a021
    FCOMP float ptr [ESP + 0x4c]        ; 0040a025
    FNSTSW AX                           ; 0040a029
    SAHF                                ; 0040a02b
    JBE 0x0040a03e                      ; 0040a02c
        ;   XREF to: 0040a03e (CONDITIONAL_JUMP)  ; LAB_0040a03e
    FLD float ptr [ESP + 0x54]          ; 0040a02e
    FCOMP float ptr [ESP + 0x50]        ; 0040a032
    FNSTSW AX                           ; 0040a036
    SAHF                                ; 0040a038
    JBE 0x0040a03e                      ; 0040a039
        ;   XREF to: 0040a03e (CONDITIONAL_JUMP)  ; LAB_0040a03e
    OR BL,0x4                           ; 0040a03b
    MOV EAX,EBX                         ; 0040a03e
        ;   Label: LAB_0040a03e
    MOV ESP,EBP                         ; 0040a040
    POP EBP                             ; 0040a042
    POP EDI                             ; 0040a043
    POP ESI                             ; 0040a044
    POP EBX                             ; 0040a045
    RET                                 ; 0040a046

