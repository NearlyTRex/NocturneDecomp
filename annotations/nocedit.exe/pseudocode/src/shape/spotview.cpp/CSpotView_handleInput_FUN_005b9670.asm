; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_spotview_cpp_CSpotView_handleInput_FUN_005b9670(CSpotView *this_ptr,uint control_flags)
;
; Parameters:
; CSpotView *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   control_flags
; Local Variables:
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  fStack_1c
; float            Stack[-0xc]:4  fStack_c
;
; XREF[6]:
;   core_cloth.cpp_CCloth_lockedVertexEditor_FUN_0043d590 at 0043d6e7
;   core_morph.cpp_CMorph_editMorph_FUN_0052bcb0 at 0052c400
;   core_morph.cpp_CMorph_previewMorph_FUN_0052ca90 at 0052cb59
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 00597aa3
;   shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990 at 0051e3cc
;   shape_meshlod.cpp_CLodMesh_previewLodGeneration_FUN_0051d520 at 0051d7cc
;
; Referenced Globals:
;   double DOUBLE_00652fe2 = 3.14159265350000
;   double DOUBLE_00652fea = 1.10000000000000
;   double DOUBLE_00652ff2 = 1.5
;   CGame* g_CGamePtr = 02d81a9c
;   CKeys* g_CKeysPtr = 02dcd7d4
;   undefined4 g_CGameInstance.delta_time_float
;   CKeys g_CKeysInstance
;
; Called Functions:
;   shape_spotview.cpp_CSpotView_clampValues_FUN_005b9950
;   shape_spotview.cpp_CSpotView_reset_FUN_005b9620
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b9670
        ;   Label: shape_spotview.cpp_CSpotView_handleInput_FUN_005b9670
    PUSH EBP                            ; 005b9671
    MOV EBP,ESP                         ; 005b9672
    SUB ESP,0x18                        ; 005b9674
    AND ESP,0xfffffff8                  ; 005b9677
    MOV EBX,dword ptr [EBP + 0xc]       ; 005b967a
    PUSH 0x38                           ; 005b967d
    MOV EAX,[0x0067cf44]                ; 005b967f | g_CKeysPtr
    MOV EDX,0x3f800000                  ; 005b9684
    PUSH EAX                            ; 005b9689 | g_CKeysInstance
    MOV dword ptr [ESP + 0x8],EDX       ; 005b968a
    MOV EDX,dword ptr [EAX]             ; 005b968e | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005b9690
    ADD ESP,0x8                         ; 005b9692
    TEST EAX,EAX                        ; 005b9695
    JZ 0x005b990f                       ; 005b9697
        ;   XREF to: 005b990f (CONDITIONAL_JUMP)  ; LAB_005b990f
    MOV dword ptr [ESP],0x3d4ccccd      ; 005b969d
    MOV EAX,[0x0067b654]                ; 005b96a4 | g_CGamePtr
        ;   Label: LAB_005b96a4
    FLD float ptr [ESP]                 ; 005b96a9
    FLD ST0                             ; 005b96ac
    FMUL double ptr [0x00652fea]        ; 005b96ae | DOUBLE_00652fea
    FLD float ptr [EAX + 0x264]         ; 005b96b4 | g_CGameInstance.delta_time_float
    FMULP ST2                           ; 005b96ba
    FLD float ptr [EBX + 0x2c]          ; 005b96bc
    FMUL double ptr [0x00652ff2]        ; 005b96bf | DOUBLE_00652ff2
    FXCH ST2                            ; 005b96c5
    FST float ptr [ESP + 0x8]           ; 005b96c7
    FMUL double ptr [0x00652fe2]        ; 005b96cb | DOUBLE_00652fe2
    FXCH                                ; 005b96d1
    FSTP float ptr [ESP + 0xc]          ; 005b96d3
    FXCH                                ; 005b96d7
    FST float ptr [ESP + 0x4]           ; 005b96d9
    FLD1                                ; 005b96dd
    FXCH ST2                            ; 005b96df
    FSTP float ptr [ESP + 0x10]         ; 005b96e1
    FXCH                                ; 005b96e5
    FCOMPP                              ; 005b96e7
    FNSTSW AX                           ; 005b96e9
    SAHF                                ; 005b96eb
    JBE 0x005b96f6                      ; 005b96ec
        ;   XREF to: 005b96f6 (CONDITIONAL_JUMP)  ; LAB_005b96f6
    MOV dword ptr [ESP + 0x4],0x3f800000 ; 005b96ee
    FLD float ptr [ESP + 0x4]           ; 005b96f6
        ;   Label: LAB_005b96f6
    FMUL float ptr [ESP + 0x8]          ; 005b96fa
    FLD float ptr [EBX + 0x2c]          ; 005b96fe
    MOV EAX,dword ptr [EBX + 0x2c]      ; 005b9701
    FLD1                                ; 005b9704
    MOV dword ptr [ESP + 0x14],EAX      ; 005b9706
    FXCH ST2                            ; 005b970a
    FSTP float ptr [ESP + 0x4]          ; 005b970c
    FXCH                                ; 005b9710
    FCOMPP                              ; 005b9712
    FNSTSW AX                           ; 005b9714
    SAHF                                ; 005b9716
    JBE 0x005b9721                      ; 005b9717
        ;   XREF to: 005b9721 (CONDITIONAL_JUMP)  ; LAB_005b9721
    MOV dword ptr [ESP + 0x14],0x3f800000 ; 005b9719
    FLD float ptr [ESP + 0x14]          ; 005b9721
        ;   Label: LAB_005b9721
    FMUL float ptr [ESP + 0x8]          ; 005b9725
    MOV AH,byte ptr [EBP + 0x10]        ; 005b9729
    FSTP float ptr [ESP + 0x14]         ; 005b972c
    TEST AH,0x2                         ; 005b9730
    JZ 0x005b97ad                       ; 005b9733
        ;   XREF to: 005b97ad (CONDITIONAL_JUMP)  ; LAB_005b97ad
    PUSH 0x52                           ; 005b9739
    MOV EAX,[0x0067cf44]                ; 005b973b | g_CKeysPtr
    PUSH EAX                            ; 005b9740 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005b9741 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005b9743
    ADD ESP,0x8                         ; 005b9745
    TEST EAX,EAX                        ; 005b9748
    JZ 0x005b9756                       ; 005b974a
        ;   XREF to: 005b9756 (CONDITIONAL_JUMP)  ; LAB_005b9756
    FLD float ptr [EBX + 0x28]          ; 005b974c
    FADD float ptr [ESP + 0x10]         ; 005b974f
    FSTP float ptr [EBX + 0x28]         ; 005b9753
    PUSH 0x53                           ; 005b9756
        ;   Label: LAB_005b9756
    MOV EAX,[0x0067cf44]                ; 005b9758 | g_CKeysPtr
    PUSH EAX                            ; 005b975d | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005b975e | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005b9760
    ADD ESP,0x8                         ; 005b9762
    TEST EAX,EAX                        ; 005b9765
    JZ 0x005b9773                       ; 005b9767
        ;   XREF to: 005b9773 (CONDITIONAL_JUMP)  ; LAB_005b9773
    FLD float ptr [EBX + 0x28]          ; 005b9769
    FSUB float ptr [ESP + 0x10]         ; 005b976c
    FSTP float ptr [EBX + 0x28]         ; 005b9770
    PUSH 0x35                           ; 005b9773
        ;   Label: LAB_005b9773
    MOV EAX,[0x0067cf44]                ; 005b9775 | g_CKeysPtr
    PUSH EAX                            ; 005b977a | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005b977b | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005b977d
    ADD ESP,0x8                         ; 005b977f
    TEST EAX,EAX                        ; 005b9782
    JZ 0x005b9790                       ; 005b9784
        ;   XREF to: 005b9790 (CONDITIONAL_JUMP)  ; LAB_005b9790
    FLD float ptr [EBX + 0x28]          ; 005b9786
    FADD float ptr [ESP + 0x10]         ; 005b9789
    FSTP float ptr [EBX + 0x28]         ; 005b978d
    PUSH 0x37                           ; 005b9790
        ;   Label: LAB_005b9790
    MOV EAX,[0x0067cf44]                ; 005b9792 | g_CKeysPtr
    PUSH EAX                            ; 005b9797 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005b9798 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005b979a
    ADD ESP,0x8                         ; 005b979c
    TEST EAX,EAX                        ; 005b979f
    JZ 0x005b97ad                       ; 005b97a1
        ;   XREF to: 005b97ad (CONDITIONAL_JUMP)  ; LAB_005b97ad
    FLD float ptr [EBX + 0x28]          ; 005b97a3
    FSUB float ptr [ESP + 0x10]         ; 005b97a6
    FSTP float ptr [EBX + 0x28]         ; 005b97aa
    TEST byte ptr [EBP + 0x10],0x1      ; 005b97ad
        ;   Label: LAB_005b97ad
    JZ 0x005b97ed                       ; 005b97b1
        ;   XREF to: 005b97ed (CONDITIONAL_JUMP)  ; LAB_005b97ed
    PUSH 0x4a                           ; 005b97b3
    MOV EAX,[0x0067cf44]                ; 005b97b5 | g_CKeysPtr
    PUSH EAX                            ; 005b97ba | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005b97bb | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005b97bd
    ADD ESP,0x8                         ; 005b97bf
    TEST EAX,EAX                        ; 005b97c2
    JZ 0x005b97d0                       ; 005b97c4
        ;   XREF to: 005b97d0 (CONDITIONAL_JUMP)  ; LAB_005b97d0
    FLD float ptr [EBX + 0x24]          ; 005b97c6
    FADD float ptr [ESP + 0x10]         ; 005b97c9
    FSTP float ptr [EBX + 0x24]         ; 005b97cd
    PUSH 0x4e                           ; 005b97d0
        ;   Label: LAB_005b97d0
    MOV EAX,[0x0067cf44]                ; 005b97d2 | g_CKeysPtr
    PUSH EAX                            ; 005b97d7 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005b97d8 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005b97da
    ADD ESP,0x8                         ; 005b97dc
    TEST EAX,EAX                        ; 005b97df
    JZ 0x005b97ed                       ; 005b97e1
        ;   XREF to: 005b97ed (CONDITIONAL_JUMP)  ; LAB_005b97ed
    FLD float ptr [EBX + 0x24]          ; 005b97e3
    FSUB float ptr [ESP + 0x10]         ; 005b97e6
    FSTP float ptr [EBX + 0x24]         ; 005b97ea
    TEST byte ptr [EBP + 0x10],0x8      ; 005b97ed
        ;   Label: LAB_005b97ed
    JZ 0x005b986b                       ; 005b97f1
        ;   XREF to: 005b986b (CONDITIONAL_JUMP)  ; LAB_005b986b
    PUSH 0x4b                           ; 005b97f7
    MOV EAX,[0x0067cf44]                ; 005b97f9 | g_CKeysPtr
    PUSH EAX                            ; 005b97fe | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005b97ff | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005b9801
    ADD ESP,0x8                         ; 005b9803
    TEST EAX,EAX                        ; 005b9806
    JZ 0x005b9814                       ; 005b9808
        ;   XREF to: 005b9814 (CONDITIONAL_JUMP)  ; LAB_005b9814
    FLD float ptr [EBX + 0x30]          ; 005b980a
    FSUB float ptr [ESP + 0x14]         ; 005b980d
    FSTP float ptr [EBX + 0x30]         ; 005b9811
    PUSH 0x4d                           ; 005b9814
        ;   Label: LAB_005b9814
    MOV EAX,[0x0067cf44]                ; 005b9816 | g_CKeysPtr
    PUSH EAX                            ; 005b981b | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005b981c | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005b981e
    ADD ESP,0x8                         ; 005b9820
    TEST EAX,EAX                        ; 005b9823
    JZ 0x005b9831                       ; 005b9825
        ;   XREF to: 005b9831 (CONDITIONAL_JUMP)  ; LAB_005b9831
    FLD float ptr [EBX + 0x30]          ; 005b9827
    FADD float ptr [ESP + 0x14]         ; 005b982a
    FSTP float ptr [EBX + 0x30]         ; 005b982e
    PUSH 0x10                           ; 005b9831
        ;   Label: LAB_005b9831
    MOV EAX,[0x0067cf44]                ; 005b9833 | g_CKeysPtr
    PUSH EAX                            ; 005b9838 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005b9839 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005b983b
    ADD ESP,0x8                         ; 005b983d
    TEST EAX,EAX                        ; 005b9840
    JZ 0x005b984e                       ; 005b9842
        ;   XREF to: 005b984e (CONDITIONAL_JUMP)  ; LAB_005b984e
    FLD float ptr [EBX + 0x34]          ; 005b9844
    FADD float ptr [ESP + 0x14]         ; 005b9847
    FSTP float ptr [EBX + 0x34]         ; 005b984b
    PUSH 0x1e                           ; 005b984e
        ;   Label: LAB_005b984e
    MOV EAX,[0x0067cf44]                ; 005b9850 | g_CKeysPtr
    PUSH EAX                            ; 005b9855 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005b9856 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005b9858
    ADD ESP,0x8                         ; 005b985a
    TEST EAX,EAX                        ; 005b985d
    JZ 0x005b986b                       ; 005b985f
        ;   XREF to: 005b986b (CONDITIONAL_JUMP)  ; LAB_005b986b
    FLD float ptr [EBX + 0x34]          ; 005b9861
    FSUB float ptr [ESP + 0x14]         ; 005b9864
    FSTP float ptr [EBX + 0x34]         ; 005b9868
    TEST byte ptr [EBP + 0x10],0x4      ; 005b986b
        ;   Label: LAB_005b986b
    JZ 0x005b98ab                       ; 005b986f
        ;   XREF to: 005b98ab (CONDITIONAL_JUMP)  ; LAB_005b98ab
    PUSH 0x48                           ; 005b9871
    MOV EAX,[0x0067cf44]                ; 005b9873 | g_CKeysPtr
    PUSH EAX                            ; 005b9878 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005b9879 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005b987b
    ADD ESP,0x8                         ; 005b987d
    TEST EAX,EAX                        ; 005b9880
    JZ 0x005b988e                       ; 005b9882
        ;   XREF to: 005b988e (CONDITIONAL_JUMP)  ; LAB_005b988e
    FLD float ptr [EBX + 0x2c]          ; 005b9884
    FSUB float ptr [ESP + 0x4]          ; 005b9887
    FSTP float ptr [EBX + 0x2c]         ; 005b988b
    PUSH 0x50                           ; 005b988e
        ;   Label: LAB_005b988e
    MOV EAX,[0x0067cf44]                ; 005b9890 | g_CKeysPtr
    PUSH EAX                            ; 005b9895 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005b9896 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005b9898
    ADD ESP,0x8                         ; 005b989a
    TEST EAX,EAX                        ; 005b989d
    JZ 0x005b98ab                       ; 005b989f
        ;   XREF to: 005b98ab (CONDITIONAL_JUMP)  ; LAB_005b98ab
    FLD float ptr [EBX + 0x2c]          ; 005b98a1
    FADD float ptr [ESP + 0x4]          ; 005b98a4
    FSTP float ptr [EBX + 0x2c]         ; 005b98a8
    TEST byte ptr [EBP + 0x10],0x10     ; 005b98ab
        ;   Label: LAB_005b98ab
    JZ 0x005b98ed                       ; 005b98af
        ;   XREF to: 005b98ed (CONDITIONAL_JUMP)  ; LAB_005b98ed
    PUSH 0xd                            ; 005b98b1
    MOV EAX,[0x0067cf44]                ; 005b98b3 | g_CKeysPtr
    PUSH EAX                            ; 005b98b8 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005b98b9 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 005b98bb
    ADD ESP,0x8                         ; 005b98be
    TEST EAX,EAX                        ; 005b98c1
    JZ 0x005b98cf                       ; 005b98c3
        ;   XREF to: 005b98cf (CONDITIONAL_JUMP)  ; LAB_005b98cf
    FLD float ptr [EBX + 0x38]          ; 005b98c5
    FDIV float ptr [ESP + 0xc]          ; 005b98c8
    FSTP float ptr [EBX + 0x38]         ; 005b98cc
    PUSH 0xc                            ; 005b98cf
        ;   Label: LAB_005b98cf
    MOV EAX,[0x0067cf44]                ; 005b98d1 | g_CKeysPtr
    PUSH EAX                            ; 005b98d6 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005b98d7 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 005b98d9
    ADD ESP,0x8                         ; 005b98dc
    TEST EAX,EAX                        ; 005b98df
    JZ 0x005b98ed                       ; 005b98e1
        ;   XREF to: 005b98ed (CONDITIONAL_JUMP)  ; LAB_005b98ed
    FLD float ptr [EBX + 0x38]          ; 005b98e3
    FMUL float ptr [ESP + 0xc]          ; 005b98e6
    FSTP float ptr [EBX + 0x38]         ; 005b98ea
    PUSH 0x4c                           ; 005b98ed
        ;   Label: LAB_005b98ed
    MOV EAX,[0x0067cf44]                ; 005b98ef | g_CKeysPtr
    PUSH EAX                            ; 005b98f4 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005b98f5 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 005b98f7
    ADD ESP,0x8                         ; 005b98fa
    TEST EAX,EAX                        ; 005b98fd
    JNZ 0x005b9932                      ; 005b98ff
        ;   XREF to: 005b9932 (CONDITIONAL_JUMP)  ; LAB_005b9932
    PUSH EBX                            ; 005b9901
    CALL shape_spotview.cpp_CSpotView_clampValues_FUN_005b9950 ; 005b9902
        ;   XREF to: 005b9950 (UNCONDITIONAL_CALL)  ; void shape_spotview.cpp_CSpotView_clampValues_FUN_005b9950(CSpotView * this_ptr)
    ADD ESP,0x4                         ; 005b9907
    MOV ESP,EBP                         ; 005b990a
    POP EBP                             ; 005b990c
    POP EBX                             ; 005b990d
    RET                                 ; 005b990e
    PUSH 0x2a                           ; 005b990f
        ;   Label: LAB_005b990f
    MOV EAX,[0x0067cf44]                ; 005b9911 | g_CKeysPtr
    PUSH EAX                            ; 005b9916 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005b9917 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005b9919
    ADD ESP,0x8                         ; 005b991b
    TEST EAX,EAX                        ; 005b991e
    JZ 0x005b96a4                       ; 005b9920
        ;   XREF to: 005b96a4 (CONDITIONAL_JUMP)  ; LAB_005b96a4
    MOV dword ptr [ESP],0x40800000      ; 005b9926
    JMP 0x005b96a4                      ; 005b992d
        ;   XREF to: 005b96a4 (UNCONDITIONAL_JUMP)  ; LAB_005b96a4
    MOV EDX,dword ptr [EBP + 0x10]      ; 005b9932
        ;   Label: LAB_005b9932
    PUSH EDX                            ; 005b9935
    PUSH EBX                            ; 005b9936
    CALL shape_spotview.cpp_CSpotView_reset_FUN_005b9620 ; 005b9937
        ;   XREF to: 005b9620 (UNCONDITIONAL_CALL)  ; void shape_spotview.cpp_CSpotView_reset_FUN_005b9620(CSpotView * this_ptr, uint control_flags)
    ADD ESP,0x8                         ; 005b993c
    PUSH EBX                            ; 005b993f
    CALL shape_spotview.cpp_CSpotView_clampValues_FUN_005b9950 ; 005b9940
        ;   XREF to: 005b9950 (UNCONDITIONAL_CALL)  ; void shape_spotview.cpp_CSpotView_clampValues_FUN_005b9950(CSpotView * this_ptr)
    ADD ESP,0x4                         ; 005b9945
    MOV ESP,EBP                         ; 005b9948
    POP EBP                             ; 005b994a
    POP EBX                             ; 005b994b
    RET                                 ; 005b994c

