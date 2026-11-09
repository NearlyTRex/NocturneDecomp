; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_teleport_cpp_FUN_00572410(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005ec44a
;   undefined4 DAT_005ec452
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00572410
        ;   Label: core_teleport.cpp_FUN_00572410
    SUB ESP,0x18                        ; 00572411
    MOV EDX,dword ptr [ESP + 0x20]      ; 00572414
    MOV EAX,ESI                         ; 00572418
    FLD double ptr [0x005ec44a]         ; 0057241a | DAT_005ec44a
    FLD float ptr [EDX + 0x2b4]         ; 00572420
    FMUL ST1                            ; 00572426
    FLD float ptr [EDX + 0x2bc]         ; 00572428
    FMUL ST2                            ; 0057242e
    FLD float ptr [EDX + 0x2b4]         ; 00572430
    FCHS                                ; 00572436
    FMUL ST3                            ; 00572438
    FLD float ptr [EDX + 0x2bc]         ; 0057243a
    FCHS                                ; 00572440
    FMULP ST4                           ; 00572442
    FLD float ptr [EDX + 0x2b8]         ; 00572444
    MOV ECX,0xbdcccccd                  ; 0057244a
    MOV EDI,ESI                         ; 0057244f
    MOV ESI,ESP                         ; 00572451
    MOV dword ptr [ESP + 0x4],ECX       ; 00572453
    FADD double ptr [0x005ec452]        ; 00572457 | DAT_005ec452
    FXCH ST3                            ; 0057245d
    FSTP float ptr [ESP + 0xc]          ; 0057245f
    FXCH ST2                            ; 00572463
    FSTP float ptr [ESP + 0x10]         ; 00572465
    FSTP float ptr [ESP + 0x14]         ; 00572469
    MOV ECX,0x6                         ; 0057246d
    FXCH                                ; 00572472
    FSTP float ptr [ESP + 0x8]          ; 00572474
    FSTP float ptr [ESP]                ; 00572478
    MOVSD.REP ES:EDI,ESI                ; 0057247b
    ADD ESP,0x18                        ; 0057247d
    POP EDI                             ; 00572480
    RET                                 ; 00572481

