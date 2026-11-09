; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_FUN_004dd770(CInventory *this_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_FUN_00535da0 at 00536598
;
; Referenced Globals:
;   undefined4 DAT_005c65ff
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 DAT_00600180
;   undefined4 DAT_00600184
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.field588_0x24c
;   undefined4 DAT_01d5ba14
;   undefined4 DAT_01d70a34
;
; Called Functions:
;   core_inv.cpp_drawItemIconBackground_FUN_004dd5b0
;   core_inv.cpp_drawWeaponIconBackground_FUN_004dd3f0
;   core_inv.cpp_FUN_004dbe70
;   core_inv.cpp_loadAssets_FUN_004da570
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dd770
        ;   Label: core_inv.cpp_FUN_004dd770
    PUSH ESI                            ; 004dd771
    PUSH EDI                            ; 004dd772
    PUSH EBP                            ; 004dd773
    SUB ESP,0x2c                        ; 004dd774
    MOV EBX,dword ptr [ESP + 0x40]      ; 004dd777
    MOV EAX,[0x005fe9dc]                ; 004dd77b | g_CGamePtr | g_CGameInstance
    CMP dword ptr [EAX + 0x24c],0x0     ; 004dd780 | g_CGameInstance.field588_0x24c
    JNZ 0x004dd9e9                      ; 004dd787
        ;   XREF to: 004dd9e9 (CONDITIONAL_JUMP)  ; LAB_004dd9e9
    MOV EDX,dword ptr [0x01d5ba14]      ; 004dd78d | DAT_01d5ba14
    MOV EAX,dword ptr [EBX + 0x4]       ; 004dd793
    CMP EAX,dword ptr [EDX*0x4 + 0x1d5ba04] ; 004dd796
    JNZ 0x004dd9e9                      ; 004dd79d
        ;   XREF to: 004dd9e9 (CONDITIONAL_JUMP)  ; LAB_004dd9e9
    MOV ESI,dword ptr [0x005fba1c]      ; 004dd7a3 | DAT_005fba1c
    CMP ESI,dword ptr [0x01d70a34]      ; 004dd7a9 | DAT_01d70a34
    JNZ 0x004dd9f1                      ; 004dd7af
        ;   XREF to: 004dd9f1 (CONDITIONAL_JUMP)  ; LAB_004dd9f1
    CMP dword ptr [EBX + 0x338],0x0     ; 004dd7b5
        ;   Label: LAB_004dd7b5
    JZ 0x004dd8d1                       ; 004dd7bc
        ;   XREF to: 004dd8d1 (CONDITIONAL_JUMP)  ; LAB_004dd8d1
    FLD float ptr [EBX + 0x340]         ; 004dd7c2
    FLDZ                                ; 004dd7c8
    FCOMPP                              ; 004dd7ca
    FNSTSW AX                           ; 004dd7cc
    SAHF                                ; 004dd7ce
    JNC 0x004dd8d1                      ; 004dd7cf
        ;   XREF to: 004dd8d1 (CONDITIONAL_JUMP)  ; LAB_004dd8d1
    MOV EAX,0x8                         ; 004dd7d5
    MOV EDI,0x50                        ; 004dd7da
    MOV ESI,dword ptr [0x00600180]      ; 004dd7df | DAT_00600180
    MOV EBP,dword ptr [0x005fba1c]      ; 004dd7e5 | DAT_005fba1c
    MOV ECX,dword ptr [0x00600184]      ; 004dd7eb | DAT_00600184
    CMP EBP,0x180                       ; 004dd7f1
    JGE 0x004dd806                      ; 004dd7f7
        ;   XREF to: 004dd806 (CONDITIONAL_JUMP)  ; LAB_004dd806
    CMP dword ptr [EBX + 0x454],0x0     ; 004dd7f9
    JZ 0x004dd9fb                       ; 004dd800
        ;   XREF to: 004dd9fb (CONDITIONAL_JUMP)  ; LAB_004dd9fb
    MOV EDX,dword ptr [0x005fba18]      ; 004dd806 | DAT_005fba18
        ;   Label: LAB_004dd806
    SUB EDX,EDI                         ; 004dd80c
    SUB EDX,EAX                         ; 004dd80e
    FLD float ptr [EBX + 0x340]         ; 004dd810
    MOV dword ptr [ESP],EDX             ; 004dd816
    MOV EDX,dword ptr [0x005fba1c]      ; 004dd819 | DAT_005fba1c
    MOV EBP,0xffff                      ; 004dd81f
    SUB EDX,EDI                         ; 004dd824
    FLD1                                ; 004dd826
    SUB EDX,EAX                         ; 004dd828
    MOV dword ptr [ESP + 0x20],EBP      ; 004dd82a
    MOV dword ptr [ESP + 0xc],EDX       ; 004dd82e
    FCOMPP                              ; 004dd832
    FNSTSW AX                           ; 004dd834
    SAHF                                ; 004dd836
    JBE 0x004dd84e                      ; 004dd837
        ;   XREF to: 004dd84e (CONDITIONAL_JUMP)  ; LAB_004dd84e
    FLD float ptr [EBX + 0x340]         ; 004dd839
    FMUL float ptr [0x005c65ff]         ; 004dd83f | DAT_005c65ff
    CALL crt_math.c_round_FUN_005a3120  ; 004dd845
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x20]        ; 004dd84a
    MOV EAX,[0x005fba18]                ; 004dd84e | DAT_005fba18
        ;   Label: LAB_004dd84e
    DEC EAX                             ; 004dd853
    MOV dword ptr [ESP + 0x10],EAX      ; 004dd854
    MOV EAX,[0x005fba1c]                ; 004dd858 | DAT_005fba1c
    DEC EAX                             ; 004dd85d
    MOV EDX,dword ptr [ESP + 0x20]      ; 004dd85e
    MOV dword ptr [ESP + 0x14],EAX      ; 004dd862
    MOV EAX,0x3                         ; 004dd866
    ADD EDX,EDX                         ; 004dd86b
    MOV dword ptr [ESP + 0x28],EAX      ; 004dd86d
    MOV EAX,EDX                         ; 004dd871
    SAR EDX,0x1f                        ; 004dd873
    IDIV dword ptr [ESP + 0x28]         ; 004dd876
    MOV EBP,dword ptr [0x005fba1c]      ; 004dd87a | DAT_005fba1c
    MOV EDX,dword ptr [EBX + 0x454]     ; 004dd880
    SUB EBP,ECX                         ; 004dd886
    TEST EDX,EDX                        ; 004dd888
    JZ 0x004dda24                       ; 004dd88a
        ;   XREF to: 004dda24 (CONDITIONAL_JUMP)  ; LAB_004dda24
    PUSH EAX                            ; 004dd890
    MOV EDX,dword ptr [ESP + 0x18]      ; 004dd891
    PUSH EDX                            ; 004dd895
    MOV ECX,dword ptr [ESP + 0x18]      ; 004dd896
    PUSH ECX                            ; 004dd89a
    MOV EAX,[0x005fba18]                ; 004dd89b | DAT_005fba18
    PUSH EBP                            ; 004dd8a0
    SUB EAX,ESI                         ; 004dd8a1
    PUSH EAX                            ; 004dd8a3
    CALL core_inv.cpp_drawItemIconBackground_FUN_004dd5b0 ; 004dd8a4
        ;   XREF to: 004dd5b0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_drawItemIconBackground_FUN_004dd5b0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004dd8a9
        ;   Label: LAB_004dd8a9
    MOV ESI,dword ptr [ESP + 0x20]      ; 004dd8ac
    PUSH ESI                            ; 004dd8b0
    PUSH 0x3fc90fdb                     ; 004dd8b1
    PUSH EDI                            ; 004dd8b6
    MOV EDI,dword ptr [ESP + 0x18]      ; 004dd8b7
    PUSH EDI                            ; 004dd8bb
    MOV EBP,dword ptr [ESP + 0x10]      ; 004dd8bc
    PUSH EBP                            ; 004dd8c0
    MOV EAX,dword ptr [EBX + 0x338]     ; 004dd8c1
    PUSH EAX                            ; 004dd8c7
    PUSH EBX                            ; 004dd8c8
    CALL core_inv.cpp_FUN_004dbe70      ; 004dd8c9
        ;   XREF to: 004dbe70 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004dbe70()
    ADD ESP,0x1c                        ; 004dd8ce
    CMP dword ptr [EBX + 0x33c],0x0     ; 004dd8d1
        ;   Label: LAB_004dd8d1
    JZ 0x004dd9e9                       ; 004dd8d8
        ;   XREF to: 004dd9e9 (CONDITIONAL_JUMP)  ; LAB_004dd9e9
    FLD float ptr [EBX + 0x344]         ; 004dd8de
    FLDZ                                ; 004dd8e4
    FCOMPP                              ; 004dd8e6
    FNSTSW AX                           ; 004dd8e8
    SAHF                                ; 004dd8ea
    JNC 0x004dd9e9                      ; 004dd8eb
        ;   XREF to: 004dd9e9 (CONDITIONAL_JUMP)  ; LAB_004dd9e9
    MOV EDX,0x10                        ; 004dd8f1
    MOV EDI,0x40                        ; 004dd8f6
    MOV ESI,dword ptr [0x00600180]      ; 004dd8fb | DAT_00600180
    MOV EBP,dword ptr [0x005fba1c]      ; 004dd901 | DAT_005fba1c
    MOV ECX,dword ptr [0x00600184]      ; 004dd907 | DAT_00600184
    CMP EBP,0x180                       ; 004dd90d
    JGE 0x004dd922                      ; 004dd913
        ;   XREF to: 004dd922 (CONDITIONAL_JUMP)  ; LAB_004dd922
    CMP dword ptr [EBX + 0x454],0x0     ; 004dd915
    JZ 0x004dda42                       ; 004dd91c
        ;   XREF to: 004dda42 (CONDITIONAL_JUMP)  ; LAB_004dda42
    MOV EAX,[0x005fba18]                ; 004dd922 | DAT_005fba18
        ;   Label: LAB_004dd922
    SUB EAX,EDI                         ; 004dd927
    SUB EAX,EDX                         ; 004dd929
    MOV dword ptr [ESP + 0x8],EAX       ; 004dd92b
    MOV EAX,[0x005fba1c]                ; 004dd92f | DAT_005fba1c
    FLD float ptr [EBX + 0x344]         ; 004dd934
    SUB EAX,EDI                         ; 004dd93a
    FLD1                                ; 004dd93c
    SUB EAX,EDX                         ; 004dd93e
    MOV EDX,0xffff                      ; 004dd940
    MOV dword ptr [ESP + 0x4],EAX       ; 004dd945
    MOV dword ptr [ESP + 0x24],EDX      ; 004dd949
    FCOMPP                              ; 004dd94d
    FNSTSW AX                           ; 004dd94f
    SAHF                                ; 004dd951
    JBE 0x004dd969                      ; 004dd952
        ;   XREF to: 004dd969 (CONDITIONAL_JUMP)  ; LAB_004dd969
    FLD float ptr [EBX + 0x344]         ; 004dd954
    FMUL float ptr [0x005c65ff]         ; 004dd95a | DAT_005c65ff
    CALL crt_math.c_round_FUN_005a3120  ; 004dd960
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x24]        ; 004dd965
    MOV EAX,[0x005fba18]                ; 004dd969 | DAT_005fba18
        ;   Label: LAB_004dd969
    DEC EAX                             ; 004dd96e
    MOV dword ptr [ESP + 0x18],EAX      ; 004dd96f
    MOV EAX,[0x005fba1c]                ; 004dd973 | DAT_005fba1c
    DEC EAX                             ; 004dd978
    MOV EDX,dword ptr [ESP + 0x24]      ; 004dd979
    MOV dword ptr [ESP + 0x1c],EAX      ; 004dd97d
    MOV EAX,0x3                         ; 004dd981
    ADD EDX,EDX                         ; 004dd986
    MOV dword ptr [ESP + 0x28],EAX      ; 004dd988
    MOV EAX,EDX                         ; 004dd98c
    SAR EDX,0x1f                        ; 004dd98e
    IDIV dword ptr [ESP + 0x28]         ; 004dd991
    MOV EBP,dword ptr [0x005fba1c]      ; 004dd995 | DAT_005fba1c
    MOV EDX,dword ptr [EBX + 0x454]     ; 004dd99b
    SUB EBP,ECX                         ; 004dd9a1
    TEST EDX,EDX                        ; 004dd9a3
    JZ 0x004dda6b                       ; 004dd9a5
        ;   XREF to: 004dda6b (CONDITIONAL_JUMP)  ; LAB_004dda6b
    PUSH EAX                            ; 004dd9ab
    MOV EDX,dword ptr [ESP + 0x20]      ; 004dd9ac
    PUSH EDX                            ; 004dd9b0
    MOV ECX,dword ptr [ESP + 0x20]      ; 004dd9b1
    PUSH ECX                            ; 004dd9b5
    MOV EAX,[0x005fba18]                ; 004dd9b6 | DAT_005fba18
    PUSH EBP                            ; 004dd9bb
    SUB EAX,ESI                         ; 004dd9bc
    PUSH EAX                            ; 004dd9be
    CALL core_inv.cpp_drawItemIconBackground_FUN_004dd5b0 ; 004dd9bf
        ;   XREF to: 004dd5b0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_drawItemIconBackground_FUN_004dd5b0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004dd9c4
        ;   Label: LAB_004dd9c4
    MOV ESI,dword ptr [ESP + 0x24]      ; 004dd9c7
    PUSH ESI                            ; 004dd9cb
    PUSH 0x0                            ; 004dd9cc
    PUSH EDI                            ; 004dd9ce
    MOV EDI,dword ptr [ESP + 0x10]      ; 004dd9cf
    PUSH EDI                            ; 004dd9d3
    MOV EBP,dword ptr [ESP + 0x18]      ; 004dd9d4
    PUSH EBP                            ; 004dd9d8
    MOV EAX,dword ptr [EBX + 0x33c]     ; 004dd9d9
    PUSH EAX                            ; 004dd9df
    PUSH EBX                            ; 004dd9e0
    CALL core_inv.cpp_FUN_004dbe70      ; 004dd9e1
        ;   XREF to: 004dbe70 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004dbe70()
    ADD ESP,0x1c                        ; 004dd9e6
    ADD ESP,0x2c                        ; 004dd9e9
        ;   Label: LAB_004dd9e9
    POP EBP                             ; 004dd9ec
    POP EDI                             ; 004dd9ed
    POP ESI                             ; 004dd9ee
    POP EBX                             ; 004dd9ef
    RET                                 ; 004dd9f0
    CALL core_inv.cpp_loadAssets_FUN_004da570 ; 004dd9f1
        ;   XREF to: 004da570 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_loadAssets_FUN_004da570()
        ;   Label: LAB_004dd9f1
    JMP 0x004dd7b5                      ; 004dd9f6
        ;   XREF to: 004dd7b5 (UNCONDITIONAL_JUMP)  ; LAB_004dd7b5
    MOV EDX,ESI                         ; 004dd9fb
        ;   Label: LAB_004dd9fb
    MOV EAX,ESI                         ; 004dd9fd
    SAR EDX,0x1f                        ; 004dd9ff
    SUB EAX,EDX                         ; 004dda02
    SAR EAX,0x1                         ; 004dda04
    MOV ESI,EAX                         ; 004dda06
    MOV EDX,ECX                         ; 004dda08
    MOV EAX,ECX                         ; 004dda0a
    SAR EDX,0x1f                        ; 004dda0c
    SUB EAX,EDX                         ; 004dda0f
    SAR EAX,0x1                         ; 004dda11
    MOV EDI,0x28                        ; 004dda13
    MOV ECX,EAX                         ; 004dda18
    MOV EAX,0x4                         ; 004dda1a
    JMP 0x004dd806                      ; 004dda1f
        ;   XREF to: 004dd806 (UNCONDITIONAL_JUMP)  ; LAB_004dd806
    PUSH EAX                            ; 004dda24
        ;   Label: LAB_004dda24
    MOV ESI,dword ptr [ESP + 0x18]      ; 004dda25
    PUSH ESI                            ; 004dda29
    MOV EAX,dword ptr [ESP + 0x18]      ; 004dda2a
    PUSH EAX                            ; 004dda2e
    MOV EAX,[0x005fba18]                ; 004dda2f | DAT_005fba18
    PUSH EBP                            ; 004dda34
    SUB EAX,ECX                         ; 004dda35
    PUSH EAX                            ; 004dda37
    CALL core_inv.cpp_drawWeaponIconBackground_FUN_004dd3f0 ; 004dda38
        ;   XREF to: 004dd3f0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_drawWeaponIconBackground_FUN_004dd3f0()
    JMP 0x004dd8a9                      ; 004dda3d
        ;   XREF to: 004dd8a9 (UNCONDITIONAL_JUMP)  ; LAB_004dd8a9
    MOV EDX,ESI                         ; 004dda42
        ;   Label: LAB_004dda42
    MOV EAX,ESI                         ; 004dda44
    SAR EDX,0x1f                        ; 004dda46
    SUB EAX,EDX                         ; 004dda49
    SAR EAX,0x1                         ; 004dda4b
    MOV ESI,EAX                         ; 004dda4d
    MOV EDX,ECX                         ; 004dda4f
    MOV EAX,ECX                         ; 004dda51
    SAR EDX,0x1f                        ; 004dda53
    SUB EAX,EDX                         ; 004dda56
    SAR EAX,0x1                         ; 004dda58
    MOV EDI,0x20                        ; 004dda5a
    MOV EDX,0x8                         ; 004dda5f
    MOV ECX,EAX                         ; 004dda64
    JMP 0x004dd922                      ; 004dda66
        ;   XREF to: 004dd922 (UNCONDITIONAL_JUMP)  ; LAB_004dd922
    PUSH EAX                            ; 004dda6b
        ;   Label: LAB_004dda6b
    MOV ESI,dword ptr [ESP + 0x20]      ; 004dda6c
    PUSH ESI                            ; 004dda70
    MOV EAX,dword ptr [ESP + 0x20]      ; 004dda71
    PUSH EAX                            ; 004dda75
    MOV EAX,[0x005fba18]                ; 004dda76 | DAT_005fba18
    PUSH EBP                            ; 004dda7b
    SUB EAX,ECX                         ; 004dda7c
    PUSH EAX                            ; 004dda7e
    CALL core_inv.cpp_drawWeaponIconBackground_FUN_004dd3f0 ; 004dda7f
        ;   XREF to: 004dd3f0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_drawWeaponIconBackground_FUN_004dd3f0()
    JMP 0x004dd9c4                      ; 004dda84
        ;   XREF to: 004dd9c4 (UNCONDITIONAL_JUMP)  ; LAB_004dd9c4

