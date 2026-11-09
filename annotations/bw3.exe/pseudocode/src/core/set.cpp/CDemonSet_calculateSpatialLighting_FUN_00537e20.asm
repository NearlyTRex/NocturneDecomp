; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_00537e20(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   world_position
; CVector3i *      Stack[0xc]:4   surface_normal
; Local Variables:
; undefined        Stack[-0x48]:1  local_48
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x30]:1  local_30
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_set.cpp_CDemonSet_lightVertexColor_FUN_005380a0 at 00538248
;   core_set.cpp_FUN_005365c0 at 00536840
;   core_shadow.cpp_FUN_005438d0 at 00543ee5
;
; Referenced Globals:
;   undefined4 DAT_0203ad1c
;   undefined4 DAT_0207baac
;   undefined4 DAT_0207bab0
;   undefined4 DAT_0207bab4
;   undefined4 DAT_0207f958
;   undefined4 DAT_0207fadc
;   undefined4 DAT_0207faf0
;   undefined4 DAT_0207ffa8
;   undefined4 DAT_0207ffac
;   undefined4 DAT_0207ffb8
;   undefined4 DAT_0207ffc4
;   undefined4 DAT_0207ffd0
;   undefined4 DAT_0207ffdc
;
; Called Functions:
;   core_dcamera.cpp_FUN_0044bb00
;   core_dglobe.cpp_FUN_0045b070
;   core_mirror.cpp_FUN_004f57c0
;   core_mirror.cpp_FUN_004f5870
;   core_set.cpp_FUN_005376e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00537e20
        ;   Label: core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_00537e20
    PUSH ESI                            ; 00537e21
    PUSH EDI                            ; 00537e22
    PUSH EBP                            ; 00537e23
    SUB ESP,0x38                        ; 00537e24
    MOV EBP,dword ptr [ESP + 0x54]      ; 00537e27
    MOV EDX,dword ptr [0x0207ffa8]      ; 00537e2b | DAT_0207ffa8
    TEST EDX,EDX                        ; 00537e31
    JZ 0x00537e5d                       ; 00537e33
        ;   XREF to: 00537e5d (CONDITIONAL_JUMP)  ; LAB_00537e5d
    CMP EDX,0x1                         ; 00537e35
    JNZ 0x0053802f                      ; 00537e38
        ;   XREF to: 0053802f (CONDITIONAL_JUMP)  ; LAB_0053802f
    PUSH 0x0                            ; 00537e3e
    PUSH 0x0                            ; 00537e40
    PUSH 0x0                            ; 00537e42
    PUSH 0x0                            ; 00537e44
    PUSH 0x0                            ; 00537e46
    MOV ESI,dword ptr [ESP + 0x60]      ; 00537e48
    PUSH ESI                            ; 00537e4c
    CALL core_set.cpp_FUN_005376e0      ; 00537e4d
        ;   XREF to: 005376e0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_FUN_005376e0(CDemonSet * this_ptr, CVector3f * position, CVector3f * orientation, CVector3f * aabb_min, ...)
        ;   Label: LAB_00537e4d
    ADD ESP,0x18                        ; 00537e52
    XOR EDI,EDI                         ; 00537e55
    MOV dword ptr [0x0207ffa8],EDI      ; 00537e57 | DAT_0207ffa8
    MOV EAX,[0x0207fadc]                ; 00537e5d | DAT_0207fadc
        ;   Label: LAB_00537e5d
    XOR ESI,ESI                         ; 00537e62
    XOR EBX,EBX                         ; 00537e64
    TEST EAX,EAX                        ; 00537e66
    JLE 0x00537ea0                      ; 00537e68
        ;   XREF to: 00537ea0 (CONDITIONAL_JUMP)  ; LAB_00537ea0
    XOR EDI,EDI                         ; 00537e6a
    PUSH EBP                            ; 00537e6c
        ;   Label: LAB_00537e6c
    MOV EDX,dword ptr [EDI + 0x207fae0] ; 00537e6d
    PUSH EDX                            ; 00537e73
    MOV ECX,dword ptr [ESP + 0x58]      ; 00537e74
    PUSH ECX                            ; 00537e78
    PUSH 0x2038f4c                      ; 00537e79
    ADD EDI,0x4                         ; 00537e7e
    INC ESI                             ; 00537e81
    CALL core_dcamera.cpp_FUN_0044bb00  ; 00537e82
        ;   XREF to: 0044bb00 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0044bb00()
    ADD EBX,EAX                         ; 00537e87
    MOV EAX,[0x0207fadc]                ; 00537e89 | DAT_0207fadc
    ADD ESP,0x10                        ; 00537e8e
    CMP ESI,EAX                         ; 00537e91
    JL 0x00537e6c                       ; 00537e93
        ;   XREF to: 00537e6c (CONDITIONAL_JUMP)  ; LAB_00537e6c
    LEA EAX,[EAX]                       ; 00537e95
    LEA EDX,[EDX]                       ; 00537e9b
    MOV EBX,EBX                         ; 00537e9e
    MOV EDX,dword ptr [0x0207f958]      ; 00537ea0 | DAT_0207f958
        ;   Label: LAB_00537ea0
    XOR EDI,EDI                         ; 00537ea6
    TEST EDX,EDX                        ; 00537ea8
    JLE 0x00537ee0                      ; 00537eaa
        ;   XREF to: 00537ee0 (CONDITIONAL_JUMP)  ; LAB_00537ee0
    XOR ESI,ESI                         ; 00537eac
    PUSH EBP                            ; 00537eae
        ;   Label: LAB_00537eae
    MOV ECX,dword ptr [ESI + 0x207f95c] ; 00537eaf
    PUSH ECX                            ; 00537eb5
    MOV EAX,dword ptr [ESP + 0x58]      ; 00537eb6
    PUSH EAX                            ; 00537eba
    PUSH 0x2038f4c                      ; 00537ebb
    ADD ESI,0x4                         ; 00537ec0
    INC EDI                             ; 00537ec3
    CALL core_dcamera.cpp_FUN_0044bb00  ; 00537ec4
        ;   XREF to: 0044bb00 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0044bb00()
    MOV EDX,dword ptr [0x0207f958]      ; 00537ec9 | DAT_0207f958
    ADD ESP,0x10                        ; 00537ecf
    ADD EBX,EAX                         ; 00537ed2
    CMP EDI,EDX                         ; 00537ed4
    JL 0x00537eae                       ; 00537ed6
        ;   XREF to: 00537eae (CONDITIONAL_JUMP)  ; LAB_00537eae
    LEA EAX,[EAX]                       ; 00537ed8
    MOV EDX,EDX                         ; 00537ede
    MOV ECX,dword ptr [0x0207faf0]      ; 00537ee0 | DAT_0207faf0
        ;   Label: LAB_00537ee0
    XOR ESI,ESI                         ; 00537ee6
    TEST ECX,ECX                        ; 00537ee8
    JLE 0x00537f20                      ; 00537eea
        ;   XREF to: 00537f20 (CONDITIONAL_JUMP)  ; LAB_00537f20
    XOR EDI,EDI                         ; 00537eec
    PUSH EBP                            ; 00537eee
        ;   Label: LAB_00537eee
    MOV EAX,dword ptr [ESP + 0x54]      ; 00537eef
    PUSH EAX                            ; 00537ef3
    MOV EDX,dword ptr [EDI + 0x207faf4] ; 00537ef4
    PUSH EDX                            ; 00537efa
    ADD EDI,0x4                         ; 00537efb
    INC ESI                             ; 00537efe
    CALL core_dglobe.cpp_FUN_0045b070   ; 00537eff
        ;   XREF to: 0045b070 (UNCONDITIONAL_CALL)  ; undefined core_dglobe.cpp_FUN_0045b070()
    MOV ECX,dword ptr [0x0207faf0]      ; 00537f04 | DAT_0207faf0
    ADD ESP,0xc                         ; 00537f0a
    ADD EBX,EAX                         ; 00537f0d
    CMP ESI,ECX                         ; 00537f0f
    JL 0x00537eee                       ; 00537f11
        ;   XREF to: 00537eee (CONDITIONAL_JUMP)  ; LAB_00537eee
    LEA EAX,[EAX]                       ; 00537f13
    LEA EDX,[EDX]                       ; 00537f19
    NOP                                 ; 00537f1f
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00537f20
        ;   Label: LAB_00537f20
    TEST dword ptr [EAX + 0x14d160],0x7fffffff ; 00537f24
    JZ 0x00537f6c                       ; 00537f2e
        ;   XREF to: 00537f6c (CONDITIONAL_JUMP)  ; LAB_00537f6c
    TEST EBP,EBP                        ; 00537f30
    JZ 0x00537f6c                       ; 00537f32
        ;   XREF to: 00537f6c (CONDITIONAL_JUMP)  ; LAB_00537f6c
    MOV EAX,[0x0207baac]                ; 00537f34 | DAT_0207baac
    MOV EDX,dword ptr [EBP]             ; 00537f39
    IMUL EDX                            ; 00537f3c
    SHRD EAX,EDX,0x10                   ; 00537f3e
    MOV ESI,EAX                         ; 00537f42
    MOV EDX,dword ptr [EBP + 0x4]       ; 00537f44
    MOV EAX,[0x0207bab0]                ; 00537f47 | DAT_0207bab0
    IMUL EDX                            ; 00537f4c
    SHRD EAX,EDX,0x10                   ; 00537f4e
    MOV EDX,dword ptr [EBP + 0x8]       ; 00537f52
    ADD ESI,EAX                         ; 00537f55
    MOV EAX,[0x0207bab4]                ; 00537f57 | DAT_0207bab4
    IMUL EDX                            ; 00537f5c
    SHRD EAX,EDX,0x10                   ; 00537f5e
    ADD EAX,ESI                         ; 00537f62
    TEST EAX,EAX                        ; 00537f64
    JL 0x00538052                       ; 00537f66
        ;   XREF to: 00538052 (CONDITIONAL_JUMP)  ; LAB_00538052
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00537f6c
        ;   Label: LAB_00537f6c
    XOR EDI,EDI                         ; 00537f70
    MOV EDX,dword ptr [EAX + 0x15acc8]  ; 00537f72
    MOV dword ptr [ESP + 0x30],EDI      ; 00537f78
    TEST EDX,EDX                        ; 00537f7c
    JLE 0x00538025                      ; 00537f7e
        ;   XREF to: 00538025 (CONDITIONAL_JUMP)  ; LAB_00538025
    MOV dword ptr [ESP + 0x34],EAX      ; 00537f84
    MOV EAX,dword ptr [ESP + 0x50]      ; 00537f88
        ;   Label: LAB_00537f88
    PUSH EAX                            ; 00537f8c
    MOV EAX,dword ptr [ESP + 0x38]      ; 00537f8d
    MOV EAX,dword ptr [EAX + 0x15accc]  ; 00537f91
    ADD EAX,0x21c                       ; 00537f97
    PUSH EAX                            ; 00537f9c
    LEA ESI,[ESP + 0x8]                 ; 00537f9d
    LEA EDI,[ESP + 0x14]                ; 00537fa1
    CALL core_mirror.cpp_FUN_004f57c0   ; 00537fa5
        ;   XREF to: 004f57c0 (UNCONDITIONAL_CALL)  ; undefined core_mirror.cpp_FUN_004f57c0()
    LEA ESI,[ESP + 0x8]                 ; 00537faa
    ADD ESP,0x8                         ; 00537fae
    MOVSD ES:EDI,ESI                    ; 00537fb1
    MOVSD ES:EDI,ESI                    ; 00537fb2
    MOVSD ES:EDI,ESI                    ; 00537fb3
    TEST EBP,EBP                        ; 00537fb4
    JNZ 0x00538059                      ; 00537fb6
        ;   XREF to: 00538059 (CONDITIONAL_JUMP)  ; LAB_00538059
    MOV ECX,dword ptr [0x0203ad1c]      ; 00537fbc | DAT_0203ad1c
        ;   Label: LAB_00537fbc
    XOR EDI,EDI                         ; 00537fc2
    TEST ECX,ECX                        ; 00537fc4
    JLE 0x00537fff                      ; 00537fc6
        ;   XREF to: 00537fff (CONDITIONAL_JUMP)  ; LAB_00537fff
    XOR ESI,ESI                         ; 00537fc8
    TEST EBP,EBP                        ; 00537fca
        ;   Label: LAB_00537fca
    JZ 0x0053808b                       ; 00537fcc
        ;   XREF to: 0053808b (CONDITIONAL_JUMP)  ; LAB_0053808b
    LEA EAX,[ESP + 0x18]                ; 00537fd2
    PUSH EAX                            ; 00537fd6
    MOV ECX,dword ptr [ESI + 0x203ad20] ; 00537fd7
    PUSH ECX                            ; 00537fdd
    LEA EAX,[ESP + 0x14]                ; 00537fde
        ;   Label: LAB_00537fde
    PUSH EAX                            ; 00537fe2
    PUSH 0x2038f4c                      ; 00537fe3
    CALL core_dcamera.cpp_FUN_0044bb00  ; 00537fe8
        ;   XREF to: 0044bb00 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0044bb00()
    ADD ESP,0x10                        ; 00537fed
    ADD EBX,EAX                         ; 00537ff0
    MOV EAX,[0x0203ad1c]                ; 00537ff2 | DAT_0203ad1c
    INC EDI                             ; 00537ff7
    ADD ESI,0x4                         ; 00537ff8
    CMP EDI,EAX                         ; 00537ffb
    JL 0x00537fca                       ; 00537ffd
        ;   XREF to: 00537fca (CONDITIONAL_JUMP)  ; LAB_00537fca
    MOV ECX,dword ptr [ESP + 0x34]      ; 00537fff
        ;   Label: LAB_00537fff
    MOV ESI,dword ptr [ESP + 0x30]      ; 00538003
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00538007
    ADD ECX,0x4                         ; 0053800b
    INC ESI                             ; 0053800e
    MOV EDI,dword ptr [EDX + 0x15acc8]  ; 0053800f
    MOV dword ptr [ESP + 0x34],ECX      ; 00538015
    MOV dword ptr [ESP + 0x30],ESI      ; 00538019
    CMP ESI,EDI                         ; 0053801d
    JL 0x00537f88                       ; 0053801f
        ;   XREF to: 00537f88 (CONDITIONAL_JUMP)  ; LAB_00537f88
    MOV EAX,EBX                         ; 00538025
        ;   Label: LAB_00538025
    ADD ESP,0x38                        ; 00538027
    POP EBP                             ; 0053802a
    POP EDI                             ; 0053802b
    POP ESI                             ; 0053802c
    POP EBX                             ; 0053802d
    RET                                 ; 0053802e
    PUSH 0x207ffdc                      ; 0053802f | DAT_0207ffdc
        ;   Label: LAB_0053802f
    PUSH 0x207ffd0                      ; 00538034 | DAT_0207ffd0
    PUSH 0x207ffc4                      ; 00538039 | DAT_0207ffc4
    PUSH 0x207ffb8                      ; 0053803e | DAT_0207ffb8
    PUSH 0x207ffac                      ; 00538043 | DAT_0207ffac
    MOV EBX,dword ptr [ESP + 0x60]      ; 00538048
    PUSH EBX                            ; 0053804c
    JMP 0x00537e4d                      ; 0053804d
        ;   XREF to: 00537e4d (UNCONDITIONAL_JUMP)  ; LAB_00537e4d
    SUB EBX,EAX                         ; 00538052
        ;   Label: LAB_00538052
    JMP 0x00537f6c                      ; 00538054
        ;   XREF to: 00537f6c (UNCONDITIONAL_JUMP)  ; LAB_00537f6c
    MOV EAX,dword ptr [ESP + 0x34]      ; 00538059
        ;   Label: LAB_00538059
    PUSH EBP                            ; 0053805d
    MOV EDX,dword ptr [ESP + 0x54]      ; 0053805e
    MOV EAX,dword ptr [EAX + 0x15accc]  ; 00538062
    PUSH EDX                            ; 00538068
    ADD EAX,0x21c                       ; 00538069
    PUSH EAX                            ; 0053806e
    LEA ESI,[ESP + 0x30]                ; 0053806f
    LEA EDI,[ESP + 0x24]                ; 00538073
    CALL core_mirror.cpp_FUN_004f5870   ; 00538077
        ;   XREF to: 004f5870 (UNCONDITIONAL_CALL)  ; undefined core_mirror.cpp_FUN_004f5870()
    LEA ESI,[ESP + 0x30]                ; 0053807c
    ADD ESP,0xc                         ; 00538080
    MOVSD ES:EDI,ESI                    ; 00538083
    MOVSD ES:EDI,ESI                    ; 00538084
    MOVSD ES:EDI,ESI                    ; 00538085
    JMP 0x00537fbc                      ; 00538086
        ;   XREF to: 00537fbc (UNCONDITIONAL_JUMP)  ; LAB_00537fbc
    PUSH EBP                            ; 0053808b
        ;   Label: LAB_0053808b
    MOV EDX,dword ptr [ESI + 0x203ad20] ; 0053808c
    PUSH EDX                            ; 00538092
    JMP 0x00537fde                      ; 00538093
        ;   XREF to: 00537fde (UNCONDITIONAL_JUMP)  ; LAB_00537fde

