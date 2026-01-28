; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl sound_mp3_cpp_calculateIntensityStereoRatio_FUN_00532540 (int intensity_position,double ratio,int unused_param3,int sample_index, float *output_buffer)
;
; Parameters:
; int              Stack[0x4]:4   intensity_position
; double           Stack[0x8]:8   ratio
; int              Stack[0x10]:4   unused_param3
; int              Stack[0x14]:4   sample_index
; float *          Stack[0x18]:4   output_buffer
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   sound_mp3.cpp_mpegLayer3StereoProcess_FUN_005325e0 at 0053320f
;
; Called Functions:
;   crt_math.c_pow_FUN_005ffd76
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00532540
        ;   Label: sound_mp3.cpp_calculateIntensityStereoRatio_FUN_00532540
    PUSH ESI                            ; 00532541
    SUB ESP,0x4                         ; 00532542
    MOV ECX,dword ptr [ESP + 0x10]      ; 00532545
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00532549
    MOV EDX,dword ptr [ESP + 0x20]      ; 0053254d
    SHL EBX,0x2                         ; 00532551
    ADD EBX,EDX                         ; 00532554
    TEST ECX,ECX                        ; 00532556
    JZ 0x00532597                       ; 00532558
        ;   XREF to: 00532597 (CONDITIONAL_JUMP)  ; LAB_00532597
    MOV ESI,0x2                         ; 0053255a
    MOV EDX,ECX                         ; 0053255f
    MOV EAX,ECX                         ; 00532561
    SAR EDX,0x1f                        ; 00532563
    IDIV ESI                            ; 00532566
    CMP EDX,0x1                         ; 00532568
    JNZ 0x005325a9                      ; 0053256b
        ;   XREF to: 005325a9 (CONDITIONAL_JUMP)  ; LAB_005325a9
    ADD EDX,ECX                         ; 0053256d
    MOV EAX,EDX                         ; 0053256f
    SAR EDX,0x1f                        ; 00532571
    IDIV ESI                            ; 00532574
    MOV dword ptr [ESP],EAX             ; 00532576
    FILD dword ptr [ESP]                ; 00532579
    FLD double ptr [ESP + 0x14]         ; 0053257c
    CALL crt_math.c_pow_FUN_005ffd76    ; 00532580
        ;   XREF to: 005ffd76 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_pow_FUN_005ffd76(float10 base, float10 exp)
    MOV dword ptr [EBX + 0x900],0x3f800000 ; 00532585
    FSTP float ptr [EBX]                ; 0053258f
    ADD ESP,0x4                         ; 00532591
        ;   Label: LAB_00532591
    POP ESI                             ; 00532594
    POP EBX                             ; 00532595
    RET                                 ; 00532596
    MOV dword ptr [EBX + 0x900],0x3f800000 ; 00532597
        ;   Label: LAB_00532597
    MOV dword ptr [EBX],0x3f800000      ; 005325a1
    JMP 0x00532591                      ; 005325a7
        ;   XREF to: 00532591 (UNCONDITIONAL_JUMP)  ; LAB_00532591
    MOV EDX,ECX                         ; 005325a9
        ;   Label: LAB_005325a9
    MOV EAX,ECX                         ; 005325ab
    SAR EDX,0x1f                        ; 005325ad
    IDIV ESI                            ; 005325b0
    MOV dword ptr [ESP],EAX             ; 005325b2
    FILD dword ptr [ESP]                ; 005325b5
    FLD double ptr [ESP + 0x14]         ; 005325b8
    CALL crt_math.c_pow_FUN_005ffd76    ; 005325bc
        ;   XREF to: 005ffd76 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_pow_FUN_005ffd76(float10 base, float10 exp)
    MOV dword ptr [EBX],0x3f800000      ; 005325c1
    FSTP float ptr [EBX + 0x900]        ; 005325c7
    ADD ESP,0x4                         ; 005325cd
    POP ESI                             ; 005325d0
    POP EBX                             ; 005325d1
    RET                                 ; 005325d2

