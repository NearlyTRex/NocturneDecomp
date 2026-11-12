; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_0045abd0(CDemonGlobe *this_ptr)
;
; Parameters:
; CDemonGlobe *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x84]:1  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined        Stack[-0x50]:1  local_50
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_0044e690 at 0044e87e
;
; Referenced Globals:
;   undefined4 DAT_005bafe9
;   undefined4 DAT_005de380
;   undefined4 DAT_005f1954
;   undefined4 DAT_005f1958
;   undefined4 DAT_005f195c
;   undefined4 DAT_005f1960
;   undefined4 DAT_005f1964
;   undefined4 DAT_005f1968
;   undefined4 DAT_005f1c3c
;   undefined4 DAT_005f1c40
;   undefined4 DAT_005f1c44
;   undefined4 DAT_005f1c48
;   undefined4 DAT_005f1c4c
;   undefined4 DAT_005f1c50
;   undefined4 DAT_005f1c54
;   ... and 13 more
;
; Called Functions:
;   core_dcamera.cpp_initializeCoronaBuffers_FUN_0044d020
;   crt_math.c_round_FUN_005a3120
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0046d330
;   engine_drender.cpp_FUN_0046d1c0
;   engine_special.cpp_FUN_005632a3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045abd0
        ;   Label: core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_0045abd0
    PUSH ESI                            ; 0045abd1
    PUSH EDI                            ; 0045abd2
    PUSH EBP                            ; 0045abd3
    SUB ESP,0x74                        ; 0045abd4
    MOV EBP,dword ptr [ESP + 0x88]      ; 0045abd7
    LEA EBX,[EBP + 0x24]                ; 0045abde
    PUSH EBX                            ; 0045abe1
    MOV EDX,dword ptr [0x005f2af8]      ; 0045abe2 | DAT_005f2af8
    PUSH EDX                            ; 0045abe8 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 0045abe9
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0045abee
    MOV ECX,dword ptr [0x005f2afc]      ; 0045abf1 | DAT_005f2afc
    PUSH ECX                            ; 0045abf7 | DAT_01bdd7e4
    LEA ESI,[ESP + 0x38]                ; 0045abf8
    LEA EDI,[ESP + 0x2c]                ; 0045abfc
    CALL engine_drender.cpp_FUN_0046d1c0 ; 0045ac00
        ;   XREF to: 0046d1c0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_0046d1c0()
    LEA ESI,[ESP + 0x38]                ; 0045ac05
    ADD ESP,0x4                         ; 0045ac09
    LEA EAX,[ESP + 0x58]                ; 0045ac0c
    MOVSD ES:EDI,ESI                    ; 0045ac10
    MOVSD ES:EDI,ESI                    ; 0045ac11
    MOVSD ES:EDI,ESI                    ; 0045ac12
    LEA EDX,[ESP + 0x28]                ; 0045ac13
    FLD float ptr [ESP + 0x28]          ; 0045ac17
    FLD float ptr [ESP + 0x2c]          ; 0045ac1b
    FLD float ptr [ESP + 0x30]          ; 0045ac1f
    LEA EDI,[ESP + 0x58]                ; 0045ac23
    LEA ESI,[ESP + 0x64]                ; 0045ac27
    FXCH ST2                            ; 0045ac2b
    FSUB float ptr [EBX]                ; 0045ac2d
    FXCH                                ; 0045ac2f
    FSUB float ptr [EBX + 0x4]          ; 0045ac31
    FXCH ST2                            ; 0045ac34
    FSUB float ptr [EBX + 0x8]          ; 0045ac36
    FXCH                                ; 0045ac39
    FSTP float ptr [ESP + 0x64]         ; 0045ac3b
    FXCH                                ; 0045ac3f
    FSTP float ptr [ESP + 0x68]         ; 0045ac41
    FSTP float ptr [ESP + 0x6c]         ; 0045ac45
    MOVSD ES:EDI,ESI                    ; 0045ac49
    MOVSD ES:EDI,ESI                    ; 0045ac4a
    MOVSD ES:EDI,ESI                    ; 0045ac4b
    CMP EDX,EAX                         ; 0045ac4c
    JNZ 0x0045ad97                      ; 0045ac4e
        ;   XREF to: 0045ad97 (CONDITIONAL_JUMP)  ; LAB_0045ad97
    FLD float ptr [ESP + 0x2c]          ; 0045ac54
        ;   Label: LAB_0045ac54
    FMUL ST0                            ; 0045ac58
    FLD float ptr [ESP + 0x28]          ; 0045ac5a
    FMUL ST0                            ; 0045ac5e
    FADDP                               ; 0045ac60
    FLD float ptr [ESP + 0x30]          ; 0045ac62
    FMUL ST0                            ; 0045ac66
    FADDP                               ; 0045ac68
    FCOMP float ptr [EBP + 0x18]        ; 0045ac6a
    FNSTSW AX                           ; 0045ac6d
    SAHF                                ; 0045ac6f
    JC 0x0045adb4                       ; 0045ac70
        ;   XREF to: 0045adb4 (CONDITIONAL_JUMP)  ; LAB_0045adb4
    FLD float ptr [EBP + 0x30]          ; 0045ac76
    FMUL double ptr [0x005bafe9]        ; 0045ac79 | DAT_005bafe9
    XOR EDI,EDI                         ; 0045ac7f
    XOR ESI,ESI                         ; 0045ac81
    FSTP float ptr [ESP + 0x70]         ; 0045ac83
    FILD dword ptr [ESI + 0x5f1954]     ; 0045ac87 | DAT_005f1954 | DAT_005f1960
        ;   Label: LAB_0045ac87
    FMUL float ptr [ESP + 0x70]         ; 0045ac8d
    FILD dword ptr [ESI + 0x5f1958]     ; 0045ac91 | DAT_005f1958 | DAT_005f1964
    FMUL float ptr [ESP + 0x70]         ; 0045ac97
    FILD dword ptr [ESI + 0x5f195c]     ; 0045ac9b | DAT_005f195c | DAT_005f1968
    FMUL float ptr [ESP + 0x70]         ; 0045aca1
    LEA EBX,[ESP + 0x4c]                ; 0045aca5
    LEA EAX,[ESP + 0x40]                ; 0045aca9
    MOV EDX,dword ptr [0x005f2af8]      ; 0045acad | DAT_005f2af8
    FXCH ST2                            ; 0045acb3
    FSTP float ptr [ESP + 0x40]         ; 0045acb5
    FSTP float ptr [ESP + 0x44]         ; 0045acb9
    FSTP float ptr [ESP + 0x48]         ; 0045acbd
    FLD float ptr [EAX]                 ; 0045acc1
    FMUL float ptr [0x005de380]         ; 0045acc3 | DAT_005de380
    FISTP dword ptr [EBX]               ; 0045acc9
    FLD float ptr [EAX + 0x4]           ; 0045accb
    FMUL float ptr [0x005de380]         ; 0045acce | DAT_005de380
    FISTP dword ptr [EBX + 0x4]         ; 0045acd4
    FLD float ptr [EAX + 0x8]           ; 0045acd7
    FMUL float ptr [0x005de380]         ; 0045acda | DAT_005de380
    FISTP dword ptr [EBX + 0x8]         ; 0045ace0
    LEA EAX,[ESP + 0x4c]                ; 0045ace3
    PUSH EAX                            ; 0045ace7
    MOV EAX,dword ptr [EDX]             ; 0045ace8 | DAT_01bdd7e4
    ADD EAX,EDI                         ; 0045acea
    PUSH EAX                            ; 0045acec
    ADD ESI,0xc                         ; 0045aced
    CALL engine_special.cpp_FUN_005632a3 ; 0045acf0
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD EDI,0x30                        ; 0045acf5
    ADD ESP,0x8                         ; 0045acf8
    CMP ESI,0x2e8                       ; 0045acfb
    JNZ 0x0045ac87                      ; 0045ad01
        ;   XREF to: 0045ac87 (CONDITIONAL_JUMP)  ; LAB_0045ac87
    XOR EBX,EBX                         ; 0045ad03
    MOV EAX,dword ptr [EBX + 0x5f1c3c]  ; 0045ad05 | DAT_005f1c3c | DAT_005f1c60
        ;   Label: LAB_0045ad05
    MOV dword ptr [ESP + 0x4],EAX       ; 0045ad0b
    MOV EAX,dword ptr [EBX + 0x5f1c40]  ; 0045ad0f | DAT_005f1c40 | DAT_005f1c64
    MOV dword ptr [ESP + 0x8],EAX       ; 0045ad15
    MOV EAX,dword ptr [EBX + 0x5f1c44]  ; 0045ad19 | DAT_005f1c44 | DAT_005f1c68
    MOV dword ptr [ESP + 0xc],EAX       ; 0045ad1f
    MOV EAX,dword ptr [EBX + 0x5f1c48]  ; 0045ad23 | DAT_005f1c48 | DAT_005f1c6c
    FILD dword ptr [EBX + 0x5f1c4c]     ; 0045ad29 | DAT_005f1c4c | DAT_005f1c70
    MOV dword ptr [ESP + 0x10],EAX      ; 0045ad2f
    MOV EAX,dword ptr [EBX + 0x5f1c50]  ; 0045ad33 | DAT_005f1c50 | DAT_005f1c74
    FMUL float ptr [EBP + 0x30]         ; 0045ad39
    MOV dword ptr [ESP + 0x18],EAX      ; 0045ad3c
    MOV EAX,dword ptr [EBX + 0x5f1c54]  ; 0045ad40 | DAT_005f1c54 | DAT_005f1c78
    MOV dword ptr [ESP + 0x1c],EAX      ; 0045ad46
    MOV EAX,dword ptr [EBX + 0x5f1c58]  ; 0045ad4a | DAT_005f1c58 | DAT_005f1c7c
    PUSH 0x44d060                       ; 0045ad50
    MOV dword ptr [ESP + 0x24],EAX      ; 0045ad55
    MOV EAX,dword ptr [EBX + 0x5f1c5c]  ; 0045ad59 | DAT_005f1c5c
    MOV ESI,dword ptr [0x005f2af8]      ; 0045ad5f | DAT_005f2af8
    MOV dword ptr [ESP + 0x28],EAX      ; 0045ad65
    LEA EAX,[ESP + 0x4]                 ; 0045ad69
    ADD EBX,0x24                        ; 0045ad6d
    PUSH EAX                            ; 0045ad70
    CALL crt_math.c_round_FUN_005a3120  ; 0045ad71
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    PUSH ESI                            ; 0045ad76 | DAT_01bdd7e4
    FISTP dword ptr [ESP + 0x20]        ; 0045ad77
    CALL engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0046d330 ; 0045ad7b
        ;   XREF to: 0046d330 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0046d330(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, CustomScanlineFunc * scanline_renderer)
    ADD ESP,0xc                         ; 0045ad80
    CMP EBX,0xbd0                       ; 0045ad83
    JNZ 0x0045ad05                      ; 0045ad89
        ;   XREF to: 0045ad05 (CONDITIONAL_JUMP)  ; LAB_0045ad05
    ADD ESP,0x74                        ; 0045ad8f
    POP EBP                             ; 0045ad92
    POP EDI                             ; 0045ad93
    POP ESI                             ; 0045ad94
    POP EBX                             ; 0045ad95
    RET                                 ; 0045ad96
    MOV EAX,dword ptr [ESP + 0x58]      ; 0045ad97
        ;   Label: LAB_0045ad97
    MOV dword ptr [ESP + 0x28],EAX      ; 0045ad9b
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0045ad9f
    MOV dword ptr [ESP + 0x2c],EAX      ; 0045ada3
    MOV EAX,dword ptr [ESP + 0x60]      ; 0045ada7
    MOV dword ptr [ESP + 0x30],EAX      ; 0045adab
    JMP 0x0045ac54                      ; 0045adaf
        ;   XREF to: 0045ac54 (UNCONDITIONAL_JUMP)  ; LAB_0045ac54
    CALL core_dcamera.cpp_initializeCoronaBuffers_FUN_0044d020 ; 0045adb4
        ;   XREF to: 0044d020 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_initializeCoronaBuffers_FUN_0044d020()
        ;   Label: LAB_0045adb4
    ADD ESP,0x74                        ; 0045adb9
    POP EBP                             ; 0045adbc
    POP EDI                             ; 0045adbd
    POP ESI                             ; 0045adbe
    POP EBX                             ; 0045adbf
    RET                                 ; 0045adc0

