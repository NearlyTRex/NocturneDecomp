; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * core_xform_cpp_FUN_00585de0(float *param_1)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   core_boneguy.cpp_CBaalSkel_process_FUN_00419b40 at 00419d4e
;   core_boneguy.cpp_CBoneGuy_process_FUN_004179b0 at 00417bfb
;   core_charactr.cpp_FUN_0042cd70 at 0042ce43
;   core_construc.cpp_CConstruct_process_FUN_00442a20 at 00443191
;   core_platfrm.cpp_CPlatform_evaluatePosition_FUN_00511340 at 0051146f
;   core_prye.cpp_FUN_0051e280 at 0051e2e5
;
; Referenced Globals:
;   undefined4 DAT_005d81b7
;   undefined4 DAT_005d81bb
;   undefined4 DAT_005d81bf
;   undefined4 DAT_005d81c3
;   undefined4 DAT_005d81c7
;   undefined4 DAT_005d81cb
;
; Called Functions:
;   crt_math.c_asin_FUN_005a4b46
;   crt_math.c_atan2_FUN_005a5cc1
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00585de0
        ;   Label: core_xform.cpp_FUN_00585de0
    PUSH EDI                            ; 00585de1
    PUSH EBP                            ; 00585de2
    MOV EBP,ESP                         ; 00585de3
    SUB ESP,0x14                        ; 00585de5
    AND ESP,0xfffffff8                  ; 00585de8
    MOV EDX,dword ptr [EBP + 0x10]      ; 00585deb
    MOV ECX,ESI                         ; 00585dee
    FLD float ptr [EDX + 0x8]           ; 00585df0
    FMUL float ptr [EDX + 0xc]          ; 00585df3
    FLD float ptr [EDX]                 ; 00585df6
    FMUL float ptr [EDX + 0x4]          ; 00585df8
    FSUBRP                              ; 00585dfb
    FMUL float ptr [0x005d81b7]         ; 00585dfd | DAT_005d81b7
    FST float ptr [ESP]                 ; 00585e03
    FCOMP float ptr [0x005d81bb]        ; 00585e06 | DAT_005d81bb
    FNSTSW AX                           ; 00585e0c
    SAHF                                ; 00585e0e
    JC 0x00585eac                       ; 00585e0f
        ;   XREF to: 00585eac (CONDITIONAL_JUMP)  ; LAB_00585eac
    FLD float ptr [ESP]                 ; 00585e15
    FCOMP float ptr [0x005d81bf]        ; 00585e18 | DAT_005d81bf
    FNSTSW AX                           ; 00585e1e
    SAHF                                ; 00585e20
    JA 0x00585ef5                       ; 00585e21
        ;   XREF to: 00585ef5 (CONDITIONAL_JUMP)  ; LAB_00585ef5
    FLD float ptr [ESP]                 ; 00585e27
    CALL crt_math.c_asin_FUN_005a4b46   ; 00585e2a
        ;   XREF to: 005a4b46 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_asin_FUN_005a4b46()
    FST float ptr [ESP + 0x4]           ; 00585e2f
    FCOMP float ptr [0x005d81c3]        ; 00585e33 | DAT_005d81c3
    FNSTSW AX                           ; 00585e39
    SAHF                                ; 00585e3b
    JNC 0x00585e4c                      ; 00585e3c
        ;   XREF to: 00585e4c (CONDITIONAL_JUMP)  ; LAB_00585e4c
    FLD float ptr [ESP + 0x4]           ; 00585e3e
    FADD float ptr [0x005d81c7]         ; 00585e42 | DAT_005d81c7
    FSTP float ptr [ESP + 0x4]          ; 00585e48
    FLD float ptr [EDX + 0x4]           ; 00585e4c
        ;   Label: LAB_00585e4c
    FMUL ST0                            ; 00585e4f
    FLD float ptr [EDX + 0x8]           ; 00585e51
    FMUL ST0                            ; 00585e54
    FXCH                                ; 00585e56
    FSUBR float ptr [0x005d81cb]        ; 00585e58 | DAT_005d81cb
    FXCH                                ; 00585e5e
    FSUBR ST0,ST1                       ; 00585e60
    FLD float ptr [EDX + 0x4]           ; 00585e62
    FMUL float ptr [EDX + 0xc]          ; 00585e65
    FLD float ptr [EDX]                 ; 00585e68
    FMUL float ptr [EDX + 0x8]          ; 00585e6a
    FADDP                               ; 00585e6d
    CALL crt_math.c_atan2_FUN_005a5cc1  ; 00585e6f
        ;   XREF to: 005a5cc1 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005a5cc1()
    FLD float ptr [EDX + 0xc]           ; 00585e74
    FMUL ST0                            ; 00585e77
    FSUBP ST2,ST0                       ; 00585e79
    FLD float ptr [EDX + 0x4]           ; 00585e7b
    FMUL float ptr [EDX + 0x8]          ; 00585e7e
    FLD float ptr [EDX]                 ; 00585e81
    FMUL float ptr [EDX + 0xc]          ; 00585e83
    FADDP                               ; 00585e86
    FLD ST2                             ; 00585e88
    FXCH                                ; 00585e8a
    CALL crt_math.c_atan2_FUN_005a5cc1  ; 00585e8c
        ;   XREF to: 005a5cc1 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005a5cc1()
    FSTP ST2                            ; 00585e91
    FSTP float ptr [ESP + 0x8]          ; 00585e93
    FSTP float ptr [ESP + 0xc]          ; 00585e97
    LEA ESI,[ESP + 0x4]                 ; 00585e9b
    MOV EDI,ECX                         ; 00585e9f
    MOVSD ES:EDI,ESI                    ; 00585ea1
    MOVSD ES:EDI,ESI                    ; 00585ea2
    MOVSD ES:EDI,ESI                    ; 00585ea3
    MOV EAX,ECX                         ; 00585ea4
    MOV ESP,EBP                         ; 00585ea6
    POP EBP                             ; 00585ea8
    POP EDI                             ; 00585ea9
    POP EBX                             ; 00585eaa
    RET                                 ; 00585eab
    FLD float ptr [EDX + 0x8]           ; 00585eac
        ;   Label: LAB_00585eac
    FMUL ST0                            ; 00585eaf
    FSUBR float ptr [0x005d81cb]        ; 00585eb1 | DAT_005d81cb
    FLD float ptr [EDX + 0xc]           ; 00585eb7
    FMUL ST0                            ; 00585eba
    FSUBP                               ; 00585ebc
    FLD float ptr [EDX + 0x4]           ; 00585ebe
    FCHS                                ; 00585ec1
    FMUL float ptr [EDX + 0xc]          ; 00585ec3
    FLD float ptr [EDX]                 ; 00585ec6
    FMUL float ptr [EDX + 0x8]          ; 00585ec8
    FADDP                               ; 00585ecb
    CALL crt_math.c_atan2_FUN_005a5cc1  ; 00585ecd
        ;   XREF to: 005a5cc1 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005a5cc1()
    MOV dword ptr [ESP + 0x4],0xbfc90fdb ; 00585ed2
    XOR EAX,EAX                         ; 00585eda
    FSTP float ptr [ESP + 0x8]          ; 00585edc
    MOV dword ptr [ESP + 0xc],EAX       ; 00585ee0
    LEA ESI,[ESP + 0x4]                 ; 00585ee4
    MOV EDI,ECX                         ; 00585ee8
    MOVSD ES:EDI,ESI                    ; 00585eea
    MOVSD ES:EDI,ESI                    ; 00585eeb
    MOVSD ES:EDI,ESI                    ; 00585eec
    MOV EAX,ECX                         ; 00585eed
    MOV ESP,EBP                         ; 00585eef
    POP EBP                             ; 00585ef1
    POP EDI                             ; 00585ef2
    POP EBX                             ; 00585ef3
    RET                                 ; 00585ef4
    FLD float ptr [EDX + 0x8]           ; 00585ef5
        ;   Label: LAB_00585ef5
    FMUL ST0                            ; 00585ef8
    FSUBR float ptr [0x005d81cb]        ; 00585efa | DAT_005d81cb
    FLD float ptr [EDX + 0xc]           ; 00585f00
    FMUL ST0                            ; 00585f03
    FSUBP                               ; 00585f05
    FLD float ptr [EDX + 0x4]           ; 00585f07
    FCHS                                ; 00585f0a
    FMUL float ptr [EDX + 0xc]          ; 00585f0c
    FLD float ptr [EDX]                 ; 00585f0f
    FMUL float ptr [EDX + 0x8]          ; 00585f11
    FADDP                               ; 00585f14
    CALL crt_math.c_atan2_FUN_005a5cc1  ; 00585f16
        ;   XREF to: 005a5cc1 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005a5cc1()
    MOV EBX,0x3fc90fdb                  ; 00585f1b
    XOR ESI,ESI                         ; 00585f20
    MOV dword ptr [ESP + 0x4],EBX       ; 00585f22
    MOV dword ptr [ESP + 0xc],ESI       ; 00585f26
    FSTP float ptr [ESP + 0x8]          ; 00585f2a
    LEA ESI,[ESP + 0x4]                 ; 00585f2e
    MOV EDI,ECX                         ; 00585f32
    MOVSD ES:EDI,ESI                    ; 00585f34
    MOVSD ES:EDI,ESI                    ; 00585f35
    MOVSD ES:EDI,ESI                    ; 00585f36
    MOV EAX,ECX                         ; 00585f37
    MOV ESP,EBP                         ; 00585f39
    POP EBP                             ; 00585f3b
    POP EDI                             ; 00585f3c
    POP EBX                             ; 00585f3d
    RET                                 ; 00585f3e

