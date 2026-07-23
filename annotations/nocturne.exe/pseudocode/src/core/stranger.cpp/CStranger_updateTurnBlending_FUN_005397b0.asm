; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_updateTurnBlending_FUN_005397b0(int param_1,float param_2)
;
; Local Variables:
; undefined8       Stack[-0x48]:8  local_48
; undefined8       Stack[-0x40]:8  local_40
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_00535900 at 005360ae
;
; Referenced Globals:
;   double DOUBLE_005958bf = 10
;   double DOUBLE_005958c7 = 0.200000000000000
;   double DOUBLE_005958cf = 0.5
;   double DOUBLE_005958d7 = 0.318309886192889
;   double DOUBLE_005958df = 0.00100000000000000
;   undefined4 DAT_02dc9fa0
;   undefined4 DAT_02dc9fa4
;
; Called Functions:
;   core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005397b0
        ;   Label: core_stranger.cpp_CStranger_updateTurnBlending_FUN_005397b0
    PUSH ESI                            ; 005397b1
    PUSH EDI                            ; 005397b2
    PUSH EBP                            ; 005397b3
    MOV EBP,ESP                         ; 005397b4
    SUB ESP,0x34                        ; 005397b6
    AND ESP,0xfffffff8                  ; 005397b9
    MOV EBX,dword ptr [EBP + 0x14]      ; 005397bc
    LEA EAX,[EBX + 0x1fae0]             ; 005397bf
    MOV dword ptr [EAX + 0x8],0x0       ; 005397c5
    PUSH 0x0                            ; 005397cc
    MOV EDX,dword ptr [EAX + 0x8]       ; 005397ce
    MOV dword ptr [EAX + 0x4],EDX       ; 005397d1
    MOV EDX,dword ptr [EAX + 0x4]       ; 005397d4
    MOV dword ptr [EAX],EDX             ; 005397d7
    LEA EAX,[EBX + 0x150]               ; 005397d9
    PUSH EAX                            ; 005397df
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 005397e0
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0()
    MOV dword ptr [ESP + 0x38],EAX      ; 005397e5
    FLD float ptr [ESP + 0x38]          ; 005397e9
    ADD ESP,0x8                         ; 005397ed
    FLDZ                                ; 005397f0
    FXCH                                ; 005397f2
    FSTP double ptr [ESP]               ; 005397f4
    FCOMP double ptr [ESP]              ; 005397f7
    FNSTSW AX                           ; 005397fa
    SAHF                                ; 005397fc
    JNC 0x00539955                      ; 005397fd
        ;   XREF to: 00539955 (CONDITIONAL_JUMP)  ; LAB_00539955
    FLD float ptr [EBX + 0x1fabc]       ; 00539803
    FLD1                                ; 00539809
    FCOMPP                              ; 0053980b
    FNSTSW AX                           ; 0053980d
    SAHF                                ; 0053980f
    JBE 0x00539955                      ; 00539810
        ;   XREF to: 00539955 (CONDITIONAL_JUMP)  ; LAB_00539955
    FLD1                                ; 00539816
    FCOMP double ptr [ESP]              ; 00539818
    FNSTSW AX                           ; 0053981b
    SAHF                                ; 0053981d
    JA 0x0053998e                       ; 0053981e
        ;   XREF to: 0053998e (CONDITIONAL_JUMP)  ; LAB_0053998e
    MOV EAX,[0x02dc9fa0]                ; 00539824 | DAT_02dc9fa0
        ;   Label: LAB_00539824
    MOV EDX,dword ptr [EBX + 0x1faec]   ; 00539829
    MOV dword ptr [EBX + 0x1faec],EAX   ; 0053982f
    FLDZ                                ; 00539835
    FCOMP float ptr [EBX + 0x1fab8]     ; 00539837
    FNSTSW AX                           ; 0053983d
    SAHF                                ; 0053983f
    JBE 0x0053984d                      ; 00539840
        ;   XREF to: 0053984d (CONDITIONAL_JUMP)  ; LAB_0053984d
    MOV EAX,[0x02dc9fa4]                ; 00539842 | DAT_02dc9fa4
    MOV dword ptr [EBX + 0x1faec],EAX   ; 00539847
    MOV ECX,0x3fcccccd                  ; 0053984d
        ;   Label: LAB_0053984d
    FLD float ptr [EBX + 0x1fabc]       ; 00539852
    MOV dword ptr [ESP + 0x1c],ECX      ; 00539858
    FCOMP double ptr [0x005958c7]       ; 0053985c | DOUBLE_005958c7
    FNSTSW AX                           ; 00539862
    SAHF                                ; 00539864
    JBE 0x005399f7                      ; 00539865
        ;   XREF to: 005399f7 (CONDITIONAL_JUMP)  ; LAB_005399f7
    FLD float ptr [EBX + 0x1fac4]       ; 0053986b
    FADD float ptr [EBP + 0x18]         ; 00539871
    FSTP float ptr [EBX + 0x1fac4]      ; 00539874
    FLD float ptr [EBX + 0x1fac0]       ; 0053987a
        ;   Label: LAB_0053987a
    FLDZ                                ; 00539880
    FCOMPP                              ; 00539882
    FNSTSW AX                           ; 00539884
    SAHF                                ; 00539886
    JC 0x005398b2                       ; 00539887
        ;   XREF to: 005398b2 (CONDITIONAL_JUMP)  ; LAB_005398b2
    FLD float ptr [EBX + 0x1fabc]       ; 00539889
    FCOMP double ptr [0x005958cf]       ; 0053988f | DOUBLE_005958cf
    FNSTSW AX                           ; 00539895
    SAHF                                ; 00539897
    JC 0x00539a06                       ; 00539898
        ;   XREF to: 00539a06 (CONDITIONAL_JUMP)  ; LAB_00539a06
    FLD float ptr [EBX + 0x1fabc]       ; 0053989e
        ;   Label: LAB_0053989e
    FLD1                                ; 005398a4
    FSUBRP                              ; 005398a6
    FMUL float ptr [ESP + 0x1c]         ; 005398a8
    FSTP float ptr [EBX + 0x1fac0]      ; 005398ac
    FLD float ptr [EBX + 0x1fac0]       ; 005398b2
        ;   Label: LAB_005398b2
    FLDZ                                ; 005398b8
    FCOMPP                              ; 005398ba
    FNSTSW AX                           ; 005398bc
    SAHF                                ; 005398be
    JNC 0x00539a51                      ; 005398bf
        ;   XREF to: 00539a51 (CONDITIONAL_JUMP)  ; LAB_00539a51
    MOV EAX,dword ptr [EBX + 0x1fac0]   ; 005398c5
    MOV dword ptr [ESP + 0x28],EAX      ; 005398cb
    FLD float ptr [ESP + 0x28]          ; 005398cf
    FSUB float ptr [EBP + 0x18]         ; 005398d3
    FST float ptr [EBX + 0x1fac0]       ; 005398d6
    FLDZ                                ; 005398dc
    FCOMPP                              ; 005398de
    FNSTSW AX                           ; 005398e0
    SAHF                                ; 005398e2
    JC 0x00539a1e                       ; 005398e3
        ;   XREF to: 00539a1e (CONDITIONAL_JUMP)  ; LAB_00539a1e
    FLD float ptr [EBX + 0x1fabc]       ; 005398e9
    FLD1                                ; 005398ef
    FSUBRP                              ; 005398f1
    MOV dword ptr [EBX + 0x1fac0],0x0   ; 005398f3
    FSTP float ptr [ESP + 0x2c]         ; 005398fd
        ;   Label: LAB_005398fd
    MOV EAX,dword ptr [EBX + 0x1fabc]   ; 00539901
    MOV dword ptr [ESP + 0x10],EAX      ; 00539907
    FLD float ptr [ESP + 0x10]          ; 0053990b
    FADD float ptr [ESP + 0x2c]         ; 0053990f
    FST float ptr [EBX + 0x1fabc]       ; 00539913
    FLD1                                ; 00539919
    FCOMPP                              ; 0053991b
    FNSTSW AX                           ; 0053991d
    SAHF                                ; 0053991f
    JA 0x00539a2a                       ; 00539920
        ;   XREF to: 00539a2a (CONDITIONAL_JUMP)  ; LAB_00539a2a
    MOV dword ptr [EBX + 0x1fab8],0x0   ; 00539926
    MOV dword ptr [EBX + 0x1fac0],0x0   ; 00539930
    MOV dword ptr [EBX + 0x1fac4],0x0   ; 0053993a
    MOV dword ptr [EBX + 0x1fabc],0x3f800000 ; 00539944
    MOV ESP,EBP                         ; 0053994e
        ;   Label: LAB_0053994e
    POP EBP                             ; 00539950
    POP EDI                             ; 00539951
    POP ESI                             ; 00539952
    POP EBX                             ; 00539953
    RET                                 ; 00539954
    MOV dword ptr [EBX + 0x1fab8],0x0   ; 00539955
        ;   Label: LAB_00539955
    MOV dword ptr [EBX + 0x1faec],0xffffffff ; 0053995f
    MOV dword ptr [EBX + 0x1fac0],0x0   ; 00539969
    MOV dword ptr [EBX + 0x1fac4],0x0   ; 00539973
    MOV dword ptr [EBX + 0x1fabc],0x0   ; 0053997d
    MOV ESP,EBP                         ; 00539987
    POP EBP                             ; 00539989
    POP EDI                             ; 0053998a
    POP ESI                             ; 0053998b
    POP EBX                             ; 0053998c
    RET                                 ; 0053998d
    FLD float ptr [EBX + 0x1fab8]       ; 0053998e
        ;   Label: LAB_0053998e
    FST double ptr [ESP + 0x8]          ; 00539994
    FABS                                ; 00539998
    FLD1                                ; 0053999a
    FSUB double ptr [ESP]               ; 0053999c
    FMUL float ptr [EBP + 0x18]         ; 0053999f
    FMUL double ptr [0x005958bf]        ; 005399a2 | DOUBLE_005958bf
    FST float ptr [ESP + 0x18]          ; 005399a8
    FCOMPP                              ; 005399ac
    FNSTSW AX                           ; 005399ae
    SAHF                                ; 005399b0
    JBE 0x005399c2                      ; 005399b1
        ;   XREF to: 005399c2 (CONDITIONAL_JUMP)  ; LAB_005399c2
    MOV dword ptr [EBX + 0x1fab8],0x0   ; 005399b3
    JMP 0x00539824                      ; 005399bd
        ;   XREF to: 00539824 (UNCONDITIONAL_JUMP)  ; LAB_00539824
    FLDZ                                ; 005399c2
        ;   Label: LAB_005399c2
    FCOMP double ptr [ESP + 0x8]        ; 005399c4
    FNSTSW AX                           ; 005399c8
    SAHF                                ; 005399ca
    JBE 0x005399e2                      ; 005399cb
        ;   XREF to: 005399e2 (CONDITIONAL_JUMP)  ; LAB_005399e2
    FLD float ptr [EBX + 0x1fab8]       ; 005399cd
    FADD float ptr [ESP + 0x18]         ; 005399d3
    FSTP float ptr [EBX + 0x1fab8]      ; 005399d7
    JMP 0x00539824                      ; 005399dd
        ;   XREF to: 00539824 (UNCONDITIONAL_JUMP)  ; LAB_00539824
    FLD float ptr [EBX + 0x1fab8]       ; 005399e2
        ;   Label: LAB_005399e2
    FSUB float ptr [ESP + 0x18]         ; 005399e8
    FSTP float ptr [EBX + 0x1fab8]      ; 005399ec
    JMP 0x00539824                      ; 005399f2
        ;   XREF to: 00539824 (UNCONDITIONAL_JUMP)  ; LAB_00539824
    MOV dword ptr [EBX + 0x1fac4],0x0   ; 005399f7
        ;   Label: LAB_005399f7
    JMP 0x0053987a                      ; 00539a01
        ;   XREF to: 0053987a (UNCONDITIONAL_JUMP)  ; LAB_0053987a
    FLD float ptr [EBX + 0x1fac4]       ; 00539a06
        ;   Label: LAB_00539a06
    FLD1                                ; 00539a0c
    FCOMPP                              ; 00539a0e
    FNSTSW AX                           ; 00539a10
    SAHF                                ; 00539a12
    JC 0x0053989e                       ; 00539a13
        ;   XREF to: 0053989e (CONDITIONAL_JUMP)  ; LAB_0053989e
    JMP 0x005398b2                      ; 00539a19
        ;   XREF to: 005398b2 (UNCONDITIONAL_JUMP)  ; LAB_005398b2
    FLD float ptr [EBP + 0x18]          ; 00539a1e
        ;   Label: LAB_00539a1e
    FDIV float ptr [ESP + 0x28]         ; 00539a21
    JMP 0x005398fd                      ; 00539a25
        ;   XREF to: 005398fd (UNCONDITIONAL_JUMP)  ; LAB_005398fd
    FLD float ptr [EBX + 0x1fab8]       ; 00539a2a
        ;   Label: LAB_00539a2a
    FMUL float ptr [ESP + 0x2c]         ; 00539a30
    FLD float ptr [ESP + 0x10]          ; 00539a34
    FLD1                                ; 00539a38
    FSUBRP                              ; 00539a3a
    FDIVP                               ; 00539a3c
    FSUBR float ptr [EBX + 0x1fab8]     ; 00539a3e
    FSTP float ptr [EBX + 0x1fab8]      ; 00539a44
    MOV ESP,EBP                         ; 00539a4a
    POP EBP                             ; 00539a4c
    POP EDI                             ; 00539a4d
    POP ESI                             ; 00539a4e
    POP EBX                             ; 00539a4f
    RET                                 ; 00539a50
    FLD float ptr [EBX + 0x1fab8]       ; 00539a51
        ;   Label: LAB_00539a51
    FMUL double ptr [0x005958d7]        ; 00539a57 | DOUBLE_005958d7
    FABS                                ; 00539a5d
    MOV ESI,dword ptr [EBX + 0x1faec]   ; 00539a5f
    FSTP float ptr [ESP + 0x14]         ; 00539a65
    CMP EDX,ESI                         ; 00539a69
    JZ 0x00539a73                       ; 00539a6b
        ;   XREF to: 00539a73 (CONDITIONAL_JUMP)  ; LAB_00539a73
    XOR EDI,EDI                         ; 00539a6d
    MOV dword ptr [ESP + 0x14],EDI      ; 00539a6f
    FLD float ptr [ESP + 0x14]          ; 00539a73
        ;   Label: LAB_00539a73
    FLD1                                ; 00539a77
    FCOMPP                              ; 00539a79
    FNSTSW AX                           ; 00539a7b
    SAHF                                ; 00539a7d
    JNC 0x00539a88                      ; 00539a7e
        ;   XREF to: 00539a88 (CONDITIONAL_JUMP)  ; LAB_00539a88
    MOV dword ptr [ESP + 0x14],0x3f800000 ; 00539a80
    FLD float ptr [ESP + 0x14]          ; 00539a88
        ;   Label: LAB_00539a88
    FSUB float ptr [EBX + 0x1fabc]      ; 00539a8c
    FADD float ptr [EBX + 0x1fabc]      ; 00539a92
    FST float ptr [EBX + 0x1fabc]       ; 00539a98
    FCOMP double ptr [0x005958df]       ; 00539a9e | DOUBLE_005958df
    FNSTSW AX                           ; 00539aa4
    SAHF                                ; 00539aa6
    JBE 0x0053994e                      ; 00539aa7
        ;   XREF to: 0053994e (CONDITIONAL_JUMP)  ; LAB_0053994e
    MOV dword ptr [EBX + 0x1faec],EDX   ; 00539aad
    MOV ESP,EBP                         ; 00539ab3
    POP EBP                             ; 00539ab5
    POP EDI                             ; 00539ab6
    POP ESI                             ; 00539ab7
    POP EBX                             ; 00539ab8
    RET                                 ; 00539ab9

