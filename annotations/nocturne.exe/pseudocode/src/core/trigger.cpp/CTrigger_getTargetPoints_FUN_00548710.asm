; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_trigger_cpp_CTrigger_getTargetPoints_FUN_00548710(CTrigger *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
;
; Referenced Globals:
;   float FLOAT_00596b1f = 0.5
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548710
        ;   Label: core_trigger.cpp_CTrigger_getTargetPoints_FUN_00548710
    SUB ESP,0x30                        ; 00548711
    MOV ECX,dword ptr [ESP + 0x38]      ; 00548714
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00548718
    CMP dword ptr [ECX + 0x16c],0x4     ; 0054871c
    JZ 0x0054872c                       ; 00548723
        ;   XREF to: 0054872c (CONDITIONAL_JUMP)  ; LAB_0054872c
    XOR EAX,EAX                         ; 00548725
    ADD ESP,0x30                        ; 00548727
    POP EBX                             ; 0054872a
    RET                                 ; 0054872b
    MOV EAX,ESP                         ; 0054872c
        ;   Label: LAB_0054872c
    PUSH EAX                            ; 0054872e
    MOV EDX,dword ptr [ECX + 0x14c]     ; 0054872f
    PUSH ECX                            ; 00548735
    CALL dword ptr [EDX + 0x14]         ; 00548736
    LEA EDX,[EAX + 0xc]                 ; 00548739
    FLD float ptr [EAX]                 ; 0054873c
    FADD float ptr [EDX]                ; 0054873e
    ADD ESP,0x8                         ; 00548740
    FST float ptr [ESP + 0x24]          ; 00548743
    FLD float ptr [EAX + 0x4]           ; 00548747
    FADD float ptr [EDX + 0x4]          ; 0054874a
    FXCH                                ; 0054874d
    FLD float ptr [0x00596b1f]          ; 0054874f | FLOAT_00596b1f
    FXCH                                ; 00548755
    FMUL ST1                            ; 00548757
    FXCH ST2                            ; 00548759
    FST float ptr [ESP + 0x28]          ; 0054875b
    FLD float ptr [EAX + 0x8]           ; 0054875f
    FADD float ptr [EDX + 0x8]          ; 00548762
    FXCH                                ; 00548765
    FMUL ST2                            ; 00548767
    FXCH                                ; 00548769
    FST float ptr [ESP + 0x2c]          ; 0054876b
    FMULP ST2                           ; 0054876f
    LEA EAX,[ESP + 0x18]                ; 00548771
    FXCH ST2                            ; 00548775
    FSTP float ptr [ESP + 0x18]         ; 00548777
    FXCH                                ; 0054877b
    FSTP float ptr [ESP + 0x1c]         ; 0054877d
    FSTP float ptr [ESP + 0x20]         ; 00548781
    CMP EBX,EAX                         ; 00548785
    JZ 0x0054879d                       ; 00548787
        ;   XREF to: 0054879d (CONDITIONAL_JUMP)  ; LAB_0054879d
    MOV EAX,dword ptr [ESP + 0x18]      ; 00548789
    MOV dword ptr [EBX],EAX             ; 0054878d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0054878f
    MOV dword ptr [EBX + 0x4],EAX       ; 00548793
    MOV EAX,dword ptr [ESP + 0x20]      ; 00548796
    MOV dword ptr [EBX + 0x8],EAX       ; 0054879a
    MOV EAX,0x1                         ; 0054879d
        ;   Label: LAB_0054879d
    ADD ESP,0x30                        ; 005487a2
    POP EBX                             ; 005487a5
    RET                                 ; 005487a6

