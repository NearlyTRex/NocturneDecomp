; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_zombie_cpp_CZombie_getTargetPoints_FUN_005be980(CZombie *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
;
; Referenced Globals:
;   undefined1* switchdataD_005be968 = 005bea0e
;   undefined4 DAT_005fa99c
;   undefined4 DAT_005fa9a4
;   undefined4 DAT_005fa9ac
;
; Called Functions:
;   core_skeleton.cpp_FUN_00569130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005be980
        ;   Label: core_zombie.cpp_CZombie_getTargetPoints_FUN_005be980
    PUSH ESI                            ; 005be981
    PUSH EDI                            ; 005be982
    PUSH EBP                            ; 005be983
    MOV EBP,ESP                         ; 005be984
    SUB ESP,0x90                        ; 005be986
    AND ESP,0xfffffff8                  ; 005be98c
    MOV EBX,dword ptr [EBP + 0x14]      ; 005be98f
    MOV EDX,dword ptr [EBX + 0xc31c]    ; 005be992
    PUSH EDX                            ; 005be998
    LEA EAX,[EBX + 0x158]               ; 005be999
    PUSH EAX                            ; 005be99f
    LEA ESI,[ESP + 0x20]                ; 005be9a0
    LEA EDI,[ESP + 0x2c]                ; 005be9a4
    CALL core_skeleton.cpp_FUN_00569130 ; 005be9a8
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x20]                ; 005be9ad
    ADD ESP,0x8                         ; 005be9b1
    LEA EAX,[ESP + 0x24]                ; 005be9b4
    MOV ECX,dword ptr [EBP + 0x18]      ; 005be9b8
    MOVSD ES:EDI,ESI                    ; 005be9bb
    MOVSD ES:EDI,ESI                    ; 005be9bc
    MOVSD ES:EDI,ESI                    ; 005be9bd
    CMP EAX,ECX                         ; 005be9be
    JNZ 0x005beaf8                      ; 005be9c0
        ;   XREF to: 005beaf8 (CONDITIONAL_JUMP)  ; LAB_005beaf8
    MOV ESI,0x1                         ; 005be9c6
        ;   Label: LAB_005be9c6
    XOR EDI,EDI                         ; 005be9cb
    LEA EAX,[EBX + 0x158]               ; 005be9cd
    MOV dword ptr [ESP + 0x84],EDI      ; 005be9d3
    MOV dword ptr [ESP + 0x88],EAX      ; 005be9da
    MOV dword ptr [ESP + 0x8c],ESI      ; 005be9e1
    MOV EDX,dword ptr [ESP + 0x84]      ; 005be9e8
        ;   Label: LAB_005be9e8
    ADD EDX,dword ptr [EBX + 0x6c]      ; 005be9ef
    MOV ESI,0x4                         ; 005be9f2
    MOV EAX,EDX                         ; 005be9f7
    SAR EDX,0x1f                        ; 005be9f9
    IDIV ESI                            ; 005be9fc
    CMP EDX,0x3                         ; 005be9fe
    JA 0x005bead2                       ; 005bea01
        ;   XREF to: 005bead2 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x5be968]  ; 005bea07 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xc324]    ; 005bea0e
        ;   Label: caseD_0
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 005bea14
    JZ 0x005bead2                       ; 005bea1c
        ;   XREF to: 005bead2 (CONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [EBX + 0xc30c]    ; 005bea22
    PUSH ECX                            ; 005bea28
    MOV ESI,dword ptr [ESP + 0x8c]      ; 005bea29
    PUSH ESI                            ; 005bea30
    LEA ESI,[ESP + 0x74]                ; 005bea31
    LEA EDI,[ESP + 0x68]                ; 005bea35
    CALL core_skeleton.cpp_FUN_00569130 ; 005bea39
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x74]                ; 005bea3e
    LEA EAX,[ESP + 0x68]                ; 005bea42
    ADD ESP,0x8                         ; 005bea46
    LEA EDX,[ESP + 0x30]                ; 005bea49
    MOVSD ES:EDI,ESI                    ; 005bea4d
    MOVSD ES:EDI,ESI                    ; 005bea4e
    MOVSD ES:EDI,ESI                    ; 005bea4f
    CMP EDX,EAX                         ; 005bea50
    JZ 0x005bea6c                       ; 005bea52
        ;   XREF to: 005bea6c (CONDITIONAL_JUMP)  ; LAB_005bea6c
    MOV EAX,dword ptr [ESP + 0x60]      ; 005bea54
    MOV dword ptr [ESP + 0x30],EAX      ; 005bea58
    MOV EAX,dword ptr [ESP + 0x64]      ; 005bea5c
    MOV dword ptr [ESP + 0x34],EAX      ; 005bea60
    MOV EAX,dword ptr [ESP + 0x68]      ; 005bea64
    MOV dword ptr [ESP + 0x38],EAX      ; 005bea68
    IMUL EDX,dword ptr [ESP + 0x8c],0xc ; 005bea6c
        ;   Label: LAB_005bea6c
    FLD double ptr [0x005fa99c]         ; 005bea74 | DAT_005fa99c
    FLD float ptr [ESP + 0x30]          ; 005bea7a
    FMUL ST1                            ; 005bea7e
    FLD float ptr [ESP + 0x34]          ; 005bea80
    FMUL double ptr [0x005fa9a4]        ; 005bea84 | DAT_005fa9a4
    FLD float ptr [ESP + 0x24]          ; 005bea8a
    FMULP ST3                           ; 005bea8e
    FLD float ptr [ESP + 0x28]          ; 005bea90
    FMUL double ptr [0x005fa9ac]        ; 005bea94 | DAT_005fa9ac
    MOV EAX,dword ptr [EBP + 0x18]      ; 005bea9a
    FADDP                               ; 005bea9d
    FXCH ST2                            ; 005bea9f
    FADDP                               ; 005beaa1
    FXCH                                ; 005beaa3
    FSTP float ptr [ESP + 0x34]         ; 005beaa5
    ADD EDX,EAX                         ; 005beaa9
    LEA EAX,[ESP + 0x30]                ; 005beaab
    FSTP float ptr [ESP + 0x30]         ; 005beaaf
        ;   Label: LAB_005beaaf
    CMP EDX,EAX                         ; 005beab3
    JZ 0x005beacb                       ; 005beab5
        ;   XREF to: 005beacb (CONDITIONAL_JUMP)  ; LAB_005beacb
    MOV EAX,dword ptr [ESP + 0x30]      ; 005beab7
    MOV dword ptr [EDX],EAX             ; 005beabb
    MOV EAX,dword ptr [ESP + 0x34]      ; 005beabd
    MOV dword ptr [EDX + 0x4],EAX       ; 005beac1
    MOV EAX,dword ptr [ESP + 0x38]      ; 005beac4
    MOV dword ptr [EDX + 0x8],EAX       ; 005beac8
        ;   Label: LAB_005beac8
    INC dword ptr [ESP + 0x8c]          ; 005beacb
        ;   Label: LAB_005beacb
    MOV ECX,dword ptr [ESP + 0x84]      ; 005bead2
        ;   Label: default
    INC ECX                             ; 005bead9
    MOV dword ptr [ESP + 0x84],ECX      ; 005beada
    CMP ECX,0x4                         ; 005beae1
    JL 0x005be9e8                       ; 005beae4
        ;   XREF to: 005be9e8 (CONDITIONAL_JUMP)  ; LAB_005be9e8
    MOV EAX,dword ptr [ESP + 0x8c]      ; 005beaea
    MOV ESP,EBP                         ; 005beaf1
    POP EBP                             ; 005beaf3
    POP EDI                             ; 005beaf4
    POP ESI                             ; 005beaf5
    POP EBX                             ; 005beaf6
    RET                                 ; 005beaf7
    MOV EAX,dword ptr [ESP + 0x24]      ; 005beaf8
        ;   Label: LAB_005beaf8
    MOV dword ptr [ECX],EAX             ; 005beafc
    MOV EAX,dword ptr [ESP + 0x28]      ; 005beafe
    MOV dword ptr [ECX + 0x4],EAX       ; 005beb02
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005beb05
    MOV dword ptr [ECX + 0x8],EAX       ; 005beb09
    JMP 0x005be9c6                      ; 005beb0c
        ;   XREF to: 005be9c6 (UNCONDITIONAL_JUMP)  ; LAB_005be9c6
    MOV EAX,dword ptr [EBX + 0xc32c]    ; 005beb11
        ;   Label: caseD_1
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 005beb17
    JZ 0x005bead2                       ; 005beb1f
        ;   XREF to: 005bead2 (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBX + 0xc310]    ; 005beb21
    PUSH EAX                            ; 005beb27
    MOV EDX,dword ptr [ESP + 0x8c]      ; 005beb28
    PUSH EDX                            ; 005beb2f
    LEA ESI,[ESP + 0x50]                ; 005beb30
    LEA EDI,[ESP + 0x14]                ; 005beb34
    CALL core_skeleton.cpp_FUN_00569130 ; 005beb38
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x50]                ; 005beb3d
    LEA EAX,[ESP + 0x14]                ; 005beb41
    ADD ESP,0x8                         ; 005beb45
    LEA EDX,[ESP + 0x30]                ; 005beb48
    MOVSD ES:EDI,ESI                    ; 005beb4c
    MOVSD ES:EDI,ESI                    ; 005beb4d
    MOVSD ES:EDI,ESI                    ; 005beb4e
    CMP EDX,EAX                         ; 005beb4f
    JZ 0x005beb6b                       ; 005beb51
        ;   XREF to: 005beb6b (CONDITIONAL_JUMP)  ; LAB_005beb6b
    MOV EAX,dword ptr [ESP + 0xc]       ; 005beb53
    MOV dword ptr [ESP + 0x30],EAX      ; 005beb57
    MOV EAX,dword ptr [ESP + 0x10]      ; 005beb5b
    MOV dword ptr [ESP + 0x34],EAX      ; 005beb5f
    MOV EAX,dword ptr [ESP + 0x14]      ; 005beb63
    MOV dword ptr [ESP + 0x38],EAX      ; 005beb67
    IMUL EDX,dword ptr [ESP + 0x8c],0xc ; 005beb6b
        ;   Label: LAB_005beb6b
    FLD double ptr [0x005fa99c]         ; 005beb73 | DAT_005fa99c
    FLD float ptr [ESP + 0x30]          ; 005beb79
    FMUL ST1                            ; 005beb7d
    FLD float ptr [ESP + 0x34]          ; 005beb7f
    FMUL double ptr [0x005fa9a4]        ; 005beb83 | DAT_005fa9a4
    FLD float ptr [ESP + 0x24]          ; 005beb89
    FMULP ST3                           ; 005beb8d
    FLD float ptr [ESP + 0x28]          ; 005beb8f
    FMUL double ptr [0x005fa9ac]        ; 005beb93 | DAT_005fa9ac
    MOV ESI,dword ptr [EBP + 0x18]      ; 005beb99
    LEA EAX,[ESP + 0x30]                ; 005beb9c
    FADDP                               ; 005beba0
    FXCH ST2                            ; 005beba2
    FADDP                               ; 005beba4
    FXCH                                ; 005beba6
    FSTP float ptr [ESP + 0x34]         ; 005beba8
    ADD EDX,ESI                         ; 005bebac
    JMP 0x005beaaf                      ; 005bebae
        ;   XREF to: 005beaaf (UNCONDITIONAL_JUMP)  ; LAB_005beaaf
    MOV EAX,dword ptr [EBX + 0xc33c]    ; 005bebb3
        ;   Label: caseD_2
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 005bebb9
    JZ 0x005bead2                       ; 005bebc1
        ;   XREF to: 005bead2 (CONDITIONAL_JUMP)  ; default
    MOV ESI,dword ptr [EBX + 0xc2f8]    ; 005bebc7
    PUSH ESI                            ; 005bebcd
    MOV EDI,dword ptr [ESP + 0x8c]      ; 005bebce
    PUSH EDI                            ; 005bebd5
    LEA ESI,[ESP + 0x8]                 ; 005bebd6
    CALL core_skeleton.cpp_FUN_00569130 ; 005bebda
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    ADD ESP,0x8                         ; 005bebdf
    IMUL EDX,dword ptr [ESP + 0x8c],0xc ; 005bebe2
    LEA EDI,[ESP + 0x78]                ; 005bebea
    MOV ESI,ESP                         ; 005bebee
    MOV ECX,dword ptr [EBP + 0x18]      ; 005bebf0
    LEA EAX,[ESP + 0x78]                ; 005bebf3
    ADD EDX,ECX                         ; 005bebf7
    MOVSD ES:EDI,ESI                    ; 005bebf9
    MOVSD ES:EDI,ESI                    ; 005bebfa
    MOVSD ES:EDI,ESI                    ; 005bebfb
    CMP EDX,EAX                         ; 005bebfc
    JZ 0x005beacb                       ; 005bebfe
        ;   XREF to: 005beacb (CONDITIONAL_JUMP)  ; LAB_005beacb
    MOV EAX,dword ptr [ESP + 0x78]      ; 005bec04
    MOV dword ptr [EDX],EAX             ; 005bec08
    MOV EAX,dword ptr [ESP + 0x7c]      ; 005bec0a
    MOV dword ptr [EDX + 0x4],EAX       ; 005bec0e
    MOV EAX,dword ptr [ESP + 0x80]      ; 005bec11
    JMP 0x005beac8                      ; 005bec18
        ;   XREF to: 005beac8 (UNCONDITIONAL_JUMP)  ; LAB_005beac8
    MOV EAX,dword ptr [EBX + 0xc338]    ; 005bec1d
        ;   Label: caseD_3
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 005bec23
    JZ 0x005bead2                       ; 005bec2b
        ;   XREF to: 005bead2 (CONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [EBX + 0xc320]    ; 005bec31
    PUSH ECX                            ; 005bec37
    MOV ESI,dword ptr [ESP + 0x8c]      ; 005bec38
    PUSH ESI                            ; 005bec3f
    LEA ESI,[ESP + 0x44]                ; 005bec40
    LEA EDI,[ESP + 0x5c]                ; 005bec44
    CALL core_skeleton.cpp_FUN_00569130 ; 005bec48
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x44]                ; 005bec4d
    ADD ESP,0x8                         ; 005bec51
    MOVSD ES:EDI,ESI                    ; 005bec54
    MOVSD ES:EDI,ESI                    ; 005bec55
    MOVSD ES:EDI,ESI                    ; 005bec56
    IMUL EDX,dword ptr [ESP + 0x8c],0xc ; 005bec57
    ADD EDX,dword ptr [EBP + 0x18]      ; 005bec5f
    LEA EAX,[ESP + 0x54]                ; 005bec62
    CMP EDX,EAX                         ; 005bec66
    JZ 0x005beacb                       ; 005bec68
        ;   XREF to: 005beacb (CONDITIONAL_JUMP)  ; LAB_005beacb
    MOV EAX,dword ptr [ESP + 0x54]      ; 005bec6e
    MOV dword ptr [EDX],EAX             ; 005bec72
    MOV EAX,dword ptr [ESP + 0x58]      ; 005bec74
    MOV dword ptr [EDX + 0x4],EAX       ; 005bec78
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005bec7b
    JMP 0x005beac8                      ; 005bec7f
        ;   XREF to: 005beac8 (UNCONDITIONAL_JUMP)  ; LAB_005beac8

