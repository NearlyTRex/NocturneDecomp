; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_onLaserHit_FUN_005097e0(CMansionPuzzleCircle *this_ptr,SLaserInfo *laser_info)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; SLaserInfo *     Stack[0x8]:4   laser_info
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
;
; Referenced Globals:
;   double DOUBLE_006356fd = 0.00392156862745098
;   double DOUBLE_00635705 = 0.25
;
; Called Functions:
;   core_actor.cpp_CDemonActor_onLaserHit_FUN_00409840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005097e0
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_onLaserHit_FUN_005097e0
    PUSH ESI                            ; 005097e1
    PUSH EDI                            ; 005097e2
    PUSH EBP                            ; 005097e3
    MOV EBP,ESP                         ; 005097e4
    SUB ESP,0x24                        ; 005097e6
    AND ESP,0xfffffff8                  ; 005097e9
    MOV EBX,dword ptr [EBP + 0x18]      ; 005097ec
    PUSH EBX                            ; 005097ef
    MOV EDX,dword ptr [EBP + 0x14]      ; 005097f0
    PUSH EDX                            ; 005097f3
    CALL core_actor.cpp_CDemonActor_onLaserHit_FUN_00409840 ; 005097f4
        ;   XREF to: 00409840 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_onLaserHit_FUN_00409840(CDemonActor * this_ptr, SLaserInfo * laser_info)
    ADD ESP,0x8                         ; 005097f9
    XOR ESI,ESI                         ; 005097fc
    MOV EDX,dword ptr [EBP + 0x14]      ; 005097fe
    LEA ECX,[EBX + 0x2c]                ; 00509801
    ADD EDX,0x135c                      ; 00509804
    FLD float ptr [EDX]                 ; 0050980a
        ;   Label: LAB_0050980a
    FSUB float ptr [ECX]                ; 0050980c
    FMUL ST0                            ; 0050980e
    FLD float ptr [EDX + 0x4]           ; 00509810
    FSUB float ptr [ECX + 0x4]          ; 00509813
    FMUL ST0                            ; 00509816
    FLD float ptr [EDX + 0x8]           ; 00509818
    FXCH                                ; 0050981b
    FADDP ST2,ST0                       ; 0050981d
    FSUB float ptr [ECX + 0x8]          ; 0050981f
    FMUL ST0                            ; 00509822
    FADDP                               ; 00509824
    FLD1                                ; 00509826
    FCOMPP                              ; 00509828
    FNSTSW AX                           ; 0050982a
    SAHF                                ; 0050982c
    JA 0x005098a3                       ; 0050982d
        ;   XREF to: 005098a3 (CONDITIONAL_JUMP)  ; LAB_005098a3
    INC ESI                             ; 00509833
    ADD EDX,0x60                        ; 00509834
    CMP ESI,0x2                         ; 00509837
    JL 0x0050980a                       ; 0050983a
        ;   XREF to: 0050980a (CONDITIONAL_JUMP)  ; LAB_0050980a
    CMP dword ptr [EBX + 0x8],0x2       ; 0050983c
    JNZ 0x0050989c                      ; 00509840
        ;   XREF to: 0050989c (CONDITIONAL_JUMP)  ; LAB_0050989c
    MOV EDX,dword ptr [EBP + 0x14]      ; 00509842
    MOV ECX,dword ptr [EBP + 0x14]      ; 00509845
    LEA EDI,[EBX + 0x2c]                ; 00509848
    XOR ESI,ESI                         ; 0050984b
    ADD EDX,0xaa0                       ; 0050984d
    ADD ECX,0xac4                       ; 00509853
    MOV dword ptr [ESP + 0x18],EDX      ; 00509859
    IMUL EDX,ESI,0xb8                   ; 0050985d
        ;   Label: LAB_0050985d
    FLD float ptr [ECX]                 ; 00509863
    FSUB float ptr [EDI]                ; 00509865
    FMUL ST0                            ; 00509867
    FLD float ptr [ECX + 0x4]           ; 00509869
    FSUB float ptr [EDI + 0x4]          ; 0050986c
    FMUL ST0                            ; 0050986f
    FLD float ptr [ECX + 0x8]           ; 00509871
    FXCH                                ; 00509874
    FADDP ST2,ST0                       ; 00509876
    FSUB float ptr [EDI + 0x8]          ; 00509878
    FMUL ST0                            ; 0050987b
    MOV EAX,dword ptr [ESP + 0x18]      ; 0050987d
    FADDP                               ; 00509881
    ADD EDX,EAX                         ; 00509883
    FCOMP double ptr [0x00635705]       ; 00509885 | DOUBLE_00635705
    FNSTSW AX                           ; 0050988b
    SAHF                                ; 0050988d
    JC 0x005098ac                       ; 0050988e
        ;   XREF to: 005098ac (CONDITIONAL_JUMP)  ; LAB_005098ac
    INC ESI                             ; 00509890
        ;   Label: LAB_00509890
    ADD ECX,0xb8                        ; 00509891
    CMP ESI,0xc                         ; 00509897
    JL 0x0050985d                       ; 0050989a
        ;   XREF to: 0050985d (CONDITIONAL_JUMP)  ; LAB_0050985d
    MOV ESP,EBP                         ; 0050989c
        ;   Label: LAB_0050989c
    POP EBP                             ; 0050989e
    POP EDI                             ; 0050989f
    POP ESI                             ; 005098a0
    POP EBX                             ; 005098a1
    RET                                 ; 005098a2
    MOV dword ptr [EBX + 0x50],0x3f800000 ; 005098a3
        ;   Label: LAB_005098a3
    JMP 0x0050989c                      ; 005098aa
        ;   XREF to: 0050989c (UNCONDITIONAL_JUMP)  ; LAB_0050989c
    FILD dword ptr [EBX + 0xc]          ; 005098ac
        ;   Label: LAB_005098ac
    FMUL float ptr [EBX]                ; 005098af
    FMUL float ptr [EDX]                ; 005098b1
    FLD double ptr [0x006356fd]         ; 005098b3 | DOUBLE_006356fd
    FXCH                                ; 005098b9
    FMUL ST1                            ; 005098bb
    FADD float ptr [EDX + 0x18]         ; 005098bd
    FSTP float ptr [EDX + 0x18]         ; 005098c0
    FILD dword ptr [EBX + 0x10]         ; 005098c3
    FMUL float ptr [EBX]                ; 005098c6
    FMUL float ptr [EDX + 0x4]          ; 005098c8
    FMUL ST1                            ; 005098cb
    FADD float ptr [EDX + 0x1c]         ; 005098cd
    FSTP float ptr [EDX + 0x1c]         ; 005098d0
    FILD dword ptr [EBX + 0x14]         ; 005098d3
    FMUL float ptr [EBX]                ; 005098d6
    FMUL float ptr [EDX + 0x8]          ; 005098d8
    FMULP                               ; 005098db
    FADD float ptr [EDX + 0x20]         ; 005098dd
    FSTP float ptr [EDX + 0x20]         ; 005098e0
    JMP 0x00509890                      ; 005098e3
        ;   XREF to: 00509890 (UNCONDITIONAL_JUMP)  ; LAB_00509890

