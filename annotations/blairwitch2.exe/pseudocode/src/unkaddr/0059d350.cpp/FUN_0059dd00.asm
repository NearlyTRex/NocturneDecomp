; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkaddr_0059d350_cpp_FUN_0059dd00(int *param_1,int *param_2)
;
; Local Variables:
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   unkafter_special.cpp_FUN_0059e110 at 0059e2fa
;
; Referenced Globals:
;   undefined4 DAT_005ef84f
;
; Called Functions:
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
;   crt_math.c_asin_FUN_005b98f6
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059dd00
        ;   Label: unkaddr_0059d350.cpp_FUN_0059dd00
    PUSH ESI                            ; 0059dd01
    PUSH EDI                            ; 0059dd02
    PUSH EBP                            ; 0059dd03
    MOV EBP,ESP                         ; 0059dd04
    SUB ESP,0x5c                        ; 0059dd06
    AND ESP,0xfffffff8                  ; 0059dd09
    MOV ECX,dword ptr [EBP + 0x14]      ; 0059dd0c
    MOV EBX,dword ptr [EBP + 0x18]      ; 0059dd0f
    MOV EDX,dword ptr [EBX]             ; 0059dd12
    TEST EDX,EDX                        ; 0059dd14
    JZ 0x0059de9c                       ; 0059dd16
        ;   XREF to: 0059de9c (CONDITIONAL_JUMP)  ; LAB_0059de9c
    FLD float ptr [EDX + 0x24]          ; 0059dd1c
    FLD float ptr [EDX + 0x28]          ; 0059dd1f
    FLD float ptr [EDX + 0x20]          ; 0059dd22
    LEA EDI,[ESP + 0x24]                ; 0059dd25
    MOV EAX,dword ptr [ECX]             ; 0059dd29
    LEA ESI,[ESP + 0x30]                ; 0059dd2b
    LEA EDX,[ESP + 0x24]                ; 0059dd2f
    FSUB float ptr [EAX + 0x20]         ; 0059dd33
    FXCH ST2                            ; 0059dd36
    FSUB float ptr [EAX + 0x24]         ; 0059dd38
    FXCH                                ; 0059dd3b
    FSUB float ptr [EAX + 0x28]         ; 0059dd3d
    FXCH ST2                            ; 0059dd40
    FSTP float ptr [ESP + 0x30]         ; 0059dd42
    FSTP float ptr [ESP + 0x34]         ; 0059dd46
    FSTP float ptr [ESP + 0x38]         ; 0059dd4a
    LEA EAX,[ESP + 0x18]                ; 0059dd4e
    MOVSD ES:EDI,ESI                    ; 0059dd52
    MOVSD ES:EDI,ESI                    ; 0059dd53
    MOVSD ES:EDI,ESI                    ; 0059dd54
    CMP EAX,EDX                         ; 0059dd55
    JNZ 0x0059dea3                      ; 0059dd57
        ;   XREF to: 0059dea3 (CONDITIONAL_JUMP)  ; LAB_0059dea3
    FLD float ptr [ESP + 0x18]          ; 0059dd5d
        ;   Label: LAB_0059dd5d
    FMUL ST0                            ; 0059dd61
    FLD float ptr [ESP + 0x20]          ; 0059dd63
    FMUL ST0                            ; 0059dd67
    FADDP                               ; 0059dd69
    FSQRT                               ; 0059dd6b
    XOR ESI,ESI                         ; 0059dd6d
    FLDZ                                ; 0059dd6f
    MOV dword ptr [ESP + 0x1c],ESI      ; 0059dd71
    FXCH                                ; 0059dd75
    FSTP float ptr [ESP + 0x58]         ; 0059dd77
    FCOMP float ptr [ESP + 0x58]        ; 0059dd7b
    FNSTSW AX                           ; 0059dd7f
    SAHF                                ; 0059dd81
    JNC 0x0059dec0                      ; 0059dd82
        ;   XREF to: 0059dec0 (CONDITIONAL_JUMP)  ; LAB_0059dec0
    FLD1                                ; 0059dd88
    FLD float ptr [ESP + 0x18]          ; 0059dd8a
    FXCH                                ; 0059dd8e
    FDIV float ptr [ESP + 0x58]         ; 0059dd90
    FXCH                                ; 0059dd94
    FMUL ST1                            ; 0059dd96
    FLDZ                                ; 0059dd98
    FMUL ST2                            ; 0059dd9a
    FLD float ptr [ESP + 0x20]          ; 0059dd9c
    FMULP ST3                           ; 0059dda0
    FXCH                                ; 0059dda2
    FSTP float ptr [ESP + 0x18]         ; 0059dda4
    FSTP float ptr [ESP + 0x1c]         ; 0059dda8
    FSTP float ptr [ESP + 0x20]         ; 0059ddac
    LEA EAX,[EBX + 0x4]                 ; 0059ddb0
        ;   Label: LAB_0059ddb0
    FLD float ptr [ESP + 0x18]          ; 0059ddb3
    FMUL float ptr [EAX]                ; 0059ddb7
    FLD float ptr [ESP + 0x1c]          ; 0059ddb9
    FXCH                                ; 0059ddbd
    FSTP float ptr [ESP + 0x18]         ; 0059ddbf
    FMUL float ptr [EAX]                ; 0059ddc3
    FLD float ptr [ESP + 0x20]          ; 0059ddc5
    FXCH                                ; 0059ddc9
    FSTP float ptr [ESP + 0x1c]         ; 0059ddcb
    FMUL float ptr [EAX]                ; 0059ddcf
    LEA EDX,[EBX + 0x8]                 ; 0059ddd1
    LEA EAX,[ESP + 0x18]                ; 0059ddd4
    FSTP float ptr [ESP + 0x20]         ; 0059ddd8
    CMP EDX,EAX                         ; 0059dddc
    JZ 0x0059ddf4                       ; 0059ddde
        ;   XREF to: 0059ddf4 (CONDITIONAL_JUMP)  ; LAB_0059ddf4
    MOV EAX,dword ptr [ESP + 0x18]      ; 0059dde0
    MOV dword ptr [EDX],EAX             ; 0059dde4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0059dde6
    MOV dword ptr [EDX + 0x4],EAX       ; 0059ddea
    MOV EAX,dword ptr [ESP + 0x20]      ; 0059dded
    MOV dword ptr [EDX + 0x8],EAX       ; 0059ddf1
    LEA EDI,[ESP + 0x3c]                ; 0059ddf4
        ;   Label: LAB_0059ddf4
    MOV EDX,dword ptr [ECX]             ; 0059ddf8
    LEA ESI,[ESP + 0xc]                 ; 0059ddfa
    LEA EAX,[EBX + 0x8]                 ; 0059ddfe
    FLD float ptr [EDX + 0x24]          ; 0059de01
    FLD float ptr [EDX + 0x28]          ; 0059de04
    FLD float ptr [EDX + 0x20]          ; 0059de07
    LEA EDX,[EBX + 0x14]                ; 0059de0a
    FADD float ptr [EAX]                ; 0059de0d
    FXCH ST2                            ; 0059de0f
    FADD float ptr [EAX + 0x4]          ; 0059de11
    FXCH                                ; 0059de14
    FADD float ptr [EAX + 0x8]          ; 0059de16
    FXCH ST2                            ; 0059de19
    FSTP float ptr [ESP + 0xc]          ; 0059de1b
    FSTP float ptr [ESP + 0x10]         ; 0059de1f
    FSTP float ptr [ESP + 0x14]         ; 0059de23
    LEA EAX,[ESP + 0x3c]                ; 0059de27
    MOVSD ES:EDI,ESI                    ; 0059de2b
    MOVSD ES:EDI,ESI                    ; 0059de2c
    MOVSD ES:EDI,ESI                    ; 0059de2d
    CMP EDX,EAX                         ; 0059de2e
    JZ 0x0059de46                       ; 0059de30
        ;   XREF to: 0059de46 (CONDITIONAL_JUMP)  ; LAB_0059de46
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0059de32
    MOV dword ptr [EDX],EAX             ; 0059de36
    MOV EAX,dword ptr [ESP + 0x40]      ; 0059de38
    MOV dword ptr [EDX + 0x4],EAX       ; 0059de3c
    MOV EAX,dword ptr [ESP + 0x44]      ; 0059de3f
    MOV dword ptr [EDX + 0x8],EAX       ; 0059de43
    LEA EAX,[ESP + 0x18]                ; 0059de46
        ;   Label: LAB_0059de46
    PUSH EAX                            ; 0059de4a
    LEA ESI,[ESP + 0x4]                 ; 0059de4b
    LEA EDI,[ESP + 0x4c]                ; 0059de4f
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 0059de53
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[ESP + 0x4]                 ; 0059de58
    ADD ESP,0x4                         ; 0059de5c
    MOVSD ES:EDI,ESI                    ; 0059de5f
    MOVSD ES:EDI,ESI                    ; 0059de60
    MOVSD ES:EDI,ESI                    ; 0059de61
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0059de62
    MOV dword ptr [EBX + 0x20],EAX      ; 0059de66
    MOV EAX,dword ptr [EBX]             ; 0059de69
    FLD float ptr [EAX + 0x3434]        ; 0059de6b
    LEA EAX,[EBX + 0x8]                 ; 0059de71
    FSTP float ptr [EBX + 0x28]         ; 0059de74
    FLD float ptr [EAX + 0x4]           ; 0059de77
    FMUL ST0                            ; 0059de7a
    FLD float ptr [EAX]                 ; 0059de7c
    FMUL ST0                            ; 0059de7e
    FADDP                               ; 0059de80
    FLD float ptr [EAX + 0x8]           ; 0059de82
    FMUL ST0                            ; 0059de85
    FADDP                               ; 0059de87
    FSQRT                               ; 0059de89
    FDIVR float ptr [EBX + 0x28]        ; 0059de8b
    CALL crt_math.c_asin_FUN_005b98f6   ; 0059de8e
        ;   XREF to: 005b98f6 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_asin_FUN_005b98f6()
    FMUL double ptr [0x005ef84f]        ; 0059de93 | DAT_005ef84f
    FSTP float ptr [EBX + 0x24]         ; 0059de99
    MOV ESP,EBP                         ; 0059de9c
        ;   Label: LAB_0059de9c
    POP EBP                             ; 0059de9e
    POP EDI                             ; 0059de9f
    POP ESI                             ; 0059dea0
    POP EBX                             ; 0059dea1
    RET                                 ; 0059dea2
    MOV EAX,dword ptr [ESP + 0x24]      ; 0059dea3
        ;   Label: LAB_0059dea3
    MOV dword ptr [ESP + 0x18],EAX      ; 0059dea7
    MOV EAX,dword ptr [ESP + 0x28]      ; 0059deab
    MOV dword ptr [ESP + 0x1c],EAX      ; 0059deaf
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0059deb3
    MOV dword ptr [ESP + 0x20],EAX      ; 0059deb7
    JMP 0x0059dd5d                      ; 0059debb
        ;   XREF to: 0059dd5d (UNCONDITIONAL_JUMP)  ; LAB_0059dd5d
    MOV dword ptr [ESP + 0x18],ESI      ; 0059dec0
        ;   Label: LAB_0059dec0
    MOV dword ptr [ESP + 0x20],ESI      ; 0059dec4
    JMP 0x0059ddb0                      ; 0059dec8
        ;   XREF to: 0059ddb0 (UNCONDITIONAL_JUMP)  ; LAB_0059ddb0

