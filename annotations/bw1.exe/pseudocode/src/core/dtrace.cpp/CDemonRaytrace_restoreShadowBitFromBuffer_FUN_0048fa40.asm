; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_restoreShadowBitFromBuffer_FUN_0048fa40(CDemonRaytrace *this_ptr,CVector3f *world_position)
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
;   core_dtrace.cpp_CDemonRaytrace_transferShadowVoxels_FUN_0048f650 at 0048f8c2
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_005dbb70
;   TerminatedCString s_Parity_Check_999_005dbb83
;   undefined4 DAT_0061ab68
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_00457bc0
;   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_0048afe0
;   core_dtrace.cpp_FUN_0048ee90
;   core_dtrace.cpp_FUN_0048ef40
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048fa40
        ;   Label: core_dtrace.cpp_CDemonRaytrace_restoreShadowBitFromBuffer_FUN_0048fa40
    PUSH ESI                            ; 0048fa41
    PUSH EDI                            ; 0048fa42
    PUSH EBP                            ; 0048fa43
    SUB ESP,0x30                        ; 0048fa44
    MOV EBX,dword ptr [ESP + 0x44]      ; 0048fa47
    MOV EDX,dword ptr [ESP + 0x48]      ; 0048fa4b
    PUSH EDX                            ; 0048fa4f
    PUSH EBX                            ; 0048fa50
    LEA ESI,[ESP + 0x20]                ; 0048fa51
    LEA EDI,[ESP + 0x14]                ; 0048fa55
    CALL core_dtrace.cpp_FUN_0048ee90   ; 0048fa59
        ;   XREF to: 0048ee90 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_0048ee90()
    LEA ESI,[ESP + 0x20]                ; 0048fa5e
    ADD ESP,0x8                         ; 0048fa62
    MOVSD ES:EDI,ESI                    ; 0048fa65
    MOVSD ES:EDI,ESI                    ; 0048fa66
    MOVSD ES:EDI,ESI                    ; 0048fa67
    MOV ECX,dword ptr [ESP + 0xc]       ; 0048fa68
    TEST ECX,ECX                        ; 0048fa6c
    JL 0x0048fa8f                       ; 0048fa6e
        ;   XREF to: 0048fa8f (CONDITIONAL_JUMP)  ; LAB_0048fa8f
    MOV ESI,dword ptr [ESP + 0x10]      ; 0048fa70
    TEST ESI,ESI                        ; 0048fa74
    JL 0x0048fa8f                       ; 0048fa76
        ;   XREF to: 0048fa8f (CONDITIONAL_JUMP)  ; LAB_0048fa8f
    MOV EDI,dword ptr [ESP + 0x14]      ; 0048fa78
    TEST EDI,EDI                        ; 0048fa7c
    JL 0x0048fa8f                       ; 0048fa7e
        ;   XREF to: 0048fa8f (CONDITIONAL_JUMP)  ; LAB_0048fa8f
    CMP ECX,dword ptr [EBX + 0x40]      ; 0048fa80
    JGE 0x0048fa8f                      ; 0048fa83
        ;   XREF to: 0048fa8f (CONDITIONAL_JUMP)  ; LAB_0048fa8f
    CMP ESI,dword ptr [EBX + 0x44]      ; 0048fa85
    JGE 0x0048fa8f                      ; 0048fa88
        ;   XREF to: 0048fa8f (CONDITIONAL_JUMP)  ; LAB_0048fa8f
    CMP EDI,dword ptr [EBX + 0x48]      ; 0048fa8a
    JL 0x0048fa97                       ; 0048fa8d
        ;   XREF to: 0048fa97 (CONDITIONAL_JUMP)  ; LAB_0048fa97
    ADD ESP,0x30                        ; 0048fa8f
        ;   Label: LAB_0048fa8f
    POP EBP                             ; 0048fa92
    POP EDI                             ; 0048fa93
    POP ESI                             ; 0048fa94
    POP EBX                             ; 0048fa95
    RET                                 ; 0048fa96
    MOV ESI,dword ptr [ESP + 0x48]      ; 0048fa97
        ;   Label: LAB_0048fa97
    PUSH ESI                            ; 0048fa9b
    PUSH EBX                            ; 0048fa9c
    LEA ESI,[ESP + 0x2c]                ; 0048fa9d
    LEA EDI,[ESP + 0x8]                 ; 0048faa1
    CALL core_dtrace.cpp_FUN_0048ef40   ; 0048faa5
        ;   XREF to: 0048ef40 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_0048ef40()
    LEA ESI,[ESP + 0x2c]                ; 0048faaa
    ADD ESP,0x8                         ; 0048faae
    MOVSD ES:EDI,ESI                    ; 0048fab1
    MOVSD ES:EDI,ESI                    ; 0048fab2
    MOVSD ES:EDI,ESI                    ; 0048fab3
    MOV EAX,dword ptr [ESP]             ; 0048fab4
    MOV EDX,EAX                         ; 0048fab7
    MOV ESI,0x8                         ; 0048fab9
    SAR EDX,0x1f                        ; 0048fabe
    IDIV ESI                            ; 0048fac1
    MOV EAX,dword ptr [ESP + 0x4]       ; 0048fac3
    MOV dword ptr [ESP],EDX             ; 0048fac7
    MOV EDX,EAX                         ; 0048faca
    SAR EDX,0x1f                        ; 0048facc
    IDIV ESI                            ; 0048facf
    MOV EAX,dword ptr [ESP + 0x8]       ; 0048fad1
    MOV dword ptr [ESP + 0x4],EDX       ; 0048fad5
    MOV EDX,EAX                         ; 0048fad9
    SAR EDX,0x1f                        ; 0048fadb
    IDIV ESI                            ; 0048fade
    MOV EDI,dword ptr [ESP + 0x14]      ; 0048fae0
    PUSH EDI                            ; 0048fae4
    MOV EBP,dword ptr [ESP + 0x14]      ; 0048fae5
    PUSH EBP                            ; 0048fae9
    MOV EAX,dword ptr [ESP + 0x14]      ; 0048faea
    PUSH EAX                            ; 0048faee
    PUSH EBX                            ; 0048faef
    MOV dword ptr [ESP + 0x18],EDX      ; 0048faf0
    CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_0048afe0 ; 0048faf4
        ;   XREF to: 0048afe0 (UNCONDITIONAL_CALL)  ; CDemonCube * core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_0048afe0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z)
    ADD ESP,0x10                        ; 0048faf9
    MOV EBX,EAX                         ; 0048fafc
    TEST EAX,EAX                        ; 0048fafe
    JNZ 0x0048fb25                      ; 0048fb00
        ;   XREF to: 0048fb25 (CONDITIONAL_JUMP)  ; LAB_0048fb25
    MOV EDX,0x5dbb70                    ; 0048fb02 | = "..\\core\\dtrace.cpp"
    MOV ECX,0xb55                       ; 0048fb07
    PUSH 0x5dbb83                       ; 0048fb0c | = "Parity Check 999"
    MOV dword ptr [0x01d1d400],EDX      ; 0048fb11 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0048fb17 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0048fb1d
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0048fb22
    CMP dword ptr [EBX],0x0             ; 0048fb25
        ;   Label: LAB_0048fb25
    JNZ 0x0048fb33                      ; 0048fb28
        ;   XREF to: 0048fb33 (CONDITIONAL_JUMP)  ; LAB_0048fb33
    PUSH EBX                            ; 0048fb2a
    CALL core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_00457bc0 ; 0048fb2b
        ;   XREF to: 00457bc0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_00457bc0(CDemonCube * this_ptr)
    ADD ESP,0x4                         ; 0048fb30
    MOV EAX,dword ptr [ESP + 0x8]       ; 0048fb33
        ;   Label: LAB_0048fb33
    MOV EDI,dword ptr [ESP + 0x4]       ; 0048fb37
    MOV EDX,dword ptr [ESP]             ; 0048fb3b
    MOV ESI,dword ptr [EBX]             ; 0048fb3e
    SHL EAX,0x3                         ; 0048fb40
    MOV DL,byte ptr [EDX + 0x61ab68]    ; 0048fb43 | DAT_0061ab68
    ADD EAX,EDI                         ; 0048fb49
    XOR DL,0xff                         ; 0048fb4b
    AND byte ptr [ESI + EAX*0x1],DL     ; 0048fb4e
    MOV ESI,dword ptr [EBX]             ; 0048fb51
    MOV EDX,dword ptr [EBX + 0x4]       ; 0048fb53
    ADD ESI,EAX                         ; 0048fb56
    MOV AL,byte ptr [EDX + EAX*0x1]     ; 0048fb58
    MOV EDX,dword ptr [ESP]             ; 0048fb5b
    AND AL,byte ptr [EDX + 0x61ab68]    ; 0048fb5e | DAT_0061ab68
    OR byte ptr [ESI],AL                ; 0048fb64
    ADD ESP,0x30                        ; 0048fb66
    POP EBP                             ; 0048fb69
    POP EDI                             ; 0048fb6a
    POP ESI                             ; 0048fb6b
    POP EBX                             ; 0048fb6c
    RET                                 ; 0048fb6d

