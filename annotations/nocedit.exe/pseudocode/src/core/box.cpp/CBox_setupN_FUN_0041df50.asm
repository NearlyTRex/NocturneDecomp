; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_box_cpp_CBox_setupN_FUN_0041df50(CBox *this_ptr,CVector3f *position,CVector3f *orientation,int point_count,CVector3f *point_array,float volume)
;
; Parameters:
; CBox *           Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   orientation
; int              Stack[0x10]:4   point_count
; CVector3f *      Stack[0x14]:4   point_array
; float            Stack[0x18]:4   volume
; Local Variables:
; float            Stack[-0x34]:4  fStack_34
; float            Stack[-0x30]:4  fStack_30
; float            Stack[-0x2c]:4  fStack_2c
; float            Stack[-0x28]:4  local_28
; float            Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_core_box_cpp_00616477
;   TerminatedCString s_CBox_setupN_Too_many_scr_00616487
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_box.cpp_CBox_updateTransform_FUN_0041e0e0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041df50
        ;   Label: core_box.cpp_CBox_setupN_FUN_0041df50
    PUSH ESI                            ; 0041df51
    PUSH EDI                            ; 0041df52
    PUSH EBP                            ; 0041df53
    SUB ESP,0x24                        ; 0041df54
    MOV ESI,dword ptr [ESP + 0x38]      ; 0041df57
    MOV EBX,dword ptr [ESP + 0x44]      ; 0041df5b
    CMP EBX,0x8                         ; 0041df5f
    JG 0x0041e0b0                       ; 0041df62
        ;   XREF to: 0041e0b0 (CONDITIONAL_JUMP)  ; LAB_0041e0b0
    MOV EDI,0x4479c000                  ; 0041df68
        ;   Label: LAB_0041df68
    MOV EDX,0xc479c000                  ; 0041df6d
    MOV dword ptr [ESP + 0x1c],EDI      ; 0041df72
    MOV dword ptr [ESP + 0x20],EDI      ; 0041df76
    MOV dword ptr [ESP + 0xc],EDX       ; 0041df7a
    MOV ECX,EDX                         ; 0041df7e
    MOV dword ptr [ESP + 0x10],EDX      ; 0041df80
    MOV dword ptr [ESP + 0x14],EDX      ; 0041df84
    MOV dword ptr [ESP + 0x18],EDI      ; 0041df88
    XOR ECX,EDX                         ; 0041df8c
    TEST EBX,EBX                        ; 0041df8e
    JLE 0x0041e010                      ; 0041df90
        ;   XREF to: 0041e010 (CONDITIONAL_JUMP)  ; LAB_0041e010
    MOV EDX,dword ptr [ESP + 0x48]      ; 0041df96
    FLD float ptr [EDX]                 ; 0041df9a
        ;   Label: LAB_0041df9a
    FCOMP float ptr [ESP + 0x18]        ; 0041df9c
    FNSTSW AX                           ; 0041dfa0
    SAHF                                ; 0041dfa2
    JNC 0x0041dfab                      ; 0041dfa3
        ;   XREF to: 0041dfab (CONDITIONAL_JUMP)  ; LAB_0041dfab
    MOV EAX,dword ptr [EDX]             ; 0041dfa5
    MOV dword ptr [ESP + 0x18],EAX      ; 0041dfa7
    FLD float ptr [EDX + 0x4]           ; 0041dfab
        ;   Label: LAB_0041dfab
    FCOMP float ptr [ESP + 0x1c]        ; 0041dfae
    FNSTSW AX                           ; 0041dfb2
    SAHF                                ; 0041dfb4
    JNC 0x0041dfbe                      ; 0041dfb5
        ;   XREF to: 0041dfbe (CONDITIONAL_JUMP)  ; LAB_0041dfbe
    MOV EAX,dword ptr [EDX + 0x4]       ; 0041dfb7
    MOV dword ptr [ESP + 0x1c],EAX      ; 0041dfba
    FLD float ptr [EDX + 0x8]           ; 0041dfbe
        ;   Label: LAB_0041dfbe
    FCOMP float ptr [ESP + 0x20]        ; 0041dfc1
    FNSTSW AX                           ; 0041dfc5
    SAHF                                ; 0041dfc7
    JNC 0x0041dfd1                      ; 0041dfc8
        ;   XREF to: 0041dfd1 (CONDITIONAL_JUMP)  ; LAB_0041dfd1
    MOV EAX,dword ptr [EDX + 0x8]       ; 0041dfca
    MOV dword ptr [ESP + 0x20],EAX      ; 0041dfcd
    FLD float ptr [EDX]                 ; 0041dfd1
        ;   Label: LAB_0041dfd1
    FCOMP float ptr [ESP + 0xc]         ; 0041dfd3
    FNSTSW AX                           ; 0041dfd7
    SAHF                                ; 0041dfd9
    JBE 0x0041dfe2                      ; 0041dfda
        ;   XREF to: 0041dfe2 (CONDITIONAL_JUMP)  ; LAB_0041dfe2
    MOV EAX,dword ptr [EDX]             ; 0041dfdc
    MOV dword ptr [ESP + 0xc],EAX       ; 0041dfde
    FLD float ptr [EDX + 0x4]           ; 0041dfe2
        ;   Label: LAB_0041dfe2
    FCOMP float ptr [ESP + 0x10]        ; 0041dfe5
    FNSTSW AX                           ; 0041dfe9
    SAHF                                ; 0041dfeb
    JBE 0x0041dff5                      ; 0041dfec
        ;   XREF to: 0041dff5 (CONDITIONAL_JUMP)  ; LAB_0041dff5
    MOV EAX,dword ptr [EDX + 0x4]       ; 0041dfee
    MOV dword ptr [ESP + 0x10],EAX      ; 0041dff1
    FLD float ptr [EDX + 0x8]           ; 0041dff5
        ;   Label: LAB_0041dff5
    FCOMP float ptr [ESP + 0x14]        ; 0041dff8
    FNSTSW AX                           ; 0041dffc
    SAHF                                ; 0041dffe
    JBE 0x0041e008                      ; 0041dfff
        ;   XREF to: 0041e008 (CONDITIONAL_JUMP)  ; LAB_0041e008
    MOV EAX,dword ptr [EDX + 0x8]       ; 0041e001
    MOV dword ptr [ESP + 0x14],EAX      ; 0041e004
    INC ECX                             ; 0041e008
        ;   Label: LAB_0041e008
    ADD EDX,0xc                         ; 0041e009
    CMP ECX,EBX                         ; 0041e00c
    JL 0x0041df9a                       ; 0041e00e
        ;   XREF to: 0041df9a (CONDITIONAL_JUMP)  ; LAB_0041df9a
    FLD float ptr [ESP + 0xc]           ; 0041e010
        ;   Label: LAB_0041e010
    FLD float ptr [ESP + 0x10]          ; 0041e014
    FLD float ptr [ESP + 0x14]          ; 0041e018
    MOV EAX,ESP                         ; 0041e01c
    LEA EDX,[ESI + 0xa4]                ; 0041e01e
    FXCH ST2                            ; 0041e024
    FSUB float ptr [ESP + 0x18]         ; 0041e026
    FXCH                                ; 0041e02a
    FSUB float ptr [ESP + 0x1c]         ; 0041e02c
    FXCH ST2                            ; 0041e030
    FSUB float ptr [ESP + 0x20]         ; 0041e032
    FXCH ST2                            ; 0041e036
    FSTP float ptr [ESP + 0x4]          ; 0041e038
    FXCH                                ; 0041e03c
    FSTP float ptr [ESP + 0x8]          ; 0041e03e
    FSTP float ptr [ESP]                ; 0041e042
    CMP EDX,EAX                         ; 0041e045
    JZ 0x0041e05c                       ; 0041e047
        ;   XREF to: 0041e05c (CONDITIONAL_JUMP)  ; LAB_0041e05c
    MOV EAX,dword ptr [ESP]             ; 0041e049
    MOV dword ptr [EDX],EAX             ; 0041e04c
    MOV EAX,dword ptr [ESP + 0x4]       ; 0041e04e
    MOV dword ptr [EDX + 0x4],EAX       ; 0041e052
    MOV EAX,dword ptr [ESP + 0x8]       ; 0041e055
    MOV dword ptr [EDX + 0x8],EAX       ; 0041e059
    XOR ECX,ECX                         ; 0041e05c
        ;   Label: LAB_0041e05c
    MOV dword ptr [ESI + 0xb0],EBX      ; 0041e05e
    TEST EBX,EBX                        ; 0041e064
    JLE 0x0041e091                      ; 0041e066
        ;   XREF to: 0041e091 (CONDITIONAL_JUMP)  ; LAB_0041e091
    MOV EAX,dword ptr [ESP + 0x48]      ; 0041e068
    LEA EDX,[ESI + 0xb4]                ; 0041e06c
    CMP EDX,EAX                         ; 0041e072
        ;   Label: LAB_0041e072
    JZ 0x0041e086                       ; 0041e074
        ;   XREF to: 0041e086 (CONDITIONAL_JUMP)  ; LAB_0041e086
    MOV EDI,dword ptr [EAX]             ; 0041e076
    MOV dword ptr [EDX],EDI             ; 0041e078
    MOV EDI,dword ptr [EAX + 0x4]       ; 0041e07a
    MOV dword ptr [EDX + 0x4],EDI       ; 0041e07d
    MOV EDI,dword ptr [EAX + 0x8]       ; 0041e080
    MOV dword ptr [EDX + 0x8],EDI       ; 0041e083
    ADD EDX,0x34                        ; 0041e086
        ;   Label: LAB_0041e086
    INC ECX                             ; 0041e089
    ADD EAX,0xc                         ; 0041e08a
    CMP ECX,EBX                         ; 0041e08d
    JL 0x0041e072                       ; 0041e08f
        ;   XREF to: 0041e072 (CONDITIONAL_JUMP)  ; LAB_0041e072
    MOV EBP,dword ptr [ESP + 0x40]      ; 0041e091
        ;   Label: LAB_0041e091
    PUSH dword ptr [ESP + 0x4c]         ; 0041e095
    PUSH EBP                            ; 0041e099
    MOV EAX,dword ptr [ESP + 0x44]      ; 0041e09a
    PUSH EAX                            ; 0041e09e
    PUSH ESI                            ; 0041e09f
    CALL core_box.cpp_CBox_updateTransform_FUN_0041e0e0 ; 0041e0a0
        ;   XREF to: 0041e0e0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_updateTransform_FUN_0041e0e0(CBox * this_ptr, CVector3f * new_position, CVector3f * new_orientation, float speed)
    ADD ESP,0x10                        ; 0041e0a5
    ADD ESP,0x24                        ; 0041e0a8
    POP EBP                             ; 0041e0ab
    POP EDI                             ; 0041e0ac
    POP ESI                             ; 0041e0ad
    POP EBX                             ; 0041e0ae
    RET                                 ; 0041e0af
    MOV EDX,0x616477                    ; 0041e0b0 | = "..\\core\\box.cpp"
        ;   Label: LAB_0041e0b0
    MOV ECX,0x80                        ; 0041e0b5
    PUSH 0x616487                       ; 0041e0ba | = "CBox::setupN - Too many scrape points"
    MOV dword ptr [0x02f0ca48],EDX      ; 0041e0bf | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0041e0c5 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0041e0cb
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0041e0d0
    JMP 0x0041df68                      ; 0041e0d3
        ;   XREF to: 0041df68 (UNCONDITIONAL_JUMP)  ; LAB_0041df68

