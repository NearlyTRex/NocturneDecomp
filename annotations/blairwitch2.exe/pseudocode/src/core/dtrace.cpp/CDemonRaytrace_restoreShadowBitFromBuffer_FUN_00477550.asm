; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_restoreShadowBitFromBuffer_FUN_00477550(CDemonRaytrace *this_ptr,CVector3f *world_position)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   world_position
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[1]:
;   core_dtrace.cpp_CDemonRaytrace_transferShadowVoxels_FUN_00477160 at 004773d2
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_005d1d77
;   TerminatedCString s_Parity_Check_999_005d1d8a
;   undefined4 DAT_00613888
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_00446510
;   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_00472af0
;   core_dtrace.cpp_FUN_004769a0
;   core_dtrace.cpp_FUN_00476a50
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00477550
        ;   Label: core_dtrace.cpp_CDemonRaytrace_restoreShadowBitFromBuffer_FUN_00477550
    PUSH ESI                            ; 00477551
    PUSH EDI                            ; 00477552
    PUSH EBP                            ; 00477553
    SUB ESP,0x30                        ; 00477554
    MOV EBX,dword ptr [ESP + 0x44]      ; 00477557
    MOV EDX,dword ptr [ESP + 0x48]      ; 0047755b
    PUSH EDX                            ; 0047755f
    PUSH EBX                            ; 00477560
    LEA ESI,[ESP + 0x20]                ; 00477561
    LEA EDI,[ESP + 0x14]                ; 00477565
    CALL core_dtrace.cpp_FUN_004769a0   ; 00477569
        ;   XREF to: 004769a0 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_004769a0()
    LEA ESI,[ESP + 0x20]                ; 0047756e
    ADD ESP,0x8                         ; 00477572
    MOVSD ES:EDI,ESI                    ; 00477575
    MOVSD ES:EDI,ESI                    ; 00477576
    MOVSD ES:EDI,ESI                    ; 00477577
    MOV ECX,dword ptr [ESP + 0xc]       ; 00477578
    TEST ECX,ECX                        ; 0047757c
    JL 0x0047759f                       ; 0047757e
        ;   XREF to: 0047759f (CONDITIONAL_JUMP)  ; LAB_0047759f
    MOV ESI,dword ptr [ESP + 0x10]      ; 00477580
    TEST ESI,ESI                        ; 00477584
    JL 0x0047759f                       ; 00477586
        ;   XREF to: 0047759f (CONDITIONAL_JUMP)  ; LAB_0047759f
    MOV EDI,dword ptr [ESP + 0x14]      ; 00477588
    TEST EDI,EDI                        ; 0047758c
    JL 0x0047759f                       ; 0047758e
        ;   XREF to: 0047759f (CONDITIONAL_JUMP)  ; LAB_0047759f
    CMP ECX,dword ptr [EBX + 0x40]      ; 00477590
    JGE 0x0047759f                      ; 00477593
        ;   XREF to: 0047759f (CONDITIONAL_JUMP)  ; LAB_0047759f
    CMP ESI,dword ptr [EBX + 0x44]      ; 00477595
    JGE 0x0047759f                      ; 00477598
        ;   XREF to: 0047759f (CONDITIONAL_JUMP)  ; LAB_0047759f
    CMP EDI,dword ptr [EBX + 0x48]      ; 0047759a
    JL 0x004775a7                       ; 0047759d
        ;   XREF to: 004775a7 (CONDITIONAL_JUMP)  ; LAB_004775a7
    ADD ESP,0x30                        ; 0047759f
        ;   Label: LAB_0047759f
    POP EBP                             ; 004775a2
    POP EDI                             ; 004775a3
    POP ESI                             ; 004775a4
    POP EBX                             ; 004775a5
    RET                                 ; 004775a6
    MOV ESI,dword ptr [ESP + 0x48]      ; 004775a7
        ;   Label: LAB_004775a7
    PUSH ESI                            ; 004775ab
    PUSH EBX                            ; 004775ac
    LEA ESI,[ESP + 0x2c]                ; 004775ad
    LEA EDI,[ESP + 0x8]                 ; 004775b1
    CALL core_dtrace.cpp_FUN_00476a50   ; 004775b5
        ;   XREF to: 00476a50 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_00476a50()
    LEA ESI,[ESP + 0x2c]                ; 004775ba
    ADD ESP,0x8                         ; 004775be
    MOVSD ES:EDI,ESI                    ; 004775c1
    MOVSD ES:EDI,ESI                    ; 004775c2
    MOVSD ES:EDI,ESI                    ; 004775c3
    MOV EAX,dword ptr [ESP]             ; 004775c4
    MOV EDX,EAX                         ; 004775c7
    MOV ESI,0x8                         ; 004775c9
    SAR EDX,0x1f                        ; 004775ce
    IDIV ESI                            ; 004775d1
    MOV EAX,dword ptr [ESP + 0x4]       ; 004775d3
    MOV dword ptr [ESP],EDX             ; 004775d7
    MOV EDX,EAX                         ; 004775da
    SAR EDX,0x1f                        ; 004775dc
    IDIV ESI                            ; 004775df
    MOV EAX,dword ptr [ESP + 0x8]       ; 004775e1
    MOV dword ptr [ESP + 0x4],EDX       ; 004775e5
    MOV EDX,EAX                         ; 004775e9
    SAR EDX,0x1f                        ; 004775eb
    IDIV ESI                            ; 004775ee
    MOV EDI,dword ptr [ESP + 0x14]      ; 004775f0
    PUSH EDI                            ; 004775f4
    MOV EBP,dword ptr [ESP + 0x14]      ; 004775f5
    PUSH EBP                            ; 004775f9
    MOV EAX,dword ptr [ESP + 0x14]      ; 004775fa
    PUSH EAX                            ; 004775fe
    PUSH EBX                            ; 004775ff
    MOV dword ptr [ESP + 0x18],EDX      ; 00477600
    CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_00472af0 ; 00477604
        ;   XREF to: 00472af0 (UNCONDITIONAL_CALL)  ; CDemonCube * core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_00472af0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z)
    ADD ESP,0x10                        ; 00477609
    MOV EBX,EAX                         ; 0047760c
    TEST EAX,EAX                        ; 0047760e
    JNZ 0x00477635                      ; 00477610
        ;   XREF to: 00477635 (CONDITIONAL_JUMP)  ; LAB_00477635
    MOV EDX,0x5d1d77                    ; 00477612 | = "..\\core\\dtrace.cpp"
    MOV ECX,0xb55                       ; 00477617
    PUSH 0x5d1d8a                       ; 0047761c | = "Parity Check 999"
    MOV dword ptr [0x01d046a0],EDX      ; 00477621 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00477627 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0047762d
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00477632
    CMP dword ptr [EBX],0x0             ; 00477635
        ;   Label: LAB_00477635
    JNZ 0x00477643                      ; 00477638
        ;   XREF to: 00477643 (CONDITIONAL_JUMP)  ; LAB_00477643
    PUSH EBX                            ; 0047763a
    CALL core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_00446510 ; 0047763b
        ;   XREF to: 00446510 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_00446510(CDemonCube * this_ptr)
    ADD ESP,0x4                         ; 00477640
    MOV EAX,dword ptr [ESP + 0x8]       ; 00477643
        ;   Label: LAB_00477643
    MOV EDI,dword ptr [ESP + 0x4]       ; 00477647
    MOV EDX,dword ptr [ESP]             ; 0047764b
    MOV ESI,dword ptr [EBX]             ; 0047764e
    SHL EAX,0x3                         ; 00477650
    MOV DL,byte ptr [EDX + 0x613888]    ; 00477653 | DAT_00613888
    ADD EAX,EDI                         ; 00477659
    XOR DL,0xff                         ; 0047765b
    AND byte ptr [ESI + EAX*0x1],DL     ; 0047765e
    MOV ESI,dword ptr [EBX]             ; 00477661
    MOV EDX,dword ptr [EBX + 0x4]       ; 00477663
    ADD ESI,EAX                         ; 00477666
    MOV AL,byte ptr [EDX + EAX*0x1]     ; 00477668
    MOV EDX,dword ptr [ESP]             ; 0047766b
    AND AL,byte ptr [EDX + 0x613888]    ; 0047766e | DAT_00613888
    OR byte ptr [ESI],AL                ; 00477674
    ADD ESP,0x30                        ; 00477676
    POP EBP                             ; 00477679
    POP EDI                             ; 0047767a
    POP ESI                             ; 0047767b
    POP EBX                             ; 0047767c
    RET                                 ; 0047767d

