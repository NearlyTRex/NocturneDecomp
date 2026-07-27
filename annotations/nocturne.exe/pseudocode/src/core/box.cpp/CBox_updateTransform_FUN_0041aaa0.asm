; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_box_cpp_CBox_updateTransform_FUN_0041aaa0(float *param_1,float *param_2,float *param_3,float param_4)
;
; Local Variables:
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_box.cpp_CBox_setupCorners_FUN_0041a6e0 at 0041a905
;   core_box.cpp_FUN_0041a910 at 0041aa60
;
; Referenced Globals:
;   double DOUBLE_0057968d = 0.03125
;   double DOUBLE_00579695 = 0.0833333333333333
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041aaa0
        ;   Label: core_box.cpp_CBox_updateTransform_FUN_0041aaa0
    PUSH ESI                            ; 0041aaa1
    PUSH EDI                            ; 0041aaa2
    PUSH EBP                            ; 0041aaa3
    SUB ESP,0x1c                        ; 0041aaa4
    MOV ESI,dword ptr [ESP + 0x30]      ; 0041aaa7
    MOV EAX,dword ptr [ESP + 0x34]      ; 0041aaab
    MOV EBX,dword ptr [ESP + 0x38]      ; 0041aaaf
    CMP ESI,EAX                         ; 0041aab3
    JNZ 0x0041ac78                      ; 0041aab5
        ;   XREF to: 0041ac78 (CONDITIONAL_JUMP)  ; LAB_0041ac78
    LEA EAX,[ESI + 0xc]                 ; 0041aabb
        ;   Label: LAB_0041aabb
    CMP EAX,EBX                         ; 0041aabe
    JZ 0x0041aad2                       ; 0041aac0
        ;   XREF to: 0041aad2 (CONDITIONAL_JUMP)  ; LAB_0041aad2
    MOV EDX,dword ptr [EBX]             ; 0041aac2
    MOV dword ptr [EAX],EDX             ; 0041aac4
    MOV EDX,dword ptr [EBX + 0x4]       ; 0041aac6
    MOV dword ptr [EAX + 0x4],EDX       ; 0041aac9
    MOV EDX,dword ptr [EBX + 0x8]       ; 0041aacc
    MOV dword ptr [EAX + 0x8],EDX       ; 0041aacf
    LEA EAX,[ESI + 0xc]                 ; 0041aad2
        ;   Label: LAB_0041aad2
    PUSH EAX                            ; 0041aad5
    LEA EBP,[ESI + 0x18]                ; 0041aad6
    PUSH EBP                            ; 0041aad9
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 0041aada
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0()
    FLD float ptr [ESI + 0xa8]          ; 0041aadf
    FMUL ST0                            ; 0041aae5
    FLD float ptr [ESI + 0xa4]          ; 0041aae7
    FMUL ST0                            ; 0041aaed
    FLD float ptr [ESI + 0xa4]          ; 0041aaef
    ADD ESP,0x8                         ; 0041aaf5
    FMUL float ptr [ESI + 0xa4]         ; 0041aaf8
    FLD float ptr [ESP + 0x3c]          ; 0041aafe
    FMUL double ptr [0x0057968d]        ; 0041ab02 | DOUBLE_0057968d
    FLD float ptr [ESI + 0xac]          ; 0041ab08
    FMUL ST0                            ; 0041ab0e
    FLD float ptr [ESI + 0xac]          ; 0041ab10
    FMUL ST0                            ; 0041ab16
    FLD float ptr [ESI + 0xa8]          ; 0041ab18
    FMUL ST0                            ; 0041ab1e
    FXCH ST2                            ; 0041ab20
    FADDP ST6,ST0                       ; 0041ab22
    FXCH ST2                            ; 0041ab24
    FST float ptr [ESI + 0x94]          ; 0041ab26
    FLD double ptr [0x00579695]         ; 0041ab2c | DOUBLE_00579695
    FXCH                                ; 0041ab32
    FMUL ST1                            ; 0041ab34
    FXCH ST3                            ; 0041ab36
    FADDP ST5,ST0                       ; 0041ab38
    FXCH                                ; 0041ab3a
    FADDP ST3,ST0                       ; 0041ab3c
    FLD float ptr [ESI + 0x94]          ; 0041ab3e
    FMUL ST1                            ; 0041ab44
    FLD float ptr [ESI + 0x94]          ; 0041ab46
    FMULP ST2                           ; 0041ab4c
    FXCH ST2                            ; 0041ab4e
    FMULP ST5                           ; 0041ab50
    FXCH                                ; 0041ab52
    FMULP ST3                           ; 0041ab54
    FMULP                               ; 0041ab56
    LEA EAX,[ESI + 0x64]                ; 0041ab58
    FXCH ST2                            ; 0041ab5b
    FSTP float ptr [ESI + 0x98]         ; 0041ab5d
    FSTP float ptr [ESI + 0x9c]         ; 0041ab63
    FSTP float ptr [ESI + 0xa0]         ; 0041ab69
    MOV dword ptr [EAX + 0x8],0x0       ; 0041ab6f
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041ab76
    MOV dword ptr [EAX + 0x4],EDX       ; 0041ab79
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041ab7c
    MOV dword ptr [EAX],EDX             ; 0041ab7f
    LEA EAX,[ESI + 0x88]                ; 0041ab81
    MOV dword ptr [EAX + 0x8],0x0       ; 0041ab87
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041ab8e
    MOV dword ptr [EAX + 0x4],EDX       ; 0041ab91
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041ab94
    MOV dword ptr [EAX],EDX             ; 0041ab97
    LEA EAX,[ESI + 0x4c]                ; 0041ab99
    MOV dword ptr [EAX + 0x8],0x0       ; 0041ab9c
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041aba3
    MOV dword ptr [EAX + 0x4],EDX       ; 0041aba6
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041aba9
    MOV dword ptr [EAX],EDX             ; 0041abac
    LEA EAX,[ESI + 0x70]                ; 0041abae
    MOV dword ptr [EAX + 0x8],0x0       ; 0041abb1
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041abb8
    MOV dword ptr [EAX + 0x4],EDX       ; 0041abbb
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041abbe
    MOV dword ptr [EAX],EDX             ; 0041abc1
    LEA EAX,[ESI + 0x58]                ; 0041abc3
    MOV dword ptr [EAX + 0x8],0x0       ; 0041abc6
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041abcd
    MOV dword ptr [EAX + 0x4],EDX       ; 0041abd0
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041abd3
    MOV dword ptr [EAX],EDX             ; 0041abd6
    LEA EAX,[ESI + 0x7c]                ; 0041abd8
    MOV dword ptr [EAX + 0x8],0x0       ; 0041abdb
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041abe2
    MOV dword ptr [EAX + 0x4],EDX       ; 0041abe5
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041abe8
    MOV dword ptr [EAX],EDX             ; 0041abeb
    LEA EAX,[ESI + 0x40]                ; 0041abed
    MOV dword ptr [EAX + 0x8],0x0       ; 0041abf0
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041abf7
    MOV dword ptr [EAX + 0x4],EDX       ; 0041abfa
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041abfd
    MOV dword ptr [EAX],EDX             ; 0041ac00
    MOV EDX,dword ptr [ESI + 0xb0]      ; 0041ac02
    XOR EDI,EDI                         ; 0041ac08
    TEST EDX,EDX                        ; 0041ac0a
    JLE 0x0041ac66                      ; 0041ac0c
        ;   XREF to: 0041ac66 (CONDITIONAL_JUMP)  ; LAB_0041ac66
    LEA EAX,[ESI + 0xb4]                ; 0041ac0e
    LEA EBX,[ESI + 0xc0]                ; 0041ac14
    MOV dword ptr [ESP + 0x18],EAX      ; 0041ac1a
    IMUL EAX,EDI,0x34                   ; 0041ac1e
        ;   Label: LAB_0041ac1e
    ADD EAX,dword ptr [ESP + 0x18]      ; 0041ac21
    PUSH EAX                            ; 0041ac25
    LEA EAX,[ESP + 0x4]                 ; 0041ac26
    PUSH EAX                            ; 0041ac2a
    PUSH EBP                            ; 0041ac2b
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 0041ac2c
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40()
    FLD float ptr [ESI]                 ; 0041ac31
    FADD float ptr [EAX]                ; 0041ac33
    ADD ESP,0xc                         ; 0041ac35
    FSTP float ptr [ESP + 0xc]          ; 0041ac38
    FLD float ptr [ESI + 0x4]           ; 0041ac3c
    FADD float ptr [EAX + 0x4]          ; 0041ac3f
    FSTP float ptr [ESP + 0x10]         ; 0041ac42
    FLD float ptr [ESI + 0x8]           ; 0041ac46
    FADD float ptr [EAX + 0x8]          ; 0041ac49
    LEA EAX,[ESP + 0xc]                 ; 0041ac4c
    FSTP float ptr [ESP + 0x14]         ; 0041ac50
    CMP EBX,EAX                         ; 0041ac54
    JNZ 0x0041ac8d                      ; 0041ac56
        ;   XREF to: 0041ac8d (CONDITIONAL_JUMP)  ; LAB_0041ac8d
    INC EDI                             ; 0041ac58
        ;   Label: LAB_0041ac58
    MOV ECX,dword ptr [ESI + 0xb0]      ; 0041ac59
    ADD EBX,0x34                        ; 0041ac5f
    CMP EDI,ECX                         ; 0041ac62
    JL 0x0041ac1e                       ; 0041ac64
        ;   XREF to: 0041ac1e (CONDITIONAL_JUMP)  ; LAB_0041ac1e
    MOV dword ptr [ESI + 0x254],0x1     ; 0041ac66
        ;   Label: LAB_0041ac66
    ADD ESP,0x1c                        ; 0041ac70
    POP EBP                             ; 0041ac73
    POP EDI                             ; 0041ac74
    POP ESI                             ; 0041ac75
    POP EBX                             ; 0041ac76
    RET                                 ; 0041ac77
    MOV EDX,dword ptr [EAX]             ; 0041ac78
        ;   Label: LAB_0041ac78
    MOV dword ptr [ESI],EDX             ; 0041ac7a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041ac7c
    MOV dword ptr [ESI + 0x4],EDX       ; 0041ac7f
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041ac82
    MOV dword ptr [ESI + 0x8],EDX       ; 0041ac85
    JMP 0x0041aabb                      ; 0041ac88
        ;   XREF to: 0041aabb (UNCONDITIONAL_JUMP)  ; LAB_0041aabb
    MOV EAX,dword ptr [ESP + 0xc]       ; 0041ac8d
        ;   Label: LAB_0041ac8d
    MOV dword ptr [EBX],EAX             ; 0041ac91
    MOV EAX,dword ptr [ESP + 0x10]      ; 0041ac93
    MOV dword ptr [EBX + 0x4],EAX       ; 0041ac97
    MOV EAX,dword ptr [ESP + 0x14]      ; 0041ac9a
    MOV dword ptr [EBX + 0x8],EAX       ; 0041ac9e
    JMP 0x0041ac58                      ; 0041aca1
        ;   XREF to: 0041ac58 (UNCONDITIONAL_JUMP)  ; LAB_0041ac58

