; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CCrater_activate_FUN_0049d590(CCrater *this_ptr,CVector3f *center_position,float radius)
;
; Parameters:
; CCrater *        Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   center_position
; float            Stack[0xc]:4   radius
; Local Variables:
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
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
;   core_fire.cpp_CFireEffect_createCrater_FUN_004a3aa0 at 004a3abe
;
; Referenced Globals:
;   undefined4 DAT_005c0768
;   undefined4 DAT_005c0770
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_fire.cpp_CCrater_render_FUN_0049d980
;   core_setcolid.cpp_FUN_0053bc80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049d590
        ;   Label: core_fire.cpp_CCrater_activate_FUN_0049d590
    PUSH ESI                            ; 0049d591
    PUSH EDI                            ; 0049d592
    PUSH EBP                            ; 0049d593
    SUB ESP,0x68                        ; 0049d594
    MOV EBP,dword ptr [ESP + 0x7c]      ; 0049d597
    MOV EBX,dword ptr [ESP + 0x80]      ; 0049d59b
    LEA EAX,[EBP + 0xc]                 ; 0049d5a2
    CMP EAX,EBX                         ; 0049d5a5
    JZ 0x0049d5b9                       ; 0049d5a7
        ;   XREF to: 0049d5b9 (CONDITIONAL_JUMP)  ; LAB_0049d5b9
    MOV EDX,dword ptr [EBX]             ; 0049d5a9
    MOV dword ptr [EAX],EDX             ; 0049d5ab
    MOV EDX,dword ptr [EBX + 0x4]       ; 0049d5ad
    MOV dword ptr [EAX + 0x4],EDX       ; 0049d5b0
    MOV EDX,dword ptr [EBX + 0x8]       ; 0049d5b3
    MOV dword ptr [EAX + 0x8],EDX       ; 0049d5b6
    PUSH EBP                            ; 0049d5b9
        ;   Label: LAB_0049d5b9
    CALL core_fire.cpp_CCrater_render_FUN_0049d980 ; 0049d5ba
        ;   XREF to: 0049d980 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CCrater_render_FUN_0049d980(CCrater * this_ptr)
    ADD ESP,0x4                         ; 0049d5bf
    LEA EAX,[EBP + 0xc]                 ; 0049d5c2
    PUSH 0x0                            ; 0049d5c5
    MOV dword ptr [EBP],0x1             ; 0049d5c7
    PUSH EAX                            ; 0049d5ce
    MOV EDX,dword ptr [0x00603b28]      ; 0049d5cf | g_CDemonSetPtr
    MOV dword ptr [EBP + 0x4],0x0       ; 0049d5d5
    PUSH EDX                            ; 0049d5dc | g_CDemonSetInstance
    MOV dword ptr [EBP + 0x8],0x3dcccccd ; 0049d5dd
    MOV EBX,EBP                         ; 0049d5e4
    CALL core_setcolid.cpp_FUN_0053bc80 ; 0049d5e6
        ;   XREF to: 0053bc80 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_0053bc80()
    MOV dword ptr [ESP + 0x70],EAX      ; 0049d5eb
    LEA ESI,[EBP + 0x24]                ; 0049d5ef
    MOV EAX,dword ptr [ESP + 0x70]      ; 0049d5f2
    MOV dword ptr [EBP + 0x10],EAX      ; 0049d5f6
    ADD ESP,0xc                         ; 0049d5f9
    PUSH dword ptr [ESP + 0x84]         ; 0049d5fc
        ;   Label: LAB_0049d5fc
    FLD float ptr [ESP + 0x88]          ; 0049d603
    FCHS                                ; 0049d60a
    FSTP float ptr [ESP + 0x64]         ; 0049d60c
    PUSH dword ptr [ESP + 0x64]         ; 0049d610
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0049d614
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x6c],EAX      ; 0049d619
    FLD float ptr [ESP + 0x6c]          ; 0049d61d
    ADD ESP,0x8                         ; 0049d621
    FMUL double ptr [0x005c0768]        ; 0049d624 | DAT_005c0768
    PUSH dword ptr [ESP + 0x84]         ; 0049d62a
    FADD float ptr [EBP + 0xc]          ; 0049d631
    PUSH dword ptr [ESP + 0x64]         ; 0049d634
    FSTP float ptr [EBX + 0x1c]         ; 0049d638
    MOV EAX,dword ptr [EBP + 0x10]      ; 0049d63b
    MOV dword ptr [EBX + 0x20],EAX      ; 0049d63e
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0049d641
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x6c],EAX      ; 0049d646
    FLD float ptr [ESP + 0x6c]          ; 0049d64a
    FMUL double ptr [0x005c0768]        ; 0049d64e | DAT_005c0768
    ADD EBX,0xc                         ; 0049d654
    FADD float ptr [EBP + 0x14]         ; 0049d657
    ADD ESP,0x8                         ; 0049d65a
    FSTP float ptr [EBX + 0x18]         ; 0049d65d
    CMP EBX,ESI                         ; 0049d660
    JNZ 0x0049d5fc                      ; 0049d662
        ;   XREF to: 0049d5fc (CONDITIONAL_JUMP)  ; LAB_0049d5fc
    LEA EBX,[EBP + 0xc]                 ; 0049d664
    MOV EDI,ESP                         ; 0049d667
    LEA ESI,[ESP + 0x3c]                ; 0049d669
    FLD float ptr [EBX]                 ; 0049d66d
    FLD float ptr [EBX + 0x8]           ; 0049d66f
    MOV EAX,dword ptr [EBX + 0x4]       ; 0049d672
    FXCH                                ; 0049d675
    FLD float ptr [ESP + 0x60]          ; 0049d677
    FXCH                                ; 0049d67b
    FADD ST0,ST1                        ; 0049d67d
    MOV dword ptr [ESP + 0x40],EAX      ; 0049d67f
    FXCH ST2                            ; 0049d683
    FADDP                               ; 0049d685
    LEA EBX,[EBP + 0x40]                ; 0049d687
    FXCH                                ; 0049d68a
    FSTP float ptr [ESP + 0x3c]         ; 0049d68c
    FSTP float ptr [ESP + 0x44]         ; 0049d690
    MOV EAX,ESP                         ; 0049d694
    MOVSD ES:EDI,ESI                    ; 0049d696
    MOVSD ES:EDI,ESI                    ; 0049d697
    MOVSD ES:EDI,ESI                    ; 0049d698
    CMP EBX,EAX                         ; 0049d699
    JZ 0x0049d6b0                       ; 0049d69b
        ;   XREF to: 0049d6b0 (CONDITIONAL_JUMP)  ; LAB_0049d6b0
    MOV EAX,dword ptr [ESP]             ; 0049d69d
    MOV dword ptr [EBX],EAX             ; 0049d6a0
    MOV EAX,dword ptr [ESP + 0x4]       ; 0049d6a2
    MOV dword ptr [EBX + 0x4],EAX       ; 0049d6a6
    MOV EAX,dword ptr [ESP + 0x8]       ; 0049d6a9
    MOV dword ptr [EBX + 0x8],EAX       ; 0049d6ad
    FLD float ptr [ESP + 0x84]          ; 0049d6b0
        ;   Label: LAB_0049d6b0
    FLD ST0                             ; 0049d6b7
    LEA EDI,[ESP + 0xc]                 ; 0049d6b9
    LEA ESI,[ESP + 0x48]                ; 0049d6bd
    LEA EBX,[EBP + 0xc]                 ; 0049d6c1
    FCHS                                ; 0049d6c4
    FLD float ptr [EBX]                 ; 0049d6c6
    FLD float ptr [EBX + 0x8]           ; 0049d6c8
    MOV EAX,dword ptr [EBX + 0x4]       ; 0049d6cb
    FXCH                                ; 0049d6ce
    FADDP ST3,ST0                       ; 0049d6d0
    MOV dword ptr [ESP + 0x4c],EAX      ; 0049d6d2
    FADDP                               ; 0049d6d6
    LEA EBX,[EBP + 0x4c]                ; 0049d6d8
    FXCH                                ; 0049d6db
    FSTP float ptr [ESP + 0x48]         ; 0049d6dd
    FSTP float ptr [ESP + 0x50]         ; 0049d6e1
    LEA EAX,[ESP + 0xc]                 ; 0049d6e5
    MOVSD ES:EDI,ESI                    ; 0049d6e9
    MOVSD ES:EDI,ESI                    ; 0049d6ea
    MOVSD ES:EDI,ESI                    ; 0049d6eb
    CMP EBX,EAX                         ; 0049d6ec
    JZ 0x0049d704                       ; 0049d6ee
        ;   XREF to: 0049d704 (CONDITIONAL_JUMP)  ; LAB_0049d704
    MOV EAX,dword ptr [ESP + 0xc]       ; 0049d6f0
    MOV dword ptr [EBX],EAX             ; 0049d6f4
    MOV EAX,dword ptr [ESP + 0x10]      ; 0049d6f6
    MOV dword ptr [EBX + 0x4],EAX       ; 0049d6fa
    MOV EAX,dword ptr [ESP + 0x14]      ; 0049d6fd
    MOV dword ptr [EBX + 0x8],EAX       ; 0049d701
    LEA EBX,[EBP + 0xc]                 ; 0049d704
        ;   Label: LAB_0049d704
    LEA EDI,[ESP + 0x54]                ; 0049d707
    LEA ESI,[ESP + 0x18]                ; 0049d70b
    FLD float ptr [EBX]                 ; 0049d70f
    FLD float ptr [EBX + 0x8]           ; 0049d711
    MOV EAX,dword ptr [EBX + 0x4]       ; 0049d714
    FXCH                                ; 0049d717
    FLD float ptr [ESP + 0x84]          ; 0049d719
    FXCH                                ; 0049d720
    FADD ST0,ST1                        ; 0049d722
    MOV dword ptr [ESP + 0x1c],EAX      ; 0049d724
    FXCH ST2                            ; 0049d728
    FADDP                               ; 0049d72a
    LEA EBX,[EBP + 0x58]                ; 0049d72c
    FXCH                                ; 0049d72f
    FSTP float ptr [ESP + 0x18]         ; 0049d731
    FSTP float ptr [ESP + 0x20]         ; 0049d735
    LEA EAX,[ESP + 0x54]                ; 0049d739
    MOVSD ES:EDI,ESI                    ; 0049d73d
    MOVSD ES:EDI,ESI                    ; 0049d73e
    MOVSD ES:EDI,ESI                    ; 0049d73f
    CMP EBX,EAX                         ; 0049d740
    JZ 0x0049d758                       ; 0049d742
        ;   XREF to: 0049d758 (CONDITIONAL_JUMP)  ; LAB_0049d758
    MOV EAX,dword ptr [ESP + 0x54]      ; 0049d744
    MOV dword ptr [EBX],EAX             ; 0049d748
    MOV EAX,dword ptr [ESP + 0x58]      ; 0049d74a
    MOV dword ptr [EBX + 0x4],EAX       ; 0049d74e
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0049d751
    MOV dword ptr [EBX + 0x8],EAX       ; 0049d755
    FLD float ptr [ESP + 0x84]          ; 0049d758
        ;   Label: LAB_0049d758
    FLD ST0                             ; 0049d75f
    LEA EDI,[ESP + 0x30]                ; 0049d761
    LEA ESI,[ESP + 0x24]                ; 0049d765
    LEA EBX,[EBP + 0xc]                 ; 0049d769
    FCHS                                ; 0049d76c
    FLD float ptr [EBX]                 ; 0049d76e
    FLD float ptr [EBX + 0x8]           ; 0049d770
    MOV EAX,dword ptr [EBX + 0x4]       ; 0049d773
    FXCH                                ; 0049d776
    FADDP ST2,ST0                       ; 0049d778
    MOV dword ptr [ESP + 0x28],EAX      ; 0049d77a
    FADDP ST2,ST0                       ; 0049d77e
    LEA EBX,[EBP + 0x64]                ; 0049d780
    FSTP float ptr [ESP + 0x24]         ; 0049d783
    FSTP float ptr [ESP + 0x2c]         ; 0049d787
    LEA EAX,[ESP + 0x30]                ; 0049d78b
    MOVSD ES:EDI,ESI                    ; 0049d78f
    MOVSD ES:EDI,ESI                    ; 0049d790
    MOVSD ES:EDI,ESI                    ; 0049d791
    CMP EBX,EAX                         ; 0049d792
    JZ 0x0049d7aa                       ; 0049d794
        ;   XREF to: 0049d7aa (CONDITIONAL_JUMP)  ; LAB_0049d7aa
    MOV EAX,dword ptr [ESP + 0x30]      ; 0049d796
    MOV dword ptr [EBX],EAX             ; 0049d79a
    MOV EAX,dword ptr [ESP + 0x34]      ; 0049d79c
    MOV dword ptr [EBX + 0x4],EAX       ; 0049d7a0
    MOV EAX,dword ptr [ESP + 0x38]      ; 0049d7a3
    MOV dword ptr [EBX + 0x8],EAX       ; 0049d7a7
    LEA EAX,[EBP + 0x40]                ; 0049d7aa
        ;   Label: LAB_0049d7aa
    PUSH 0x0                            ; 0049d7ad
    PUSH EAX                            ; 0049d7af
    MOV ECX,dword ptr [0x00603b28]      ; 0049d7b0 | g_CDemonSetPtr
    PUSH ECX                            ; 0049d7b6 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_0053bc80 ; 0049d7b7
        ;   XREF to: 0053bc80 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_0053bc80()
    MOV dword ptr [ESP + 0x70],EAX      ; 0049d7bc
    FLD float ptr [ESP + 0x70]          ; 0049d7c0
    ADD ESP,0xc                         ; 0049d7c4
    LEA EAX,[EBP + 0x4c]                ; 0049d7c7
    PUSH 0x0                            ; 0049d7ca
    MOV EBX,dword ptr [0x00603b28]      ; 0049d7cc | g_CDemonSetPtr
    PUSH EAX                            ; 0049d7d2
    FADD double ptr [0x005c0770]        ; 0049d7d3 | DAT_005c0770
    PUSH EBX                            ; 0049d7d9 | g_CDemonSetInstance
    FSTP float ptr [EBP + 0x44]         ; 0049d7da
    CALL core_setcolid.cpp_FUN_0053bc80 ; 0049d7dd
        ;   XREF to: 0053bc80 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_0053bc80()
    MOV dword ptr [ESP + 0x70],EAX      ; 0049d7e2
    FLD float ptr [ESP + 0x70]          ; 0049d7e6
    ADD ESP,0xc                         ; 0049d7ea
    LEA EAX,[EBP + 0x58]                ; 0049d7ed
    PUSH 0x0                            ; 0049d7f0
    MOV ESI,dword ptr [0x00603b28]      ; 0049d7f2 | g_CDemonSetPtr
    PUSH EAX                            ; 0049d7f8
    FADD double ptr [0x005c0770]        ; 0049d7f9 | DAT_005c0770
    PUSH ESI                            ; 0049d7ff | g_CDemonSetInstance
    FSTP float ptr [EBP + 0x50]         ; 0049d800
    CALL core_setcolid.cpp_FUN_0053bc80 ; 0049d803
        ;   XREF to: 0053bc80 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_0053bc80()
    MOV dword ptr [ESP + 0x70],EAX      ; 0049d808
    FLD float ptr [ESP + 0x70]          ; 0049d80c
    ADD ESP,0xc                         ; 0049d810
    LEA EAX,[EBP + 0x64]                ; 0049d813
    PUSH 0x0                            ; 0049d816
    MOV EDI,dword ptr [0x00603b28]      ; 0049d818 | g_CDemonSetPtr
    PUSH EAX                            ; 0049d81e
    FADD double ptr [0x005c0770]        ; 0049d81f | DAT_005c0770
    PUSH EDI                            ; 0049d825 | g_CDemonSetInstance
    FSTP float ptr [EBP + 0x5c]         ; 0049d826
    CALL core_setcolid.cpp_FUN_0053bc80 ; 0049d829
        ;   XREF to: 0053bc80 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_0053bc80()
    FLD float ptr [EBP + 0x44]          ; 0049d82e
    FSUB float ptr [EBP + 0x10]         ; 0049d831
    MOV dword ptr [ESP + 0x70],EAX      ; 0049d834
    FABS                                ; 0049d838
    FLD float ptr [ESP + 0x70]          ; 0049d83a
    FADD double ptr [0x005c0770]        ; 0049d83e | DAT_005c0770
    ADD ESP,0xc                         ; 0049d844
    FSTP float ptr [EBP + 0x68]         ; 0049d847
    FLD1                                ; 0049d84a
    FCOMPP                              ; 0049d84c
    FNSTSW AX                           ; 0049d84e
    SAHF                                ; 0049d850
    JNC 0x0049d859                      ; 0049d851
        ;   XREF to: 0049d859 (CONDITIONAL_JUMP)  ; LAB_0049d859
    MOV EAX,dword ptr [EBP + 0x10]      ; 0049d853
    MOV dword ptr [EBP + 0x44],EAX      ; 0049d856
    FLD float ptr [EBP + 0x50]          ; 0049d859
        ;   Label: LAB_0049d859
    FSUB float ptr [EBP + 0x10]         ; 0049d85c
    FABS                                ; 0049d85f
    FLD1                                ; 0049d861
    FCOMPP                              ; 0049d863
    FNSTSW AX                           ; 0049d865
    SAHF                                ; 0049d867
    JNC 0x0049d870                      ; 0049d868
        ;   XREF to: 0049d870 (CONDITIONAL_JUMP)  ; LAB_0049d870
    MOV EAX,dword ptr [EBP + 0x10]      ; 0049d86a
    MOV dword ptr [EBP + 0x50],EAX      ; 0049d86d
    FLD float ptr [EBP + 0x5c]          ; 0049d870
        ;   Label: LAB_0049d870
    FSUB float ptr [EBP + 0x10]         ; 0049d873
    FABS                                ; 0049d876
    FLD1                                ; 0049d878
    FCOMPP                              ; 0049d87a
    FNSTSW AX                           ; 0049d87c
    SAHF                                ; 0049d87e
    JNC 0x0049d887                      ; 0049d87f
        ;   XREF to: 0049d887 (CONDITIONAL_JUMP)  ; LAB_0049d887
    MOV EAX,dword ptr [EBP + 0x10]      ; 0049d881
    MOV dword ptr [EBP + 0x5c],EAX      ; 0049d884
    FLD float ptr [EBP + 0x68]          ; 0049d887
        ;   Label: LAB_0049d887
    FSUB float ptr [EBP + 0x10]         ; 0049d88a
    FABS                                ; 0049d88d
    FLD1                                ; 0049d88f
    FCOMPP                              ; 0049d891
    FNSTSW AX                           ; 0049d893
    SAHF                                ; 0049d895
    JC 0x0049d8a0                       ; 0049d896
        ;   XREF to: 0049d8a0 (CONDITIONAL_JUMP)  ; LAB_0049d8a0
    ADD ESP,0x68                        ; 0049d898
    POP EBP                             ; 0049d89b
    POP EDI                             ; 0049d89c
    POP ESI                             ; 0049d89d
    POP EBX                             ; 0049d89e
    RET                                 ; 0049d89f
    MOV EAX,dword ptr [EBP + 0x10]      ; 0049d8a0
        ;   Label: LAB_0049d8a0
    MOV dword ptr [EBP + 0x68],EAX      ; 0049d8a3
    ADD ESP,0x68                        ; 0049d8a6
    POP EBP                             ; 0049d8a9
    POP EDI                             ; 0049d8aa
    POP ESI                             ; 0049d8ab
    POP EBX                             ; 0049d8ac
    RET                                 ; 0049d8ad

