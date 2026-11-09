; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0048f920(CDemonRaytrace *this_ptr,CVector3f *world_position)
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
;   core_dtrace.cpp_FUN_0048f2e0 at 0048f552
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_005dbb4c
;   TerminatedCString s_Parity_Check_999_005dbb5f
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

    PUSH EBX                            ; 0048f920
        ;   Label: core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0048f920
    PUSH ESI                            ; 0048f921
    PUSH EDI                            ; 0048f922
    PUSH EBP                            ; 0048f923
    SUB ESP,0x30                        ; 0048f924
    MOV EBX,dword ptr [ESP + 0x44]      ; 0048f927
    MOV EDX,dword ptr [ESP + 0x48]      ; 0048f92b
    PUSH EDX                            ; 0048f92f
    PUSH EBX                            ; 0048f930
    LEA ESI,[ESP + 0x20]                ; 0048f931
    LEA EDI,[ESP + 0x8]                 ; 0048f935
    CALL core_dtrace.cpp_FUN_0048ee90   ; 0048f939
        ;   XREF to: 0048ee90 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_0048ee90()
    LEA ESI,[ESP + 0x20]                ; 0048f93e
    ADD ESP,0x8                         ; 0048f942
    MOVSD ES:EDI,ESI                    ; 0048f945
    MOVSD ES:EDI,ESI                    ; 0048f946
    MOVSD ES:EDI,ESI                    ; 0048f947
    MOV ECX,dword ptr [ESP]             ; 0048f948
    TEST ECX,ECX                        ; 0048f94b
    JL 0x0048f96e                       ; 0048f94d
        ;   XREF to: 0048f96e (CONDITIONAL_JUMP)  ; LAB_0048f96e
    MOV ESI,dword ptr [ESP + 0x4]       ; 0048f94f
    TEST ESI,ESI                        ; 0048f953
    JL 0x0048f96e                       ; 0048f955
        ;   XREF to: 0048f96e (CONDITIONAL_JUMP)  ; LAB_0048f96e
    MOV EDI,dword ptr [ESP + 0x8]       ; 0048f957
    TEST EDI,EDI                        ; 0048f95b
    JL 0x0048f96e                       ; 0048f95d
        ;   XREF to: 0048f96e (CONDITIONAL_JUMP)  ; LAB_0048f96e
    CMP ECX,dword ptr [EBX + 0x40]      ; 0048f95f
    JGE 0x0048f96e                      ; 0048f962
        ;   XREF to: 0048f96e (CONDITIONAL_JUMP)  ; LAB_0048f96e
    CMP ESI,dword ptr [EBX + 0x44]      ; 0048f964
    JGE 0x0048f96e                      ; 0048f967
        ;   XREF to: 0048f96e (CONDITIONAL_JUMP)  ; LAB_0048f96e
    CMP EDI,dword ptr [EBX + 0x48]      ; 0048f969
    JL 0x0048f976                       ; 0048f96c
        ;   XREF to: 0048f976 (CONDITIONAL_JUMP)  ; LAB_0048f976
    ADD ESP,0x30                        ; 0048f96e
        ;   Label: LAB_0048f96e
    POP EBP                             ; 0048f971
    POP EDI                             ; 0048f972
    POP ESI                             ; 0048f973
    POP EBX                             ; 0048f974
    RET                                 ; 0048f975
    MOV ESI,dword ptr [ESP + 0x48]      ; 0048f976
        ;   Label: LAB_0048f976
    PUSH ESI                            ; 0048f97a
    PUSH EBX                            ; 0048f97b
    LEA ESI,[ESP + 0x2c]                ; 0048f97c
    LEA EDI,[ESP + 0x14]                ; 0048f980
    CALL core_dtrace.cpp_FUN_0048ef40   ; 0048f984
        ;   XREF to: 0048ef40 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_0048ef40()
    LEA ESI,[ESP + 0x2c]                ; 0048f989
    ADD ESP,0x8                         ; 0048f98d
    MOVSD ES:EDI,ESI                    ; 0048f990
    MOVSD ES:EDI,ESI                    ; 0048f991
    MOVSD ES:EDI,ESI                    ; 0048f992
    MOV EAX,dword ptr [ESP + 0xc]       ; 0048f993
    MOV EDX,EAX                         ; 0048f997
    MOV ESI,0x8                         ; 0048f999
    SAR EDX,0x1f                        ; 0048f99e
    IDIV ESI                            ; 0048f9a1
    MOV EAX,dword ptr [ESP + 0x10]      ; 0048f9a3
    MOV dword ptr [ESP + 0xc],EDX       ; 0048f9a7
    MOV EDX,EAX                         ; 0048f9ab
    SAR EDX,0x1f                        ; 0048f9ad
    IDIV ESI                            ; 0048f9b0
    MOV EAX,dword ptr [ESP + 0x14]      ; 0048f9b2
    MOV dword ptr [ESP + 0x10],EDX      ; 0048f9b6
    MOV EDX,EAX                         ; 0048f9ba
    SAR EDX,0x1f                        ; 0048f9bc
    IDIV ESI                            ; 0048f9bf
    MOV EDI,dword ptr [ESP + 0x8]       ; 0048f9c1
    PUSH EDI                            ; 0048f9c5
    MOV EBP,dword ptr [ESP + 0x8]       ; 0048f9c6
    PUSH EBP                            ; 0048f9ca
    MOV EAX,dword ptr [ESP + 0x8]       ; 0048f9cb
    PUSH EAX                            ; 0048f9cf
    PUSH EBX                            ; 0048f9d0
    MOV dword ptr [ESP + 0x24],EDX      ; 0048f9d1
    CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_0048afe0 ; 0048f9d5
        ;   XREF to: 0048afe0 (UNCONDITIONAL_CALL)  ; CDemonCube * core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_0048afe0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z)
    ADD ESP,0x10                        ; 0048f9da
    MOV EBX,EAX                         ; 0048f9dd
    TEST EAX,EAX                        ; 0048f9df
    JNZ 0x0048fa06                      ; 0048f9e1
        ;   XREF to: 0048fa06 (CONDITIONAL_JUMP)  ; LAB_0048fa06
    MOV EDX,0x5dbb4c                    ; 0048f9e3 | = "..\\core\\dtrace.cpp"
    MOV ECX,0xb19                       ; 0048f9e8
    PUSH 0x5dbb5f                       ; 0048f9ed | = "Parity Check 999"
    MOV dword ptr [0x01d1d400],EDX      ; 0048f9f2 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0048f9f8 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0048f9fe
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0048fa03
    CMP dword ptr [EBX],0x0             ; 0048fa06
        ;   Label: LAB_0048fa06
    JNZ 0x0048fa14                      ; 0048fa09
        ;   XREF to: 0048fa14 (CONDITIONAL_JUMP)  ; LAB_0048fa14
    PUSH EBX                            ; 0048fa0b
    CALL core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_00457bc0 ; 0048fa0c
        ;   XREF to: 00457bc0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_00457bc0(CDemonCube * this_ptr)
    ADD ESP,0x4                         ; 0048fa11
    MOV EAX,dword ptr [ESP + 0x14]      ; 0048fa14
        ;   Label: LAB_0048fa14
    MOV EDI,dword ptr [ESP + 0x10]      ; 0048fa18
    SHL EAX,0x3                         ; 0048fa1c
    MOV EBX,dword ptr [EBX]             ; 0048fa1f
    ADD EAX,EDI                         ; 0048fa21
    ADD EAX,EBX                         ; 0048fa23
    MOV EBX,dword ptr [ESP + 0xc]       ; 0048fa25
    MOV DL,byte ptr [EAX]               ; 0048fa29
    MOV BL,byte ptr [EBX + 0x61ab68]    ; 0048fa2b | DAT_0061ab68
    OR DL,BL                            ; 0048fa31
    MOV byte ptr [EAX],DL               ; 0048fa33
    ADD ESP,0x30                        ; 0048fa35
    POP EBP                             ; 0048fa38
    POP EDI                             ; 0048fa39
    POP ESI                             ; 0048fa3a
    POP EBX                             ; 0048fa3b
    RET                                 ; 0048fa3c

