; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_00552490(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   world_position
; CVector3i *      Stack[0xc]:4   surface_normal
; Local Variables:
; undefined        Stack[-0x48]:1  local_48
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x30]:1  local_30
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_set.cpp_CDemonSet_lightVertexColor_FUN_00552710 at 005528b8
;   core_set.cpp_FUN_00550da0 at 00551020
;   core_shadow.cpp_FUN_0055de50 at 0055e416
;
; Referenced Globals:
;   undefined4 DAT_01fe55bc
;   undefined4 DAT_0202634c
;   undefined4 DAT_02026350
;   undefined4 DAT_02026354
;   undefined4 DAT_0202a1f0
;   undefined4 DAT_0202a1f4
;   undefined4 DAT_0202a374
;   undefined4 DAT_0202a378
;   undefined4 DAT_0202a388
;   undefined4 DAT_0202a38c
;   undefined4 DAT_0202a390
;   undefined4 DAT_0202a840
;   undefined4 DAT_0202a844
;   undefined4 DAT_0202a850
;   undefined4 DAT_0202a85c
;   ... and 2 more
;
; Called Functions:
;   core_dcamera.cpp_FUN_0044f9c0
;   core_dglobe.cpp_FUN_0045ef00
;   core_mirror.cpp_FUN_00519ff0
;   core_mirror.cpp_FUN_0051a0a0
;   core_set.cpp_FUN_00551d50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00552490
        ;   Label: core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_00552490
    PUSH ESI                            ; 00552491
    PUSH EDI                            ; 00552492
    PUSH EBP                            ; 00552493
    SUB ESP,0x38                        ; 00552494
    MOV EBP,dword ptr [ESP + 0x54]      ; 00552497
    MOV EDX,dword ptr [0x0202a840]      ; 0055249b | DAT_0202a840
    TEST EDX,EDX                        ; 005524a1
    JZ 0x005524cd                       ; 005524a3
        ;   XREF to: 005524cd (CONDITIONAL_JUMP)  ; LAB_005524cd
    CMP EDX,0x1                         ; 005524a5
    JNZ 0x0055269f                      ; 005524a8
        ;   XREF to: 0055269f (CONDITIONAL_JUMP)  ; LAB_0055269f
    PUSH 0x0                            ; 005524ae
    PUSH 0x0                            ; 005524b0
    PUSH 0x0                            ; 005524b2
    PUSH 0x0                            ; 005524b4
    PUSH 0x0                            ; 005524b6
    MOV ESI,dword ptr [ESP + 0x60]      ; 005524b8
    PUSH ESI                            ; 005524bc
    CALL core_set.cpp_FUN_00551d50      ; 005524bd
        ;   XREF to: 00551d50 (UNCONDITIONAL_CALL)  ; int core_set.cpp_FUN_00551d50(CDemonSet * this_ptr, CVector3f * position, CVector3f * orientation, CVector3f * aabb_min, ...)
        ;   Label: LAB_005524bd
    ADD ESP,0x18                        ; 005524c2
    XOR EDI,EDI                         ; 005524c5
    MOV dword ptr [0x0202a840],EDI      ; 005524c7 | DAT_0202a840
    MOV EAX,[0x0202a374]                ; 005524cd | DAT_0202a374
        ;   Label: LAB_005524cd
    XOR ESI,ESI                         ; 005524d2
    XOR EBX,EBX                         ; 005524d4
    TEST EAX,EAX                        ; 005524d6
    JLE 0x00552510                      ; 005524d8
        ;   XREF to: 00552510 (CONDITIONAL_JUMP)  ; LAB_00552510
    XOR EDI,EDI                         ; 005524da
    PUSH EBP                            ; 005524dc
        ;   Label: LAB_005524dc
    MOV EDX,dword ptr [EDI + 0x202a378] ; 005524dd | DAT_0202a378
    PUSH EDX                            ; 005524e3
    MOV ECX,dword ptr [ESP + 0x58]      ; 005524e4
    PUSH ECX                            ; 005524e8
    PUSH 0x1fe37ec                      ; 005524e9
    ADD EDI,0x4                         ; 005524ee
    INC ESI                             ; 005524f1
    CALL core_dcamera.cpp_FUN_0044f9c0  ; 005524f2
        ;   XREF to: 0044f9c0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0044f9c0()
    ADD EBX,EAX                         ; 005524f7
    MOV EAX,[0x0202a374]                ; 005524f9 | DAT_0202a374
    ADD ESP,0x10                        ; 005524fe
    CMP ESI,EAX                         ; 00552501
    JL 0x005524dc                       ; 00552503
        ;   XREF to: 005524dc (CONDITIONAL_JUMP)  ; LAB_005524dc
    LEA EAX,[EAX]                       ; 00552505
    LEA EDX,[EDX]                       ; 0055250b
    MOV EBX,EBX                         ; 0055250e
    MOV EDX,dword ptr [0x0202a1f0]      ; 00552510 | DAT_0202a1f0
        ;   Label: LAB_00552510
    XOR EDI,EDI                         ; 00552516
    TEST EDX,EDX                        ; 00552518
    JLE 0x00552550                      ; 0055251a
        ;   XREF to: 00552550 (CONDITIONAL_JUMP)  ; LAB_00552550
    XOR ESI,ESI                         ; 0055251c
    PUSH EBP                            ; 0055251e
        ;   Label: LAB_0055251e
    MOV ECX,dword ptr [ESI + 0x202a1f4] ; 0055251f | DAT_0202a1f4
    PUSH ECX                            ; 00552525
    MOV EAX,dword ptr [ESP + 0x58]      ; 00552526
    PUSH EAX                            ; 0055252a
    PUSH 0x1fe37ec                      ; 0055252b
    ADD ESI,0x4                         ; 00552530
    INC EDI                             ; 00552533
    CALL core_dcamera.cpp_FUN_0044f9c0  ; 00552534
        ;   XREF to: 0044f9c0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0044f9c0()
    MOV EDX,dword ptr [0x0202a1f0]      ; 00552539 | DAT_0202a1f0
    ADD ESP,0x10                        ; 0055253f
    ADD EBX,EAX                         ; 00552542
    CMP EDI,EDX                         ; 00552544
    JL 0x0055251e                       ; 00552546
        ;   XREF to: 0055251e (CONDITIONAL_JUMP)  ; LAB_0055251e
    LEA EAX,[EAX]                       ; 00552548
    MOV EDX,EDX                         ; 0055254e
    MOV ECX,dword ptr [0x0202a388]      ; 00552550 | DAT_0202a388
        ;   Label: LAB_00552550
    XOR ESI,ESI                         ; 00552556
    TEST ECX,ECX                        ; 00552558
    JLE 0x00552590                      ; 0055255a
        ;   XREF to: 00552590 (CONDITIONAL_JUMP)  ; LAB_00552590
    XOR EDI,EDI                         ; 0055255c
    PUSH EBP                            ; 0055255e
        ;   Label: LAB_0055255e
    MOV EAX,dword ptr [ESP + 0x54]      ; 0055255f
    PUSH EAX                            ; 00552563
    MOV EDX,dword ptr [EDI + 0x202a38c] ; 00552564 | DAT_0202a38c | DAT_0202a390
    PUSH EDX                            ; 0055256a
    ADD EDI,0x4                         ; 0055256b
    INC ESI                             ; 0055256e
    CALL core_dglobe.cpp_FUN_0045ef00   ; 0055256f
        ;   XREF to: 0045ef00 (UNCONDITIONAL_CALL)  ; undefined core_dglobe.cpp_FUN_0045ef00()
    MOV ECX,dword ptr [0x0202a388]      ; 00552574 | DAT_0202a388
    ADD ESP,0xc                         ; 0055257a
    ADD EBX,EAX                         ; 0055257d
    CMP ESI,ECX                         ; 0055257f
    JL 0x0055255e                       ; 00552581
        ;   XREF to: 0055255e (CONDITIONAL_JUMP)  ; LAB_0055255e
    LEA EAX,[EAX]                       ; 00552583
    LEA EDX,[EDX]                       ; 00552589
    NOP                                 ; 0055258f
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00552590
        ;   Label: LAB_00552590
    TEST dword ptr [EAX + 0x14d160],0x7fffffff ; 00552594
    JZ 0x005525dc                       ; 0055259e
        ;   XREF to: 005525dc (CONDITIONAL_JUMP)  ; LAB_005525dc
    TEST EBP,EBP                        ; 005525a0
    JZ 0x005525dc                       ; 005525a2
        ;   XREF to: 005525dc (CONDITIONAL_JUMP)  ; LAB_005525dc
    MOV EAX,[0x0202634c]                ; 005525a4 | DAT_0202634c
    MOV EDX,dword ptr [EBP]             ; 005525a9
    IMUL EDX                            ; 005525ac
    SHRD EAX,EDX,0x10                   ; 005525ae
    MOV ESI,EAX                         ; 005525b2
    MOV EDX,dword ptr [EBP + 0x4]       ; 005525b4
    MOV EAX,[0x02026350]                ; 005525b7 | DAT_02026350
    IMUL EDX                            ; 005525bc
    SHRD EAX,EDX,0x10                   ; 005525be
    MOV EDX,dword ptr [EBP + 0x8]       ; 005525c2
    ADD ESI,EAX                         ; 005525c5
    MOV EAX,[0x02026354]                ; 005525c7 | DAT_02026354
    IMUL EDX                            ; 005525cc
    SHRD EAX,EDX,0x10                   ; 005525ce
    ADD EAX,ESI                         ; 005525d2
    TEST EAX,EAX                        ; 005525d4
    JL 0x005526c2                       ; 005525d6
        ;   XREF to: 005526c2 (CONDITIONAL_JUMP)  ; LAB_005526c2
    MOV EAX,dword ptr [ESP + 0x4c]      ; 005525dc
        ;   Label: LAB_005525dc
    XOR EDI,EDI                         ; 005525e0
    MOV EDX,dword ptr [EAX + 0x15acc8]  ; 005525e2
    MOV dword ptr [ESP + 0x30],EDI      ; 005525e8
    TEST EDX,EDX                        ; 005525ec
    JLE 0x00552695                      ; 005525ee
        ;   XREF to: 00552695 (CONDITIONAL_JUMP)  ; LAB_00552695
    MOV dword ptr [ESP + 0x34],EAX      ; 005525f4
    MOV EAX,dword ptr [ESP + 0x50]      ; 005525f8
        ;   Label: LAB_005525f8
    PUSH EAX                            ; 005525fc
    MOV EAX,dword ptr [ESP + 0x38]      ; 005525fd
    MOV EAX,dword ptr [EAX + 0x15accc]  ; 00552601
    ADD EAX,0x1ec                       ; 00552607
    PUSH EAX                            ; 0055260c
    LEA ESI,[ESP + 0x8]                 ; 0055260d
    LEA EDI,[ESP + 0x14]                ; 00552611
    CALL core_mirror.cpp_FUN_00519ff0   ; 00552615
        ;   XREF to: 00519ff0 (UNCONDITIONAL_CALL)  ; undefined core_mirror.cpp_FUN_00519ff0()
    LEA ESI,[ESP + 0x8]                 ; 0055261a
    ADD ESP,0x8                         ; 0055261e
    MOVSD ES:EDI,ESI                    ; 00552621
    MOVSD ES:EDI,ESI                    ; 00552622
    MOVSD ES:EDI,ESI                    ; 00552623
    TEST EBP,EBP                        ; 00552624
    JNZ 0x005526c9                      ; 00552626
        ;   XREF to: 005526c9 (CONDITIONAL_JUMP)  ; LAB_005526c9
    MOV ECX,dword ptr [0x01fe55bc]      ; 0055262c | DAT_01fe55bc
        ;   Label: LAB_0055262c
    XOR EDI,EDI                         ; 00552632
    TEST ECX,ECX                        ; 00552634
    JLE 0x0055266f                      ; 00552636
        ;   XREF to: 0055266f (CONDITIONAL_JUMP)  ; LAB_0055266f
    XOR ESI,ESI                         ; 00552638
    TEST EBP,EBP                        ; 0055263a
        ;   Label: LAB_0055263a
    JZ 0x005526fb                       ; 0055263c
        ;   XREF to: 005526fb (CONDITIONAL_JUMP)  ; LAB_005526fb
    LEA EAX,[ESP + 0x18]                ; 00552642
    PUSH EAX                            ; 00552646
    MOV ECX,dword ptr [ESI + 0x1fe55c0] ; 00552647
    PUSH ECX                            ; 0055264d
    LEA EAX,[ESP + 0x14]                ; 0055264e
        ;   Label: LAB_0055264e
    PUSH EAX                            ; 00552652
    PUSH 0x1fe37ec                      ; 00552653
    CALL core_dcamera.cpp_FUN_0044f9c0  ; 00552658
        ;   XREF to: 0044f9c0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0044f9c0()
    ADD ESP,0x10                        ; 0055265d
    ADD EBX,EAX                         ; 00552660
    MOV EAX,[0x01fe55bc]                ; 00552662 | DAT_01fe55bc
    INC EDI                             ; 00552667
    ADD ESI,0x4                         ; 00552668
    CMP EDI,EAX                         ; 0055266b
    JL 0x0055263a                       ; 0055266d
        ;   XREF to: 0055263a (CONDITIONAL_JUMP)  ; LAB_0055263a
    MOV ECX,dword ptr [ESP + 0x34]      ; 0055266f
        ;   Label: LAB_0055266f
    MOV ESI,dword ptr [ESP + 0x30]      ; 00552673
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00552677
    ADD ECX,0x4                         ; 0055267b
    INC ESI                             ; 0055267e
    MOV EDI,dword ptr [EDX + 0x15acc8]  ; 0055267f
    MOV dword ptr [ESP + 0x34],ECX      ; 00552685
    MOV dword ptr [ESP + 0x30],ESI      ; 00552689
    CMP ESI,EDI                         ; 0055268d
    JL 0x005525f8                       ; 0055268f
        ;   XREF to: 005525f8 (CONDITIONAL_JUMP)  ; LAB_005525f8
    MOV EAX,EBX                         ; 00552695
        ;   Label: LAB_00552695
    ADD ESP,0x38                        ; 00552697
    POP EBP                             ; 0055269a
    POP EDI                             ; 0055269b
    POP ESI                             ; 0055269c
    POP EBX                             ; 0055269d
    RET                                 ; 0055269e
    PUSH 0x202a874                      ; 0055269f | DAT_0202a874
        ;   Label: LAB_0055269f
    PUSH 0x202a868                      ; 005526a4 | DAT_0202a868
    PUSH 0x202a85c                      ; 005526a9 | DAT_0202a85c
    PUSH 0x202a850                      ; 005526ae | DAT_0202a850
    PUSH 0x202a844                      ; 005526b3 | DAT_0202a844
    MOV EBX,dword ptr [ESP + 0x60]      ; 005526b8
    PUSH EBX                            ; 005526bc
    JMP 0x005524bd                      ; 005526bd
        ;   XREF to: 005524bd (UNCONDITIONAL_JUMP)  ; LAB_005524bd
    SUB EBX,EAX                         ; 005526c2
        ;   Label: LAB_005526c2
    JMP 0x005525dc                      ; 005526c4
        ;   XREF to: 005525dc (UNCONDITIONAL_JUMP)  ; LAB_005525dc
    MOV EAX,dword ptr [ESP + 0x34]      ; 005526c9
        ;   Label: LAB_005526c9
    PUSH EBP                            ; 005526cd
    MOV EDX,dword ptr [ESP + 0x54]      ; 005526ce
    MOV EAX,dword ptr [EAX + 0x15accc]  ; 005526d2
    PUSH EDX                            ; 005526d8
    ADD EAX,0x1ec                       ; 005526d9
    PUSH EAX                            ; 005526de
    LEA ESI,[ESP + 0x30]                ; 005526df
    LEA EDI,[ESP + 0x24]                ; 005526e3
    CALL core_mirror.cpp_FUN_0051a0a0   ; 005526e7
        ;   XREF to: 0051a0a0 (UNCONDITIONAL_CALL)  ; undefined core_mirror.cpp_FUN_0051a0a0()
    LEA ESI,[ESP + 0x30]                ; 005526ec
    ADD ESP,0xc                         ; 005526f0
    MOVSD ES:EDI,ESI                    ; 005526f3
    MOVSD ES:EDI,ESI                    ; 005526f4
    MOVSD ES:EDI,ESI                    ; 005526f5
    JMP 0x0055262c                      ; 005526f6
        ;   XREF to: 0055262c (UNCONDITIONAL_JUMP)  ; LAB_0055262c
    PUSH EBP                            ; 005526fb
        ;   Label: LAB_005526fb
    MOV EDX,dword ptr [ESI + 0x1fe55c0] ; 005526fc
    PUSH EDX                            ; 00552702
    JMP 0x0055264e                      ; 00552703
        ;   XREF to: 0055264e (UNCONDITIONAL_JUMP)  ; LAB_0055264e

