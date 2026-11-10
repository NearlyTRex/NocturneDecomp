; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045e970(CDemonGlobe *this_ptr,CVector3f *position)
;
; Parameters:
; CDemonGlobe *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
;
; XREF[9]:
;   core_boxactor.cpp_CLightActor_process_FUN_00422f90 at 00423062
;   core_charactr.cpp_CCharacter_renderTransparent_FUN_004301e0 at 004302bc
;   core_emitter.cpp_CEmitter_process_FUN_0049f310 at 0049f450
;   core_fire.cpp_CFireball_process_FUN_004ae300 at 004ae369
;   core_fire.cpp_FUN_004af340 at 004af354
;   core_flame.cpp_FUN_004b8e40 at 004b8e7b
;   core_keyactor.cpp_CKeyActor_process_FUN_004fc590 at 004fc5ba
;   core_shadow.cpp_CShadow_process_FUN_0055de50 at 0055ea72
;   core_weapon.cpp_CWeapon_updateLighting_FUN_005adb20 at 005adcfd
;
; Referenced Globals:
;   undefined4 DAT_005d88f3
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 0045e970
        ;   Label: core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045e970
    MOV EAX,dword ptr [ESP + 0x8]       ; 0045e974
    LEA EDX,[ECX + 0x24]                ; 0045e978
    CMP EDX,EAX                         ; 0045e97b
    JNZ 0x0045e9a9                      ; 0045e97d
        ;   XREF to: 0045e9a9 (CONDITIONAL_JUMP)  ; LAB_0045e9a9
    FLD double ptr [0x005d88f3]         ; 0045e97f | DAT_005d88f3
        ;   Label: LAB_0045e97f
    FLD float ptr [EAX]                 ; 0045e985
    FMUL ST1                            ; 0045e987
    CALL crt_math.c_round_FUN_005c03a0  ; 0045e989
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ECX]               ; 0045e98e
    FLD float ptr [EAX + 0x4]           ; 0045e990
    FMUL ST1                            ; 0045e993
    CALL crt_math.c_round_FUN_005c03a0  ; 0045e995
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ECX + 0x4]         ; 0045e99a
    FMUL float ptr [EAX + 0x8]          ; 0045e99d
    CALL crt_math.c_round_FUN_005c03a0  ; 0045e9a0
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ECX + 0x8]         ; 0045e9a5
    RET                                 ; 0045e9a8
    PUSH EBX                            ; 0045e9a9
        ;   Label: LAB_0045e9a9
    MOV EBX,dword ptr [EAX]             ; 0045e9aa
    MOV dword ptr [EDX],EBX             ; 0045e9ac
    MOV EBX,dword ptr [EAX + 0x4]       ; 0045e9ae
    MOV dword ptr [EDX + 0x4],EBX       ; 0045e9b1
    MOV EBX,dword ptr [EAX + 0x8]       ; 0045e9b4
    MOV dword ptr [EDX + 0x8],EBX       ; 0045e9b7
    POP EBX                             ; 0045e9ba
    JMP 0x0045e97f                      ; 0045e9bb
        ;   XREF to: 0045e97f (UNCONDITIONAL_JUMP)  ; LAB_0045e97f

