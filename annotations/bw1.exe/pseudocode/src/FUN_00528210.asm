; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00528210(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0052b450 at 0052c007
;
; Called Functions:
;   FUN_00527e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00528210
        ;   Label: FUN_00528210
    PUSH ESI                            ; 00528211
    PUSH EDI                            ; 00528212
    PUSH EBP                            ; 00528213
    SUB ESP,0x10                        ; 00528214
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00528217
    MOV ECX,dword ptr [ESP + 0x30]      ; 0052821b
    MOV EDX,dword ptr [ESP + 0x34]      ; 0052821f
    LEA EAX,[EDX*0x4 + 0x0]             ; 00528223
    ADD EAX,EDX                         ; 0052822a
    SHL EAX,0x5                         ; 0052822c
    LEA EDX,[ESI + 0x8]                 ; 0052822f
    LEA EDI,[EDX + EAX*0x1]             ; 00528232
    MOV EDX,dword ptr [ESP + 0x38]      ; 00528235
    PUSH EDX                            ; 00528239
    MOV EBP,dword ptr [ESP + 0x38]      ; 0052823a
    LEA EAX,[ECX*0x8 + 0x0]             ; 0052823e
    PUSH EBP                            ; 00528245
    ADD EDI,0x10                        ; 00528246
    ADD EAX,ECX                         ; 00528249
    PUSH ECX                            ; 0052824b
    SHL EAX,0x3                         ; 0052824c
    PUSH ESI                            ; 0052824f
    ADD EDI,EAX                         ; 00528250
    MOV EAX,dword ptr [ESP + 0x38]      ; 00528252
    PUSH EAX                            ; 00528256
    MOV EDX,dword ptr [ESP + 0x38]      ; 00528257
    PUSH EDX                            ; 0052825b
    XOR EBX,EBX                         ; 0052825c
    CALL FUN_00527e80                   ; 0052825e
        ;   XREF to: 00527e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00527e80()
    MOV ECX,dword ptr [EDI + 0x10]      ; 00528263
    ADD ESP,0x18                        ; 00528266
    TEST ECX,ECX                        ; 00528269
    JNZ 0x005282b6                      ; 0052826b
        ;   XREF to: 005282b6 (CONDITIONAL_JUMP)  ; LAB_005282b6
    MOV EAX,dword ptr [ESP + 0x34]      ; 0052826d
        ;   Label: LAB_0052826d
    MOV EBP,dword ptr [ESP + 0x24]      ; 00528271
    SHL EAX,0x3                         ; 00528275
    MOV ECX,dword ptr [ESP + 0x28]      ; 00528278
    MOV EDI,EAX                         ; 0052827c
    LEA EDX,[EBX*0x4 + 0x0]             ; 0052827e
    SHL EDI,0x5                         ; 00528285
    ADD EDX,EBP                         ; 00528288
    SUB EDI,EAX                         ; 0052828a
    XOR EAX,EAX                         ; 0052828c
    ADD EDI,ECX                         ; 0052828e
    INC EBX                             ; 00528290
        ;   Label: LAB_00528290
    MOV ECX,dword ptr [EDX + 0x7358]    ; 00528291
    LEA ESI,[EDI + EAX*0x1]             ; 00528297
    ADD EDX,0x4                         ; 0052829a
    ADD EAX,0x4                         ; 0052829d
    MOV dword ptr [ESI],ECX             ; 005282a0
    CMP EAX,0x54                        ; 005282a2
    JNZ 0x00528290                      ; 005282a5
        ;   XREF to: 00528290 (CONDITIONAL_JUMP)  ; LAB_00528290
    MOV dword ptr [EDI + 0x58],0x0      ; 005282a7
    ADD ESP,0x10                        ; 005282ae
    POP EBP                             ; 005282b1
    POP EDI                             ; 005282b2
    POP ESI                             ; 005282b3
    POP EBX                             ; 005282b4
    RET                                 ; 005282b5
    CMP dword ptr [EDI + 0x14],0x2      ; 005282b6
        ;   Label: LAB_005282b6
    JNZ 0x0052826d                      ; 005282ba
        ;   XREF to: 0052826d (CONDITIONAL_JUMP)  ; LAB_0052826d
    LEA EAX,[EBP*0x8 + 0x0]             ; 005282bc
    MOV EDX,EAX                         ; 005282c3
    SHL EAX,0x5                         ; 005282c5
    MOV ESI,dword ptr [ESP + 0x28]      ; 005282c8
    SUB EAX,EDX                         ; 005282cc
    MOV EBP,dword ptr [EDI + 0x18]      ; 005282ce
    ADD ESI,EAX                         ; 005282d1
    TEST EBP,EBP                        ; 005282d3
    JZ 0x0052838c                       ; 005282d5
        ;   XREF to: 0052838c (CONDITIONAL_JUMP)  ; LAB_0052838c
    MOV EDX,dword ptr [ESP + 0x24]      ; 005282db
    MOV EAX,ESI                         ; 005282df
    ADD ESI,0x20                        ; 005282e1
    ADD EAX,0x4                         ; 005282e4
        ;   Label: LAB_005282e4
    MOV ECX,dword ptr [EDX + 0x7358]    ; 005282e7
    ADD EDX,0x4                         ; 005282ed
    INC EBX                             ; 005282f0
    MOV dword ptr [EAX + -0x4],ECX      ; 005282f1
    CMP EAX,ESI                         ; 005282f4
    JNZ 0x005282e4                      ; 005282f6
        ;   XREF to: 005282e4 (CONDITIONAL_JUMP)  ; LAB_005282e4
    MOV EAX,dword ptr [ESP + 0x34]      ; 005282f8
    SHL EAX,0x3                         ; 005282fc
    MOV EDX,EAX                         ; 005282ff
    SHL EAX,0x5                         ; 00528301
    SUB EAX,EDX                         ; 00528304
    MOV EDX,dword ptr [ESP + 0x28]      ; 00528306
    MOV EBP,0xa8                        ; 0052830a
    ADD EDX,EAX                         ; 0052830f
    MOV EDI,0x3                         ; 00528311
    MOV dword ptr [ESP + 0xc],EDX       ; 00528316
    MOV dword ptr [ESP],EDX             ; 0052831a
    MOV ESI,dword ptr [ESP + 0xc]       ; 0052831d
        ;   Label: LAB_0052831d
    MOV ECX,dword ptr [ESP + 0x24]      ; 00528321
    LEA EAX,[EDI*0x4 + 0x0]             ; 00528325
    LEA EDX,[EBX*0x4 + 0x0]             ; 0052832c
    ADD EAX,ESI                         ; 00528333
    MOV ESI,dword ptr [ESP]             ; 00528335
    ADD EDX,ECX                         ; 00528338
    ADD ESI,EBP                         ; 0052833a
    ADD EAX,0x34                        ; 0052833c
        ;   Label: LAB_0052833c
    MOV ECX,dword ptr [EDX + 0x7358]    ; 0052833f
    ADD EDX,0x4                         ; 00528345
    INC EBX                             ; 00528348
    MOV dword ptr [EAX + 0x28],ECX      ; 00528349
    CMP EAX,ESI                         ; 0052834c
    JNZ 0x0052833c                      ; 0052834e
        ;   XREF to: 0052833c (CONDITIONAL_JUMP)  ; LAB_0052833c
    INC EDI                             ; 00528350
    ADD EBP,0x4                         ; 00528351
    CMP EDI,0xc                         ; 00528354
    JL 0x0052831d                       ; 00528357
        ;   XREF to: 0052831d (CONDITIONAL_JUMP)  ; LAB_0052831d
    MOV EAX,dword ptr [ESP + 0x34]      ; 00528359
    SHL EAX,0x3                         ; 0052835d
    MOV EDX,EAX                         ; 00528360
    SHL EAX,0x5                         ; 00528362
    SUB EAX,EDX                         ; 00528365
    MOV EDX,dword ptr [ESP + 0x28]      ; 00528367
    ADD EDX,EAX                         ; 0052836b
    LEA EAX,[EDX + 0x30]                ; 0052836d
    ADD EDX,0xcc                        ; 00528370
    ADD EAX,0x34                        ; 00528376
        ;   Label: LAB_00528376
    MOV dword ptr [EAX + 0x28],0x0      ; 00528379
    CMP EAX,EDX                         ; 00528380
    JNZ 0x00528376                      ; 00528382
        ;   XREF to: 00528376 (CONDITIONAL_JUMP)  ; LAB_00528376
    ADD ESP,0x10                        ; 00528384
    POP EBP                             ; 00528387
    POP EDI                             ; 00528388
    POP ESI                             ; 00528389
    POP EBX                             ; 0052838a
    RET                                 ; 0052838b
    MOV EBP,0x9c                        ; 0052838c
        ;   Label: LAB_0052838c
    MOV dword ptr [ESP + 0x8],ESI       ; 00528391
    MOV dword ptr [ESP + 0x4],ESI       ; 00528395
    XOR EDI,EDI                         ; 00528399
    MOV EDX,dword ptr [ESP + 0x8]       ; 0052839b
        ;   Label: LAB_0052839b
    MOV ECX,dword ptr [ESP + 0x24]      ; 0052839f
    LEA EAX,[EDI*0x4 + 0x0]             ; 005283a3
    MOV ESI,dword ptr [ESP + 0x4]       ; 005283aa
    ADD EAX,EDX                         ; 005283ae
    LEA EDX,[EBX*0x4 + 0x0]             ; 005283b0
    ADD ESI,EBP                         ; 005283b7
    ADD EDX,ECX                         ; 005283b9
    ADD EAX,0x34                        ; 005283bb
        ;   Label: LAB_005283bb
    MOV ECX,dword ptr [EDX + 0x7358]    ; 005283be
    ADD EDX,0x4                         ; 005283c4
    INC EBX                             ; 005283c7
    MOV dword ptr [EAX + 0x28],ECX      ; 005283c8
    CMP EAX,ESI                         ; 005283cb
    JNZ 0x005283bb                      ; 005283cd
        ;   XREF to: 005283bb (CONDITIONAL_JUMP)  ; LAB_005283bb
    INC EDI                             ; 005283cf
    ADD EBP,0x4                         ; 005283d0
    CMP EDI,0xc                         ; 005283d3
    JL 0x0052839b                       ; 005283d6
        ;   XREF to: 0052839b (CONDITIONAL_JUMP)  ; LAB_0052839b
    MOV EAX,dword ptr [ESP + 0x34]      ; 005283d8
    SHL EAX,0x3                         ; 005283dc
    MOV EDX,EAX                         ; 005283df
    SHL EAX,0x5                         ; 005283e1
    SUB EAX,EDX                         ; 005283e4
    MOV EDX,dword ptr [ESP + 0x28]      ; 005283e6
    ADD EDX,EAX                         ; 005283ea
    LEA EAX,[EDX + 0x30]                ; 005283ec
    ADD EDX,0xcc                        ; 005283ef
    ADD EAX,0x34                        ; 005283f5
        ;   Label: LAB_005283f5
    MOV dword ptr [EAX + 0x28],0x0      ; 005283f8
    CMP EAX,EDX                         ; 005283ff
    JNZ 0x005283f5                      ; 00528401
        ;   XREF to: 005283f5 (CONDITIONAL_JUMP)  ; LAB_005283f5
    ADD ESP,0x10                        ; 00528403
    POP EBP                             ; 00528406
    POP EDI                             ; 00528407
    POP ESI                             ; 00528408
    POP EBX                             ; 00528409
    RET                                 ; 0052840a

