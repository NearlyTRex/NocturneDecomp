; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00507040(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0050a280 at 0050ae37
;
; Called Functions:
;   FUN_00506cb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00507040
        ;   Label: FUN_00507040
    PUSH ESI                            ; 00507041
    PUSH EDI                            ; 00507042
    PUSH EBP                            ; 00507043
    SUB ESP,0x10                        ; 00507044
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00507047
    MOV ECX,dword ptr [ESP + 0x30]      ; 0050704b
    MOV EDX,dword ptr [ESP + 0x34]      ; 0050704f
    LEA EAX,[EDX*0x4 + 0x0]             ; 00507053
    ADD EAX,EDX                         ; 0050705a
    SHL EAX,0x5                         ; 0050705c
    LEA EDX,[ESI + 0x8]                 ; 0050705f
    LEA EDI,[EDX + EAX*0x1]             ; 00507062
    MOV EDX,dword ptr [ESP + 0x38]      ; 00507065
    PUSH EDX                            ; 00507069
    MOV EBP,dword ptr [ESP + 0x38]      ; 0050706a
    LEA EAX,[ECX*0x8 + 0x0]             ; 0050706e
    PUSH EBP                            ; 00507075
    ADD EDI,0x10                        ; 00507076
    ADD EAX,ECX                         ; 00507079
    PUSH ECX                            ; 0050707b
    SHL EAX,0x3                         ; 0050707c
    PUSH ESI                            ; 0050707f
    ADD EDI,EAX                         ; 00507080
    MOV EAX,dword ptr [ESP + 0x38]      ; 00507082
    PUSH EAX                            ; 00507086
    MOV EDX,dword ptr [ESP + 0x38]      ; 00507087
    PUSH EDX                            ; 0050708b
    XOR EBX,EBX                         ; 0050708c
    CALL FUN_00506cb0                   ; 0050708e
        ;   XREF to: 00506cb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00506cb0()
    MOV ECX,dword ptr [EDI + 0x10]      ; 00507093
    ADD ESP,0x18                        ; 00507096
    TEST ECX,ECX                        ; 00507099
    JNZ 0x005070e6                      ; 0050709b
        ;   XREF to: 005070e6 (CONDITIONAL_JUMP)  ; LAB_005070e6
    MOV EAX,dword ptr [ESP + 0x34]      ; 0050709d
        ;   Label: LAB_0050709d
    MOV EBP,dword ptr [ESP + 0x24]      ; 005070a1
    SHL EAX,0x3                         ; 005070a5
    MOV ECX,dword ptr [ESP + 0x28]      ; 005070a8
    MOV EDI,EAX                         ; 005070ac
    LEA EDX,[EBX*0x4 + 0x0]             ; 005070ae
    SHL EDI,0x5                         ; 005070b5
    ADD EDX,EBP                         ; 005070b8
    SUB EDI,EAX                         ; 005070ba
    XOR EAX,EAX                         ; 005070bc
    ADD EDI,ECX                         ; 005070be
    INC EBX                             ; 005070c0
        ;   Label: LAB_005070c0
    MOV ECX,dword ptr [EDX + 0x7358]    ; 005070c1
    LEA ESI,[EDI + EAX*0x1]             ; 005070c7
    ADD EDX,0x4                         ; 005070ca
    ADD EAX,0x4                         ; 005070cd
    MOV dword ptr [ESI],ECX             ; 005070d0
    CMP EAX,0x54                        ; 005070d2
    JNZ 0x005070c0                      ; 005070d5
        ;   XREF to: 005070c0 (CONDITIONAL_JUMP)  ; LAB_005070c0
    MOV dword ptr [EDI + 0x58],0x0      ; 005070d7
    ADD ESP,0x10                        ; 005070de
    POP EBP                             ; 005070e1
    POP EDI                             ; 005070e2
    POP ESI                             ; 005070e3
    POP EBX                             ; 005070e4
    RET                                 ; 005070e5
    CMP dword ptr [EDI + 0x14],0x2      ; 005070e6
        ;   Label: LAB_005070e6
    JNZ 0x0050709d                      ; 005070ea
        ;   XREF to: 0050709d (CONDITIONAL_JUMP)  ; LAB_0050709d
    LEA EAX,[EBP*0x8 + 0x0]             ; 005070ec
    MOV EDX,EAX                         ; 005070f3
    SHL EAX,0x5                         ; 005070f5
    MOV ESI,dword ptr [ESP + 0x28]      ; 005070f8
    SUB EAX,EDX                         ; 005070fc
    MOV EBP,dword ptr [EDI + 0x18]      ; 005070fe
    ADD ESI,EAX                         ; 00507101
    TEST EBP,EBP                        ; 00507103
    JZ 0x005071bc                       ; 00507105
        ;   XREF to: 005071bc (CONDITIONAL_JUMP)  ; LAB_005071bc
    MOV EDX,dword ptr [ESP + 0x24]      ; 0050710b
    MOV EAX,ESI                         ; 0050710f
    ADD ESI,0x20                        ; 00507111
    ADD EAX,0x4                         ; 00507114
        ;   Label: LAB_00507114
    MOV ECX,dword ptr [EDX + 0x7358]    ; 00507117
    ADD EDX,0x4                         ; 0050711d
    INC EBX                             ; 00507120
    MOV dword ptr [EAX + -0x4],ECX      ; 00507121
    CMP EAX,ESI                         ; 00507124
    JNZ 0x00507114                      ; 00507126
        ;   XREF to: 00507114 (CONDITIONAL_JUMP)  ; LAB_00507114
    MOV EAX,dword ptr [ESP + 0x34]      ; 00507128
    SHL EAX,0x3                         ; 0050712c
    MOV EDX,EAX                         ; 0050712f
    SHL EAX,0x5                         ; 00507131
    SUB EAX,EDX                         ; 00507134
    MOV EDX,dword ptr [ESP + 0x28]      ; 00507136
    MOV EBP,0xa8                        ; 0050713a
    ADD EDX,EAX                         ; 0050713f
    MOV EDI,0x3                         ; 00507141
    MOV dword ptr [ESP + 0xc],EDX       ; 00507146
    MOV dword ptr [ESP],EDX             ; 0050714a
    MOV ESI,dword ptr [ESP + 0xc]       ; 0050714d
        ;   Label: LAB_0050714d
    MOV ECX,dword ptr [ESP + 0x24]      ; 00507151
    LEA EAX,[EDI*0x4 + 0x0]             ; 00507155
    LEA EDX,[EBX*0x4 + 0x0]             ; 0050715c
    ADD EAX,ESI                         ; 00507163
    MOV ESI,dword ptr [ESP]             ; 00507165
    ADD EDX,ECX                         ; 00507168
    ADD ESI,EBP                         ; 0050716a
    ADD EAX,0x34                        ; 0050716c
        ;   Label: LAB_0050716c
    MOV ECX,dword ptr [EDX + 0x7358]    ; 0050716f
    ADD EDX,0x4                         ; 00507175
    INC EBX                             ; 00507178
    MOV dword ptr [EAX + 0x28],ECX      ; 00507179
    CMP EAX,ESI                         ; 0050717c
    JNZ 0x0050716c                      ; 0050717e
        ;   XREF to: 0050716c (CONDITIONAL_JUMP)  ; LAB_0050716c
    INC EDI                             ; 00507180
    ADD EBP,0x4                         ; 00507181
    CMP EDI,0xc                         ; 00507184
    JL 0x0050714d                       ; 00507187
        ;   XREF to: 0050714d (CONDITIONAL_JUMP)  ; LAB_0050714d
    MOV EAX,dword ptr [ESP + 0x34]      ; 00507189
    SHL EAX,0x3                         ; 0050718d
    MOV EDX,EAX                         ; 00507190
    SHL EAX,0x5                         ; 00507192
    SUB EAX,EDX                         ; 00507195
    MOV EDX,dword ptr [ESP + 0x28]      ; 00507197
    ADD EDX,EAX                         ; 0050719b
    LEA EAX,[EDX + 0x30]                ; 0050719d
    ADD EDX,0xcc                        ; 005071a0
    ADD EAX,0x34                        ; 005071a6
        ;   Label: LAB_005071a6
    MOV dword ptr [EAX + 0x28],0x0      ; 005071a9
    CMP EAX,EDX                         ; 005071b0
    JNZ 0x005071a6                      ; 005071b2
        ;   XREF to: 005071a6 (CONDITIONAL_JUMP)  ; LAB_005071a6
    ADD ESP,0x10                        ; 005071b4
    POP EBP                             ; 005071b7
    POP EDI                             ; 005071b8
    POP ESI                             ; 005071b9
    POP EBX                             ; 005071ba
    RET                                 ; 005071bb
    MOV EBP,0x9c                        ; 005071bc
        ;   Label: LAB_005071bc
    MOV dword ptr [ESP + 0x8],ESI       ; 005071c1
    MOV dword ptr [ESP + 0x4],ESI       ; 005071c5
    XOR EDI,EDI                         ; 005071c9
    MOV EDX,dword ptr [ESP + 0x8]       ; 005071cb
        ;   Label: LAB_005071cb
    MOV ECX,dword ptr [ESP + 0x24]      ; 005071cf
    LEA EAX,[EDI*0x4 + 0x0]             ; 005071d3
    MOV ESI,dword ptr [ESP + 0x4]       ; 005071da
    ADD EAX,EDX                         ; 005071de
    LEA EDX,[EBX*0x4 + 0x0]             ; 005071e0
    ADD ESI,EBP                         ; 005071e7
    ADD EDX,ECX                         ; 005071e9
    ADD EAX,0x34                        ; 005071eb
        ;   Label: LAB_005071eb
    MOV ECX,dword ptr [EDX + 0x7358]    ; 005071ee
    ADD EDX,0x4                         ; 005071f4
    INC EBX                             ; 005071f7
    MOV dword ptr [EAX + 0x28],ECX      ; 005071f8
    CMP EAX,ESI                         ; 005071fb
    JNZ 0x005071eb                      ; 005071fd
        ;   XREF to: 005071eb (CONDITIONAL_JUMP)  ; LAB_005071eb
    INC EDI                             ; 005071ff
    ADD EBP,0x4                         ; 00507200
    CMP EDI,0xc                         ; 00507203
    JL 0x005071cb                       ; 00507206
        ;   XREF to: 005071cb (CONDITIONAL_JUMP)  ; LAB_005071cb
    MOV EAX,dword ptr [ESP + 0x34]      ; 00507208
    SHL EAX,0x3                         ; 0050720c
    MOV EDX,EAX                         ; 0050720f
    SHL EAX,0x5                         ; 00507211
    SUB EAX,EDX                         ; 00507214
    MOV EDX,dword ptr [ESP + 0x28]      ; 00507216
    ADD EDX,EAX                         ; 0050721a
    LEA EAX,[EDX + 0x30]                ; 0050721c
    ADD EDX,0xcc                        ; 0050721f
    ADD EAX,0x34                        ; 00507225
        ;   Label: LAB_00507225
    MOV dword ptr [EAX + 0x28],0x0      ; 00507228
    CMP EAX,EDX                         ; 0050722f
    JNZ 0x00507225                      ; 00507231
        ;   XREF to: 00507225 (CONDITIONAL_JUMP)  ; LAB_00507225
    ADD ESP,0x10                        ; 00507233
    POP EBP                             ; 00507236
    POP EDI                             ; 00507237
    POP ESI                             ; 00507238
    POP EBX                             ; 00507239
    RET                                 ; 0050723a

