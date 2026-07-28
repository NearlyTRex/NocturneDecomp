; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcube_cpp_CDemonCubeTriangle_init_FUN_00449120(void)
;
;
; Called Functions:
;   core_dcube.cpp_CDemonCubeTriangle_calculateNormalAndPlane_FUN_00448fb0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00449120
        ;   Label: core_dcube.cpp_CDemonCubeTriangle_init_FUN_00449120
    MOV EDX,dword ptr [ESP + 0x8]       ; 00449124
    MOV dword ptr [EAX],EDX             ; 00449128
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044912a
    MOV dword ptr [EAX + 0x4],EDX       ; 0044912e
    MOV EDX,dword ptr [ESP + 0x10]      ; 00449131
    PUSH EAX                            ; 00449135
    MOV dword ptr [EAX + 0x8],EDX       ; 00449136
    CALL core_dcube.cpp_CDemonCubeTriangle_calculateNormalAndPlane_FUN_00448fb0 ; 00449139
        ;   XREF to: 00448fb0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_CDemonCubeTriangle_calculateNormalAndPlane_FUN_00448fb0(CDemonCubeTriangle * this_ptr)
    ADD ESP,0x4                         ; 0044913e
    RET                                 ; 00449141

