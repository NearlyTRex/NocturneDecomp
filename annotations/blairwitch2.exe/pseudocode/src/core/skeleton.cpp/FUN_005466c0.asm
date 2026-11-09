; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_FUN_005466c0(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; CQuaternion4f *  Stack[0x8]:4   source_quaternions
; float            Stack[0xc]:4   blend_weight
; int              Stack[0x10]:4   bone_index
; CDeformableModel_MotionBlendWeightFunc * Stack[0x14]:4   blend_callback
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[14]:
;   core_baron.cpp_FUN_0040f950 at 0040fb38
;   core_colonel.cpp_FUN_00435830 at 00435b46
;   core_doc.cpp_FUN_00453d80 at 004540ca
;   core_doc.cpp_FUN_00455d10 at 00456051
;   core_doc.cpp_FUN_004562a0 at 0045661d
;   core_gabriela.cpp_FUN_004afa20 at 004afb37
;   core_haystack.cpp_FUN_004cc990 at 004ccc91
;   core_icepick.cpp_FUN_004d4c50 at 004d4fc6
;   core_scat.cpp_FUN_0051ecc0 at 0051f10b
;   core_scat.cpp_FUN_00520140 at 005203aa
;   ... and 4 more
;
; Referenced Globals:
;   undefined4 DAT_005e7327
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_FUN_00540fc0
;   core_xform.cpp_slerpQuaternion_FUN_00593df0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005466c0
        ;   Label: core_skeleton.cpp_FUN_005466c0
    PUSH ESI                            ; 005466c1
    PUSH EDI                            ; 005466c2
    PUSH EBP                            ; 005466c3
    SUB ESP,0x1c                        ; 005466c4
    FLD float ptr [ESP + 0x38]          ; 005466c7
    FCOMP double ptr [0x005e7327]       ; 005466cb | DAT_005e7327
    FNSTSW AX                           ; 005466d1
    SAHF                                ; 005466d3
    JA 0x005466de                       ; 005466d4
        ;   XREF to: 005466de (CONDITIONAL_JUMP)  ; LAB_005466de
    ADD ESP,0x1c                        ; 005466d6
        ;   Label: LAB_005466d6
    POP EBP                             ; 005466d9
    POP EDI                             ; 005466da
    POP ESI                             ; 005466db
    POP EBX                             ; 005466dc
    RET                                 ; 005466dd
    MOV EDX,dword ptr [ESP + 0x30]      ; 005466de
        ;   Label: LAB_005466de
    PUSH EDX                            ; 005466e2
    XOR EBX,EBX                         ; 005466e3
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 005466e5
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005466ea
    MOV ECX,dword ptr [EAX + 0x1d1f8]   ; 005466ed
    MOV dword ptr [ESP + 0x10],EAX      ; 005466f3
    TEST ECX,ECX                        ; 005466f7
    JLE 0x005466d6                      ; 005466f9
        ;   XREF to: 005466d6 (CONDITIONAL_JUMP)  ; LAB_005466d6
    MOV EAX,dword ptr [ESP + 0x30]      ; 005466fb
    MOV EBP,dword ptr [ESP + 0x30]      ; 005466ff
    MOV dword ptr [ESP + 0x14],EAX      ; 00546703
    ADD EBP,0x6b0                       ; 00546707
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0054670d
        ;   Label: LAB_0054670d
    PUSH EAX                            ; 00546711
    PUSH EBX                            ; 00546712
    MOV EDX,dword ptr [ESP + 0x18]      ; 00546713
    PUSH EDX                            ; 00546717
    CALL core_skeleton.cpp_FUN_00540fc0 ; 00546718
        ;   XREF to: 00540fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540fc0(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
    ADD ESP,0xc                         ; 0054671d
    TEST EAX,EAX                        ; 00546720
    JGE 0x00546743                      ; 00546722
        ;   XREF to: 00546743 (CONDITIONAL_JUMP)  ; LAB_00546743
    MOV ESI,dword ptr [ESP + 0x14]      ; 00546724
        ;   Label: LAB_00546724
    MOV EAX,dword ptr [ESP + 0x10]      ; 00546728
    ADD EBP,0x10                        ; 0054672c
    INC EBX                             ; 0054672f
    ADD ESI,0x10                        ; 00546730
    MOV EDI,dword ptr [EAX + 0x1d1f8]   ; 00546733
    MOV dword ptr [ESP + 0x14],ESI      ; 00546739
    CMP EBX,EDI                         ; 0054673d
    JGE 0x005466d6                      ; 0054673f
        ;   XREF to: 005466d6 (CONDITIONAL_JUMP)  ; LAB_005466d6
    JMP 0x0054670d                      ; 00546741
        ;   XREF to: 0054670d (UNCONDITIONAL_JUMP)  ; LAB_0054670d
    MOV ECX,dword ptr [ESP + 0x30]      ; 00546743
        ;   Label: LAB_00546743
    PUSH ECX                            ; 00546747
    PUSH EAX                            ; 00546748
    MOV ESI,dword ptr [ESP + 0x44]      ; 00546749
    PUSH dword ptr [ESP + 0x40]         ; 0054674d
    PUSH ESI                            ; 00546751
    PUSH EBX                            ; 00546752
    CALL dword ptr [ESP + 0x54]         ; 00546753
    MOV dword ptr [ESP + 0x2c],EAX      ; 00546757
    FLD float ptr [ESP + 0x2c]          ; 0054675b
    ADD ESP,0x14                        ; 0054675f
    SUB ESP,0x4                         ; 00546762
    MOV EDI,dword ptr [ESP + 0x38]      ; 00546765
    FSTP float ptr [ESP]                ; 00546769
    PUSH EDI                            ; 0054676c
    PUSH EBP                            ; 0054676d
    LEA ESI,[ESP + 0xc]                 ; 0054676e
    CALL core_xform.cpp_slerpQuaternion_FUN_00593df0 ; 00546772
        ;   XREF to: 00593df0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_00593df0()
    ADD ESP,0xc                         ; 00546777
    MOV EDI,dword ptr [ESP + 0x14]      ; 0054677a
    MOV ESI,ESP                         ; 0054677e
    LEA EDI,[EDI + 0x6b0]               ; 00546780
    MOVSD ES:EDI,ESI                    ; 00546786
    MOVSD ES:EDI,ESI                    ; 00546787
    MOVSD ES:EDI,ESI                    ; 00546788
    MOVSD ES:EDI,ESI                    ; 00546789
    JMP 0x00546724                      ; 0054678a
        ;   XREF to: 00546724 (UNCONDITIONAL_JUMP)  ; LAB_00546724

