; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_demnfolk_cpp_CDemnfolk_getTargetPoints_FUN_0045c9f0(CDemnfolk *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CDemnfolk *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
;
; Referenced Globals:
;   undefined1* switchdataD_0045c9d4 = 0045ca7e
;   undefined4 DAT_005d82ab
;   undefined4 DAT_005d82b3
;   undefined4 DAT_005d82bb
;
; Called Functions:
;   core_skeleton.cpp_FUN_00569130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045c9f0
        ;   Label: core_demnfolk.cpp_CDemnfolk_getTargetPoints_FUN_0045c9f0
    PUSH ESI                            ; 0045c9f1
    PUSH EDI                            ; 0045c9f2
    PUSH EBP                            ; 0045c9f3
    MOV EBP,ESP                         ; 0045c9f4
    SUB ESP,0x90                        ; 0045c9f6
    AND ESP,0xfffffff8                  ; 0045c9fc
    MOV EBX,dword ptr [EBP + 0x14]      ; 0045c9ff
    MOV EDX,dword ptr [EBX + 0xc320]    ; 0045ca02
    PUSH EDX                            ; 0045ca08
    LEA EAX,[EBX + 0x158]               ; 0045ca09
    PUSH EAX                            ; 0045ca0f
    LEA ESI,[ESP + 0x20]                ; 0045ca10
    LEA EDI,[ESP + 0x2c]                ; 0045ca14
    CALL core_skeleton.cpp_FUN_00569130 ; 0045ca18
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x20]                ; 0045ca1d
    ADD ESP,0x8                         ; 0045ca21
    LEA EAX,[ESP + 0x24]                ; 0045ca24
    MOV ECX,dword ptr [EBP + 0x18]      ; 0045ca28
    MOVSD ES:EDI,ESI                    ; 0045ca2b
    MOVSD ES:EDI,ESI                    ; 0045ca2c
    MOVSD ES:EDI,ESI                    ; 0045ca2d
    CMP EAX,ECX                         ; 0045ca2e
    JNZ 0x0045cb68                      ; 0045ca30
        ;   XREF to: 0045cb68 (CONDITIONAL_JUMP)  ; LAB_0045cb68
    MOV ESI,0x1                         ; 0045ca36
        ;   Label: LAB_0045ca36
    XOR EDI,EDI                         ; 0045ca3b
    LEA EAX,[EBX + 0x158]               ; 0045ca3d
    MOV dword ptr [ESP + 0x84],EDI      ; 0045ca43
    MOV dword ptr [ESP + 0x88],EAX      ; 0045ca4a
    MOV dword ptr [ESP + 0x8c],ESI      ; 0045ca51
    MOV EDX,dword ptr [ESP + 0x84]      ; 0045ca58
        ;   Label: LAB_0045ca58
    ADD EDX,dword ptr [EBX + 0x6c]      ; 0045ca5f
    MOV ESI,0x4                         ; 0045ca62
    MOV EAX,EDX                         ; 0045ca67
    SAR EDX,0x1f                        ; 0045ca69
    IDIV ESI                            ; 0045ca6c
    CMP EDX,0x3                         ; 0045ca6e
    JA 0x0045cb42                       ; 0045ca71
        ;   XREF to: 0045cb42 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x45c9d4]  ; 0045ca77 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xc328]    ; 0045ca7e
        ;   Label: caseD_0
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0045ca84
    JZ 0x0045cb42                       ; 0045ca8c
        ;   XREF to: 0045cb42 (CONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [EBX + 0xc310]    ; 0045ca92
    PUSH ECX                            ; 0045ca98
    MOV ESI,dword ptr [ESP + 0x8c]      ; 0045ca99
    PUSH ESI                            ; 0045caa0
    LEA ESI,[ESP + 0x74]                ; 0045caa1
    LEA EDI,[ESP + 0x68]                ; 0045caa5
    CALL core_skeleton.cpp_FUN_00569130 ; 0045caa9
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x74]                ; 0045caae
    LEA EAX,[ESP + 0x68]                ; 0045cab2
    ADD ESP,0x8                         ; 0045cab6
    LEA EDX,[ESP + 0x30]                ; 0045cab9
    MOVSD ES:EDI,ESI                    ; 0045cabd
    MOVSD ES:EDI,ESI                    ; 0045cabe
    MOVSD ES:EDI,ESI                    ; 0045cabf
    CMP EDX,EAX                         ; 0045cac0
    JZ 0x0045cadc                       ; 0045cac2
        ;   XREF to: 0045cadc (CONDITIONAL_JUMP)  ; LAB_0045cadc
    MOV EAX,dword ptr [ESP + 0x60]      ; 0045cac4
    MOV dword ptr [ESP + 0x30],EAX      ; 0045cac8
    MOV EAX,dword ptr [ESP + 0x64]      ; 0045cacc
    MOV dword ptr [ESP + 0x34],EAX      ; 0045cad0
    MOV EAX,dword ptr [ESP + 0x68]      ; 0045cad4
    MOV dword ptr [ESP + 0x38],EAX      ; 0045cad8
    IMUL EDX,dword ptr [ESP + 0x8c],0xc ; 0045cadc
        ;   Label: LAB_0045cadc
    FLD double ptr [0x005d82ab]         ; 0045cae4 | DAT_005d82ab
    FLD float ptr [ESP + 0x30]          ; 0045caea
    FMUL ST1                            ; 0045caee
    FLD float ptr [ESP + 0x34]          ; 0045caf0
    FMUL double ptr [0x005d82b3]        ; 0045caf4 | DAT_005d82b3
    FLD float ptr [ESP + 0x24]          ; 0045cafa
    FMULP ST3                           ; 0045cafe
    FLD float ptr [ESP + 0x28]          ; 0045cb00
    FMUL double ptr [0x005d82bb]        ; 0045cb04 | DAT_005d82bb
    MOV EAX,dword ptr [EBP + 0x18]      ; 0045cb0a
    FADDP                               ; 0045cb0d
    FXCH ST2                            ; 0045cb0f
    FADDP                               ; 0045cb11
    FXCH                                ; 0045cb13
    FSTP float ptr [ESP + 0x34]         ; 0045cb15
    ADD EDX,EAX                         ; 0045cb19
    LEA EAX,[ESP + 0x30]                ; 0045cb1b
    FSTP float ptr [ESP + 0x30]         ; 0045cb1f
        ;   Label: LAB_0045cb1f
    CMP EDX,EAX                         ; 0045cb23
    JZ 0x0045cb3b                       ; 0045cb25
        ;   XREF to: 0045cb3b (CONDITIONAL_JUMP)  ; LAB_0045cb3b
    MOV EAX,dword ptr [ESP + 0x30]      ; 0045cb27
    MOV dword ptr [EDX],EAX             ; 0045cb2b
    MOV EAX,dword ptr [ESP + 0x34]      ; 0045cb2d
    MOV dword ptr [EDX + 0x4],EAX       ; 0045cb31
    MOV EAX,dword ptr [ESP + 0x38]      ; 0045cb34
    MOV dword ptr [EDX + 0x8],EAX       ; 0045cb38
        ;   Label: LAB_0045cb38
    INC dword ptr [ESP + 0x8c]          ; 0045cb3b
        ;   Label: LAB_0045cb3b
    MOV ECX,dword ptr [ESP + 0x84]      ; 0045cb42
        ;   Label: default
    INC ECX                             ; 0045cb49
    MOV dword ptr [ESP + 0x84],ECX      ; 0045cb4a
    CMP ECX,0x4                         ; 0045cb51
    JL 0x0045ca58                       ; 0045cb54
        ;   XREF to: 0045ca58 (CONDITIONAL_JUMP)  ; LAB_0045ca58
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0045cb5a
    MOV ESP,EBP                         ; 0045cb61
    POP EBP                             ; 0045cb63
    POP EDI                             ; 0045cb64
    POP ESI                             ; 0045cb65
    POP EBX                             ; 0045cb66
    RET                                 ; 0045cb67
    MOV EAX,dword ptr [ESP + 0x24]      ; 0045cb68
        ;   Label: LAB_0045cb68
    MOV dword ptr [ECX],EAX             ; 0045cb6c
    MOV EAX,dword ptr [ESP + 0x28]      ; 0045cb6e
    MOV dword ptr [ECX + 0x4],EAX       ; 0045cb72
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0045cb75
    MOV dword ptr [ECX + 0x8],EAX       ; 0045cb79
    JMP 0x0045ca36                      ; 0045cb7c
        ;   XREF to: 0045ca36 (UNCONDITIONAL_JUMP)  ; LAB_0045ca36
    MOV EAX,dword ptr [EBX + 0xc330]    ; 0045cb81
        ;   Label: caseD_1
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0045cb87
    JZ 0x0045cb42                       ; 0045cb8f
        ;   XREF to: 0045cb42 (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBX + 0xc314]    ; 0045cb91
    PUSH EAX                            ; 0045cb97
    MOV EDX,dword ptr [ESP + 0x8c]      ; 0045cb98
    PUSH EDX                            ; 0045cb9f
    LEA ESI,[ESP + 0x50]                ; 0045cba0
    LEA EDI,[ESP + 0x14]                ; 0045cba4
    CALL core_skeleton.cpp_FUN_00569130 ; 0045cba8
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x50]                ; 0045cbad
    LEA EAX,[ESP + 0x14]                ; 0045cbb1
    ADD ESP,0x8                         ; 0045cbb5
    LEA EDX,[ESP + 0x30]                ; 0045cbb8
    MOVSD ES:EDI,ESI                    ; 0045cbbc
    MOVSD ES:EDI,ESI                    ; 0045cbbd
    MOVSD ES:EDI,ESI                    ; 0045cbbe
    CMP EDX,EAX                         ; 0045cbbf
    JZ 0x0045cbdb                       ; 0045cbc1
        ;   XREF to: 0045cbdb (CONDITIONAL_JUMP)  ; LAB_0045cbdb
    MOV EAX,dword ptr [ESP + 0xc]       ; 0045cbc3
    MOV dword ptr [ESP + 0x30],EAX      ; 0045cbc7
    MOV EAX,dword ptr [ESP + 0x10]      ; 0045cbcb
    MOV dword ptr [ESP + 0x34],EAX      ; 0045cbcf
    MOV EAX,dword ptr [ESP + 0x14]      ; 0045cbd3
    MOV dword ptr [ESP + 0x38],EAX      ; 0045cbd7
    IMUL EDX,dword ptr [ESP + 0x8c],0xc ; 0045cbdb
        ;   Label: LAB_0045cbdb
    FLD double ptr [0x005d82ab]         ; 0045cbe3 | DAT_005d82ab
    FLD float ptr [ESP + 0x30]          ; 0045cbe9
    FMUL ST1                            ; 0045cbed
    FLD float ptr [ESP + 0x34]          ; 0045cbef
    FMUL double ptr [0x005d82b3]        ; 0045cbf3 | DAT_005d82b3
    FLD float ptr [ESP + 0x24]          ; 0045cbf9
    FMULP ST3                           ; 0045cbfd
    FLD float ptr [ESP + 0x28]          ; 0045cbff
    FMUL double ptr [0x005d82bb]        ; 0045cc03 | DAT_005d82bb
    MOV ESI,dword ptr [EBP + 0x18]      ; 0045cc09
    LEA EAX,[ESP + 0x30]                ; 0045cc0c
    FADDP                               ; 0045cc10
    FXCH ST2                            ; 0045cc12
    FADDP                               ; 0045cc14
    FXCH                                ; 0045cc16
    FSTP float ptr [ESP + 0x34]         ; 0045cc18
    ADD EDX,ESI                         ; 0045cc1c
    JMP 0x0045cb1f                      ; 0045cc1e
        ;   XREF to: 0045cb1f (UNCONDITIONAL_JUMP)  ; LAB_0045cb1f
    MOV EAX,dword ptr [EBX + 0xc340]    ; 0045cc23
        ;   Label: caseD_2
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0045cc29
    JZ 0x0045cb42                       ; 0045cc31
        ;   XREF to: 0045cb42 (CONDITIONAL_JUMP)  ; default
    MOV ESI,dword ptr [EBX + 0xc2fc]    ; 0045cc37
    PUSH ESI                            ; 0045cc3d
    MOV EDI,dword ptr [ESP + 0x8c]      ; 0045cc3e
    PUSH EDI                            ; 0045cc45
    LEA ESI,[ESP + 0x8]                 ; 0045cc46
    CALL core_skeleton.cpp_FUN_00569130 ; 0045cc4a
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    ADD ESP,0x8                         ; 0045cc4f
    IMUL EDX,dword ptr [ESP + 0x8c],0xc ; 0045cc52
    LEA EDI,[ESP + 0x78]                ; 0045cc5a
    MOV ESI,ESP                         ; 0045cc5e
    MOV ECX,dword ptr [EBP + 0x18]      ; 0045cc60
    LEA EAX,[ESP + 0x78]                ; 0045cc63
    ADD EDX,ECX                         ; 0045cc67
    MOVSD ES:EDI,ESI                    ; 0045cc69
    MOVSD ES:EDI,ESI                    ; 0045cc6a
    MOVSD ES:EDI,ESI                    ; 0045cc6b
    CMP EDX,EAX                         ; 0045cc6c
    JZ 0x0045cb3b                       ; 0045cc6e
        ;   XREF to: 0045cb3b (CONDITIONAL_JUMP)  ; LAB_0045cb3b
    MOV EAX,dword ptr [ESP + 0x78]      ; 0045cc74
    MOV dword ptr [EDX],EAX             ; 0045cc78
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0045cc7a
    MOV dword ptr [EDX + 0x4],EAX       ; 0045cc7e
    MOV EAX,dword ptr [ESP + 0x80]      ; 0045cc81
    JMP 0x0045cb38                      ; 0045cc88
        ;   XREF to: 0045cb38 (UNCONDITIONAL_JUMP)  ; LAB_0045cb38
    MOV EAX,dword ptr [EBX + 0xc33c]    ; 0045cc8d
        ;   Label: caseD_3
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0045cc93
    JZ 0x0045cb42                       ; 0045cc9b
        ;   XREF to: 0045cb42 (CONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [EBX + 0xc324]    ; 0045cca1
    PUSH ECX                            ; 0045cca7
    MOV ESI,dword ptr [ESP + 0x8c]      ; 0045cca8
    PUSH ESI                            ; 0045ccaf
    LEA ESI,[ESP + 0x44]                ; 0045ccb0
    LEA EDI,[ESP + 0x5c]                ; 0045ccb4
    CALL core_skeleton.cpp_FUN_00569130 ; 0045ccb8
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x44]                ; 0045ccbd
    ADD ESP,0x8                         ; 0045ccc1
    MOVSD ES:EDI,ESI                    ; 0045ccc4
    MOVSD ES:EDI,ESI                    ; 0045ccc5
    MOVSD ES:EDI,ESI                    ; 0045ccc6
    IMUL EDX,dword ptr [ESP + 0x8c],0xc ; 0045ccc7
    ADD EDX,dword ptr [EBP + 0x18]      ; 0045cccf
    LEA EAX,[ESP + 0x54]                ; 0045ccd2
    CMP EDX,EAX                         ; 0045ccd6
    JZ 0x0045cb3b                       ; 0045ccd8
        ;   XREF to: 0045cb3b (CONDITIONAL_JUMP)  ; LAB_0045cb3b
    MOV EAX,dword ptr [ESP + 0x54]      ; 0045ccde
    MOV dword ptr [EDX],EAX             ; 0045cce2
    MOV EAX,dword ptr [ESP + 0x58]      ; 0045cce4
    MOV dword ptr [EDX + 0x4],EAX       ; 0045cce8
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0045cceb
    JMP 0x0045cb38                      ; 0045ccef
        ;   XREF to: 0045cb38 (UNCONDITIONAL_JUMP)  ; LAB_0045cb38

