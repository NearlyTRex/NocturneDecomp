; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bugs_cpp_CBugs_FUN_004276c0(CBugs *this_ptr)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[3]:
;   core_bugs.cpp_CBugs_FUN_00425cc0 at 00425fb0
;   core_bugs.cpp_CBugs_FUN_00425fe0 at 00426207
;   core_bugs.cpp_CBugs_processInEditor_FUN_004278d0 at 00427946
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004276c0
        ;   Label: core_bugs.cpp_CBugs_FUN_004276c0
    PUSH ESI                            ; 004276c1
    SUB ESP,0xc                         ; 004276c2
    MOV ESI,dword ptr [ESP + 0x18]      ; 004276c5
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004276c9
    LEA EAX,[ESI + 0x20]                ; 004276cd
    FLD float ptr [EDX]                 ; 004276d0
    FSUB float ptr [EAX]                ; 004276d2
    FSTP float ptr [ESP]                ; 004276d4
    FLD float ptr [EDX + 0x4]           ; 004276d7
    FSUB float ptr [EAX + 0x4]          ; 004276da
    FSTP float ptr [ESP + 0x4]          ; 004276dd
    FLD float ptr [EDX + 0x8]           ; 004276e1
    FSUB float ptr [EAX + 0x8]          ; 004276e4
    FSTP float ptr [ESP + 0x8]          ; 004276e7
    MOV ECX,dword ptr [EDX]             ; 004276eb
    MOV dword ptr [EAX],ECX             ; 004276ed
    MOV ECX,dword ptr [EDX + 0x4]       ; 004276ef
    MOV dword ptr [EAX + 0x4],ECX       ; 004276f2
    MOV ECX,dword ptr [EDX + 0x8]       ; 004276f5
    MOV dword ptr [EAX + 0x8],ECX       ; 004276f8
    MOV EDX,dword ptr [ESI + 0xbec0]    ; 004276fb
    XOR ECX,ECX                         ; 00427701
    TEST EDX,EDX                        ; 00427703
    JLE 0x00427760                      ; 00427705
        ;   XREF to: 00427760 (CONDITIONAL_JUMP)  ; LAB_00427760
    LEA EAX,[ESI + 0xbecc]              ; 00427707
    FLD float ptr [EAX]                 ; 0042770d
        ;   Label: LAB_0042770d
    FSUB float ptr [ESP]                ; 0042770f
    FLD float ptr [EAX + 0x4]           ; 00427712
    FXCH                                ; 00427715
    FSTP float ptr [EAX]                ; 00427717
    FSUB float ptr [ESP + 0x4]          ; 00427719
    FLD float ptr [EAX + 0x8]           ; 0042771d
    FXCH                                ; 00427720
    FSTP float ptr [EAX + 0x4]          ; 00427722
    FSUB float ptr [ESP + 0x8]          ; 00427725
    FLD float ptr [EAX + 0x18]          ; 00427729
    FXCH                                ; 0042772c
    FSTP float ptr [EAX + 0x8]          ; 0042772e
    FSUB float ptr [ESP]                ; 00427731
    FLD float ptr [EAX + 0x1c]          ; 00427734
    FXCH                                ; 00427737
    FSTP float ptr [EAX + 0x18]         ; 00427739
    FSUB float ptr [ESP + 0x4]          ; 0042773c
    FLD float ptr [EAX + 0x20]          ; 00427740
    FXCH                                ; 00427743
    FSTP float ptr [EAX + 0x1c]         ; 00427745
    FSUB float ptr [ESP + 0x8]          ; 00427748
    INC ECX                             ; 0042774c
    FSTP float ptr [EAX + 0x20]         ; 0042774d
    MOV EBX,dword ptr [ESI + 0xbec0]    ; 00427750
    ADD EAX,0x40                        ; 00427756
    CMP ECX,EBX                         ; 00427759
    JL 0x0042770d                       ; 0042775b
        ;   XREF to: 0042770d (CONDITIONAL_JUMP)  ; LAB_0042770d
    LEA EAX,[EAX]                       ; 0042775d
    LEA EAX,[ESI + 0x199cc]             ; 00427760
        ;   Label: LAB_00427760
    FLD float ptr [EAX]                 ; 00427766
    FSUB float ptr [ESP]                ; 00427768
    FLD float ptr [EAX + 0x4]           ; 0042776b
    FXCH                                ; 0042776e
    FSTP float ptr [EAX]                ; 00427770
    FSUB float ptr [ESP + 0x4]          ; 00427772
    FLD float ptr [EAX + 0x8]           ; 00427776
    FXCH                                ; 00427779
    FSTP float ptr [EAX + 0x4]          ; 0042777b
    FSUB float ptr [ESP + 0x8]          ; 0042777e
    FSTP float ptr [EAX + 0x8]          ; 00427782
    LEA EAX,[ESI + 0x199d8]             ; 00427785
    XOR ECX,ECX                         ; 0042778b
    FLD float ptr [EAX]                 ; 0042778d
    FSUB float ptr [ESP]                ; 0042778f
    FLD float ptr [EAX + 0x4]           ; 00427792
    FXCH                                ; 00427795
    FSTP float ptr [EAX]                ; 00427797
    FSUB float ptr [ESP + 0x4]          ; 00427799
    FLD float ptr [EAX + 0x8]           ; 0042779d
    FXCH                                ; 004277a0
    FSTP float ptr [EAX + 0x4]          ; 004277a2
    FSUB float ptr [ESP + 0x8]          ; 004277a5
    LEA EBX,[ESI + 0x30]                ; 004277a9
    FSTP float ptr [EAX + 0x8]          ; 004277ac
    IMUL EAX,ECX,0x30                   ; 004277af
        ;   Label: LAB_004277af
    MOV EDX,EBX                         ; 004277b2
    ADD EAX,ESI                         ; 004277b4
    FLD float ptr [EAX + 0x128b8]       ; 004277b6
        ;   Label: LAB_004277b6
    FSUB float ptr [ESP + 0x4]          ; 004277bc
    ADD EAX,0x4                         ; 004277c0
    FSTP float ptr [EAX + 0x128b4]      ; 004277c3
    CMP EAX,EDX                         ; 004277c9
    JNZ 0x004277b6                      ; 004277cb
        ;   XREF to: 004277b6 (CONDITIONAL_JUMP)  ; LAB_004277b6
    INC ECX                             ; 004277cd
    ADD EBX,0x30                        ; 004277ce
    CMP ECX,0xc                         ; 004277d1
    JL 0x004277af                       ; 004277d4
        ;   XREF to: 004277af (CONDITIONAL_JUMP)  ; LAB_004277af
    ADD ESP,0xc                         ; 004277d6
    POP ESI                             ; 004277d9
    POP EBX                             ; 004277da
    RET                                 ; 004277db

