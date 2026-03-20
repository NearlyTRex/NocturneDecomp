; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_updateTurnBlending_FUN_005bf800(CStranger *this_ptr,float delta_time)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; float            Stack[-0x34]:4  local_34
;
; XREF[1]:
;   core_stranger.cpp_CStranger_processFrame_FUN_005bb960 at 005bc110
;
; Referenced Globals:
;   double DOUBLE_0065389c = 10
;   double DOUBLE_006538a4 = 0.200000000000000
;   double DOUBLE_006538ac = 0.5
;   double DOUBLE_006538b4 = 0.318309886192889
;   double DOUBLE_006538bc = 0.00100000000000000
;   undefined4 g_StrangerIndices[20]
;   undefined4 g_StrangerIndices[21]
;
; Called Functions:
;   core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bf800
        ;   Label: core_stranger.cpp_CStranger_updateTurnBlending_FUN_005bf800
    PUSH ESI                            ; 005bf801
    PUSH EDI                            ; 005bf802
    PUSH EBP                            ; 005bf803
    MOV EBP,ESP                         ; 005bf804
    SUB ESP,0x34                        ; 005bf806
    AND ESP,0xfffffff8                  ; 005bf809
    MOV EBX,dword ptr [EBP + 0x14]      ; 005bf80c
    LEA EAX,[EBX + 0x1fc78]             ; 005bf80f
    MOV dword ptr [EAX + 0x8],0x0       ; 005bf815
    PUSH 0x0                            ; 005bf81c
    MOV EDX,dword ptr [EAX + 0x8]       ; 005bf81e
    MOV dword ptr [EAX + 0x4],EDX       ; 005bf821
    MOV EDX,dword ptr [EAX + 0x4]       ; 005bf824
    MOV dword ptr [EAX],EDX             ; 005bf827
    LEA EAX,[EBX + 0x158]               ; 005bf829
    PUSH EAX                            ; 005bf82f
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 005bf830
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x38],EAX      ; 005bf835
    FLD float ptr [ESP + 0x38]          ; 005bf839
    ADD ESP,0x8                         ; 005bf83d
    FLDZ                                ; 005bf840
    FXCH                                ; 005bf842
    FSTP double ptr [ESP]               ; 005bf844
    FCOMP double ptr [ESP]              ; 005bf847
    FNSTSW AX                           ; 005bf84a
    SAHF                                ; 005bf84c
    JNC 0x005bf9a5                      ; 005bf84d
        ;   XREF to: 005bf9a5 (CONDITIONAL_JUMP)  ; LAB_005bf9a5
    FLD float ptr [EBX + 0x1fc54]       ; 005bf853
    FLD1                                ; 005bf859
    FCOMPP                              ; 005bf85b
    FNSTSW AX                           ; 005bf85d
    SAHF                                ; 005bf85f
    JBE 0x005bf9a5                      ; 005bf860
        ;   XREF to: 005bf9a5 (CONDITIONAL_JUMP)  ; LAB_005bf9a5
    FLD1                                ; 005bf866
    FCOMP double ptr [ESP]              ; 005bf868
    FNSTSW AX                           ; 005bf86b
    SAHF                                ; 005bf86d
    JA 0x005bf9de                       ; 005bf86e
        ;   XREF to: 005bf9de (CONDITIONAL_JUMP)  ; LAB_005bf9de
    MOV EAX,[0x03f6bb1c]                ; 005bf874 | g_StrangerIndices[20]
        ;   Label: LAB_005bf874
    MOV EDX,dword ptr [EBX + 0x1fc84]   ; 005bf879
    MOV dword ptr [EBX + 0x1fc84],EAX   ; 005bf87f
    FLDZ                                ; 005bf885
    FCOMP float ptr [EBX + 0x1fc50]     ; 005bf887
    FNSTSW AX                           ; 005bf88d
    SAHF                                ; 005bf88f
    JBE 0x005bf89d                      ; 005bf890
        ;   XREF to: 005bf89d (CONDITIONAL_JUMP)  ; LAB_005bf89d
    MOV EAX,[0x03f6bb20]                ; 005bf892 | g_StrangerIndices[21]
    MOV dword ptr [EBX + 0x1fc84],EAX   ; 005bf897
    MOV ECX,0x3fcccccd                  ; 005bf89d
        ;   Label: LAB_005bf89d
    FLD float ptr [EBX + 0x1fc54]       ; 005bf8a2
    MOV dword ptr [ESP + 0x1c],ECX      ; 005bf8a8
    FCOMP double ptr [0x006538a4]       ; 005bf8ac | DOUBLE_006538a4
    FNSTSW AX                           ; 005bf8b2
    SAHF                                ; 005bf8b4
    JBE 0x005bfa47                      ; 005bf8b5
        ;   XREF to: 005bfa47 (CONDITIONAL_JUMP)  ; LAB_005bfa47
    FLD float ptr [EBX + 0x1fc5c]       ; 005bf8bb
    FADD float ptr [EBP + 0x18]         ; 005bf8c1
    FSTP float ptr [EBX + 0x1fc5c]      ; 005bf8c4
    FLD float ptr [EBX + 0x1fc58]       ; 005bf8ca
        ;   Label: LAB_005bf8ca
    FLDZ                                ; 005bf8d0
    FCOMPP                              ; 005bf8d2
    FNSTSW AX                           ; 005bf8d4
    SAHF                                ; 005bf8d6
    JC 0x005bf902                       ; 005bf8d7
        ;   XREF to: 005bf902 (CONDITIONAL_JUMP)  ; LAB_005bf902
    FLD float ptr [EBX + 0x1fc54]       ; 005bf8d9
    FCOMP double ptr [0x006538ac]       ; 005bf8df | DOUBLE_006538ac
    FNSTSW AX                           ; 005bf8e5
    SAHF                                ; 005bf8e7
    JC 0x005bfa56                       ; 005bf8e8
        ;   XREF to: 005bfa56 (CONDITIONAL_JUMP)  ; LAB_005bfa56
    FLD float ptr [EBX + 0x1fc54]       ; 005bf8ee
        ;   Label: LAB_005bf8ee
    FLD1                                ; 005bf8f4
    FSUBRP                              ; 005bf8f6
    FMUL float ptr [ESP + 0x1c]         ; 005bf8f8
    FSTP float ptr [EBX + 0x1fc58]      ; 005bf8fc
    FLD float ptr [EBX + 0x1fc58]       ; 005bf902
        ;   Label: LAB_005bf902
    FLDZ                                ; 005bf908
    FCOMPP                              ; 005bf90a
    FNSTSW AX                           ; 005bf90c
    SAHF                                ; 005bf90e
    JNC 0x005bfaa1                      ; 005bf90f
        ;   XREF to: 005bfaa1 (CONDITIONAL_JUMP)  ; LAB_005bfaa1
    MOV EAX,dword ptr [EBX + 0x1fc58]   ; 005bf915
    MOV dword ptr [ESP + 0x28],EAX      ; 005bf91b
    FLD float ptr [ESP + 0x28]          ; 005bf91f
    FSUB float ptr [EBP + 0x18]         ; 005bf923
    FST float ptr [EBX + 0x1fc58]       ; 005bf926
    FLDZ                                ; 005bf92c
    FCOMPP                              ; 005bf92e
    FNSTSW AX                           ; 005bf930
    SAHF                                ; 005bf932
    JC 0x005bfa6e                       ; 005bf933
        ;   XREF to: 005bfa6e (CONDITIONAL_JUMP)  ; LAB_005bfa6e
    FLD float ptr [EBX + 0x1fc54]       ; 005bf939
    FLD1                                ; 005bf93f
    FSUBRP                              ; 005bf941
    MOV dword ptr [EBX + 0x1fc58],0x0   ; 005bf943
    FSTP float ptr [ESP + 0x2c]         ; 005bf94d
        ;   Label: LAB_005bf94d
    MOV EAX,dword ptr [EBX + 0x1fc54]   ; 005bf951
    MOV dword ptr [ESP + 0x10],EAX      ; 005bf957
    FLD float ptr [ESP + 0x10]          ; 005bf95b
    FADD float ptr [ESP + 0x2c]         ; 005bf95f
    FST float ptr [EBX + 0x1fc54]       ; 005bf963
    FLD1                                ; 005bf969
    FCOMPP                              ; 005bf96b
    FNSTSW AX                           ; 005bf96d
    SAHF                                ; 005bf96f
    JA 0x005bfa7a                       ; 005bf970
        ;   XREF to: 005bfa7a (CONDITIONAL_JUMP)  ; LAB_005bfa7a
    MOV dword ptr [EBX + 0x1fc50],0x0   ; 005bf976
    MOV dword ptr [EBX + 0x1fc58],0x0   ; 005bf980
    MOV dword ptr [EBX + 0x1fc5c],0x0   ; 005bf98a
    MOV dword ptr [EBX + 0x1fc54],0x3f800000 ; 005bf994
    MOV ESP,EBP                         ; 005bf99e
        ;   Label: LAB_005bf99e
    POP EBP                             ; 005bf9a0
    POP EDI                             ; 005bf9a1
    POP ESI                             ; 005bf9a2
    POP EBX                             ; 005bf9a3
    RET                                 ; 005bf9a4
    MOV dword ptr [EBX + 0x1fc50],0x0   ; 005bf9a5
        ;   Label: LAB_005bf9a5
    MOV dword ptr [EBX + 0x1fc84],0xffffffff ; 005bf9af
    MOV dword ptr [EBX + 0x1fc58],0x0   ; 005bf9b9
    MOV dword ptr [EBX + 0x1fc5c],0x0   ; 005bf9c3
    MOV dword ptr [EBX + 0x1fc54],0x0   ; 005bf9cd
    MOV ESP,EBP                         ; 005bf9d7
    POP EBP                             ; 005bf9d9
    POP EDI                             ; 005bf9da
    POP ESI                             ; 005bf9db
    POP EBX                             ; 005bf9dc
    RET                                 ; 005bf9dd
    FLD float ptr [EBX + 0x1fc50]       ; 005bf9de
        ;   Label: LAB_005bf9de
    FST double ptr [ESP + 0x8]          ; 005bf9e4
    FABS                                ; 005bf9e8
    FLD1                                ; 005bf9ea
    FSUB double ptr [ESP]               ; 005bf9ec
    FMUL float ptr [EBP + 0x18]         ; 005bf9ef
    FMUL double ptr [0x0065389c]        ; 005bf9f2 | DOUBLE_0065389c
    FST float ptr [ESP + 0x18]          ; 005bf9f8
    FCOMPP                              ; 005bf9fc
    FNSTSW AX                           ; 005bf9fe
    SAHF                                ; 005bfa00
    JBE 0x005bfa12                      ; 005bfa01
        ;   XREF to: 005bfa12 (CONDITIONAL_JUMP)  ; LAB_005bfa12
    MOV dword ptr [EBX + 0x1fc50],0x0   ; 005bfa03
    JMP 0x005bf874                      ; 005bfa0d
        ;   XREF to: 005bf874 (UNCONDITIONAL_JUMP)  ; LAB_005bf874
    FLDZ                                ; 005bfa12
        ;   Label: LAB_005bfa12
    FCOMP double ptr [ESP + 0x8]        ; 005bfa14
    FNSTSW AX                           ; 005bfa18
    SAHF                                ; 005bfa1a
    JBE 0x005bfa32                      ; 005bfa1b
        ;   XREF to: 005bfa32 (CONDITIONAL_JUMP)  ; LAB_005bfa32
    FLD float ptr [EBX + 0x1fc50]       ; 005bfa1d
    FADD float ptr [ESP + 0x18]         ; 005bfa23
    FSTP float ptr [EBX + 0x1fc50]      ; 005bfa27
    JMP 0x005bf874                      ; 005bfa2d
        ;   XREF to: 005bf874 (UNCONDITIONAL_JUMP)  ; LAB_005bf874
    FLD float ptr [EBX + 0x1fc50]       ; 005bfa32
        ;   Label: LAB_005bfa32
    FSUB float ptr [ESP + 0x18]         ; 005bfa38
    FSTP float ptr [EBX + 0x1fc50]      ; 005bfa3c
    JMP 0x005bf874                      ; 005bfa42
        ;   XREF to: 005bf874 (UNCONDITIONAL_JUMP)  ; LAB_005bf874
    MOV dword ptr [EBX + 0x1fc5c],0x0   ; 005bfa47
        ;   Label: LAB_005bfa47
    JMP 0x005bf8ca                      ; 005bfa51
        ;   XREF to: 005bf8ca (UNCONDITIONAL_JUMP)  ; LAB_005bf8ca
    FLD float ptr [EBX + 0x1fc5c]       ; 005bfa56
        ;   Label: LAB_005bfa56
    FLD1                                ; 005bfa5c
    FCOMPP                              ; 005bfa5e
    FNSTSW AX                           ; 005bfa60
    SAHF                                ; 005bfa62
    JC 0x005bf8ee                       ; 005bfa63
        ;   XREF to: 005bf8ee (CONDITIONAL_JUMP)  ; LAB_005bf8ee
    JMP 0x005bf902                      ; 005bfa69
        ;   XREF to: 005bf902 (UNCONDITIONAL_JUMP)  ; LAB_005bf902
    FLD float ptr [EBP + 0x18]          ; 005bfa6e
        ;   Label: LAB_005bfa6e
    FDIV float ptr [ESP + 0x28]         ; 005bfa71
    JMP 0x005bf94d                      ; 005bfa75
        ;   XREF to: 005bf94d (UNCONDITIONAL_JUMP)  ; LAB_005bf94d
    FLD float ptr [EBX + 0x1fc50]       ; 005bfa7a
        ;   Label: LAB_005bfa7a
    FMUL float ptr [ESP + 0x2c]         ; 005bfa80
    FLD float ptr [ESP + 0x10]          ; 005bfa84
    FLD1                                ; 005bfa88
    FSUBRP                              ; 005bfa8a
    FDIVP                               ; 005bfa8c
    FSUBR float ptr [EBX + 0x1fc50]     ; 005bfa8e
    FSTP float ptr [EBX + 0x1fc50]      ; 005bfa94
    MOV ESP,EBP                         ; 005bfa9a
    POP EBP                             ; 005bfa9c
    POP EDI                             ; 005bfa9d
    POP ESI                             ; 005bfa9e
    POP EBX                             ; 005bfa9f
    RET                                 ; 005bfaa0
    FLD float ptr [EBX + 0x1fc50]       ; 005bfaa1
        ;   Label: LAB_005bfaa1
    FMUL double ptr [0x006538b4]        ; 005bfaa7 | DOUBLE_006538b4
    FABS                                ; 005bfaad
    MOV ESI,dword ptr [EBX + 0x1fc84]   ; 005bfaaf
    FSTP float ptr [ESP + 0x14]         ; 005bfab5
    CMP EDX,ESI                         ; 005bfab9
    JZ 0x005bfac3                       ; 005bfabb
        ;   XREF to: 005bfac3 (CONDITIONAL_JUMP)  ; LAB_005bfac3
    XOR EDI,EDI                         ; 005bfabd
    MOV dword ptr [ESP + 0x14],EDI      ; 005bfabf
    FLD float ptr [ESP + 0x14]          ; 005bfac3
        ;   Label: LAB_005bfac3
    FLD1                                ; 005bfac7
    FCOMPP                              ; 005bfac9
    FNSTSW AX                           ; 005bfacb
    SAHF                                ; 005bfacd
    JNC 0x005bfad8                      ; 005bface
        ;   XREF to: 005bfad8 (CONDITIONAL_JUMP)  ; LAB_005bfad8
    MOV dword ptr [ESP + 0x14],0x3f800000 ; 005bfad0
    FLD float ptr [ESP + 0x14]          ; 005bfad8
        ;   Label: LAB_005bfad8
    FSUB float ptr [EBX + 0x1fc54]      ; 005bfadc
    FADD float ptr [EBX + 0x1fc54]      ; 005bfae2
    FST float ptr [EBX + 0x1fc54]       ; 005bfae8
    FCOMP double ptr [0x006538bc]       ; 005bfaee | DOUBLE_006538bc
    FNSTSW AX                           ; 005bfaf4
    SAHF                                ; 005bfaf6
    JBE 0x005bf99e                      ; 005bfaf7
        ;   XREF to: 005bf99e (CONDITIONAL_JUMP)  ; LAB_005bf99e
    MOV dword ptr [EBX + 0x1fc84],EDX   ; 005bfafd
    MOV ESP,EBP                         ; 005bfb03
    POP EBP                             ; 005bfb05
    POP EDI                             ; 005bfb06
    POP ESI                             ; 005bfb07
    POP EBX                             ; 005bfb08
    RET                                 ; 005bfb09

