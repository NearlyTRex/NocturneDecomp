; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_box_cpp_CBoundingBox3D_isVisibleWithShadow_FUN_0041d920(CBoundingBox3D *this_ptr)
;
; Parameters:
; CBoundingBox3D * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_box.cpp_FUN_0041daf0 at 0041dcb1
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01549b10
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01c6b598
;   undefined4 DAT_01c6b59c
;   undefined4 DAT_01c6b5a0
;   undefined4 DAT_01c6b5a4
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_testShadowMapRegion_FUN_0045f4d0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0041d920
        ;   Label: core_box.cpp_CBoundingBox3D_isVisibleWithShadow_FUN_0041d920
    SUB ESP,0x1c                        ; 0041d921
    CMP dword ptr [0x01549b10],0x0      ; 0041d924 | DAT_01549b10
    JZ 0x0041daad                       ; 0041d92b
        ;   XREF to: 0041daad (CONDITIONAL_JUMP)  ; LAB_0041daad
    PUSH EDI                            ; 0041d931
    PUSH ESI                            ; 0041d932
    PUSH EBX                            ; 0041d933
    MOV EDX,dword ptr [0x005f2afc]      ; 0041d934 | DAT_005f2afc
    MOV EAX,[0x01c6b5a0]                ; 0041d93a | DAT_01c6b5a0
    MOV ECX,dword ptr [0x01c6b598]      ; 0041d93f | DAT_01c6b598
    MOV EDI,dword ptr [0x01c6b5a0]      ; 0041d945 | DAT_01c6b5a0
    MOV ESI,dword ptr [0x01c6b59c]      ; 0041d94b | DAT_01c6b59c
    MOV EBP,dword ptr [0x01c6b5a4]      ; 0041d951 | DAT_01c6b5a4
    MOV EDX,dword ptr [EDX]             ; 0041d957 | DAT_01bdd7e4
    ADD EAX,ECX                         ; 0041d959
    SUB EDI,ECX                         ; 0041d95b
    MOV dword ptr [ESP + 0x20],EAX      ; 0041d95d
    MOV EAX,[0x01c6b5a4]                ; 0041d961 | DAT_01c6b5a4
    ADD EBP,ESI                         ; 0041d966
    SUB EAX,ESI                         ; 0041d968
    MOV ESI,EDX                         ; 0041d96a
    ADD EDX,0x180                       ; 0041d96c
    MOV dword ptr [ESP + 0x24],EAX      ; 0041d972
    MOV dword ptr [ESP + 0x1c],EDX      ; 0041d976
    MOV AH,byte ptr [ESI + 0x13]        ; 0041d97a
        ;   Label: LAB_0041d97a
    MOV ECX,ESI                         ; 0041d97d
    TEST AH,0x80                        ; 0041d97f
    JZ 0x0041dab7                       ; 0041d982
        ;   XREF to: 0041dab7 (CONDITIONAL_JUMP)  ; LAB_0041dab7
    MOV EAX,dword ptr [ESI + 0x8]       ; 0041d988
    MOV EDX,dword ptr [ESI]             ; 0041d98b
    NEG EAX                             ; 0041d98d
    CMP EAX,EDX                         ; 0041d98f
    JGE 0x0041d9bc                      ; 0041d991
        ;   XREF to: 0041d9bc (CONDITIONAL_JUMP)  ; LAB_0041d9bc
    MOV EBX,dword ptr [ESI + 0x8]       ; 0041d993
    CMP EDX,EBX                         ; 0041d996
    JGE 0x0041d9bc                      ; 0041d998
        ;   XREF to: 0041d9bc (CONDITIONAL_JUMP)  ; LAB_0041d9bc
    MOV EDX,dword ptr [0x01c6b598]      ; 0041d99a | DAT_01c6b598
    MOV EAX,dword ptr [ESI]             ; 0041d9a0
    IMUL EDX                            ; 0041d9a2
    IDIV EBX                            ; 0041d9a4
    ADD EAX,dword ptr [0x01c6b5a0]      ; 0041d9a6 | DAT_01c6b5a0
    CMP EAX,EDI                         ; 0041d9ac
    JLE 0x0041d9b2                      ; 0041d9ae
        ;   XREF to: 0041d9b2 (CONDITIONAL_JUMP)  ; LAB_0041d9b2
    MOV EDI,EAX                         ; 0041d9b0
    CMP EAX,dword ptr [ESP + 0x20]      ; 0041d9b2
        ;   Label: LAB_0041d9b2
    JGE 0x0041d9bc                      ; 0041d9b6
        ;   XREF to: 0041d9bc (CONDITIONAL_JUMP)  ; LAB_0041d9bc
    MOV dword ptr [ESP + 0x20],EAX      ; 0041d9b8
    MOV EAX,dword ptr [ECX + 0x8]       ; 0041d9bc
        ;   Label: LAB_0041d9bc
    MOV EDX,dword ptr [ECX + 0x4]       ; 0041d9bf
    NEG EAX                             ; 0041d9c2
    CMP EAX,EDX                         ; 0041d9c4
    JGE 0x0041d9f2                      ; 0041d9c6
        ;   XREF to: 0041d9f2 (CONDITIONAL_JUMP)  ; LAB_0041d9f2
    MOV EBX,dword ptr [ECX + 0x8]       ; 0041d9c8
    CMP EDX,EBX                         ; 0041d9cb
    JGE 0x0041d9f2                      ; 0041d9cd
        ;   XREF to: 0041d9f2 (CONDITIONAL_JUMP)  ; LAB_0041d9f2
    MOV EDX,dword ptr [0x01c6b59c]      ; 0041d9cf | DAT_01c6b59c
    MOV EAX,dword ptr [ECX + 0x4]       ; 0041d9d5
    IMUL EDX                            ; 0041d9d8
    IDIV EBX                            ; 0041d9da
    ADD EAX,dword ptr [0x01c6b5a4]      ; 0041d9dc | DAT_01c6b5a4
    CMP EAX,EBP                         ; 0041d9e2
    JLE 0x0041d9e8                      ; 0041d9e4
        ;   XREF to: 0041d9e8 (CONDITIONAL_JUMP)  ; LAB_0041d9e8
    MOV EBP,EAX                         ; 0041d9e6
    CMP EAX,dword ptr [ESP + 0x24]      ; 0041d9e8
        ;   Label: LAB_0041d9e8
    JGE 0x0041d9f2                      ; 0041d9ec
        ;   XREF to: 0041d9f2 (CONDITIONAL_JUMP)  ; LAB_0041d9f2
    MOV dword ptr [ESP + 0x24],EAX      ; 0041d9ee
    MOV EDX,dword ptr [ECX + 0x8]       ; 0041d9f2
        ;   Label: LAB_0041d9f2
    CMP EDX,dword ptr [ECX]             ; 0041d9f5
    JG 0x0041da07                       ; 0041d9f7
        ;   XREF to: 0041da07 (CONDITIONAL_JUMP)  ; LAB_0041da07
    MOV EBX,dword ptr [0x01c6b5a0]      ; 0041d9f9 | DAT_01c6b5a0
    MOV EDI,dword ptr [0x01c6b598]      ; 0041d9ff | DAT_01c6b598
    ADD EDI,EBX                         ; 0041da05
    MOV EAX,dword ptr [ECX + 0x8]       ; 0041da07
        ;   Label: LAB_0041da07
    MOV EDX,dword ptr [ECX]             ; 0041da0a
    NEG EAX                             ; 0041da0c
    CMP EAX,EDX                         ; 0041da0e
    JL 0x0041da23                       ; 0041da10
        ;   XREF to: 0041da23 (CONDITIONAL_JUMP)  ; LAB_0041da23
    MOV EBX,dword ptr [0x01c6b598]      ; 0041da12 | DAT_01c6b598
    MOV EAX,[0x01c6b5a0]                ; 0041da18 | DAT_01c6b5a0
    SUB EAX,EBX                         ; 0041da1d
    MOV dword ptr [ESP + 0x20],EAX      ; 0041da1f
    MOV EDX,dword ptr [ECX + 0x8]       ; 0041da23
        ;   Label: LAB_0041da23
    CMP EDX,dword ptr [ECX + 0x4]       ; 0041da26
    JG 0x0041da3c                       ; 0041da29
        ;   XREF to: 0041da3c (CONDITIONAL_JUMP)  ; LAB_0041da3c
    MOV EBX,dword ptr [0x01c6b5a4]      ; 0041da2b | DAT_01c6b5a4
    MOV EAX,[0x01c6b59c]                ; 0041da31 | DAT_01c6b59c
    ADD EAX,EBX                         ; 0041da36
    MOV dword ptr [ESP + 0x24],EAX      ; 0041da38
    MOV EAX,dword ptr [ECX + 0x8]       ; 0041da3c
        ;   Label: LAB_0041da3c
    MOV EDX,dword ptr [ECX + 0x4]       ; 0041da3f
    NEG EAX                             ; 0041da42
    CMP EAX,EDX                         ; 0041da44
    JL 0x0041da56                       ; 0041da46
        ;   XREF to: 0041da56 (CONDITIONAL_JUMP)  ; LAB_0041da56
    MOV ECX,dword ptr [0x01c6b59c]      ; 0041da48 | DAT_01c6b59c
    MOV EBP,dword ptr [0x01c6b5a4]      ; 0041da4e | DAT_01c6b5a4
    SUB EBP,ECX                         ; 0041da54
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0041da56
        ;   Label: LAB_0041da56
    ADD ESI,0x30                        ; 0041da5a
    CMP ESI,EBX                         ; 0041da5d
    JNZ 0x0041d97a                      ; 0041da5f
        ;   XREF to: 0041d97a (CONDITIONAL_JUMP)  ; LAB_0041d97a
    MOV ESI,dword ptr [ESP + 0x20]      ; 0041da65
    MOV EAX,dword ptr [ESP + 0x24]      ; 0041da69
    MOV EDX,dword ptr [0x01549b10]      ; 0041da6d | DAT_01549b10
    SAR EDI,0x10                        ; 0041da73
    SAR EAX,0x10                        ; 0041da76
    SAR EBP,0x10                        ; 0041da79
    MOV dword ptr [ESP + 0x24],EAX      ; 0041da7c
    MOV dword ptr [ESP + 0x14],EAX      ; 0041da80
    LEA EAX,[ESP + 0xc]                 ; 0041da84
    SAR ESI,0x10                        ; 0041da88
    PUSH EAX                            ; 0041da8b
    MOV dword ptr [ESP + 0x14],EDI      ; 0041da8c
    MOV dword ptr [ESP + 0x1c],EBP      ; 0041da90
    PUSH EDX                            ; 0041da94
    MOV dword ptr [ESP + 0x28],ESI      ; 0041da95
    MOV dword ptr [ESP + 0x14],ESI      ; 0041da99
    CALL core_dlight.cpp_CDemonLight_testShadowMapRegion_FUN_0045f4d0 ; 0041da9d
        ;   XREF to: 0045f4d0 (UNCONDITIONAL_CALL)  ; int core_dlight.cpp_CDemonLight_testShadowMapRegion_FUN_0045f4d0(CDemonLight * this_ptr, CRect * rect)
    ADD ESP,0x8                         ; 0041daa2
    POP EBX                             ; 0041daa5
    POP ESI                             ; 0041daa6
    POP EDI                             ; 0041daa7
    ADD ESP,0x1c                        ; 0041daa8
    POP EBP                             ; 0041daab
    RET                                 ; 0041daac
    MOV EAX,0x1                         ; 0041daad
        ;   Label: LAB_0041daad
    ADD ESP,0x1c                        ; 0041dab2
    POP EBP                             ; 0041dab5
    RET                                 ; 0041dab6
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041dab7
        ;   Label: LAB_0041dab7
    MOV EDX,dword ptr [ESI + 0x10]      ; 0041dabb
    CMP EAX,EDX                         ; 0041dabe
    JLE 0x0041dac6                      ; 0041dac0
        ;   XREF to: 0041dac6 (CONDITIONAL_JUMP)  ; LAB_0041dac6
    MOV dword ptr [ESP + 0x20],EDX      ; 0041dac2
    MOV EBX,dword ptr [ECX + 0x10]      ; 0041dac6
        ;   Label: LAB_0041dac6
    CMP EDI,EBX                         ; 0041dac9
    JGE 0x0041dacf                      ; 0041dacb
        ;   XREF to: 0041dacf (CONDITIONAL_JUMP)  ; LAB_0041dacf
    MOV EDI,EBX                         ; 0041dacd
    MOV EAX,dword ptr [ESP + 0x24]      ; 0041dacf
        ;   Label: LAB_0041dacf
    MOV EDX,dword ptr [ECX + 0x14]      ; 0041dad3
    CMP EAX,EDX                         ; 0041dad6
    JLE 0x0041dade                      ; 0041dad8
        ;   XREF to: 0041dade (CONDITIONAL_JUMP)  ; LAB_0041dade
    MOV dword ptr [ESP + 0x24],EDX      ; 0041dada
    MOV EBX,dword ptr [ECX + 0x14]      ; 0041dade
        ;   Label: LAB_0041dade
    CMP EBP,EBX                         ; 0041dae1
    JGE 0x0041da56                      ; 0041dae3
        ;   XREF to: 0041da56 (CONDITIONAL_JUMP)  ; LAB_0041da56
    MOV EBP,EBX                         ; 0041dae9
    JMP 0x0041da56                      ; 0041daeb
        ;   XREF to: 0041da56 (UNCONDITIONAL_JUMP)  ; LAB_0041da56

