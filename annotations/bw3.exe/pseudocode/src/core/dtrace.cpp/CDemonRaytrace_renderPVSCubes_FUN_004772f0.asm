; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_renderPVSCubes_FUN_004772f0(CDemonRaytrace *this_ptr)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00476070 at 004769a2
;
; Referenced Globals:
;   undefined4 DAT_005f2af8
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01c0b7b4
;   undefined4 DAT_01c1f03c
;
; Called Functions:
;   core_dcube.cpp_CDemonCube_rotateVertices_FUN_004540c0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0046d3d0
;   engine_special.cpp_sync_FUN_005661f0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004772f0
        ;   Label: core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_004772f0
    PUSH EBP                            ; 004772f1
    PUSH 0xff                           ; 004772f2
    PUSH 0xff                           ; 004772f7
    PUSH 0xff                           ; 004772fc
    MOV EDX,dword ptr [0x005f2af8]      ; 00477301 | DAT_005f2af8
    PUSH EDX                            ; 00477307 | DAT_01bdd7e4
    XOR ESI,ESI                         ; 00477308
    CALL engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0046d3d0 ; 0047730a
        ;   XREF to: 0046d3d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0046d3d0(CDemonRenderer * this_ptr, int red_component, int green_component, int blue_component)
    MOV ECX,dword ptr [0x01c0b7b4]      ; 0047730f | DAT_01c0b7b4
    ADD ESP,0x10                        ; 00477315
    TEST ECX,ECX                        ; 00477318
    JLE 0x0047735e                      ; 0047731a
        ;   XREF to: 0047735e (CONDITIONAL_JUMP)  ; LAB_0047735e
    PUSH EDI                            ; 0047731c
    PUSH EBX                            ; 0047731d
    MOV EBX,0x1c1f03c                   ; 0047731e
    XOR EDI,EDI                         ; 00477323
    PUSH EBX                            ; 00477325 | DAT_01c1f03c
        ;   Label: LAB_00477325
    MOV EBP,dword ptr [0x005f2af8]      ; 00477326 | DAT_005f2af8
    PUSH EBP                            ; 0047732c | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 0047732d
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00477332
    PUSH 0x0                            ; 00477335
    MOV EAX,dword ptr [EDI + 0x1c0b7bc] ; 00477337
    PUSH EAX                            ; 0047733d
    CALL core_dcube.cpp_CDemonCube_rotateVertices_FUN_004540c0 ; 0047733e
        ;   XREF to: 004540c0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_CDemonCube_rotateVertices_FUN_004540c0(CDemonCube * this_ptr, uint rendering_mode)
    ADD ESP,0x8                         ; 00477343
    ADD EDI,0x4                         ; 00477346
    INC ESI                             ; 00477349
    CALL engine_special.cpp_sync_FUN_005661f0 ; 0047734a
        ;   XREF to: 005661f0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_sync_FUN_005661f0()
    MOV EDX,dword ptr [0x01c0b7b4]      ; 0047734f | DAT_01c0b7b4
    ADD EBX,0xc                         ; 00477355
    CMP ESI,EDX                         ; 00477358
    JL 0x00477325                       ; 0047735a
        ;   XREF to: 00477325 (CONDITIONAL_JUMP)  ; LAB_00477325
    POP EBX                             ; 0047735c
    POP EDI                             ; 0047735d
    POP EBP                             ; 0047735e
        ;   Label: LAB_0047735e
    POP ESI                             ; 0047735f
    RET                                 ; 00477360

