; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_FUN_005486f0(CDeformableModelInstance *this_ptr,SPose *bone_transform)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; SPose *          Stack[0x8]:4   bone_transform
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[4]:
;   core_charactr.cpp_FUN_00426730 at 0042688d
;   core_doc.cpp_FUN_00455170 at 00455251
;   core_gabriela.cpp_FUN_004b20d0 at 004b21a5
;   core_stranger.cpp_FUN_00567430 at 00567511
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005486f0
        ;   Label: core_skeleton.cpp_FUN_005486f0
    PUSH EBP                            ; 005486f1
    SUB ESP,0x10                        ; 005486f2
    MOV EDI,dword ptr [ESP + 0x20]      ; 005486f5
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005486f9
    ADD EAX,0x6a4                       ; 005486fd
    CMP EAX,EDI                         ; 00548702
    JZ 0x00548716                       ; 00548704
        ;   XREF to: 00548716 (CONDITIONAL_JUMP)  ; LAB_00548716
    MOV EDX,dword ptr [EDI]             ; 00548706
    MOV dword ptr [EAX],EDX             ; 00548708
    MOV EDX,dword ptr [EDI + 0x4]       ; 0054870a
    MOV dword ptr [EAX + 0x4],EDX       ; 0054870d
    MOV EDX,dword ptr [EDI + 0x8]       ; 00548710
    MOV dword ptr [EAX + 0x8],EDX       ; 00548713
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00548716
        ;   Label: LAB_00548716
    PUSH EDX                            ; 0054871a
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 0054871b
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00548720
    MOV EAX,dword ptr [EAX + 0x1d1f8]   ; 00548723
    XOR EDX,EDX                         ; 00548729
    MOV dword ptr [ESP],EAX             ; 0054872b
    TEST EAX,EAX                        ; 0054872e
    JLE 0x005487b9                      ; 00548730
        ;   XREF to: 005487b9 (CONDITIONAL_JUMP)  ; LAB_005487b9
    PUSH ESI                            ; 00548736
    PUSH EBX                            ; 00548737
    MOV EAX,dword ptr [ESP + 0x24]      ; 00548738
    MOV dword ptr [ESP + 0x10],EDI      ; 0054873c
    MOV EBX,EDI                         ; 00548740
    MOV dword ptr [ESP + 0xc],EDI       ; 00548742
    MOV dword ptr [ESP + 0x14],EAX      ; 00548746
    MOV EBP,EAX                         ; 0054874a
    MOV ESI,dword ptr [ESP + 0xc]       ; 0054874c
        ;   Label: LAB_0054874c
    LEA EDI,[EBP + 0x6b0]               ; 00548750
    LEA ESI,[ESI + 0xc]                 ; 00548756
    MOV ECX,0xc                         ; 00548759
    MOVSD ES:EDI,ESI                    ; 0054875e
    MOVSD ES:EDI,ESI                    ; 0054875f
    MOVSD ES:EDI,ESI                    ; 00548760
    MOVSD ES:EDI,ESI                    ; 00548761
    ADD EAX,0x30                        ; 00548762
    MOV EDI,dword ptr [ESP + 0x14]      ; 00548765
    FLD float ptr [EBX + 0x64c]         ; 00548769
    MOV ESI,dword ptr [ESP + 0x10]      ; 0054876f
    FSTP float ptr [EDI + 0xcf0]        ; 00548773
    LEA EDI,[EAX + 0xe50]               ; 00548779
    LEA ESI,[ESI + 0x7dc]               ; 0054877f
    ADD EBX,0x4                         ; 00548785
    ADD EBP,0x10                        ; 00548788
    MOVSD.REP ES:EDI,ESI                ; 0054878b
    INC EDX                             ; 0054878d
    MOV ESI,dword ptr [ESP + 0x10]      ; 0054878e
    MOV EDI,dword ptr [ESP + 0x14]      ; 00548792
    MOV ECX,dword ptr [ESP + 0xc]       ; 00548796
    ADD ESI,0x30                        ; 0054879a
    ADD EDI,0x4                         ; 0054879d
    ADD ECX,0x10                        ; 005487a0
    MOV dword ptr [ESP + 0x10],ESI      ; 005487a3
    MOV dword ptr [ESP + 0x14],EDI      ; 005487a7
    MOV ESI,dword ptr [ESP + 0x8]       ; 005487ab
    MOV dword ptr [ESP + 0xc],ECX       ; 005487af
    CMP EDX,ESI                         ; 005487b3
    JL 0x0054874c                       ; 005487b5
        ;   XREF to: 0054874c (CONDITIONAL_JUMP)  ; LAB_0054874c
    POP EBX                             ; 005487b7
    POP ESI                             ; 005487b8
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005487b9
        ;   Label: LAB_005487b9
    MOV dword ptr [EAX + 0x2230],0xffffffff ; 005487bd
    ADD ESP,0x10                        ; 005487c7
    POP EBP                             ; 005487ca
    POP EDI                             ; 005487cb
    RET                                 ; 005487cc

