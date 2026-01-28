; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_turret_cpp_CTurret_FUN_005e2240(CTurret *this_ptr)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   double DOUBLE_006565f8 = 0.200000000000000
;   float FLOAT_00664b58 = 0.00390625
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00477890
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;   core_weapon.cpp_CWeapon_FUN_005edff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e2240
        ;   Label: core_turret.cpp_CTurret_FUN_005e2240
    PUSH ESI                            ; 005e2241
    PUSH EDI                            ; 005e2242
    PUSH EBP                            ; 005e2243
    SUB ESP,0x8                         ; 005e2244
    MOV EBP,dword ptr [ESP + 0x1c]      ; 005e2247
    LEA EAX,[EBP + 0x584]               ; 005e224b
    PUSH EAX                            ; 005e2251
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 005e2252
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005e2257
    PUSH EBP                            ; 005e225a
    CALL core_weapon.cpp_CWeapon_FUN_005edff0 ; 005e225b
        ;   XREF to: 005edff0 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_FUN_005edff0(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 005e2260
    LEA EAX,[EBP + 0x158]               ; 005e2263
    PUSH EAX                            ; 005e2269
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 005e226a
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EAX + 0x100]     ; 005e226f
    ADD ESP,0x4                         ; 005e2275
    DEC EDX                             ; 005e2278
    PUSH EDX                            ; 005e2279
    LEA ESI,[EBP + 0x860]               ; 005e227a
    PUSH EAX                            ; 005e2280
    MOV EDI,EAX                         ; 005e2281
    MOV EBX,ESI                         ; 005e2283
    CALL core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00477890 ; 005e2285
        ;   XREF to: 00477890 (UNCONDITIONAL_CALL)  ; CVector3i * core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00477890(CKeyFramedModel * this_ptr, int frame_index)
    MOV EDX,0xf149f2ca                  ; 005e228a
    ADD ESP,0x8                         ; 005e228f
    XOR ECX,ECX                         ; 005e2292
    MOV dword ptr [ESP],EDX             ; 005e2294
    MOV EDX,EAX                         ; 005e2297
    MOV EAX,dword ptr [EDI + 0x104]     ; 005e2299
        ;   Label: LAB_005e2299
    CMP ECX,EAX                         ; 005e229f
    JGE 0x005e22f0                      ; 005e22a1
        ;   XREF to: 005e22f0 (CONDITIONAL_JUMP)  ; LAB_005e22f0
    FILD dword ptr [EDX + 0x4]          ; 005e22a3
    FMUL double ptr [0x006565f8]        ; 005e22a6 | DOUBLE_006565f8
    FILD dword ptr [EDX + 0x8]          ; 005e22ac
    FADDP                               ; 005e22af
    FST float ptr [ESP + 0x4]           ; 005e22b1
    FCOMP float ptr [ESP]               ; 005e22b5
    FNSTSW AX                           ; 005e22b8
    SAHF                                ; 005e22ba
    JA 0x005e22c3                       ; 005e22bb
        ;   XREF to: 005e22c3 (CONDITIONAL_JUMP)  ; LAB_005e22c3
    INC ECX                             ; 005e22bd
        ;   Label: LAB_005e22bd
    ADD EDX,0xc                         ; 005e22be
    JMP 0x005e2299                      ; 005e22c1
        ;   XREF to: 005e2299 (UNCONDITIONAL_JUMP)  ; LAB_005e2299
    MOV EAX,EDX                         ; 005e22c3
        ;   Label: LAB_005e22c3
    FILD dword ptr [EAX]                ; 005e22c5
    FMUL float ptr [0x00664b58]         ; 005e22c7 | FLOAT_00664b58
    FSTP float ptr [EBX]                ; 005e22cd
    FILD dword ptr [EAX + 0x4]          ; 005e22cf
    FMUL float ptr [0x00664b58]         ; 005e22d2 | FLOAT_00664b58
    FSTP float ptr [EBX + 0x4]          ; 005e22d8
    FILD dword ptr [EAX + 0x8]          ; 005e22db
    FMUL float ptr [0x00664b58]         ; 005e22de | FLOAT_00664b58
    FSTP float ptr [EBX + 0x8]          ; 005e22e4
    MOV EAX,dword ptr [ESP + 0x4]       ; 005e22e7
    MOV dword ptr [ESP],EAX             ; 005e22eb
    JMP 0x005e22bd                      ; 005e22ee
        ;   XREF to: 005e22bd (UNCONDITIONAL_JUMP)  ; LAB_005e22bd
    MOV dword ptr [EBP + 0x8b4],0x0     ; 005e22f0
        ;   Label: LAB_005e22f0
    MOV dword ptr [EBP + 0x8b8],0x0     ; 005e22fa
    MOV dword ptr [EBP + 0x8b0],0x0     ; 005e2304
    ADD ESP,0x8                         ; 005e230e
    POP EBP                             ; 005e2311
    POP EDI                             ; 005e2312
    POP ESI                             ; 005e2313
    POP EBX                             ; 005e2314
    RET                                 ; 005e2315

