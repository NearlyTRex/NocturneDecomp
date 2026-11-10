; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_setGamma_FUN_00555830(CDemonSet *this_ptr,int gamma)
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
;   core_game.cpp_CGame_processHotkeys_FUN_004d1a80 at 004d1e21
;   core_game.cpp_CGame_runGameSession_FUN_004cf5e0 at 004cf8e0
;   core_game.cpp_FUN_004dc000 at 004dc021
;
; Referenced Globals:
;   undefined4 DAT_005f0bee
;   undefined4 DAT_005f0bf6
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00454830
;   crt_math.c_pow_FUN_005c18f4
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00555830
        ;   Label: core_set.cpp_CDemonSet_setGamma_FUN_00555830
    PUSH EBP                            ; 00555831
    MOV EBP,ESP                         ; 00555832
    SUB ESP,0xc                         ; 00555834
    AND ESP,0xfffffff8                  ; 00555837
    MOV EDX,dword ptr [EBP + 0x10]      ; 0055583a
    PUSH EDX                            ; 0055583d
    PUSH 0x1fe37ec                      ; 0055583e
    CALL core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00454830 ; 00555843
        ;   XREF to: 00454830 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00454830(CDemonCamera * this_ptr, int gamma_value)
    ADD ESP,0x8                         ; 00555848
    MOV EAX,dword ptr [EBP + 0x10]      ; 0055584b
    MOV dword ptr [ESP + 0x8],EAX       ; 0055584e
    FILD dword ptr [ESP + 0x8]          ; 00555852
    FMUL double ptr [0x005f0bee]        ; 00555856 | DAT_005f0bee
    MOV ESI,0x100                       ; 0055585c
    XOR EDX,EDX                         ; 00555861
    XOR ECX,ECX                         ; 00555863
    FSTP float ptr [ESP]                ; 00555865
    MOV dword ptr [ESP + 0x8],EDX       ; 00555868
        ;   Label: LAB_00555868
    FILD dword ptr [ESP + 0x8]          ; 0055586c
    FMUL double ptr [0x005f0bee]        ; 00555870 | DAT_005f0bee
    FLD float ptr [ESP]                 ; 00555876
    FXCH                                ; 00555879
    CALL crt_math.c_pow_FUN_005c18f4    ; 0055587b
        ;   XREF to: 005c18f4 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_pow_FUN_005c18f4()
    FMUL double ptr [0x005f0bf6]        ; 00555880 | DAT_005f0bf6
    CALL crt_math.c_round_FUN_005c03a0  ; 00555886
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x4]         ; 0055588b
    CMP dword ptr [ESP + 0x4],0x100     ; 0055588f
    JL 0x005558b4                       ; 00555897
        ;   XREF to: 005558b4 (CONDITIONAL_JUMP)  ; LAB_005558b4
    ADD ECX,0x4                         ; 00555899
        ;   Label: LAB_00555899
    MOV EAX,dword ptr [ESP + 0x4]       ; 0055589c
    INC EDX                             ; 005558a0
    MOV dword ptr [ECX + 0x1fe6340],EAX ; 005558a1
    CMP EDX,0x10000                     ; 005558a7
    JL 0x00555868                       ; 005558ad
        ;   XREF to: 00555868 (CONDITIONAL_JUMP)  ; LAB_00555868
    MOV ESP,EBP                         ; 005558af
    POP EBP                             ; 005558b1
    POP ESI                             ; 005558b2
    RET                                 ; 005558b3
    MOV dword ptr [ESP + 0x4],ESI       ; 005558b4
        ;   Label: LAB_005558b4
    JMP 0x00555899                      ; 005558b8
        ;   XREF to: 00555899 (UNCONDITIONAL_JUMP)  ; LAB_00555899

