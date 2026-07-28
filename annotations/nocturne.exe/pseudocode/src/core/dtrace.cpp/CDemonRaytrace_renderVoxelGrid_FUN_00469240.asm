; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtrace_cpp_CDemonRaytrace_renderVoxelGrid_FUN_00469240(CDemonRaytrace *param_1,int *param_2,int param_3,int param_4,int param_5)
;
; Local Variables:
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
; Referenced Globals:
;   undefined4 DAT_0057e1fa
;   undefined1 DAT_005b6d08
;   undefined1 DAT_005b6d09
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_renderGridCube_FUN_00468d00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00469240
        ;   Label: core_dtrace.cpp_CDemonRaytrace_renderVoxelGrid_FUN_00469240
    PUSH ESI                            ; 00469241
    PUSH EDI                            ; 00469242
    PUSH EBP                            ; 00469243
    SUB ESP,0x30                        ; 00469244
    MOV ESI,dword ptr [ESP + 0x44]      ; 00469247
    MOV EBP,dword ptr [ESP + 0x48]      ; 0046924b
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0046924f
    MOV dword ptr [ESP + 0x2c],EAX      ; 00469253
    FILD dword ptr [ESP + 0x2c]         ; 00469257
    MOV EAX,dword ptr [ESP + 0x50]      ; 0046925b
    FMUL float ptr [ESI + 0x28]         ; 0046925f
    MOV dword ptr [ESP + 0x2c],EAX      ; 00469262
    FADD float ptr [ESI + 0x10]         ; 00469266
    FILD dword ptr [ESP + 0x2c]         ; 00469269
    FXCH                                ; 0046926d
    FSTP float ptr [ESP]                ; 0046926f
    FMUL float ptr [ESI + 0x2c]         ; 00469272
    MOV EAX,dword ptr [ESP + 0x54]      ; 00469275
    XOR EDX,EDX                         ; 00469279
    MOV dword ptr [ESP + 0x2c],EAX      ; 0046927b
    FADD float ptr [ESI + 0x14]         ; 0046927f
    FILD dword ptr [ESP + 0x2c]         ; 00469282
    FXCH                                ; 00469286
    FSTP float ptr [ESP + 0x4]          ; 00469288
    FMUL float ptr [ESI + 0x30]         ; 0046928c
    MOV dword ptr [ESP + 0x24],EDX      ; 0046928f
    FADD float ptr [ESI + 0x18]         ; 00469293
    MOV dword ptr [ESP + 0x18],EDX      ; 00469296
    FSTP float ptr [ESP + 0x8]          ; 0046929a
    MOV EAX,dword ptr [ESP + 0x18]      ; 0046929e
        ;   Label: LAB_0046929e
    XOR EDI,EDI                         ; 004692a2
    MOV dword ptr [ESP + 0x1c],EAX      ; 004692a4
    MOV dword ptr [ESP + 0x20],EAX      ; 004692a8
    MOV EBX,dword ptr [EBP]             ; 004692ac
        ;   Label: LAB_004692ac
    TEST EBX,EBX                        ; 004692af
    JZ 0x0046934f                       ; 004692b1
        ;   XREF to: 0046934f (CONDITIONAL_JUMP)  ; LAB_0046934f
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004692b7
    LEA EAX,[EBX + EDX*0x1]             ; 004692bb
    CMP byte ptr [EAX],0x0              ; 004692be
    JZ 0x0046934f                       ; 004692c1
        ;   XREF to: 0046934f (CONDITIONAL_JUMP)  ; LAB_0046934f
    MOV EAX,dword ptr [ESP + 0x20]      ; 004692c7
    XOR EBX,EBX                         ; 004692cb
    MOV dword ptr [ESP + 0x28],EAX      ; 004692cd
    MOV ECX,dword ptr [ESP + 0x28]      ; 004692d1
        ;   Label: LAB_004692d1
    MOV EAX,dword ptr [EBP]             ; 004692d5
    ADD EAX,ECX                         ; 004692d8
    MOV AL,byte ptr [EAX]               ; 004692da
    XOR EDX,EDX                         ; 004692dc
    AND EAX,0xff                        ; 004692de
    MOV DL,byte ptr [EBX + 0x5b6d08]    ; 004692e3 | DAT_005b6d08 | DAT_005b6d09
    TEST EAX,EDX                        ; 004692e9
    JZ 0x00469349                       ; 004692eb
        ;   XREF to: 00469349 (CONDITIONAL_JUMP)  ; LAB_00469349
    MOV dword ptr [ESP + 0x2c],EBX      ; 004692ed
    FILD dword ptr [ESP + 0x2c]         ; 004692f1
    FMUL float ptr [ESI + 0x28]         ; 004692f5
    FLD float ptr [0x0057e1fa]          ; 004692f8 | DAT_0057e1fa
    FXCH                                ; 004692fe
    FMUL ST1                            ; 00469300
    MOV dword ptr [ESP + 0x2c],EDI      ; 00469302
    FADD float ptr [ESP]                ; 00469306
    FILD dword ptr [ESP + 0x2c]         ; 00469309
    FXCH                                ; 0046930d
    FSTP float ptr [ESP + 0xc]          ; 0046930f
    FMUL float ptr [ESI + 0x2c]         ; 00469313
    MOV EAX,dword ptr [ESP + 0x24]      ; 00469316
    FMUL ST1                            ; 0046931a
    MOV dword ptr [ESP + 0x2c],EAX      ; 0046931c
    FADD float ptr [ESP + 0x4]          ; 00469320
    FILD dword ptr [ESP + 0x2c]         ; 00469324
    FXCH                                ; 00469328
    FSTP float ptr [ESP + 0x10]         ; 0046932a
    FMUL float ptr [ESI + 0x30]         ; 0046932e
    LEA EAX,[ESP + 0xc]                 ; 00469331
    FMULP                               ; 00469335
    PUSH EAX                            ; 00469337
    FADD float ptr [ESP + 0xc]          ; 00469338
    PUSH ESI                            ; 0046933c
    FSTP float ptr [ESP + 0x1c]         ; 0046933d
    CALL core_dtrace.cpp_CDemonRaytrace_renderGridCube_FUN_00468d00 ; 00469341
        ;   XREF to: 00468d00 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderGridCube_FUN_00468d00(CDemonRaytrace * this_ptr, CVector3f * world_pos)
    ADD ESP,0x8                         ; 00469346
    INC EBX                             ; 00469349
        ;   Label: LAB_00469349
    CMP EBX,0x8                         ; 0046934a
    JL 0x004692d1                       ; 0046934d
        ;   XREF to: 004692d1 (CONDITIONAL_JUMP)  ; LAB_004692d1
    MOV EAX,dword ptr [ESP + 0x20]      ; 0046934f
        ;   Label: LAB_0046934f
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00469353
    INC EDI                             ; 00469357
    INC EAX                             ; 00469358
    INC EBX                             ; 00469359
    MOV dword ptr [ESP + 0x20],EAX      ; 0046935a
    MOV dword ptr [ESP + 0x1c],EBX      ; 0046935e
    CMP EDI,0x8                         ; 00469362
    JL 0x004692ac                       ; 00469365
        ;   XREF to: 004692ac (CONDITIONAL_JUMP)  ; LAB_004692ac
    MOV ECX,dword ptr [ESP + 0x24]      ; 0046936b
    MOV EDX,dword ptr [ESP + 0x18]      ; 0046936f
    INC ECX                             ; 00469373
    ADD EDX,0x8                         ; 00469374
    MOV dword ptr [ESP + 0x24],ECX      ; 00469377
    MOV dword ptr [ESP + 0x18],EDX      ; 0046937b
    CMP ECX,0x8                         ; 0046937f
    JL 0x0046929e                       ; 00469382
        ;   XREF to: 0046929e (CONDITIONAL_JUMP)  ; LAB_0046929e
    ADD ESP,0x30                        ; 00469388
    POP EBP                             ; 0046938b
    POP EDI                             ; 0046938c
    POP ESI                             ; 0046938d
    POP EBX                             ; 0046938e
    RET                                 ; 0046938f

