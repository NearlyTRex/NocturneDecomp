; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setutil_cpp_C3DSCamera_import3DS_FUN_00585c90(C3DSCamera *this_ptr,_FILE *file_handle)
;
; Parameters:
; C3DSCamera *     Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined4       Stack[-0x240]:4  uStack_240
; char[255]        Stack[-0x23c]:255  local_23c
; char[256]        Stack[-0x13c]:256  acStack_13c
; float            Stack[-0x3c]:4  fStack_3c
; float            Stack[-0x38]:4  fStack_38
; float            Stack[-0x34]:4  fStack_34
; float            Stack[-0x30]:4  fStack_30
; float            Stack[-0x2c]:4  fStack_2c
; float            Stack[-0x28]:4  fStack_28
; C3DSCamera *     Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  fStack_1c
; uint             Stack[-0x18]:4  uStack_18
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_00649406
;   TerminatedCString s_f_f_f_00649410
;   TerminatedCString s_f_0064941a
;   TerminatedCString s_f_0064941e
;   TerminatedCString s_f_00649422
;   TerminatedCString s_Warning_Camera_s_has_unk_00649426
;   CKeys* g_CKeysPtr = 02dcd7d4
;   CKeys g_CKeysInstance
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   crt_math.c_atan2_FUN_006013b1
;   crt_math.c_round_FUN_005fe6b0
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_stdio.c_fgets_FUN_005fefd0
;   crt_stdio.c_fscanf_FUN_005fe7c0
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_keys.cpp_CKeys_getInputKey_FUN_00502460
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00585c90
        ;   Label: core_setutil.cpp_C3DSCamera_import3DS_FUN_00585c90
    PUSH ESI                            ; 00585c91
    PUSH EDI                            ; 00585c92
    PUSH EBP                            ; 00585c93
    MOV EBP,ESP                         ; 00585c94
    SUB ESP,0x22c                       ; 00585c96
    AND ESP,0xfffffff8                  ; 00585c9c
    MOV EBX,dword ptr [EBP + 0x18]      ; 00585c9f
    PUSH EBX                            ; 00585ca2
    MOV ESI,0xff                        ; 00585ca3
    MOV EAX,dword ptr [EBP + 0x14]      ; 00585ca8
    PUSH ESI                            ; 00585cab
    MOV dword ptr [ESP + 0x228],EAX     ; 00585cac
    LEA EAX,[ESP + 0xc]                 ; 00585cb3
    PUSH EAX                            ; 00585cb7
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00585cb8
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00585cbd
    LEA EDI,[ESP + 0x4]                 ; 00585cc0
    SUB ECX,ECX                         ; 00585cc4
    DEC ECX                             ; 00585cc6
    XOR EAX,EAX                         ; 00585cc7
    SCASB.REPNE ES:EDI                  ; 00585cc9
    NOT ECX                             ; 00585ccb
    DEC ECX                             ; 00585ccd
    TEST ECX,ECX                        ; 00585cce
    JLE 0x00585cd8                      ; 00585cd0
        ;   XREF to: 00585cd8 (CONDITIONAL_JUMP)  ; LAB_00585cd8
    XOR AH,AH                           ; 00585cd2
    MOV byte ptr [ESP + ECX*0x1 + 0x3],AH ; 00585cd4
    LEA EDI,[ESP + 0x4]                 ; 00585cd8
        ;   Label: LAB_00585cd8
    SUB ECX,ECX                         ; 00585cdc
    DEC ECX                             ; 00585cde
    XOR EAX,EAX                         ; 00585cdf
    SCASB.REPNE ES:EDI                  ; 00585ce1
    NOT ECX                             ; 00585ce3
    DEC ECX                             ; 00585ce5
    XOR DL,DL                           ; 00585ce6
    MOV EDI,dword ptr [ESP + 0x220]     ; 00585ce8
    MOV byte ptr [ESP + ESI*0x1 + 0x4],DL ; 00585cef
    LEA ESI,[ESP + 0x4]                 ; 00585cf3
    PUSH EDI                            ; 00585cf7
    MOV AL,byte ptr [ESI]               ; 00585cf8
        ;   Label: LAB_00585cf8
    MOV byte ptr [EDI],AL               ; 00585cfa
    CMP AL,0x0                          ; 00585cfc
    JZ 0x00585d10                       ; 00585cfe
        ;   XREF to: 00585d10 (CONDITIONAL_JUMP)  ; LAB_00585d10
    MOV AL,byte ptr [ESI + 0x1]         ; 00585d00
    ADD ESI,0x2                         ; 00585d03
    MOV byte ptr [EDI + 0x1],AL         ; 00585d06
    ADD EDI,0x2                         ; 00585d09
    CMP AL,0x0                          ; 00585d0c
    JNZ 0x00585cf8                      ; 00585d0e
        ;   XREF to: 00585cf8 (CONDITIONAL_JUMP)  ; LAB_00585cf8
    POP EDI                             ; 00585d10
        ;   Label: LAB_00585d10
    MOV EAX,dword ptr [EBP + 0x14]      ; 00585d11
    ADD EAX,0x108                       ; 00585d14
    PUSH EAX                            ; 00585d19
    MOV EAX,dword ptr [EBP + 0x14]      ; 00585d1a
    ADD EAX,0x104                       ; 00585d1d
    PUSH EAX                            ; 00585d22
    MOV EAX,dword ptr [EBP + 0x14]      ; 00585d23
    ADD EAX,0x100                       ; 00585d26
    PUSH EAX                            ; 00585d2b
    PUSH 0x649406                       ; 00585d2c | = "%f,%f,%f\n"
    PUSH EBX                            ; 00585d31
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00585d32
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 00585d37
    LEA EAX,[ESP + 0x218]               ; 00585d3a
    PUSH EAX                            ; 00585d41
    LEA EAX,[ESP + 0x218]               ; 00585d42
    PUSH EAX                            ; 00585d49
    LEA EAX,[ESP + 0x218]               ; 00585d4a
    PUSH EAX                            ; 00585d51
    PUSH 0x649410                       ; 00585d52 | = "%f,%f,%f\n"
    PUSH EBX                            ; 00585d57
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00585d58
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 00585d5d
    LEA EAX,[ESP + 0x224]               ; 00585d60
    PUSH EAX                            ; 00585d67
    PUSH 0x64941a                       ; 00585d68 | = "%f\n"
    PUSH EBX                            ; 00585d6d
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00585d6e
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00585d73
    MOV EAX,ESP                         ; 00585d76
    PUSH EAX                            ; 00585d78
    PUSH 0x64941e                       ; 00585d79 | = "%f\n"
    PUSH EBX                            ; 00585d7e
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00585d7f
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00585d84
    MOV EAX,dword ptr [EBP + 0x14]      ; 00585d87
    ADD EAX,0x144                       ; 00585d8a
    PUSH EAX                            ; 00585d8f
    PUSH 0x649422                       ; 00585d90 | = "%f\n"
    PUSH EBX                            ; 00585d95
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00585d96
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00585d9b
    FLD float ptr [ESP]                 ; 00585d9e
    CALL crt_math.c_round_FUN_005fe6b0  ; 00585da1
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x228]       ; 00585da6
    MOV EDX,dword ptr [ESP + 0x228]     ; 00585dad
    CMP EDX,0x2e                        ; 00585db4
    JNC 0x00585f50                      ; 00585db7
        ;   XREF to: 00585f50 (CONDITIONAL_JUMP)  ; LAB_00585f50
    CMP EDX,0x17                        ; 00585dbd
    JNC 0x00585f85                      ; 00585dc0
        ;   XREF to: 00585f85 (CONDITIONAL_JUMP)  ; LAB_00585f85
    CMP EDX,0xa                         ; 00585dc6
    JC 0x00585f97                       ; 00585dc9
        ;   XREF to: 00585f97 (CONDITIONAL_JUMP)  ; LAB_00585f97
    JBE 0x00585f3e                      ; 00585dcf
        ;   XREF to: 00585f3e (CONDITIONAL_JUMP)  ; LAB_00585f3e
    CMP EDX,0xf                         ; 00585dd5
    JNZ 0x00585f97                      ; 00585dd8
        ;   XREF to: 00585f97 (CONDITIONAL_JUMP)  ; LAB_00585f97
    MOV EAX,dword ptr [EBP + 0x14]      ; 00585dde
    MOV dword ptr [EAX + 0x144],0x43070000 ; 00585de1
    MOV EAX,dword ptr [EBP + 0x14]      ; 00585deb
        ;   Label: LAB_00585deb
    FLD float ptr [ESP + 0x210]         ; 00585dee
    FSUB float ptr [EAX + 0x100]        ; 00585df5
    FLD float ptr [ESP + 0x214]         ; 00585dfb
    FXCH                                ; 00585e02
    FSTP float ptr [ESP + 0x204]        ; 00585e04
    FSUB float ptr [EAX + 0x104]        ; 00585e0b
    FLD float ptr [ESP + 0x218]         ; 00585e11
    FXCH                                ; 00585e18
    FSTP float ptr [ESP + 0x208]        ; 00585e1a
    FSUB float ptr [EAX + 0x108]        ; 00585e21
    FST float ptr [ESP + 0x20c]         ; 00585e27
    FMUL float ptr [ESP + 0x20c]        ; 00585e2e
    FLD float ptr [ESP + 0x204]         ; 00585e35
    FMUL ST0                            ; 00585e3c
    FADDP                               ; 00585e3e
    FSQRT                               ; 00585e40
    MOV ECX,dword ptr [EBP + 0x14]      ; 00585e42
    MOV EAX,dword ptr [ESP + 0x224]     ; 00585e45
    MOV dword ptr [ECX + 0x114],EAX     ; 00585e4c
    FLD float ptr [ESP + 0x20c]         ; 00585e52
    FLD float ptr [ESP + 0x204]         ; 00585e59
    CALL crt_math.c_atan2_FUN_006013b1  ; 00585e60
        ;   XREF to: 006013b1 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_atan2_FUN_006013b1(float10 y, float10 x)
    FSTP float ptr [ECX + 0x110]        ; 00585e65
    FLD float ptr [ESP + 0x208]         ; 00585e6b
    FXCH                                ; 00585e72
    FPATAN                              ; 00585e74
    NOP                                 ; 00585e76
    LEA EAX,[ECX + 0x10c]               ; 00585e77
    PUSH EAX                            ; 00585e7d
    LEA EAX,[ECX + 0x118]               ; 00585e7e
    FCHS                                ; 00585e84
    PUSH EAX                            ; 00585e86
    FSTP float ptr [ECX + 0x10c]        ; 00585e87
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 00585e8d
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00585e92
    MOV ESP,EBP                         ; 00585e95
    POP EBP                             ; 00585e97
    POP EDI                             ; 00585e98
    POP ESI                             ; 00585e99
    POP EBX                             ; 00585e9a
    RET                                 ; 00585e9b
    MOV EAX,dword ptr [EBP + 0x14]      ; 00585e9c
        ;   Label: LAB_00585e9c
    MOV dword ptr [EAX + 0x144],0x41700000 ; 00585e9f
    JMP 0x00585deb                      ; 00585ea9
        ;   XREF to: 00585deb (UNCONDITIONAL_JUMP)  ; LAB_00585deb
    MOV EAX,dword ptr [EBP + 0x14]      ; 00585eae
        ;   Label: LAB_00585eae
    MOV dword ptr [EAX + 0x144],0x41a00000 ; 00585eb1
    JMP 0x00585deb                      ; 00585ebb
        ;   XREF to: 00585deb (UNCONDITIONAL_JUMP)  ; LAB_00585deb
    MOV EAX,dword ptr [EBP + 0x14]      ; 00585ec0
        ;   Label: LAB_00585ec0
    MOV dword ptr [EAX + 0x144],0x41c00000 ; 00585ec3
    JMP 0x00585deb                      ; 00585ecd
        ;   XREF to: 00585deb (UNCONDITIONAL_JUMP)  ; LAB_00585deb
    MOV EAX,dword ptr [EBP + 0x14]      ; 00585ed2
        ;   Label: LAB_00585ed2
    MOV dword ptr [EAX + 0x144],0x41e00000 ; 00585ed5
    JMP 0x00585deb                      ; 00585edf
        ;   XREF to: 00585deb (UNCONDITIONAL_JUMP)  ; LAB_00585deb
    MOV EAX,dword ptr [EBP + 0x14]      ; 00585ee4
        ;   Label: LAB_00585ee4
    MOV dword ptr [EAX + 0x144],0x420c0000 ; 00585ee7
    JMP 0x00585deb                      ; 00585ef1
        ;   XREF to: 00585deb (UNCONDITIONAL_JUMP)  ; LAB_00585deb
    MOV EAX,dword ptr [EBP + 0x14]      ; 00585ef6
        ;   Label: LAB_00585ef6
    MOV dword ptr [EAX + 0x144],0x4228a0c5 ; 00585ef9
    JMP 0x00585deb                      ; 00585f03
        ;   XREF to: 00585deb (UNCONDITIONAL_JUMP)  ; LAB_00585deb
    MOV EAX,dword ptr [EBP + 0x14]      ; 00585f08
        ;   Label: LAB_00585f08
    MOV dword ptr [EAX + 0x144],0x422dd2f2 ; 00585f0b
    JMP 0x00585deb                      ; 00585f15
        ;   XREF to: 00585deb (UNCONDITIONAL_JUMP)  ; LAB_00585deb
    MOV EAX,dword ptr [EBP + 0x14]      ; 00585f1a
        ;   Label: LAB_00585f1a
    MOV dword ptr [EAX + 0x144],0x42480000 ; 00585f1d
    JMP 0x00585deb                      ; 00585f27
        ;   XREF to: 00585deb (UNCONDITIONAL_JUMP)  ; LAB_00585deb
    MOV EAX,dword ptr [EBP + 0x14]      ; 00585f2c
        ;   Label: LAB_00585f2c
    MOV dword ptr [EAX + 0x144],0x42aa0000 ; 00585f2f
    JMP 0x00585deb                      ; 00585f39
        ;   XREF to: 00585deb (UNCONDITIONAL_JUMP)  ; LAB_00585deb
    MOV EAX,dword ptr [EBP + 0x14]      ; 00585f3e
        ;   Label: LAB_00585f3e
    MOV dword ptr [EAX + 0x144],0x43480000 ; 00585f41
    JMP 0x00585deb                      ; 00585f4b
        ;   XREF to: 00585deb (UNCONDITIONAL_JUMP)  ; LAB_00585deb
    JBE 0x00585ef6                      ; 00585f50
        ;   XREF to: 00585ef6 (CONDITIONAL_JUMP)  ; LAB_00585ef6
        ;   Label: LAB_00585f50
    CMP EDX,0x49                        ; 00585f52
    JNC 0x00585f69                      ; 00585f55
        ;   XREF to: 00585f69 (CONDITIONAL_JUMP)  ; LAB_00585f69
    CMP EDX,0x36                        ; 00585f57
    JC 0x00585f97                       ; 00585f5a
        ;   XREF to: 00585f97 (CONDITIONAL_JUMP)  ; LAB_00585f97
    JBE 0x00585ee4                      ; 00585f5c
        ;   XREF to: 00585ee4 (CONDITIONAL_JUMP)  ; LAB_00585ee4
    CMP EDX,0x41                        ; 00585f5e
    JZ 0x00585ed2                       ; 00585f61
        ;   XREF to: 00585ed2 (CONDITIONAL_JUMP)  ; LAB_00585ed2
    JMP 0x00585f97                      ; 00585f67
        ;   XREF to: 00585f97 (UNCONDITIONAL_JUMP)  ; LAB_00585f97
    JBE 0x00585ec0                      ; 00585f69
        ;   XREF to: 00585ec0 (CONDITIONAL_JUMP)  ; LAB_00585ec0
        ;   Label: LAB_00585f69
    CMP EDX,0x53                        ; 00585f6f
    JC 0x00585f97                       ; 00585f72
        ;   XREF to: 00585f97 (CONDITIONAL_JUMP)  ; LAB_00585f97
    JBE 0x00585eae                      ; 00585f74
        ;   XREF to: 00585eae (CONDITIONAL_JUMP)  ; LAB_00585eae
    CMP EDX,0x64                        ; 00585f7a
    JZ 0x00585e9c                       ; 00585f7d
        ;   XREF to: 00585e9c (CONDITIONAL_JUMP)  ; LAB_00585e9c
    JMP 0x00585f97                      ; 00585f83
        ;   XREF to: 00585f97 (UNCONDITIONAL_JUMP)  ; LAB_00585f97
    JBE 0x00585f2c                      ; 00585f85
        ;   XREF to: 00585f2c (CONDITIONAL_JUMP)  ; LAB_00585f2c
        ;   Label: LAB_00585f85
    CMP EDX,0x27                        ; 00585f87
    JC 0x00585f97                       ; 00585f8a
        ;   XREF to: 00585f97 (CONDITIONAL_JUMP)  ; LAB_00585f97
    JBE 0x00585f1a                      ; 00585f8c
        ;   XREF to: 00585f1a (CONDITIONAL_JUMP)  ; LAB_00585f1a
    CMP EDX,0x2d                        ; 00585f8e
    JZ 0x00585f08                       ; 00585f91
        ;   XREF to: 00585f08 (CONDITIONAL_JUMP)  ; LAB_00585f08
    FLD float ptr [ESP]                 ; 00585f97
        ;   Label: LAB_00585f97
    SUB ESP,0x8                         ; 00585f9a
    MOV EDX,dword ptr [EBP + 0x14]      ; 00585f9d
    FSTP double ptr [ESP]               ; 00585fa0
    PUSH EDX                            ; 00585fa3
    PUSH 0x649426                       ; 00585fa4 | = "Warning! Camera %s has unknown lens : %f"
    LEA EAX,[ESP + 0x114]               ; 00585fa9
    PUSH EAX                            ; 00585fb0
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00585fb1
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x14                        ; 00585fb6
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00585fb9
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    PUSH 0x0                            ; 00585fbe
    PUSH 0x0                            ; 00585fc0
    LEA EAX,[ESP + 0x10c]               ; 00585fc2
    PUSH EAX                            ; 00585fc9
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00585fca
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00585fcf
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00585fd2
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00585fd7
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV ECX,dword ptr [0x0067cf44]      ; 00585fdc | g_CKeysPtr
    PUSH ECX                            ; 00585fe2 | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_getInputKey_FUN_00502460 ; 00585fe3
        ;   XREF to: 00502460 (UNCONDITIONAL_CALL)  ; int engine_keys.cpp_CKeys_getInputKey_FUN_00502460(CKeys * this_ptr)
    ADD ESP,0x4                         ; 00585fe8
    JMP 0x00585deb                      ; 00585feb
        ;   XREF to: 00585deb (UNCONDITIONAL_JUMP)  ; LAB_00585deb

