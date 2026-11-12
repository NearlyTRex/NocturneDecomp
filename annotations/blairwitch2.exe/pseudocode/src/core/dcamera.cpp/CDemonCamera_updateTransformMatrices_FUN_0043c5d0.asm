; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_0043c5d0(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x18]:1  local_18
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0043b7f0 at 0043ba33
;   core_dlight.cpp_CDemonLight_beginScene_FUN_0044a020 at 0044a181
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01c35e38
;   undefined4 DAT_01c35e3c
;   undefined4 DAT_01c35e40
;   undefined4 DAT_01c35e44
;   undefined4 DAT_01c38b9c
;   undefined4 DAT_01c38ba0
;   undefined4 DAT_01c38ba4
;   undefined4 DAT_01c38ba8
;   undefined4 DAT_01c38bac
;   undefined4 DAT_01c38bb0
;   undefined4 DAT_01c38bb4
;   undefined4 DAT_01c38bb8
;   undefined4 DAT_01c38bbc
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_calculateInverseTransform_FUN_0043c330
;   engine_drender.cpp_CDemonRenderer_getCameraOriginFixed_FUN_0046b5c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043c5d0
        ;   Label: core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0043c5d0
    PUSH ESI                            ; 0043c5d1
    PUSH EDI                            ; 0043c5d2
    SUB ESP,0xc                         ; 0043c5d3
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0043c5d6
    MOV ESI,dword ptr [0x01c38b9c]      ; 0043c5da | DAT_01c38b9c
    MOV dword ptr [EBX + 0x178],ESI     ; 0043c5e0
    MOV ESI,dword ptr [0x01c38ba0]      ; 0043c5e6 | DAT_01c38ba0
    MOV dword ptr [EBX + 0x17c],ESI     ; 0043c5ec
    MOV ESI,dword ptr [0x01c38ba4]      ; 0043c5f2 | DAT_01c38ba4
    MOV dword ptr [EBX + 0x180],ESI     ; 0043c5f8
    MOV ESI,dword ptr [0x01c38ba8]      ; 0043c5fe | DAT_01c38ba8
    MOV dword ptr [EBX + 0x184],ESI     ; 0043c604
    MOV ESI,dword ptr [0x01c38bac]      ; 0043c60a | DAT_01c38bac
    MOV dword ptr [EBX + 0x188],ESI     ; 0043c610
    MOV ESI,dword ptr [0x01c38bb0]      ; 0043c616 | DAT_01c38bb0
    MOV dword ptr [EBX + 0x18c],ESI     ; 0043c61c
    MOV ESI,dword ptr [0x01c38bb4]      ; 0043c622 | DAT_01c38bb4
    MOV dword ptr [EBX + 0x190],ESI     ; 0043c628
    MOV ESI,dword ptr [0x01c38bb8]      ; 0043c62e | DAT_01c38bb8
    MOV EDX,dword ptr [0x0060b280]      ; 0043c634 | DAT_0060b280
    MOV dword ptr [EBX + 0x194],ESI     ; 0043c63a
    MOV ESI,dword ptr [0x01c38bbc]      ; 0043c640 | DAT_01c38bbc
    PUSH EDX                            ; 0043c646 | DAT_01ba5c50
    MOV dword ptr [EBX + 0x198],ESI     ; 0043c647
    LEA ESI,[ESP + 0x4]                 ; 0043c64d
    CALL engine_drender.cpp_CDemonRenderer_getCameraOriginFixed_FUN_0046b5c0 ; 0043c651
        ;   XREF to: 0046b5c0 (UNCONDITIONAL_CALL)  ; CVector3i * engine_drender.cpp_CDemonRenderer_getCameraOriginFixed_FUN_0046b5c0(CDemonRenderer * this_ptr, CVector3i * output)
    LEA ESI,[ESP + 0x4]                 ; 0043c656
    LEA EDI,[EBX + 0x16c]               ; 0043c65a
    ADD ESP,0x4                         ; 0043c660
    MOVSD ES:EDI,ESI                    ; 0043c663
    MOVSD ES:EDI,ESI                    ; 0043c664
    MOVSD ES:EDI,ESI                    ; 0043c665
    MOV ESI,dword ptr [0x01c35e38]      ; 0043c666 | DAT_01c35e38
    MOV dword ptr [EBX + 0x1c0],ESI     ; 0043c66c
    MOV ESI,dword ptr [0x01c35e3c]      ; 0043c672 | DAT_01c35e3c
    MOV dword ptr [EBX + 0x1c4],ESI     ; 0043c678
    MOV ESI,dword ptr [0x01c35e40]      ; 0043c67e | DAT_01c35e40
    MOV dword ptr [EBX + 0x1c8],ESI     ; 0043c684
    MOV ESI,dword ptr [0x01c35e44]      ; 0043c68a | DAT_01c35e44
    PUSH EBX                            ; 0043c690
    MOV dword ptr [EBX + 0x1cc],ESI     ; 0043c691
    CALL core_dcamera.cpp_CDemonCamera_calculateInverseTransform_FUN_0043c330 ; 0043c697
        ;   XREF to: 0043c330 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_calculateInverseTransform_FUN_0043c330(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0043c69c
    ADD ESP,0xc                         ; 0043c69f
    POP EDI                             ; 0043c6a2
    POP ESI                             ; 0043c6a3
    POP EBX                             ; 0043c6a4
    RET                                 ; 0043c6a5

