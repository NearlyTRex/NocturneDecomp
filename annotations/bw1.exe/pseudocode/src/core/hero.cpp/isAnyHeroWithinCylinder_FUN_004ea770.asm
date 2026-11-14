; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hero_cpp_isAnyHeroWithinCylinder_FUN_004ea770(CVector3f *point,float horizontal_radius,float vertical_tolerance)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   point
; float            Stack[0x8]:4   horizontal_radius
; float            Stack[0xc]:4   vertical_tolerance
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 at 0042e3b1
;
; Referenced Globals:
;   undefined4 DAT_01d06aa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ea770
        ;   Label: core_hero.cpp_isAnyHeroWithinCylinder_FUN_004ea770
    PUSH ESI                            ; 004ea771
    PUSH EDI                            ; 004ea772
    PUSH EBP                            ; 004ea773
    MOV EBP,ESP                         ; 004ea774
    SUB ESP,0x1c                        ; 004ea776
    AND ESP,0xfffffff8                  ; 004ea779
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004ea77c
    MOV ECX,dword ptr [EBP + 0x14]      ; 004ea77f
    MOV dword ptr [ESP],EAX             ; 004ea782
    FLD float ptr [EBP + 0x18]          ; 004ea785
    FMUL ST0                            ; 004ea788
    MOV EDX,dword ptr [0x01d06aa0]      ; 004ea78a | DAT_01d06aa0
    FSTP float ptr [EBP + 0x18]         ; 004ea790
    TEST EDX,EDX                        ; 004ea793
    JLE 0x004ea7b3                      ; 004ea795
        ;   XREF to: 004ea7b3 (CONDITIONAL_JUMP)  ; LAB_004ea7b3
    MOV EBX,dword ptr [0x01d06aa0]      ; 004ea797 | DAT_01d06aa0
    XOR EDX,EDX                         ; 004ea79d
    SHL EBX,0x2                         ; 004ea79f
    MOV ESI,dword ptr [EDX + 0x1d06aa4] ; 004ea7a2
        ;   Label: LAB_004ea7a2
    TEST ESI,ESI                        ; 004ea7a8
    JNZ 0x004ea7bc                      ; 004ea7aa
        ;   XREF to: 004ea7bc (CONDITIONAL_JUMP)  ; LAB_004ea7bc
    ADD EDX,0x4                         ; 004ea7ac
        ;   Label: LAB_004ea7ac
    CMP EDX,EBX                         ; 004ea7af
    JL 0x004ea7a2                       ; 004ea7b1
        ;   XREF to: 004ea7a2 (CONDITIONAL_JUMP)  ; LAB_004ea7a2
    XOR EAX,EAX                         ; 004ea7b3
        ;   Label: LAB_004ea7b3
    MOV ESP,EBP                         ; 004ea7b5
    POP EBP                             ; 004ea7b7
    POP EDI                             ; 004ea7b8
    POP ESI                             ; 004ea7b9
    POP EBX                             ; 004ea7ba
    RET                                 ; 004ea7bb
    MOV EAX,ESI                         ; 004ea7bc
        ;   Label: LAB_004ea7bc
    LEA EDI,[ESP + 0x4]                 ; 004ea7be
    FLD float ptr [EAX + 0x20]          ; 004ea7c2
    FLD float ptr [EAX + 0x24]          ; 004ea7c5
    FLD float ptr [EAX + 0x28]          ; 004ea7c8
    LEA ESI,[ESP + 0x10]                ; 004ea7cb
    FXCH ST2                            ; 004ea7cf
    FSUB float ptr [ECX]                ; 004ea7d1
    FXCH                                ; 004ea7d3
    FSUB float ptr [ECX + 0x4]          ; 004ea7d5
    FXCH ST2                            ; 004ea7d8
    FSUB float ptr [ECX + 0x8]          ; 004ea7da
    FXCH                                ; 004ea7dd
    FSTP float ptr [ESP + 0x10]         ; 004ea7df
    FXCH                                ; 004ea7e3
    FSTP float ptr [ESP + 0x14]         ; 004ea7e5
    FSTP float ptr [ESP + 0x18]         ; 004ea7e9
    MOVSD ES:EDI,ESI                    ; 004ea7ed
    MOVSD ES:EDI,ESI                    ; 004ea7ee
    MOVSD ES:EDI,ESI                    ; 004ea7ef
    FLD float ptr [ESP + 0x8]           ; 004ea7f0
    FABS                                ; 004ea7f4
    FLD float ptr [ESP]                 ; 004ea7f6
    FCOMPP                              ; 004ea7f9
    FNSTSW AX                           ; 004ea7fb
    SAHF                                ; 004ea7fd
    JC 0x004ea7ac                       ; 004ea7fe
        ;   XREF to: 004ea7ac (CONDITIONAL_JUMP)  ; LAB_004ea7ac
    FLD float ptr [ESP + 0xc]           ; 004ea800
    FMUL ST0                            ; 004ea804
    FLD float ptr [ESP + 0x4]           ; 004ea806
    FMUL ST0                            ; 004ea80a
    FADDP                               ; 004ea80c
    FCOMP float ptr [EBP + 0x18]        ; 004ea80e
    FNSTSW AX                           ; 004ea811
    SAHF                                ; 004ea813
    JNC 0x004ea7ac                      ; 004ea814
        ;   XREF to: 004ea7ac (CONDITIONAL_JUMP)  ; LAB_004ea7ac
    MOV EAX,0x1                         ; 004ea816
    MOV ESP,EBP                         ; 004ea81b
    POP EBP                             ; 004ea81d
    POP EDI                             ; 004ea81e
    POP ESI                             ; 004ea81f
    POP EBX                             ; 004ea820
    RET                                 ; 004ea821

