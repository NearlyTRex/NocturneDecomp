; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeledit_cpp_CDeformableModel_sortFacesByTexture_FUN_0058e240(CDeformableModel *this_ptr)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined2[1018] Stack[-0x201c]:2036  auStack_201c
; undefined4[1528] Stack[-0x1828]:6112  auStack_1828
; undefined1[4]    Stack[-0x48]:4  auStack_48
; undefined4       Stack[-0x44]:4  uStack_44
; undefined4       Stack[-0x40]:4  local_40
; undefined2[2]    Stack[-0x3c]:4  auStack_3c
; CDeformableModel * Stack[-0x38]:4  local_38
; int              Stack[-0x34]:4  local_34
; int              Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; int              Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; CDeformableModel * Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_skeledit.cpp_CDeformableModel_importGeometryS3D_FUN_0058b660 at 0058b8b3
;
; *****************************************************************************

section .text

    NOP                                 ; 0058e240
        ;   Label: core_skeledit.cpp_CDeformableModel_sortFacesByTexture_FUN_0058e240
    NOP                                 ; 0058e241
    NOP                                 ; 0058e242
    NOP                                 ; 0058e243
    NOP                                 ; 0058e244
    NOP                                 ; 0058e245
    NOP                                 ; 0058e246
    NOP                                 ; 0058e247
    NOP                                 ; 0058e248
    NOP                                 ; 0058e249
    PUSH EBX                            ; 0058e24a
    PUSH ESI                            ; 0058e24b
    PUSH EDI                            ; 0058e24c
    PUSH EBP                            ; 0058e24d
    SUB ESP,0x3c                        ; 0058e24e
    MOV EAX,dword ptr [ESP + 0x50]      ; 0058e251
    XOR EDX,EDX                         ; 0058e255
    MOV ECX,dword ptr [EAX]             ; 0058e257
    MOV dword ptr [ESP + 0x18],EDX      ; 0058e259
    TEST ECX,ECX                        ; 0058e25d
    JLE 0x0058e3cb                      ; 0058e25f
        ;   XREF to: 0058e3cb (CONDITIONAL_JUMP)  ; LAB_0058e3cb
    MOV dword ptr [ESP + 0x14],EAX      ; 0058e265
    MOV dword ptr [ESP + 0x1c],EDX      ; 0058e269
    XOR EDX,EDX                         ; 0058e26d
        ;   Label: LAB_0058e26d
    MOV EAX,dword ptr [ESP + 0x50]      ; 0058e26f
    MOV dword ptr [ESP + 0x28],EDX      ; 0058e273
    MOV EBX,dword ptr [EAX + 0x7140]    ; 0058e277
    MOV dword ptr [ESP + 0x2c],EDX      ; 0058e27d
    TEST EBX,EBX                        ; 0058e281
    JLE 0x0058e39e                      ; 0058e283
        ;   XREF to: 0058e39e (CONDITIONAL_JUMP)  ; LAB_0058e39e
    MOV EAX,dword ptr [ESP + 0x14]      ; 0058e289
    MOV EDX,dword ptr [ESP + 0x50]      ; 0058e28d
    MOV dword ptr [ESP + 0x38],EAX      ; 0058e291
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0058e295
    ADD EAX,EDX                         ; 0058e299
    MOV dword ptr [ESP + 0x24],EAX      ; 0058e29b
    MOV EDX,dword ptr [ESP + 0x24]      ; 0058e29f
        ;   Label: LAB_0058e29f
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0058e2a3
    MOV ECX,dword ptr [EDX + 0x7164]    ; 0058e2a7
    ADD EAX,ECX                         ; 0058e2ad
    MOV dword ptr [ESP + 0x20],EAX      ; 0058e2af
    SUB EAX,0x2                         ; 0058e2b3
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0058e2b6
    MOV dword ptr [ESP + 0x30],EAX      ; 0058e2ba
    CMP EAX,EBX                         ; 0058e2be
    JL 0x0058e370                       ; 0058e2c0
        ;   XREF to: 0058e370 (CONDITIONAL_JUMP)  ; LAB_0058e370
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0058e2c6
        ;   Label: LAB_0058e2c6
    CMP EAX,dword ptr [ESP + 0x30]      ; 0058e2ca
    JG 0x0058e35b                       ; 0058e2ce
        ;   XREF to: 0058e35b (CONDITIONAL_JUMP)  ; LAB_0058e35b
    LEA EDX,[EAX*0x4 + 0x0]             ; 0058e2d4
    IMUL EAX,EAX,0x12                   ; 0058e2db
    MOV EBX,EAX                         ; 0058e2de
    LEA EBP,[EAX + 0x12]                ; 0058e2e0
    MOV EAX,dword ptr [ESP + 0x30]      ; 0058e2e3
    SHL EAX,0x2                         ; 0058e2e7
    MOV dword ptr [ESP + 0x34],EAX      ; 0058e2ea
    MOV ECX,dword ptr [ESP + 0x38]      ; 0058e2ee
        ;   Label: LAB_0058e2ee
    MOV ECX,dword ptr [ECX + 0x90]      ; 0058e2f2
    LEA EAX,[ECX + EDX*0x1]             ; 0058e2f8
    MOV ESI,dword ptr [EAX]             ; 0058e2fb
    CMP ESI,dword ptr [EAX + 0x4]       ; 0058e2fd
    JLE 0x0058e34a                      ; 0058e300
        ;   XREF to: 0058e34a (CONDITIONAL_JUMP)  ; LAB_0058e34a
    LEA ESI,[EDX + 0x4]                 ; 0058e302
    ADD ECX,ESI                         ; 0058e305
    MOV EDI,dword ptr [ECX]             ; 0058e307
    MOV ESI,dword ptr [EAX]             ; 0058e309
    MOV dword ptr [EAX],EDI             ; 0058e30b
    MOV EAX,dword ptr [ESP + 0x38]      ; 0058e30d
    MOV dword ptr [ECX],ESI             ; 0058e311
    MOV EAX,dword ptr [EAX + 0x7c]      ; 0058e313
    LEA ECX,[EAX + EBP*0x1]             ; 0058e316
    ADD EAX,EBX                         ; 0058e319
    MOV EDI,ESP                         ; 0058e31b
    MOV ESI,EAX                         ; 0058e31d
    MOVSD ES:EDI,ESI                    ; 0058e31f
    MOVSW ES:EDI,ESI                    ; 0058e320
    LEA EDI,[ESP + 0x6]                 ; 0058e322
    LEA ESI,[EAX + 0x6]                 ; 0058e326
    MOVSD ES:EDI,ESI                    ; 0058e329
    MOVSW ES:EDI,ESI                    ; 0058e32a
    LEA EDI,[ESP + 0xc]                 ; 0058e32c
    LEA ESI,[EAX + 0xc]                 ; 0058e330
    MOVSD ES:EDI,ESI                    ; 0058e333
    MOVSW ES:EDI,ESI                    ; 0058e334
    MOV EDI,EAX                         ; 0058e336
    JMP 0x00608b27                      ; 0058e338
        ;   XREF to: 00608b27 (UNCONDITIONAL_JUMP)  ; LAB_00608b27
    MOVSW ES:EDI,ESI                    ; 0058e33e
        ;   Label: LAB_0058e33e
    MOV ESI,ESP                         ; 0058e340
    JMP 0x00608b4a                      ; 0058e342
        ;   XREF to: 00608b4a (UNCONDITIONAL_JUMP)  ; LAB_00608b4a
    MOVSW ES:EDI,ESI                    ; 0058e348
        ;   Label: LAB_0058e348
    MOV EAX,dword ptr [ESP + 0x34]      ; 0058e34a
        ;   Label: LAB_0058e34a
    ADD EDX,0x4                         ; 0058e34e
    ADD EBX,0x12                        ; 0058e351
    ADD EBP,0x12                        ; 0058e354
    CMP EDX,EAX                         ; 0058e357
    JLE 0x0058e2ee                      ; 0058e359
        ;   XREF to: 0058e2ee (CONDITIONAL_JUMP)  ; LAB_0058e2ee
    MOV ESI,dword ptr [ESP + 0x30]      ; 0058e35b
        ;   Label: LAB_0058e35b
    DEC ESI                             ; 0058e35f
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0058e360
    MOV dword ptr [ESP + 0x30],ESI      ; 0058e364
    CMP ESI,EDI                         ; 0058e368
    JGE 0x0058e2c6                      ; 0058e36a
        ;   XREF to: 0058e2c6 (CONDITIONAL_JUMP)  ; LAB_0058e2c6
    MOV EAX,dword ptr [ESP + 0x20]      ; 0058e370
        ;   Label: LAB_0058e370
    MOV ESI,dword ptr [ESP + 0x24]      ; 0058e374
    MOV EDI,dword ptr [ESP + 0x28]      ; 0058e378
    MOV EDX,dword ptr [ESP + 0x50]      ; 0058e37c
    MOV dword ptr [ESP + 0x2c],EAX      ; 0058e380
    ADD ESI,0x60                        ; 0058e384
    INC EDI                             ; 0058e387
    MOV EBP,dword ptr [EDX + 0x7140]    ; 0058e388
    MOV dword ptr [ESP + 0x24],ESI      ; 0058e38e
    MOV dword ptr [ESP + 0x28],EDI      ; 0058e392
    CMP EDI,EBP                         ; 0058e396
    JL 0x0058e29f                       ; 0058e398
        ;   XREF to: 0058e29f (CONDITIONAL_JUMP)  ; LAB_0058e29f
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0058e39e
        ;   Label: LAB_0058e39e
    MOV ESI,dword ptr [ESP + 0x14]      ; 0058e3a2
    MOV EDI,dword ptr [ESP + 0x18]      ; 0058e3a6
    MOV EDX,dword ptr [ESP + 0x50]      ; 0058e3aa
    ADD EBX,0x4                         ; 0058e3ae
    ADD ESI,0x4                         ; 0058e3b1
    INC EDI                             ; 0058e3b4
    MOV EBP,dword ptr [EDX]             ; 0058e3b5
    MOV dword ptr [ESP + 0x1c],EBX      ; 0058e3b7
    MOV dword ptr [ESP + 0x14],ESI      ; 0058e3bb
    MOV dword ptr [ESP + 0x18],EDI      ; 0058e3bf
    CMP EDI,EBP                         ; 0058e3c3
    JL 0x0058e26d                       ; 0058e3c5
        ;   XREF to: 0058e26d (CONDITIONAL_JUMP)  ; LAB_0058e26d
    ADD ESP,0x3c                        ; 0058e3cb
        ;   Label: LAB_0058e3cb
    POP EBP                             ; 0058e3ce
    POP EDI                             ; 0058e3cf
    POP ESI                             ; 0058e3d0
    POP EBX                             ; 0058e3d1
    RET                                 ; 0058e3d2
    MOV ESI,ECX                         ; 00608b27
        ;   Label: LAB_00608b27
    MOV ECX,dword ptr [ESI]             ; 00608b29
    MOV dword ptr [EDI],ECX             ; 00608b2b
    MOV ECX,dword ptr [ESI + 0x4]       ; 00608b2d
    MOV dword ptr [EDI + 0x4],ECX       ; 00608b30
    MOV ECX,dword ptr [ESI + 0x8]       ; 00608b33
    MOV dword ptr [EDI + 0x8],ECX       ; 00608b36
    MOV ECX,dword ptr [ESI + 0xc]       ; 00608b39
    MOV dword ptr [EDI + 0xc],ECX       ; 00608b3c
    ADD ESI,0x10                        ; 00608b3f
    ADD EDI,0x10                        ; 00608b42
    JMP 0x0058e33e                      ; 00608b45
        ;   XREF to: 0058e33e (UNCONDITIONAL_JUMP)  ; LAB_0058e33e
    MOV EDI,ECX                         ; 00608b4a
        ;   Label: LAB_00608b4a
    MOV ECX,dword ptr [ESI]             ; 00608b4c
    MOV dword ptr [EDI],ECX             ; 00608b4e
    MOV ECX,dword ptr [ESI + 0x4]       ; 00608b50
    MOV dword ptr [EDI + 0x4],ECX       ; 00608b53
    MOV ECX,dword ptr [ESI + 0x8]       ; 00608b56
    MOV dword ptr [EDI + 0x8],ECX       ; 00608b59
    MOV ECX,dword ptr [ESI + 0xc]       ; 00608b5c
    MOV dword ptr [EDI + 0xc],ECX       ; 00608b5f
    ADD ESI,0x10                        ; 00608b62
    ADD EDI,0x10                        ; 00608b65
    JMP 0x0058e348                      ; 00608b68
        ;   XREF to: 0058e348 (UNCONDITIONAL_JUMP)  ; LAB_0058e348

