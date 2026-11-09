; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_dcamera_cpp_sampleFogAlongRay_FUN_0044c840(int param_1,int *param_2,int *param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_00453610 at 004538b0
;   core_dcamera.cpp_FUN_00454360 at 004543fb
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044c840
        ;   Label: core_dcamera.cpp_sampleFogAlongRay_FUN_0044c840
    PUSH ESI                            ; 0044c841
    PUSH EDI                            ; 0044c842
    PUSH EBP                            ; 0044c843
    SUB ESP,0x1c                        ; 0044c844
    MOV EBP,dword ptr [ESP + 0x30]      ; 0044c847
    MOV ESI,dword ptr [ESP + 0x34]      ; 0044c84b
    MOV ECX,dword ptr [ESP + 0x38]      ; 0044c84f
    CMP dword ptr [ESP + 0x3c],0x0      ; 0044c853
    JZ 0x0044c9e4                       ; 0044c858
        ;   XREF to: 0044c9e4 (CONDITIONAL_JUMP)  ; LAB_0044c9e4
    MOV EBX,dword ptr [ESI]             ; 0044c85e
    MOV EAX,dword ptr [ECX]             ; 0044c860
    SUB EAX,EBX                         ; 0044c862
    MOV EDI,dword ptr [ESI + 0x4]       ; 0044c864
    MOV dword ptr [ESP + 0x14],EAX      ; 0044c867
    MOV EAX,dword ptr [ECX + 0x4]       ; 0044c86b
    SUB EAX,EDI                         ; 0044c86e
    MOV EDX,dword ptr [ESI + 0x8]       ; 0044c870
    MOV dword ptr [ESP + 0xc],EAX       ; 0044c873
    MOV EAX,dword ptr [ECX + 0x8]       ; 0044c877
    SUB EAX,EDX                         ; 0044c87a
    MOV dword ptr [ESP + 0x10],EAX      ; 0044c87c
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0044c880
    MOV EDX,EAX                         ; 0044c884
    SAR EDX,0x1f                        ; 0044c886
    SHL EDX,0x8                         ; 0044c889
    SBB EAX,EDX                         ; 0044c88c
    SAR EAX,0x8                         ; 0044c88e
    MOV dword ptr [ESP + 0x3c],EAX      ; 0044c891
    TEST EAX,EAX                        ; 0044c895
    JZ 0x0044c9dc                       ; 0044c897
        ;   XREF to: 0044c9dc (CONDITIONAL_JUMP)  ; LAB_0044c9dc
    MOV EAX,dword ptr [ESP + 0x14]      ; 0044c89d
    MOV EDX,EAX                         ; 0044c8a1
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0044c8a3
    SAR EDX,0x1f                        ; 0044c8a7
    IDIV EBX                            ; 0044c8aa
    MOV dword ptr [ESP + 0x14],EAX      ; 0044c8ac
    MOV EAX,dword ptr [ESP + 0xc]       ; 0044c8b0
    MOV EDX,EAX                         ; 0044c8b4
    SAR EDX,0x1f                        ; 0044c8b6
    IDIV EBX                            ; 0044c8b9
    MOV dword ptr [ESP + 0xc],EAX       ; 0044c8bb
    MOV EAX,dword ptr [ESP + 0x10]      ; 0044c8bf
    MOV EDX,EAX                         ; 0044c8c3
    SAR EDX,0x1f                        ; 0044c8c5
    IDIV EBX                            ; 0044c8c8
    MOV EDI,ESP                         ; 0044c8ca
    MOVSD ES:EDI,ESI                    ; 0044c8cc
    MOVSD ES:EDI,ESI                    ; 0044c8cd
    MOVSD ES:EDI,ESI                    ; 0044c8ce
    MOV ECX,EBX                         ; 0044c8cf
    MOV ESI,dword ptr [ESP]             ; 0044c8d1
    MOV EDI,dword ptr [ESP + 0x4]       ; 0044c8d4
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044c8d8
    MOV dword ptr [ESP + 0x10],EAX      ; 0044c8dc
    XOR EBX,EBX                         ; 0044c8e0
    MOV EAX,dword ptr [EBP + 0x1000]    ; 0044c8e2
    MOV dword ptr [ESP + 0x18],EBX      ; 0044c8e8
    ADD ESI,EAX                         ; 0044c8ec
    MOV EAX,dword ptr [EBP + 0x1004]    ; 0044c8ee
    MOV dword ptr [ESP],ESI             ; 0044c8f4
    ADD EDI,EAX                         ; 0044c8f7
    MOV EAX,dword ptr [EBP + 0x1008]    ; 0044c8f9
    XOR ESI,ESI                         ; 0044c8ff
    ADD EDX,EAX                         ; 0044c901
    MOV dword ptr [ESP + 0x4],EDI       ; 0044c903
    MOV dword ptr [ESP + 0x8],EDX       ; 0044c907
    TEST ECX,ECX                        ; 0044c90b
    JLE 0x0044c9d8                      ; 0044c90d
        ;   XREF to: 0044c9d8 (CONDITIONAL_JUMP)  ; LAB_0044c9d8
    MOV EAX,dword ptr [ESP + 0x8]       ; 0044c913
        ;   Label: LAB_0044c913
    MOV EDX,EAX                         ; 0044c917
    SAR EDX,0x1f                        ; 0044c919
    SHL EDX,0x8                         ; 0044c91c
    SBB EAX,EDX                         ; 0044c91f
    SAR EAX,0x8                         ; 0044c921
    MOV ECX,EAX                         ; 0044c924
    MOV EAX,dword ptr [ESP + 0x4]       ; 0044c926
    MOV EDX,EAX                         ; 0044c92a
    SAR EDX,0x1f                        ; 0044c92c
    SHL EDX,0x8                         ; 0044c92f
    SBB EAX,EDX                         ; 0044c932
    SAR EAX,0x8                         ; 0044c934
    AND ECX,0xf                         ; 0044c937
    SHL ECX,0x8                         ; 0044c93a
    AND EAX,0xf                         ; 0044c93d
    ADD ECX,EBP                         ; 0044c940
    SHL EAX,0x4                         ; 0044c942
    ADD ECX,EAX                         ; 0044c945
    MOV EAX,dword ptr [ESP]             ; 0044c947
    MOV EDX,EAX                         ; 0044c94a
    SAR EDX,0x1f                        ; 0044c94c
    SHL EDX,0x8                         ; 0044c94f
    SBB EAX,EDX                         ; 0044c952
    SAR EAX,0x8                         ; 0044c954
    AND EAX,0xf                         ; 0044c957
    MOV CL,byte ptr [ECX + EAX*0x1]     ; 0044c95a
    MOV EDX,ECX                         ; 0044c95d
    MOV EAX,dword ptr [EBP + 0x101c]    ; 0044c95f
    AND EDX,0xff                        ; 0044c965
    IMUL EDX                            ; 0044c96b
    SHRD EAX,EDX,0x10                   ; 0044c96d
    MOV EBX,dword ptr [EBP + 0x1018]    ; 0044c971
    MOV ECX,EAX                         ; 0044c977
    TEST EBX,EBX                        ; 0044c979
    JZ 0x0044c991                       ; 0044c97b
        ;   XREF to: 0044c991 (CONDITIONAL_JUMP)  ; LAB_0044c991
    MOV EAX,dword ptr [ESP + 0x4]       ; 0044c97d
    CMP EAX,EBX                         ; 0044c981
    JLE 0x0044c9e8                      ; 0044c983
        ;   XREF to: 0044c9e8 (CONDITIONAL_JUMP)  ; LAB_0044c9e8
    XOR EAX,EAX                         ; 0044c985
    MOV EDX,ECX                         ; 0044c987
        ;   Label: LAB_0044c987
    IMUL EDX                            ; 0044c989
    SHRD EAX,EDX,0x10                   ; 0044c98b
    MOV ECX,EAX                         ; 0044c98f
    MOV EBX,dword ptr [ESP + 0x18]      ; 0044c991
        ;   Label: LAB_0044c991
    ADD EBX,ECX                         ; 0044c995
    MOV dword ptr [ESP + 0x18],EBX      ; 0044c997
    CMP EBX,0x4000                      ; 0044c99b
    JA 0x0044ca06                       ; 0044c9a1
        ;   XREF to: 0044ca06 (CONDITIONAL_JUMP)  ; LAB_0044ca06
    MOV EAX,dword ptr [ESP + 0x14]      ; 0044c9a3
    MOV EBX,dword ptr [ESP]             ; 0044c9a7
    MOV EDI,dword ptr [ESP + 0x4]       ; 0044c9aa
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044c9ae
    MOV ECX,dword ptr [ESP + 0x3c]      ; 0044c9b2
    ADD EBX,EAX                         ; 0044c9b6
    MOV EAX,dword ptr [ESP + 0xc]       ; 0044c9b8
    INC ESI                             ; 0044c9bc
    ADD EDI,EAX                         ; 0044c9bd
    MOV EAX,dword ptr [ESP + 0x10]      ; 0044c9bf
    MOV dword ptr [ESP],EBX             ; 0044c9c3
    ADD EDX,EAX                         ; 0044c9c6
    MOV dword ptr [ESP + 0x4],EDI       ; 0044c9c8
    MOV dword ptr [ESP + 0x8],EDX       ; 0044c9cc
    CMP ESI,ECX                         ; 0044c9d0
    JL 0x0044c913                       ; 0044c9d2
        ;   XREF to: 0044c913 (CONDITIONAL_JUMP)  ; LAB_0044c913
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044c9d8
        ;   Label: LAB_0044c9d8
    ADD ESP,0x1c                        ; 0044c9dc
        ;   Label: LAB_0044c9dc
    POP EBP                             ; 0044c9df
    POP EDI                             ; 0044c9e0
    POP ESI                             ; 0044c9e1
    POP EBX                             ; 0044c9e2
    RET                                 ; 0044c9e3
    XOR EAX,EAX                         ; 0044c9e4
        ;   Label: LAB_0044c9e4
    JMP 0x0044c9dc                      ; 0044c9e6
        ;   XREF to: 0044c9dc (UNCONDITIONAL_JUMP)  ; LAB_0044c9dc
    TEST EAX,EAX                        ; 0044c9e8
        ;   Label: LAB_0044c9e8
    JGE 0x0044c9f3                      ; 0044c9ea
        ;   XREF to: 0044c9f3 (CONDITIONAL_JUMP)  ; LAB_0044c9f3
    MOV EAX,0x10000                     ; 0044c9ec
    JMP 0x0044c987                      ; 0044c9f1
        ;   XREF to: 0044c987 (UNCONDITIONAL_JUMP)  ; LAB_0044c987
    MOV EDX,dword ptr [ESP + 0x4]       ; 0044c9f3
        ;   Label: LAB_0044c9f3
    MOV EAX,EBX                         ; 0044c9f7
    SUB EAX,EDX                         ; 0044c9f9
    MOV EDX,0x10000                     ; 0044c9fb
    IMUL EDX                            ; 0044ca00
    IDIV EBX                            ; 0044ca02
    JMP 0x0044c987                      ; 0044ca04
        ;   XREF to: 0044c987 (UNCONDITIONAL_JUMP)  ; LAB_0044c987
    MOV EAX,0x4000                      ; 0044ca06
        ;   Label: LAB_0044ca06
    ADD ESP,0x1c                        ; 0044ca0b
    POP EBP                             ; 0044ca0e
    POP EDI                             ; 0044ca0f
    POP ESI                             ; 0044ca10
    POP EBX                             ; 0044ca11
    RET                                 ; 0044ca12

