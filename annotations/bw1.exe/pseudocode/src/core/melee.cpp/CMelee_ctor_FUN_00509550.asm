; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMelee * __cdecl core_melee_cpp_CMelee_ctor_FUN_00509550(CMelee *this_ptr)
;
; Parameters:
; CMelee *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_melee.cpp_factoryFuncMelee_FUN_00509520 at 00509533
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
;   core_weapon.cpp_CWeapon_ctor_FUN_005ad4c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00509550
        ;   Label: core_melee.cpp_CMelee_ctor_FUN_00509550
    PUSH ESI                            ; 00509551
    PUSH EDI                            ; 00509552
    MOV EDX,dword ptr [ESP + 0x10]      ; 00509553
    PUSH EDX                            ; 00509557
    CALL core_weapon.cpp_CWeapon_ctor_FUN_005ad4c0 ; 00509558
        ;   XREF to: 005ad4c0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_005ad4c0(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 0050955d
    PUSH 0x5e7865                       ; 00509560
    MOV EBX,EAX                         ; 00509565
    LEA EDI,[EAX + 0x158]               ; 00509567
    PUSH EDI                            ; 0050956d
    MOV dword ptr [EAX + 0x154],0x6037f4 ; 0050956e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 00509578
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x2e0],0x7     ; 0050957d
    MOV dword ptr [EBX + 0x59c],0xffffffff ; 00509587
    MOV dword ptr [EBX + 0x568],0x0     ; 00509591
    MOV dword ptr [EBX + 0x2d8],0x0     ; 0050959b
    MOV dword ptr [EBX + 0x2dc],0x0     ; 005095a5
    MOV dword ptr [EBX + 0x2e4],0x0     ; 005095af
    MOV dword ptr [EBX + 0x2e8],0x40a00000 ; 005095b9
    MOV dword ptr [EBX + 0x2ec],0x0     ; 005095c3
    MOV dword ptr [EBX + 0x2f0],0x0     ; 005095cd
    MOV dword ptr [EBX + 0x578],0x1     ; 005095d7
    MOV dword ptr [EBX + 0x57c],0x41200000 ; 005095e1
    MOV dword ptr [EBX + 0x580],0x41700000 ; 005095eb
    MOV dword ptr [EBX + 0x584],0x3f000000 ; 005095f5
    MOV dword ptr [EBX + 0x588],0x0     ; 005095ff
    MOV ESI,0x5e786f                    ; 00509609
    MOV dword ptr [EBX + 0x590],0x0     ; 0050960e
    ADD ESP,0x8                         ; 00509618
    MOV dword ptr [EBX + 0x594],0x0     ; 0050961b
    LEA EDI,[EBX + 0x5a0]               ; 00509625
    MOV dword ptr [EBX + 0x59c],0x0     ; 0050962b
    PUSH EDI                            ; 00509635
    MOV AL,byte ptr [ESI]               ; 00509636
        ;   Label: LAB_00509636
    MOV byte ptr [EDI],AL               ; 00509638
    CMP AL,0x0                          ; 0050963a
    JZ 0x0050964e                       ; 0050963c
        ;   XREF to: 0050964e (CONDITIONAL_JUMP)  ; LAB_0050964e
    MOV AL,byte ptr [ESI + 0x1]         ; 0050963e
    ADD ESI,0x2                         ; 00509641
    MOV byte ptr [EDI + 0x1],AL         ; 00509644
    ADD EDI,0x2                         ; 00509647
    CMP AL,0x0                          ; 0050964a
    JNZ 0x00509636                      ; 0050964c
        ;   XREF to: 00509636 (CONDITIONAL_JUMP)  ; LAB_00509636
    POP EDI                             ; 0050964e
        ;   Label: LAB_0050964e
    MOV ESI,0x5e787b                    ; 0050964f
    LEA EDI,[EBX + 0x604]               ; 00509654
    PUSH EDI                            ; 0050965a
    MOV AL,byte ptr [ESI]               ; 0050965b
        ;   Label: LAB_0050965b
    MOV byte ptr [EDI],AL               ; 0050965d
    CMP AL,0x0                          ; 0050965f
    JZ 0x00509673                       ; 00509661
        ;   XREF to: 00509673 (CONDITIONAL_JUMP)  ; LAB_00509673
    MOV AL,byte ptr [ESI + 0x1]         ; 00509663
    ADD ESI,0x2                         ; 00509666
    MOV byte ptr [EDI + 0x1],AL         ; 00509669
    ADD EDI,0x2                         ; 0050966c
    CMP AL,0x0                          ; 0050966f
    JNZ 0x0050965b                      ; 00509671
        ;   XREF to: 0050965b (CONDITIONAL_JUMP)  ; LAB_0050965b
    POP EDI                             ; 00509673
        ;   Label: LAB_00509673
    MOV ESI,0x5e7887                    ; 00509674
    LEA EDI,[EBX + 0x668]               ; 00509679
    PUSH EDI                            ; 0050967f
    MOV AL,byte ptr [ESI]               ; 00509680
        ;   Label: LAB_00509680
    MOV byte ptr [EDI],AL               ; 00509682
    CMP AL,0x0                          ; 00509684
    JZ 0x00509698                       ; 00509686
        ;   XREF to: 00509698 (CONDITIONAL_JUMP)  ; LAB_00509698
    MOV AL,byte ptr [ESI + 0x1]         ; 00509688
    ADD ESI,0x2                         ; 0050968b
    MOV byte ptr [EDI + 0x1],AL         ; 0050968e
    ADD EDI,0x2                         ; 00509691
    CMP AL,0x0                          ; 00509694
    JNZ 0x00509680                      ; 00509696
        ;   XREF to: 00509680 (CONDITIONAL_JUMP)  ; LAB_00509680
    POP EDI                             ; 00509698
        ;   Label: LAB_00509698
    MOV EAX,EBX                         ; 00509699
    POP EDI                             ; 0050969b
    POP ESI                             ; 0050969c
    POP EBX                             ; 0050969d
    RET                                 ; 0050969e

