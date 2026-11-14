; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ladder_cpp_CLadder_cacheRelativePosition_FUN_004fd750(CLadder *this_ptr)
;
; Parameters:
; CLadder *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0xfc]:1  local_fc
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xd0]:4  local_d0
; undefined        Stack[-0xcc]:1  local_cc
; undefined        Stack[-0x9c]:1  local_9c
; undefined        Stack[-0x6c]:1  local_6c
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_ladder.cpp_CLadder_archive_FUN_004fd560 at 004fd5ab
;
; Called Functions:
;   core_xform.cpp_FUN_005b5620
;   core_xform.cpp_FUN_005b5760
;   core_xform.cpp_matrixToEulerAngles_FUN_005b5930
;   core_xform.cpp_multiplyMatrix3x4_FUN_005b5200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fd750
        ;   Label: core_ladder.cpp_CLadder_cacheRelativePosition_FUN_004fd750
    PUSH ESI                            ; 004fd751
    PUSH EDI                            ; 004fd752
    SUB ESP,0xf0                        ; 004fd753
    MOV EBX,dword ptr [ESP + 0x100]     ; 004fd759
    CMP dword ptr [EBX + 0x2e0],0x0     ; 004fd760
    JNZ 0x004fd773                      ; 004fd767
        ;   XREF to: 004fd773 (CONDITIONAL_JUMP)  ; LAB_004fd773
    ADD ESP,0xf0                        ; 004fd769
        ;   Label: LAB_004fd769
    POP EDI                             ; 004fd76f
    POP ESI                             ; 004fd770
    POP EBX                             ; 004fd771
    RET                                 ; 004fd772
    LEA EAX,[EBX + 0x30]                ; 004fd773
        ;   Label: LAB_004fd773
    PUSH EAX                            ; 004fd776
    LEA EAX,[EBX + 0x20]                ; 004fd777
    PUSH EAX                            ; 004fd77a
    LEA EAX,[ESP + 0x38]                ; 004fd77b
    PUSH EAX                            ; 004fd77f
    CALL core_xform.cpp_FUN_005b5760    ; 004fd780
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    MOV EAX,dword ptr [EBX + 0x2e0]     ; 004fd785
    ADD ESP,0xc                         ; 004fd78b
    LEA EDX,[EAX + 0x30]                ; 004fd78e
    PUSH EDX                            ; 004fd791
    ADD EAX,0x20                        ; 004fd792
    PUSH EAX                            ; 004fd795
    LEA EAX,[ESP + 0x68]                ; 004fd796
    PUSH EAX                            ; 004fd79a
    CALL core_xform.cpp_FUN_005b5620    ; 004fd79b
        ;   XREF to: 005b5620 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5620(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 004fd7a0
    LEA EAX,[ESP + 0x60]                ; 004fd7a3
    PUSH EAX                            ; 004fd7a7
    LEA EAX,[ESP + 0x34]                ; 004fd7a8
    PUSH EAX                            ; 004fd7ac
    LEA ESI,[ESP + 0x98]                ; 004fd7ad
    LEA EDI,[ESP + 0x8]                 ; 004fd7b4
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 004fd7b8
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005b5200(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 004fd7bd
    LEA ESI,[ESP + 0x98]                ; 004fd7c2
    ADD ESP,0x8                         ; 004fd7c9
    MOVSD.REP ES:EDI,ESI                ; 004fd7cc
    MOV EAX,dword ptr [ESP + 0xc]       ; 004fd7ce
    LEA EDX,[EBX + 0x2e4]               ; 004fd7d2
    MOV dword ptr [ESP + 0xd8],EAX      ; 004fd7d8
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004fd7df
    LEA EDI,[ESP + 0xcc]                ; 004fd7e3
    MOV dword ptr [ESP + 0xdc],EAX      ; 004fd7ea
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004fd7f1
    LEA ESI,[ESP + 0xd8]                ; 004fd7f5
    MOV dword ptr [ESP + 0xe0],EAX      ; 004fd7fc
    LEA EAX,[ESP + 0xcc]                ; 004fd803
    MOVSD ES:EDI,ESI                    ; 004fd80a
    MOVSD ES:EDI,ESI                    ; 004fd80b
    MOVSD ES:EDI,ESI                    ; 004fd80c
    CMP EDX,EAX                         ; 004fd80d
    JZ 0x004fd82e                       ; 004fd80f
        ;   XREF to: 004fd82e (CONDITIONAL_JUMP)  ; LAB_004fd82e
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004fd811
    MOV dword ptr [EDX],EAX             ; 004fd818
    MOV EAX,dword ptr [ESP + 0xd0]      ; 004fd81a
    MOV dword ptr [EDX + 0x4],EAX       ; 004fd821
    MOV EAX,dword ptr [ESP + 0xd4]      ; 004fd824
    MOV dword ptr [EDX + 0x8],EAX       ; 004fd82b
    MOV EAX,ESP                         ; 004fd82e
        ;   Label: LAB_004fd82e
    LEA ESI,[ESP + 0xc0]                ; 004fd830
    PUSH EAX                            ; 004fd837
    LEA EDI,[ESP + 0xe8]                ; 004fd838
    ADD EBX,0x2f0                       ; 004fd83f
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005b5930 ; 004fd845
        ;   XREF to: 005b5930 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToEulerAngles_FUN_005b5930()
    LEA ESI,[ESP + 0xc4]                ; 004fd84a
    ADD ESP,0x4                         ; 004fd851
    LEA EAX,[ESP + 0xe4]                ; 004fd854
    MOVSD ES:EDI,ESI                    ; 004fd85b
    MOVSD ES:EDI,ESI                    ; 004fd85c
    MOVSD ES:EDI,ESI                    ; 004fd85d
    CMP EBX,EAX                         ; 004fd85e
    JZ 0x004fd769                       ; 004fd860
        ;   XREF to: 004fd769 (CONDITIONAL_JUMP)  ; LAB_004fd769
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004fd866
    MOV dword ptr [EBX],EAX             ; 004fd86d
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004fd86f
    MOV dword ptr [EBX + 0x4],EAX       ; 004fd876
    MOV EAX,dword ptr [ESP + 0xec]      ; 004fd879
    MOV dword ptr [EBX + 0x8],EAX       ; 004fd880
    ADD ESP,0xf0                        ; 004fd883
    POP EDI                             ; 004fd889
    POP ESI                             ; 004fd88a
    POP EBX                             ; 004fd88b
    RET                                 ; 004fd88c

