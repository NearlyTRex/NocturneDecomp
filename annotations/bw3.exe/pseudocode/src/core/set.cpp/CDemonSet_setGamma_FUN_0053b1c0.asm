; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_setGamma_FUN_0053b1c0(CDemonSet *this_ptr,int gamma)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   gamma
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[3]:
;   core_game.cpp_CGame_processHotkeys_FUN_004ba540 at 004ba8e5
;   core_game.cpp_FUN_004b7f90 at 004b8290
;   core_game.cpp_FUN_004c4870 at 004c4891
;
; Referenced Globals:
;   undefined4 DAT_005d0897
;   undefined4 DAT_005d089f
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00450980
;   crt_math.c_pow_FUN_005a4764
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0053b1c0
        ;   Label: core_set.cpp_CDemonSet_setGamma_FUN_0053b1c0
    PUSH EBP                            ; 0053b1c1
    MOV EBP,ESP                         ; 0053b1c2
    SUB ESP,0xc                         ; 0053b1c4
    AND ESP,0xfffffff8                  ; 0053b1c7
    MOV EDX,dword ptr [EBP + 0x10]      ; 0053b1ca
    PUSH EDX                            ; 0053b1cd
    PUSH 0x2038f4c                      ; 0053b1ce
    CALL core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00450980 ; 0053b1d3
        ;   XREF to: 00450980 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00450980(CDemonCamera * this_ptr, int gamma_value)
    ADD ESP,0x8                         ; 0053b1d8
    MOV EAX,dword ptr [EBP + 0x10]      ; 0053b1db
    MOV dword ptr [ESP + 0x8],EAX       ; 0053b1de
    FILD dword ptr [ESP + 0x8]          ; 0053b1e2
    FMUL double ptr [0x005d0897]        ; 0053b1e6 | DAT_005d0897
    MOV ESI,0x100                       ; 0053b1ec
    XOR EDX,EDX                         ; 0053b1f1
    XOR ECX,ECX                         ; 0053b1f3
    FSTP float ptr [ESP]                ; 0053b1f5
    MOV dword ptr [ESP + 0x8],EDX       ; 0053b1f8
        ;   Label: LAB_0053b1f8
    FILD dword ptr [ESP + 0x8]          ; 0053b1fc
    FMUL double ptr [0x005d0897]        ; 0053b200 | DAT_005d0897
    FLD float ptr [ESP]                 ; 0053b206
    FXCH                                ; 0053b209
    CALL crt_math.c_pow_FUN_005a4764    ; 0053b20b
        ;   XREF to: 005a4764 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_pow_FUN_005a4764()
    FMUL double ptr [0x005d089f]        ; 0053b210 | DAT_005d089f
    CALL crt_math.c_round_FUN_005a3120  ; 0053b216
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x4]         ; 0053b21b
    CMP dword ptr [ESP + 0x4],0x100     ; 0053b21f
    JL 0x0053b244                       ; 0053b227
        ;   XREF to: 0053b244 (CONDITIONAL_JUMP)  ; LAB_0053b244
    ADD ECX,0x4                         ; 0053b229
        ;   Label: LAB_0053b229
    MOV EAX,dword ptr [ESP + 0x4]       ; 0053b22c
    INC EDX                             ; 0053b230
    MOV dword ptr [ECX + 0x203baa0],EAX ; 0053b231
    CMP EDX,0x10000                     ; 0053b237
    JL 0x0053b1f8                       ; 0053b23d
        ;   XREF to: 0053b1f8 (CONDITIONAL_JUMP)  ; LAB_0053b1f8
    MOV ESP,EBP                         ; 0053b23f
    POP EBP                             ; 0053b241
    POP ESI                             ; 0053b242
    RET                                 ; 0053b243
    MOV dword ptr [ESP + 0x4],ESI       ; 0053b244
        ;   Label: LAB_0053b244
    JMP 0x0053b229                      ; 0053b248
        ;   XREF to: 0053b229 (UNCONDITIONAL_JUMP)  ; LAB_0053b229

