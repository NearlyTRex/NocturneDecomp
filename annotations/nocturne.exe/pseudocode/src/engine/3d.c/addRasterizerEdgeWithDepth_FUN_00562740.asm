; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_addRasterizerEdgeWithDepth_FUN_00562740(SRenderVertex *v0,SRenderVertex *v1)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   v0
; SRenderVertex *  Stack[0x8]:4   v1
;
; Referenced Globals:
;   undefined4 DAT_02de497c
;   undefined4 DAT_02de4980
;   undefined4 DAT_02de4e00
;   undefined4 DAT_02de4e04
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00562740
        ;   Label: engine_3d.c_addRasterizerEdgeWithDepth_FUN_00562740
    PUSH ESI                            ; 00562741
    PUSH EDI                            ; 00562742
    PUSH EBP                            ; 00562743
    MOV ESI,dword ptr [ESP + 0x14]      ; 00562744
    MOV EDI,dword ptr [ESP + 0x18]      ; 00562748
    MOV EBX,dword ptr [EDI + 0x14]      ; 0056274c
    MOV EAX,dword ptr [ESI + 0x14]      ; 0056274f
    SAR EBX,0x10                        ; 00562752
    SAR EAX,0x10                        ; 00562755
    CMP EAX,EBX                         ; 00562758
    JZ 0x00562863                       ; 0056275a
        ;   XREF to: 00562863 (CONDITIONAL_JUMP)  ; LAB_00562863
    MOV ECX,dword ptr [EDI + 0x14]      ; 00562760
    CMP ECX,dword ptr [ESI + 0x14]      ; 00562763
    JGE 0x00562774                      ; 00562766
        ;   XREF to: 00562774 (CONDITIONAL_JUMP)  ; LAB_00562774
    MOV EDX,ESI                         ; 00562768
    MOV ESI,EDI                         ; 0056276a
    MOV EDI,EDX                         ; 0056276c
    MOV EDX,EAX                         ; 0056276e
    MOV EAX,EBX                         ; 00562770
    MOV EBX,EDX                         ; 00562772
    MOV EDX,dword ptr [0x02de497c]      ; 00562774 | DAT_02de497c
        ;   Label: LAB_00562774
    LEA ECX,[EDX*0x8 + 0x0]             ; 0056277a
    ADD ECX,EDX                         ; 00562781
    SHL ECX,0x3                         ; 00562783
    ADD ECX,0x2de4980                   ; 00562786
    MOV dword ptr [ECX],EAX             ; 0056278c | DAT_02de4980
    MOV EBP,dword ptr [0x02de4e00]      ; 0056278e | DAT_02de4e00
    MOV dword ptr [ECX + 0x4],EBX       ; 00562794
    CMP EAX,EBP                         ; 00562797
    JGE 0x005627a0                      ; 00562799
        ;   XREF to: 005627a0 (CONDITIONAL_JUMP)  ; LAB_005627a0
    MOV [0x02de4e00],EAX                ; 0056279b | DAT_02de4e00
    CMP EBX,dword ptr [0x02de4e04]      ; 005627a0 | DAT_02de4e04
        ;   Label: LAB_005627a0
    JLE 0x005627ae                      ; 005627a6
        ;   XREF to: 005627ae (CONDITIONAL_JUMP)  ; LAB_005627ae
    MOV dword ptr [0x02de4e04],EBX      ; 005627a8 | DAT_02de4e04
    MOV EAX,dword ptr [ESI + 0x10]      ; 005627ae
        ;   Label: LAB_005627ae
    MOV dword ptr [ECX + 0x8],EAX       ; 005627b1
    MOV EAX,dword ptr [ESI + 0x8]       ; 005627b4
    SHL EAX,0x8                         ; 005627b7
    MOV dword ptr [ECX + 0x28],EAX      ; 005627ba
    MOV EAX,dword ptr [ESI + 0x20]      ; 005627bd
    MOV dword ptr [ECX + 0x10],EAX      ; 005627c0
    MOV EBX,dword ptr [EDI + 0x14]      ; 005627c3
    SUB EBX,dword ptr [ESI + 0x14]      ; 005627c6
    CMP EBX,0x10000                     ; 005627c9
    JNC 0x00562868                      ; 005627cf
        ;   XREF to: 00562868 (CONDITIONAL_JUMP)  ; LAB_00562868
    XOR EBX,EBX                         ; 005627d5
    MOV EDX,dword ptr [EDI + 0x10]      ; 005627d7
        ;   Label: LAB_005627d7
    MOV EBP,dword ptr [ESI + 0x10]      ; 005627da
    MOV EAX,EBX                         ; 005627dd
    SUB EDX,EBP                         ; 005627df
    IMUL EDX                            ; 005627e1
    SHRD EAX,EDX,0x10                   ; 005627e3
    MOV dword ptr [ECX + 0xc],EAX       ; 005627e7
    MOV EAX,dword ptr [EDI + 0x8]       ; 005627ea
    MOV EDX,dword ptr [ESI + 0x8]       ; 005627ed
    SUB EAX,EDX                         ; 005627f0
    MOV EDX,EAX                         ; 005627f2
    SHL EDX,0x8                         ; 005627f4
    MOV EAX,EBX                         ; 005627f7
    IMUL EDX                            ; 005627f9
    SHRD EAX,EDX,0x10                   ; 005627fb
    MOV dword ptr [ECX + 0x2c],EAX      ; 005627ff
    MOV EDX,dword ptr [EDI + 0x20]      ; 00562802
    MOV EDI,dword ptr [ESI + 0x20]      ; 00562805
    MOV EAX,EBX                         ; 00562808
    SUB EDX,EDI                         ; 0056280a
    IMUL EDX                            ; 0056280c
    SHRD EAX,EDX,0x10                   ; 0056280e
    MOV dword ptr [ECX + 0x14],EAX      ; 00562812
    MOV EBX,dword ptr [ESI + 0x14]      ; 00562815
    AND EBX,0xffff                      ; 00562818
    XOR BX,0xffff                       ; 0056281e
    MOV EDX,dword ptr [ECX + 0xc]       ; 00562822
    MOV EAX,EBX                         ; 00562825
    IMUL EDX                            ; 00562827
    SHRD EAX,EDX,0x10                   ; 00562829
    MOV EBP,dword ptr [ECX + 0x8]       ; 0056282d
    MOV EDX,dword ptr [ECX + 0x2c]      ; 00562830
    ADD EBP,EAX                         ; 00562833
    MOV EAX,EBX                         ; 00562835
    MOV dword ptr [ECX + 0x8],EBP       ; 00562837
    IMUL EDX                            ; 0056283a
    SHRD EAX,EDX,0x10                   ; 0056283c
    ADD dword ptr [ECX + 0x28],EAX      ; 00562840
    MOV EAX,EBX                         ; 00562843
    MOV EDX,dword ptr [ECX + 0x14]      ; 00562845
    IMUL EDX                            ; 00562848
    SHRD EAX,EDX,0x10                   ; 0056284a
    MOV ESI,dword ptr [0x02de497c]      ; 0056284e | DAT_02de497c
    MOV EBX,dword ptr [ECX + 0x10]      ; 00562854
    INC ESI                             ; 00562857
    ADD EBX,EAX                         ; 00562858
    MOV dword ptr [0x02de497c],ESI      ; 0056285a | DAT_02de497c
    MOV dword ptr [ECX + 0x10],EBX      ; 00562860
    POP EBP                             ; 00562863
        ;   Label: LAB_00562863
    POP EDI                             ; 00562864
    POP ESI                             ; 00562865
    POP EBX                             ; 00562866
    RET                                 ; 00562867
    MOV EAX,0xffffffff                  ; 00562868
        ;   Label: LAB_00562868
    XOR EDX,EDX                         ; 0056286d
    DIV EBX                             ; 0056286f
    MOV EBX,EAX                         ; 00562871
    JMP 0x005627d7                      ; 00562873
        ;   XREF to: 005627d7 (UNCONDITIONAL_JUMP)  ; LAB_005627d7

