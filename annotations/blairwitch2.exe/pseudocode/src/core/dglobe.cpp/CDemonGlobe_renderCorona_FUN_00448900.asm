; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_00448900(CDemonGlobe *this_ptr)
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
;   core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_00440e90 at 0044107e
;
; Referenced Globals:
;   undefined4 DAT_005cf012
;   undefined4 DAT_005f5020
;   undefined4 DAT_0060a0fc
;   undefined4 DAT_0060a100
;   undefined4 DAT_0060a104
;   undefined4 DAT_0060a108
;   undefined4 DAT_0060a10c
;   undefined4 DAT_0060a110
;   undefined4 DAT_0060a3e4
;   undefined4 DAT_0060a3e8
;   undefined4 DAT_0060a3ec
;   undefined4 DAT_0060a3f0
;   undefined4 DAT_0060a3f4
;   undefined4 DAT_0060a3f8
;   undefined4 DAT_0060a3fc
;   ... and 13 more
;
; Called Functions:
;   core_dcamera.cpp_initializeCoronaBuffers_FUN_0043f820
;   crt_math.c_round_FUN_005b7ff0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;   engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0046b750
;   engine_matrix.c_FUN_0046b5e0
;   engine_special.cpp_FUN_0055d723
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448900
        ;   Label: core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_00448900
    PUSH ESI                            ; 00448901
    PUSH EDI                            ; 00448902
    PUSH EBP                            ; 00448903
    SUB ESP,0x74                        ; 00448904
    MOV EBP,dword ptr [ESP + 0x88]      ; 00448907
    LEA EBX,[EBP + 0x24]                ; 0044890e
    PUSH EBX                            ; 00448911
    MOV EDX,dword ptr [0x0060b27c]      ; 00448912 | DAT_0060b27c
    PUSH EDX                            ; 00448918 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 00448919
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0044891e
    MOV ECX,dword ptr [0x0060b280]      ; 00448921 | DAT_0060b280
    PUSH ECX                            ; 00448927 | DAT_01ba5c50
    LEA ESI,[ESP + 0x38]                ; 00448928
    LEA EDI,[ESP + 0x2c]                ; 0044892c
    CALL engine_matrix.c_FUN_0046b5e0   ; 00448930
        ;   XREF to: 0046b5e0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_0046b5e0()
    LEA ESI,[ESP + 0x38]                ; 00448935
    ADD ESP,0x4                         ; 00448939
    LEA EAX,[ESP + 0x58]                ; 0044893c
    MOVSD ES:EDI,ESI                    ; 00448940
    MOVSD ES:EDI,ESI                    ; 00448941
    MOVSD ES:EDI,ESI                    ; 00448942
    LEA EDX,[ESP + 0x28]                ; 00448943
    FLD float ptr [ESP + 0x28]          ; 00448947
    FLD float ptr [ESP + 0x2c]          ; 0044894b
    FLD float ptr [ESP + 0x30]          ; 0044894f
    LEA EDI,[ESP + 0x58]                ; 00448953
    LEA ESI,[ESP + 0x64]                ; 00448957
    FXCH ST2                            ; 0044895b
    FSUB float ptr [EBX]                ; 0044895d
    FXCH                                ; 0044895f
    FSUB float ptr [EBX + 0x4]          ; 00448961
    FXCH ST2                            ; 00448964
    FSUB float ptr [EBX + 0x8]          ; 00448966
    FXCH                                ; 00448969
    FSTP float ptr [ESP + 0x64]         ; 0044896b
    FXCH                                ; 0044896f
    FSTP float ptr [ESP + 0x68]         ; 00448971
    FSTP float ptr [ESP + 0x6c]         ; 00448975
    MOVSD ES:EDI,ESI                    ; 00448979
    MOVSD ES:EDI,ESI                    ; 0044897a
    MOVSD ES:EDI,ESI                    ; 0044897b
    CMP EDX,EAX                         ; 0044897c
    JNZ 0x00448ac7                      ; 0044897e
        ;   XREF to: 00448ac7 (CONDITIONAL_JUMP)  ; LAB_00448ac7
    FLD float ptr [ESP + 0x2c]          ; 00448984
        ;   Label: LAB_00448984
    FMUL ST0                            ; 00448988
    FLD float ptr [ESP + 0x28]          ; 0044898a
    FMUL ST0                            ; 0044898e
    FADDP                               ; 00448990
    FLD float ptr [ESP + 0x30]          ; 00448992
    FMUL ST0                            ; 00448996
    FADDP                               ; 00448998
    FCOMP float ptr [EBP + 0x18]        ; 0044899a
    FNSTSW AX                           ; 0044899d
    SAHF                                ; 0044899f
    JC 0x00448ae4                       ; 004489a0
        ;   XREF to: 00448ae4 (CONDITIONAL_JUMP)  ; LAB_00448ae4
    FLD float ptr [EBP + 0x30]          ; 004489a6
    FMUL double ptr [0x005cf012]        ; 004489a9 | DAT_005cf012
    XOR EDI,EDI                         ; 004489af
    XOR ESI,ESI                         ; 004489b1
    FSTP float ptr [ESP + 0x70]         ; 004489b3
    FILD dword ptr [ESI + 0x60a0fc]     ; 004489b7 | DAT_0060a0fc | DAT_0060a108
        ;   Label: LAB_004489b7
    FMUL float ptr [ESP + 0x70]         ; 004489bd
    FILD dword ptr [ESI + 0x60a100]     ; 004489c1 | DAT_0060a100 | DAT_0060a10c
    FMUL float ptr [ESP + 0x70]         ; 004489c7
    FILD dword ptr [ESI + 0x60a104]     ; 004489cb | DAT_0060a104 | DAT_0060a110
    FMUL float ptr [ESP + 0x70]         ; 004489d1
    LEA EBX,[ESP + 0x4c]                ; 004489d5
    LEA EAX,[ESP + 0x40]                ; 004489d9
    MOV EDX,dword ptr [0x0060b27c]      ; 004489dd | DAT_0060b27c
    FXCH ST2                            ; 004489e3
    FSTP float ptr [ESP + 0x40]         ; 004489e5
    FSTP float ptr [ESP + 0x44]         ; 004489e9
    FSTP float ptr [ESP + 0x48]         ; 004489ed
    FLD float ptr [EAX]                 ; 004489f1
    FMUL float ptr [0x005f5020]         ; 004489f3 | DAT_005f5020
    FISTP dword ptr [EBX]               ; 004489f9
    FLD float ptr [EAX + 0x4]           ; 004489fb
    FMUL float ptr [0x005f5020]         ; 004489fe | DAT_005f5020
    FISTP dword ptr [EBX + 0x4]         ; 00448a04
    FLD float ptr [EAX + 0x8]           ; 00448a07
    FMUL float ptr [0x005f5020]         ; 00448a0a | DAT_005f5020
    FISTP dword ptr [EBX + 0x8]         ; 00448a10
    LEA EAX,[ESP + 0x4c]                ; 00448a13
    PUSH EAX                            ; 00448a17
    MOV EAX,dword ptr [EDX]             ; 00448a18 | DAT_01ba5c50
    ADD EAX,EDI                         ; 00448a1a
    PUSH EAX                            ; 00448a1c
    ADD ESI,0xc                         ; 00448a1d
    CALL engine_special.cpp_FUN_0055d723 ; 00448a20
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD EDI,0x30                        ; 00448a25
    ADD ESP,0x8                         ; 00448a28
    CMP ESI,0x2e8                       ; 00448a2b
    JNZ 0x004489b7                      ; 00448a31
        ;   XREF to: 004489b7 (CONDITIONAL_JUMP)  ; LAB_004489b7
    XOR EBX,EBX                         ; 00448a33
    MOV EAX,dword ptr [EBX + 0x60a3e4]  ; 00448a35 | DAT_0060a3e4 | DAT_0060a408
        ;   Label: LAB_00448a35
    MOV dword ptr [ESP + 0x4],EAX       ; 00448a3b
    MOV EAX,dword ptr [EBX + 0x60a3e8]  ; 00448a3f | DAT_0060a3e8 | DAT_0060a40c
    MOV dword ptr [ESP + 0x8],EAX       ; 00448a45
    MOV EAX,dword ptr [EBX + 0x60a3ec]  ; 00448a49 | DAT_0060a3ec | DAT_0060a410
    MOV dword ptr [ESP + 0xc],EAX       ; 00448a4f
    MOV EAX,dword ptr [EBX + 0x60a3f0]  ; 00448a53 | DAT_0060a3f0 | DAT_0060a414
    FILD dword ptr [EBX + 0x60a3f4]     ; 00448a59 | DAT_0060a3f4 | DAT_0060a418
    MOV dword ptr [ESP + 0x10],EAX      ; 00448a5f
    MOV EAX,dword ptr [EBX + 0x60a3f8]  ; 00448a63 | DAT_0060a3f8 | DAT_0060a41c
    FMUL float ptr [EBP + 0x30]         ; 00448a69
    MOV dword ptr [ESP + 0x18],EAX      ; 00448a6c
    MOV EAX,dword ptr [EBX + 0x60a3fc]  ; 00448a70 | DAT_0060a3fc | DAT_0060a420
    MOV dword ptr [ESP + 0x1c],EAX      ; 00448a76
    MOV EAX,dword ptr [EBX + 0x60a400]  ; 00448a7a | DAT_0060a400 | DAT_0060a424
    PUSH 0x43f860                       ; 00448a80
    MOV dword ptr [ESP + 0x24],EAX      ; 00448a85
    MOV EAX,dword ptr [EBX + 0x60a404]  ; 00448a89 | DAT_0060a404
    MOV ESI,dword ptr [0x0060b27c]      ; 00448a8f | DAT_0060b27c
    MOV dword ptr [ESP + 0x28],EAX      ; 00448a95
    LEA EAX,[ESP + 0x4]                 ; 00448a99
    ADD EBX,0x24                        ; 00448a9d
    PUSH EAX                            ; 00448aa0
    CALL crt_math.c_round_FUN_005b7ff0  ; 00448aa1
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    PUSH ESI                            ; 00448aa6 | DAT_01ba5c50
    FISTP dword ptr [ESP + 0x20]        ; 00448aa7
    CALL engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0046b750 ; 00448aab
        ;   XREF to: 0046b750 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0046b750(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, CustomScanlineFunc * scanline_renderer)
    ADD ESP,0xc                         ; 00448ab0
    CMP EBX,0xbd0                       ; 00448ab3
    JNZ 0x00448a35                      ; 00448ab9
        ;   XREF to: 00448a35 (CONDITIONAL_JUMP)  ; LAB_00448a35
    ADD ESP,0x74                        ; 00448abf
    POP EBP                             ; 00448ac2
    POP EDI                             ; 00448ac3
    POP ESI                             ; 00448ac4
    POP EBX                             ; 00448ac5
    RET                                 ; 00448ac6
    MOV EAX,dword ptr [ESP + 0x58]      ; 00448ac7
        ;   Label: LAB_00448ac7
    MOV dword ptr [ESP + 0x28],EAX      ; 00448acb
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00448acf
    MOV dword ptr [ESP + 0x2c],EAX      ; 00448ad3
    MOV EAX,dword ptr [ESP + 0x60]      ; 00448ad7
    MOV dword ptr [ESP + 0x30],EAX      ; 00448adb
    JMP 0x00448984                      ; 00448adf
        ;   XREF to: 00448984 (UNCONDITIONAL_JUMP)  ; LAB_00448984
    CALL core_dcamera.cpp_initializeCoronaBuffers_FUN_0043f820 ; 00448ae4
        ;   XREF to: 0043f820 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_initializeCoronaBuffers_FUN_0043f820()
        ;   Label: LAB_00448ae4
    ADD ESP,0x74                        ; 00448ae9
    POP EBP                             ; 00448aec
    POP EDI                             ; 00448aed
    POP ESI                             ; 00448aee
    POP EBX                             ; 00448aef
    RET                                 ; 00448af0

