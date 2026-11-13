; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_motion_cpp_FUN_005038a0(int *param_1,int param_2)
;
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[26]:
;   core_charactr.cpp_CCharacter_canLookAt_FUN_00429ce0 at 00429d3c
;   core_doc.cpp_CDoc_canDoHeroAction_FUN_0045d0c0 at 0045d0f4
;   core_doc.cpp_CDoc_makeDrawDecision_FUN_004555c0 at 00455665
;   core_doc.cpp_FUN_00450c60 at 00450fc0
;   core_doc.cpp_FUN_00453250 at 00453692
;   core_doc.cpp_FUN_00453d80 at 00453d9b
;   core_doc.cpp_FUN_00455270 at 004552a0
;   core_doc.cpp_FUN_0045bdc0 at 0045be58
;   core_gabriela.cpp_CGabriella_process_FUN_004ad640 at 004add01
;   core_gabriela.cpp_FUN_004af410 at 004af5bc
;   ... and 16 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005038a0
        ;   Label: core_motion.cpp_FUN_005038a0
    PUSH EBP                            ; 005038a1
    MOV EBP,ESP                         ; 005038a2
    SUB ESP,0xc                         ; 005038a4
    AND ESP,0xfffffff8                  ; 005038a7
    MOV EDX,dword ptr [EBP + 0xc]       ; 005038aa
    MOV EBX,dword ptr [EBP + 0x10]      ; 005038ad
    FLDZ                                ; 005038b0
    FLD float ptr [EDX + 0x14]          ; 005038b2
    FSTP double ptr [ESP]               ; 005038b5
    FCOMP double ptr [ESP]              ; 005038b8
    FNSTSW AX                           ; 005038bb
    SAHF                                ; 005038bd
    JNC 0x00503911                      ; 005038be
        ;   XREF to: 00503911 (CONDITIONAL_JUMP)  ; LAB_00503911
    MOV ECX,dword ptr [EDX + 0x18]      ; 005038c0
    LEA EAX,[ECX*0x8 + 0x0]             ; 005038c3
    ADD EAX,ECX                         ; 005038ca
    SHL EAX,0x2                         ; 005038cc
    SUB EAX,ECX                         ; 005038cf
    MOV ECX,dword ptr [EDX]             ; 005038d1
    CMP EBX,dword ptr [ECX + EAX*0x8 + 0x1c4c] ; 005038d3
    JZ 0x00503908                       ; 005038da
        ;   XREF to: 00503908 (CONDITIONAL_JUMP)  ; LAB_00503908
    MOV EDX,dword ptr [EDX + 0x4]       ; 005038dc
    LEA EAX,[EDX*0x8 + 0x0]             ; 005038df
    ADD EAX,EDX                         ; 005038e6
    SHL EAX,0x2                         ; 005038e8
    SUB EAX,EDX                         ; 005038eb
    CMP EBX,dword ptr [ECX + EAX*0x8 + 0x1c4c] ; 005038ed
    JNZ 0x0050393e                      ; 005038f4
        ;   XREF to: 0050393e (CONDITIONAL_JUMP)  ; LAB_0050393e
    FLD1                                ; 005038f6
    FSUB double ptr [ESP]               ; 005038f8
    FSTP float ptr [ESP + 0x8]          ; 005038fb
    MOV EAX,dword ptr [ESP + 0x8]       ; 005038ff
        ;   Label: LAB_005038ff
    MOV ESP,EBP                         ; 00503903
    POP EBP                             ; 00503905
    POP EBX                             ; 00503906
    RET                                 ; 00503907
    MOV EAX,dword ptr [EDX + 0x14]      ; 00503908
        ;   Label: LAB_00503908
    MOV dword ptr [ESP + 0x8],EAX       ; 0050390b
    JMP 0x005038ff                      ; 0050390f
        ;   XREF to: 005038ff (UNCONDITIONAL_JUMP)  ; LAB_005038ff
    MOV ECX,dword ptr [EDX + 0x4]       ; 00503911
        ;   Label: LAB_00503911
    LEA EAX,[ECX*0x8 + 0x0]             ; 00503914
    ADD EAX,ECX                         ; 0050391b
    SHL EAX,0x2                         ; 0050391d
    SUB EAX,ECX                         ; 00503920
    LEA ECX,[EAX*0x8 + 0x0]             ; 00503922
    MOV EAX,dword ptr [EDX]             ; 00503929
    CMP EBX,dword ptr [ECX + EAX*0x1 + 0x1c4c] ; 0050392b
    JNZ 0x0050393e                      ; 00503932
        ;   XREF to: 0050393e (CONDITIONAL_JUMP)  ; LAB_0050393e
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 00503934
    JMP 0x005038ff                      ; 0050393c
        ;   XREF to: 005038ff (UNCONDITIONAL_JUMP)  ; LAB_005038ff
    XOR EAX,EAX                         ; 0050393e
        ;   Label: LAB_0050393e
    MOV dword ptr [ESP + 0x8],EAX       ; 00503940
    MOV EAX,dword ptr [ESP + 0x8]       ; 00503944
    MOV ESP,EBP                         ; 00503948
    POP EBP                             ; 0050394a
    POP EBX                             ; 0050394b
    RET                                 ; 0050394c

