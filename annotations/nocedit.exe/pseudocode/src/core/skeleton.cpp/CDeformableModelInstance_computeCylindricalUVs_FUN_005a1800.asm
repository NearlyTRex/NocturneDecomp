; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_005a1800 (CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_FUN_0042af60 at 0042b061
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_0064efd4
;   TerminatedCString s_CDeformableModelInstance_0064efe9
;   double DOUBLE_0064f030 = 2670176.85779676
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   undefined4 DAT_01000000
;   CDemonRenderer g_CDemonRendererInstance
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   crt_math.c_atan2_FUN_006013b1
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1800
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_005a1800
    PUSH ESI                            ; 005a1801
    PUSH EDI                            ; 005a1802
    PUSH EBP                            ; 005a1803
    SUB ESP,0x8                         ; 005a1804
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005a1807
    CMP dword ptr [EAX + 0x2230],0x0    ; 005a180b
    JL 0x005a18e4                       ; 005a1812
        ;   XREF to: 005a18e4 (CONDITIONAL_JUMP)  ; LAB_005a18e4
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005a1818
        ;   Label: LAB_005a1818
    PUSH ESI                            ; 005a181c
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 005a181d
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    MOV EDX,dword ptr [ESI + 0x2230]    ; 005a1822
    MOV ECX,dword ptr [EAX + EDX*0x4 + 0x2c] ; 005a1828
    MOV EDX,dword ptr [ESI + 0x2234]    ; 005a182c
    MOV EDI,0x1                         ; 005a1832
    ADD ESP,0x4                         ; 005a1837
    MOV ESI,dword ptr [EDX + 0x4]       ; 005a183a
    MOV EAX,ECX                         ; 005a183d
    MOV EBP,ESI                         ; 005a183f
    CMP ECX,EDI                         ; 005a1841
    JLE 0x005a185d                      ; 005a1843
        ;   XREF to: 005a185d (CONDITIONAL_JUMP)  ; LAB_005a185d
    LEA ECX,[EDX + 0xc]                 ; 005a1845
    MOV EDX,dword ptr [ECX + 0x4]       ; 005a1848
        ;   Label: LAB_005a1848
    CMP EDX,ESI                         ; 005a184b
    JGE 0x005a190c                      ; 005a184d
        ;   XREF to: 005a190c (CONDITIONAL_JUMP)  ; LAB_005a190c
    MOV ESI,EDX                         ; 005a1853
    INC EDI                             ; 005a1855
        ;   Label: LAB_005a1855
    ADD ECX,0xc                         ; 005a1856
    CMP EDI,EAX                         ; 005a1859
    JL 0x005a1848                       ; 005a185b
        ;   XREF to: 005a1848 (CONDITIONAL_JUMP)  ; LAB_005a1848
    SUB EBP,ESI                         ; 005a185d
        ;   Label: LAB_005a185d
    CMP EBP,0x1                         ; 005a185f
    JGE 0x005a1869                      ; 005a1862
        ;   XREF to: 005a1869 (CONDITIONAL_JUMP)  ; LAB_005a1869
    MOV EBP,0x1                         ; 005a1864
    TEST EAX,EAX                        ; 005a1869
        ;   Label: LAB_005a1869
    JLE 0x005a18dc                      ; 005a186b
        ;   XREF to: 005a18dc (CONDITIONAL_JUMP)  ; LAB_005a18dc
    MOV EDX,EAX                         ; 005a186d
    SHL EAX,0x2                         ; 005a186f
    SUB EAX,EDX                         ; 005a1872
    XOR ECX,ECX                         ; 005a1874
    SHL EAX,0x4                         ; 005a1876
    XOR EDI,EDI                         ; 005a1879
    MOV dword ptr [ESP + 0x4],EAX       ; 005a187b
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005a187f
        ;   Label: LAB_005a187f
    MOV EDX,dword ptr [EDX + 0x2234]    ; 005a1883
    ADD EDX,EDI                         ; 005a1889
    CMP dword ptr [EDX],0x0             ; 005a188b
    JNZ 0x005a191b                      ; 005a188e
        ;   XREF to: 005a191b (CONDITIONAL_JUMP)  ; LAB_005a191b
    CMP dword ptr [EDX + 0x8],0x0       ; 005a1894
    JNZ 0x005a191b                      ; 005a1898
        ;   XREF to: 005a191b (CONDITIONAL_JUMP)  ; LAB_005a191b
    MOV EAX,[0x006703ec]                ; 005a189e | g_CDemonRendererPtr2
    MOV EAX,dword ptr [EAX]             ; 005a18a3 | g_CDemonRendererInstance
    MOV EBX,dword ptr [ESP + 0x20]      ; 005a18a5
    MOV dword ptr [ECX + EAX*0x1 + 0x18],EBX ; 005a18a9
        ;   Label: LAB_005a18a9
    MOV EBX,EBP                         ; 005a18ad
    MOV EAX,dword ptr [EDX + 0x4]       ; 005a18af
    MOV EDX,0x1000000                   ; 005a18b2 | DAT_01000000
    SUB EAX,ESI                         ; 005a18b7
    IMUL EDX                            ; 005a18b9
    IDIV EBX                            ; 005a18bb
    MOV EDX,dword ptr [ESP + 0x24]      ; 005a18bd
    ADD EDX,EAX                         ; 005a18c1
    MOV EAX,[0x006703ec]                ; 005a18c3 | g_CDemonRendererPtr2
    ADD ECX,0x30                        ; 005a18c8
    MOV EAX,dword ptr [EAX]             ; 005a18cb | g_CDemonRendererInstance
    MOV dword ptr [ECX + EAX*0x1 + -0x14],EDX ; 005a18cd
    MOV EAX,dword ptr [ESP + 0x4]       ; 005a18d1
    ADD EDI,0xc                         ; 005a18d5
    CMP ECX,EAX                         ; 005a18d8
    JL 0x005a187f                       ; 005a18da
        ;   XREF to: 005a187f (CONDITIONAL_JUMP)  ; LAB_005a187f
    ADD ESP,0x8                         ; 005a18dc
        ;   Label: LAB_005a18dc
    POP EBP                             ; 005a18df
    POP EDI                             ; 005a18e0
    POP ESI                             ; 005a18e1
    POP EBX                             ; 005a18e2
    RET                                 ; 005a18e3
    MOV ECX,0x64efd4                    ; 005a18e4 | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_005a18e4
    MOV EBX,0xfa7                       ; 005a18e9
    PUSH 0x64efe9                       ; 005a18ee | = "CDeformableModelInstance::computeCyli..."
    MOV dword ptr [0x02f0ca48],ECX      ; 005a18f3 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 005a18f9 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a18ff
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005a1904
    JMP 0x005a1818                      ; 005a1907
        ;   XREF to: 005a1818 (UNCONDITIONAL_JUMP)  ; LAB_005a1818
    CMP EDX,EBP                         ; 005a190c
        ;   Label: LAB_005a190c
    JLE 0x005a1855                      ; 005a190e
        ;   XREF to: 005a1855 (CONDITIONAL_JUMP)  ; LAB_005a1855
    MOV EBP,EDX                         ; 005a1914
    JMP 0x005a1855                      ; 005a1916
        ;   XREF to: 005a1855 (UNCONDITIONAL_JUMP)  ; LAB_005a1855
    FILD dword ptr [EDX + 0x8]          ; 005a191b
        ;   Label: LAB_005a191b
    FILD dword ptr [EDX]                ; 005a191e
    CALL crt_math.c_atan2_FUN_006013b1  ; 005a1920
        ;   XREF to: 006013b1 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_atan2_FUN_006013b1(float10 y, float10 x)
    FMUL double ptr [0x0064f030]        ; 005a1925 | DOUBLE_0064f030
    MOV EAX,dword ptr [ESP + 0x20]      ; 005a192b
    CALL crt_math.c_round_FUN_005fe6b0  ; 005a192f
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP]               ; 005a1934
    MOV EBX,dword ptr [ESP]             ; 005a1937
    ADD EAX,EBX                         ; 005a193a
    MOV dword ptr [ESP],EAX             ; 005a193c
    MOV EAX,[0x006703ec]                ; 005a193f | g_CDemonRendererPtr2
    MOV EAX,dword ptr [EAX]             ; 005a1944 | g_CDemonRendererInstance
    MOV EBX,dword ptr [ESP]             ; 005a1946
    JMP 0x005a18a9                      ; 005a1949
        ;   XREF to: 005a18a9 (UNCONDITIONAL_JUMP)  ; LAB_005a18a9

