; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_calculateIntensityStereoRatio_FUN_00508100(int intensity_position,double ratio,int sample_index,float *ratio_buffer)
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
;   sound_mp3.cpp_mpegLayer3StereoProcess_FUN_005081a0 at 0050855f
;
; Called Functions:
;   crt_math.c_pow_FUN_005b9484
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00508100
        ;   Label: sound_mp3.cpp_calculateIntensityStereoRatio_FUN_00508100
    PUSH ESI                            ; 00508101
    SUB ESP,0x4                         ; 00508102
    MOV ECX,dword ptr [ESP + 0x10]      ; 00508105
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00508109
    MOV EDX,dword ptr [ESP + 0x20]      ; 0050810d
    SHL EBX,0x2                         ; 00508111
    ADD EBX,EDX                         ; 00508114
    TEST ECX,ECX                        ; 00508116
    JZ 0x00508157                       ; 00508118
        ;   XREF to: 00508157 (CONDITIONAL_JUMP)  ; LAB_00508157
    MOV ESI,0x2                         ; 0050811a
    MOV EDX,ECX                         ; 0050811f
    MOV EAX,ECX                         ; 00508121
    SAR EDX,0x1f                        ; 00508123
    IDIV ESI                            ; 00508126
    CMP EDX,0x1                         ; 00508128
    JNZ 0x00508169                      ; 0050812b
        ;   XREF to: 00508169 (CONDITIONAL_JUMP)  ; LAB_00508169
    ADD EDX,ECX                         ; 0050812d
    MOV EAX,EDX                         ; 0050812f
    SAR EDX,0x1f                        ; 00508131
    IDIV ESI                            ; 00508134
    MOV dword ptr [ESP],EAX             ; 00508136
    FILD dword ptr [ESP]                ; 00508139
    FLD double ptr [ESP + 0x14]         ; 0050813c
    CALL crt_math.c_pow_FUN_005b9484    ; 00508140
        ;   XREF to: 005b9484 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_pow_FUN_005b9484()
    MOV dword ptr [EBX + 0x900],0x3f800000 ; 00508145
    FSTP float ptr [EBX]                ; 0050814f
    ADD ESP,0x4                         ; 00508151
        ;   Label: LAB_00508151
    POP ESI                             ; 00508154
    POP EBX                             ; 00508155
    RET                                 ; 00508156
    MOV dword ptr [EBX + 0x900],0x3f800000 ; 00508157
        ;   Label: LAB_00508157
    MOV dword ptr [EBX],0x3f800000      ; 00508161
    JMP 0x00508151                      ; 00508167
        ;   XREF to: 00508151 (UNCONDITIONAL_JUMP)  ; LAB_00508151
    MOV EDX,ECX                         ; 00508169
        ;   Label: LAB_00508169
    MOV EAX,ECX                         ; 0050816b
    SAR EDX,0x1f                        ; 0050816d
    IDIV ESI                            ; 00508170
    MOV dword ptr [ESP],EAX             ; 00508172
    FILD dword ptr [ESP]                ; 00508175
    FLD double ptr [ESP + 0x14]         ; 00508178
    CALL crt_math.c_pow_FUN_005b9484    ; 0050817c
        ;   XREF to: 005b9484 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_pow_FUN_005b9484()
    MOV dword ptr [EBX],0x3f800000      ; 00508181
    FSTP float ptr [EBX + 0x900]        ; 00508187
    ADD ESP,0x4                         ; 0050818d
    POP ESI                             ; 00508190
    POP EBX                             ; 00508191
    RET                                 ; 00508192

