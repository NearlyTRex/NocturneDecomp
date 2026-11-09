; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_generateGammaPalette_FUN_00454830(CDemonCamera *this_ptr,int gamma_value)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   gamma_value
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_0044cb60 at 0044cc07
;   core_set.cpp_CDemonSet_setGamma_FUN_00555830 at 00555843
;
; Referenced Globals:
;   undefined4 DAT_005d7a0f
;   undefined4 DAT_005d7a17
;   undefined4 DAT_005d7a1f
;   undefined4 DAT_00611230
;   undefined4 DAT_00611234
;   undefined4 DAT_00611238
;   undefined4 DAT_00b8189c
;   undefined4 DAT_00b8199c
;
; Called Functions:
;   crt_math.c_pow_FUN_005c18f4
;   crt_math.c_round_FUN_005c03a0
;   engine_special.cpp_setFogColor_FUN_005828e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00454830
        ;   Label: core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00454830
    PUSH EBP                            ; 00454831
    MOV EBP,ESP                         ; 00454832
    SUB ESP,0xc                         ; 00454834
    MOV EAX,dword ptr [EBP + 0x10]      ; 00454837
    MOV dword ptr [EBP + -0x4],EAX      ; 0045483a
    FILD dword ptr [EBP + -0x4]         ; 0045483d
    FMUL double ptr [0x005d7a0f]        ; 00454840 | DAT_005d7a0f
    XOR EDX,EDX                         ; 00454846
    XOR ECX,ECX                         ; 00454848
    FSTP float ptr [EBP + -0x8]         ; 0045484a
    FLD double ptr [0x005d7a1f]         ; 0045484d | DAT_005d7a1f
    FLD float ptr [EBP + -0x8]          ; 00454853
    FLD double ptr [0x005d7a17]         ; 00454856 | DAT_005d7a17
    MOV dword ptr [EBP + -0x4],EDX      ; 0045485c
        ;   Label: LAB_0045485c
    FILD dword ptr [EBP + -0x4]         ; 0045485f
    FMUL ST1                            ; 00454862
    FLD ST2                             ; 00454864
    FXCH                                ; 00454866
    CALL crt_math.c_pow_FUN_005c18f4    ; 00454868
        ;   XREF to: 005c18f4 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_pow_FUN_005c18f4()
    FMUL ST3                            ; 0045486d
    CALL crt_math.c_round_FUN_005c03a0  ; 0045486f
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [EBP + -0xc]        ; 00454874
    MOV EAX,dword ptr [EBP + -0xc]      ; 00454877
    MOV EBX,dword ptr [EBP + -0xc]      ; 0045487a
    SHL EAX,0x8                         ; 0045487d
    OR EAX,EBX                          ; 00454880
    SHL EBX,0x10                        ; 00454882
    OR EBX,EAX                          ; 00454885
    MOV EAX,dword ptr [EBP + -0xc]      ; 00454887
    SHL EAX,0x18                        ; 0045488a
    ADD ECX,0x4                         ; 0045488d
    OR EAX,EBX                          ; 00454890
    INC EDX                             ; 00454892
    MOV dword ptr [ECX + 0xb81898],EAX  ; 00454893 | DAT_00b8189c
    CMP EDX,0x100                       ; 00454899
    JL 0x0045485c                       ; 0045489f
        ;   XREF to: 0045485c (CONDITIONAL_JUMP)  ; LAB_0045485c
    MOV EAX,[0x00611238]                ; 004548a1 | DAT_00611238
    MOV EAX,dword ptr [EAX*0x4 + 0xb8189c] ; 004548a6 | DAT_00b8199c
    AND EAX,0xff                        ; 004548ad
    PUSH EAX                            ; 004548b2
    MOV EAX,[0x00611234]                ; 004548b3 | DAT_00611234
    MOV EAX,dword ptr [EAX*0x4 + 0xb8189c] ; 004548b8 | DAT_00b8199c
    AND EAX,0xff                        ; 004548bf
    PUSH EAX                            ; 004548c4
    MOV EAX,[0x00611230]                ; 004548c5 | DAT_00611230
    MOV EAX,dword ptr [EAX*0x4 + 0xb8189c] ; 004548ca | DAT_00b8199c
    FSTP ST0                            ; 004548d1
    AND EAX,0xff                        ; 004548d3
    FSTP ST0                            ; 004548d8
    PUSH EAX                            ; 004548da
    FSTP ST0                            ; 004548db
    CALL engine_special.cpp_setFogColor_FUN_005828e0 ; 004548dd
        ;   XREF to: 005828e0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_setFogColor_FUN_005828e0(int red, int green, int blue)
    ADD ESP,0xc                         ; 004548e2
    MOV ESP,EBP                         ; 004548e5
    POP EBP                             ; 004548e7
    POP EBX                             ; 004548e8
    RET                                 ; 004548e9

