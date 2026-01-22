; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CQuaternion4f * core_xform.cpp_multiplyQuaternionInPlace_FUN_005f7700(CQuaternion4f * quat1_inout, CQuaternion4f * quat2_ptr)
;
; Parameters:
; CQuaternion4f *  Stack[0x4]:4   quat1_inout
; CQuaternion4f *  Stack[0x8]:4   quat2_ptr
; Local Variables:
; undefined        Stack[-0x1c]:1  local_1c
;
; Called Functions:
;   core_xform.cpp_multiplyQuaternion_FUN_005f7640
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f7700
        ;   Label: core_xform.cpp_multiplyQuaternionInPlace_FUN_005f7700
    PUSH ESI                            ; 005f7701
    PUSH EDI                            ; 005f7702
    SUB ESP,0x10                        ; 005f7703
    MOV EBX,dword ptr [ESP + 0x20]      ; 005f7706
    MOV EDX,dword ptr [ESP + 0x24]      ; 005f770a
    PUSH EDX                            ; 005f770e
    PUSH EBX                            ; 005f770f
    LEA ESI,[ESP + 0x8]                 ; 005f7710
    MOV EDI,EBX                         ; 005f7714
    CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640 ; 005f7716
        ;   XREF to: 005f7640 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_005f7640(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x8]                 ; 005f771b
    ADD ESP,0x8                         ; 005f771f
    MOV EAX,EBX                         ; 005f7722
    MOVSD ES:EDI,ESI                    ; 005f7724
    MOVSD ES:EDI,ESI                    ; 005f7725
    MOVSD ES:EDI,ESI                    ; 005f7726
    MOVSD ES:EDI,ESI                    ; 005f7727
    ADD ESP,0x10                        ; 005f7728
    POP EDI                             ; 005f772b
    POP ESI                             ; 005f772c
    POP EBX                             ; 005f772d
    RET                                 ; 005f772e

