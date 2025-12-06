; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dcamera.cpp_blendCoronaTextureSpan_FUN_004517f0(int scanline_y, int x_start, int x_end, int source_buffer_offset)
;
; Parameters:
; int              Stack[0x4]:4   scanline_y
; int              Stack[0x8]:4   x_start
; int              Stack[0xc]:4   x_end
; int              Stack[0x10]:4   source_buffer_offset
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_004518f0 at 00451e6d
;
; Referenced Globals:
;   char[241][320] g_CoronaBlurOutputBuffer
;   char[4096] g_CameraLookupTable
;   CDemonGlobe* g_CurrentGlobe
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004517f0
        ;   Label: core_dcamera.cpp_blendCoronaTextureSpan_FUN_004517f0
    PUSH ESI                            ; 004517f1
    PUSH EDI                            ; 004517f2
    PUSH EBP                            ; 004517f3
    MOV EBP,ESP                         ; 004517f4
    SUB ESP,0x10                        ; 004517f6
    MOV ECX,dword ptr [EBP + 0x18]      ; 004517f9
    MOV EDX,dword ptr [EBP + 0x14]      ; 004517fc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004517ff
    ADD EAX,EDX                         ; 00451806
    MOV EDX,0xba8c78                    ; 00451808 | char[241][320] g_CoronaBlurOutputBuffer
    SHL EAX,0x6                         ; 0045180d
    ADD EDX,EAX                         ; 00451810
    ADD EDX,ECX                         ; 00451812
    MOV dword ptr [EBP + -0x10],EDX     ; 00451814
    MOV EDX,dword ptr [EBP + 0x20]      ; 00451817
    ADD EDX,0x784                       ; 0045181a
    ADD EAX,EDX                         ; 00451820
    ADD EAX,ECX                         ; 00451822
    MOV dword ptr [EBP + -0xc],EAX      ; 00451824
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00451827
    SUB EAX,ECX                         ; 0045182a
    MOV dword ptr [EBP + -0x8],EAX      ; 0045182c
    MOV EAX,[0x015c4170]                ; 0045182f | CDemonGlobe * g_CurrentGlobe
    MOV EAX,dword ptr [EAX + 0x3c]      ; 00451834
    MOV dword ptr [EBP + -0x4],EAX      ; 00451837
    MOV ECX,dword ptr [EBP + 0xfffffff8] ; 0045183a
    MOV ESI,dword ptr [EBP + 0xfffffff4] ; 00451840
    MOV EDI,dword ptr [EBP + 0xfffffff0] ; 00451846
    MOV EBX,dword ptr [EBP + 0xfffffffc] ; 0045184c
    SHR EBX,0xa                         ; 00451852
    PXOR MM7,MM7                        ; 00451855
    MOVD MM3,EBX                        ; 00451858
    MOVD MM4,EBX                        ; 0045185b
    MOVD MM5,EBX                        ; 0045185e
    MOVD MM6,EBX                        ; 00451861
    PSLLQ MM3,0x18                      ; 00451864
    PSLLQ MM4,0x10                      ; 00451868
    PSLLQ MM5,0x8                       ; 0045186c
    POR MM6,MM3                         ; 00451870
    POR MM6,MM4                         ; 00451873
    POR MM6,MM5                         ; 00451876
    PUNPCKLBW MM6,MM7                   ; 00451879
    TEST EDI,0x3                        ; 0045187c
        ;   Label: LAB_0045187c
    JZ 0x0045189b                       ; 00451882 | LAB_0045189b
        ;   XREF to: 0045189b (CONDITIONAL_JUMP)
    MOVZX EAX,byte ptr [ESI]            ; 00451884
    SHL EAX,0x6                         ; 00451887
    ADD EAX,EBX                         ; 0045188a
    MOV AL,byte ptr [EAX + 0x13d9758]   ; 0045188c | char[4096] g_CameraLookupTable
    ADD byte ptr [EDI],AL               ; 00451892
    INC ESI                             ; 00451894
    INC EDI                             ; 00451895
    DEC ECX                             ; 00451896
    JG 0x0045187c                       ; 00451897 | LAB_0045187c
        ;   XREF to: 0045187c (CONDITIONAL_JUMP)
    JMP 0x004518db                      ; 00451899 | LAB_004518db
        ;   XREF to: 004518db (UNCONDITIONAL_JUMP)
    SUB ECX,0x4                         ; 0045189b
        ;   Label: LAB_0045189b
    JL 0x004518c1                       ; 0045189e | LAB_004518c1
        ;   XREF to: 004518c1 (CONDITIONAL_JUMP)
    MOVD MM0,dword ptr [ESI]            ; 004518a0
    MOVD MM1,dword ptr [EDI]            ; 004518a3
    PUNPCKLBW MM0,MM7                   ; 004518a6
    PMULLW MM0,MM6                      ; 004518a9
    PSRLW MM0,0x6                       ; 004518ac
    PACKUSWB MM0,MM7                    ; 004518b0
    PADDW MM0,MM1                       ; 004518b3
    MOVD dword ptr [EDI],MM0            ; 004518b6
    ADD ESI,0x4                         ; 004518b9
    ADD EDI,0x4                         ; 004518bc
    JMP 0x0045189b                      ; 004518bf | LAB_0045189b
        ;   XREF to: 0045189b (UNCONDITIONAL_JUMP)
    ADD ECX,0x4                         ; 004518c1
        ;   Label: LAB_004518c1
    JZ 0x004518db                       ; 004518c4 | LAB_004518db
        ;   XREF to: 004518db (CONDITIONAL_JUMP)
    MOVZX EAX,byte ptr [ESI]            ; 004518c6
        ;   Label: LAB_004518c6
    SHL EAX,0x6                         ; 004518c9
    ADD EAX,EBX                         ; 004518cc
    MOV AL,byte ptr [EAX + 0x13d9758]   ; 004518ce | char[4096] g_CameraLookupTable
    ADD byte ptr [EDI],AL               ; 004518d4
    INC ESI                             ; 004518d6
    INC EDI                             ; 004518d7
    DEC ECX                             ; 004518d8
    JG 0x004518c6                       ; 004518d9 | LAB_004518c6
        ;   XREF to: 004518c6 (CONDITIONAL_JUMP)
    EMMS                                ; 004518db
        ;   Label: LAB_004518db
    MOV ESP,EBP                         ; 004518dd
    POP EBP                             ; 004518df
    POP EDI                             ; 004518e0
    POP ESI                             ; 004518e1
    POP EBX                             ; 004518e2
    RET                                 ; 004518e3

