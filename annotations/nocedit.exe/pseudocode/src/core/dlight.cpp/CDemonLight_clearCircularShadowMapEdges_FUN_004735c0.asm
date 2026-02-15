; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_004735c0(CDemonLight *this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_set.cpp_CDemonSet_FUN_0056be80 at 0056bf8f
;   core_set.cpp_CDemonSet_FUN_0056c990 at 0056cae0
;   core_set.cpp_CDemonSet_initScene_FUN_0056aa10 at 0056ab74
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004735c0
        ;   Label: core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_004735c0
    PUSH ESI                            ; 004735c1
    PUSH EDI                            ; 004735c2
    PUSH EBP                            ; 004735c3
    MOV ECX,dword ptr [ESP + 0x14]      ; 004735c4
    CMP dword ptr [ECX + 0x1cb8],0x0    ; 004735c8
    JZ 0x00473586                       ; 004735cf
        ;   XREF to: 00473586 (CONDITIONAL_JUMP)  ; LAB_00473586
    XOR ESI,ESI                         ; 004735d1
    MOV EAX,dword ptr [ECX + 0x1cc4]    ; 004735d3
        ;   Label: LAB_004735d3
    MOV EDX,EAX                         ; 004735d9
    SAR EDX,0x1f                        ; 004735db
    SUB EAX,EDX                         ; 004735de
    SAR EAX,0x1                         ; 004735e0
    CMP ESI,EAX                         ; 004735e2
    JGE 0x00473586                      ; 004735e4
        ;   XREF to: 00473586 (CONDITIONAL_JUMP)  ; LAB_00473586
    XOR EBX,EBX                         ; 004735e6
    MOV EAX,dword ptr [ECX + 0x1cc0]    ; 004735e8
        ;   Label: LAB_004735e8
    MOV EDX,EAX                         ; 004735ee
    SAR EDX,0x1f                        ; 004735f0
    SUB EAX,EDX                         ; 004735f3
    SAR EAX,0x1                         ; 004735f5
    CMP EBX,EAX                         ; 004735f7
    JL 0x004735fe                       ; 004735f9
        ;   XREF to: 004735fe (CONDITIONAL_JUMP)  ; LAB_004735fe
    INC ESI                             ; 004735fb
    JMP 0x004735d3                      ; 004735fc
        ;   XREF to: 004735d3 (UNCONDITIONAL_JUMP)  ; LAB_004735d3
    MOV EDI,EAX                         ; 004735fe
        ;   Label: LAB_004735fe
    MOV EAX,dword ptr [ECX + 0x1cc4]    ; 00473600
    MOV EDX,EAX                         ; 00473606
    SAR EDX,0x1f                        ; 00473608
    SUB EAX,EDX                         ; 0047360b
    SAR EAX,0x1                         ; 0047360d
    MOV EBP,EAX                         ; 0047360f
    MOV EDX,dword ptr [ECX + 0x1cc0]    ; 00473611
    MOV EAX,dword ptr [ECX + 0x1cc4]    ; 00473617
    IMUL EDX,EAX                        ; 0047361d
    MOV EAX,EDX                         ; 00473620
    SAR EDX,0x1f                        ; 00473622
    SHL EDX,0x2                         ; 00473625
    SBB EAX,EDX                         ; 00473628
    SAR EAX,0x2                         ; 0047362a
    SUB EDI,EBX                         ; 0047362d
    IMUL EDI,EDI                        ; 0047362f
    SUB EBP,ESI                         ; 00473632
    IMUL EBP,EBP                        ; 00473634
    ADD EDI,EBP                         ; 00473637
    CMP EDI,EAX                         ; 00473639
    JLE 0x004736b9                      ; 0047363b
        ;   XREF to: 004736b9 (CONDITIONAL_JUMP)  ; LAB_004736b9
    MOV EAX,dword ptr [ECX + 0x1cc0]    ; 0047363d
    IMUL EAX,ESI                        ; 00473643
    MOV EDX,dword ptr [ECX + 0x2f94]    ; 00473646
    ADD EAX,EBX                         ; 0047364c
    MOV word ptr [EDX + EAX*0x2],0x0    ; 0047364e
    MOV EAX,dword ptr [ECX + 0x1cc0]    ; 00473654
    LEA EDX,[EAX + -0x1]                ; 0047365a
    IMUL EAX,ESI                        ; 0047365d
    SUB EDX,EBX                         ; 00473660
    ADD EAX,EDX                         ; 00473662
    MOV EDX,dword ptr [ECX + 0x2f94]    ; 00473664
    MOV word ptr [EDX + EAX*0x2],0x0    ; 0047366a
    MOV EAX,dword ptr [ECX + 0x1cc4]    ; 00473670
    DEC EAX                             ; 00473676
    MOV EDX,dword ptr [ECX + 0x1cc0]    ; 00473677
    SUB EAX,ESI                         ; 0047367d
    IMUL EDX,EAX                        ; 0047367f
    MOV EAX,dword ptr [ECX + 0x1cc0]    ; 00473682
    DEC EAX                             ; 00473688
    SUB EAX,EBX                         ; 00473689
    ADD EAX,EDX                         ; 0047368b
    MOV EDX,dword ptr [ECX + 0x2f94]    ; 0047368d
    MOV word ptr [EDX + EAX*0x2],0x0    ; 00473693
    MOV EAX,dword ptr [ECX + 0x1cc4]    ; 00473699
    DEC EAX                             ; 0047369f
    MOV EDX,dword ptr [ECX + 0x1cc0]    ; 004736a0
    SUB EAX,ESI                         ; 004736a6
    IMUL EAX,EDX                        ; 004736a8
    MOV EDX,dword ptr [ECX + 0x2f94]    ; 004736ab
    ADD EAX,EBX                         ; 004736b1
    MOV word ptr [EDX + EAX*0x2],0x0    ; 004736b3
    INC EBX                             ; 004736b9
        ;   Label: LAB_004736b9
    JMP 0x004735e8                      ; 004736ba
        ;   XREF to: 004735e8 (UNCONDITIONAL_JUMP)  ; LAB_004735e8

