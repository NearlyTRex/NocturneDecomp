; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_turret_cpp_CTurret_setup_FUN_005a21a0(CTurret *this_ptr)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005f89e0
;   undefined4 DAT_006074b8
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_004672b0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
;   core_weapon.cpp_CWeapon_setup_FUN_005ad640
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a21a0
        ;   Label: core_turret.cpp_CTurret_setup_FUN_005a21a0
    PUSH ESI                            ; 005a21a1
    PUSH EDI                            ; 005a21a2
    PUSH EBP                            ; 005a21a3
    SUB ESP,0x8                         ; 005a21a4
    MOV EBP,dword ptr [ESP + 0x1c]      ; 005a21a7
    LEA EAX,[EBP + 0x584]               ; 005a21ab
    PUSH EAX                            ; 005a21b1
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 005a21b2
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a21b7
    PUSH EBP                            ; 005a21ba
    CALL core_weapon.cpp_CWeapon_setup_FUN_005ad640 ; 005a21bb
        ;   XREF to: 005ad640 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_setup_FUN_005ad640(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 005a21c0
    LEA EAX,[EBP + 0x158]               ; 005a21c3
    PUSH EAX                            ; 005a21c9
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 005a21ca
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EAX + 0x100]     ; 005a21cf
    ADD ESP,0x4                         ; 005a21d5
    DEC EDX                             ; 005a21d8
    PUSH EDX                            ; 005a21d9
    LEA ESI,[EBP + 0x860]               ; 005a21da
    PUSH EAX                            ; 005a21e0
    MOV EDI,EAX                         ; 005a21e1
    MOV EBX,ESI                         ; 005a21e3
    CALL core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_004672b0 ; 005a21e5
        ;   XREF to: 004672b0 (UNCONDITIONAL_CALL)  ; CVector3i * core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_004672b0(CKeyFramedModel * this_ptr, int frame_index)
    MOV EDX,0xf149f2ca                  ; 005a21ea
    ADD ESP,0x8                         ; 005a21ef
    XOR ECX,ECX                         ; 005a21f2
    MOV dword ptr [ESP],EDX             ; 005a21f4
    MOV EDX,EAX                         ; 005a21f7
    MOV EAX,dword ptr [EDI + 0x104]     ; 005a21f9
        ;   Label: LAB_005a21f9
    CMP ECX,EAX                         ; 005a21ff
    JGE 0x005a2250                      ; 005a2201
        ;   XREF to: 005a2250 (CONDITIONAL_JUMP)  ; LAB_005a2250
    FILD dword ptr [EDX + 0x4]          ; 005a2203
    FMUL double ptr [0x005f89e0]        ; 005a2206 | DAT_005f89e0
    FILD dword ptr [EDX + 0x8]          ; 005a220c
    FADDP                               ; 005a220f
    FST float ptr [ESP + 0x4]           ; 005a2211
    FCOMP float ptr [ESP]               ; 005a2215
    FNSTSW AX                           ; 005a2218
    SAHF                                ; 005a221a
    JA 0x005a2223                       ; 005a221b
        ;   XREF to: 005a2223 (CONDITIONAL_JUMP)  ; LAB_005a2223
    INC ECX                             ; 005a221d
        ;   Label: LAB_005a221d
    ADD EDX,0xc                         ; 005a221e
    JMP 0x005a21f9                      ; 005a2221
        ;   XREF to: 005a21f9 (UNCONDITIONAL_JUMP)  ; LAB_005a21f9
    MOV EAX,EDX                         ; 005a2223
        ;   Label: LAB_005a2223
    FILD dword ptr [EAX]                ; 005a2225
    FMUL float ptr [0x006074b8]         ; 005a2227 | DAT_006074b8
    FSTP float ptr [EBX]                ; 005a222d
    FILD dword ptr [EAX + 0x4]          ; 005a222f
    FMUL float ptr [0x006074b8]         ; 005a2232 | DAT_006074b8
    FSTP float ptr [EBX + 0x4]          ; 005a2238
    FILD dword ptr [EAX + 0x8]          ; 005a223b
    FMUL float ptr [0x006074b8]         ; 005a223e | DAT_006074b8
    FSTP float ptr [EBX + 0x8]          ; 005a2244
    MOV EAX,dword ptr [ESP + 0x4]       ; 005a2247
    MOV dword ptr [ESP],EAX             ; 005a224b
    JMP 0x005a221d                      ; 005a224e
        ;   XREF to: 005a221d (UNCONDITIONAL_JUMP)  ; LAB_005a221d
    MOV dword ptr [EBP + 0x8b4],0x0     ; 005a2250
        ;   Label: LAB_005a2250
    MOV dword ptr [EBP + 0x8b8],0x0     ; 005a225a
    MOV dword ptr [EBP + 0x8b0],0x0     ; 005a2264
    ADD ESP,0x8                         ; 005a226e
    POP EBP                             ; 005a2271
    POP EDI                             ; 005a2272
    POP ESI                             ; 005a2273
    POP EBX                             ; 005a2274
    RET                                 ; 005a2275

