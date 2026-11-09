; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_carved_cpp_FUN_004286c0(int param_1,undefined4 *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005b7e23
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;   core_motion.cpp_FUN_004fc350
;   core_skeleton.cpp_FUN_0054dcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004286c0
        ;   Label: core_carved.cpp_FUN_004286c0
    PUSH EBP                            ; 004286c1
    SUB ESP,0x7c                        ; 004286c2
    MOV EBP,dword ptr [ESP + 0x88]      ; 004286c5
    PUSH 0xc                            ; 004286cc
    LEA EBX,[EBP + 0x158]               ; 004286ce
    PUSH EBX                            ; 004286d4
    CALL core_motion.cpp_FUN_004fc350   ; 004286d5
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc350()
    MOV dword ptr [ESP + 0x80],EAX      ; 004286da
    FLD float ptr [ESP + 0x80]          ; 004286e1
    FLDZ                                ; 004286e8
    ADD ESP,0x8                         ; 004286ea
    FCOMPP                              ; 004286ed
    FNSTSW AX                           ; 004286ef
    SAHF                                ; 004286f1
    JC 0x004286fc                       ; 004286f2
        ;   XREF to: 004286fc (CONDITIONAL_JUMP)  ; LAB_004286fc
    XOR EAX,EAX                         ; 004286f4
    ADD ESP,0x7c                        ; 004286f6
    POP EBP                             ; 004286f9
    POP EBX                             ; 004286fa
    RET                                 ; 004286fb
    PUSH EDI                            ; 004286fc
        ;   Label: LAB_004286fc
    PUSH ESI                            ; 004286fd
    MOV EDX,dword ptr [EBP + 0xd07c]    ; 004286fe
    PUSH EDX                            ; 00428704
    PUSH EBX                            ; 00428705
    LEA ESI,[ESP + 0x70]                ; 00428706
    LEA EDI,[ESP + 0x10]                ; 0042870a
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 0042870e
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    LEA ESI,[ESP + 0x70]                ; 00428713
    ADD ESP,0x8                         ; 00428717
    MOVSD ES:EDI,ESI                    ; 0042871a
    MOVSD ES:EDI,ESI                    ; 0042871b
    MOVSD ES:EDI,ESI                    ; 0042871c
    MOV ECX,dword ptr [EBP + 0xd080]    ; 0042871d
    PUSH ECX                            ; 00428723
    PUSH EBX                            ; 00428724
    LEA ESI,[ESP + 0x40]                ; 00428725
    LEA EDI,[ESP + 0x58]                ; 00428729
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 0042872d
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    ADD ESP,0x8                         ; 00428732
    LEA ESI,[ESP + 0x38]                ; 00428735
    FLD float ptr [ESP + 0x8]           ; 00428739
    FLD float ptr [ESP + 0xc]           ; 0042873d
    MOVSD ES:EDI,ESI                    ; 00428741
    MOVSD ES:EDI,ESI                    ; 00428742
    MOVSD ES:EDI,ESI                    ; 00428743
    FLD float ptr [ESP + 0x10]          ; 00428744
    LEA EDI,[ESP + 0x44]                ; 00428748
    LEA ESI,[ESP + 0x74]                ; 0042874c
    FXCH ST2                            ; 00428750
    FADD float ptr [ESP + 0x50]         ; 00428752
    FXCH                                ; 00428756
    FADD float ptr [ESP + 0x54]         ; 00428758
    FXCH ST2                            ; 0042875c
    FADD float ptr [ESP + 0x58]         ; 0042875e
    FXCH                                ; 00428762
    FSTP float ptr [ESP + 0x74]         ; 00428764
    FXCH                                ; 00428768
    FSTP float ptr [ESP + 0x78]         ; 0042876a
    FSTP float ptr [ESP + 0x7c]         ; 0042876e
    MOVSD ES:EDI,ESI                    ; 00428772
    MOVSD ES:EDI,ESI                    ; 00428773
    MOVSD ES:EDI,ESI                    ; 00428774
    FLD float ptr [0x005b7e23]          ; 00428775 | DAT_005b7e23
    FLD float ptr [ESP + 0x44]          ; 0042877b
    FMUL ST1                            ; 0042877f
    FLD float ptr [ESP + 0x48]          ; 00428781
    FMUL ST2                            ; 00428785
    LEA EAX,[ESP + 0x20]                ; 00428787
    FLD float ptr [ESP + 0x4c]          ; 0042878b
    FMULP ST3                           ; 0042878f
    PUSH EAX                            ; 00428791
    LEA EDI,[ESP + 0x24]                ; 00428792
    LEA ESI,[ESP + 0x18]                ; 00428796
    FXCH                                ; 0042879a
    FSTP float ptr [ESP + 0x18]         ; 0042879c
    FSTP float ptr [ESP + 0x1c]         ; 004287a0
    FSTP float ptr [ESP + 0x20]         ; 004287a4
    MOVSD ES:EDI,ESI                    ; 004287a8
    MOVSD ES:EDI,ESI                    ; 004287a9
    MOVSD ES:EDI,ESI                    ; 004287aa
    PUSH EBP                            ; 004287ab
    LEA ESI,[ESP + 0x64]                ; 004287ac
    LEA EDI,[ESP + 0x34]                ; 004287b0
    CALL core_actor.cpp_FUN_00408b80    ; 004287b4
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x64]                ; 004287b9
    ADD ESP,0x8                         ; 004287bd
    LEA EAX,[ESP + 0x2c]                ; 004287c0
    MOV EBX,dword ptr [ESP + 0x94]      ; 004287c4
    MOVSD ES:EDI,ESI                    ; 004287cb
    MOVSD ES:EDI,ESI                    ; 004287cc
    MOVSD ES:EDI,ESI                    ; 004287cd
    CMP EAX,EBX                         ; 004287ce
    JZ 0x004287e6                       ; 004287d0
        ;   XREF to: 004287e6 (CONDITIONAL_JUMP)  ; LAB_004287e6
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004287d2
    MOV dword ptr [EBX],EAX             ; 004287d6
    MOV EAX,dword ptr [ESP + 0x30]      ; 004287d8
    MOV dword ptr [EBX + 0x4],EAX       ; 004287dc
    MOV EAX,dword ptr [ESP + 0x34]      ; 004287df
    MOV dword ptr [EBX + 0x8],EAX       ; 004287e3
    MOV EAX,0x1                         ; 004287e6
        ;   Label: LAB_004287e6
    POP ESI                             ; 004287eb
    POP EDI                             ; 004287ec
    ADD ESP,0x7c                        ; 004287ed
    POP EBP                             ; 004287f0
    POP EBX                             ; 004287f1
    RET                                 ; 004287f2

