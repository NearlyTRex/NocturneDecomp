; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004ea640(float *param_1)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   FUN_00434c60 at 00434d1d
;   FUN_0049f0e0 at 0049f0fb
;
; Referenced Globals:
;   TerminatedCString s_core_hero_cpp_005e4614
;   TerminatedCString s_closestHeroToPoint_no_he_005e4625
;   undefined4 DAT_01d06aa0
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ea640
        ;   Label: FUN_004ea640
    PUSH ESI                            ; 004ea641
    PUSH EDI                            ; 004ea642
    PUSH EBP                            ; 004ea643
    SUB ESP,0x14                        ; 004ea644
    MOV EBX,dword ptr [ESP + 0x28]      ; 004ea647
    MOV EDX,0x7149f2ca                  ; 004ea64b
    MOV ECX,dword ptr [0x01d06aa0]      ; 004ea650 | DAT_01d06aa0
    XOR ESI,ESI                         ; 004ea656
    MOV dword ptr [ESP + 0x8],EDX       ; 004ea658
    TEST ECX,ECX                        ; 004ea65c
    JLE 0x004ea67a                      ; 004ea65e
        ;   XREF to: 004ea67a (CONDITIONAL_JUMP)  ; LAB_004ea67a
    LEA EDI,[ECX*0x4 + 0x0]             ; 004ea660
    XOR EDX,EDX                         ; 004ea667
    MOV EBP,dword ptr [EDX + 0x1d06aa4] ; 004ea669
        ;   Label: LAB_004ea669
    TEST EBP,EBP                        ; 004ea66f
    JNZ 0x004ea688                      ; 004ea671
        ;   XREF to: 004ea688 (CONDITIONAL_JUMP)  ; LAB_004ea688
    ADD EDX,0x4                         ; 004ea673
        ;   Label: LAB_004ea673
    CMP EDX,EDI                         ; 004ea676
    JL 0x004ea669                       ; 004ea678
        ;   XREF to: 004ea669 (CONDITIONAL_JUMP)  ; LAB_004ea669
    TEST ESI,ESI                        ; 004ea67a
        ;   Label: LAB_004ea67a
    JZ 0x004ea6c2                       ; 004ea67c
        ;   XREF to: 004ea6c2 (CONDITIONAL_JUMP)  ; LAB_004ea6c2
    MOV EAX,ESI                         ; 004ea67e
    ADD ESP,0x14                        ; 004ea680
    POP EBP                             ; 004ea683
    POP EDI                             ; 004ea684
    POP ESI                             ; 004ea685
    POP EBX                             ; 004ea686
    RET                                 ; 004ea687
    MOV ECX,EBP                         ; 004ea688
        ;   Label: LAB_004ea688
    LEA EAX,[EBP + 0x20]                ; 004ea68a
    FLD float ptr [EAX]                 ; 004ea68d
    FSUB float ptr [EBX]                ; 004ea68f
    FMUL ST0                            ; 004ea691
    FLD float ptr [EAX + 0x4]           ; 004ea693
    FSUB float ptr [EBX + 0x4]          ; 004ea696
    FMUL ST0                            ; 004ea699
    FLD float ptr [EAX + 0x8]           ; 004ea69b
    FXCH                                ; 004ea69e
    FADDP ST2,ST0                       ; 004ea6a0
    FSUB float ptr [EBX + 0x8]          ; 004ea6a2
    FMUL ST0                            ; 004ea6a5
    FADDP                               ; 004ea6a7
    FST float ptr [ESP + 0xc]           ; 004ea6a9
    FCOMP float ptr [ESP + 0x8]         ; 004ea6ad
    FNSTSW AX                           ; 004ea6b1
    SAHF                                ; 004ea6b3
    JNC 0x004ea673                      ; 004ea6b4
        ;   XREF to: 004ea673 (CONDITIONAL_JUMP)  ; LAB_004ea673
    MOV EAX,dword ptr [ESP + 0xc]       ; 004ea6b6
    MOV ESI,EBP                         ; 004ea6ba
    MOV dword ptr [ESP + 0x8],EAX       ; 004ea6bc
    JMP 0x004ea673                      ; 004ea6c0
        ;   XREF to: 004ea673 (UNCONDITIONAL_JUMP)  ; LAB_004ea673
    MOV EBX,0x5e4614                    ; 004ea6c2 | = "..\\core\\hero.cpp"
        ;   Label: LAB_004ea6c2
    MOV EDI,0x38                        ; 004ea6c7
    PUSH 0x5e4625                       ; 004ea6cc | = "closestHeroToPoint - no heros!"
    MOV dword ptr [0x01d1d400],EBX      ; 004ea6d1 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 004ea6d7 | DAT_01d1d404
    CALL FUN_005030e0                   ; 004ea6dd
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 004ea6e2
    MOV EAX,ESI                         ; 004ea6e5
    ADD ESP,0x14                        ; 004ea6e7
    POP EBP                             ; 004ea6ea
    POP EDI                             ; 004ea6eb
    POP ESI                             ; 004ea6ec
    POP EBX                             ; 004ea6ed
    RET                                 ; 004ea6ee

