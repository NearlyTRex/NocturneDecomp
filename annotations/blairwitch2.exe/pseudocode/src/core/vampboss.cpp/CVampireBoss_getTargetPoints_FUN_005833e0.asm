; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_vampboss_cpp_CVampireBoss_getTargetPoints_FUN_005833e0(CVampireBoss *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CVampireBoss *   Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
;
; Referenced Globals:
;   undefined4 DAT_005edb7c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005833e0
        ;   Label: core_vampboss.cpp_CVampireBoss_getTargetPoints_FUN_005833e0
    PUSH ESI                            ; 005833e1
    PUSH EDI                            ; 005833e2
    SUB ESP,0x60                        ; 005833e3
    MOV ESI,dword ptr [ESP + 0x70]      ; 005833e6
    MOV EBX,dword ptr [ESP + 0x74]      ; 005833ea
    PUSH ESI                            ; 005833ee
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 005833ef
    LEA ESI,[ESP + 0x1c]                ; 005833f5
    LEA EDI,[ESP + 0x4]                 ; 005833f9
    CALL dword ptr [EAX + 0x24]         ; 005833fd
    MOV ECX,0x6                         ; 00583400
    LEA ESI,[ESP + 0x1c]                ; 00583405
    ADD ESP,0x4                         ; 00583409
    MOVSD.REP ES:EDI,ESI                ; 0058340c
    MOV EAX,ESP                         ; 0058340e
    FLD float ptr [ESP]                 ; 00583410
    FLD float ptr [ESP + 0x4]           ; 00583413
    FLD float ptr [ESP + 0x8]           ; 00583417
    LEA EDI,[ESP + 0x48]                ; 0058341b
    LEA ESI,[ESP + 0x3c]                ; 0058341f
    FXCH ST2                            ; 00583423
    FADD float ptr [EAX + 0xc]          ; 00583425
    FXCH                                ; 00583428
    FADD float ptr [EAX + 0x10]         ; 0058342a
    FXCH ST2                            ; 0058342d
    FADD float ptr [EAX + 0x14]         ; 0058342f
    FXCH                                ; 00583432
    FSTP float ptr [ESP + 0x3c]         ; 00583434
    FXCH                                ; 00583438
    FSTP float ptr [ESP + 0x40]         ; 0058343a
    FSTP float ptr [ESP + 0x44]         ; 0058343e
    MOVSD ES:EDI,ESI                    ; 00583442
    MOVSD ES:EDI,ESI                    ; 00583443
    MOVSD ES:EDI,ESI                    ; 00583444
    FLD float ptr [0x005edb7c]          ; 00583445 | DAT_005edb7c
    FLD float ptr [ESP + 0x48]          ; 0058344b
    FMUL ST1                            ; 0058344f
    FLD float ptr [ESP + 0x4c]          ; 00583451
    FMUL ST2                            ; 00583455
    FLD float ptr [ESP + 0x50]          ; 00583457
    FMULP ST3                           ; 0058345b
    LEA EAX,[ESP + 0x30]                ; 0058345d
    LEA EDI,[ESP + 0x30]                ; 00583461
    LEA ESI,[ESP + 0x54]                ; 00583465
    FXCH                                ; 00583469
    FSTP float ptr [ESP + 0x54]         ; 0058346b
    FSTP float ptr [ESP + 0x58]         ; 0058346f
    FSTP float ptr [ESP + 0x5c]         ; 00583473
    MOVSD ES:EDI,ESI                    ; 00583477
    MOVSD ES:EDI,ESI                    ; 00583478
    MOVSD ES:EDI,ESI                    ; 00583479
    CMP EBX,EAX                         ; 0058347a
    JNZ 0x0058348a                      ; 0058347c
        ;   XREF to: 0058348a (CONDITIONAL_JUMP)  ; LAB_0058348a
    MOV EAX,0x1                         ; 0058347e
    ADD ESP,0x60                        ; 00583483
    POP EDI                             ; 00583486
    POP ESI                             ; 00583487
    POP EBX                             ; 00583488
    RET                                 ; 00583489
    MOV EAX,dword ptr [ESP + 0x30]      ; 0058348a
        ;   Label: LAB_0058348a
    MOV dword ptr [EBX],EAX             ; 0058348e
    MOV EAX,dword ptr [ESP + 0x34]      ; 00583490
    MOV dword ptr [EBX + 0x4],EAX       ; 00583494
    MOV EAX,dword ptr [ESP + 0x38]      ; 00583497
    MOV dword ptr [EBX + 0x8],EAX       ; 0058349b
    MOV EAX,0x1                         ; 0058349e
    ADD ESP,0x60                        ; 005834a3
    POP EDI                             ; 005834a6
    POP ESI                             ; 005834a7
    POP EBX                             ; 005834a8
    RET                                 ; 005834a9

