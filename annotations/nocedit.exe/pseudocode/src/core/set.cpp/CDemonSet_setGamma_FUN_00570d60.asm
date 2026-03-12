; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_setGamma_FUN_00570d60(CDemonSet *this_ptr,int gamma)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   gamma
; Local Variables:
; float            Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_game.cpp_CGame_processHotkeys_FUN_004dcee0 at 004dd253
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db251
;
; Referenced Globals:
;   double DOUBLE_0064606b = 0.0000152587890625
;   double DOUBLE_00646073 = 65536
;   CDemonCamera g_CDemonCameraInstance
;   undefined4 DAT_0327d778
;   int[65536] g_IntensityToValueLookupTable
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00453bd0
;   crt_math.c_pow_FUN_005ffd76
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00570d60
        ;   Label: core_set.cpp_CDemonSet_setGamma_FUN_00570d60
    PUSH EBP                            ; 00570d61
    MOV EBP,ESP                         ; 00570d62
    SUB ESP,0xc                         ; 00570d64
    AND ESP,0xfffffff8                  ; 00570d67
    MOV EDX,dword ptr [EBP + 0x10]      ; 00570d6a
    PUSH EDX                            ; 00570d6d
    PUSH 0x32758e4                      ; 00570d6e | g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00453bd0 ; 00570d73
        ;   XREF to: 00453bd0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00453bd0(CDemonCamera * this_ptr, int gamma_value)
    ADD ESP,0x8                         ; 00570d78
    MOV EAX,dword ptr [EBP + 0x10]      ; 00570d7b
    MOV dword ptr [ESP + 0x8],EAX       ; 00570d7e
    FILD dword ptr [ESP + 0x8]          ; 00570d82
    FMUL double ptr [0x0064606b]        ; 00570d86 | DOUBLE_0064606b
    MOV ESI,0x100                       ; 00570d8c
    XOR EDX,EDX                         ; 00570d91
    XOR ECX,ECX                         ; 00570d93
    FSTP float ptr [ESP]                ; 00570d95
    MOV dword ptr [ESP + 0x8],EDX       ; 00570d98
        ;   Label: LAB_00570d98
    FILD dword ptr [ESP + 0x8]          ; 00570d9c
    FMUL double ptr [0x0064606b]        ; 00570da0 | DOUBLE_0064606b
    FLD float ptr [ESP]                 ; 00570da6
    FXCH                                ; 00570da9
    CALL crt_math.c_pow_FUN_005ffd76    ; 00570dab
        ;   XREF to: 005ffd76 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_pow_FUN_005ffd76(float10 base, float10 exp)
    FMUL double ptr [0x00646073]        ; 00570db0 | DOUBLE_00646073
    CALL crt_math.c_round_FUN_005fe6b0  ; 00570db6
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x4]         ; 00570dbb
    CMP dword ptr [ESP + 0x4],0x100     ; 00570dbf
    JL 0x00570de4                       ; 00570dc7
        ;   XREF to: 00570de4 (CONDITIONAL_JUMP)  ; LAB_00570de4
    ADD ECX,0x4                         ; 00570dc9
        ;   Label: LAB_00570dc9
    MOV EAX,dword ptr [ESP + 0x4]       ; 00570dcc
    INC EDX                             ; 00570dd0
    MOV dword ptr [ECX + 0x327d778],EAX ; 00570dd1 | DAT_0327d778 | g_IntensityToValueLookupTable
    CMP EDX,0x10000                     ; 00570dd7
    JL 0x00570d98                       ; 00570ddd
        ;   XREF to: 00570d98 (CONDITIONAL_JUMP)  ; LAB_00570d98
    MOV ESP,EBP                         ; 00570ddf
    POP EBP                             ; 00570de1
    POP ESI                             ; 00570de2
    RET                                 ; 00570de3
    MOV dword ptr [ESP + 0x4],ESI       ; 00570de4
        ;   Label: LAB_00570de4
    JMP 0x00570dc9                      ; 00570de8
        ;   XREF to: 00570dc9 (UNCONDITIONAL_JUMP)  ; LAB_00570dc9

