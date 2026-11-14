; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CConstructBone * __cdecl core_construc_cpp_CConstructBone_ctor_FUN_00444550(CConstructBone *this_ptr)
;
; Parameters:
; CConstructBone * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_construc.cpp_FUN_00444520 at 00444533
;
; Called Functions:
;   core_construc.cpp_CConstruct_ctor_FUN_00442420
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00444550
        ;   Label: core_construc.cpp_CConstructBone_ctor_FUN_00444550
    MOV EDX,dword ptr [ESP + 0x8]       ; 00444551
    PUSH EDX                            ; 00444555
    CALL core_construc.cpp_CConstruct_ctor_FUN_00442420 ; 00444556
        ;   XREF to: 00442420 (UNCONDITIONAL_CALL)  ; CConstruct * core_construc.cpp_CConstruct_ctor_FUN_00442420(CConstruct * this_ptr)
    ADD ESP,0x4                         ; 0044455b
    PUSH 0x5b97f6                       ; 0044455e
    MOV EBX,EAX                         ; 00444563
    ADD EAX,0x158                       ; 00444565
    PUSH EAX                            ; 0044456a
    MOV dword ptr [EAX + -0x4],0x5dd864 ; 0044456b
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0 ; 00444572
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x2538],0x425c0000 ; 00444577
    MOV dword ptr [EBX + 0xce5c],0x41700000 ; 00444581
    MOV dword ptr [EBX + 0xce60],0x41200000 ; 0044458b
    MOV dword ptr [EBX + 0xd84c],0x1    ; 00444595
    ADD ESP,0x8                         ; 0044459f
    MOV dword ptr [EBX + 0xd85c],0x3    ; 004445a2
    MOV EAX,EBX                         ; 004445ac
    FLD float ptr [EBX + 0x2538]        ; 004445ae
    CALL crt_math.c_round_FUN_005a3120  ; 004445b4
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EBX + 0xd17c]      ; 004445b9
    POP EBX                             ; 004445bf
    RET                                 ; 004445c0

