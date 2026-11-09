; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_dcamera_cpp_sampleFogAlongRay_FUN_0043b1a0(int param_1,int *param_2,int *param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_00441f50 at 004421f0
;   core_dcamera.cpp_FUN_00442cb0 at 00442d4b
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043b1a0
        ;   Label: core_dcamera.cpp_sampleFogAlongRay_FUN_0043b1a0
    PUSH ESI                            ; 0043b1a1
    PUSH EDI                            ; 0043b1a2
    PUSH EBP                            ; 0043b1a3
    SUB ESP,0x1c                        ; 0043b1a4
    MOV EBP,dword ptr [ESP + 0x30]      ; 0043b1a7
    MOV ESI,dword ptr [ESP + 0x34]      ; 0043b1ab
    MOV ECX,dword ptr [ESP + 0x38]      ; 0043b1af
    CMP dword ptr [ESP + 0x3c],0x0      ; 0043b1b3
    JZ 0x0043b344                       ; 0043b1b8
        ;   XREF to: 0043b344 (CONDITIONAL_JUMP)  ; LAB_0043b344
    MOV EBX,dword ptr [ESI]             ; 0043b1be
    MOV EAX,dword ptr [ECX]             ; 0043b1c0
    SUB EAX,EBX                         ; 0043b1c2
    MOV EDI,dword ptr [ESI + 0x4]       ; 0043b1c4
    MOV dword ptr [ESP + 0x14],EAX      ; 0043b1c7
    MOV EAX,dword ptr [ECX + 0x4]       ; 0043b1cb
    SUB EAX,EDI                         ; 0043b1ce
    MOV EDX,dword ptr [ESI + 0x8]       ; 0043b1d0
    MOV dword ptr [ESP + 0xc],EAX       ; 0043b1d3
    MOV EAX,dword ptr [ECX + 0x8]       ; 0043b1d7
    SUB EAX,EDX                         ; 0043b1da
    MOV dword ptr [ESP + 0x10],EAX      ; 0043b1dc
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0043b1e0
    MOV EDX,EAX                         ; 0043b1e4
    SAR EDX,0x1f                        ; 0043b1e6
    SHL EDX,0x8                         ; 0043b1e9
    SBB EAX,EDX                         ; 0043b1ec
    SAR EAX,0x8                         ; 0043b1ee
    MOV dword ptr [ESP + 0x3c],EAX      ; 0043b1f1
    TEST EAX,EAX                        ; 0043b1f5
    JZ 0x0043b33c                       ; 0043b1f7
        ;   XREF to: 0043b33c (CONDITIONAL_JUMP)  ; LAB_0043b33c
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043b1fd
    MOV EDX,EAX                         ; 0043b201
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0043b203
    SAR EDX,0x1f                        ; 0043b207
    IDIV EBX                            ; 0043b20a
    MOV dword ptr [ESP + 0x14],EAX      ; 0043b20c
    MOV EAX,dword ptr [ESP + 0xc]       ; 0043b210
    MOV EDX,EAX                         ; 0043b214
    SAR EDX,0x1f                        ; 0043b216
    IDIV EBX                            ; 0043b219
    MOV dword ptr [ESP + 0xc],EAX       ; 0043b21b
    MOV EAX,dword ptr [ESP + 0x10]      ; 0043b21f
    MOV EDX,EAX                         ; 0043b223
    SAR EDX,0x1f                        ; 0043b225
    IDIV EBX                            ; 0043b228
    MOV EDI,ESP                         ; 0043b22a
    MOVSD ES:EDI,ESI                    ; 0043b22c
    MOVSD ES:EDI,ESI                    ; 0043b22d
    MOVSD ES:EDI,ESI                    ; 0043b22e
    MOV ECX,EBX                         ; 0043b22f
    MOV ESI,dword ptr [ESP]             ; 0043b231
    MOV EDI,dword ptr [ESP + 0x4]       ; 0043b234
    MOV EDX,dword ptr [ESP + 0x8]       ; 0043b238
    MOV dword ptr [ESP + 0x10],EAX      ; 0043b23c
    XOR EBX,EBX                         ; 0043b240
    MOV EAX,dword ptr [EBP + 0x1000]    ; 0043b242
    MOV dword ptr [ESP + 0x18],EBX      ; 0043b248
    ADD ESI,EAX                         ; 0043b24c
    MOV EAX,dword ptr [EBP + 0x1004]    ; 0043b24e
    MOV dword ptr [ESP],ESI             ; 0043b254
    ADD EDI,EAX                         ; 0043b257
    MOV EAX,dword ptr [EBP + 0x1008]    ; 0043b259
    XOR ESI,ESI                         ; 0043b25f
    ADD EDX,EAX                         ; 0043b261
    MOV dword ptr [ESP + 0x4],EDI       ; 0043b263
    MOV dword ptr [ESP + 0x8],EDX       ; 0043b267
    TEST ECX,ECX                        ; 0043b26b
    JLE 0x0043b338                      ; 0043b26d
        ;   XREF to: 0043b338 (CONDITIONAL_JUMP)  ; LAB_0043b338
    MOV EAX,dword ptr [ESP + 0x8]       ; 0043b273
        ;   Label: LAB_0043b273
    MOV EDX,EAX                         ; 0043b277
    SAR EDX,0x1f                        ; 0043b279
    SHL EDX,0x8                         ; 0043b27c
    SBB EAX,EDX                         ; 0043b27f
    SAR EAX,0x8                         ; 0043b281
    MOV ECX,EAX                         ; 0043b284
    MOV EAX,dword ptr [ESP + 0x4]       ; 0043b286
    MOV EDX,EAX                         ; 0043b28a
    SAR EDX,0x1f                        ; 0043b28c
    SHL EDX,0x8                         ; 0043b28f
    SBB EAX,EDX                         ; 0043b292
    SAR EAX,0x8                         ; 0043b294
    AND ECX,0xf                         ; 0043b297
    SHL ECX,0x8                         ; 0043b29a
    AND EAX,0xf                         ; 0043b29d
    ADD ECX,EBP                         ; 0043b2a0
    SHL EAX,0x4                         ; 0043b2a2
    ADD ECX,EAX                         ; 0043b2a5
    MOV EAX,dword ptr [ESP]             ; 0043b2a7
    MOV EDX,EAX                         ; 0043b2aa
    SAR EDX,0x1f                        ; 0043b2ac
    SHL EDX,0x8                         ; 0043b2af
    SBB EAX,EDX                         ; 0043b2b2
    SAR EAX,0x8                         ; 0043b2b4
    AND EAX,0xf                         ; 0043b2b7
    MOV CL,byte ptr [ECX + EAX*0x1]     ; 0043b2ba
    MOV EDX,ECX                         ; 0043b2bd
    MOV EAX,dword ptr [EBP + 0x101c]    ; 0043b2bf
    AND EDX,0xff                        ; 0043b2c5
    IMUL EDX                            ; 0043b2cb
    SHRD EAX,EDX,0x10                   ; 0043b2cd
    MOV EBX,dword ptr [EBP + 0x1018]    ; 0043b2d1
    MOV ECX,EAX                         ; 0043b2d7
    TEST EBX,EBX                        ; 0043b2d9
    JZ 0x0043b2f1                       ; 0043b2db
        ;   XREF to: 0043b2f1 (CONDITIONAL_JUMP)  ; LAB_0043b2f1
    MOV EAX,dword ptr [ESP + 0x4]       ; 0043b2dd
    CMP EAX,EBX                         ; 0043b2e1
    JLE 0x0043b348                      ; 0043b2e3
        ;   XREF to: 0043b348 (CONDITIONAL_JUMP)  ; LAB_0043b348
    XOR EAX,EAX                         ; 0043b2e5
    MOV EDX,ECX                         ; 0043b2e7
        ;   Label: LAB_0043b2e7
    IMUL EDX                            ; 0043b2e9
    SHRD EAX,EDX,0x10                   ; 0043b2eb
    MOV ECX,EAX                         ; 0043b2ef
    MOV EBX,dword ptr [ESP + 0x18]      ; 0043b2f1
        ;   Label: LAB_0043b2f1
    ADD EBX,ECX                         ; 0043b2f5
    MOV dword ptr [ESP + 0x18],EBX      ; 0043b2f7
    CMP EBX,0x4000                      ; 0043b2fb
    JA 0x0043b366                       ; 0043b301
        ;   XREF to: 0043b366 (CONDITIONAL_JUMP)  ; LAB_0043b366
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043b303
    MOV EBX,dword ptr [ESP]             ; 0043b307
    MOV EDI,dword ptr [ESP + 0x4]       ; 0043b30a
    MOV EDX,dword ptr [ESP + 0x8]       ; 0043b30e
    MOV ECX,dword ptr [ESP + 0x3c]      ; 0043b312
    ADD EBX,EAX                         ; 0043b316
    MOV EAX,dword ptr [ESP + 0xc]       ; 0043b318
    INC ESI                             ; 0043b31c
    ADD EDI,EAX                         ; 0043b31d
    MOV EAX,dword ptr [ESP + 0x10]      ; 0043b31f
    MOV dword ptr [ESP],EBX             ; 0043b323
    ADD EDX,EAX                         ; 0043b326
    MOV dword ptr [ESP + 0x4],EDI       ; 0043b328
    MOV dword ptr [ESP + 0x8],EDX       ; 0043b32c
    CMP ESI,ECX                         ; 0043b330
    JL 0x0043b273                       ; 0043b332
        ;   XREF to: 0043b273 (CONDITIONAL_JUMP)  ; LAB_0043b273
    MOV EAX,dword ptr [ESP + 0x18]      ; 0043b338
        ;   Label: LAB_0043b338
    ADD ESP,0x1c                        ; 0043b33c
        ;   Label: LAB_0043b33c
    POP EBP                             ; 0043b33f
    POP EDI                             ; 0043b340
    POP ESI                             ; 0043b341
    POP EBX                             ; 0043b342
    RET                                 ; 0043b343
    XOR EAX,EAX                         ; 0043b344
        ;   Label: LAB_0043b344
    JMP 0x0043b33c                      ; 0043b346
        ;   XREF to: 0043b33c (UNCONDITIONAL_JUMP)  ; LAB_0043b33c
    TEST EAX,EAX                        ; 0043b348
        ;   Label: LAB_0043b348
    JGE 0x0043b353                      ; 0043b34a
        ;   XREF to: 0043b353 (CONDITIONAL_JUMP)  ; LAB_0043b353
    MOV EAX,0x10000                     ; 0043b34c
    JMP 0x0043b2e7                      ; 0043b351
        ;   XREF to: 0043b2e7 (UNCONDITIONAL_JUMP)  ; LAB_0043b2e7
    MOV EDX,dword ptr [ESP + 0x4]       ; 0043b353
        ;   Label: LAB_0043b353
    MOV EAX,EBX                         ; 0043b357
    SUB EAX,EDX                         ; 0043b359
    MOV EDX,0x10000                     ; 0043b35b
    IMUL EDX                            ; 0043b360
    IDIV EBX                            ; 0043b362
    JMP 0x0043b2e7                      ; 0043b364
        ;   XREF to: 0043b2e7 (UNCONDITIONAL_JUMP)  ; LAB_0043b2e7
    MOV EAX,0x4000                      ; 0043b366
        ;   Label: LAB_0043b366
    ADD ESP,0x1c                        ; 0043b36b
    POP EBP                             ; 0043b36e
    POP EDI                             ; 0043b36f
    POP ESI                             ; 0043b370
    POP EBX                             ; 0043b371
    RET                                 ; 0043b372

