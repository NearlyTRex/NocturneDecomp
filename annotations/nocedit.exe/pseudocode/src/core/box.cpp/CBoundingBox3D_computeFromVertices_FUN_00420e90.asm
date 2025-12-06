; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_box.cpp_CBoundingBox3D_computeFromVertices_FUN_00420e90(CBoundingBox3D * this_ptr, int vertex_count, CVector3i * vertices)
;
; Parameters:
; CBoundingBox3D * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   vertex_count
; CVector3i *      Stack[0xc]:4   vertices
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_morph.cpp_FUN_0052bcb0 at 0052bed4
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 00597e01
;
; Referenced Globals:
;   double g_BoundingBoxFixedPointScaleFactor = 0.00390625
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00420e90
        ;   Label: core_box.cpp_CBoundingBox3D_computeFromVertices_FUN_00420e90
    PUSH ESI                            ; 00420e91
    PUSH EDI                            ; 00420e92
    PUSH EBP                            ; 00420e93
    MOV EBP,ESP                         ; 00420e94
    SUB ESP,0x18                        ; 00420e96
    AND ESP,0xfffffff8                  ; 00420e99
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00420e9c
    MOV EBX,0x1                         ; 00420e9f
    MOV ESI,dword ptr [EAX]             ; 00420ea4
    MOV ECX,dword ptr [EAX + 0x4]       ; 00420ea6
    MOV EDX,dword ptr [EAX + 0x8]       ; 00420ea9
    MOV dword ptr [ESP],ESI             ; 00420eac
    MOV dword ptr [ESP + 0xc],EDX       ; 00420eaf
    MOV dword ptr [ESP + 0x8],EDX       ; 00420eb3
    MOV EDX,dword ptr [EBP + 0x18]      ; 00420eb7
    MOV dword ptr [ESP + 0x4],ECX       ; 00420eba
    CMP EDX,EBX                         ; 00420ebe
    JLE 0x00420f05                      ; 00420ec0 | LAB_00420f05
        ;   XREF to: 00420f05 (CONDITIONAL_JUMP)
    LEA EDX,[EAX + 0xc]                 ; 00420ec2
    MOV EDI,dword ptr [EDX]             ; 00420ec5
        ;   Label: LAB_00420ec5
    MOV EAX,EDX                         ; 00420ec7
    CMP EDI,dword ptr [ESP]             ; 00420ec9
    JL 0x00420f80                       ; 00420ecc | LAB_00420f80
        ;   XREF to: 00420f80 (CONDITIONAL_JUMP)
    CMP ESI,EDI                         ; 00420ed2
    JGE 0x00420ed8                      ; 00420ed4 | LAB_00420ed8
        ;   XREF to: 00420ed8 (CONDITIONAL_JUMP)
    MOV ESI,EDI                         ; 00420ed6
    MOV EDI,dword ptr [EAX + 0x4]       ; 00420ed8
        ;   Label: LAB_00420ed8
    CMP EDI,dword ptr [ESP + 0x4]       ; 00420edb
    JGE 0x00420f88                      ; 00420edf | LAB_00420f88
        ;   XREF to: 00420f88 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x4],EDI       ; 00420ee5
    MOV EDI,dword ptr [EAX + 0x8]       ; 00420ee9
        ;   Label: LAB_00420ee9
    CMP EDI,dword ptr [ESP + 0x8]       ; 00420eec
    JGE 0x00420f97                      ; 00420ef0 | LAB_00420f97
        ;   XREF to: 00420f97 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x8],EDI       ; 00420ef6
    MOV EDI,dword ptr [EBP + 0x18]      ; 00420efa
        ;   Label: LAB_00420efa
    INC EBX                             ; 00420efd
    ADD EDX,0xc                         ; 00420efe
    CMP EBX,EDI                         ; 00420f01
    JL 0x00420ec5                       ; 00420f03 | LAB_00420ec5
        ;   XREF to: 00420ec5 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP]             ; 00420f05
        ;   Label: LAB_00420f05
    MOV dword ptr [ESP + 0x10],EAX      ; 00420f08
    MOV dword ptr [ESP + 0x14],ESI      ; 00420f0c
    FLD double ptr [0x006165f7]         ; 00420f10 | double g_BoundingBoxFixedPointScaleFactor
    FILD dword ptr [ESP + 0x10]         ; 00420f16
    FMUL ST1                            ; 00420f1a
    FILD dword ptr [ESP + 0x14]         ; 00420f1c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00420f20
    FMUL ST2                            ; 00420f23
    FXCH                                ; 00420f25
    FSTP float ptr [EAX]                ; 00420f27
    MOV EAX,dword ptr [ESP + 0x4]       ; 00420f29
    MOV dword ptr [ESP + 0x10],EAX      ; 00420f2d
    MOV dword ptr [ESP + 0x14],ECX      ; 00420f31
    FILD dword ptr [ESP + 0x10]         ; 00420f35
    FMUL ST2                            ; 00420f39
    FILD dword ptr [ESP + 0x14]         ; 00420f3b
    MOV EAX,dword ptr [EBP + 0x14]      ; 00420f3f
    FMUL ST3                            ; 00420f42
    FXCH                                ; 00420f44
    FSTP float ptr [EAX + 0x4]          ; 00420f46
    MOV EAX,dword ptr [ESP + 0x8]       ; 00420f49
    MOV dword ptr [ESP + 0x14],EAX      ; 00420f4d
    FILD dword ptr [ESP + 0x14]         ; 00420f51
    MOV EAX,dword ptr [EBP + 0x14]      ; 00420f55
    FMUL ST3                            ; 00420f58
    FXCH ST2                            ; 00420f5a
    FSTP float ptr [EAX + 0xc]          ; 00420f5c
    FSTP float ptr [EAX + 0x10]         ; 00420f5f
    FSTP float ptr [EAX + 0x8]          ; 00420f62
    MOV EAX,dword ptr [ESP + 0xc]       ; 00420f65
    MOV dword ptr [ESP + 0x14],EAX      ; 00420f69
    FILD dword ptr [ESP + 0x14]         ; 00420f6d
    FMULP                               ; 00420f71
    MOV EAX,dword ptr [EBP + 0x14]      ; 00420f73
    FSTP float ptr [EAX + 0x14]         ; 00420f76
    MOV ESP,EBP                         ; 00420f79
    POP EBP                             ; 00420f7b
    POP EDI                             ; 00420f7c
    POP ESI                             ; 00420f7d
    POP EBX                             ; 00420f7e
    RET                                 ; 00420f7f
    MOV dword ptr [ESP],EDI             ; 00420f80
        ;   Label: LAB_00420f80
    JMP 0x00420ed8                      ; 00420f83 | LAB_00420ed8
        ;   XREF to: 00420ed8 (UNCONDITIONAL_JUMP)
    CMP ECX,EDI                         ; 00420f88
        ;   Label: LAB_00420f88
    JGE 0x00420ee9                      ; 00420f8a | LAB_00420ee9
        ;   XREF to: 00420ee9 (CONDITIONAL_JUMP)
    MOV ECX,EDI                         ; 00420f90
    JMP 0x00420ee9                      ; 00420f92 | LAB_00420ee9
        ;   XREF to: 00420ee9 (UNCONDITIONAL_JUMP)
    CMP ECX,EDI                         ; 00420f97
        ;   Label: LAB_00420f97
    JGE 0x00420efa                      ; 00420f99 | LAB_00420efa
        ;   XREF to: 00420efa (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0xc],EDI       ; 00420f9f
    JMP 0x00420efa                      ; 00420fa3 | LAB_00420efa
        ;   XREF to: 00420efa (UNCONDITIONAL_JUMP)

