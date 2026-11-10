; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_terrain_cpp_CTerrain_render_FUN_005723d0(CTerrain *this_ptr,int render_pass)
;
; Parameters:
; CTerrain *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   render_pass
; Local Variables:
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00533b80 at 00533cc3
;   core_set.cpp_FUN_00535da0 at 00536141
;
; Referenced Globals:
;   undefined4 DAT_005d6e14
;   undefined4 DAT_005f2afc
;   CGround* g_CGroundPtr = 01d5b8a8
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_02cfd8bc
;
; Called Functions:
;   core_ground.cpp_CGround_getHeightAtPosition_FUN_004d09b0
;   core_ground.cpp_CGround_render_FUN_004d0910
;   crt_math.c_round_FUN_005a3120
;   engine_drender.cpp_CDemonRenderer_setCameraOrigin_FUN_0046cb70
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90
;   engine_matrix.c_FUN_0046d1c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005723d0
        ;   Label: core_terrain.cpp_CTerrain_render_FUN_005723d0
    PUSH ESI                            ; 005723d1
    PUSH EDI                            ; 005723d2
    PUSH EBP                            ; 005723d3
    MOV EBP,ESP                         ; 005723d4
    SUB ESP,0x28                        ; 005723d6
    AND ESP,0xfffffff8                  ; 005723d9
    CMP dword ptr [0x02cfd8bc],0x0      ; 005723dc | DAT_02cfd8bc
    JNZ 0x005723ec                      ; 005723e3
        ;   XREF to: 005723ec (CONDITIONAL_JUMP)  ; LAB_005723ec
    MOV ESP,EBP                         ; 005723e5
    POP EBP                             ; 005723e7
    POP EDI                             ; 005723e8
    POP ESI                             ; 005723e9
    POP EBX                             ; 005723ea
    RET                                 ; 005723eb
    MOV ECX,dword ptr [0x005f2afc]      ; 005723ec | DAT_005f2afc
        ;   Label: LAB_005723ec
    PUSH ECX                            ; 005723f2 | DAT_01bdd7e4
    LEA ESI,[ESP + 0x10]                ; 005723f3
    LEA EDI,[ESP + 0x4]                 ; 005723f7
    CALL engine_matrix.c_FUN_0046d1c0   ; 005723fb
        ;   XREF to: 0046d1c0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_0046d1c0()
    LEA ESI,[ESP + 0x10]                ; 00572400
    ADD ESP,0x4                         ; 00572404
    MOV EBX,0x40800                     ; 00572407
    MOVSD ES:EDI,ESI                    ; 0057240c
    MOVSD ES:EDI,ESI                    ; 0057240d
    MOVSD ES:EDI,ESI                    ; 0057240e
    PUSH EBX                            ; 0057240f
    XOR ESI,ESI                         ; 00572410
    PUSH ESI                            ; 00572412
    MOV EDI,dword ptr [0x005fff4c]      ; 00572413 | g_CGroundPtr
    PUSH EDI                            ; 00572419
    MOV dword ptr [ESP + 0x24],EBX      ; 0057241a
    MOV dword ptr [ESP + 0x2c],ESI      ; 0057241e
    CALL core_ground.cpp_CGround_getHeightAtPosition_FUN_004d09b0 ; 00572422
        ;   XREF to: 004d09b0 (UNCONDITIONAL_CALL)  ; int core_ground.cpp_CGround_getHeightAtPosition_FUN_004d09b0(CGround * this_ptr, int world_x, int world_z)
    ADD ESP,0xc                         ; 00572427
    FLD double ptr [0x005d6e14]         ; 0057242a | DAT_005d6e14
    FLD float ptr [ESP]                 ; 00572430
    FMUL ST1                            ; 00572433
    FLD float ptr [ESP + 0x4]           ; 00572435
    FMUL ST2                            ; 00572439
    FLD float ptr [ESP + 0x8]           ; 0057243b
    FMULP ST3                           ; 0057243f
    MOV EDX,EAX                         ; 00572441
    MOV ECX,dword ptr [ESP + 0x18]      ; 00572443
    MOV EBX,dword ptr [ESP + 0x20]      ; 00572447
    MOV dword ptr [ESP + 0x1c],EAX      ; 0057244b
    FXCH                                ; 0057244f
    CALL crt_math.c_round_FUN_005a3120  ; 00572451
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 00572456
    CALL crt_math.c_round_FUN_005a3120  ; 00572458
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 0057245d
    FISTP dword ptr [ESP + 0x24]        ; 0057245f
    MOV EAX,dword ptr [ESP + 0x24]      ; 00572463
    FISTP dword ptr [ESP + 0x24]        ; 00572467
    ADD ECX,EAX                         ; 0057246b
    MOV EAX,dword ptr [ESP + 0x24]      ; 0057246d
    CALL crt_math.c_round_FUN_005a3120  ; 00572471
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    ADD EAX,EDX                         ; 00572476
    FISTP dword ptr [ESP + 0x24]        ; 00572478
    MOV dword ptr [ESP + 0x1c],EAX      ; 0057247c
    MOV EAX,dword ptr [ESP + 0x24]      ; 00572480
    MOV dword ptr [ESP + 0x18],ECX      ; 00572484
    ADD EBX,EAX                         ; 00572488
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057248a
    MOV dword ptr [ESP + 0x20],EBX      ; 0057248d
    MOV ESI,EBX                         ; 00572491
    SUB ESI,dword ptr [EAX]             ; 00572493
    LEA EAX,[ESP + 0x18]                ; 00572495
    PUSH EAX                            ; 00572499
    MOV EDI,dword ptr [0x005f2afc]      ; 0057249a | DAT_005f2afc
    PUSH EDI                            ; 005724a0 | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x28],ESI      ; 005724a1
    CALL engine_drender.cpp_CDemonRenderer_setCameraOrigin_FUN_0046cb70 ; 005724a5
        ;   XREF to: 0046cb70 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOrigin_FUN_0046cb70(CDemonRenderer * this_ptr, CVector3i * origin)
    ADD ESP,0x8                         ; 005724aa
    MOV EAX,[0x005fff4c]                ; 005724ad | g_CGroundPtr
    PUSH EAX                            ; 005724b2
    CALL core_ground.cpp_CGround_render_FUN_004d0910 ; 005724b3
        ;   XREF to: 004d0910 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_render_FUN_004d0910(CGround * this_ptr)
    ADD ESP,0x4                         ; 005724b8
    MOV EAX,ESP                         ; 005724bb
    PUSH EAX                            ; 005724bd
    MOV EDX,dword ptr [0x005f2afc]      ; 005724be | DAT_005f2afc
    PUSH EDX                            ; 005724c4 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90 ; 005724c5
        ;   XREF to: 0046cb90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 005724ca
    MOV ESP,EBP                         ; 005724cd
    POP EBP                             ; 005724cf
    POP EDI                             ; 005724d0
    POP ESI                             ; 005724d1
    POP EBX                             ; 005724d2
    RET                                 ; 005724d3

