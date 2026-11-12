; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_bugs_cpp_CBugs_sampleGroundHeight_FUN_00422070(CBugs *this_ptr,float x,float z)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   x
; float            Stack[0xc]:4   z
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_bugs.cpp_FUN_00422a00 at 00422ad5
;
; Referenced Globals:
;   undefined4 DAT_005dcbc8
;
; Called Functions:
;   core_bugs.cpp_maxFloat_FUN_00424300
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00422070
        ;   Label: core_bugs.cpp_CBugs_sampleGroundHeight_FUN_00422070
    PUSH ESI                            ; 00422071
    SUB ESP,0x14                        ; 00422072
    MOV ESI,dword ptr [ESP + 0x20]      ; 00422075
    FLD float ptr [ESP + 0x24]          ; 00422079
    FSUB float ptr [ESI + 0x1be88]      ; 0042207d
    FLD1                                ; 00422083
    FDIV float ptr [0x005dcbc8]         ; 00422085 | DAT_005dcbc8
    FLD float ptr [ESP + 0x28]          ; 0042208b
    FSUB float ptr [ESI + 0x1be8c]      ; 0042208f
    FXCH ST2                            ; 00422095
    FMUL ST1                            ; 00422097
    FXCH ST2                            ; 00422099
    FMULP                               ; 0042209b
    FXCH                                ; 0042209d
    FSTP float ptr [ESP + 0x24]         ; 0042209f
    FST float ptr [ESP + 0x28]          ; 004220a3
    FLD float ptr [ESP + 0x24]          ; 004220a7
    CALL crt_math.c_round_FUN_005a3120  ; 004220ab
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 004220b0
    CALL crt_math.c_round_FUN_005a3120  ; 004220b2
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 004220b7
    FISTP dword ptr [ESP + 0xc]         ; 004220b9
    MOV EDX,dword ptr [ESP + 0xc]       ; 004220bd
    FISTP dword ptr [ESP + 0x8]         ; 004220c1
    TEST EDX,EDX                        ; 004220c5
    JL 0x0042212b                       ; 004220c7
        ;   XREF to: 0042212b (CONDITIONAL_JUMP)  ; LAB_0042212b
    CMP EDX,0xb                         ; 004220c9
    JGE 0x00422133                      ; 004220cc
        ;   XREF to: 00422133 (CONDITIONAL_JUMP)  ; LAB_00422133
    LEA EBX,[EDX + 0x1]                 ; 004220ce
    MOV EDX,dword ptr [ESP + 0xc]       ; 004220d1
        ;   Label: LAB_004220d1
    LEA EAX,[EDX*0x4 + 0x0]             ; 004220d5
    SUB EAX,EDX                         ; 004220dc
    MOV EDX,EAX                         ; 004220de
    LEA EAX,[EBX*0x4 + 0x0]             ; 004220e0
    SUB EAX,EBX                         ; 004220e7
    SHL EDX,0x4                         ; 004220e9
    SHL EAX,0x4                         ; 004220ec
    LEA EBX,[ESI + EDX*0x1]             ; 004220ef
    ADD ESI,EAX                         ; 004220f2
    MOV EAX,dword ptr [ESP + 0x8]       ; 004220f4
    TEST EAX,EAX                        ; 004220f8
    JL 0x0042213e                       ; 004220fa
        ;   XREF to: 0042213e (CONDITIONAL_JUMP)  ; LAB_0042213e
    CMP EAX,0xb                         ; 004220fc
    JL 0x0042214c                       ; 004220ff
        ;   XREF to: 0042214c (CONDITIONAL_JUMP)  ; LAB_0042214c
    PUSH dword ptr [ESI + 0x13608]      ; 00422101
    PUSH dword ptr [EBX + 0x13608]      ; 00422107
    CALL core_bugs.cpp_maxFloat_FUN_00424300 ; 0042210d
        ;   XREF to: 00424300 (UNCONDITIONAL_CALL)  ; float core_bugs.cpp_maxFloat_FUN_00424300(float a, float b)
        ;   Label: LAB_0042210d
    MOV dword ptr [ESP + 0x18],EAX      ; 00422112
    FLD float ptr [ESP + 0x18]          ; 00422116
    ADD ESP,0x8                         ; 0042211a
    FSTP float ptr [ESP + 0x4]          ; 0042211d
    MOV EAX,dword ptr [ESP + 0x4]       ; 00422121
    ADD ESP,0x14                        ; 00422125
    POP ESI                             ; 00422128
    POP EBX                             ; 00422129
    RET                                 ; 0042212a
    XOR EBX,EBX                         ; 0042212b
        ;   Label: LAB_0042212b
    MOV dword ptr [ESP + 0xc],EBX       ; 0042212d
    JMP 0x004220d1                      ; 00422131
        ;   XREF to: 004220d1 (UNCONDITIONAL_JUMP)  ; LAB_004220d1
    MOV EBX,0xb                         ; 00422133
        ;   Label: LAB_00422133
    MOV dword ptr [ESP + 0xc],EBX       ; 00422138
    JMP 0x004220d1                      ; 0042213c
        ;   XREF to: 004220d1 (UNCONDITIONAL_JUMP)  ; LAB_004220d1
    PUSH dword ptr [ESI + 0x135dc]      ; 0042213e
        ;   Label: LAB_0042213e
    PUSH dword ptr [EBX + 0x135dc]      ; 00422144
    JMP 0x0042210d                      ; 0042214a
        ;   XREF to: 0042210d (UNCONDITIONAL_JUMP)  ; LAB_0042210d
    PUSH EDI                            ; 0042214c
        ;   Label: LAB_0042214c
    MOV EDI,EAX                         ; 0042214d
    SHL EAX,0x2                         ; 0042214f
    LEA EDX,[ESI + EAX*0x1]             ; 00422152
    PUSH dword ptr [EDX + 0x135dc]      ; 00422155
    PUSH dword ptr [EBX + EAX*0x1 + 0x135dc] ; 0042215b
    CALL core_bugs.cpp_maxFloat_FUN_00424300 ; 00422162
        ;   XREF to: 00424300 (UNCONDITIONAL_CALL)  ; float core_bugs.cpp_maxFloat_FUN_00424300(float a, float b)
    MOV dword ptr [ESP + 0x1c],EAX      ; 00422167
    FLD float ptr [ESP + 0x1c]          ; 0042216b
    ADD ESP,0x8                         ; 0042216f
    PUSH dword ptr [ESI + EDI*0x4 + 0x135e0] ; 00422172
    PUSH dword ptr [EBX + EDI*0x4 + 0x135e0] ; 00422179
    FSTP float ptr [ESP + 0xc]          ; 00422180
    CALL core_bugs.cpp_maxFloat_FUN_00424300 ; 00422184
        ;   XREF to: 00424300 (UNCONDITIONAL_CALL)  ; float core_bugs.cpp_maxFloat_FUN_00424300(float a, float b)
    MOV dword ptr [ESP + 0x1c],EAX      ; 00422189
    FLD float ptr [ESP + 0x1c]          ; 0042218d
    ADD ESP,0x8                         ; 00422191
    SUB ESP,0x4                         ; 00422194
    FSTP float ptr [ESP]                ; 00422197
    PUSH dword ptr [ESP + 0x8]          ; 0042219a
    CALL core_bugs.cpp_maxFloat_FUN_00424300 ; 0042219e
        ;   XREF to: 00424300 (UNCONDITIONAL_CALL)  ; float core_bugs.cpp_maxFloat_FUN_00424300(float a, float b)
    MOV dword ptr [ESP + 0x1c],EAX      ; 004221a3
    FLD float ptr [ESP + 0x1c]          ; 004221a7
    ADD ESP,0x8                         ; 004221ab
    FSTP float ptr [ESP + 0x8]          ; 004221ae
    POP EDI                             ; 004221b2
    MOV EAX,dword ptr [ESP + 0x4]       ; 004221b3
    ADD ESP,0x14                        ; 004221b7
    POP ESI                             ; 004221ba
    POP EBX                             ; 004221bb
    RET                                 ; 004221bc

