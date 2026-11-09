; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_enemy_cpp_FUN_00489300(int param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005bdc43
;   undefined4 DAT_005bdc47
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00489300
        ;   Label: core_enemy.cpp_FUN_00489300
    PUSH ESI                            ; 00489301
    PUSH EDI                            ; 00489302
    PUSH EBP                            ; 00489303
    MOV EBP,ESP                         ; 00489304
    SUB ESP,0x68                        ; 00489306
    AND ESP,0xfffffff8                  ; 00489309
    MOV ESI,dword ptr [EBP + 0x14]      ; 0048930c
    MOV EBX,dword ptr [EBP + 0x18]      ; 0048930f
    PUSH ESI                            ; 00489312
    MOV EAX,dword ptr [ESI + 0x154]     ; 00489313
    LEA ESI,[ESP + 0x4]                 ; 00489319
    LEA EDI,[ESP + 0x1c]                ; 0048931d
    CALL dword ptr [EAX + 0x1c]         ; 00489321
    MOV ECX,0x6                         ; 00489324
    LEA ESI,[ESP + 0x4]                 ; 00489329
    ADD ESP,0x4                         ; 0048932d
    MOVSD.REP ES:EDI,ESI                ; 00489330
    FLD float ptr [ESP + 0x28]          ; 00489332
    FSUB float ptr [ESP + 0x1c]         ; 00489336
    FMUL double ptr [0x005bdc47]        ; 0048933a | DAT_005bdc47
    FLD float ptr [ESP + 0x18]          ; 00489340
    FLD float ptr [ESP + 0x1c]          ; 00489344
    FLD float ptr [ESP + 0x20]          ; 00489348
    LEA EDI,[ESP + 0x54]                ; 0048934c
    LEA ESI,[ESP + 0x48]                ; 00489350
    FXCH ST2                            ; 00489354
    FADD float ptr [ESP + 0x24]         ; 00489356
    FXCH                                ; 0048935a
    FADD float ptr [ESP + 0x28]         ; 0048935c
    FXCH ST2                            ; 00489360
    FADD float ptr [ESP + 0x2c]         ; 00489362
    FXCH                                ; 00489366
    FSTP float ptr [ESP + 0x48]         ; 00489368
    FXCH                                ; 0048936c
    FSTP float ptr [ESP + 0x4c]         ; 0048936e
    FSTP float ptr [ESP + 0x50]         ; 00489372
    MOVSD ES:EDI,ESI                    ; 00489376
    MOVSD ES:EDI,ESI                    ; 00489377
    MOVSD ES:EDI,ESI                    ; 00489378
    FLD float ptr [0x005bdc43]          ; 00489379 | DAT_005bdc43
    FLD float ptr [ESP + 0x54]          ; 0048937f
    FMUL ST1                            ; 00489383
    FLD float ptr [ESP + 0x58]          ; 00489385
    FMUL ST2                            ; 00489389
    FLD float ptr [ESP + 0x5c]          ; 0048938b
    FMULP ST3                           ; 0048938f
    LEA EDI,[ESP + 0x3c]                ; 00489391
    LEA ESI,[ESP + 0x30]                ; 00489395
    FXCH                                ; 00489399
    FSTP float ptr [ESP + 0x30]         ; 0048939b
    FSTP float ptr [ESP + 0x34]         ; 0048939f
    FSTP float ptr [ESP + 0x38]         ; 004893a3
    MOVSD ES:EDI,ESI                    ; 004893a7
    MOVSD ES:EDI,ESI                    ; 004893a8
    MOVSD ES:EDI,ESI                    ; 004893a9
    FLD float ptr [ESP + 0x40]          ; 004893aa
    FXCH                                ; 004893ae
    FADD ST0,ST1                        ; 004893b0
    LEA EAX,[ESP + 0x3c]                ; 004893b2
    FSTP ST1                            ; 004893b6
    FSTP float ptr [ESP + 0x40]         ; 004893b8
    CMP EBX,EAX                         ; 004893bc
    JNZ 0x004893cc                      ; 004893be
        ;   XREF to: 004893cc (CONDITIONAL_JUMP)  ; LAB_004893cc
    MOV EAX,0x1                         ; 004893c0
    MOV ESP,EBP                         ; 004893c5
    POP EBP                             ; 004893c7
    POP EDI                             ; 004893c8
    POP ESI                             ; 004893c9
    POP EBX                             ; 004893ca
    RET                                 ; 004893cb
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004893cc
        ;   Label: LAB_004893cc
    MOV dword ptr [EBX],EAX             ; 004893d0
    MOV EAX,dword ptr [ESP + 0x40]      ; 004893d2
    MOV dword ptr [EBX + 0x4],EAX       ; 004893d6
    MOV EAX,dword ptr [ESP + 0x44]      ; 004893d9
    MOV dword ptr [EBX + 0x8],EAX       ; 004893dd
    MOV EAX,0x1                         ; 004893e0
    MOV ESP,EBP                         ; 004893e5
    POP EBP                             ; 004893e7
    POP EDI                             ; 004893e8
    POP ESI                             ; 004893e9
    POP EBX                             ; 004893ea
    RET                                 ; 004893eb

