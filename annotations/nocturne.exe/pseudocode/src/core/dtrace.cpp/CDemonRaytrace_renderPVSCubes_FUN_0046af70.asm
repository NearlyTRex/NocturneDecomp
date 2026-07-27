; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_renderPVSCubes_FUN_0046af70(void)
;
;
; XREF[1]:
;   core_dtrace.cpp_FUN_00469ce0 at 0046a620
;
; Referenced Globals:
;   undefined4 DAT_005ae700
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01b7b744
;   undefined4 DAT_01b8efcc
;
; Called Functions:
;   core_dcube.cpp_CDemonCube_rotateVertices_FUN_0044aff0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;   engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_00460f20
;   engine_special.cpp_sync_FUN_00532b30
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0046af70
        ;   Label: core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_0046af70
    PUSH EBP                            ; 0046af71
    PUSH 0xff                           ; 0046af72
    PUSH 0xff                           ; 0046af77
    PUSH 0xff                           ; 0046af7c
    MOV EDX,dword ptr [0x005ae700]      ; 0046af81 | DAT_005ae700
    PUSH EDX                            ; 0046af87 | DAT_01b4d738
    XOR ESI,ESI                         ; 0046af88
    CALL engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_00460f20 ; 0046af8a
        ;   XREF to: 00460f20 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_00460f20()
    MOV ECX,dword ptr [0x01b7b744]      ; 0046af8f | DAT_01b7b744
    ADD ESP,0x10                        ; 0046af95
    TEST ECX,ECX                        ; 0046af98
    JLE 0x0046afde                      ; 0046af9a
        ;   XREF to: 0046afde (CONDITIONAL_JUMP)  ; LAB_0046afde
    PUSH EDI                            ; 0046af9c
    PUSH EBX                            ; 0046af9d
    MOV EBX,0x1b8efcc                   ; 0046af9e
    XOR EDI,EDI                         ; 0046afa3
    PUSH EBX                            ; 0046afa5 | DAT_01b8efcc
        ;   Label: LAB_0046afa5
    MOV EBP,dword ptr [0x005ae700]      ; 0046afa6 | DAT_005ae700
    PUSH EBP                            ; 0046afac | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 0046afad
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00()
    ADD ESP,0x8                         ; 0046afb2
    PUSH 0x0                            ; 0046afb5
    MOV EAX,dword ptr [EDI + 0x1b7b74c] ; 0046afb7
    PUSH EAX                            ; 0046afbd
    CALL core_dcube.cpp_CDemonCube_rotateVertices_FUN_0044aff0 ; 0046afbe
        ;   XREF to: 0044aff0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_CDemonCube_rotateVertices_FUN_0044aff0()
    ADD ESP,0x8                         ; 0046afc3
    ADD EDI,0x4                         ; 0046afc6
    INC ESI                             ; 0046afc9
    CALL engine_special.cpp_sync_FUN_00532b30 ; 0046afca
        ;   XREF to: 00532b30 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_sync_FUN_00532b30()
    MOV EDX,dword ptr [0x01b7b744]      ; 0046afcf | DAT_01b7b744
    ADD EBX,0xc                         ; 0046afd5
    CMP ESI,EDX                         ; 0046afd8
    JL 0x0046afa5                       ; 0046afda
        ;   XREF to: 0046afa5 (CONDITIONAL_JUMP)  ; LAB_0046afa5
    POP EBX                             ; 0046afdc
    POP EDI                             ; 0046afdd
    POP EBP                             ; 0046afde
        ;   Label: LAB_0046afde
    POP ESI                             ; 0046afdf
    RET                                 ; 0046afe0

