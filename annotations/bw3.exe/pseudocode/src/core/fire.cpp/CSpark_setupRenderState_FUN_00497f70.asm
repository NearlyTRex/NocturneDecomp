; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CSpark_setupRenderState_FUN_00497f70(CSpark *this_ptr)
;
; Parameters:
; CSpark *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_render_FUN_004a1ad0 at 004a1cca
;
; Referenced Globals:
;   undefined4 DAT_005c0520
;   undefined4 DAT_005f2afc
;   undefined4 DAT_0060b02c
;   undefined4 DAT_0060b030
;   undefined4 DAT_0060b05c
;   undefined4 DAT_0060b060
;   undefined4 DAT_0060b08c
;   undefined4 DAT_0060b090
;   undefined4 DAT_0060b0bc
;   undefined4 DAT_0060b0c0
;   undefined4 DAT_007e2a54
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01c73658
;   undefined4 DAT_01c7365c
;   undefined4 DAT_01c73660
;   ... and 12 more
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;   engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_0046d230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00497f70
        ;   Label: core_fire.cpp_CSpark_setupRenderState_FUN_00497f70
    PUSH ESI                            ; 00497f71
    PUSH EDI                            ; 00497f72
    SUB ESP,0x5c                        ; 00497f73
    MOV EDX,0x4                         ; 00497f76
    MOV EAX,0x1                         ; 00497f7b
    MOV EBX,0x80000                     ; 00497f80
    MOV ESI,0xf80000                    ; 00497f85
    MOV EDI,0x1c73658                   ; 00497f8a
    XOR ECX,ECX                         ; 00497f8f
    MOV dword ptr [0x01c73674],EDX      ; 00497f91 | DAT_01c73674
    MOV dword ptr [0x01c73678],ECX      ; 00497f97 | DAT_01c73678
    MOV dword ptr [0x01c7367c],ECX      ; 00497f9d | DAT_01c7367c
    MOV dword ptr [0x01c73680],ECX      ; 00497fa3 | DAT_01c73680
    MOV dword ptr [0x01c73684],ECX      ; 00497fa9 | DAT_01c73684
    MOV dword ptr [0x01c73688],ECX      ; 00497faf | DAT_01c73688
    MOV [0x01c7368c],EAX                ; 00497fb5 | DAT_01c7368c
    MOV dword ptr [0x0060b02c],EBX      ; 00497fba | DAT_0060b02c
    MOV dword ptr [0x0060b030],ESI      ; 00497fc0 | DAT_0060b030
    MOV dword ptr [0x0060b05c],ESI      ; 00497fc6 | DAT_0060b05c
    MOV dword ptr [0x0060b060],ESI      ; 00497fcc | DAT_0060b060
    MOV dword ptr [0x0060b08c],ESI      ; 00497fd2 | DAT_0060b08c
    MOV dword ptr [0x0060b090],EBX      ; 00497fd8 | DAT_0060b090
    MOV dword ptr [0x0060b0bc],EBX      ; 00497fde | DAT_0060b0bc
    MOV dword ptr [0x0060b0c0],EBX      ; 00497fe4 | DAT_0060b0c0
    MOV EDX,0x2                         ; 00497fea
    MOV ECX,0x3                         ; 00497fef
    MOV ESI,dword ptr [0x005f2afc]      ; 00497ff4 | DAT_005f2afc
    MOV dword ptr [0x01c73690],EDX      ; 00497ffa | DAT_01c73690
    PUSH ESI                            ; 00498000 | DAT_01bdd7e4
    LEA ESI,[ESP + 0x54]                ; 00498001
    MOV dword ptr [0x01c73694],ECX      ; 00498005 | DAT_01c73694
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_0046d230 ; 0049800b
        ;   XREF to: 0046d230 (UNCONDITIONAL_CALL)  ; CVector3i * engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_0046d230(CDemonRenderer * this_ptr, CVector3i * output)
    LEA ESI,[ESP + 0x54]                ; 00498010
    ADD ESP,0x4                         ; 00498014
    MOVSD ES:EDI,ESI                    ; 00498017 | DAT_01c73658
    MOVSD ES:EDI,ESI                    ; 00498018 | DAT_01c7365c
    MOVSD ES:EDI,ESI                    ; 00498019 | DAT_01c73660
    MOV ESI,dword ptr [0x007e2a54]      ; 0049801a | DAT_007e2a54
    MOV ECX,0xa                         ; 00498020
    XOR EDI,EDI                         ; 00498025
    LEA ESI,[ESI + 0x10]                ; 00498027
    MOV dword ptr [0x01c7365c],EDI      ; 0049802a | DAT_01c7365c
    LEA EDI,[ESP + 0x28]                ; 00498030
    MOVSD.REP ES:EDI,ESI                ; 00498034
    MOV ECX,0xa                         ; 00498036
    MOV EDI,ESP                         ; 0049803b
    LEA ESI,[ESP + 0x28]                ; 0049803d
    MOVSD.REP ES:EDI,ESI                ; 00498041
    FLD double ptr [0x005c0520]         ; 00498043 | DAT_005c0520
    FLD float ptr [ESP + 0x8]           ; 00498049
    FMUL ST1                            ; 0049804d
    FLD float ptr [ESP + 0x14]          ; 0049804f
    FMUL ST2                            ; 00498053
    FLD float ptr [ESP + 0x20]          ; 00498055
    FMULP ST3                           ; 00498059
    FXCH                                ; 0049805b
    CALL crt_math.c_round_FUN_005a3120  ; 0049805d
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 00498062
    CALL crt_math.c_round_FUN_005a3120  ; 00498064
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST2                            ; 00498069
    CALL crt_math.c_round_FUN_005a3120  ; 0049806b
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 00498070
    FISTP dword ptr [0x01c73664]        ; 00498072 | DAT_01c73664
    FXCH                                ; 00498078
    FISTP dword ptr [0x01c73668]        ; 0049807a | DAT_01c73668
    FISTP dword ptr [0x01c7366c]        ; 00498080 | DAT_01c7366c
    ADD ESP,0x5c                        ; 00498086
    POP EDI                             ; 00498089
    POP ESI                             ; 0049808a
    POP EBX                             ; 0049808b
    RET                                 ; 0049808c

