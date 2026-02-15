; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_zombie_cpp_CZombie_getTargetPoints_FUN_005fc720(CZombie *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
; Local Variables:
; undefined1       Stack[-0x60]:1  local_60
; undefined1       Stack[-0x54]:1  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined1       Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined1       Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   void* switchdataD_005fc708 = 005fc78d
;   double DOUBLE_00658a25 = 0.5
;   double DOUBLE_00658a2d = 0.700000000000000
;   double DOUBLE_00658a35 = 0.300000000000000
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fc720
        ;   Label: core_zombie.cpp_CZombie_getTargetPoints_FUN_005fc720
    PUSH ESI                            ; 005fc721
    PUSH EDI                            ; 005fc722
    PUSH EBP                            ; 005fc723
    MOV EBP,ESP                         ; 005fc724
    SUB ESP,0x4c                        ; 005fc726
    AND ESP,0xfffffff8                  ; 005fc729
    MOV EBX,dword ptr [EBP + 0x14]      ; 005fc72c
    MOV EDX,dword ptr [EBX + 0xbf70]    ; 005fc72f
    PUSH EDX                            ; 005fc735
    LEA EAX,[ESP + 0x34]                ; 005fc736
    PUSH EAX                            ; 005fc73a
    LEA EAX,[EBX + 0x158]               ; 005fc73b
    PUSH EAX                            ; 005fc741
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 005fc742
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 005fc747
    LEA EAX,[ESP + 0x30]                ; 005fc74a
    MOV ECX,dword ptr [EBP + 0x18]      ; 005fc74e
    CMP EAX,ECX                         ; 005fc751
    JNZ 0x005fc84a                      ; 005fc753
        ;   XREF to: 005fc84a (CONDITIONAL_JUMP)  ; LAB_005fc84a
    XOR EDI,EDI                         ; 005fc759
        ;   Label: LAB_005fc759
    MOV ESI,0x1                         ; 005fc75b
    MOV dword ptr [ESP + 0x48],EDI      ; 005fc760
    LEA EDI,[EBX + 0x158]               ; 005fc764
    MOV EDX,dword ptr [ESP + 0x48]      ; 005fc76a
        ;   Label: LAB_005fc76a
    ADD EDX,dword ptr [EBX + 0x6c]      ; 005fc76e
    MOV ECX,0x4                         ; 005fc771
    MOV EAX,EDX                         ; 005fc776
    SAR EDX,0x1f                        ; 005fc778
    IDIV ECX                            ; 005fc77b
    CMP EDX,0x3                         ; 005fc77d
    JA 0x005fc82f                       ; 005fc780
        ;   XREF to: 005fc82f (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x5fc708]  ; 005fc786 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xbf78]    ; 005fc78d
        ;   Label: caseD_0
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 005fc793
    JZ 0x005fc82f                       ; 005fc79b
        ;   XREF to: 005fc82f (CONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [EBX + 0xbf60]    ; 005fc7a1
    PUSH ECX                            ; 005fc7a7
    LEA EAX,[ESP + 0x40]                ; 005fc7a8
    PUSH EAX                            ; 005fc7ac
        ;   Label: LAB_005fc7ac
    PUSH EDI                            ; 005fc7ad
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 005fc7ae
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    MOV EDX,EAX                         ; 005fc7b3
    LEA EAX,[ESP + 0x24]                ; 005fc7b5
    ADD ESP,0xc                         ; 005fc7b9
    CMP EAX,EDX                         ; 005fc7bc
    JZ 0x005fc7d4                       ; 005fc7be
        ;   XREF to: 005fc7d4 (CONDITIONAL_JUMP)  ; LAB_005fc7d4
    MOV EAX,dword ptr [EDX]             ; 005fc7c0
    MOV dword ptr [ESP + 0x18],EAX      ; 005fc7c2
    MOV EAX,dword ptr [EDX + 0x4]       ; 005fc7c6
    MOV dword ptr [ESP + 0x1c],EAX      ; 005fc7c9
    MOV EAX,dword ptr [EDX + 0x8]       ; 005fc7cd
    MOV dword ptr [ESP + 0x20],EAX      ; 005fc7d0
    IMUL EDX,ESI,0xc                    ; 005fc7d4
        ;   Label: LAB_005fc7d4
    FLD double ptr [0x00658a25]         ; 005fc7d7 | DOUBLE_00658a25
    FLD float ptr [ESP + 0x18]          ; 005fc7dd
    FMUL ST1                            ; 005fc7e1
    FLD float ptr [ESP + 0x1c]          ; 005fc7e3
    FMUL double ptr [0x00658a2d]        ; 005fc7e7 | DOUBLE_00658a2d
    FLD float ptr [ESP + 0x30]          ; 005fc7ed
    FMULP ST3                           ; 005fc7f1
    FLD float ptr [ESP + 0x34]          ; 005fc7f3
    FMUL double ptr [0x00658a35]        ; 005fc7f7 | DOUBLE_00658a35
    MOV EAX,dword ptr [EBP + 0x18]      ; 005fc7fd
    FADDP                               ; 005fc800
    FXCH ST2                            ; 005fc802
    FADDP                               ; 005fc804
    FXCH                                ; 005fc806
    FSTP float ptr [ESP + 0x1c]         ; 005fc808
    ADD EDX,EAX                         ; 005fc80c
    LEA EAX,[ESP + 0x18]                ; 005fc80e
    FSTP float ptr [ESP + 0x18]         ; 005fc812
    CMP EDX,EAX                         ; 005fc816
    JZ 0x005fc82e                       ; 005fc818
        ;   XREF to: 005fc82e (CONDITIONAL_JUMP)  ; LAB_005fc82e
    MOV EAX,dword ptr [ESP + 0x18]      ; 005fc81a
    MOV dword ptr [EDX],EAX             ; 005fc81e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005fc820
    MOV dword ptr [EDX + 0x4],EAX       ; 005fc824
    MOV EAX,dword ptr [ESP + 0x20]      ; 005fc827
    MOV dword ptr [EDX + 0x8],EAX       ; 005fc82b
    INC ESI                             ; 005fc82e
        ;   Label: LAB_005fc82e
    MOV EDX,dword ptr [ESP + 0x48]      ; 005fc82f
        ;   Label: default
    INC EDX                             ; 005fc833
    MOV dword ptr [ESP + 0x48],EDX      ; 005fc834
    CMP EDX,0x4                         ; 005fc838
    JL 0x005fc76a                       ; 005fc83b
        ;   XREF to: 005fc76a (CONDITIONAL_JUMP)  ; LAB_005fc76a
    MOV EAX,ESI                         ; 005fc841
    MOV ESP,EBP                         ; 005fc843
    POP EBP                             ; 005fc845
    POP EDI                             ; 005fc846
    POP ESI                             ; 005fc847
    POP EBX                             ; 005fc848
    RET                                 ; 005fc849
    MOV EAX,dword ptr [ESP + 0x30]      ; 005fc84a
        ;   Label: LAB_005fc84a
    MOV dword ptr [ECX],EAX             ; 005fc84e
    MOV EAX,dword ptr [ESP + 0x34]      ; 005fc850
    MOV dword ptr [ECX + 0x4],EAX       ; 005fc854
    MOV EAX,dword ptr [ESP + 0x38]      ; 005fc857
    MOV dword ptr [ECX + 0x8],EAX       ; 005fc85b
    JMP 0x005fc759                      ; 005fc85e
        ;   XREF to: 005fc759 (UNCONDITIONAL_JUMP)  ; LAB_005fc759
    MOV EAX,dword ptr [EBX + 0xbf80]    ; 005fc863
        ;   Label: caseD_1
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 005fc869
    JZ 0x005fc82f                       ; 005fc871
        ;   XREF to: 005fc82f (CONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [EBX + 0xbf64]    ; 005fc873
    PUSH ECX                            ; 005fc879
    LEA EAX,[ESP + 0x10]                ; 005fc87a
    JMP 0x005fc7ac                      ; 005fc87e
        ;   XREF to: 005fc7ac (UNCONDITIONAL_JUMP)  ; LAB_005fc7ac
    MOV EAX,dword ptr [EBX + 0xbf90]    ; 005fc883
        ;   Label: caseD_2
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 005fc889
    JZ 0x005fc82f                       ; 005fc891
        ;   XREF to: 005fc82f (CONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [EBX + 0xbf4c]    ; 005fc893
    PUSH ECX                            ; 005fc899
    LEA EAX,[ESP + 0x28]                ; 005fc89a
    PUSH EAX                            ; 005fc89e
    PUSH EDI                            ; 005fc89f
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 005fc8a0
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    IMUL EDX,ESI,0xc                    ; 005fc8a5
    ADD ESP,0xc                         ; 005fc8a8
    ADD EDX,dword ptr [EBP + 0x18]      ; 005fc8ab
    CMP EDX,EAX                         ; 005fc8ae
    JZ 0x005fc82e                       ; 005fc8b0
        ;   XREF to: 005fc82e (CONDITIONAL_JUMP)  ; LAB_005fc82e
    MOV ECX,dword ptr [EAX]             ; 005fc8b6
    MOV dword ptr [EDX],ECX             ; 005fc8b8
    MOV ECX,dword ptr [EAX + 0x4]       ; 005fc8ba
    MOV dword ptr [EDX + 0x4],ECX       ; 005fc8bd
    MOV ECX,dword ptr [EAX + 0x8]       ; 005fc8c0
    MOV dword ptr [EDX + 0x8],ECX       ; 005fc8c3
    JMP 0x005fc82e                      ; 005fc8c6
        ;   XREF to: 005fc82e (UNCONDITIONAL_JUMP)  ; LAB_005fc82e
    MOV EAX,dword ptr [EBX + 0xbf8c]    ; 005fc8cb
        ;   Label: caseD_3
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 005fc8d1
    JZ 0x005fc82f                       ; 005fc8d9
        ;   XREF to: 005fc82f (CONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [EBX + 0xbf74]    ; 005fc8df
    PUSH ECX                            ; 005fc8e5
    LEA EAX,[ESP + 0x4]                 ; 005fc8e6
    PUSH EAX                            ; 005fc8ea
    PUSH EDI                            ; 005fc8eb
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 005fc8ec
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    IMUL EDX,ESI,0xc                    ; 005fc8f1
    ADD ESP,0xc                         ; 005fc8f4
    ADD EDX,dword ptr [EBP + 0x18]      ; 005fc8f7
    CMP EDX,EAX                         ; 005fc8fa
    JZ 0x005fc82e                       ; 005fc8fc
        ;   XREF to: 005fc82e (CONDITIONAL_JUMP)  ; LAB_005fc82e
    MOV ECX,dword ptr [EAX]             ; 005fc902
    MOV dword ptr [EDX],ECX             ; 005fc904
    MOV ECX,dword ptr [EAX + 0x4]       ; 005fc906
    MOV dword ptr [EDX + 0x4],ECX       ; 005fc909
    MOV ECX,dword ptr [EAX + 0x8]       ; 005fc90c
    MOV dword ptr [EDX + 0x8],ECX       ; 005fc90f
    JMP 0x005fc82e                      ; 005fc912
        ;   XREF to: 005fc82e (UNCONDITIONAL_JUMP)  ; LAB_005fc82e

