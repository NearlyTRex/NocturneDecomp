; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_imp_cpp_CImp_getTargetPoints_FUN_004d7e90(CImp *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CImp *           Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
;
; Referenced Globals:
;   undefined4 DAT_01cee138
;   undefined4 DAT_01cee14c
;   undefined4 DAT_01cee150
;   undefined4 DAT_01cee15c
;   undefined4 DAT_01cee164
;
; Called Functions:
;   core_skeleton.cpp_FUN_00546a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d7e90
        ;   Label: core_imp.cpp_CImp_getTargetPoints_FUN_004d7e90
    PUSH ESI                            ; 004d7e91
    PUSH EDI                            ; 004d7e92
    PUSH EBP                            ; 004d7e93
    SUB ESP,0x78                        ; 004d7e94
    MOV EBP,dword ptr [ESP + 0x8c]      ; 004d7e97
    MOV EAX,dword ptr [EBP + 0x10b2c]   ; 004d7e9e
    MOV EDX,dword ptr [EBP + EAX*0x4 + 0x23f4] ; 004d7ea4
    XOR EBX,EBX                         ; 004d7eab
    TEST EDX,EDX                        ; 004d7ead
    JNZ 0x004d8000                      ; 004d7eaf
        ;   XREF to: 004d8000 (CONDITIONAL_JUMP)  ; LAB_004d8000
    MOV EAX,dword ptr [EBP + 0x10b04]   ; 004d7eb5
        ;   Label: LAB_004d7eb5
    CMP dword ptr [EBP + EAX*0x4 + 0x23f4],0x0 ; 004d7ebb
    JZ 0x004d7f18                       ; 004d7ec3
        ;   XREF to: 004d7f18 (CONDITIONAL_JUMP)  ; LAB_004d7f18
    MOV EAX,[0x01cee14c]                ; 004d7ec5 | DAT_01cee14c
    PUSH EAX                            ; 004d7eca
    LEA EAX,[EBP + 0x2b4]               ; 004d7ecb
    PUSH EAX                            ; 004d7ed1
    LEA ESI,[ESP + 0x5c]                ; 004d7ed2
    LEA EDI,[ESP + 0x8]                 ; 004d7ed6
    CALL core_skeleton.cpp_FUN_00546a90 ; 004d7eda
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    LEA EAX,[EBX*0x4 + 0x0]             ; 004d7edf
    ADD ESP,0x8                         ; 004d7ee6
    SUB EAX,EBX                         ; 004d7ee9
    MOV EDX,dword ptr [ESP + 0x90]      ; 004d7eeb
    SHL EAX,0x2                         ; 004d7ef2
    LEA ESI,[ESP + 0x54]                ; 004d7ef5
    ADD EDX,EAX                         ; 004d7ef9
    MOV EAX,ESP                         ; 004d7efb
    MOVSD ES:EDI,ESI                    ; 004d7efd
    MOVSD ES:EDI,ESI                    ; 004d7efe
    MOVSD ES:EDI,ESI                    ; 004d7eff
    CMP EDX,EAX                         ; 004d7f00
    JZ 0x004d7f17                       ; 004d7f02
        ;   XREF to: 004d7f17 (CONDITIONAL_JUMP)  ; LAB_004d7f17
    MOV EAX,dword ptr [ESP]             ; 004d7f04
    MOV dword ptr [EDX],EAX             ; 004d7f07
    MOV EAX,dword ptr [ESP + 0x4]       ; 004d7f09
    MOV dword ptr [EDX + 0x4],EAX       ; 004d7f0d
    MOV EAX,dword ptr [ESP + 0x8]       ; 004d7f10
    MOV dword ptr [EDX + 0x8],EAX       ; 004d7f14
    INC EBX                             ; 004d7f17
        ;   Label: LAB_004d7f17
    MOV EAX,dword ptr [EBP + 0x10b0c]   ; 004d7f18
        ;   Label: LAB_004d7f18
    CMP dword ptr [EBP + EAX*0x4 + 0x23f4],0x0 ; 004d7f1e
    JZ 0x004d7f7f                       ; 004d7f26
        ;   XREF to: 004d7f7f (CONDITIONAL_JUMP)  ; LAB_004d7f7f
    MOV ECX,dword ptr [0x01cee150]      ; 004d7f28 | DAT_01cee150
    PUSH ECX                            ; 004d7f2e
    LEA EAX,[EBP + 0x2b4]               ; 004d7f2f
    PUSH EAX                            ; 004d7f35
    LEA ESI,[ESP + 0x14]                ; 004d7f36
    LEA EDI,[ESP + 0x74]                ; 004d7f3a
    CALL core_skeleton.cpp_FUN_00546a90 ; 004d7f3e
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    LEA EAX,[EBX*0x4 + 0x0]             ; 004d7f43
    ADD ESP,0x8                         ; 004d7f4a
    SUB EAX,EBX                         ; 004d7f4d
    MOV EDX,dword ptr [ESP + 0x90]      ; 004d7f4f
    SHL EAX,0x2                         ; 004d7f56
    LEA ESI,[ESP + 0xc]                 ; 004d7f59
    ADD EDX,EAX                         ; 004d7f5d
    LEA EAX,[ESP + 0x6c]                ; 004d7f5f
    MOVSD ES:EDI,ESI                    ; 004d7f63
    MOVSD ES:EDI,ESI                    ; 004d7f64
    MOVSD ES:EDI,ESI                    ; 004d7f65
    CMP EDX,EAX                         ; 004d7f66
    JZ 0x004d7f7e                       ; 004d7f68
        ;   XREF to: 004d7f7e (CONDITIONAL_JUMP)  ; LAB_004d7f7e
    MOV EAX,dword ptr [ESP + 0x6c]      ; 004d7f6a
    MOV dword ptr [EDX],EAX             ; 004d7f6e
    MOV EAX,dword ptr [ESP + 0x70]      ; 004d7f70
    MOV dword ptr [EDX + 0x4],EAX       ; 004d7f74
    MOV EAX,dword ptr [ESP + 0x74]      ; 004d7f77
    MOV dword ptr [EDX + 0x8],EAX       ; 004d7f7b
    INC EBX                             ; 004d7f7e
        ;   Label: LAB_004d7f7e
    MOV EAX,dword ptr [EBP + 0x10b24]   ; 004d7f7f
        ;   Label: LAB_004d7f7f
    CMP dword ptr [EBP + EAX*0x4 + 0x23f4],0x0 ; 004d7f85
    JZ 0x004d7fe6                       ; 004d7f8d
        ;   XREF to: 004d7fe6 (CONDITIONAL_JUMP)  ; LAB_004d7fe6
    MOV EDI,dword ptr [0x01cee15c]      ; 004d7f8f | DAT_01cee15c
    PUSH EDI                            ; 004d7f95
    LEA EAX,[EBP + 0x2b4]               ; 004d7f96
    PUSH EAX                            ; 004d7f9c
    LEA ESI,[ESP + 0x2c]                ; 004d7f9d
    LEA EDI,[ESP + 0x68]                ; 004d7fa1
    CALL core_skeleton.cpp_FUN_00546a90 ; 004d7fa5
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    LEA EAX,[EBX*0x4 + 0x0]             ; 004d7faa
    ADD ESP,0x8                         ; 004d7fb1
    SUB EAX,EBX                         ; 004d7fb4
    MOV EDX,dword ptr [ESP + 0x90]      ; 004d7fb6
    SHL EAX,0x2                         ; 004d7fbd
    LEA ESI,[ESP + 0x24]                ; 004d7fc0
    ADD EDX,EAX                         ; 004d7fc4
    LEA EAX,[ESP + 0x60]                ; 004d7fc6
    MOVSD ES:EDI,ESI                    ; 004d7fca
    MOVSD ES:EDI,ESI                    ; 004d7fcb
    MOVSD ES:EDI,ESI                    ; 004d7fcc
    CMP EDX,EAX                         ; 004d7fcd
    JZ 0x004d7fe5                       ; 004d7fcf
        ;   XREF to: 004d7fe5 (CONDITIONAL_JUMP)  ; LAB_004d7fe5
    MOV EAX,dword ptr [ESP + 0x60]      ; 004d7fd1
    MOV dword ptr [EDX],EAX             ; 004d7fd5
    MOV EAX,dword ptr [ESP + 0x64]      ; 004d7fd7
    MOV dword ptr [EDX + 0x4],EAX       ; 004d7fdb
    MOV EAX,dword ptr [ESP + 0x68]      ; 004d7fde
    MOV dword ptr [EDX + 0x8],EAX       ; 004d7fe2
    INC EBX                             ; 004d7fe5
        ;   Label: LAB_004d7fe5
    MOV EAX,dword ptr [EBP + 0x10b28]   ; 004d7fe6
        ;   Label: LAB_004d7fe6
    CMP dword ptr [EBP + EAX*0x4 + 0x23f4],0x0 ; 004d7fec
    JNZ 0x004d804e                      ; 004d7ff4
        ;   XREF to: 004d804e (CONDITIONAL_JUMP)  ; LAB_004d804e
    MOV EAX,EBX                         ; 004d7ff6
    ADD ESP,0x78                        ; 004d7ff8
    POP EBP                             ; 004d7ffb
    POP EDI                             ; 004d7ffc
    POP ESI                             ; 004d7ffd
    POP EBX                             ; 004d7ffe
    RET                                 ; 004d7fff
    MOV ECX,dword ptr [0x01cee138]      ; 004d8000 | DAT_01cee138
        ;   Label: LAB_004d8000
    PUSH ECX                            ; 004d8006
    LEA EAX,[EBP + 0x2b4]               ; 004d8007
    PUSH EAX                            ; 004d800d
    LEA ESI,[ESP + 0x20]                ; 004d800e
    LEA EDI,[ESP + 0x44]                ; 004d8012
    CALL core_skeleton.cpp_FUN_00546a90 ; 004d8016
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    LEA ESI,[ESP + 0x20]                ; 004d801b
    ADD ESP,0x8                         ; 004d801f
    MOVSD ES:EDI,ESI                    ; 004d8022
    MOVSD ES:EDI,ESI                    ; 004d8023
    MOVSD ES:EDI,ESI                    ; 004d8024
    LEA EAX,[ESP + 0x3c]                ; 004d8025
    MOV ESI,dword ptr [ESP + 0x90]      ; 004d8029
    CMP EAX,ESI                         ; 004d8030
    JZ 0x004d8048                       ; 004d8032
        ;   XREF to: 004d8048 (CONDITIONAL_JUMP)  ; LAB_004d8048
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004d8034
    MOV dword ptr [ESI],EAX             ; 004d8038
    MOV EAX,dword ptr [ESP + 0x40]      ; 004d803a
    MOV dword ptr [ESI + 0x4],EAX       ; 004d803e
    MOV EAX,dword ptr [ESP + 0x44]      ; 004d8041
    MOV dword ptr [ESI + 0x8],EAX       ; 004d8045
    INC EBX                             ; 004d8048
        ;   Label: LAB_004d8048
    JMP 0x004d7eb5                      ; 004d8049
        ;   XREF to: 004d7eb5 (UNCONDITIONAL_JUMP)  ; LAB_004d7eb5
    MOV ECX,dword ptr [0x01cee164]      ; 004d804e | DAT_01cee164
        ;   Label: LAB_004d804e
    PUSH ECX                            ; 004d8054
    ADD EBP,0x2b4                       ; 004d8055
    PUSH EBP                            ; 004d805b
    LEA ESI,[ESP + 0x38]                ; 004d805c
    LEA EDI,[ESP + 0x50]                ; 004d8060
    CALL core_skeleton.cpp_FUN_00546a90 ; 004d8064
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    LEA EAX,[EBX*0x4 + 0x0]             ; 004d8069
    ADD ESP,0x8                         ; 004d8070
    SUB EAX,EBX                         ; 004d8073
    MOV EDX,dword ptr [ESP + 0x90]      ; 004d8075
    SHL EAX,0x2                         ; 004d807c
    LEA ESI,[ESP + 0x30]                ; 004d807f
    ADD EDX,EAX                         ; 004d8083
    LEA EAX,[ESP + 0x48]                ; 004d8085
    MOVSD ES:EDI,ESI                    ; 004d8089
    MOVSD ES:EDI,ESI                    ; 004d808a
    MOVSD ES:EDI,ESI                    ; 004d808b
    CMP EDX,EAX                         ; 004d808c
    JZ 0x004d80a4                       ; 004d808e
        ;   XREF to: 004d80a4 (CONDITIONAL_JUMP)  ; LAB_004d80a4
    MOV EAX,dword ptr [ESP + 0x48]      ; 004d8090
    MOV dword ptr [EDX],EAX             ; 004d8094
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004d8096
    MOV dword ptr [EDX + 0x4],EAX       ; 004d809a
    MOV EAX,dword ptr [ESP + 0x50]      ; 004d809d
    MOV dword ptr [EDX + 0x8],EAX       ; 004d80a1
    INC EBX                             ; 004d80a4
        ;   Label: LAB_004d80a4
    MOV EAX,EBX                         ; 004d80a5
    ADD ESP,0x78                        ; 004d80a7
    POP EBP                             ; 004d80aa
    POP EDI                             ; 004d80ab
    POP ESI                             ; 004d80ac
    POP EBX                             ; 004d80ad
    RET                                 ; 004d80ae

