; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_elephant_cpp_FUN_004876d0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005bd9dc
;   undefined4 DAT_005bd9e0
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fc5a0
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408b80
;   core_fire.cpp_CFireEffect_createLaserCone_FUN_004a2b10
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004876d0
        ;   Label: core_elephant.cpp_FUN_004876d0
    PUSH ESI                            ; 004876d1
    PUSH EDI                            ; 004876d2
    PUSH EBP                            ; 004876d3
    MOV EBP,ESP                         ; 004876d4
    SUB ESP,0xb0                        ; 004876d6
    AND ESP,0xfffffff8                  ; 004876dc
    MOV EBX,dword ptr [EBP + 0x14]      ; 004876df
    MOV EDX,dword ptr [0x005f2afc]      ; 004876e2 | DAT_005f2afc
    PUSH EDX                            ; 004876e8 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540 ; 004876e9
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004876ee
    TEST EAX,EAX                        ; 004876f1
    JZ 0x004876fc                       ; 004876f3
        ;   XREF to: 004876fc (CONDITIONAL_JUMP)  ; LAB_004876fc
    MOV ESP,EBP                         ; 004876f5
    POP EBP                             ; 004876f7
    POP EDI                             ; 004876f8
    POP ESI                             ; 004876f9
    POP EBX                             ; 004876fa
    RET                                 ; 004876fb
    PUSH EBX                            ; 004876fc
        ;   Label: LAB_004876fc
    MOV EAX,dword ptr [EBX + 0x154]     ; 004876fd
    LEA ESI,[ESP + 0x88]                ; 00487703
    LEA EDI,[ESP + 0x28]                ; 0048770a
    CALL dword ptr [EAX + 0xe0]         ; 0048770e
    ADD ESP,0x4                         ; 00487714
    LEA EAX,[ESP + 0x24]                ; 00487717
    LEA ESI,[ESP + 0x84]                ; 0048771b
    PUSH EAX                            ; 00487722
    MOVSD ES:EDI,ESI                    ; 00487723
    MOVSD ES:EDI,ESI                    ; 00487724
    MOVSD ES:EDI,ESI                    ; 00487725
    PUSH EBX                            ; 00487726
    LEA ESI,[ESP + 0x14]                ; 00487727
    LEA EDI,[ESP + 0x8]                 ; 0048772b
    CALL core_actor.cpp_FUN_00408b80    ; 0048772f
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x14]                ; 00487734
    ADD ESP,0x8                         ; 00487738
    MOVSD ES:EDI,ESI                    ; 0048773b
    MOVSD ES:EDI,ESI                    ; 0048773c
    MOVSD ES:EDI,ESI                    ; 0048773d
    MOV EAX,dword ptr [EBX + 0x2e8]     ; 0048773e
    MOV dword ptr [ESP + 0x38],EAX      ; 00487744
    LEA EAX,[ESP + 0x30]                ; 00487748
    XOR ECX,ECX                         ; 0048774c
    PUSH EAX                            ; 0048774e
    LEA ESI,[ESP + 0xa0]                ; 0048774f
    LEA EDI,[ESP + 0x58]                ; 00487756
    PUSH EBX                            ; 0048775a
    MOV dword ptr [ESP + 0x38],ECX      ; 0048775b
    MOV dword ptr [ESP + 0x3c],ECX      ; 0048775f
    CALL core_actor.cpp_FUN_00408b00    ; 00487763
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    ADD ESP,0x8                         ; 00487768
    LEA ESI,[ESP + 0x9c]                ; 0048776b
    FLD float ptr [ESP]                 ; 00487772
    FLD float ptr [ESP + 0x4]           ; 00487775
    MOVSD ES:EDI,ESI                    ; 00487779
    MOVSD ES:EDI,ESI                    ; 0048777a
    MOVSD ES:EDI,ESI                    ; 0048777b
    FLD float ptr [ESP + 0x8]           ; 0048777c
    FLD float ptr [ESP + 0x54]          ; 00487780
    FLD float ptr [ESP + 0x58]          ; 00487784
    FLD float ptr [ESP + 0x5c]          ; 00487788
    LEA EDI,[ESP + 0x60]                ; 0048778c
    LEA ESI,[ESP + 0x90]                ; 00487790
    FXCH ST2                            ; 00487797
    FCHS                                ; 00487799
    FXCH                                ; 0048779b
    FCHS                                ; 0048779d
    FXCH ST2                            ; 0048779f
    FCHS                                ; 004877a1
    FXCH ST5                            ; 004877a3
    FADD float ptr [ESP + 0x54]         ; 004877a5
    FXCH ST4                            ; 004877a9
    FADD float ptr [ESP + 0x58]         ; 004877ab
    FXCH ST3                            ; 004877af
    FADD float ptr [ESP + 0x5c]         ; 004877b1
    FXCH                                ; 004877b5
    FSTP float ptr [ESP + 0x78]         ; 004877b7
    FXCH ST3                            ; 004877bb
    FSTP float ptr [ESP + 0x90]         ; 004877bd
    FXCH                                ; 004877c4
    FSTP float ptr [ESP + 0x94]         ; 004877c6
    FXCH                                ; 004877cd
    FSTP float ptr [ESP + 0x98]         ; 004877cf
    MOVSD ES:EDI,ESI                    ; 004877d6
    MOVSD ES:EDI,ESI                    ; 004877d7
    MOVSD ES:EDI,ESI                    ; 004877d8
    FSTP float ptr [ESP + 0x7c]         ; 004877d9
    LEA EDI,[ESP + 0x3c]                ; 004877dd
    LEA ESI,[ESP + 0x78]                ; 004877e1
    FSTP float ptr [ESP + 0x80]         ; 004877e5
    MOVSD ES:EDI,ESI                    ; 004877ec
    MOVSD ES:EDI,ESI                    ; 004877ed
    MOVSD ES:EDI,ESI                    ; 004877ee
    LEA EAX,[ESP + 0x48]                ; 004877ef
    LEA ESI,[ESP + 0x3c]                ; 004877f3
    CMP EAX,ESI                         ; 004877f7
    JZ 0x00487813                       ; 004877f9
        ;   XREF to: 00487813 (CONDITIONAL_JUMP)  ; LAB_00487813
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004877fb
    MOV dword ptr [ESP + 0x48],EAX      ; 004877ff
    MOV EAX,dword ptr [ESP + 0x40]      ; 00487803
    MOV dword ptr [ESP + 0x4c],EAX      ; 00487807
    MOV EAX,dword ptr [ESP + 0x44]      ; 0048780b
    MOV dword ptr [ESP + 0x50],EAX      ; 0048780f
    FLD float ptr [ESP + 0x4c]          ; 00487813
        ;   Label: LAB_00487813
    FMUL ST0                            ; 00487817
    FLD float ptr [ESP + 0x48]          ; 00487819
    FMUL ST0                            ; 0048781d
    FADDP                               ; 0048781f
    FLD float ptr [ESP + 0x50]          ; 00487821
    FMUL ST0                            ; 00487825
    FADDP                               ; 00487827
    FSQRT                               ; 00487829
    FLDZ                                ; 0048782b
    FXCH                                ; 0048782d
    FSTP float ptr [ESP + 0xa8]         ; 0048782f
    FCOMP float ptr [ESP + 0xa8]        ; 00487836
    FNSTSW AX                           ; 0048783d
    SAHF                                ; 0048783f
    JNC 0x00487919                      ; 00487840
        ;   XREF to: 00487919 (CONDITIONAL_JUMP)  ; LAB_00487919
    FLD1                                ; 00487846
    FLD float ptr [ESP + 0x48]          ; 00487848
    FXCH                                ; 0048784c
    FDIV float ptr [ESP + 0xa8]         ; 0048784e
    FXCH                                ; 00487855
    FMUL ST1                            ; 00487857
    FLD float ptr [ESP + 0x4c]          ; 00487859
    FMUL ST2                            ; 0048785d
    FLD float ptr [ESP + 0x50]          ; 0048785f
    FMULP ST3                           ; 00487863
    FXCH                                ; 00487865
    FSTP float ptr [ESP + 0x48]         ; 00487867
    FSTP float ptr [ESP + 0x4c]         ; 0048786b
    FSTP float ptr [ESP + 0x50]         ; 0048786f
    FLD float ptr [EBX + 0x594]         ; 00487873
        ;   Label: LAB_00487873
    FMUL float ptr [0x005bd9dc]         ; 00487879 | DAT_005bd9dc
    FMUL float ptr [0x005bd9e0]         ; 0048787f | DAT_005bd9e0
    SUB ESP,0x4                         ; 00487885
    FSTP float ptr [ESP]                ; 00487888
    PUSH 0x0                            ; 0048788b
    PUSH 0xff                           ; 0048788d
    PUSH 0x0                            ; 00487892
    LEA EAX,[ESP + 0x70]                ; 00487894
    PUSH 0x3f800000                     ; 00487898
    PUSH EAX                            ; 0048789d
    LEA EAX,[ESP + 0x18]                ; 0048789e
    PUSH EAX                            ; 004878a2
    MOV ECX,dword ptr [0x005fc5a0]      ; 004878a3 | DAT_005fc5a0
    PUSH ECX                            ; 004878a9
    LEA EDI,[ESP + 0x38]                ; 004878aa
    CALL core_fire.cpp_CFireEffect_createLaserCone_FUN_004a2b10 ; 004878ae
        ;   XREF to: 004a2b10 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLaserCone_FUN_004a2b10(CFireEffect * this_ptr, CVector3f * origin, CVector3f * hit_position, float beam_width, ...)
    ADD ESP,0x20                        ; 004878b3
    MOV dword ptr [EBX + 0x598],0x1     ; 004878b6
    LEA ESI,[ESP + 0x6c]                ; 004878c0
    FLD float ptr [ESP + 0x60]          ; 004878c4
    FLD float ptr [ESP + 0x64]          ; 004878c8
    FLD float ptr [ESP + 0x68]          ; 004878cc
    FXCH ST2                            ; 004878d0
    FSUB float ptr [ESP]                ; 004878d2
    FXCH                                ; 004878d5
    FSUB float ptr [ESP + 0x4]          ; 004878d7
    FXCH ST2                            ; 004878db
    FSUB float ptr [ESP + 0x8]          ; 004878dd
    FXCH                                ; 004878e1
    FSTP float ptr [ESP + 0x6c]         ; 004878e3
    FXCH                                ; 004878e7
    FSTP float ptr [ESP + 0x70]         ; 004878e9
    FSTP float ptr [ESP + 0x74]         ; 004878ed
    MOVSD ES:EDI,ESI                    ; 004878f1
    MOVSD ES:EDI,ESI                    ; 004878f2
    MOVSD ES:EDI,ESI                    ; 004878f3
    FLD float ptr [ESP + 0x1c]          ; 004878f4
    FMUL ST0                            ; 004878f8
    FLD float ptr [ESP + 0x18]          ; 004878fa
    FMUL ST0                            ; 004878fe
    FADDP                               ; 00487900
    FLD float ptr [ESP + 0x20]          ; 00487902
    FMUL ST0                            ; 00487906
    FADDP                               ; 00487908
    FSQRT                               ; 0048790a
    FSTP float ptr [EBX + 0x59c]        ; 0048790c
    MOV ESP,EBP                         ; 00487912
    POP EBP                             ; 00487914
    POP EDI                             ; 00487915
    POP ESI                             ; 00487916
    POP EBX                             ; 00487917
    RET                                 ; 00487918
    XOR EDI,EDI                         ; 00487919
        ;   Label: LAB_00487919
    MOV dword ptr [ESP + 0x4c],EDI      ; 0048791b
    MOV dword ptr [ESP + 0x48],EDI      ; 0048791f
    MOV dword ptr [ESP + 0x50],EDI      ; 00487923
    JMP 0x00487873                      ; 00487927
        ;   XREF to: 00487873 (UNCONDITIONAL_JUMP)  ; LAB_00487873

