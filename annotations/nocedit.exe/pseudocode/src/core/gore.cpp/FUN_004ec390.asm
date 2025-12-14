; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_gore.cpp_FUN_004ec390()
;
;
; XREF[1]:
;   core_gore.cpp_FUN_004edb70 at 004edb98
;
; Referenced Globals:
;   undefined4 DAT_0065f024
;   undefined4 DAT_0065f028
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cc70
;   crt_math.c_atan2_FUN_006013b1
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ec390
        ;   Label: core_gore.cpp_FUN_004ec390
    PUSH ESI                            ; 004ec391
    PUSH EDI                            ; 004ec392
    PUSH EBP                            ; 004ec393
    MOV ESI,dword ptr [ESP + 0x14]      ; 004ec394
    MOV EBP,dword ptr [ESP + 0x18]      ; 004ec398
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004ec39c
    LEA EAX,[ESI + 0x4]                 ; 004ec3a0
    MOV dword ptr [ESI + 0x10],0x1      ; 004ec3a3
    CMP EAX,EBP                         ; 004ec3aa
    JZ 0x004ec3bf                       ; 004ec3ac
        ;   XREF to: 004ec3bf (CONDITIONAL_JUMP)  ; LAB_004ec3bf
    MOV EDX,dword ptr [EBP]             ; 004ec3ae
    MOV dword ptr [EAX],EDX             ; 004ec3b1
    MOV EDX,dword ptr [EBP + 0x4]       ; 004ec3b3
    MOV dword ptr [EAX + 0x4],EDX       ; 004ec3b6
    MOV EDX,dword ptr [EBP + 0x8]       ; 004ec3b9
    MOV dword ptr [EAX + 0x8],EDX       ; 004ec3bc
    FLD float ptr [EDI + 0x8]           ; 004ec3bf
        ;   Label: LAB_004ec3bf
    FMUL ST0                            ; 004ec3c2
    FLD float ptr [EDI]                 ; 004ec3c4
    FMUL ST0                            ; 004ec3c6
    FADDP                               ; 004ec3c8
    FSQRT                               ; 004ec3ca
    FLD float ptr [EDI + 0x4]           ; 004ec3cc
    CALL crt_math.c_atan2_FUN_006013b1  ; 004ec3cf
        ;   XREF to: 006013b1 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_atan2_FUN_006013b1(float10 y, float10 x)
    MOV dword ptr [ESI + 0x20],0x0      ; 004ec3d4
    FCHS                                ; 004ec3db
    FSTP float ptr [ESI + 0x18]         ; 004ec3dd
    FLD float ptr [EDI + 0x8]           ; 004ec3e0
    FLD float ptr [EDI]                 ; 004ec3e3
    CALL crt_math.c_atan2_FUN_006013b1  ; 004ec3e5
        ;   XREF to: 006013b1 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_atan2_FUN_006013b1(float10 y, float10 x)
    PUSH 0x3                            ; 004ec3ea
    LEA EBX,[ESI + 0x2c]                ; 004ec3ec
    PUSH 0x0                            ; 004ec3ef
    FSTP float ptr [ESI + 0x1c]         ; 004ec3f1
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 004ec3f4
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    ADD ESP,0x8                         ; 004ec3f9
    MOV dword ptr [ESI + 0x28],EAX      ; 004ec3fc
    MOV EAX,EBP                         ; 004ec3ff
    MOV dword ptr [ESI + 0x24],0x0      ; 004ec401
    FLD float ptr [EAX]                 ; 004ec408
    FMUL float ptr [0x0065f024]         ; 004ec40a | DAT_0065f024
    FISTP dword ptr [EBX]               ; 004ec410
    FLD float ptr [EAX + 0x4]           ; 004ec412
    FMUL float ptr [0x0065f024]         ; 004ec415 | DAT_0065f024
    FISTP dword ptr [EBX + 0x4]         ; 004ec41b
    FLD float ptr [EAX + 0x8]           ; 004ec41e
    FMUL float ptr [0x0065f024]         ; 004ec421 | DAT_0065f024
    FISTP dword ptr [EBX + 0x8]         ; 004ec427
    LEA EBX,[ESI + 0x38]                ; 004ec42a
    MOV EAX,EDI                         ; 004ec42d
    FLD float ptr [EAX]                 ; 004ec42f
    FMUL float ptr [0x0065f028]         ; 004ec431 | DAT_0065f028
    FISTP dword ptr [EBX]               ; 004ec437
    FLD float ptr [EAX + 0x4]           ; 004ec439
    FMUL float ptr [0x0065f028]         ; 004ec43c | DAT_0065f028
    FISTP dword ptr [EBX + 0x4]         ; 004ec442
    FLD float ptr [EAX + 0x8]           ; 004ec445
    FMUL float ptr [0x0065f028]         ; 004ec448 | DAT_0065f028
    FISTP dword ptr [EBX + 0x8]         ; 004ec44e
    MOV EAX,dword ptr [ESP + 0x20]      ; 004ec451
    MOV dword ptr [ESI],0x0             ; 004ec455
    MOV dword ptr [ESI + 0x14],EAX      ; 004ec45b
    POP EBP                             ; 004ec45e
    POP EDI                             ; 004ec45f
    POP ESI                             ; 004ec460
    POP EBX                             ; 004ec461
    RET                                 ; 004ec462

