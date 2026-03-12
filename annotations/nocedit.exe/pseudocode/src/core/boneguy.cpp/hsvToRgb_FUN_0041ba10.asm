; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CColor3f * __cdecl core_boneguy_cpp_hsvToRgb_FUN_0041ba10(CColor3f *out_rgb,CColor3f *in_hsv)
;
; Parameters:
; CColor3f *       Stack[0x4]:4   out_rgb
; CColor3f *       Stack[0x8]:4   in_hsv
; Local Variables:
; undefined8       Stack[-0x58]:8  local_58
; undefined8       Stack[-0x50]:8  local_50
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined8       Stack[-0x40]:8  local_40
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; float            Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   void* switchdataD_0041b9f4 = 0041ba74
;   double DAT_00615f6d = 0.00392156862745098
;   double DAT_00615f75 = 0.0235294117647059
;
; Called Functions:
;   crt_math.c_floor_FUN_005feb90
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041ba10
        ;   Label: core_boneguy.cpp_hsvToRgb_FUN_0041ba10
    PUSH EBP                            ; 0041ba11
    MOV EBP,ESP                         ; 0041ba12
    SUB ESP,0x44                        ; 0041ba14
    AND ESP,0xfffffff8                  ; 0041ba17
    MOV EBX,dword ptr [EBP + 0xc]       ; 0041ba1a
    MOV EAX,dword ptr [EBP + 0x10]      ; 0041ba1d
    MOV EDX,dword ptr [EAX]             ; 0041ba20
    MOV dword ptr [ESP + 0xc],EDX       ; 0041ba22
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041ba26
    FLDZ                                ; 0041ba29
    MOV dword ptr [ESP + 0x8],EDX       ; 0041ba2b
    MOV EAX,dword ptr [EAX + 0x8]       ; 0041ba2f
    FLD float ptr [ESP + 0x8]           ; 0041ba32
    MOV dword ptr [ESP + 0x10],EAX      ; 0041ba36
    FSTP double ptr [ESP]               ; 0041ba3a
    FCOMP double ptr [ESP]              ; 0041ba3d
    FNSTSW AX                           ; 0041ba40
    SAHF                                ; 0041ba42
    JC 0x0041bafe                       ; 0041ba43
        ;   XREF to: 0041bafe (CONDITIONAL_JUMP)  ; LAB_0041bafe
    MOV EAX,dword ptr [ESP + 0x10]      ; 0041ba49
    MOV dword ptr [ESP + 0x40],EAX      ; 0041ba4d
    MOV dword ptr [ESP + 0x38],EAX      ; 0041ba51
    MOV dword ptr [ESP + 0x34],EAX      ; 0041ba55
        ;   Label: LAB_0041ba55
    MOV EAX,dword ptr [ESP + 0x38]      ; 0041ba59
        ;   Label: default
    MOV dword ptr [EBX],EAX             ; 0041ba5d
    MOV EAX,dword ptr [ESP + 0x40]      ; 0041ba5f
    MOV dword ptr [EBX + 0x4],EAX       ; 0041ba63
    MOV EAX,dword ptr [ESP + 0x34]      ; 0041ba66
    MOV dword ptr [EBX + 0x8],EAX       ; 0041ba6a
    MOV EAX,EBX                         ; 0041ba6d
    MOV ESP,EBP                         ; 0041ba6f
    POP EBP                             ; 0041ba71
    POP EBX                             ; 0041ba72
    RET                                 ; 0041ba73
    MOV EAX,dword ptr [ESP + 0x10]      ; 0041ba74
        ;   Label: caseD_0
    MOV dword ptr [ESP + 0x38],EAX      ; 0041ba78
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0041ba7c
    MOV dword ptr [ESP + 0x40],EAX      ; 0041ba80
    MOV EAX,dword ptr [ESP + 0x30]      ; 0041ba84
    JMP 0x0041ba55                      ; 0041ba88
        ;   XREF to: 0041ba55 (UNCONDITIONAL_JUMP)  ; LAB_0041ba55
    MOV EAX,dword ptr [ESP + 0x28]      ; 0041ba8a
        ;   Label: caseD_1
    MOV dword ptr [ESP + 0x38],EAX      ; 0041ba8e
    MOV EAX,dword ptr [ESP + 0x10]      ; 0041ba92
    MOV dword ptr [ESP + 0x40],EAX      ; 0041ba96
    MOV EAX,dword ptr [ESP + 0x30]      ; 0041ba9a
    JMP 0x0041ba55                      ; 0041ba9e
        ;   XREF to: 0041ba55 (UNCONDITIONAL_JUMP)  ; LAB_0041ba55
    MOV EAX,dword ptr [ESP + 0x30]      ; 0041baa0
        ;   Label: caseD_2
    MOV dword ptr [ESP + 0x38],EAX      ; 0041baa4
    MOV EAX,dword ptr [ESP + 0x10]      ; 0041baa8
    MOV dword ptr [ESP + 0x40],EAX      ; 0041baac
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0041bab0
    JMP 0x0041ba55                      ; 0041bab4
        ;   XREF to: 0041ba55 (UNCONDITIONAL_JUMP)  ; LAB_0041ba55
    MOV EAX,dword ptr [ESP + 0x30]      ; 0041bab6
        ;   Label: caseD_3
    MOV dword ptr [ESP + 0x38],EAX      ; 0041baba
    MOV EAX,dword ptr [ESP + 0x28]      ; 0041babe
    MOV dword ptr [ESP + 0x40],EAX      ; 0041bac2
    MOV EAX,dword ptr [ESP + 0x10]      ; 0041bac6
    JMP 0x0041ba55                      ; 0041baca
        ;   XREF to: 0041ba55 (UNCONDITIONAL_JUMP)  ; LAB_0041ba55
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0041bacc
        ;   Label: caseD_4
    MOV dword ptr [ESP + 0x38],EAX      ; 0041bad0
    MOV EAX,dword ptr [ESP + 0x30]      ; 0041bad4
    MOV dword ptr [ESP + 0x40],EAX      ; 0041bad8
    MOV EAX,dword ptr [ESP + 0x10]      ; 0041badc
    JMP 0x0041ba55                      ; 0041bae0
        ;   XREF to: 0041ba55 (UNCONDITIONAL_JUMP)  ; LAB_0041ba55
    MOV EAX,dword ptr [ESP + 0x10]      ; 0041bae5
        ;   Label: caseD_5
    MOV dword ptr [ESP + 0x38],EAX      ; 0041bae9
    MOV EAX,dword ptr [ESP + 0x30]      ; 0041baed
    MOV dword ptr [ESP + 0x40],EAX      ; 0041baf1
    MOV EAX,dword ptr [ESP + 0x28]      ; 0041baf5
    JMP 0x0041ba55                      ; 0041baf9
        ;   XREF to: 0041ba55 (UNCONDITIONAL_JUMP)  ; LAB_0041ba55
    FLD double ptr [ESP]                ; 0041bafe
        ;   Label: LAB_0041bafe
    FMUL double ptr [0x00615f6d]        ; 0041bb01 | DAT_00615f6d
    FLD float ptr [ESP + 0xc]           ; 0041bb07
    FLD ST0                             ; 0041bb0b
    FMUL double ptr [0x00615f75]        ; 0041bb0d | DAT_00615f75
    FXCH ST2                            ; 0041bb13
    FSTP float ptr [ESP + 0x20]         ; 0041bb15
    FXCH                                ; 0041bb19
    FSTP ST1                            ; 0041bb1b
    FST float ptr [ESP + 0xc]           ; 0041bb1d
    SUB ESP,0x8                         ; 0041bb21
    FSTP double ptr [ESP]               ; 0041bb24
    CALL crt_math.c_floor_FUN_005feb90  ; 0041bb27
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x1c],EAX      ; 0041bb2c
    MOV dword ptr [ESP + 0x20],EDX      ; 0041bb30
    FLD double ptr [ESP + 0x1c]         ; 0041bb34
    ADD ESP,0x8                         ; 0041bb38
    CALL crt_math.c_round_FUN_005fe6b0  ; 0041bb3b
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x1c]        ; 0041bb40
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0041bb44
    MOV dword ptr [ESP + 0x3c],EAX      ; 0041bb48
    LEA EDX,[EAX + 0x258]               ; 0041bb4c
    MOV ECX,0x6                         ; 0041bb52
    MOV EAX,EDX                         ; 0041bb57
    SAR EDX,0x1f                        ; 0041bb59
    IDIV ECX                            ; 0041bb5c
    FLD float ptr [ESP + 0x20]          ; 0041bb5e
    FLD1                                ; 0041bb62
    FSUBRP                              ; 0041bb64
    FLD float ptr [ESP + 0x10]          ; 0041bb66
    FXCH                                ; 0041bb6a
    FMUL ST1                            ; 0041bb6c
    FLD1                                ; 0041bb6e
    FLD float ptr [ESP + 0x20]          ; 0041bb70
    FILD dword ptr [ESP + 0x3c]         ; 0041bb74
    FSUBR float ptr [ESP + 0xc]         ; 0041bb78
    FXCH ST2                            ; 0041bb7c
    FSUB ST0,ST2                        ; 0041bb7e
    FXCH                                ; 0041bb80
    FMULP ST2                           ; 0041bb82
    FMUL float ptr [ESP + 0x20]         ; 0041bb84
    FLD1                                ; 0041bb88
    FLD1                                ; 0041bb8a
    FXCH                                ; 0041bb8c
    FSUBRP ST3,ST0                      ; 0041bb8e
    FSUBRP                              ; 0041bb90
    FXCH                                ; 0041bb92
    FMUL ST3                            ; 0041bb94
    FXCH                                ; 0041bb96
    FMULP ST3                           ; 0041bb98
    FXCH                                ; 0041bb9a
    FSTP float ptr [ESP + 0x30]         ; 0041bb9c
    FSTP float ptr [ESP + 0x28]         ; 0041bba0
    FSTP float ptr [ESP + 0x2c]         ; 0041bba4
    CMP EDX,0x5                         ; 0041bba8
    JA 0x0041ba59                       ; 0041bbab
        ;   XREF to: 0041ba59 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x41b9f4]  ; 0041bbb1 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD

