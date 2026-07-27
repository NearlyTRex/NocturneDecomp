; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_setutil_cpp_FUN_00515890(void)
;
; Local Variables:
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   undefined4 DAT_00590fd5
;   undefined4 DAT_00590fd9
;   undefined4 DAT_00590fe1
;   undefined4 DAT_00590fe9
;   undefined4 DAT_00590ff1
;   undefined4 DAT_005a1ab0
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515890
        ;   Label: core_setutil.cpp_FUN_00515890
    PUSH ESI                            ; 00515891
    SUB ESP,0x3c                        ; 00515892
    MOV EAX,dword ptr [ESP + 0x48]      ; 00515895
    MOV dword ptr [ESP + 0x38],EAX      ; 00515899
    FILD dword ptr [ESP + 0x38]         ; 0051589d
    FMUL float ptr [0x00590fd5]         ; 005158a1 | DAT_00590fd5
    FLD double ptr [0x00590fd9]         ; 005158a7 | DAT_00590fd9
    FXCH                                ; 005158ad
    FMUL ST1                            ; 005158af
    MOV EAX,dword ptr [ESP + 0x4c]      ; 005158b1
    FMUL double ptr [0x00590fe1]        ; 005158b5 | DAT_00590fe1
    MOV dword ptr [ESP + 0x38],EAX      ; 005158bb
    FLD ST0                             ; 005158bf
    FSIN                                ; 005158c1
    FXCH                                ; 005158c3
    FCOS                                ; 005158c5
    FILD dword ptr [ESP + 0x38]         ; 005158c7
    FMUL float ptr [0x00590fe9]         ; 005158cb | DAT_00590fe9
    FMULP ST3                           ; 005158d1
    FLD float ptr [ESP + 0x54]          ; 005158d3
    FXCH ST2                            ; 005158d7
    FMUL ST2                            ; 005158d9
    FXCH ST3                            ; 005158db
    FMUL double ptr [0x00590ff1]        ; 005158dd | DAT_00590ff1
    FLD ST0                             ; 005158e3
    FCOS                                ; 005158e5
    FXCH                                ; 005158e7
    FSIN                                ; 005158e9
    FXCH ST2                            ; 005158eb
    FMUL ST3                            ; 005158ed
    FMUL ST1                            ; 005158ef
    FXCH ST4                            ; 005158f1
    FMULP                               ; 005158f3
    FXCH                                ; 005158f5
    FMULP ST2                           ; 005158f7
    LEA EBX,[ESP + 0xc]                 ; 005158f9
    MOV EDX,dword ptr [0x005ae704]      ; 005158fd | DAT_005ae704
    FXCH ST2                            ; 00515903
    FSTP float ptr [ESP + 0x8]          ; 00515905
    MOV EAX,ESP                         ; 00515909
    FXCH                                ; 0051590b
    FSTP float ptr [ESP]                ; 0051590d
    FSTP float ptr [ESP + 0x4]          ; 00515910
    FLD float ptr [EAX]                 ; 00515914
    FMUL float ptr [0x005a1ab0]         ; 00515916 | DAT_005a1ab0
    FISTP dword ptr [EBX]               ; 0051591c
    FLD float ptr [EAX + 0x4]           ; 0051591e
    FMUL float ptr [0x005a1ab0]         ; 00515921 | DAT_005a1ab0
    FISTP dword ptr [EBX + 0x4]         ; 00515927
    FLD float ptr [EAX + 0x8]           ; 0051592a
    FMUL float ptr [0x005a1ab0]         ; 0051592d | DAT_005a1ab0
    FISTP dword ptr [EBX + 0x8]         ; 00515933
    MOV EBX,dword ptr [ESP + 0x50]      ; 00515936
    LEA EAX,[ESP + 0xc]                 ; 0051593a
    LEA ESI,[EBX*0x4 + 0x0]             ; 0051593e
    PUSH EAX                            ; 00515945
    SUB ESI,EBX                         ; 00515946
    MOV EAX,dword ptr [EDX]             ; 00515948 | DAT_01b4d738
    SHL ESI,0x4                         ; 0051594a
    ADD EAX,ESI                         ; 0051594d
    PUSH EAX                            ; 0051594f
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00515950
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_transformAndProjectPoint_FUN_0053075c()
    MOV EAX,[0x005ae704]                ; 00515955 | DAT_005ae704
    MOV EDX,dword ptr [EAX]             ; 0051595a | DAT_01b4d738
    MOV dword ptr [EDX + ESI*0x1 + 0x18],0x800000 ; 0051595c
    MOV EAX,dword ptr [EAX]             ; 00515964 | DAT_01b4d738
    ADD ESP,0x8                         ; 00515966
    MOV dword ptr [ESI + EAX*0x1 + 0x1c],0x800000 ; 00515969
    ADD ESP,0x3c                        ; 00515971
    POP ESI                             ; 00515974
    POP EBX                             ; 00515975
    RET                                 ; 00515976

