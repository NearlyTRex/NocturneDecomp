; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_motion_cpp_CMotionController_getFramesForInterpolation_FUN_0052e4c0(CMotionController *this_ptr,int motion_index,float frame_number,int *out_frame1,int *out_frame2,float *out_blend_weight)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   motion_index
; float            Stack[0xc]:4   frame_number
; int *            Stack[0x10]:4   out_frame1
; int *            Stack[0x14]:4   out_frame2
; float *          Stack[0x18]:4   out_blend_weight
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50 at 0059eb92
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransformsForFrame_FUN_005a0ad0 at 005a0b06
;   core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0 at 0059e0dd
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052e4c0
        ;   Label: core_motion.cpp_CMotionController_getFramesForInterpolation_FUN_0052e4c0
    PUSH ESI                            ; 0052e4c1
    PUSH EDI                            ; 0052e4c2
    PUSH EBP                            ; 0052e4c3
    SUB ESP,0x8                         ; 0052e4c4
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0052e4c7
    MOV ECX,dword ptr [ESP + 0x28]      ; 0052e4cb
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0052e4cf
    MOV EBX,dword ptr [ESP + 0x30]      ; 0052e4d3
    IMUL EDX,dword ptr [ESP + 0x20],0x54c ; 0052e4d7
    MOV EAX,dword ptr [EDI]             ; 0052e4df
    FLD float ptr [ESP + 0x24]          ; 0052e4e1
    ADD EAX,0x968                       ; 0052e4e5
    FLDZ                                ; 0052e4ea
    ADD EDX,EAX                         ; 0052e4ec
    FCOMPP                              ; 0052e4ee
    FNSTSW AX                           ; 0052e4f0
    SAHF                                ; 0052e4f2
    JNC 0x0052e571                      ; 0052e4f3
        ;   XREF to: 0052e571 (CONDITIONAL_JUMP)  ; LAB_0052e571
    MOV EAX,dword ptr [EDX + 0x64]      ; 0052e4f9
    DEC EAX                             ; 0052e4fc
    MOV dword ptr [ESP + 0x4],EAX       ; 0052e4fd
    FILD dword ptr [ESP + 0x4]          ; 0052e501
    FCOMP float ptr [ESP + 0x24]        ; 0052e505
    FNSTSW AX                           ; 0052e509
    SAHF                                ; 0052e50b
    JA 0x0052e59e                       ; 0052e50c
        ;   XREF to: 0052e59e (CONDITIONAL_JUMP)  ; LAB_0052e59e
    MOV EBP,dword ptr [EDX + 0x64]      ; 0052e512
    MOV EAX,dword ptr [EDX + 0x60]      ; 0052e515
    ADD EAX,EBP                         ; 0052e518
    DEC EAX                             ; 0052e51a
    MOV dword ptr [ECX],EAX             ; 0052e51b
    MOV EAX,dword ptr [EDX + 0x64]      ; 0052e51d
    MOV EBP,dword ptr [EDX + 0x28]      ; 0052e520
    DEC EAX                             ; 0052e523
    CMP EAX,EBP                         ; 0052e524
    JG 0x0052e58c                       ; 0052e526
        ;   XREF to: 0052e58c (CONDITIONAL_JUMP)  ; LAB_0052e58c
    CMP dword ptr [EDX + 0x30],0x1      ; 0052e528
    JNZ 0x0052e58c                      ; 0052e52c
        ;   XREF to: 0052e58c (CONDITIONAL_JUMP)  ; LAB_0052e58c
    IMUL EAX,dword ptr [EDX + 0x34],0x54c ; 0052e52e
    MOV EDI,dword ptr [EDI]             ; 0052e535
    FILD dword ptr [EDI + EAX*0x1 + 0x9c8] ; 0052e537
    FADD float ptr [EDX + 0x38]         ; 0052e53e
    CALL crt_math.c_round_FUN_005fe6b0  ; 0052e541
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESI]               ; 0052e546
    MOV EAX,dword ptr [EDX + 0x64]      ; 0052e548
    DEC EAX                             ; 0052e54b
    MOV dword ptr [ESP + 0x4],EAX       ; 0052e54c
    FILD dword ptr [ESP + 0x4]          ; 0052e550
    FSUBR float ptr [ESP + 0x24]        ; 0052e554
    FST float ptr [EBX]                 ; 0052e558
    FLD1                                ; 0052e55a
    FCOMPP                              ; 0052e55c
    FNSTSW AX                           ; 0052e55e
    SAHF                                ; 0052e560
    JBE 0x0052e580                      ; 0052e561
        ;   XREF to: 0052e580 (CONDITIONAL_JUMP)  ; LAB_0052e580
    ADD ESP,0x8                         ; 0052e563
        ;   Label: LAB_0052e563
    POP EBP                             ; 0052e566
    POP EDI                             ; 0052e567
    POP ESI                             ; 0052e568
    POP EBX                             ; 0052e569
    LEA EAX,[EAX]                       ; 0052e56a
    MOV EAX,dword ptr [EDX + 0x60]      ; 0052e571
        ;   Label: LAB_0052e571
    MOV dword ptr [ECX],EAX             ; 0052e574
    MOV dword ptr [ESI],EAX             ; 0052e576
    MOV dword ptr [EBX],0x0             ; 0052e578
    JMP 0x0052e563                      ; 0052e57e
        ;   XREF to: 0052e563 (UNCONDITIONAL_JUMP)  ; LAB_0052e563
    MOV EAX,dword ptr [ESI]             ; 0052e580
        ;   Label: LAB_0052e580
    MOV dword ptr [ECX],EAX             ; 0052e582
    MOV dword ptr [EBX],0x0             ; 0052e584
    JMP 0x0052e563                      ; 0052e58a
        ;   XREF to: 0052e563 (UNCONDITIONAL_JUMP)  ; LAB_0052e563
    MOV EAX,dword ptr [ECX]             ; 0052e58c
        ;   Label: LAB_0052e58c
    MOV dword ptr [ESI],EAX             ; 0052e58e
    MOV dword ptr [EBX],0x0             ; 0052e590
    ADD ESP,0x8                         ; 0052e596
    POP EBP                             ; 0052e599
    POP EDI                             ; 0052e59a
    POP ESI                             ; 0052e59b
    POP EBX                             ; 0052e59c
    RET                                 ; 0052e59d
    FILD dword ptr [EDX + 0x60]         ; 0052e59e
        ;   Label: LAB_0052e59e
    FADD float ptr [ESP + 0x24]         ; 0052e5a1
    FLD ST0                             ; 0052e5a5
    CALL crt_math.c_round_FUN_005fe6b0  ; 0052e5a7
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ECX]               ; 0052e5ac
    MOV EDX,dword ptr [ECX]             ; 0052e5ae
    INC EDX                             ; 0052e5b0
    MOV dword ptr [ESI],EDX             ; 0052e5b1
    FILD dword ptr [ECX]                ; 0052e5b3
    FSUBP                               ; 0052e5b5
    FSTP float ptr [EBX]                ; 0052e5b7
    ADD ESP,0x8                         ; 0052e5b9
    POP EBP                             ; 0052e5bc
    POP EDI                             ; 0052e5bd
    POP ESI                             ; 0052e5be
    POP EBX                             ; 0052e5bf
    RET                                 ; 0052e5c0

