; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0055d220(float *param_1,float *param_2,float *param_3)
;
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[1]:
;   FUN_0051d7a0 at 0051d7da
;
; Referenced Globals:
;   undefined4 DAT_0059835e
;   undefined4 DAT_00598366
;
; Called Functions:
;   FUN_00565ca4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055d220
        ;   Label: FUN_0055d220
    PUSH EBP                            ; 0055d221
    MOV EBP,ESP                         ; 0055d222
    SUB ESP,0x18                        ; 0055d224
    AND ESP,0xfffffff8                  ; 0055d227
    MOV ECX,dword ptr [EBP + 0xc]       ; 0055d22a
    MOV EBX,dword ptr [EBP + 0x10]      ; 0055d22d
    MOV EDX,dword ptr [EBP + 0x14]      ; 0055d230
    TEST EBX,EBX                        ; 0055d233
    JNZ 0x0055d26b                      ; 0055d235
        ;   XREF to: 0055d26b (CONDITIONAL_JUMP)  ; LAB_0055d26b
    TEST EDX,EDX                        ; 0055d237
        ;   Label: LAB_0055d237
    JZ 0x0055d266                       ; 0055d239
        ;   XREF to: 0055d266 (CONDITIONAL_JUMP)  ; LAB_0055d266
    FLD float ptr [ECX]                 ; 0055d23b
    FMUL ST0                            ; 0055d23d
    FLD1                                ; 0055d23f
    FSUBRP                              ; 0055d241
    FLDZ                                ; 0055d243
    FXCH                                ; 0055d245
    FSTP double ptr [ESP + 0x8]         ; 0055d247
    FCOMP double ptr [ESP + 0x8]        ; 0055d24b
    FNSTSW AX                           ; 0055d24f
    SAHF                                ; 0055d251
    JC 0x0055d2a7                       ; 0055d252
        ;   XREF to: 0055d2a7 (CONDITIONAL_JUMP)  ; LAB_0055d2a7
    MOV dword ptr [EDX + 0x8],0x0       ; 0055d254
    MOV EAX,dword ptr [EDX + 0x8]       ; 0055d25b
    MOV dword ptr [EDX + 0x4],EAX       ; 0055d25e
    MOV EAX,dword ptr [EDX + 0x4]       ; 0055d261
    MOV dword ptr [EDX],EAX             ; 0055d264
    MOV ESP,EBP                         ; 0055d266
        ;   Label: LAB_0055d266
    POP EBP                             ; 0055d268
    POP EBX                             ; 0055d269
    RET                                 ; 0055d26a
    FLD float ptr [ECX]                 ; 0055d26b
        ;   Label: LAB_0055d26b
    FST double ptr [ESP]                ; 0055d26d
    FCOMP double ptr [0x0059835e]       ; 0055d270 | DAT_0059835e
    FNSTSW AX                           ; 0055d276
    SAHF                                ; 0055d278
    JA 0x0055d283                       ; 0055d279
        ;   XREF to: 0055d283 (CONDITIONAL_JUMP)  ; LAB_0055d283
    MOV dword ptr [EBX],0x40c90fdb      ; 0055d27b
    JMP 0x0055d237                      ; 0055d281
        ;   XREF to: 0055d237 (UNCONDITIONAL_JUMP)  ; LAB_0055d237
    FLD1                                ; 0055d283
        ;   Label: LAB_0055d283
    FCOMP double ptr [ESP]              ; 0055d285
    FNSTSW AX                           ; 0055d288
    SAHF                                ; 0055d28a
    JA 0x0055d295                       ; 0055d28b
        ;   XREF to: 0055d295 (CONDITIONAL_JUMP)  ; LAB_0055d295
    MOV dword ptr [EBX],0x0             ; 0055d28d
    JMP 0x0055d237                      ; 0055d293
        ;   XREF to: 0055d237 (UNCONDITIONAL_JUMP)  ; LAB_0055d237
    FLD double ptr [ESP]                ; 0055d295
        ;   Label: LAB_0055d295
    CALL FUN_00565ca4                   ; 0055d298
        ;   XREF to: 00565ca4 (UNCONDITIONAL_CALL)  ; undefined FUN_00565ca4()
    FMUL double ptr [0x00598366]        ; 0055d29d | DAT_00598366
    FSTP float ptr [EBX]                ; 0055d2a3
    JMP 0x0055d237                      ; 0055d2a5
        ;   XREF to: 0055d237 (UNCONDITIONAL_JUMP)  ; LAB_0055d237
    FLD double ptr [ESP + 0x8]          ; 0055d2a7
        ;   Label: LAB_0055d2a7
    FSQRT                               ; 0055d2ab
    FLD float ptr [ECX + 0x4]           ; 0055d2ad
    FLD1                                ; 0055d2b0
    FDIVRP ST2,ST0                      ; 0055d2b2
    FMUL ST1                            ; 0055d2b4
    FSTP float ptr [EDX]                ; 0055d2b6
    FLD float ptr [ECX + 0x8]           ; 0055d2b8
    FMUL ST1                            ; 0055d2bb
    FSTP float ptr [EDX + 0x4]          ; 0055d2bd
    FMUL float ptr [ECX + 0xc]          ; 0055d2c0
    FSTP float ptr [EDX + 0x8]          ; 0055d2c3
    MOV ESP,EBP                         ; 0055d2c6
    POP EBP                             ; 0055d2c8
    POP EBX                             ; 0055d2c9
    RET                                 ; 0055d2ca

