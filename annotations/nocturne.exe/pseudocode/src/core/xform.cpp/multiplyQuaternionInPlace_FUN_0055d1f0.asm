; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CQuaternion4f * __cdecl core_xform_cpp_multiplyQuaternionInPlace_FUN_0055d1f0(CQuaternion4f *quat1_inout,CQuaternion4f *quat2_ptr)
;
; Parameters:
; CQuaternion4f *  Stack[0x4]:4   quat1_inout
; CQuaternion4f *  Stack[0x8]:4   quat2_ptr
; Local Variables:
; undefined        Stack[-0x1c]:1  local_1c
;
; Called Functions:
;   core_xform.cpp_multiplyQuaternion_FUN_0055d130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055d1f0
        ;   Label: core_xform.cpp_multiplyQuaternionInPlace_FUN_0055d1f0
    PUSH ESI                            ; 0055d1f1
    PUSH EDI                            ; 0055d1f2
    SUB ESP,0x10                        ; 0055d1f3
    MOV EBX,dword ptr [ESP + 0x20]      ; 0055d1f6
    MOV EDX,dword ptr [ESP + 0x24]      ; 0055d1fa
    PUSH EDX                            ; 0055d1fe
    PUSH EBX                            ; 0055d1ff
    LEA ESI,[ESP + 0x8]                 ; 0055d200
    MOV EDI,EBX                         ; 0055d204
    CALL core_xform.cpp_multiplyQuaternion_FUN_0055d130 ; 0055d206
        ;   XREF to: 0055d130 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_0055d130(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x8]                 ; 0055d20b
    ADD ESP,0x8                         ; 0055d20f
    MOV EAX,EBX                         ; 0055d212
    MOVSD ES:EDI,ESI                    ; 0055d214
    MOVSD ES:EDI,ESI                    ; 0055d215
    MOVSD ES:EDI,ESI                    ; 0055d216
    MOVSD ES:EDI,ESI                    ; 0055d217
    ADD ESP,0x10                        ; 0055d218
    POP EDI                             ; 0055d21b
    POP ESI                             ; 0055d21c
    POP EBX                             ; 0055d21d
    RET                                 ; 0055d21e

