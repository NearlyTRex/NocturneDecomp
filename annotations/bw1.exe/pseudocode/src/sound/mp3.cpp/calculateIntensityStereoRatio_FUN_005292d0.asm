; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_calculateIntensityStereoRatio_FUN_005292d0(int intensity_position,double ratio,int sample_index,float *ratio_buffer)
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
;   sound_mp3.cpp_mpegLayer3StereoProcess_FUN_00529370 at 0052972f
;
; Called Functions:
;   crt_math.c_pow_FUN_005c18f4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005292d0
        ;   Label: sound_mp3.cpp_calculateIntensityStereoRatio_FUN_005292d0
    PUSH ESI                            ; 005292d1
    SUB ESP,0x4                         ; 005292d2
    MOV ECX,dword ptr [ESP + 0x10]      ; 005292d5
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005292d9
    MOV EDX,dword ptr [ESP + 0x20]      ; 005292dd
    SHL EBX,0x2                         ; 005292e1
    ADD EBX,EDX                         ; 005292e4
    TEST ECX,ECX                        ; 005292e6
    JZ 0x00529327                       ; 005292e8
        ;   XREF to: 00529327 (CONDITIONAL_JUMP)  ; LAB_00529327
    MOV ESI,0x2                         ; 005292ea
    MOV EDX,ECX                         ; 005292ef
    MOV EAX,ECX                         ; 005292f1
    SAR EDX,0x1f                        ; 005292f3
    IDIV ESI                            ; 005292f6
    CMP EDX,0x1                         ; 005292f8
    JNZ 0x00529339                      ; 005292fb
        ;   XREF to: 00529339 (CONDITIONAL_JUMP)  ; LAB_00529339
    ADD EDX,ECX                         ; 005292fd
    MOV EAX,EDX                         ; 005292ff
    SAR EDX,0x1f                        ; 00529301
    IDIV ESI                            ; 00529304
    MOV dword ptr [ESP],EAX             ; 00529306
    FILD dword ptr [ESP]                ; 00529309
    FLD double ptr [ESP + 0x14]         ; 0052930c
    CALL crt_math.c_pow_FUN_005c18f4    ; 00529310
        ;   XREF to: 005c18f4 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_pow_FUN_005c18f4()
    MOV dword ptr [EBX + 0x900],0x3f800000 ; 00529315
    FSTP float ptr [EBX]                ; 0052931f
    ADD ESP,0x4                         ; 00529321
        ;   Label: LAB_00529321
    POP ESI                             ; 00529324
    POP EBX                             ; 00529325
    RET                                 ; 00529326
    MOV dword ptr [EBX + 0x900],0x3f800000 ; 00529327
        ;   Label: LAB_00529327
    MOV dword ptr [EBX],0x3f800000      ; 00529331
    JMP 0x00529321                      ; 00529337
        ;   XREF to: 00529321 (UNCONDITIONAL_JUMP)  ; LAB_00529321
    MOV EDX,ECX                         ; 00529339
        ;   Label: LAB_00529339
    MOV EAX,ECX                         ; 0052933b
    SAR EDX,0x1f                        ; 0052933d
    IDIV ESI                            ; 00529340
    MOV dword ptr [ESP],EAX             ; 00529342
    FILD dword ptr [ESP]                ; 00529345
    FLD double ptr [ESP + 0x14]         ; 00529348
    CALL crt_math.c_pow_FUN_005c18f4    ; 0052934c
        ;   XREF to: 005c18f4 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_pow_FUN_005c18f4()
    MOV dword ptr [EBX],0x3f800000      ; 00529351
    FSTP float ptr [EBX + 0x900]        ; 00529357
    ADD ESP,0x4                         ; 0052935d
    POP ESI                             ; 00529360
    POP EBX                             ; 00529361
    RET                                 ; 00529362

