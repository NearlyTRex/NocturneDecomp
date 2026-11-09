; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_FUN_0054fcc0(float *param_1,CDeformableModelInstance *param_2)
;
;
; XREF[1]:
;   core_skeleton.cpp_FUN_0054eb40 at 0054ebc7
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;   core_xform.cpp_FUN_00583260
;   core_xform.cpp_FUN_005855f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054fcc0
        ;   Label: core_skeleton.cpp_FUN_0054fcc0
    PUSH ESI                            ; 0054fcc1
    PUSH EDI                            ; 0054fcc2
    PUSH EBP                            ; 0054fcc3
    SUB ESP,0x38                        ; 0054fcc4
    MOV EDX,dword ptr [ESP + 0x50]      ; 0054fcc7
    PUSH EDX                            ; 0054fccb
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 0054fccc
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054fcd1
    MOV EBX,dword ptr [EAX + 0x1de78]   ; 0054fcd4
    XOR ECX,ECX                         ; 0054fcda
    MOV dword ptr [ESP + 0x18],EAX      ; 0054fcdc
    MOV dword ptr [ESP + 0x2c],ECX      ; 0054fce0
    TEST EBX,EBX                        ; 0054fce4
    JLE 0x0054fdf5                      ; 0054fce6
        ;   XREF to: 0054fdf5 (CONDITIONAL_JUMP)  ; LAB_0054fdf5
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0054fcec
    MOV ESI,dword ptr [ESP + 0x4c]      ; 0054fcf0
    MOV dword ptr [ESP + 0x28],ECX      ; 0054fcf4
    MOV dword ptr [ESP + 0x20],EAX      ; 0054fcf8
    ADD EBX,0x7dc                       ; 0054fcfc
    ADD ESI,0xc                         ; 0054fd02
    MOV dword ptr [ESP + 0x30],EBX      ; 0054fd05
    MOV EBX,dword ptr [ESP + 0x50]      ; 0054fd09
    MOV dword ptr [ESP + 0x24],ESI      ; 0054fd0d
    ADD EBX,0x58                        ; 0054fd11
    MOV EBP,dword ptr [ESP + 0x30]      ; 0054fd14
    MOV dword ptr [ESP + 0x1c],EBX      ; 0054fd18
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0054fd1c
    MOV dword ptr [ESP + 0x34],EBP      ; 0054fd20
    MOV EBP,EBX                         ; 0054fd24
    IMUL ESI,dword ptr [ESP + 0x2c],0x30 ; 0054fd26
        ;   Label: LAB_0054fd26
    MOV ECX,dword ptr [ESP + 0x24]      ; 0054fd2b
    PUSH ECX                            ; 0054fd2f
    MOV EAX,dword ptr [ESP + 0x38]      ; 0054fd30
    PUSH EAX                            ; 0054fd34
    CALL core_xform.cpp_FUN_005855f0    ; 0054fd35
        ;   XREF to: 005855f0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_FUN_005855f0(CMatrix3x4f * matrix_out, CQuaternion4f * quat_in)
    MOV EDX,dword ptr [EBX + 0x64c]     ; 0054fd3a
    ADD ESP,0x8                         ; 0054fd40
    CMP EDX,0x3f800000                  ; 0054fd43
    JNZ 0x0054fdfd                      ; 0054fd49
        ;   XREF to: 0054fdfd (CONDITIONAL_JUMP)  ; LAB_0054fdfd
    MOV EAX,dword ptr [ESP + 0x20]      ; 0054fd4f
        ;   Label: LAB_0054fd4f
    MOV EAX,dword ptr [EAX + 0x1de9c]   ; 0054fd53
    TEST EAX,EAX                        ; 0054fd59
    JL 0x0054feba                       ; 0054fd5b
        ;   XREF to: 0054feba (CONDITIONAL_JUMP)  ; LAB_0054feba
    IMUL EAX,EAX,0x30                   ; 0054fd61
    ADD EAX,dword ptr [ESP + 0x30]      ; 0054fd64
    MOV EDI,dword ptr [ESP + 0x28]      ; 0054fd68
    PUSH EAX                            ; 0054fd6c
    MOV EAX,dword ptr [ESP + 0x20]      ; 0054fd6d
    ADD EAX,EDI                         ; 0054fd71
    PUSH EAX                            ; 0054fd73
    LEA ESI,[ESP + 0x14]                ; 0054fd74
    LEA EDI,[ESP + 0x8]                 ; 0054fd78
    CALL core_xform.cpp_FUN_00583260    ; 0054fd7c
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    LEA ESI,[ESP + 0x14]                ; 0054fd81
    ADD ESP,0x8                         ; 0054fd85
    MOVSD ES:EDI,ESI                    ; 0054fd88
    MOVSD ES:EDI,ESI                    ; 0054fd89
    MOVSD ES:EDI,ESI                    ; 0054fd8a
    MOV EAX,dword ptr [ESP]             ; 0054fd8b
    MOV dword ptr [EBP + 0x7e8],EAX     ; 0054fd8e
    MOV EAX,dword ptr [ESP + 0x4]       ; 0054fd94
    MOV dword ptr [EBP + 0x7f8],EAX     ; 0054fd98
    MOV EAX,dword ptr [ESP + 0x8]       ; 0054fd9e
    MOV dword ptr [EBP + 0x808],EAX     ; 0054fda2
    MOV ESI,dword ptr [ESP + 0x34]      ; 0054fda8
        ;   Label: LAB_0054fda8
    MOV EDI,dword ptr [ESP + 0x24]      ; 0054fdac
    MOV EAX,dword ptr [ESP + 0x28]      ; 0054fdb0
    MOV EDX,dword ptr [ESP + 0x20]      ; 0054fdb4
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0054fdb8
    ADD EBX,0x4                         ; 0054fdbc
    ADD EBP,0x30                        ; 0054fdbf
    ADD ESI,0x30                        ; 0054fdc2
    ADD EDI,0x10                        ; 0054fdc5
    ADD EAX,0xc                         ; 0054fdc8
    ADD EDX,0x24                        ; 0054fdcb
    INC ECX                             ; 0054fdce
    MOV dword ptr [ESP + 0x34],ESI      ; 0054fdcf
    MOV dword ptr [ESP + 0x24],EDI      ; 0054fdd3
    MOV ESI,dword ptr [ESP + 0x18]      ; 0054fdd7
    MOV dword ptr [ESP + 0x28],EAX      ; 0054fddb
    MOV dword ptr [ESP + 0x20],EDX      ; 0054fddf
    MOV EDI,dword ptr [ESI + 0x1de78]   ; 0054fde3
    MOV dword ptr [ESP + 0x2c],ECX      ; 0054fde9
    CMP ECX,EDI                         ; 0054fded
    JL 0x0054fd26                       ; 0054fdef
        ;   XREF to: 0054fd26 (CONDITIONAL_JUMP)  ; LAB_0054fd26
    ADD ESP,0x38                        ; 0054fdf5
        ;   Label: LAB_0054fdf5
    POP EBP                             ; 0054fdf8
    POP EDI                             ; 0054fdf9
    POP ESI                             ; 0054fdfa
    POP EBX                             ; 0054fdfb
    RET                                 ; 0054fdfc
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0054fdfd
        ;   Label: LAB_0054fdfd
    FLD float ptr [EBX + 0x64c]         ; 0054fe01
    FMUL float ptr [ESI + EAX*0x1 + 0x7dc] ; 0054fe07
    FSTP float ptr [ESI + EAX*0x1 + 0x7dc] ; 0054fe0e
    FLD float ptr [EBX + 0x64c]         ; 0054fe15
    FMUL float ptr [ESI + EAX*0x1 + 0x7e0] ; 0054fe1b
    FSTP float ptr [ESI + EAX*0x1 + 0x7e0] ; 0054fe22
    FLD float ptr [EBX + 0x64c]         ; 0054fe29
    FMUL float ptr [ESI + EAX*0x1 + 0x7e4] ; 0054fe2f
    FSTP float ptr [ESI + EAX*0x1 + 0x7e4] ; 0054fe36
    FLD float ptr [EBX + 0x64c]         ; 0054fe3d
    FMUL float ptr [ESI + EAX*0x1 + 0x7ec] ; 0054fe43
    FSTP float ptr [ESI + EAX*0x1 + 0x7ec] ; 0054fe4a
    FLD float ptr [EBX + 0x64c]         ; 0054fe51
    FMUL float ptr [ESI + EAX*0x1 + 0x7f0] ; 0054fe57
    FSTP float ptr [ESI + EAX*0x1 + 0x7f0] ; 0054fe5e
    FLD float ptr [EBX + 0x64c]         ; 0054fe65
    FMUL float ptr [ESI + EAX*0x1 + 0x7f4] ; 0054fe6b
    FSTP float ptr [ESI + EAX*0x1 + 0x7f4] ; 0054fe72
    FLD float ptr [EBX + 0x64c]         ; 0054fe79
    FMUL float ptr [ESI + EAX*0x1 + 0x7fc] ; 0054fe7f
    FSTP float ptr [ESI + EAX*0x1 + 0x7fc] ; 0054fe86
    FLD float ptr [EBX + 0x64c]         ; 0054fe8d
    FMUL float ptr [ESI + EAX*0x1 + 0x800] ; 0054fe93
    FSTP float ptr [ESI + EAX*0x1 + 0x800] ; 0054fe9a
    FLD float ptr [EBX + 0x64c]         ; 0054fea1
    FMUL float ptr [ESI + EAX*0x1 + 0x804] ; 0054fea7
    FSTP float ptr [ESI + EAX*0x1 + 0x804] ; 0054feae
    JMP 0x0054fd4f                      ; 0054feb5
        ;   XREF to: 0054fd4f (UNCONDITIONAL_JUMP)  ; LAB_0054fd4f
    MOV EAX,dword ptr [ESP + 0x50]      ; 0054feba
        ;   Label: LAB_0054feba
    ADD EAX,dword ptr [ESP + 0x28]      ; 0054febe
    MOV ESI,dword ptr [ESP + 0x4c]      ; 0054fec2
    FLD float ptr [EAX + 0x58]          ; 0054fec6
    FADD float ptr [ESI]                ; 0054fec9
    FSTP float ptr [EBP + 0x7e8]        ; 0054fecb
    FLD float ptr [EAX + 0x5c]          ; 0054fed1
    FADD float ptr [ESI + 0x4]          ; 0054fed4
    FSTP float ptr [EBP + 0x7f8]        ; 0054fed7
    FLD float ptr [EAX + 0x60]          ; 0054fedd
    FADD float ptr [ESI + 0x8]          ; 0054fee0
    FSTP float ptr [EBP + 0x808]        ; 0054fee3
    JMP 0x0054fda8                      ; 0054fee9
        ;   XREF to: 0054fda8 (UNCONDITIONAL_JUMP)  ; LAB_0054fda8

