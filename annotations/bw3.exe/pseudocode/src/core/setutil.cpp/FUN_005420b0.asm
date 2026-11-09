; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_setutil_cpp_FUN_005420b0(int param_1,float *param_2,float param_3)
;
; Local Variables:
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined        Stack[-0x24]:1  local_24
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   core_setdir.cpp_FUN_0053f940 at 00540318
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045b870
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005420b0
        ;   Label: core_setutil.cpp_FUN_005420b0
    PUSH ESI                            ; 005420b1
    PUSH EDI                            ; 005420b2
    SUB ESP,0x30                        ; 005420b3
    MOV EBX,dword ptr [ESP + 0x40]      ; 005420b6
    MOV ESI,dword ptr [ESP + 0x44]      ; 005420ba
    FLD float ptr [ESI + 0x4]           ; 005420be
    FLD float ptr [ESI + 0x8]           ; 005420c1
    FLD float ptr [ESI]                 ; 005420c4
    LEA EAX,[EBX + 0x100]               ; 005420c6
    LEA EDI,[ESP + 0x24]                ; 005420cc
    MOV ESI,ESP                         ; 005420d0
    FSUB float ptr [EAX]                ; 005420d2
    FXCH ST2                            ; 005420d4
    FSUB float ptr [EAX + 0x4]          ; 005420d6
    FXCH                                ; 005420d9
    FSUB float ptr [EAX + 0x8]          ; 005420db
    FXCH ST2                            ; 005420de
    FSTP float ptr [ESP]                ; 005420e0
    FSTP float ptr [ESP + 0x4]          ; 005420e3
    LEA EAX,[ESP + 0x24]                ; 005420e7
    FSTP float ptr [ESP + 0x8]          ; 005420eb
    PUSH EAX                            ; 005420ef
    LEA EAX,[EBX + 0x118]               ; 005420f0
    MOVSD ES:EDI,ESI                    ; 005420f6
    MOVSD ES:EDI,ESI                    ; 005420f7
    MOVSD ES:EDI,ESI                    ; 005420f8
    PUSH EAX                            ; 005420f9
    LEA ESI,[ESP + 0x20]                ; 005420fa
    LEA EDI,[ESP + 0x14]                ; 005420fe
    CALL core_dirmat.cpp_FUN_0045b870   ; 00542102
        ;   XREF to: 0045b870 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b870()
    LEA ESI,[ESP + 0x20]                ; 00542107
    ADD ESP,0x8                         ; 0054210b
    MOVSD ES:EDI,ESI                    ; 0054210e
    MOVSD ES:EDI,ESI                    ; 0054210f
    MOVSD ES:EDI,ESI                    ; 00542110
    FLD float ptr [ESP + 0xc]           ; 00542111
    FADD float ptr [ESP + 0x48]         ; 00542115
    FCOMP float ptr [EBX + 0x17c]       ; 00542119
    FNSTSW AX                           ; 0054211f
    SAHF                                ; 00542121
    JC 0x00542183                       ; 00542122
        ;   XREF to: 00542183 (CONDITIONAL_JUMP)  ; LAB_00542183
    FLD float ptr [ESP + 0x10]          ; 00542124
    FADD float ptr [ESP + 0x48]         ; 00542128
    FCOMP float ptr [EBX + 0x180]       ; 0054212c
    FNSTSW AX                           ; 00542132
    SAHF                                ; 00542134
    JC 0x00542183                       ; 00542135
        ;   XREF to: 00542183 (CONDITIONAL_JUMP)  ; LAB_00542183
    FLD float ptr [ESP + 0x14]          ; 00542137
    FADD float ptr [ESP + 0x48]         ; 0054213b
    FCOMP float ptr [EBX + 0x184]       ; 0054213f
    FNSTSW AX                           ; 00542145
    SAHF                                ; 00542147
    JC 0x00542183                       ; 00542148
        ;   XREF to: 00542183 (CONDITIONAL_JUMP)  ; LAB_00542183
    FLD float ptr [ESP + 0xc]           ; 0054214a
    FSUB float ptr [ESP + 0x48]         ; 0054214e
    FCOMP float ptr [EBX + 0x188]       ; 00542152
    FNSTSW AX                           ; 00542158
    SAHF                                ; 0054215a
    JA 0x00542183                       ; 0054215b
        ;   XREF to: 00542183 (CONDITIONAL_JUMP)  ; LAB_00542183
    FLD float ptr [ESP + 0x10]          ; 0054215d
    FSUB float ptr [ESP + 0x48]         ; 00542161
    FCOMP float ptr [EBX + 0x18c]       ; 00542165
    FNSTSW AX                           ; 0054216b
    SAHF                                ; 0054216d
    JA 0x00542183                       ; 0054216e
        ;   XREF to: 00542183 (CONDITIONAL_JUMP)  ; LAB_00542183
    FLD float ptr [ESP + 0x14]          ; 00542170
    FSUB float ptr [ESP + 0x48]         ; 00542174
    FCOMP float ptr [EBX + 0x190]       ; 00542178
    FNSTSW AX                           ; 0054217e
    SAHF                                ; 00542180
    JBE 0x0054218c                      ; 00542181
        ;   XREF to: 0054218c (CONDITIONAL_JUMP)  ; LAB_0054218c
    XOR EAX,EAX                         ; 00542183
        ;   Label: LAB_00542183
    ADD ESP,0x30                        ; 00542185
    POP EDI                             ; 00542188
    POP ESI                             ; 00542189
    POP EBX                             ; 0054218a
    RET                                 ; 0054218b
    MOV EAX,0x1                         ; 0054218c
        ;   Label: LAB_0054218c
    ADD ESP,0x30                        ; 00542191
    POP EDI                             ; 00542194
    POP ESI                             ; 00542195
    POP EBX                             ; 00542196
    RET                                 ; 00542197

