; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_motion_cpp_CMotionController_advanceFrameToExitPoint_FUN_004fc680(CMotionController *this_ptr,int motion_index,float current_frame,float *inout_delta_time,SMotionTransition *out_transition)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   motion_index
; float            Stack[0xc]:4   current_frame
; float *          Stack[0x10]:4   inout_delta_time
; SMotionTransition * Stack[0x14]:4   out_transition
; Local Variables:
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[1]:
;   core_motion.cpp_CMotionController_advance_FUN_004fbb70 at 004fbee3
;
; Referenced Globals:
;   undefined4 DAT_005c9d84
;   undefined4 DAT_005c9d8c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fc680
        ;   Label: core_motion.cpp_CMotionController_advanceFrameToExitPoint_FUN_004fc680
    PUSH ESI                            ; 004fc681
    PUSH EDI                            ; 004fc682
    PUSH EBP                            ; 004fc683
    MOV EBP,ESP                         ; 004fc684
    SUB ESP,0x1c                        ; 004fc686
    AND ESP,0xfffffff8                  ; 004fc689
    MOV EBX,dword ptr [EBP + 0x18]      ; 004fc68c
    MOV ESI,dword ptr [EBP + 0x14]      ; 004fc68f
    LEA ECX,[EBX*0x8 + 0x0]             ; 004fc692
    MOV EAX,dword ptr [EBP + 0x20]      ; 004fc699
    ADD ECX,EBX                         ; 004fc69c
    MOV ESI,dword ptr [ESI]             ; 004fc69e
    SHL ECX,0x5                         ; 004fc6a0
    LEA EBX,[ESI + 0x1c28]              ; 004fc6a3
    XOR EDX,EDX                         ; 004fc6a9
    ADD EBX,ECX                         ; 004fc6ab
    FLD float ptr [EAX]                 ; 004fc6ad
    FMUL float ptr [EBX + 0x20]         ; 004fc6af
    MOV dword ptr [ESP + 0x14],EDX      ; 004fc6b2
    FADD float ptr [EBP + 0x1c]         ; 004fc6b6
    XOR ESI,ESI                         ; 004fc6b9
    FSTP float ptr [ESP + 0xc]          ; 004fc6bb
    MOV EAX,dword ptr [ESP + 0xc]       ; 004fc6bf
    MOV ECX,dword ptr [EBX + 0x78]      ; 004fc6c3
    MOV dword ptr [ESP + 0x10],EAX      ; 004fc6c6
    TEST ECX,ECX                        ; 004fc6ca
    JLE 0x004fc6f2                      ; 004fc6cc
        ;   XREF to: 004fc6f2 (CONDITIONAL_JUMP)  ; LAB_004fc6f2
    MOV ECX,EBX                         ; 004fc6ce
    FLD float ptr [EBP + 0x1c]          ; 004fc6d0
        ;   Label: LAB_004fc6d0
    FILD dword ptr [ECX + 0x7c]         ; 004fc6d3
    FSTP float ptr [ESP + 0x8]          ; 004fc6d6
    FCOMP float ptr [ESP + 0x8]         ; 004fc6da
    FNSTSW AX                           ; 004fc6de
    SAHF                                ; 004fc6e0
    JBE 0x004fc799                      ; 004fc6e1
        ;   XREF to: 004fc799 (CONDITIONAL_JUMP)  ; LAB_004fc799
    INC ESI                             ; 004fc6e7
        ;   Label: LAB_004fc6e7
    MOV EDI,dword ptr [EBX + 0x78]      ; 004fc6e8
    ADD ECX,0x8                         ; 004fc6eb
    CMP ESI,EDI                         ; 004fc6ee
    JL 0x004fc6d0                       ; 004fc6f0
        ;   XREF to: 004fc6d0 (CONDITIONAL_JUMP)  ; LAB_004fc6d0
    FILD dword ptr [EBX + 0x28]         ; 004fc6f2
        ;   Label: LAB_004fc6f2
    FADD double ptr [0x005c9d84]        ; 004fc6f5 | DAT_005c9d84
    FLD float ptr [ESP + 0xc]           ; 004fc6fb
    FCOMPP                              ; 004fc6ff
    FNSTSW AX                           ; 004fc701
    SAHF                                ; 004fc703
    JC 0x004fc7d2                       ; 004fc704
        ;   XREF to: 004fc7d2 (CONDITIONAL_JUMP)  ; LAB_004fc7d2
    FILD dword ptr [EBX + 0x28]         ; 004fc70a
    FILD dword ptr [EBX + 0x68]         ; 004fc70d
    FLD1                                ; 004fc710
    FDIVRP                              ; 004fc712
    FXCH                                ; 004fc714
    FMUL ST1                            ; 004fc716
    PUSH 0x3f800000                     ; 004fc718
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fc71d
    FILD dword ptr [EBX + 0x60]         ; 004fc720
    FXCH                                ; 004fc723
    FADD ST0,ST1                        ; 004fc725
    SUB ESP,0x4                         ; 004fc727
    FLD float ptr [EBP + 0x1c]          ; 004fc72a
    FMULP ST3                           ; 004fc72d
    MOV EAX,dword ptr [EAX + 0x50]      ; 004fc72f
    FSTP float ptr [ESP]                ; 004fc732
    FADDP                               ; 004fc735
    SUB ESP,0x4                         ; 004fc737
    MOV ECX,dword ptr [EBP + 0x14]      ; 004fc73a
    FSTP float ptr [ESP]                ; 004fc73d
    PUSH ECX                            ; 004fc740
    CALL dword ptr [EAX + 0x8]          ; 004fc741
    MOV ECX,0x6                         ; 004fc744
    ADD ESP,0x10                        ; 004fc749
    LEA ESI,[EBX + 0x2c]                ; 004fc74c
    MOV EDI,dword ptr [EBP + 0x24]      ; 004fc74f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fc752
    MOVSD.REP ES:EDI,ESI                ; 004fc755
    MOV ESI,dword ptr [EAX + 0x2c]      ; 004fc757
    TEST ESI,ESI                        ; 004fc75a
    JZ 0x004fc780                       ; 004fc75c
        ;   XREF to: 004fc780 (CONDITIONAL_JUMP)  ; LAB_004fc780
    MOV EDI,dword ptr [ESI + 0x4]       ; 004fc75e
    MOV ECX,ESI                         ; 004fc761
    CMP EDI,0x2                         ; 004fc763
    JNZ 0x004fc780                      ; 004fc766
        ;   XREF to: 004fc780 (CONDITIONAL_JUMP)  ; LAB_004fc780
    MOV ECX,dword ptr [EBP + 0x24]      ; 004fc768
    MOV EAX,dword ptr [ESI + 0x8]       ; 004fc76b
    MOV dword ptr [ECX + 0x8],EAX       ; 004fc76e
    MOV ECX,dword ptr [EBP + 0x14]      ; 004fc771
    MOV ECX,dword ptr [ECX + 0x2c]      ; 004fc774
    MOV EAX,dword ptr [EBP + 0x24]      ; 004fc777
    MOV EDX,dword ptr [ECX + 0xc]       ; 004fc77a
    MOV dword ptr [EAX + 0xc],EDX       ; 004fc77d
    FILD dword ptr [EBX + 0x28]         ; 004fc780
        ;   Label: LAB_004fc780
    FSUB float ptr [EBP + 0x1c]         ; 004fc783
        ;   Label: LAB_004fc783
    FDIV float ptr [EBX + 0x20]         ; 004fc786
    MOV EAX,dword ptr [EBP + 0x20]      ; 004fc789
    FSTP float ptr [EAX]                ; 004fc78c
    MOV EAX,dword ptr [ESP + 0x14]      ; 004fc78e
        ;   Label: LAB_004fc78e
    MOV ESP,EBP                         ; 004fc792
    POP EBP                             ; 004fc794
    POP EDI                             ; 004fc795
    POP ESI                             ; 004fc796
    POP EBX                             ; 004fc797
    RET                                 ; 004fc798
    FLD float ptr [ESP + 0xc]           ; 004fc799
        ;   Label: LAB_004fc799
    FADD double ptr [0x005c9d8c]        ; 004fc79d | DAT_005c9d8c
    FLD float ptr [ESP + 0x8]           ; 004fc7a3
    FSTP double ptr [ESP]               ; 004fc7a7
    FCOMP double ptr [ESP]              ; 004fc7aa
    FNSTSW AX                           ; 004fc7ad
    SAHF                                ; 004fc7af
    JC 0x004fc6e7                       ; 004fc7b0
        ;   XREF to: 004fc6e7 (CONDITIONAL_JUMP)  ; LAB_004fc6e7
    FLD double ptr [ESP]                ; 004fc7b6
    MOV EAX,dword ptr [ECX + 0x80]      ; 004fc7b9
    FADD double ptr [0x005c9d8c]        ; 004fc7bf | DAT_005c9d8c
    MOV dword ptr [ESP + 0x14],EAX      ; 004fc7c5
    FSTP float ptr [ESP + 0xc]          ; 004fc7c9
    JMP 0x004fc6e7                      ; 004fc7cd
        ;   XREF to: 004fc6e7 (UNCONDITIONAL_JUMP)  ; LAB_004fc6e7
    FLD float ptr [ESP + 0xc]           ; 004fc7d2
        ;   Label: LAB_004fc7d2
    FILD dword ptr [EBX + 0x68]         ; 004fc7d6
    FLD1                                ; 004fc7d9
    FDIVRP                              ; 004fc7db
    FXCH                                ; 004fc7dd
    FMUL ST1                            ; 004fc7df
    PUSH 0x3f800000                     ; 004fc7e1
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fc7e6
    FILD dword ptr [EBX + 0x60]         ; 004fc7e9
    FXCH                                ; 004fc7ec
    FADD ST0,ST1                        ; 004fc7ee
    SUB ESP,0x4                         ; 004fc7f0
    FLD float ptr [EBP + 0x1c]          ; 004fc7f3
    FMULP ST3                           ; 004fc7f6
    MOV EAX,dword ptr [EAX + 0x50]      ; 004fc7f8
    FSTP float ptr [ESP]                ; 004fc7fb
    FADDP                               ; 004fc7fe
    SUB ESP,0x4                         ; 004fc800
    MOV EDX,dword ptr [EBP + 0x14]      ; 004fc803
    FSTP float ptr [ESP]                ; 004fc806
    PUSH EDX                            ; 004fc809
    CALL dword ptr [EAX + 0x8]          ; 004fc80a
    ADD ESP,0x10                        ; 004fc80d
    MOV EAX,dword ptr [EBP + 0x24]      ; 004fc810
    MOV ECX,dword ptr [EBP + 0x24]      ; 004fc813
    MOV dword ptr [EAX + 0x4],0x1       ; 004fc816
    MOV EAX,dword ptr [EBP + 0x18]      ; 004fc81d
    MOV dword ptr [ECX + 0x14],0x0      ; 004fc820
    MOV dword ptr [ECX + 0x8],EAX       ; 004fc827
    MOV EAX,dword ptr [ESP + 0xc]       ; 004fc82a
    MOV dword ptr [ECX + 0xc],EAX       ; 004fc82e
    FLD float ptr [ECX + 0xc]           ; 004fc831
    FCOMP float ptr [ESP + 0x10]        ; 004fc834
    FNSTSW AX                           ; 004fc838
    SAHF                                ; 004fc83a
    JNC 0x004fc78e                      ; 004fc83b
        ;   XREF to: 004fc78e (CONDITIONAL_JUMP)  ; LAB_004fc78e
    FLD float ptr [ECX + 0xc]           ; 004fc841
    JMP 0x004fc783                      ; 004fc844
        ;   XREF to: 004fc783 (UNCONDITIONAL_JUMP)  ; LAB_004fc783

