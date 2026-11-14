; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005bf360(void)
;
; Local Variables:
; undefined8       Stack[-0x1c]:8  local_1c
; undefined8       Stack[-0x14]:8  local_14
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   crt_math.c_pow_FUN_005b9484 at 005b95a2
;
; Referenced Globals:
;   undefined4 DAT_0061f45c
;   undefined4 DAT_0061f464
;
; Called Functions:
;   crt_unknown.c_FUN_005c3bdb
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005bf360
        ;   Label: crt_unknown.c_FUN_005bf360
    MOV EBP,ESP                         ; 005bf361
    SUB ESP,0x10                        ; 005bf363
    FCOM double ptr [0x0061f45c]        ; 005bf366 | DAT_0061f45c
    FSTSW word ptr [EBP + -0x10]        ; 005bf36c
    WAIT                                ; 005bf370
    MOV AH,byte ptr [EBP + -0xf]        ; 005bf371
    SAHF                                ; 005bf374
    JBE 0x005bf398                      ; 005bf375
        ;   XREF to: 005bf398 (CONDITIONAL_JUMP)  ; LAB_005bf398
    CMP AL,0x7                          ; 005bf377
    JZ 0x005bf392                       ; 005bf379
        ;   XREF to: 005bf392 (CONDITIONAL_JUMP)  ; LAB_005bf392
    FSTP double ptr [EBP + -0x10]       ; 005bf37b
    MOV dword ptr [EBP + -0x8],EAX      ; 005bf37e
    MOV dword ptr [EBP + -0x4],EDX      ; 005bf381
    CALL crt_unknown.c_FUN_005c3bdb     ; 005bf384
        ;   XREF to: 005c3bdb (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c3bdb()
    PUSH EDX                            ; 005bf389
    PUSH EAX                            ; 005bf38a
    FLD double ptr [ESP]                ; 005bf38b
    MOV EDX,dword ptr [EBP + -0x4]      ; 005bf38e
    WAIT                                ; 005bf391
    MOV AL,0x1                          ; 005bf392
        ;   Label: LAB_005bf392
    MOV ESP,EBP                         ; 005bf394
    POP EBP                             ; 005bf396
    RET                                 ; 005bf397
    FCOM double ptr [0x0061f464]        ; 005bf398 | DAT_0061f464
        ;   Label: LAB_005bf398
    FSTSW word ptr [EBP + -0x10]        ; 005bf39e
    WAIT                                ; 005bf3a2
    MOV AH,byte ptr [EBP + -0xf]        ; 005bf3a3
    SAHF                                ; 005bf3a6
    JA 0x005bf3ad                       ; 005bf3a7
        ;   XREF to: 005bf3ad (CONDITIONAL_JUMP)  ; LAB_005bf3ad
    FLDZ                                ; 005bf3a9
    JMP 0x005bf3c1                      ; 005bf3ab
        ;   XREF to: 005bf3c1 (UNCONDITIONAL_JUMP)  ; LAB_005bf3c1
    FLDL2E                              ; 005bf3ad
        ;   Label: LAB_005bf3ad
    FMULP                               ; 005bf3af
    FLD ST0                             ; 005bf3b1
    FRNDINT                             ; 005bf3b3
    FXCH                                ; 005bf3b5
    FSUB ST0,ST1                        ; 005bf3b7
    F2XM1                               ; 005bf3b9
    FLD1                                ; 005bf3bb
    FADDP                               ; 005bf3bd
    FSCALE                              ; 005bf3bf
    FSTP ST1                            ; 005bf3c1
        ;   Label: LAB_005bf3c1
    MOV AL,0x0                          ; 005bf3c3
    MOV ESP,EBP                         ; 005bf3c5
    POP EBP                             ; 005bf3c7
    RET                                 ; 005bf3c8

