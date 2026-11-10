; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_prye_cpp_FUN_00524800(int param_1)
;
; Local Variables:
; undefined        Stack[-0x54]:1  local_54
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   core_prye.cpp_CPrye_renderOpaque_FUN_005220d0 at 005221b1
;   unkafter_prye.cpp_FUN_00524940 at 00525280
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
;   core_dirmat.cpp_FUN_0045b800
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00524800
        ;   Label: unkafter_prye.cpp_FUN_00524800
    PUSH EDI                            ; 00524801
    SUB ESP,0x4c                        ; 00524802
    MOV EBX,ESI                         ; 00524805
    MOV ESI,dword ptr [ESP + 0x58]      ; 00524807
    MOV EAX,dword ptr [ESI + 0x20be8]   ; 0052480b
    MOV dword ptr [ESP + 0x34],EAX      ; 00524811
    LEA EAX,[ESP + 0x34]                ; 00524815
    PUSH EAX                            ; 00524819
    LEA EAX,[ESP + 0x4]                 ; 0052481a
    XOR EDX,EDX                         ; 0052481e
    PUSH EAX                            ; 00524820
    MOV dword ptr [ESP + 0x44],EDX      ; 00524821
    MOV dword ptr [ESP + 0x40],EDX      ; 00524825
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550 ; 00524829
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0052482e
    MOV EAX,dword ptr [ESI + 0x20bdc]   ; 00524831
    MOV dword ptr [ESP + 0x48],EAX      ; 00524837
    XOR ESI,ESI                         ; 0052483b
    LEA EAX,[ESP + 0x40]                ; 0052483d
    MOV dword ptr [ESP + 0x40],ESI      ; 00524841
    PUSH EAX                            ; 00524845
    LEA EAX,[ESP + 0x4]                 ; 00524846
    MOV dword ptr [ESP + 0x48],ESI      ; 0052484a
    PUSH EAX                            ; 0052484e
    LEA ESI,[ESP + 0x30]                ; 0052484f
    MOV EDI,EBX                         ; 00524853
    CALL core_dirmat.cpp_FUN_0045b800   ; 00524855
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b800()
    LEA ESI,[ESP + 0x30]                ; 0052485a
    ADD ESP,0x8                         ; 0052485e
    MOVSD ES:EDI,ESI                    ; 00524861
    MOVSD ES:EDI,ESI                    ; 00524862
    MOVSD ES:EDI,ESI                    ; 00524863
    MOV EAX,EBX                         ; 00524864
    ADD ESP,0x4c                        ; 00524866
    POP EDI                             ; 00524869
    POP EBX                             ; 0052486a
    RET                                 ; 0052486b

