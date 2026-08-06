; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_stranger_cpp_CStranger_getThrowDirection_FUN_0053f260(CStranger *this_ptr,CVector3f *out_direction)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_direction
; Local Variables:
; undefined        Stack[-0x48]:1  local_48
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   core_stranger.cpp_CStranger_FUN_0053f310 at 0053f917
;   core_stranger.cpp_CStranger_renderOpaque_FUN_0053d100 at 0053d1dc
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053f260
        ;   Label: core_stranger.cpp_CStranger_getThrowDirection_FUN_0053f260
    PUSH ESI                            ; 0053f261
    SUB ESP,0x40                        ; 0053f262
    MOV EBX,dword ptr [ESP + 0x50]      ; 0053f265
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0053f269
    MOV EAX,dword ptr [EAX + 0x1fa58]   ; 0053f26d
    MOV dword ptr [ESP + 0x28],EAX      ; 0053f273
    LEA EAX,[ESP + 0x28]                ; 0053f277
    PUSH EAX                            ; 0053f27b
    LEA EAX,[ESP + 0x4]                 ; 0053f27c
    XOR EDX,EDX                         ; 0053f280
    PUSH EAX                            ; 0053f282
    MOV dword ptr [ESP + 0x38],EDX      ; 0053f283
    MOV dword ptr [ESP + 0x34],EDX      ; 0053f287
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 0053f28b
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0053f290
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0053f293
    MOV EAX,dword ptr [EAX + 0x1fa4c]   ; 0053f297
    MOV dword ptr [ESP + 0x3c],EAX      ; 0053f29d
    LEA EAX,[ESP + 0x34]                ; 0053f2a1
    PUSH EAX                            ; 0053f2a5
    PUSH EBX                            ; 0053f2a6
    LEA EAX,[ESP + 0x8]                 ; 0053f2a7
    XOR ESI,ESI                         ; 0053f2ab
    PUSH EAX                            ; 0053f2ad
    MOV dword ptr [ESP + 0x40],ESI      ; 0053f2ae
    MOV dword ptr [ESP + 0x44],ESI      ; 0053f2b2
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 0053f2b6
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 0053f2bb
    MOV EAX,EBX                         ; 0053f2be
    ADD ESP,0x40                        ; 0053f2c0
    POP ESI                             ; 0053f2c3
    POP EBX                             ; 0053f2c4
    RET                                 ; 0053f2c5

