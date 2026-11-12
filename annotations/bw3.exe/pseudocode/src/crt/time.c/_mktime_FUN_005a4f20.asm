; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; time_t __cdecl crt_time_c__mktime_FUN_005a4f20(_tm *timeptr)
;
; Parameters:
; _tm *            Stack[0x4]:4   timeptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   crt_unknown.c_FUN_005abe28 at 005abea9
;   crt_unknown.c_FUN_005aef20 at 005aef85
;   crt_unknown.c_FUN_005aefa0 at 005aefc0
;   engine_dosio.cpp_CFileFinder_convertStruct_FUN_00465cf0 at 00465e32
;
; Referenced Globals:
;   undefined4 DAT_005e8804
;   undefined4 DAT_005e881e
;   undefined4 DAT_00607d3c
;   undefined4 DAT_00607d44
;
; Called Functions:
;   crt_unknown.c_FUN_005abdf0
;   crt_unknown.c_FUN_005abf84
;   crt_unknown.c_FUN_005ac290
;   crt_unknown.c_FUN_005ac558
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a4f20
        ;   Label: crt_time.c__mktime_FUN_005a4f20
    PUSH ESI                            ; 005a4f21
    PUSH EDI                            ; 005a4f22
    PUSH EBP                            ; 005a4f23
    SUB ESP,0x4                         ; 005a4f24
    MOV EDI,dword ptr [ESP + 0x18]      ; 005a4f27
    MOV EAX,dword ptr [EDI + 0x10]      ; 005a4f2b
    MOV EDX,EAX                         ; 005a4f2e
    MOV EBX,0xc                         ; 005a4f30
    SAR EDX,0x1f                        ; 005a4f35
    IDIV EBX                            ; 005a4f38
    MOV EBP,0x5e8804                    ; 005a4f3a | DAT_005e8804
    MOV ESI,dword ptr [EDI + 0x14]      ; 005a4f3f
    MOV EBX,EDX                         ; 005a4f42
    CMP ESI,0xf4fb7ea1                  ; 005a4f44
    JGE 0x005a4f56                      ; 005a4f4a
        ;   XREF to: 005a4f56 (CONDITIONAL_JUMP)  ; LAB_005a4f56
    MOV EAX,0xffffffff                  ; 005a4f4c
    JMP 0x005a50cb                      ; 005a4f51
        ;   XREF to: 005a50cb (UNCONDITIONAL_JUMP)  ; LAB_005a50cb
    MOV EAX,dword ptr [EDI + 0x10]      ; 005a4f56
        ;   Label: LAB_005a4f56
    MOV EDX,EAX                         ; 005a4f59
    MOV ECX,0xc                         ; 005a4f5b
    SAR EDX,0x1f                        ; 005a4f60
    IDIV ECX                            ; 005a4f63
    ADD ESI,EAX                         ; 005a4f65
    TEST EBX,EBX                        ; 005a4f67
    JGE 0x005a4f73                      ; 005a4f69
        ;   XREF to: 005a4f73 (CONDITIONAL_JUMP)  ; LAB_005a4f73
    ADD EBX,0xc                         ; 005a4f6b
        ;   Label: LAB_005a4f6b
    DEC ESI                             ; 005a4f6e
    TEST EBX,EBX                        ; 005a4f6f
    JL 0x005a4f6b                       ; 005a4f71
        ;   XREF to: 005a4f6b (CONDITIONAL_JUMP)  ; LAB_005a4f6b
    TEST ESI,ESI                        ; 005a4f73
        ;   Label: LAB_005a4f73
    JGE 0x005a4f84                      ; 005a4f75
        ;   XREF to: 005a4f84 (CONDITIONAL_JUMP)  ; LAB_005a4f84
    MOV EAX,0xffffffff                  ; 005a4f77
    ADD ESP,0x4                         ; 005a4f7c
    POP EBP                             ; 005a4f7f
    POP EDI                             ; 005a4f80
    POP ESI                             ; 005a4f81
    POP EBX                             ; 005a4f82
    RET                                 ; 005a4f83
    LEA EAX,[ESI + 0x76c]               ; 005a4f84
        ;   Label: LAB_005a4f84
    PUSH EAX                            ; 005a4f8a
    CALL crt_unknown.c_FUN_005abdf0     ; 005a4f8b
        ;   XREF to: 005abdf0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005abdf0()
    ADD ESP,0x4                         ; 005a4f90
    TEST EAX,EAX                        ; 005a4f93
    JZ 0x005a4f9c                       ; 005a4f95
        ;   XREF to: 005a4f9c (CONDITIONAL_JUMP)  ; LAB_005a4f9c
    MOV EBP,0x5e881e                    ; 005a4f97 | DAT_005e881e
    LEA EDX,[ESI + 0x3]                 ; 005a4f9c
        ;   Label: LAB_005a4f9c
    MOV EAX,EDX                         ; 005a4f9f
    SAR EDX,0x1f                        ; 005a4fa1
    SHL EDX,0x2                         ; 005a4fa4
    SBB EAX,EDX                         ; 005a4fa7
    SAR EAX,0x2                         ; 005a4fa9
    MOV ECX,EAX                         ; 005a4fac
    LEA EAX,[ESI*0x8 + 0x0]             ; 005a4fae
    ADD EAX,ESI                         ; 005a4fb5
    SHL EAX,0x3                         ; 005a4fb7
    ADD EAX,ESI                         ; 005a4fba
    MOV EDX,EAX                         ; 005a4fbc
    SHL EAX,0x2                         ; 005a4fbe
    ADD EAX,EDX                         ; 005a4fc1
    LEA EDX,[ESI + 0x63]                ; 005a4fc3
    ADD EAX,ECX                         ; 005a4fc6
    MOV ECX,0x64                        ; 005a4fc8
    MOV dword ptr [ESP],EAX             ; 005a4fcd
    MOV EAX,EDX                         ; 005a4fd0
    SAR EDX,0x1f                        ; 005a4fd2
    IDIV ECX                            ; 005a4fd5
    LEA EDX,[ESI + 0x12b]               ; 005a4fd7
    MOV ECX,dword ptr [ESP]             ; 005a4fdd
    MOV ESI,0x190                       ; 005a4fe0
    SUB ECX,EAX                         ; 005a4fe5
    MOV EAX,EDX                         ; 005a4fe7
    SAR EDX,0x1f                        ; 005a4fe9
    IDIV ESI                            ; 005a4fec
    ADD ECX,EAX                         ; 005a4fee
    MOVSX EAX,word ptr [EBP + EBX*0x2]  ; 005a4ff0 | DAT_005e881e
    MOV EDX,dword ptr [EDI + 0xc]       ; 005a4ff5
    ADD EAX,ECX                         ; 005a4ff8
    ADD EAX,EDX                         ; 005a4ffa
    LEA ESI,[EAX + -0x1]                ; 005a4ffc
    MOV EDX,dword ptr [EDI + 0x8]       ; 005a4fff
    MOV EAX,EDX                         ; 005a5002
    SHL EAX,0x4                         ; 005a5004
    SUB EAX,EDX                         ; 005a5007
    SHL EAX,0x2                         ; 005a5009
    MOV EDX,dword ptr [EDI + 0x4]       ; 005a500c
    ADD EDX,EAX                         ; 005a500f
    MOV EAX,EDX                         ; 005a5011
    SHL EAX,0x4                         ; 005a5013
    SUB EAX,EDX                         ; 005a5016
    MOV EBX,dword ptr [EDI]             ; 005a5018
    SHL EAX,0x2                         ; 005a501a
    ADD EBX,EAX                         ; 005a501d
    TEST EBX,EBX                        ; 005a501f
    JGE 0x005a502e                      ; 005a5021
        ;   XREF to: 005a502e (CONDITIONAL_JUMP)  ; LAB_005a502e
    ADD EBX,0x15180                     ; 005a5023
        ;   Label: LAB_005a5023
    DEC ESI                             ; 005a5029
    TEST EBX,EBX                        ; 005a502a
    JL 0x005a5023                       ; 005a502c
        ;   XREF to: 005a5023 (CONDITIONAL_JUMP)  ; LAB_005a5023
    PUSH EDI                            ; 005a502e
        ;   Label: LAB_005a502e
    PUSH 0x0                            ; 005a502f
    PUSH EBX                            ; 005a5031
    PUSH ESI                            ; 005a5032
    CALL crt_unknown.c_FUN_005ac290     ; 005a5033
        ;   XREF to: 005ac290 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ac290()
    ADD ESP,0x10                        ; 005a5038
    CALL crt_unknown.c_FUN_005ac558     ; 005a503b
        ;   XREF to: 005ac558 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ac558()
    MOV ECX,dword ptr [0x00607d3c]      ; 005a5040 | DAT_00607d3c
    MOV EBP,dword ptr [EDI + 0x20]      ; 005a5046
    ADD EBX,ECX                         ; 005a5049
    TEST EBP,EBP                        ; 005a504b
    JGE 0x005a5058                      ; 005a504d
        ;   XREF to: 005a5058 (CONDITIONAL_JUMP)  ; LAB_005a5058
    PUSH EDI                            ; 005a504f
    CALL crt_unknown.c_FUN_005abf84     ; 005a5050
        ;   XREF to: 005abf84 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005abf84()
    ADD ESP,0x4                         ; 005a5055
    CMP dword ptr [EDI + 0x20],0x0      ; 005a5058
        ;   Label: LAB_005a5058
    JLE 0x005a5064                      ; 005a505c
        ;   XREF to: 005a5064 (CONDITIONAL_JUMP)  ; LAB_005a5064
    SUB EBX,dword ptr [0x00607d44]      ; 005a505e | DAT_00607d44
    TEST EBX,EBX                        ; 005a5064
        ;   Label: LAB_005a5064
    JGE 0x005a5071                      ; 005a5066
        ;   XREF to: 005a5071 (CONDITIONAL_JUMP)  ; LAB_005a5071
    DEC ESI                             ; 005a5068
    ADD EBX,0x15180                     ; 005a5069
    JMP 0x005a5064                      ; 005a506f
        ;   XREF to: 005a5064 (UNCONDITIONAL_JUMP)  ; LAB_005a5064
    CMP ESI,0x63de                      ; 005a5071
        ;   Label: LAB_005a5071
    JGE 0x005a5086                      ; 005a5077
        ;   XREF to: 005a5086 (CONDITIONAL_JUMP)  ; LAB_005a5086
    MOV EAX,0xffffffff                  ; 005a5079
    ADD ESP,0x4                         ; 005a507e
    POP EBP                             ; 005a5081
    POP EDI                             ; 005a5082
    POP ESI                             ; 005a5083
    POP EBX                             ; 005a5084
    RET                                 ; 005a5085
    JNZ 0x005a50a9                      ; 005a5086
        ;   XREF to: 005a50a9 (CONDITIONAL_JUMP)  ; LAB_005a50a9
        ;   Label: LAB_005a5086
    MOV ECX,dword ptr [0x00607d3c]      ; 005a5088 | DAT_00607d3c
    SUB EBX,0x15180                     ; 005a508e
    TEST ECX,ECX                        ; 005a5094
    JLE 0x005a509c                      ; 005a5096
        ;   XREF to: 005a509c (CONDITIONAL_JUMP)  ; LAB_005a509c
    TEST EBX,EBX                        ; 005a5098
    JGE 0x005a50c9                      ; 005a509a
        ;   XREF to: 005a50c9 (CONDITIONAL_JUMP)  ; LAB_005a50c9
    MOV EAX,0xffffffff                  ; 005a509c
        ;   Label: LAB_005a509c
    ADD ESP,0x4                         ; 005a50a1
    POP EBP                             ; 005a50a4
    POP EDI                             ; 005a50a5
    POP ESI                             ; 005a50a6
    POP EBX                             ; 005a50a7
    RET                                 ; 005a50a8
    LEA EAX,[ESI + 0xffff9c21]          ; 005a50a9
        ;   Label: LAB_005a50a9
    LEA ESI,[EAX*0x8 + 0x0]             ; 005a50af
    SUB ESI,EAX                         ; 005a50b6
    SHL ESI,0x5                         ; 005a50b8
    ADD ESI,EAX                         ; 005a50bb
    SHL ESI,0x7                         ; 005a50bd
    MOV EAX,ESI                         ; 005a50c0
    SHL ESI,0x2                         ; 005a50c2
    SUB ESI,EAX                         ; 005a50c5
    ADD EBX,ESI                         ; 005a50c7
    MOV EAX,EBX                         ; 005a50c9
        ;   Label: LAB_005a50c9
    ADD ESP,0x4                         ; 005a50cb
        ;   Label: LAB_005a50cb
    POP EBP                             ; 005a50ce
    POP EDI                             ; 005a50cf
    POP ESI                             ; 005a50d0
    POP EBX                             ; 005a50d1
    RET                                 ; 005a50d2

