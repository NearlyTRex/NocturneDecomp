; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_computeBoundingBox_FUN_00432e80(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[3]:
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80 at 00433ea7
;   core_charactr.cpp_CCharacter_setup_FUN_0042c510 at 0042c5cc
;   core_mimic.cpp_CMimic_process_FUN_0050f630 at 0050f6bb
;
; Called Functions:
;   core_skeleton.cpp_FUN_0056ae70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00432e80
        ;   Label: core_charactr.cpp_CCharacter_computeBoundingBox_FUN_00432e80
    PUSH ESI                            ; 00432e81
    PUSH EDI                            ; 00432e82
    SUB ESP,0x30                        ; 00432e83
    MOV EBX,dword ptr [ESP + 0x40]      ; 00432e86
    LEA EDX,[EBX + 0x158]               ; 00432e8a
    LEA EAX,[EBX + 0x24a8]              ; 00432e90
    CMP byte ptr [EAX],0x0              ; 00432e96
    JNZ 0x00432ea2                      ; 00432e99
        ;   XREF to: 00432ea2 (CONDITIONAL_JUMP)  ; LAB_00432ea2
    ADD ESP,0x30                        ; 00432e9b
        ;   Label: LAB_00432e9b
    POP EDI                             ; 00432e9e
    POP ESI                             ; 00432e9f
    POP EBX                             ; 00432ea0
    RET                                 ; 00432ea1
    PUSH EDX                            ; 00432ea2
        ;   Label: LAB_00432ea2
    LEA ESI,[ESP + 0x4]                 ; 00432ea3
    LEA EDI,[ESP + 0x1c]                ; 00432ea7
    CALL core_skeleton.cpp_FUN_0056ae70 ; 00432eab
        ;   XREF to: 0056ae70 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0056ae70()
    MOV ECX,0x6                         ; 00432eb0
    LEA ESI,[ESP + 0x4]                 ; 00432eb5
    ADD ESP,0x4                         ; 00432eb9
    LEA EDX,[EBX + 0x2788]              ; 00432ebc
    MOVSD.REP ES:EDI,ESI                ; 00432ec2
    LEA EBX,[ESP + 0x18]                ; 00432ec4
    MOV ESI,EDX                         ; 00432ec8
    CMP EDX,EBX                         ; 00432eca
    JZ 0x00432ee2                       ; 00432ecc
        ;   XREF to: 00432ee2 (CONDITIONAL_JUMP)  ; LAB_00432ee2
    MOV EAX,dword ptr [ESP + 0x18]      ; 00432ece
    MOV dword ptr [EDX],EAX             ; 00432ed2
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00432ed4
    MOV dword ptr [EDX + 0x4],EAX       ; 00432ed8
    MOV EAX,dword ptr [ESP + 0x20]      ; 00432edb
    MOV dword ptr [EDX + 0x8],EAX       ; 00432edf
    LEA EAX,[EBX + 0xc]                 ; 00432ee2
        ;   Label: LAB_00432ee2
    LEA EDX,[ESI + 0xc]                 ; 00432ee5
    CMP EDX,EAX                         ; 00432ee8
    JZ 0x00432e9b                       ; 00432eea
        ;   XREF to: 00432e9b (CONDITIONAL_JUMP)  ; LAB_00432e9b
    MOV ECX,dword ptr [EAX]             ; 00432eec
    MOV dword ptr [EDX],ECX             ; 00432eee
    MOV ECX,dword ptr [EAX + 0x4]       ; 00432ef0
    MOV dword ptr [EDX + 0x4],ECX       ; 00432ef3
    MOV ECX,dword ptr [EAX + 0x8]       ; 00432ef6
    MOV dword ptr [EDX + 0x8],ECX       ; 00432ef9
    ADD ESP,0x30                        ; 00432efc
    POP EDI                             ; 00432eff
    POP ESI                             ; 00432f00
    POP EBX                             ; 00432f01
    RET                                 ; 00432f02

