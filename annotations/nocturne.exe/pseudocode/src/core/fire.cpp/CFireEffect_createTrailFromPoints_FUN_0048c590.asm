; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createTrailFromPoints_FUN_0048c590(CFireEffect *this_ptr,CVector3f *start_point,CVector3f *end_point,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   start_point
; CVector3f *      Stack[0xc]:4   end_point
; float            Stack[0x10]:4   size
; float            Stack[0x14]:4   alpha
; float            Stack[0x18]:4   lifetime
; SMRGLTextureBasic * Stack[0x1c]:4   texture_ptr
; Local Variables:
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_baron.cpp_FUN_00410490 at 00410946
;
; Referenced Globals:
;   double DOUBLE_00581524 = 8
;
; Called Functions:
;   core_fire.cpp_CFireEffect_createTrailSegment_FUN_0048c530
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048c590
        ;   Label: core_fire.cpp_CFireEffect_createTrailFromPoints_FUN_0048c590
    PUSH ESI                            ; 0048c591
    PUSH EDI                            ; 0048c592
    PUSH EBP                            ; 0048c593
    MOV EBP,ESP                         ; 0048c594
    SUB ESP,0x24                        ; 0048c596
    AND ESP,0xfffffff8                  ; 0048c599
    MOV EDI,dword ptr [EBP + 0x14]      ; 0048c59c
    MOV EBX,dword ptr [EBP + 0x18]      ; 0048c59f
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0048c5a2
    MOV ESI,dword ptr [EBP + 0x2c]      ; 0048c5a5
    FLD float ptr [EAX]                 ; 0048c5a8
    FSUB float ptr [EBX]                ; 0048c5aa
    FSTP float ptr [ESP + 0x10]         ; 0048c5ac
    FLD float ptr [EAX + 0x4]           ; 0048c5b0
    FSUB float ptr [EBX + 0x4]          ; 0048c5b3
    FST float ptr [ESP + 0x14]          ; 0048c5b6
    FMUL float ptr [ESP + 0x14]         ; 0048c5ba
    FLD float ptr [EAX + 0x8]           ; 0048c5be
    FSUB float ptr [EBX + 0x8]          ; 0048c5c1
    FLD float ptr [ESP + 0x10]          ; 0048c5c4
    FXCH                                ; 0048c5c8
    FSTP float ptr [ESP + 0x18]         ; 0048c5ca
    MOV EAX,dword ptr [EBX]             ; 0048c5ce
    FMUL float ptr [ESP + 0x10]         ; 0048c5d0
    MOV dword ptr [ESP + 0x4],EAX       ; 0048c5d4
    LEA EAX,[EBX + 0x4]                 ; 0048c5d8
    FADDP                               ; 0048c5db
    MOV EAX,dword ptr [EAX]             ; 0048c5dd
    FLD float ptr [ESP + 0x18]          ; 0048c5df
    MOV dword ptr [ESP + 0x8],EAX       ; 0048c5e3
    LEA EAX,[EBX + 0x8]                 ; 0048c5e7
    FMUL float ptr [ESP + 0x18]         ; 0048c5ea
    MOV EAX,dword ptr [EAX]             ; 0048c5ee
    FADDP                               ; 0048c5f0
    MOV dword ptr [ESP + 0xc],EAX       ; 0048c5f2
    FSQRT                               ; 0048c5f6
    FMUL double ptr [0x00581524]        ; 0048c5f8 | DOUBLE_00581524
    FDIV float ptr [EBP + 0x20]         ; 0048c5fe
    FLD1                                ; 0048c601
    FADDP                               ; 0048c603
    CALL crt_math.c_round_FUN_00563a30  ; 0048c605
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP]               ; 0048c60a
    MOV EAX,dword ptr [ESP]             ; 0048c60d
    MOV dword ptr [ESP + 0x20],EAX      ; 0048c610
    FLD float ptr [ESP + 0x10]          ; 0048c614
    FILD dword ptr [ESP + 0x20]         ; 0048c618
    FLD1                                ; 0048c61c
    FDIVRP                              ; 0048c61e
    FXCH                                ; 0048c620
    FMUL ST1                            ; 0048c622
    FLD float ptr [ESP + 0x14]          ; 0048c624
    FMUL ST2                            ; 0048c628
    FLD float ptr [ESP + 0x18]          ; 0048c62a
    FMULP ST3                           ; 0048c62e
    XOR EBX,EBX                         ; 0048c630
    FXCH                                ; 0048c632
    FSTP float ptr [ESP + 0x10]         ; 0048c634
    FSTP float ptr [ESP + 0x14]         ; 0048c638
    FSTP float ptr [ESP + 0x18]         ; 0048c63c
    TEST EAX,EAX                        ; 0048c640
    JLE 0x0048c6a0                      ; 0048c642
        ;   XREF to: 0048c6a0 (CONDITIONAL_JUMP)  ; LAB_0048c6a0
    PUSH ESI                            ; 0048c644
        ;   Label: LAB_0048c644
    PUSH dword ptr [EBP + 0x28]         ; 0048c645
    PUSH dword ptr [EBP + 0x24]         ; 0048c648
    LEA EAX,[ESP + 0x10]                ; 0048c64b
    PUSH dword ptr [EBP + 0x20]         ; 0048c64f
    PUSH EAX                            ; 0048c652
    PUSH EDI                            ; 0048c653
    CALL core_fire.cpp_CFireEffect_createTrailSegment_FUN_0048c530 ; 0048c654
        ;   XREF to: 0048c530 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createTrailSegment_FUN_0048c530(CFireEffect * this_ptr, CVector3f * position, float size, float alpha, ...)
    ADD ESP,0x18                        ; 0048c659
    INC EBX                             ; 0048c65c
    FLD float ptr [ESP + 0x4]           ; 0048c65d
    FLD float ptr [ESP + 0x8]           ; 0048c661
    FLD float ptr [ESP + 0xc]           ; 0048c665
    MOV ECX,dword ptr [ESP]             ; 0048c669
    FXCH ST2                            ; 0048c66c
    FADD float ptr [ESP + 0x10]         ; 0048c66e
    FXCH                                ; 0048c672
    FADD float ptr [ESP + 0x14]         ; 0048c674
    FXCH ST2                            ; 0048c678
    FADD float ptr [ESP + 0x18]         ; 0048c67a
    FXCH                                ; 0048c67e
    FSTP float ptr [ESP + 0x4]          ; 0048c680
    FXCH                                ; 0048c684
    FSTP float ptr [ESP + 0x8]          ; 0048c686
    FSTP float ptr [ESP + 0xc]          ; 0048c68a
    CMP EBX,ECX                         ; 0048c68e
    JL 0x0048c644                       ; 0048c690
        ;   XREF to: 0048c644 (CONDITIONAL_JUMP)  ; LAB_0048c644
    LEA EAX,[EAX]                       ; 0048c692
    LEA EDX,[EDX]                       ; 0048c698
    MOV EAX,EAX                         ; 0048c69e
    MOV ESP,EBP                         ; 0048c6a0
        ;   Label: LAB_0048c6a0
    POP EBP                             ; 0048c6a2
    POP EDI                             ; 0048c6a3
    POP ESI                             ; 0048c6a4
    POP EBX                             ; 0048c6a5
    RET                                 ; 0048c6a6

