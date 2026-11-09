; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_setVoxelShadowBit_FUN_004784a0(CDemonRaytrace *this_ptr,CVector3f *world_position)
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
;   core_dtrace.cpp_FUN_00477e60 at 004780d2
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_005bcc09
;   TerminatedCString s_Parity_Check_999_005bcc1c
;   undefined4 DAT_005fb0e8
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_00453d10
;   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_00473b60
;   core_dtrace.cpp_FUN_00477a10
;   core_dtrace.cpp_FUN_00477ac0
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004784a0
        ;   Label: core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_004784a0
    PUSH ESI                            ; 004784a1
    PUSH EDI                            ; 004784a2
    PUSH EBP                            ; 004784a3
    SUB ESP,0x30                        ; 004784a4
    MOV EBX,dword ptr [ESP + 0x44]      ; 004784a7
    MOV EDX,dword ptr [ESP + 0x48]      ; 004784ab
    PUSH EDX                            ; 004784af
    PUSH EBX                            ; 004784b0
    LEA ESI,[ESP + 0x20]                ; 004784b1
    LEA EDI,[ESP + 0x8]                 ; 004784b5
    CALL core_dtrace.cpp_FUN_00477a10   ; 004784b9
        ;   XREF to: 00477a10 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_00477a10()
    LEA ESI,[ESP + 0x20]                ; 004784be
    ADD ESP,0x8                         ; 004784c2
    MOVSD ES:EDI,ESI                    ; 004784c5
    MOVSD ES:EDI,ESI                    ; 004784c6
    MOVSD ES:EDI,ESI                    ; 004784c7
    MOV ECX,dword ptr [ESP]             ; 004784c8
    TEST ECX,ECX                        ; 004784cb
    JL 0x004784ee                       ; 004784cd
        ;   XREF to: 004784ee (CONDITIONAL_JUMP)  ; LAB_004784ee
    MOV ESI,dword ptr [ESP + 0x4]       ; 004784cf
    TEST ESI,ESI                        ; 004784d3
    JL 0x004784ee                       ; 004784d5
        ;   XREF to: 004784ee (CONDITIONAL_JUMP)  ; LAB_004784ee
    MOV EDI,dword ptr [ESP + 0x8]       ; 004784d7
    TEST EDI,EDI                        ; 004784db
    JL 0x004784ee                       ; 004784dd
        ;   XREF to: 004784ee (CONDITIONAL_JUMP)  ; LAB_004784ee
    CMP ECX,dword ptr [EBX + 0x40]      ; 004784df
    JGE 0x004784ee                      ; 004784e2
        ;   XREF to: 004784ee (CONDITIONAL_JUMP)  ; LAB_004784ee
    CMP ESI,dword ptr [EBX + 0x44]      ; 004784e4
    JGE 0x004784ee                      ; 004784e7
        ;   XREF to: 004784ee (CONDITIONAL_JUMP)  ; LAB_004784ee
    CMP EDI,dword ptr [EBX + 0x48]      ; 004784e9
    JL 0x004784f6                       ; 004784ec
        ;   XREF to: 004784f6 (CONDITIONAL_JUMP)  ; LAB_004784f6
    ADD ESP,0x30                        ; 004784ee
        ;   Label: LAB_004784ee
    POP EBP                             ; 004784f1
    POP EDI                             ; 004784f2
    POP ESI                             ; 004784f3
    POP EBX                             ; 004784f4
    RET                                 ; 004784f5
    MOV ESI,dword ptr [ESP + 0x48]      ; 004784f6
        ;   Label: LAB_004784f6
    PUSH ESI                            ; 004784fa
    PUSH EBX                            ; 004784fb
    LEA ESI,[ESP + 0x2c]                ; 004784fc
    LEA EDI,[ESP + 0x14]                ; 00478500
    CALL core_dtrace.cpp_FUN_00477ac0   ; 00478504
        ;   XREF to: 00477ac0 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_00477ac0()
    LEA ESI,[ESP + 0x2c]                ; 00478509
    ADD ESP,0x8                         ; 0047850d
    MOVSD ES:EDI,ESI                    ; 00478510
    MOVSD ES:EDI,ESI                    ; 00478511
    MOVSD ES:EDI,ESI                    ; 00478512
    MOV EAX,dword ptr [ESP + 0xc]       ; 00478513
    MOV EDX,EAX                         ; 00478517
    MOV ESI,0x8                         ; 00478519
    SAR EDX,0x1f                        ; 0047851e
    IDIV ESI                            ; 00478521
    MOV EAX,dword ptr [ESP + 0x10]      ; 00478523
    MOV dword ptr [ESP + 0xc],EDX       ; 00478527
    MOV EDX,EAX                         ; 0047852b
    SAR EDX,0x1f                        ; 0047852d
    IDIV ESI                            ; 00478530
    MOV EAX,dword ptr [ESP + 0x14]      ; 00478532
    MOV dword ptr [ESP + 0x10],EDX      ; 00478536
    MOV EDX,EAX                         ; 0047853a
    SAR EDX,0x1f                        ; 0047853c
    IDIV ESI                            ; 0047853f
    MOV EDI,dword ptr [ESP + 0x8]       ; 00478541
    PUSH EDI                            ; 00478545
    MOV EBP,dword ptr [ESP + 0x8]       ; 00478546
    PUSH EBP                            ; 0047854a
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047854b
    PUSH EAX                            ; 0047854f
    PUSH EBX                            ; 00478550
    MOV dword ptr [ESP + 0x24],EDX      ; 00478551
    CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_00473b60 ; 00478555
        ;   XREF to: 00473b60 (UNCONDITIONAL_CALL)  ; CDemonCube * core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_00473b60(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z)
    ADD ESP,0x10                        ; 0047855a
    MOV EBX,EAX                         ; 0047855d
    TEST EAX,EAX                        ; 0047855f
    JNZ 0x00478586                      ; 00478561
        ;   XREF to: 00478586 (CONDITIONAL_JUMP)  ; LAB_00478586
    MOV EDX,0x5bcc09                    ; 00478563 | = "..\\core\\dtrace.cpp"
    MOV ECX,0xb19                       ; 00478568
    PUSH 0x5bcc1c                       ; 0047856d | = "Parity Check 999"
    MOV dword ptr [0x01d71de0],EDX      ; 00478572 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00478578 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0047857e
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00478583
    CMP dword ptr [EBX],0x0             ; 00478586
        ;   Label: LAB_00478586
    JNZ 0x00478594                      ; 00478589
        ;   XREF to: 00478594 (CONDITIONAL_JUMP)  ; LAB_00478594
    PUSH EBX                            ; 0047858b
    CALL core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_00453d10 ; 0047858c
        ;   XREF to: 00453d10 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_00453d10(CDemonCube * this_ptr)
    ADD ESP,0x4                         ; 00478591
    MOV EAX,dword ptr [ESP + 0x14]      ; 00478594
        ;   Label: LAB_00478594
    MOV EDI,dword ptr [ESP + 0x10]      ; 00478598
    SHL EAX,0x3                         ; 0047859c
    MOV EBX,dword ptr [EBX]             ; 0047859f
    ADD EAX,EDI                         ; 004785a1
    ADD EAX,EBX                         ; 004785a3
    MOV EBX,dword ptr [ESP + 0xc]       ; 004785a5
    MOV DL,byte ptr [EAX]               ; 004785a9
    MOV BL,byte ptr [EBX + 0x5fb0e8]    ; 004785ab | DAT_005fb0e8
    OR DL,BL                            ; 004785b1
    MOV byte ptr [EAX],DL               ; 004785b3
    ADD ESP,0x30                        ; 004785b5
    POP EBP                             ; 004785b8
    POP EDI                             ; 004785b9
    POP ESI                             ; 004785ba
    POP EBX                             ; 004785bb
    RET                                 ; 004785bc

