; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_dcube_cpp_FUN_00458210(int param_1,undefined4 param_2,undefined4 param_3,float *param_4,uint *param_5)
;
; Local Variables:
; undefined8       Stack[-0x40]:8  local_40
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
; XREF[3]:
;   core_dtrace.cpp_FUN_0048b150 at 0048b771
;   core_dtrace.cpp_FUN_0048b880 at 0048bd1f
;   core_dtrace.cpp_FUN_0048bdc0 at 0048bed4
;
; Referenced Globals:
;   undefined4 DAT_0152c2a8
;   undefined4 DAT_0152c2ac
;   undefined4 DAT_0152c2b0
;   undefined4 DAT_0152c2b4
;   undefined4 DAT_0152c2b8
;   undefined4 DAT_0152c2bc
;   undefined4 DAT_0152c2c0
;   undefined4 DAT_0152c2c4
;   undefined4 DAT_0152c2c8
;
; Called Functions:
;   core_dcube.cpp_FUN_004560f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00458210
        ;   Label: core_dcube.cpp_FUN_00458210
    PUSH ESI                            ; 00458211
    PUSH EDI                            ; 00458212
    PUSH EBP                            ; 00458213
    MOV EBP,ESP                         ; 00458214
    SUB ESP,0x30                        ; 00458216
    AND ESP,0xfffffff8                  ; 00458219
    MOV EBX,dword ptr [EBP + 0x14]      ; 0045821c
    MOV ECX,0xffffffff                  ; 0045821f
    MOV EDX,0x3f800347                  ; 00458224
    MOV EDI,dword ptr [EBX + 0x28]      ; 00458229
    XOR ESI,ESI                         ; 0045822c
    MOV dword ptr [ESP + 0x24],ECX      ; 0045822e
    MOV dword ptr [ESP + 0x28],EDX      ; 00458232
    TEST EDI,EDI                        ; 00458236
    JLE 0x0045829b                      ; 00458238
        ;   XREF to: 0045829b (CONDITIONAL_JUMP)  ; LAB_0045829b
    XOR EDI,EDI                         ; 0045823a
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0045823c
        ;   Label: LAB_0045823c
    PUSH EAX                            ; 0045823f
    MOV EDX,dword ptr [EBP + 0x18]      ; 00458240
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00458243
    PUSH EDX                            ; 00458246
    ADD EAX,EDI                         ; 00458247
    PUSH EAX                            ; 00458249
    CALL core_dcube.cpp_FUN_004560f0    ; 0045824a
        ;   XREF to: 004560f0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_FUN_004560f0()
    MOV dword ptr [ESP + 0x38],EAX      ; 0045824f
    FLD float ptr [ESP + 0x38]          ; 00458253
    ADD ESP,0xc                         ; 00458257
    FLDZ                                ; 0045825a
    FXCH                                ; 0045825c
    FST float ptr [ESP + 0x8]           ; 0045825e
    FSTP double ptr [ESP]               ; 00458262
    FCOMP double ptr [ESP]              ; 00458265
    FNSTSW AX                           ; 00458268
    SAHF                                ; 0045826a
    JA 0x00458290                       ; 0045826b
        ;   XREF to: 00458290 (CONDITIONAL_JUMP)  ; LAB_00458290
    FLD float ptr [ESP + 0x8]           ; 0045826d
    FCOMP float ptr [ESP + 0x28]        ; 00458271
    FNSTSW AX                           ; 00458275
    SAHF                                ; 00458277
    JNC 0x00458290                      ; 00458278
        ;   XREF to: 00458290 (CONDITIONAL_JUMP)  ; LAB_00458290
    FLD1                                ; 0045827a
    FCOMP double ptr [ESP]              ; 0045827c
    FNSTSW AX                           ; 0045827f
    SAHF                                ; 00458281
    JC 0x00458290                       ; 00458282
        ;   XREF to: 00458290 (CONDITIONAL_JUMP)  ; LAB_00458290
    MOV EAX,dword ptr [ESP + 0x8]       ; 00458284
    MOV dword ptr [ESP + 0x24],ESI      ; 00458288
    MOV dword ptr [ESP + 0x28],EAX      ; 0045828c
    INC ESI                             ; 00458290
        ;   Label: LAB_00458290
    MOV EAX,dword ptr [EBX + 0x28]      ; 00458291
    ADD EDI,0x20                        ; 00458294
    CMP ESI,EAX                         ; 00458297
    JL 0x0045823c                       ; 00458299
        ;   XREF to: 0045823c (CONDITIONAL_JUMP)  ; LAB_0045823c
    MOV EDX,dword ptr [ESP + 0x24]      ; 0045829b
        ;   Label: LAB_0045829b
    TEST EDX,EDX                        ; 0045829f
    JL 0x00458378                       ; 004582a1
        ;   XREF to: 00458378 (CONDITIONAL_JUMP)  ; LAB_00458378
    LEA EDI,[ESP + 0xc]                 ; 004582a7
    MOV EAX,EDX                         ; 004582ab
    MOV ESI,dword ptr [EBX + 0x2c]      ; 004582ad
    SHL EAX,0x5                         ; 004582b0
    MOV ECX,dword ptr [EBP + 0x20]      ; 004582b3
    FLD float ptr [ESI + EAX*0x1 + 0xc] ; 004582b6
    FLD float ptr [ESI + EAX*0x1 + 0x10] ; 004582ba
    FLD float ptr [ESI + EAX*0x1 + 0x14] ; 004582be
    FXCH ST2                            ; 004582c2
    FCHS                                ; 004582c4
    FXCH                                ; 004582c6
    FCHS                                ; 004582c8
    FXCH ST2                            ; 004582ca
    FCHS                                ; 004582cc
    LEA ESI,[ESP + 0x18]                ; 004582ce
    LEA EAX,[ESP + 0xc]                 ; 004582d2
    FXCH                                ; 004582d6
    FSTP float ptr [ESP + 0x18]         ; 004582d8
    FXCH                                ; 004582dc
    FSTP float ptr [ESP + 0x1c]         ; 004582de
    FSTP float ptr [ESP + 0x20]         ; 004582e2
    MOVSD ES:EDI,ESI                    ; 004582e6
    MOVSD ES:EDI,ESI                    ; 004582e7
    MOVSD ES:EDI,ESI                    ; 004582e8
    CMP EAX,ECX                         ; 004582e9
    JNZ 0x00458383                      ; 004582eb
        ;   XREF to: 00458383 (CONDITIONAL_JUMP)  ; LAB_00458383
    MOV ESI,dword ptr [ESP + 0x24]      ; 004582f1
        ;   Label: LAB_004582f1
    MOV EAX,dword ptr [EBX + 0x30]      ; 004582f5
    ADD EAX,ESI                         ; 004582f8
    MOV AL,byte ptr [EAX]               ; 004582fa
    MOV ESI,dword ptr [EBP + 0x24]      ; 004582fc
    AND EAX,0xff                        ; 004582ff
    MOV dword ptr [ESI],EAX             ; 00458304
    MOV EAX,dword ptr [ESP + 0x24]      ; 00458306
    MOV ESI,dword ptr [EBX + 0x2c]      ; 0045830a
    SHL EAX,0x5                         ; 0045830d
    MOV EAX,dword ptr [ESI + EAX*0x1]   ; 00458310
    CMP EAX,0x152c2a8                   ; 00458313
    JZ 0x00458334                       ; 00458318
        ;   XREF to: 00458334 (CONDITIONAL_JUMP)  ; LAB_00458334
    FLD float ptr [EAX]                 ; 0045831a
    FLD float ptr [EAX + 0x8]           ; 0045831c
    MOV EDX,dword ptr [EAX + 0x4]       ; 0045831f
    MOV dword ptr [0x0152c2ac],EDX      ; 00458322 | DAT_0152c2ac
    FSTP float ptr [0x0152c2b0]         ; 00458328 | DAT_0152c2b0
    FSTP float ptr [0x0152c2a8]         ; 0045832e | DAT_0152c2a8
    MOV EAX,dword ptr [ESP + 0x24]      ; 00458334
        ;   Label: LAB_00458334
    MOV ESI,dword ptr [EBX + 0x2c]      ; 00458338
    SHL EAX,0x5                         ; 0045833b
    MOV EAX,dword ptr [ESI + EAX*0x1 + 0x4] ; 0045833e
    CMP EAX,0x152c2b4                   ; 00458342
    JZ 0x00458363                       ; 00458347
        ;   XREF to: 00458363 (CONDITIONAL_JUMP)  ; LAB_00458363
    FLD float ptr [EAX]                 ; 00458349
    FLD float ptr [EAX + 0x8]           ; 0045834b
    MOV EDX,dword ptr [EAX + 0x4]       ; 0045834e
    MOV dword ptr [0x0152c2b8],EDX      ; 00458351 | DAT_0152c2b8
    FSTP float ptr [0x0152c2bc]         ; 00458357 | DAT_0152c2bc
    FSTP float ptr [0x0152c2b4]         ; 0045835d | DAT_0152c2b4
    MOV EAX,dword ptr [ESP + 0x24]      ; 00458363
        ;   Label: LAB_00458363
    MOV EBX,dword ptr [EBX + 0x2c]      ; 00458367
    SHL EAX,0x5                         ; 0045836a
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x8] ; 0045836d
    CMP EAX,0x152c2c0                   ; 00458371
    JNZ 0x0045839c                      ; 00458376
        ;   XREF to: 0045839c (CONDITIONAL_JUMP)  ; LAB_0045839c
    MOV EAX,dword ptr [ESP + 0x28]      ; 00458378
        ;   Label: LAB_00458378
    MOV ESP,EBP                         ; 0045837c
    POP EBP                             ; 0045837e
    POP EDI                             ; 0045837f
    POP ESI                             ; 00458380
    POP EBX                             ; 00458381
    RET                                 ; 00458382
    MOV EAX,dword ptr [ESP + 0xc]       ; 00458383
        ;   Label: LAB_00458383
    MOV dword ptr [ECX],EAX             ; 00458387
    MOV EAX,dword ptr [ESP + 0x10]      ; 00458389
    MOV dword ptr [ECX + 0x4],EAX       ; 0045838d
    MOV EAX,dword ptr [ESP + 0x14]      ; 00458390
    MOV dword ptr [ECX + 0x8],EAX       ; 00458394
    JMP 0x004582f1                      ; 00458397
        ;   XREF to: 004582f1 (UNCONDITIONAL_JUMP)  ; LAB_004582f1
    FLD float ptr [EAX]                 ; 0045839c
        ;   Label: LAB_0045839c
    FLD float ptr [EAX + 0x8]           ; 0045839e
    MOV EDX,dword ptr [EAX + 0x4]       ; 004583a1
    MOV dword ptr [0x0152c2c4],EDX      ; 004583a4 | DAT_0152c2c4
    FSTP float ptr [0x0152c2c8]         ; 004583aa | DAT_0152c2c8
    FSTP float ptr [0x0152c2c0]         ; 004583b0 | DAT_0152c2c0
    MOV EAX,dword ptr [ESP + 0x28]      ; 004583b6
    MOV ESP,EBP                         ; 004583ba
    POP EBP                             ; 004583bc
    POP EDI                             ; 004583bd
    POP ESI                             ; 004583be
    POP EBX                             ; 004583bf
    RET                                 ; 004583c0

