; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_transferVoxelShadow_FUN_00511aa0(CDemonSet *this_ptr,CDemonActor *actor)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
;
; XREF[1]:
;   core_door.cpp_CDoor_process_FUN_00455640 at 004556e4
;
; Referenced Globals:
;   CDemonRaytrace g_CDemonRaytrace_01fba938
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_transferShadowVoxels_FUN_0046bd90
;   core_path.cpp_resetAllPathMaps_FUN_004f1e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00511aa0
        ;   Label: core_setcolid.cpp_CDemonSet_transferVoxelShadow_FUN_00511aa0
    SUB ESP,0x30                        ; 00511aa1
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00511aa4
    MOV EDX,ESP                         ; 00511aa8
    PUSH EDX                            ; 00511aaa
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00511aab
    PUSH EBX                            ; 00511ab1
    CALL dword ptr [EAX + 0x14]         ; 00511ab2
    MOV EDX,EAX                         ; 00511ab5
    MOV ECX,EAX                         ; 00511ab7
    LEA EAX,[ESP + 0x20]                ; 00511ab9
    ADD ESP,0x8                         ; 00511abd
    CMP EAX,EDX                         ; 00511ac0
    JNZ 0x00511b0c                      ; 00511ac2
        ;   XREF to: 00511b0c (CONDITIONAL_JUMP)  ; LAB_00511b0c
    LEA EAX,[ESP + 0x24]                ; 00511ac4
        ;   Label: LAB_00511ac4
    LEA EDX,[ECX + 0xc]                 ; 00511ac8
    CMP EAX,EDX                         ; 00511acb
    JZ 0x00511ae3                       ; 00511acd
        ;   XREF to: 00511ae3 (CONDITIONAL_JUMP)  ; LAB_00511ae3
    MOV EAX,dword ptr [EDX]             ; 00511acf
    MOV dword ptr [ESP + 0x24],EAX      ; 00511ad1
    MOV EAX,dword ptr [EDX + 0x4]       ; 00511ad5
    MOV dword ptr [ESP + 0x28],EAX      ; 00511ad8
    MOV EAX,dword ptr [EDX + 0x8]       ; 00511adc
    MOV dword ptr [ESP + 0x2c],EAX      ; 00511adf
    LEA EAX,[ESP + 0x24]                ; 00511ae3
        ;   Label: LAB_00511ae3
    PUSH EAX                            ; 00511ae7
    LEA EAX,[ESP + 0x1c]                ; 00511ae8
    PUSH EAX                            ; 00511aec
    LEA EAX,[EBX + 0x30]                ; 00511aed
    PUSH EAX                            ; 00511af0
    ADD EBX,0x20                        ; 00511af1
    PUSH EBX                            ; 00511af4
    PUSH 0x1fba938                      ; 00511af5 | g_CDemonRaytrace_01fba938
    CALL core_dtrace.cpp_CDemonRaytrace_transferShadowVoxels_FUN_0046bd90 ; 00511afa
        ;   XREF to: 0046bd90 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_transferShadowVoxels_FUN_0046bd90(CDemonRaytrace * this_ptr, CVector3f * offset, CVector3f * rotation, CVector3f * start, ...)
    ADD ESP,0x14                        ; 00511aff
    CALL core_path.cpp_resetAllPathMaps_FUN_004f1e90 ; 00511b02
        ;   XREF to: 004f1e90 (UNCONDITIONAL_CALL)  ; void core_path.cpp_resetAllPathMaps_FUN_004f1e90()
    ADD ESP,0x30                        ; 00511b07
    POP EBX                             ; 00511b0a
    RET                                 ; 00511b0b
    MOV EAX,dword ptr [EDX]             ; 00511b0c
        ;   Label: LAB_00511b0c
    MOV dword ptr [ESP + 0x18],EAX      ; 00511b0e
    MOV EAX,dword ptr [EDX + 0x4]       ; 00511b12
    MOV dword ptr [ESP + 0x1c],EAX      ; 00511b15
    MOV EAX,dword ptr [EDX + 0x8]       ; 00511b19
    MOV dword ptr [ESP + 0x20],EAX      ; 00511b1c
    JMP 0x00511ac4                      ; 00511b20
        ;   XREF to: 00511ac4 (UNCONDITIONAL_JUMP)  ; LAB_00511ac4

