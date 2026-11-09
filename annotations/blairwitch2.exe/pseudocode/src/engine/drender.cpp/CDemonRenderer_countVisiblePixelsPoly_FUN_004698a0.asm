; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_drender_cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_004698a0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLPrimitivePoly * Stack[0x8]:4   poly
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_005386e0 at 005388d4
;
; Referenced Globals:
;   TerminatedCString s_engine_drender_cpp_005d151c
;   TerminatedCString s_Can_t_use_demonZFacetCou_005d1532
;   undefined4 DAT_01ba5c7c
;   undefined4 DAT_01ba5c84
;   undefined4 DAT_01ba5c88
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   engine_3d.c_isVisiblePlane_FUN_00403970
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004698a0
        ;   Label: engine_drender.cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_004698a0
    PUSH ESI                            ; 004698a1
    PUSH EDI                            ; 004698a2
    PUSH EBP                            ; 004698a3
    SUB ESP,0x4                         ; 004698a4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004698a7
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004698ab
    XOR EDX,EDX                         ; 004698af
    MOV ECX,dword ptr [EBP + 0xc]       ; 004698b1
    MOV dword ptr [0x01ba5c7c],EDX      ; 004698b4 | DAT_01ba5c7c
    TEST ECX,ECX                        ; 004698ba
    JNZ 0x00469955                      ; 004698bc
        ;   XREF to: 00469955 (CONDITIONAL_JUMP)  ; LAB_00469955
    MOV EBX,0xffffffff                  ; 004698c2
        ;   Label: LAB_004698c2
    MOV ESI,dword ptr [EDI + 0x4]       ; 004698c7
    XOR EAX,EAX                         ; 004698ca
    MOV dword ptr [ESP],EBX             ; 004698cc
    TEST ESI,ESI                        ; 004698cf
    JLE 0x00469900                      ; 004698d1
        ;   XREF to: 00469900 (CONDITIONAL_JUMP)  ; LAB_00469900
    MOV EDX,EDI                         ; 004698d3
    XOR ECX,ECX                         ; 004698d5
    MOV EBX,dword ptr [EDX + 0x18]      ; 004698d7
        ;   Label: LAB_004698d7
    MOV dword ptr [ECX + 0x1ba5c84],EBX ; 004698da | DAT_01ba5c84 | DAT_01ba5c88
    IMUL ESI,EBX,0x30                   ; 004698e0
    MOV EBX,dword ptr [EBP]             ; 004698e3
    ADD ECX,0x4                         ; 004698e6
    ADD EDX,0xc                         ; 004698e9
    MOV EBX,dword ptr [ESI + EBX*0x1 + 0x10] ; 004698ec
    MOV ESI,dword ptr [ESP]             ; 004698f0
    INC EAX                             ; 004698f3
    AND ESI,EBX                         ; 004698f4
    MOV EBX,dword ptr [EDI + 0x4]       ; 004698f6
    MOV dword ptr [ESP],ESI             ; 004698f9
    CMP EAX,EBX                         ; 004698fc
    JL 0x004698d7                       ; 004698fe
        ;   XREF to: 004698d7 (CONDITIONAL_JUMP)  ; LAB_004698d7
    TEST byte ptr [ESP + 0x3],0x80      ; 00469900
        ;   Label: LAB_00469900
    JZ 0x0046990d                       ; 00469905
        ;   XREF to: 0046990d (CONDITIONAL_JUMP)  ; LAB_0046990d
    TEST byte ptr [ESP],0x1f            ; 00469907
    JNZ 0x0046996b                      ; 0046990b
        ;   XREF to: 0046996b (CONDITIONAL_JUMP)  ; LAB_0046996b
    CMP dword ptr [EBP + 0x4],0x0       ; 0046990d
        ;   Label: LAB_0046990d
    JZ 0x0046996f                       ; 00469911
        ;   XREF to: 0046996f (CONDITIONAL_JUMP)  ; LAB_0046996f
    MOV EBX,0x5d151c                    ; 00469913 | = "..\\engine\\drender.cpp"
    MOV ESI,0x29d                       ; 00469918
    PUSH 0x5d1532                       ; 0046991d | = "Can't use demonZFacetCount in shadow ..."
    MOV dword ptr [0x01d046a0],EBX      ; 00469922 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00469928 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0046992e
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00469933
    PUSH 0x1ba5c84                      ; 00469936 | DAT_01ba5c84
        ;   Label: LAB_00469936
    MOV EAX,dword ptr [EDI + 0x4]       ; 0046993b
    PUSH EAX                            ; 0046993e
    PUSH EBP                            ; 0046993f
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590 ; 00469940
        ;   XREF to: 00469590 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    MOV EAX,[0x01ba5c7c]                ; 00469945 | DAT_01ba5c7c
    ADD ESP,0xc                         ; 0046994a
    ADD ESP,0x4                         ; 0046994d
        ;   Label: LAB_0046994d
    POP EBP                             ; 00469950
    POP EDI                             ; 00469951
    POP ESI                             ; 00469952
    POP EBX                             ; 00469953
    RET                                 ; 00469954
    LEA EAX,[EDI + 0x8]                 ; 00469955
        ;   Label: LAB_00469955
    PUSH EAX                            ; 00469958
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 00469959
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403970()
    ADD ESP,0x4                         ; 0046995e
    TEST EAX,EAX                        ; 00469961
    JNZ 0x004698c2                      ; 00469963
        ;   XREF to: 004698c2 (CONDITIONAL_JUMP)  ; LAB_004698c2
    JMP 0x0046994d                      ; 00469969
        ;   XREF to: 0046994d (UNCONDITIONAL_JUMP)  ; LAB_0046994d
    XOR EAX,EAX                         ; 0046996b
        ;   Label: LAB_0046996b
    JMP 0x0046994d                      ; 0046996d
        ;   XREF to: 0046994d (UNCONDITIONAL_JUMP)  ; LAB_0046994d
    MOV EDX,0xc0                        ; 0046996f
        ;   Label: LAB_0046996f
    MOV ECX,0x6                         ; 00469974
    MOV EAX,0x46ef35                    ; 00469979
    MOV dword ptr [0x01c38b54],EDX      ; 0046997e | DAT_01c38b54
    MOV dword ptr [0x01c38b58],ECX      ; 00469984 | DAT_01c38b58
    MOV [0x01c35e6c],EAX                ; 0046998a | DAT_01c35e6c
    JMP 0x00469936                      ; 0046998f
        ;   XREF to: 00469936 (UNCONDITIONAL_JUMP)  ; LAB_00469936

