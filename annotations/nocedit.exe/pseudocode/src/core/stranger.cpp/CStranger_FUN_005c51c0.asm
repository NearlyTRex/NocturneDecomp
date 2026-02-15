; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_stranger_cpp_CStranger_FUN_005c51c0(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x48]:1  local_48
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   core_stranger.cpp_CStranger_FUN_005c5270 at 005c585b
;   core_stranger.cpp_CStranger_renderOpaque_FUN_005c3150 at 005c322c
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c51c0
        ;   Label: core_stranger.cpp_CStranger_FUN_005c51c0
    PUSH ESI                            ; 005c51c1
    SUB ESP,0x40                        ; 005c51c2
    MOV EBX,dword ptr [ESP + 0x50]      ; 005c51c5
    MOV EAX,dword ptr [ESP + 0x4c]      ; 005c51c9
    MOV EAX,dword ptr [EAX + 0x1fbf0]   ; 005c51cd
    MOV dword ptr [ESP + 0x28],EAX      ; 005c51d3
    LEA EAX,[ESP + 0x28]                ; 005c51d7
    PUSH EAX                            ; 005c51db
    LEA EAX,[ESP + 0x4]                 ; 005c51dc
    XOR EDX,EDX                         ; 005c51e0
    PUSH EAX                            ; 005c51e2
    MOV dword ptr [ESP + 0x38],EDX      ; 005c51e3
    MOV dword ptr [ESP + 0x34],EDX      ; 005c51e7
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 005c51eb
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 005c51f0
    MOV EAX,dword ptr [ESP + 0x4c]      ; 005c51f3
    MOV EAX,dword ptr [EAX + 0x1fbe4]   ; 005c51f7
    MOV dword ptr [ESP + 0x3c],EAX      ; 005c51fd
    LEA EAX,[ESP + 0x34]                ; 005c5201
    PUSH EAX                            ; 005c5205
    PUSH EBX                            ; 005c5206
    LEA EAX,[ESP + 0x8]                 ; 005c5207
    XOR ESI,ESI                         ; 005c520b
    PUSH EAX                            ; 005c520d
    MOV dword ptr [ESP + 0x40],ESI      ; 005c520e
    MOV dword ptr [ESP + 0x44],ESI      ; 005c5212
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 005c5216
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 005c521b
    MOV EAX,EBX                         ; 005c521e
    ADD ESP,0x40                        ; 005c5220
    POP ESI                             ; 005c5223
    POP EBX                             ; 005c5224
    RET                                 ; 005c5225

