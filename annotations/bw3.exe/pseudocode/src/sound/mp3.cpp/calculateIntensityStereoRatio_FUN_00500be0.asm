; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_calculateIntensityStereoRatio_FUN_00500be0(int intensity_position,double ratio,int sample_index,float *ratio_buffer)
;
; Parameters:
; int              Stack[0x4]:4   intensity_position
; double           Stack[0x8]:8   ratio
; int              Stack[0x10]:4   sample_index
; float *          Stack[0x14]:4   ratio_buffer
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   sound_mp3.cpp_mpegLayer3StereoProcess_FUN_00500c80 at 0050103f
;
; Called Functions:
;   crt_math.c_pow_FUN_005a4764
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00500be0
        ;   Label: sound_mp3.cpp_calculateIntensityStereoRatio_FUN_00500be0
    PUSH ESI                            ; 00500be1
    SUB ESP,0x4                         ; 00500be2
    MOV ECX,dword ptr [ESP + 0x10]      ; 00500be5
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00500be9
    MOV EDX,dword ptr [ESP + 0x20]      ; 00500bed
    SHL EBX,0x2                         ; 00500bf1
    ADD EBX,EDX                         ; 00500bf4
    TEST ECX,ECX                        ; 00500bf6
    JZ 0x00500c37                       ; 00500bf8
        ;   XREF to: 00500c37 (CONDITIONAL_JUMP)  ; LAB_00500c37
    MOV ESI,0x2                         ; 00500bfa
    MOV EDX,ECX                         ; 00500bff
    MOV EAX,ECX                         ; 00500c01
    SAR EDX,0x1f                        ; 00500c03
    IDIV ESI                            ; 00500c06
    CMP EDX,0x1                         ; 00500c08
    JNZ 0x00500c49                      ; 00500c0b
        ;   XREF to: 00500c49 (CONDITIONAL_JUMP)  ; LAB_00500c49
    ADD EDX,ECX                         ; 00500c0d
    MOV EAX,EDX                         ; 00500c0f
    SAR EDX,0x1f                        ; 00500c11
    IDIV ESI                            ; 00500c14
    MOV dword ptr [ESP],EAX             ; 00500c16
    FILD dword ptr [ESP]                ; 00500c19
    FLD double ptr [ESP + 0x14]         ; 00500c1c
    CALL crt_math.c_pow_FUN_005a4764    ; 00500c20
        ;   XREF to: 005a4764 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_pow_FUN_005a4764()
    MOV dword ptr [EBX + 0x900],0x3f800000 ; 00500c25
    FSTP float ptr [EBX]                ; 00500c2f
    ADD ESP,0x4                         ; 00500c31
        ;   Label: LAB_00500c31
    POP ESI                             ; 00500c34
    POP EBX                             ; 00500c35
    RET                                 ; 00500c36
    MOV dword ptr [EBX + 0x900],0x3f800000 ; 00500c37
        ;   Label: LAB_00500c37
    MOV dword ptr [EBX],0x3f800000      ; 00500c41
    JMP 0x00500c31                      ; 00500c47
        ;   XREF to: 00500c31 (UNCONDITIONAL_JUMP)  ; LAB_00500c31
    MOV EDX,ECX                         ; 00500c49
        ;   Label: LAB_00500c49
    MOV EAX,ECX                         ; 00500c4b
    SAR EDX,0x1f                        ; 00500c4d
    IDIV ESI                            ; 00500c50
    MOV dword ptr [ESP],EAX             ; 00500c52
    FILD dword ptr [ESP]                ; 00500c55
    FLD double ptr [ESP + 0x14]         ; 00500c58
    CALL crt_math.c_pow_FUN_005a4764    ; 00500c5c
        ;   XREF to: 005a4764 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_pow_FUN_005a4764()
    MOV dword ptr [EBX],0x3f800000      ; 00500c61
    FSTP float ptr [EBX + 0x900]        ; 00500c67
    ADD ESP,0x4                         ; 00500c6d
    POP ESI                             ; 00500c70
    POP EBX                             ; 00500c71
    RET                                 ; 00500c72

