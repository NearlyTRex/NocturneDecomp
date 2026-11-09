; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_mmxOptimizedMemcpy_FUN_00437132(void *dest_buffer,void *src_buffer,int byte_count)
;
; Parameters:
; void *           Stack[0x4]:4   dest_buffer
; void *           Stack[0x8]:4   src_buffer
; int              Stack[0xc]:4   byte_count
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00437132
        ;   Label: cockpit_ckptutil.c_mmxOptimizedMemcpy_FUN_00437132
    MOV EBP,ESP                         ; 00437133
    PUSH ESI                            ; 00437135
    PUSH EDI                            ; 00437136
    PUSH EAX                            ; 00437137
    PUSH EBX                            ; 00437138
    PUSH ECX                            ; 00437139
    PUSH EDX                            ; 0043713a
    MOV EDI,dword ptr [EBP + 0x8]       ; 0043713b
    MOV EDX,dword ptr [EBP + 0x10]      ; 0043713e
    MOV EBX,EDI                         ; 00437141
    MOV ESI,dword ptr [EBP + 0xc]       ; 00437143
    AND EBX,0x1f                        ; 00437146
    JZ 0x0043717d                       ; 00437149
        ;   XREF to: 0043717d (CONDITIONAL_JUMP)  ; LAB_0043717d
    MOV EAX,0x20                        ; 0043714b
    NOP                                 ; 00437150
    SUB EAX,EBX                         ; 00437151
    NOP                                 ; 00437153
    CMP EDX,EAX                         ; 00437154
    JGE 0x0043715b                      ; 00437156
        ;   XREF to: 0043715b (CONDITIONAL_JUMP)  ; LAB_0043715b
    MOV EAX,EDX                         ; 00437158
    NOP                                 ; 0043715a
    SUB EDX,EAX                         ; 0043715b
        ;   Label: LAB_0043715b
    MOV ECX,EAX                         ; 0043715d
    AND ECX,0x3                         ; 0043715f
    JZ 0x00437168                       ; 00437162
        ;   XREF to: 00437168 (CONDITIONAL_JUMP)  ; LAB_00437168
    SUB EAX,ECX                         ; 00437164
    MOVSB.REP ES:EDI,ESI                ; 00437166
    SHR EAX,0x2                         ; 00437168
        ;   Label: LAB_00437168
    JZ 0x00437171                       ; 0043716b
        ;   XREF to: 00437171 (CONDITIONAL_JUMP)  ; LAB_00437171
    MOV ECX,EAX                         ; 0043716d
    MOVSD.REP ES:EDI,ESI                ; 0043716f
    CMP EDX,0x0                         ; 00437171
        ;   Label: LAB_00437171
    JZ 0x00437230                       ; 00437174
        ;   XREF to: 00437230 (CONDITIONAL_JUMP)  ; LAB_00437230
    MOV dword ptr [EBP + 0xc],ESI       ; 0043717a
    MOV ECX,EDX                         ; 0043717d
        ;   Label: LAB_0043717d
    SUB ECX,0x100                       ; 0043717f
    JS 0x004371c2                       ; 00437185
        ;   XREF to: 004371c2 (CONDITIONAL_JUMP)  ; LAB_004371c2
    MOV EAX,EAX                         ; 00437187
    MOV EAX,EAX                         ; 0043718a
    MOV EAX,EAX                         ; 0043718d
    MOV AL,byte ptr [ESI]               ; 00437190
        ;   Label: LAB_00437190
    MOV BL,byte ptr [ESI + 0x24]        ; 00437192
    MOV AL,byte ptr [ESI + 0x40]        ; 00437195
    MOV BL,byte ptr [ESI + 0x64]        ; 00437198
    MOV AL,byte ptr [ESI + 0x80]        ; 0043719b
    MOV BL,byte ptr [ESI + 0xa4]        ; 004371a1
    MOV AL,byte ptr [ESI + 0xc0]        ; 004371a7
    MOV BL,byte ptr [ESI + 0xe4]        ; 004371ad
    ADD ESI,0x100                       ; 004371b3
    NOP                                 ; 004371b9
    SUB ECX,0x100                       ; 004371ba
    JG 0x00437190                       ; 004371c0
        ;   XREF to: 00437190 (CONDITIONAL_JUMP)  ; LAB_00437190
    MOV ESI,dword ptr [EBP + 0xc]       ; 004371c2
        ;   Label: LAB_004371c2
    MOV ECX,EDX                         ; 004371c5
    SHR ECX,0x5                         ; 004371c7
    JZ 0x00437214                       ; 004371ca
        ;   XREF to: 00437214 (CONDITIONAL_JUMP)  ; LAB_00437214
    SHL ECX,0x5                         ; 004371cc
    NOP                                 ; 004371cf
    MOV EAX,ECX                         ; 004371d0
    SUB ECX,0x20                        ; 004371d2
    MOV EAX,EAX                         ; 004371d5
    MOV EAX,EAX                         ; 004371d8
    MOV EAX,EAX                         ; 004371db
    MOV EAX,EAX                         ; 004371de
    MOVQ MM0,qword ptr [ECX + ESI*0x1]  ; 004371e0
        ;   Label: LAB_004371e0
    MOVQ MM1,qword ptr [ECX + ESI*0x1 + 0x8] ; 004371e4
    MOVQ MM2,qword ptr [ECX + ESI*0x1 + 0x10] ; 004371e9
    MOVQ MM3,qword ptr [ECX + ESI*0x1 + 0x18] ; 004371ee
    MOVQ qword ptr [ECX + EDI*0x1],MM0  ; 004371f3
    MOVQ qword ptr [ECX + EDI*0x1 + 0x8],MM1 ; 004371f7
    MOVQ qword ptr [ECX + EDI*0x1 + 0x10],MM2 ; 004371fc
    MOVQ qword ptr [ECX + EDI*0x1 + 0x18],MM3 ; 00437201
    SUB ECX,0x20                        ; 00437206
    JGE 0x004371e0                      ; 00437209
        ;   XREF to: 004371e0 (CONDITIONAL_JUMP)  ; LAB_004371e0
    EMMS                                ; 0043720b
    SUB EDX,EAX                         ; 0043720d
    ADD ESI,EAX                         ; 0043720f
    ADD EDI,EAX                         ; 00437211
    NOP                                 ; 00437213
    CMP EDX,0x0                         ; 00437214
        ;   Label: LAB_00437214
    JZ 0x00437230                       ; 00437217
        ;   XREF to: 00437230 (CONDITIONAL_JUMP)  ; LAB_00437230
    MOV EBX,EDX                         ; 00437219
    NOP                                 ; 0043721b
    SHR EBX,0x2                         ; 0043721c
    JZ 0x0043722c                       ; 0043721f
        ;   XREF to: 0043722c (CONDITIONAL_JUMP)  ; LAB_0043722c
    MOV ECX,EBX                         ; 00437221
    MOVSD.REP ES:EDI,ESI                ; 00437223
    SHL EBX,0x2                         ; 00437225
    NOP                                 ; 00437228
    SUB EDX,EBX                         ; 00437229
    NOP                                 ; 0043722b
    MOV ECX,EDX                         ; 0043722c
        ;   Label: LAB_0043722c
    MOVSB.REP ES:EDI,ESI                ; 0043722e
    POP EDX                             ; 00437230
        ;   Label: LAB_00437230
    POP ECX                             ; 00437231
    POP EBX                             ; 00437232
    POP EAX                             ; 00437233
    POP EDI                             ; 00437234
    POP ESI                             ; 00437235
    LEAVE                               ; 00437236
    RET                                 ; 00437237

