; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_CMotionController_getFramesForInterpolation_FUN_00525240(CMotionController *this_ptr,int motion_index,float frame_number,int *out_frame1,int *out_frame2,float *out_blend_weight)
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
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_00568100 at 00568142
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransformsForFrame_FUN_0056a220 at 0056a256
;   core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_00567620 at 0056765d
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00525240
        ;   Label: core_motion.cpp_CMotionController_getFramesForInterpolation_FUN_00525240
    PUSH ESI                            ; 00525241
    PUSH EDI                            ; 00525242
    PUSH EBP                            ; 00525243
    SUB ESP,0x8                         ; 00525244
    MOV ECX,dword ptr [ESP + 0x28]      ; 00525247
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0052524b
    MOV EBX,dword ptr [ESP + 0x30]      ; 0052524f
    MOV EDX,dword ptr [ESP + 0x20]      ; 00525253
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00525257
    LEA EAX,[EDX*0x8 + 0x0]             ; 0052525b
    FLD float ptr [ESP + 0x24]          ; 00525262
    ADD EAX,EDX                         ; 00525266
    MOV EDI,dword ptr [EDI]             ; 00525268
    SHL EAX,0x5                         ; 0052526a
    LEA EDX,[EDI + 0x1c28]              ; 0052526d
    FLDZ                                ; 00525273
    ADD EDX,EAX                         ; 00525275
    FCOMPP                              ; 00525277
    FNSTSW AX                           ; 00525279
    SAHF                                ; 0052527b
    JNC 0x00525321                      ; 0052527c
        ;   XREF to: 00525321 (CONDITIONAL_JUMP)  ; LAB_00525321
    MOV EAX,dword ptr [EDX + 0x64]      ; 00525282
    MOV EDI,dword ptr [EDX + 0x68]      ; 00525285
    SUB EAX,EDI                         ; 00525288
    MOV dword ptr [ESP + 0x4],EAX       ; 0052528a
    FILD dword ptr [ESP + 0x4]          ; 0052528e
    FCOMP float ptr [ESP + 0x24]        ; 00525292
    FNSTSW AX                           ; 00525296
    SAHF                                ; 00525298
    JA 0x00525354                       ; 00525299
        ;   XREF to: 00525354 (CONDITIONAL_JUMP)  ; LAB_00525354
    MOV EBP,dword ptr [EDX + 0x6c]      ; 0052529f
    MOV EAX,dword ptr [EDX + 0x60]      ; 005252a2
    ADD EAX,EBP                         ; 005252a5
    DEC EAX                             ; 005252a7
    MOV dword ptr [ECX],EAX             ; 005252a8
    MOV EAX,dword ptr [EDX + 0x64]      ; 005252aa
    MOV EDI,dword ptr [EDX + 0x28]      ; 005252ad
    DEC EAX                             ; 005252b0
    CMP EAX,EDI                         ; 005252b1
    JG 0x00525342                       ; 005252b3
        ;   XREF to: 00525342 (CONDITIONAL_JUMP)  ; LAB_00525342
    CMP dword ptr [EDX + 0x30],0x1      ; 005252b9
    JNZ 0x00525342                      ; 005252bd
        ;   XREF to: 00525342 (CONDITIONAL_JUMP)  ; LAB_00525342
    MOV EDI,dword ptr [EDX + 0x34]      ; 005252c3
    LEA EAX,[EDI*0x8 + 0x0]             ; 005252c6
    ADD EDI,EAX                         ; 005252cd
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005252cf
    SHL EDI,0x5                         ; 005252d3
    MOV EAX,dword ptr [EAX]             ; 005252d6
    FILD dword ptr [EDI + EAX*0x1 + 0x1c90] ; 005252d8
    FDIVR float ptr [EDX + 0x38]        ; 005252df
    FILD dword ptr [EDI + EAX*0x1 + 0x1c88] ; 005252e2
    FADDP                               ; 005252e9
    CALL crt_math.c_round_FUN_005c03a0  ; 005252eb
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESI]               ; 005252f0
    MOV EAX,dword ptr [EDX + 0x64]      ; 005252f2
    MOV EDI,dword ptr [EDX + 0x68]      ; 005252f5
    SUB EAX,EDI                         ; 005252f8
    MOV dword ptr [ESP + 0x4],EAX       ; 005252fa
    FILD dword ptr [ESP + 0x4]          ; 005252fe
    FSUBR float ptr [ESP + 0x24]        ; 00525302
    FILD dword ptr [EDX + 0x68]         ; 00525306
    FDIVP                               ; 00525309
    FST float ptr [EBX]                 ; 0052530b
    FLD1                                ; 0052530d
    FCOMPP                              ; 0052530f
    FNSTSW AX                           ; 00525311
    SAHF                                ; 00525313
    JBE 0x00525330                      ; 00525314
        ;   XREF to: 00525330 (CONDITIONAL_JUMP)  ; LAB_00525330
    ADD ESP,0x8                         ; 00525316
        ;   Label: LAB_00525316
    POP EBP                             ; 00525319
    POP EDI                             ; 0052531a
    POP ESI                             ; 0052531b
    POP EBX                             ; 0052531c
    LEA EAX,[EAX]                       ; 0052531d
    RET                                 ; 00525320
    MOV EAX,dword ptr [EDX + 0x60]      ; 00525321
        ;   Label: LAB_00525321
    MOV dword ptr [ECX],EAX             ; 00525324
    MOV dword ptr [ESI],EAX             ; 00525326
    MOV dword ptr [EBX],0x0             ; 00525328
    JMP 0x00525316                      ; 0052532e
        ;   XREF to: 00525316 (UNCONDITIONAL_JUMP)  ; LAB_00525316
    MOV EAX,dword ptr [ESI]             ; 00525330
        ;   Label: LAB_00525330
    MOV dword ptr [ECX],EAX             ; 00525332
    MOV dword ptr [EBX],0x0             ; 00525334
    ADD ESP,0x8                         ; 0052533a
    POP EBP                             ; 0052533d
    POP EDI                             ; 0052533e
    POP ESI                             ; 0052533f
    POP EBX                             ; 00525340
    RET                                 ; 00525341
    MOV EAX,dword ptr [ECX]             ; 00525342
        ;   Label: LAB_00525342
    MOV dword ptr [ESI],EAX             ; 00525344
    MOV dword ptr [EBX],0x0             ; 00525346
    ADD ESP,0x8                         ; 0052534c
    POP EBP                             ; 0052534f
    POP EDI                             ; 00525350
    POP ESI                             ; 00525351
    POP EBX                             ; 00525352
    RET                                 ; 00525353
    FILD dword ptr [EDX + 0x68]         ; 00525354
        ;   Label: LAB_00525354
    FDIVR float ptr [ESP + 0x24]        ; 00525357
    FILD dword ptr [EDX + 0x60]         ; 0052535b
    FADDP                               ; 0052535e
    FLD ST0                             ; 00525360
    CALL crt_math.c_round_FUN_005c03a0  ; 00525362
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ECX]               ; 00525367
    MOV EAX,dword ptr [ECX]             ; 00525369
    INC EAX                             ; 0052536b
    MOV dword ptr [ESI],EAX             ; 0052536c
    FILD dword ptr [ECX]                ; 0052536e
    FSUBP                               ; 00525370
    FSTP float ptr [EBX]                ; 00525372
    ADD ESP,0x8                         ; 00525374
    POP EBP                             ; 00525377
    POP EDI                             ; 00525378
    POP ESI                             ; 00525379
    POP EBX                             ; 0052537a
    RET                                 ; 0052537b

