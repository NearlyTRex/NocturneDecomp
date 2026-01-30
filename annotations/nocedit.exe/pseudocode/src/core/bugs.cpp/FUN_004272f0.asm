; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_bugs_cpp_FUN_004272f0(void)
;
;
; XREF[5]:
;   core_bugs.cpp_FUN_00424e50 at 00425087
;   core_bugs.cpp_FUN_00425cc0 at 00425dc1
;   core_bugs.cpp_FUN_00425fe0 at 00426161
;   core_bugs.cpp_FUN_00426410 at 00426415
;   core_bugs.cpp_FUN_004278d0 at 004279a1
;
; Referenced Globals:
;   float FLOAT_00616e5b = -0.3333333
;   float FLOAT_00616e5f = 0.3333333
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_expand_FUN_00420240
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004272f0
        ;   Label: core_bugs.cpp_FUN_004272f0
    PUSH ESI                            ; 004272f1
    PUSH EDI                            ; 004272f2
    PUSH EBP                            ; 004272f3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004272f4
    LEA EBX,[EDI + 0x199cc]             ; 004272f8
    LEA ESI,[EDI + 0xbecc]              ; 004272fe
    MOV EAX,EBX                         ; 00427304
    MOV EBP,ESI                         ; 00427306
    CMP EBX,ESI                         ; 00427308
    JNZ 0x004273dd                      ; 0042730a
        ;   XREF to: 004273dd (CONDITIONAL_JUMP)  ; LAB_004273dd
    LEA EBX,[EAX + 0xc]                 ; 00427310
        ;   Label: LAB_00427310
    CMP EBX,EBP                         ; 00427313
    JZ 0x00427328                       ; 00427315
        ;   XREF to: 00427328 (CONDITIONAL_JUMP)  ; LAB_00427328
    MOV EAX,dword ptr [EBP]             ; 00427317
    MOV dword ptr [EBX],EAX             ; 0042731a
    MOV EAX,dword ptr [EBP + 0x4]       ; 0042731c
    MOV dword ptr [EBX + 0x4],EAX       ; 0042731f
    MOV EAX,dword ptr [EBP + 0x8]       ; 00427322
    MOV dword ptr [EBX + 0x8],EAX       ; 00427325
    MOV ESI,0x1                         ; 00427328
        ;   Label: LAB_00427328
    CMP ESI,dword ptr [EDI + 0xbec0]    ; 0042732d
    JGE 0x00427360                      ; 00427333
        ;   XREF to: 00427360 (CONDITIONAL_JUMP)  ; LAB_00427360
    LEA EBP,[EDI + 0x199cc]             ; 00427335
    LEA EBX,[EDI + 0xbf0c]              ; 0042733b
    PUSH EBX                            ; 00427341
        ;   Label: LAB_00427341
    PUSH EBP                            ; 00427342
    INC ESI                             ; 00427343
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240 ; 00427344
        ;   XREF to: 00420240 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_00420240(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD EBX,0x40                        ; 00427349
    MOV ECX,dword ptr [EDI + 0xbec0]    ; 0042734c
    ADD ESP,0x8                         ; 00427352
    CMP ESI,ECX                         ; 00427355
    JL 0x00427341                       ; 00427357
        ;   XREF to: 00427341 (CONDITIONAL_JUMP)  ; LAB_00427341
    LEA EAX,[EAX]                       ; 00427359
    NOP                                 ; 0042735f
    FLD float ptr [EDI + 0x199cc]       ; 00427360
        ;   Label: LAB_00427360
    FLD float ptr [EDI + 0x199d0]       ; 00427366
    FLD float ptr [EDI + 0x199d4]       ; 0042736c
    FLD float ptr [EDI + 0x199d8]       ; 00427372
    FLD float ptr [EDI + 0x199dc]       ; 00427378
    FLD float ptr [EDI + 0x199e0]       ; 0042737e
    FXCH ST5                            ; 00427384
    FLD float ptr [0x00616e5b]          ; 00427386 | FLOAT_00616e5b
    FXCH                                ; 0042738c
    FADD ST0,ST1                        ; 0042738e
    FXCH ST5                            ; 00427390
    FADD ST0,ST1                        ; 00427392
    FXCH ST4                            ; 00427394
    FADDP                               ; 00427396
    FXCH ST2                            ; 00427398
    FLD float ptr [0x00616e5f]          ; 0042739a | FLOAT_00616e5f
    FXCH                                ; 004273a0
    FADD ST0,ST1                        ; 004273a2
    FXCH ST2                            ; 004273a4
    FADD ST0,ST1                        ; 004273a6
    FXCH ST6                            ; 004273a8
    FADDP                               ; 004273aa
    FXCH ST3                            ; 004273ac
    FSTP float ptr [EDI + 0x199d0]      ; 004273ae
    FXCH                                ; 004273b4
    FSTP float ptr [EDI + 0x199d4]      ; 004273b6
    FSTP float ptr [EDI + 0x199d8]      ; 004273bc
    FXCH ST2                            ; 004273c2
    FSTP float ptr [EDI + 0x199dc]      ; 004273c4
    FXCH                                ; 004273ca
    FSTP float ptr [EDI + 0x199e0]      ; 004273cc
    FSTP float ptr [EDI + 0x199cc]      ; 004273d2
    POP EBP                             ; 004273d8
    POP EDI                             ; 004273d9
    POP ESI                             ; 004273da
    POP EBX                             ; 004273db
    RET                                 ; 004273dc
    MOV EDX,dword ptr [ESI]             ; 004273dd
        ;   Label: LAB_004273dd
    MOV dword ptr [EBX],EDX             ; 004273df
    MOV EDX,dword ptr [ESI + 0x4]       ; 004273e1
    MOV dword ptr [EBX + 0x4],EDX       ; 004273e4
    MOV EDX,dword ptr [ESI + 0x8]       ; 004273e7
    MOV dword ptr [EBX + 0x8],EDX       ; 004273ea
    JMP 0x00427310                      ; 004273ed
        ;   XREF to: 00427310 (UNCONDITIONAL_JUMP)  ; LAB_00427310

