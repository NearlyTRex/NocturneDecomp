; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_FUN_004fcb50(CMotionController *this_ptr,int motion_index,float frame_number,int *out_frame1,int *out_frame2,float *out_blend_weight)
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
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90 at 0054ccd2
;   core_skeleton.cpp_FUN_0054c1b0 at 0054c1ed
;   core_skeleton.cpp_FUN_0054edb0 at 0054ede6
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fcb50
        ;   Label: core_motion.cpp_FUN_004fcb50
    PUSH ESI                            ; 004fcb51
    PUSH EDI                            ; 004fcb52
    PUSH EBP                            ; 004fcb53
    SUB ESP,0x8                         ; 004fcb54
    MOV ECX,dword ptr [ESP + 0x28]      ; 004fcb57
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004fcb5b
    MOV EBX,dword ptr [ESP + 0x30]      ; 004fcb5f
    MOV EDX,dword ptr [ESP + 0x20]      ; 004fcb63
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004fcb67
    LEA EAX,[EDX*0x8 + 0x0]             ; 004fcb6b
    FLD float ptr [ESP + 0x24]          ; 004fcb72
    ADD EAX,EDX                         ; 004fcb76
    MOV EDI,dword ptr [EDI]             ; 004fcb78
    SHL EAX,0x5                         ; 004fcb7a
    LEA EDX,[EDI + 0x1c28]              ; 004fcb7d
    FLDZ                                ; 004fcb83
    ADD EDX,EAX                         ; 004fcb85
    FCOMPP                              ; 004fcb87
    FNSTSW AX                           ; 004fcb89
    SAHF                                ; 004fcb8b
    JNC 0x004fcc31                      ; 004fcb8c
        ;   XREF to: 004fcc31 (CONDITIONAL_JUMP)  ; LAB_004fcc31
    MOV EAX,dword ptr [EDX + 0x64]      ; 004fcb92
    MOV EDI,dword ptr [EDX + 0x68]      ; 004fcb95
    SUB EAX,EDI                         ; 004fcb98
    MOV dword ptr [ESP + 0x4],EAX       ; 004fcb9a
    FILD dword ptr [ESP + 0x4]          ; 004fcb9e
    FCOMP float ptr [ESP + 0x24]        ; 004fcba2
    FNSTSW AX                           ; 004fcba6
    SAHF                                ; 004fcba8
    JA 0x004fcc64                       ; 004fcba9
        ;   XREF to: 004fcc64 (CONDITIONAL_JUMP)  ; LAB_004fcc64
    MOV EBP,dword ptr [EDX + 0x6c]      ; 004fcbaf
    MOV EAX,dword ptr [EDX + 0x60]      ; 004fcbb2
    ADD EAX,EBP                         ; 004fcbb5
    DEC EAX                             ; 004fcbb7
    MOV dword ptr [ECX],EAX             ; 004fcbb8
    MOV EAX,dword ptr [EDX + 0x64]      ; 004fcbba
    MOV EDI,dword ptr [EDX + 0x28]      ; 004fcbbd
    DEC EAX                             ; 004fcbc0
    CMP EAX,EDI                         ; 004fcbc1
    JG 0x004fcc52                       ; 004fcbc3
        ;   XREF to: 004fcc52 (CONDITIONAL_JUMP)  ; LAB_004fcc52
    CMP dword ptr [EDX + 0x30],0x1      ; 004fcbc9
    JNZ 0x004fcc52                      ; 004fcbcd
        ;   XREF to: 004fcc52 (CONDITIONAL_JUMP)  ; LAB_004fcc52
    MOV EDI,dword ptr [EDX + 0x34]      ; 004fcbd3
    LEA EAX,[EDI*0x8 + 0x0]             ; 004fcbd6
    ADD EDI,EAX                         ; 004fcbdd
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004fcbdf
    SHL EDI,0x5                         ; 004fcbe3
    MOV EAX,dword ptr [EAX]             ; 004fcbe6
    FILD dword ptr [EDI + EAX*0x1 + 0x1c90] ; 004fcbe8
    FDIVR float ptr [EDX + 0x38]        ; 004fcbef
    FILD dword ptr [EDI + EAX*0x1 + 0x1c88] ; 004fcbf2
    FADDP                               ; 004fcbf9
    CALL crt_math.c_round_FUN_005a3120  ; 004fcbfb
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESI]               ; 004fcc00
    MOV EAX,dword ptr [EDX + 0x64]      ; 004fcc02
    MOV EDI,dword ptr [EDX + 0x68]      ; 004fcc05
    SUB EAX,EDI                         ; 004fcc08
    MOV dword ptr [ESP + 0x4],EAX       ; 004fcc0a
    FILD dword ptr [ESP + 0x4]          ; 004fcc0e
    FSUBR float ptr [ESP + 0x24]        ; 004fcc12
    FILD dword ptr [EDX + 0x68]         ; 004fcc16
    FDIVP                               ; 004fcc19
    FST float ptr [EBX]                 ; 004fcc1b
    FLD1                                ; 004fcc1d
    FCOMPP                              ; 004fcc1f
    FNSTSW AX                           ; 004fcc21
    SAHF                                ; 004fcc23
    JBE 0x004fcc40                      ; 004fcc24
        ;   XREF to: 004fcc40 (CONDITIONAL_JUMP)  ; LAB_004fcc40
    ADD ESP,0x8                         ; 004fcc26
        ;   Label: LAB_004fcc26
    POP EBP                             ; 004fcc29
    POP EDI                             ; 004fcc2a
    POP ESI                             ; 004fcc2b
    POP EBX                             ; 004fcc2c
    LEA EAX,[EAX]                       ; 004fcc2d
    RET                                 ; 004fcc30
    MOV EAX,dword ptr [EDX + 0x60]      ; 004fcc31
        ;   Label: LAB_004fcc31
    MOV dword ptr [ECX],EAX             ; 004fcc34
    MOV dword ptr [ESI],EAX             ; 004fcc36
    MOV dword ptr [EBX],0x0             ; 004fcc38
    JMP 0x004fcc26                      ; 004fcc3e
        ;   XREF to: 004fcc26 (UNCONDITIONAL_JUMP)  ; LAB_004fcc26
    MOV EAX,dword ptr [ESI]             ; 004fcc40
        ;   Label: LAB_004fcc40
    MOV dword ptr [ECX],EAX             ; 004fcc42
    MOV dword ptr [EBX],0x0             ; 004fcc44
    ADD ESP,0x8                         ; 004fcc4a
    POP EBP                             ; 004fcc4d
    POP EDI                             ; 004fcc4e
    POP ESI                             ; 004fcc4f
    POP EBX                             ; 004fcc50
    RET                                 ; 004fcc51
    MOV EAX,dword ptr [ECX]             ; 004fcc52
        ;   Label: LAB_004fcc52
    MOV dword ptr [ESI],EAX             ; 004fcc54
    MOV dword ptr [EBX],0x0             ; 004fcc56
    ADD ESP,0x8                         ; 004fcc5c
    POP EBP                             ; 004fcc5f
    POP EDI                             ; 004fcc60
    POP ESI                             ; 004fcc61
    POP EBX                             ; 004fcc62
    RET                                 ; 004fcc63
    FILD dword ptr [EDX + 0x68]         ; 004fcc64
        ;   Label: LAB_004fcc64
    FDIVR float ptr [ESP + 0x24]        ; 004fcc67
    FILD dword ptr [EDX + 0x60]         ; 004fcc6b
    FADDP                               ; 004fcc6e
    FLD ST0                             ; 004fcc70
    CALL crt_math.c_round_FUN_005a3120  ; 004fcc72
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ECX]               ; 004fcc77
    MOV EAX,dword ptr [ECX]             ; 004fcc79
    INC EAX                             ; 004fcc7b
    MOV dword ptr [ESI],EAX             ; 004fcc7c
    FILD dword ptr [ECX]                ; 004fcc7e
    FSUBP                               ; 004fcc80
    FSTP float ptr [EBX]                ; 004fcc82
    ADD ESP,0x8                         ; 004fcc84
    POP EBP                             ; 004fcc87
    POP EDI                             ; 004fcc88
    POP ESI                             ; 004fcc89
    POP EBX                             ; 004fcc8a
    RET                                 ; 004fcc8b

