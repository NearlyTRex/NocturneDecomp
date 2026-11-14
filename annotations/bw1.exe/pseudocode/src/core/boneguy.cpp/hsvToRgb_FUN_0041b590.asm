; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boneguy_cpp_hsvToRgb_FUN_0041b590(float *param_1)
;
;
; XREF[1]:
;   core_boneguy.cpp_CBoneGuy_ctor_FUN_0041b750 at 0041b8dd
;
; Referenced Globals:
;   undefined4 DAT_005d4589
;   undefined4 DAT_005d4591
;
; Called Functions:
;   crt_math.c_floor_FUN_005c0880
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041b590
        ;   Label: core_boneguy.cpp_hsvToRgb_FUN_0041b590
    PUSH EDI                            ; 0041b591
    PUSH EBP                            ; 0041b592
    MOV EBP,ESP                         ; 0041b593
    SUB ESP,0x50                        ; 0041b595
    AND ESP,0xfffffff8                  ; 0041b598
    MOV EAX,dword ptr [EBP + 0x10]      ; 0041b59b
    MOV EBX,ESI                         ; 0041b59e
    MOV EDX,dword ptr [EAX]             ; 0041b5a0
    MOV dword ptr [ESP + 0x8],EDX       ; 0041b5a2
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041b5a6
    FLDZ                                ; 0041b5a9
    MOV dword ptr [ESP + 0x10],EDX      ; 0041b5ab
    MOV EAX,dword ptr [EAX + 0x8]       ; 0041b5af
    FLD float ptr [ESP + 0x10]          ; 0041b5b2
    MOV dword ptr [ESP + 0xc],EAX       ; 0041b5b6
    FSTP double ptr [ESP]               ; 0041b5ba
    FCOMP double ptr [ESP]              ; 0041b5bd
    FNSTSW AX                           ; 0041b5c0
    SAHF                                ; 0041b5c2
    JC 0x0041b68f                       ; 0041b5c3
        ;   XREF to: 0041b68f (CONDITIONAL_JUMP)  ; LAB_0041b68f
    MOV EAX,dword ptr [ESP + 0xc]       ; 0041b5c9
    MOV dword ptr [ESP + 0x4c],EAX      ; 0041b5cd
    MOV dword ptr [ESP + 0x44],EAX      ; 0041b5d1
    MOV dword ptr [ESP + 0x3c],EAX      ; 0041b5d5
        ;   Label: LAB_0041b5d5
    MOV EAX,dword ptr [ESP + 0x44]      ; 0041b5d9
        ;   Label: LAB_0041b5d9
    MOV dword ptr [ESP + 0x14],EAX      ; 0041b5dd
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0041b5e1
    LEA ESI,[ESP + 0x14]                ; 0041b5e5
    MOV dword ptr [ESP + 0x18],EAX      ; 0041b5e9
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0041b5ed
    MOV EDI,EBX                         ; 0041b5f1
    MOV dword ptr [ESP + 0x1c],EAX      ; 0041b5f3
    MOVSD ES:EDI,ESI                    ; 0041b5f7
    MOVSD ES:EDI,ESI                    ; 0041b5f8
    MOVSD ES:EDI,ESI                    ; 0041b5f9
    MOV EAX,EBX                         ; 0041b5fa
    MOV ESP,EBP                         ; 0041b5fc
    POP EBP                             ; 0041b5fe
    POP EDI                             ; 0041b5ff
    POP EBX                             ; 0041b600
    RET                                 ; 0041b601
    FLD double ptr [ESP]                ; 0041b68f
        ;   Label: LAB_0041b68f
    FMUL double ptr [0x005d4589]        ; 0041b692 | DAT_005d4589
    FLD float ptr [ESP + 0x8]           ; 0041b698
    FLD ST0                             ; 0041b69c
    FMUL double ptr [0x005d4591]        ; 0041b69e | DAT_005d4591
    FXCH ST2                            ; 0041b6a4
    FSTP float ptr [ESP + 0x30]         ; 0041b6a6
    FXCH                                ; 0041b6aa
    FSTP ST1                            ; 0041b6ac
    FST float ptr [ESP + 0x8]           ; 0041b6ae
    SUB ESP,0x8                         ; 0041b6b2
    FSTP double ptr [ESP]               ; 0041b6b5
    CALL crt_math.c_floor_FUN_005c0880  ; 0041b6b8
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005c0880(double input_value)
    MOV dword ptr [ESP + 0x28],EAX      ; 0041b6bd
    MOV dword ptr [ESP + 0x2c],EDX      ; 0041b6c1
    FLD double ptr [ESP + 0x28]         ; 0041b6c5
    ADD ESP,0x8                         ; 0041b6c9
    CALL crt_math.c_round_FUN_005c03a0  ; 0041b6cc
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x2c]        ; 0041b6d1
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0041b6d5
    MOV dword ptr [ESP + 0x48],EAX      ; 0041b6d9
    LEA EDX,[EAX + 0x258]               ; 0041b6dd
    MOV ECX,0x6                         ; 0041b6e3
    MOV EAX,EDX                         ; 0041b6e8
    SAR EDX,0x1f                        ; 0041b6ea
    IDIV ECX                            ; 0041b6ed
    FLD float ptr [ESP + 0x30]          ; 0041b6ef
    FLD1                                ; 0041b6f3
    FSUBRP                              ; 0041b6f5
    FLD float ptr [ESP + 0xc]           ; 0041b6f7
    FXCH                                ; 0041b6fb
    FMUL ST1                            ; 0041b6fd
    FLD1                                ; 0041b6ff
    FLD float ptr [ESP + 0x30]          ; 0041b701
    FILD dword ptr [ESP + 0x48]         ; 0041b705
    FSUBR float ptr [ESP + 0x8]         ; 0041b709
    FXCH ST2                            ; 0041b70d
    FSUB ST0,ST2                        ; 0041b70f
    FXCH                                ; 0041b711
    FMULP ST2                           ; 0041b713
    FMUL float ptr [ESP + 0x30]         ; 0041b715
    FLD1                                ; 0041b719
    FLD1                                ; 0041b71b
    FXCH                                ; 0041b71d
    FSUBRP ST3,ST0                      ; 0041b71f
    FSUBRP                              ; 0041b721
    FXCH                                ; 0041b723
    FMUL ST3                            ; 0041b725
    FXCH                                ; 0041b727
    FMULP ST3                           ; 0041b729
    FXCH                                ; 0041b72b
    FSTP float ptr [ESP + 0x38]         ; 0041b72d
    FSTP float ptr [ESP + 0x34]         ; 0041b731
    FSTP float ptr [ESP + 0x40]         ; 0041b735
    CMP EDX,0x5                         ; 0041b739
    JA 0x0041b5d9                       ; 0041b73c
        ;   XREF to: 0041b5d9 (CONDITIONAL_JUMP)  ; LAB_0041b5d9
    JMP dword ptr [EDX*0x4 + 0x41b578]  ; 0041b742

