; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dglobe_cpp_CDemonGlobe_setPosition_FUN_00448810(CDemonGlobe *this_ptr,CVector3f *position)
;
; Parameters:
; CDemonGlobe *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
;
; XREF[11]:
;   core_boxactor.cpp_CLightActor_process_FUN_0041d020 at 0041d0f2
;   core_cross.cpp_CCross_renderTransparent_FUN_005a6bc0 at 005a6bf6
;   core_emitter.cpp_CEmitter_process_FUN_00486cb0 at 00486df0
;   core_fire.cpp_CFireball_process_FUN_00495960 at 004959c9
;   core_fire.cpp_FUN_004969a0 at 004969b4
;   core_flame.cpp_FUN_004a0590 at 004a05cb
;   core_keyactor.cpp_CKeyActor_process_FUN_004df1c0 at 004df1ea
;   core_mine.cpp_FUN_005ad940 at 005ad99a
;   core_muzzle.cpp_CMuzzleEffect_init_FUN_0059d360 at 0059d374
;   core_shadow.cpp_FUN_0053c500 at 0053cfe3
;   ... and 1 more
;
; Referenced Globals:
;   undefined4 DAT_005ceffa
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 00448810
        ;   Label: core_dglobe.cpp_CDemonGlobe_setPosition_FUN_00448810
    MOV EAX,dword ptr [ESP + 0x8]       ; 00448814
    LEA EDX,[ECX + 0x24]                ; 00448818
    CMP EDX,EAX                         ; 0044881b
    JNZ 0x00448849                      ; 0044881d
        ;   XREF to: 00448849 (CONDITIONAL_JUMP)  ; LAB_00448849
    FLD double ptr [0x005ceffa]         ; 0044881f | DAT_005ceffa
        ;   Label: LAB_0044881f
    FLD float ptr [EAX]                 ; 00448825
    FMUL ST1                            ; 00448827
    CALL crt_math.c_round_FUN_005b7ff0  ; 00448829
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ECX]               ; 0044882e
    FLD float ptr [EAX + 0x4]           ; 00448830
    FMUL ST1                            ; 00448833
    CALL crt_math.c_round_FUN_005b7ff0  ; 00448835
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ECX + 0x4]         ; 0044883a
    FMUL float ptr [EAX + 0x8]          ; 0044883d
    CALL crt_math.c_round_FUN_005b7ff0  ; 00448840
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ECX + 0x8]         ; 00448845
    RET                                 ; 00448848
    PUSH EBX                            ; 00448849
        ;   Label: LAB_00448849
    MOV EBX,dword ptr [EAX]             ; 0044884a
    MOV dword ptr [EDX],EBX             ; 0044884c
    MOV EBX,dword ptr [EAX + 0x4]       ; 0044884e
    MOV dword ptr [EDX + 0x4],EBX       ; 00448851
    MOV EBX,dword ptr [EAX + 0x8]       ; 00448854
    MOV dword ptr [EDX + 0x8],EBX       ; 00448857
    POP EBX                             ; 0044885a
    JMP 0x0044881f                      ; 0044885b
        ;   XREF to: 0044881f (UNCONDITIONAL_JUMP)  ; LAB_0044881f

