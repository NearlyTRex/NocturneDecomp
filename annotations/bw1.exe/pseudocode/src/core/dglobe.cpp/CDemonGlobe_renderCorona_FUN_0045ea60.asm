; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_0045ea60(CDemonGlobe *this_ptr)
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
;   core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_00452550 at 0045273e
;
; Referenced Globals:
;   undefined4 DAT_005d890b
;   undefined4 DAT_005fe9d0
;   undefined4 DAT_006113a0
;   undefined4 DAT_006113a4
;   undefined4 DAT_006113a8
;   undefined4 DAT_006113ac
;   undefined4 DAT_006113b0
;   undefined4 DAT_006113b4
;   undefined4 DAT_00611688
;   undefined4 DAT_0061168c
;   undefined4 DAT_00611690
;   undefined4 DAT_00611694
;   undefined4 DAT_00611698
;   undefined4 DAT_0061169c
;   undefined4 DAT_006116a0
;   ... and 13 more
;
; Called Functions:
;   core_dcamera.cpp_initializeCoronaBuffers_FUN_00450ee0
;   crt_math.c_round_FUN_005c03a0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_00483c50
;   engine_matrix.c_FUN_00483ae0
;   engine_special.cpp_FUN_00580173
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045ea60
        ;   Label: core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_0045ea60
    PUSH ESI                            ; 0045ea61
    PUSH EDI                            ; 0045ea62
    PUSH EBP                            ; 0045ea63
    SUB ESP,0x74                        ; 0045ea64
    MOV EBP,dword ptr [ESP + 0x88]      ; 0045ea67
    LEA EBX,[EBP + 0x24]                ; 0045ea6e
    PUSH EBX                            ; 0045ea71
    MOV EDX,dword ptr [0x0061255c]      ; 0045ea72 | DAT_0061255c
    PUSH EDX                            ; 0045ea78 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 0045ea79
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0045ea7e
    MOV ECX,dword ptr [0x00612560]      ; 0045ea81 | DAT_00612560
    PUSH ECX                            ; 0045ea87 | DAT_01bc120c
    LEA ESI,[ESP + 0x38]                ; 0045ea88
    LEA EDI,[ESP + 0x2c]                ; 0045ea8c
    CALL engine_matrix.c_FUN_00483ae0   ; 0045ea90
        ;   XREF to: 00483ae0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_00483ae0()
    LEA ESI,[ESP + 0x38]                ; 0045ea95
    ADD ESP,0x4                         ; 0045ea99
    LEA EAX,[ESP + 0x58]                ; 0045ea9c
    MOVSD ES:EDI,ESI                    ; 0045eaa0
    MOVSD ES:EDI,ESI                    ; 0045eaa1
    MOVSD ES:EDI,ESI                    ; 0045eaa2
    LEA EDX,[ESP + 0x28]                ; 0045eaa3
    FLD float ptr [ESP + 0x28]          ; 0045eaa7
    FLD float ptr [ESP + 0x2c]          ; 0045eaab
    FLD float ptr [ESP + 0x30]          ; 0045eaaf
    LEA EDI,[ESP + 0x58]                ; 0045eab3
    LEA ESI,[ESP + 0x64]                ; 0045eab7
    FXCH ST2                            ; 0045eabb
    FSUB float ptr [EBX]                ; 0045eabd
    FXCH                                ; 0045eabf
    FSUB float ptr [EBX + 0x4]          ; 0045eac1
    FXCH ST2                            ; 0045eac4
    FSUB float ptr [EBX + 0x8]          ; 0045eac6
    FXCH                                ; 0045eac9
    FSTP float ptr [ESP + 0x64]         ; 0045eacb
    FXCH                                ; 0045eacf
    FSTP float ptr [ESP + 0x68]         ; 0045ead1
    FSTP float ptr [ESP + 0x6c]         ; 0045ead5
    MOVSD ES:EDI,ESI                    ; 0045ead9
    MOVSD ES:EDI,ESI                    ; 0045eada
    MOVSD ES:EDI,ESI                    ; 0045eadb
    CMP EDX,EAX                         ; 0045eadc
    JNZ 0x0045ec27                      ; 0045eade
        ;   XREF to: 0045ec27 (CONDITIONAL_JUMP)  ; LAB_0045ec27
    FLD float ptr [ESP + 0x2c]          ; 0045eae4
        ;   Label: LAB_0045eae4
    FMUL ST0                            ; 0045eae8
    FLD float ptr [ESP + 0x28]          ; 0045eaea
    FMUL ST0                            ; 0045eaee
    FADDP                               ; 0045eaf0
    FLD float ptr [ESP + 0x30]          ; 0045eaf2
    FMUL ST0                            ; 0045eaf6
    FADDP                               ; 0045eaf8
    FCOMP float ptr [EBP + 0x18]        ; 0045eafa
    FNSTSW AX                           ; 0045eafd
    SAHF                                ; 0045eaff
    JC 0x0045ec44                       ; 0045eb00
        ;   XREF to: 0045ec44 (CONDITIONAL_JUMP)  ; LAB_0045ec44
    FLD float ptr [EBP + 0x30]          ; 0045eb06
    FMUL double ptr [0x005d890b]        ; 0045eb09 | DAT_005d890b
    XOR EDI,EDI                         ; 0045eb0f
    XOR ESI,ESI                         ; 0045eb11
    FSTP float ptr [ESP + 0x70]         ; 0045eb13
    FILD dword ptr [ESI + 0x6113a0]     ; 0045eb17 | DAT_006113a0 | DAT_006113ac
        ;   Label: LAB_0045eb17
    FMUL float ptr [ESP + 0x70]         ; 0045eb1d
    FILD dword ptr [ESI + 0x6113a4]     ; 0045eb21 | DAT_006113a4 | DAT_006113b0
    FMUL float ptr [ESP + 0x70]         ; 0045eb27
    FILD dword ptr [ESI + 0x6113a8]     ; 0045eb2b | DAT_006113a8 | DAT_006113b4
    FMUL float ptr [ESP + 0x70]         ; 0045eb31
    LEA EBX,[ESP + 0x4c]                ; 0045eb35
    LEA EAX,[ESP + 0x40]                ; 0045eb39
    MOV EDX,dword ptr [0x0061255c]      ; 0045eb3d | DAT_0061255c
    FXCH ST2                            ; 0045eb43
    FSTP float ptr [ESP + 0x40]         ; 0045eb45
    FSTP float ptr [ESP + 0x44]         ; 0045eb49
    FSTP float ptr [ESP + 0x48]         ; 0045eb4d
    FLD float ptr [EAX]                 ; 0045eb51
    FMUL float ptr [0x005fe9d0]         ; 0045eb53 | DAT_005fe9d0
    FISTP dword ptr [EBX]               ; 0045eb59
    FLD float ptr [EAX + 0x4]           ; 0045eb5b
    FMUL float ptr [0x005fe9d0]         ; 0045eb5e | DAT_005fe9d0
    FISTP dword ptr [EBX + 0x4]         ; 0045eb64
    FLD float ptr [EAX + 0x8]           ; 0045eb67
    FMUL float ptr [0x005fe9d0]         ; 0045eb6a | DAT_005fe9d0
    FISTP dword ptr [EBX + 0x8]         ; 0045eb70
    LEA EAX,[ESP + 0x4c]                ; 0045eb73
    PUSH EAX                            ; 0045eb77
    MOV EAX,dword ptr [EDX]             ; 0045eb78 | DAT_01bc120c
    ADD EAX,EDI                         ; 0045eb7a
    PUSH EAX                            ; 0045eb7c
    ADD ESI,0xc                         ; 0045eb7d
    CALL engine_special.cpp_FUN_00580173 ; 0045eb80
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD EDI,0x30                        ; 0045eb85
    ADD ESP,0x8                         ; 0045eb88
    CMP ESI,0x2e8                       ; 0045eb8b
    JNZ 0x0045eb17                      ; 0045eb91
        ;   XREF to: 0045eb17 (CONDITIONAL_JUMP)  ; LAB_0045eb17
    XOR EBX,EBX                         ; 0045eb93
    MOV EAX,dword ptr [EBX + 0x611688]  ; 0045eb95 | DAT_00611688 | DAT_006116ac
        ;   Label: LAB_0045eb95
    MOV dword ptr [ESP + 0x4],EAX       ; 0045eb9b
    MOV EAX,dword ptr [EBX + 0x61168c]  ; 0045eb9f | DAT_0061168c | DAT_006116b0
    MOV dword ptr [ESP + 0x8],EAX       ; 0045eba5
    MOV EAX,dword ptr [EBX + 0x611690]  ; 0045eba9 | DAT_00611690 | DAT_006116b4
    MOV dword ptr [ESP + 0xc],EAX       ; 0045ebaf
    MOV EAX,dword ptr [EBX + 0x611694]  ; 0045ebb3 | DAT_00611694 | DAT_006116b8
    FILD dword ptr [EBX + 0x611698]     ; 0045ebb9 | DAT_00611698 | DAT_006116bc
    MOV dword ptr [ESP + 0x10],EAX      ; 0045ebbf
    MOV EAX,dword ptr [EBX + 0x61169c]  ; 0045ebc3 | DAT_0061169c | DAT_006116c0
    FMUL float ptr [EBP + 0x30]         ; 0045ebc9
    MOV dword ptr [ESP + 0x18],EAX      ; 0045ebcc
    MOV EAX,dword ptr [EBX + 0x6116a0]  ; 0045ebd0 | DAT_006116a0 | DAT_006116c4
    MOV dword ptr [ESP + 0x1c],EAX      ; 0045ebd6
    MOV EAX,dword ptr [EBX + 0x6116a4]  ; 0045ebda | DAT_006116a4 | DAT_006116c8
    PUSH 0x450f20                       ; 0045ebe0
    MOV dword ptr [ESP + 0x24],EAX      ; 0045ebe5
    MOV EAX,dword ptr [EBX + 0x6116a8]  ; 0045ebe9 | DAT_006116a8
    MOV ESI,dword ptr [0x0061255c]      ; 0045ebef | DAT_0061255c
    MOV dword ptr [ESP + 0x28],EAX      ; 0045ebf5
    LEA EAX,[ESP + 0x4]                 ; 0045ebf9
    ADD EBX,0x24                        ; 0045ebfd
    PUSH EAX                            ; 0045ec00
    CALL crt_math.c_round_FUN_005c03a0  ; 0045ec01
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    PUSH ESI                            ; 0045ec06 | DAT_01bc120c
    FISTP dword ptr [ESP + 0x20]        ; 0045ec07
    CALL engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_00483c50 ; 0045ec0b
        ;   XREF to: 00483c50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_00483c50(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, CustomScanlineFunc * scanline_renderer)
    ADD ESP,0xc                         ; 0045ec10
    CMP EBX,0xbd0                       ; 0045ec13
    JNZ 0x0045eb95                      ; 0045ec19
        ;   XREF to: 0045eb95 (CONDITIONAL_JUMP)  ; LAB_0045eb95
    ADD ESP,0x74                        ; 0045ec1f
    POP EBP                             ; 0045ec22
    POP EDI                             ; 0045ec23
    POP ESI                             ; 0045ec24
    POP EBX                             ; 0045ec25
    RET                                 ; 0045ec26
    MOV EAX,dword ptr [ESP + 0x58]      ; 0045ec27
        ;   Label: LAB_0045ec27
    MOV dword ptr [ESP + 0x28],EAX      ; 0045ec2b
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0045ec2f
    MOV dword ptr [ESP + 0x2c],EAX      ; 0045ec33
    MOV EAX,dword ptr [ESP + 0x60]      ; 0045ec37
    MOV dword ptr [ESP + 0x30],EAX      ; 0045ec3b
    JMP 0x0045eae4                      ; 0045ec3f
        ;   XREF to: 0045eae4 (UNCONDITIONAL_JUMP)  ; LAB_0045eae4
    CALL core_dcamera.cpp_initializeCoronaBuffers_FUN_00450ee0 ; 0045ec44
        ;   XREF to: 00450ee0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_initializeCoronaBuffers_FUN_00450ee0()
        ;   Label: LAB_0045ec44
    ADD ESP,0x74                        ; 0045ec49
    POP EBP                             ; 0045ec4c
    POP EDI                             ; 0045ec4d
    POP ESI                             ; 0045ec4e
    POP EBX                             ; 0045ec4f
    RET                                 ; 0045ec50

