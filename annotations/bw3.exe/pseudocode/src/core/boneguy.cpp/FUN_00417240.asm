; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boneguy_cpp_FUN_00417240(float *param_1)
;
; Local Variables:
; undefined8       Stack[-0x68]:8  local_68
; undefined8       Stack[-0x60]:8  local_60
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined8       Stack[-0x40]:8  local_40
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
; XREF[2]:
;   core_boneguy.cpp_CBoneGuy_ctor_FUN_00417400 at 004175a1
;   core_gore.cpp_FUN_004cc970 at 004cca2a
;
; Referenced Globals:
;   void* switchdataD_00417228 = 004172b2
;   undefined4 DAT_005b6d6a
;   undefined4 DAT_005b6d72
;
; Called Functions:
;   crt_math.c_floor_FUN_005a3600
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00417240
        ;   Label: core_boneguy.cpp_FUN_00417240
    PUSH EDI                            ; 00417241
    PUSH EBP                            ; 00417242
    MOV EBP,ESP                         ; 00417243
    SUB ESP,0x50                        ; 00417245
    AND ESP,0xfffffff8                  ; 00417248
    MOV EAX,dword ptr [EBP + 0x10]      ; 0041724b
    MOV EBX,ESI                         ; 0041724e
    MOV EDX,dword ptr [EAX]             ; 00417250
    MOV dword ptr [ESP + 0x8],EDX       ; 00417252
    MOV EDX,dword ptr [EAX + 0x4]       ; 00417256
    FLDZ                                ; 00417259
    MOV dword ptr [ESP + 0x10],EDX      ; 0041725b
    MOV EAX,dword ptr [EAX + 0x8]       ; 0041725f
    FLD float ptr [ESP + 0x10]          ; 00417262
    MOV dword ptr [ESP + 0xc],EAX       ; 00417266
    FSTP double ptr [ESP]               ; 0041726a
    FCOMP double ptr [ESP]              ; 0041726d
    FNSTSW AX                           ; 00417270
    SAHF                                ; 00417272
    JC 0x0041733f                       ; 00417273
        ;   XREF to: 0041733f (CONDITIONAL_JUMP)  ; LAB_0041733f
    MOV EAX,dword ptr [ESP + 0xc]       ; 00417279
    MOV dword ptr [ESP + 0x4c],EAX      ; 0041727d
    MOV dword ptr [ESP + 0x44],EAX      ; 00417281
    MOV dword ptr [ESP + 0x3c],EAX      ; 00417285
        ;   Label: LAB_00417285
    MOV EAX,dword ptr [ESP + 0x44]      ; 00417289
        ;   Label: default
    MOV dword ptr [ESP + 0x14],EAX      ; 0041728d
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00417291
    LEA ESI,[ESP + 0x14]                ; 00417295
    MOV dword ptr [ESP + 0x18],EAX      ; 00417299
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0041729d
    MOV EDI,EBX                         ; 004172a1
    MOV dword ptr [ESP + 0x1c],EAX      ; 004172a3
    MOVSD ES:EDI,ESI                    ; 004172a7
    MOVSD ES:EDI,ESI                    ; 004172a8
    MOVSD ES:EDI,ESI                    ; 004172a9
    MOV EAX,EBX                         ; 004172aa
    MOV ESP,EBP                         ; 004172ac
    POP EBP                             ; 004172ae
    POP EDI                             ; 004172af
    POP EBX                             ; 004172b0
    RET                                 ; 004172b1
    MOV EAX,dword ptr [ESP + 0xc]       ; 004172b2
        ;   Label: caseD_0
    MOV dword ptr [ESP + 0x44],EAX      ; 004172b6
    MOV EAX,dword ptr [ESP + 0x40]      ; 004172ba
    MOV dword ptr [ESP + 0x4c],EAX      ; 004172be
    MOV EAX,dword ptr [ESP + 0x38]      ; 004172c2
    JMP 0x00417285                      ; 004172c6
        ;   XREF to: 00417285 (UNCONDITIONAL_JUMP)  ; LAB_00417285
    MOV EAX,dword ptr [ESP + 0x34]      ; 004172c8
        ;   Label: caseD_1
    MOV dword ptr [ESP + 0x44],EAX      ; 004172cc
    MOV EAX,dword ptr [ESP + 0xc]       ; 004172d0
    MOV dword ptr [ESP + 0x4c],EAX      ; 004172d4
    MOV EAX,dword ptr [ESP + 0x38]      ; 004172d8
    JMP 0x00417285                      ; 004172dc
        ;   XREF to: 00417285 (UNCONDITIONAL_JUMP)  ; LAB_00417285
    MOV EAX,dword ptr [ESP + 0x38]      ; 004172de
        ;   Label: caseD_2
    MOV dword ptr [ESP + 0x44],EAX      ; 004172e2
    MOV EAX,dword ptr [ESP + 0xc]       ; 004172e6
    MOV dword ptr [ESP + 0x4c],EAX      ; 004172ea
    MOV EAX,dword ptr [ESP + 0x40]      ; 004172ee
    JMP 0x00417285                      ; 004172f2
        ;   XREF to: 00417285 (UNCONDITIONAL_JUMP)  ; LAB_00417285
    MOV EAX,dword ptr [ESP + 0x38]      ; 004172f4
        ;   Label: caseD_3
    MOV dword ptr [ESP + 0x44],EAX      ; 004172f8
    MOV EAX,dword ptr [ESP + 0x34]      ; 004172fc
    MOV dword ptr [ESP + 0x4c],EAX      ; 00417300
    MOV EAX,dword ptr [ESP + 0xc]       ; 00417304
    JMP 0x00417285                      ; 00417308
        ;   XREF to: 00417285 (UNCONDITIONAL_JUMP)  ; LAB_00417285
    MOV EAX,dword ptr [ESP + 0x40]      ; 0041730d
        ;   Label: caseD_4
    MOV dword ptr [ESP + 0x44],EAX      ; 00417311
    MOV EAX,dword ptr [ESP + 0x38]      ; 00417315
    MOV dword ptr [ESP + 0x4c],EAX      ; 00417319
    MOV EAX,dword ptr [ESP + 0xc]       ; 0041731d
    JMP 0x00417285                      ; 00417321
        ;   XREF to: 00417285 (UNCONDITIONAL_JUMP)  ; LAB_00417285
    MOV EAX,dword ptr [ESP + 0xc]       ; 00417326
        ;   Label: caseD_5
    MOV dword ptr [ESP + 0x44],EAX      ; 0041732a
    MOV EAX,dword ptr [ESP + 0x38]      ; 0041732e
    MOV dword ptr [ESP + 0x4c],EAX      ; 00417332
    MOV EAX,dword ptr [ESP + 0x34]      ; 00417336
    JMP 0x00417285                      ; 0041733a
        ;   XREF to: 00417285 (UNCONDITIONAL_JUMP)  ; LAB_00417285
    FLD double ptr [ESP]                ; 0041733f
        ;   Label: LAB_0041733f
    FMUL double ptr [0x005b6d6a]        ; 00417342 | DAT_005b6d6a
    FLD float ptr [ESP + 0x8]           ; 00417348
    FLD ST0                             ; 0041734c
    FMUL double ptr [0x005b6d72]        ; 0041734e | DAT_005b6d72
    FXCH ST2                            ; 00417354
    FSTP float ptr [ESP + 0x30]         ; 00417356
    FXCH                                ; 0041735a
    FSTP ST1                            ; 0041735c
    FST float ptr [ESP + 0x8]           ; 0041735e
    SUB ESP,0x8                         ; 00417362
    FSTP double ptr [ESP]               ; 00417365
    CALL crt_math.c_floor_FUN_005a3600  ; 00417368
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005a3600(double input_value)
    MOV dword ptr [ESP + 0x28],EAX      ; 0041736d
    MOV dword ptr [ESP + 0x2c],EDX      ; 00417371
    FLD double ptr [ESP + 0x28]         ; 00417375
    ADD ESP,0x8                         ; 00417379
    CALL crt_math.c_round_FUN_005a3120  ; 0041737c
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x2c]        ; 00417381
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00417385
    MOV dword ptr [ESP + 0x48],EAX      ; 00417389
    LEA EDX,[EAX + 0x258]               ; 0041738d
    MOV ECX,0x6                         ; 00417393
    MOV EAX,EDX                         ; 00417398
    SAR EDX,0x1f                        ; 0041739a
    IDIV ECX                            ; 0041739d
    FLD float ptr [ESP + 0x30]          ; 0041739f
    FLD1                                ; 004173a3
    FSUBRP                              ; 004173a5
    FLD float ptr [ESP + 0xc]           ; 004173a7
    FXCH                                ; 004173ab
    FMUL ST1                            ; 004173ad
    FLD1                                ; 004173af
    FLD float ptr [ESP + 0x30]          ; 004173b1
    FILD dword ptr [ESP + 0x48]         ; 004173b5
    FSUBR float ptr [ESP + 0x8]         ; 004173b9
    FXCH ST2                            ; 004173bd
    FSUB ST0,ST2                        ; 004173bf
    FXCH                                ; 004173c1
    FMULP ST2                           ; 004173c3
    FMUL float ptr [ESP + 0x30]         ; 004173c5
    FLD1                                ; 004173c9
    FLD1                                ; 004173cb
    FXCH                                ; 004173cd
    FSUBRP ST3,ST0                      ; 004173cf
    FSUBRP                              ; 004173d1
    FXCH                                ; 004173d3
    FMUL ST3                            ; 004173d5
    FXCH                                ; 004173d7
    FMULP ST3                           ; 004173d9
    FXCH                                ; 004173db
    FSTP float ptr [ESP + 0x38]         ; 004173dd
    FSTP float ptr [ESP + 0x34]         ; 004173e1
    FSTP float ptr [ESP + 0x40]         ; 004173e5
    CMP EDX,0x5                         ; 004173e9
    JA 0x00417289                       ; 004173ec
        ;   XREF to: 00417289 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x417228]  ; 004173f2 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD

