; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_spotview_cpp_FUN_005847e0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00612560
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
;   core_dirmat.cpp_FUN_0045f690
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0
;   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00483530
;   engine_matrix.c_FUN_004839b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005847e0
        ;   Label: shape_spotview.cpp_FUN_005847e0
    PUSH ESI                            ; 005847e1
    PUSH EDI                            ; 005847e2
    SUB ESP,0x7c                        ; 005847e3
    MOV EBX,dword ptr [ESP + 0x8c]      ; 005847e6
    MOV EDX,dword ptr [0x00612560]      ; 005847ed | DAT_00612560
    PUSH 0x41e00000                     ; 005847f3
    PUSH EDX                            ; 005847f8
    CALL engine_matrix.c_FUN_004839b0   ; 005847f9
        ;   XREF to: 004839b0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_004839b0()
    ADD ESP,0x8                         ; 005847fe
    MOV EAX,dword ptr [EBX + 0x24]      ; 00584801
    XOR ECX,ECX                         ; 00584804
    MOV dword ptr [ESP + 0x34],EAX      ; 00584806
    MOV dword ptr [ESP + 0x3c],ECX      ; 0058480a
    MOV EAX,dword ptr [EBX + 0x28]      ; 0058480e
    MOV dword ptr [ESP + 0x38],EAX      ; 00584811
    LEA EAX,[ESP + 0x34]                ; 00584815
    PUSH EAX                            ; 00584819
    LEA EAX,[ESP + 0x4]                 ; 0058481a
    PUSH EAX                            ; 0058481e
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0 ; 0058481f
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00584824
    MOV EAX,dword ptr [EBX + 0x30]      ; 00584827
    MOV dword ptr [ESP + 0x74],EAX      ; 0058482a
    MOV EAX,dword ptr [EBX + 0x34]      ; 0058482e
    FLD float ptr [EBX + 0x2c]          ; 00584831
    MOV dword ptr [ESP + 0x78],EAX      ; 00584834
    MOV EAX,dword ptr [ESP + 0x74]      ; 00584838
    FCHS                                ; 0058483c
    MOV dword ptr [ESP + 0x40],EAX      ; 0058483e
    MOV EAX,dword ptr [ESP + 0x78]      ; 00584842
    FSTP float ptr [ESP + 0x70]         ; 00584846
    MOV dword ptr [ESP + 0x44],EAX      ; 0058484a
    MOV EAX,dword ptr [ESP + 0x70]      ; 0058484e
    MOV dword ptr [ESP + 0x48],EAX      ; 00584852
    LEA EAX,[ESP + 0x40]                ; 00584856
    PUSH EAX                            ; 0058485a
    LEA EAX,[ESP + 0x4]                 ; 0058485b
    PUSH EAX                            ; 0058485f
    LEA ESI,[ESP + 0x60]                ; 00584860
    LEA EDI,[ESP + 0x54]                ; 00584864
    CALL core_dirmat.cpp_FUN_0045f690   ; 00584868
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA ESI,[ESP + 0x60]                ; 0058486d
    ADD ESP,0x8                         ; 00584871
    LEA EAX,[ESP + 0x28]                ; 00584874
    MOVSD ES:EDI,ESI                    ; 00584878
    MOVSD ES:EDI,ESI                    ; 00584879
    MOVSD ES:EDI,ESI                    ; 0058487a
    PUSH EAX                            ; 0058487b
    FLD float ptr [EBX + 0x1c]          ; 0058487c
    FLD float ptr [EBX + 0x20]          ; 0058487f
    FLD float ptr [EBX + 0x18]          ; 00584882
    LEA EDI,[ESP + 0x2c]                ; 00584885
    LEA ESI,[ESP + 0x68]                ; 00584889
    MOV EBX,dword ptr [0x00612560]      ; 0058488d | DAT_00612560
    FADD float ptr [ESP + 0x50]         ; 00584893
    FXCH ST2                            ; 00584897
    FADD float ptr [ESP + 0x54]         ; 00584899
    FXCH                                ; 0058489d
    FADD float ptr [ESP + 0x58]         ; 0058489f
    FXCH ST2                            ; 005848a3
    FSTP float ptr [ESP + 0x68]         ; 005848a5
    FSTP float ptr [ESP + 0x6c]         ; 005848a9
    FSTP float ptr [ESP + 0x70]         ; 005848ad
    PUSH EBX                            ; 005848b1
    MOVSD ES:EDI,ESI                    ; 005848b2
    MOVSD ES:EDI,ESI                    ; 005848b3
    MOVSD ES:EDI,ESI                    ; 005848b4
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0 ; 005848b5
        ;   XREF to: 004834b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 005848ba
    LEA EAX,[ESP + 0x34]                ; 005848bd
    PUSH EAX                            ; 005848c1
    MOV ESI,dword ptr [0x00612560]      ; 005848c2 | DAT_00612560
    PUSH ESI                            ; 005848c8
    CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00483530 ; 005848c9
        ;   XREF to: 00483530 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00483530(CDemonRenderer * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 005848ce
    ADD ESP,0x7c                        ; 005848d1
    POP EDI                             ; 005848d4
    POP ESI                             ; 005848d5
    POP EBX                             ; 005848d6
    RET                                 ; 005848d7

