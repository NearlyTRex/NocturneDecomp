; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flamecan_cpp_CFlameCan_setup_FUN_004a0760(CFlameCan *this_ptr)
;
; Parameters:
; CFlameCan *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005d5955
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408a80
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a0760
        ;   Label: core_flamecan.cpp_CFlameCan_setup_FUN_004a0760
    PUSH ESI                            ; 004a0761
    PUSH EDI                            ; 004a0762
    PUSH EBP                            ; 004a0763
    MOV EBP,ESP                         ; 004a0764
    SUB ESP,0x74                        ; 004a0766
    AND ESP,0xfffffff8                  ; 004a0769
    MOV EBX,dword ptr [EBP + 0x14]      ; 004a076c
    PUSH EBX                            ; 004a076f
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408a80 ; 004a0770
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408a80(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004a0775
    LEA EAX,[EBX + 0x2b4]               ; 004a0778
    PUSH EAX                            ; 004a077e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 004a077f
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004a0784
    LEA ESI,[ESP + 0x28]                ; 004a0787
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004a078b
    PUSH EBX                            ; 004a0791
    MOV dword ptr [EBX + 0x7ac],0x0     ; 004a0792
    LEA EDI,[ESP + 0x14]                ; 004a079c
    CALL dword ptr [EAX + 0x24]         ; 004a07a0
    MOV ECX,0x6                         ; 004a07a3
    LEA ESI,[ESP + 0x2c]                ; 004a07a8
    ADD ESP,0x4                         ; 004a07ac
    LEA EDX,[EBX + 0x4bc]               ; 004a07af
    MOVSD.REP ES:EDI,ESI                ; 004a07b5
    LEA EAX,[EBX + 0x20]                ; 004a07b7
    FLD float ptr [ESP + 0x20]          ; 004a07ba
    FLD float ptr [ESP + 0x1c]          ; 004a07be
    FLD float ptr [ESP + 0x24]          ; 004a07c2
    FLD float ptr [EAX]                 ; 004a07c6
    LEA EDI,[ESP + 0x4c]                ; 004a07c8
    LEA ESI,[ESP + 0x58]                ; 004a07cc
    FSTP float ptr [EDX]                ; 004a07d0
    FLD float ptr [EAX + 0x4]           ; 004a07d2
    FXCH ST3                            ; 004a07d5
    FSUB float ptr [ESP + 0x14]         ; 004a07d7
    FXCH ST2                            ; 004a07db
    FSUB float ptr [ESP + 0x10]         ; 004a07dd
    FXCH                                ; 004a07e1
    FSUB float ptr [ESP + 0x18]         ; 004a07e3
    FXCH ST3                            ; 004a07e7
    FSTP float ptr [EDX + 0x4]          ; 004a07e9
    FXCH                                ; 004a07ec
    FSTP float ptr [ESP + 0x70]         ; 004a07ee
    MOV ECX,dword ptr [EAX + 0x8]       ; 004a07f2
    MOV dword ptr [EDX + 0x8],ECX       ; 004a07f5
    MOV EAX,dword ptr [EAX + 0xc]       ; 004a07f8
    FSTP float ptr [ESP + 0x58]         ; 004a07fb
    MOV dword ptr [EDX + 0xc],EAX       ; 004a07ff
    FSTP float ptr [ESP + 0x60]         ; 004a0802
    FLD float ptr [EBX + 0x4c0]         ; 004a0806
    MOV EAX,dword ptr [ESP + 0x70]      ; 004a080c
    FADD float ptr [ESP + 0x70]         ; 004a0810
    MOV dword ptr [ESP + 0x5c],EAX      ; 004a0814
    FSTP float ptr [EBX + 0x4c0]        ; 004a0818
    MOVSD ES:EDI,ESI                    ; 004a081e
    MOVSD ES:EDI,ESI                    ; 004a081f
    MOVSD ES:EDI,ESI                    ; 004a0820
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004a0821
    LEA EDX,[EBX + 0x750]               ; 004a0825
    MOV dword ptr [ESP + 0x64],EAX      ; 004a082b
    MOV EAX,dword ptr [ESP + 0x50]      ; 004a082f
    LEA EDI,[ESP + 0x40]                ; 004a0833
    MOV dword ptr [ESP + 0x68],EAX      ; 004a0837
    MOV EAX,dword ptr [ESP + 0x54]      ; 004a083b
    LEA ESI,[ESP + 0x64]                ; 004a083f
    MOV dword ptr [ESP + 0x6c],EAX      ; 004a0843
    LEA EAX,[ESP + 0x40]                ; 004a0847
    MOVSD ES:EDI,ESI                    ; 004a084b
    MOVSD ES:EDI,ESI                    ; 004a084c
    MOVSD ES:EDI,ESI                    ; 004a084d
    CMP EDX,EAX                         ; 004a084e
    JNZ 0x004a08a8                      ; 004a0850
        ;   XREF to: 004a08a8 (CONDITIONAL_JUMP)  ; LAB_004a08a8
    FLD float ptr [EBX + 0x750]         ; 004a0852
        ;   Label: LAB_004a0852
    FSTP double ptr [ESP]               ; 004a0858
    MOV dword ptr [EBX + 0x7a0],0x0     ; 004a085b
    FLD double ptr [ESP]                ; 004a0865
    FMUL double ptr [0x005d5955]        ; 004a0868 | DAT_005d5955
    FLD float ptr [EBX + 0x754]         ; 004a086e
    MOV dword ptr [EBX + 0x7a4],0x0     ; 004a0874
    FXCH                                ; 004a087e
    FSTP double ptr [ESP + 0x8]         ; 004a0880
    FCOMP double ptr [ESP + 0x8]        ; 004a0884
    FNSTSW AX                           ; 004a0888
    SAHF                                ; 004a088a
    JC 0x004a08be                       ; 004a088b
        ;   XREF to: 004a08be (CONDITIONAL_JUMP)  ; LAB_004a08be
    MOV dword ptr [EBX + 0x89c],0x0     ; 004a088d
        ;   Label: LAB_004a088d
    MOV dword ptr [EBX + 0xfc],0x1      ; 004a0897
    MOV ESP,EBP                         ; 004a08a1
    POP EBP                             ; 004a08a3
    POP EDI                             ; 004a08a4
    POP ESI                             ; 004a08a5
    POP EBX                             ; 004a08a6
    RET                                 ; 004a08a7
    MOV EAX,dword ptr [ESP + 0x40]      ; 004a08a8
        ;   Label: LAB_004a08a8
    MOV dword ptr [EDX],EAX             ; 004a08ac
    MOV EAX,dword ptr [ESP + 0x44]      ; 004a08ae
    MOV dword ptr [EDX + 0x4],EAX       ; 004a08b2
    MOV EAX,dword ptr [ESP + 0x48]      ; 004a08b5
    MOV dword ptr [EDX + 0x8],EAX       ; 004a08b9
    JMP 0x004a0852                      ; 004a08bc
        ;   XREF to: 004a0852 (UNCONDITIONAL_JUMP)  ; LAB_004a0852
    FLD double ptr [ESP + 0x8]          ; 004a08be
        ;   Label: LAB_004a08be
    FSTP float ptr [EBX + 0x754]        ; 004a08c2
    JMP 0x004a088d                      ; 004a08c8
        ;   XREF to: 004a088d (UNCONDITIONAL_JUMP)  ; LAB_004a088d

