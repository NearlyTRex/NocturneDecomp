; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30(CDemonGlobe *this_ptr,float radius)
;
; Parameters:
; CDemonGlobe *    Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   radius
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[14]:
;   core_boxactor.cpp_CLightActor_process_FUN_00420420 at 00420531
;   core_charactr.cpp_CCharacter_renderTransparent_FUN_0042f510 at 0042f611
;   core_emitter.cpp_CEmitter_process_FUN_00487eb0 at 0048802d
;   core_exorcism.cpp_CExorcism_ctor_FUN_0048a310 at 0048a3ce
;   core_fire.cpp_CFireball_process_FUN_00499350 at 004993ea
;   core_fire.cpp_FUN_0049a390 at 0049a3bd
;   core_firestff.cpp_CFirestaff_ctor_FUN_004a4ad0 at 004a4ba5
;   core_firestff.cpp_CFirestaff_process_FUN_004a4dc0 at 004a5666
;   core_flame.cpp_FUN_004a6dd0 at 004a6e89
;   core_keyactor.cpp_CKeyActor_process_FUN_004de8b0 at 004de927
;   ... and 4 more
;
; Referenced Globals:
;   undefined4 DAT_005bafd9
;   undefined4 DAT_005bafe1
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0045ab30
        ;   Label: core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30
    MOV EDX,dword ptr [ESP + 0xc]       ; 0045ab33
    FLD float ptr [ESP + 0x10]          ; 0045ab37
    FMUL ST0                            ; 0045ab3b
    FLD float ptr [ESP + 0x10]          ; 0045ab3d
    FMUL float ptr [0x005bafd9]         ; 0045ab41 | DAT_005bafd9
    MOV EAX,dword ptr [ESP + 0x10]      ; 0045ab47
    FXCH                                ; 0045ab4b
    FMUL double ptr [0x005bafe1]        ; 0045ab4d | DAT_005bafe1
    MOV dword ptr [EDX + 0x30],EAX      ; 0045ab53
    FXCH                                ; 0045ab56
    CALL crt_math.c_round_FUN_005a3120  ; 0045ab58
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 0045ab5d
    CALL crt_math.c_round_FUN_005a3120  ; 0045ab5f
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EDX + 0x10]        ; 0045ab64
    MOV ECX,dword ptr [EDX + 0x10]      ; 0045ab67
    FISTP dword ptr [EDX + 0xc]         ; 0045ab6a
    CMP ECX,0x10000                     ; 0045ab6d
    JL 0x0045abc1                       ; 0045ab73
        ;   XREF to: 0045abc1 (CONDITIONAL_JUMP)  ; LAB_0045abc1
    FLD float ptr [ESP + 0x10]          ; 0045ab75
        ;   Label: LAB_0045ab75
    FLD ST0                             ; 0045ab79
    FLD1                                ; 0045ab7b
    FDIVRP                              ; 0045ab7d
    FLD ST1                             ; 0045ab7f
    FMULP ST2                           ; 0045ab81
    FXCH                                ; 0045ab83
    FST float ptr [EDX + 0x18]          ; 0045ab85
    FLD1                                ; 0045ab88
    FDIVRP                              ; 0045ab8a
    XOR EAX,EAX                         ; 0045ab8c
    MOV AL,byte ptr [EDX + 0x1c]        ; 0045ab8e
    MOV dword ptr [ESP + 0x4],EAX       ; 0045ab91
    MOV EAX,dword ptr [EDX + 0x10]      ; 0045ab95
    FILD word ptr [ESP + 0x4]           ; 0045ab98
    SAR EAX,0x10                        ; 0045ab9c
    FMUL double ptr [0x005bafe1]        ; 0045ab9f | DAT_005bafe1
    MOV dword ptr [ESP],EAX             ; 0045aba5
    FILD dword ptr [ESP]                ; 0045aba8
    FDIVP                               ; 0045abab
    FXCH ST2                            ; 0045abad
    FSTP float ptr [EDX + 0x34]         ; 0045abaf
    FSTP float ptr [EDX + 0x38]         ; 0045abb2
    CALL crt_math.c_round_FUN_005a3120  ; 0045abb5
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EDX + 0x14]        ; 0045abba
    ADD ESP,0x8                         ; 0045abbd
    RET                                 ; 0045abc0
    MOV dword ptr [EDX + 0x10],0x10000  ; 0045abc1
        ;   Label: LAB_0045abc1
    JMP 0x0045ab75                      ; 0045abc8
        ;   XREF to: 0045ab75 (UNCONDITIONAL_JUMP)  ; LAB_0045ab75

