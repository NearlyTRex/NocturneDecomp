; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * __cdecl core_xform_cpp_multiplyQuaternionInPlace_FUN_00593d20(undefined4 *param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[1]:
;   core_doc.cpp_FUN_00455d10 at 00455f1a
;
; Called Functions:
;   core_xform.cpp_multiplyQuaternion_FUN_00593c60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00593d20
        ;   Label: core_xform.cpp_multiplyQuaternionInPlace_FUN_00593d20
    PUSH ESI                            ; 00593d21
    PUSH EDI                            ; 00593d22
    SUB ESP,0x10                        ; 00593d23
    MOV EBX,dword ptr [ESP + 0x20]      ; 00593d26
    MOV EDX,dword ptr [ESP + 0x24]      ; 00593d2a
    PUSH EDX                            ; 00593d2e
    PUSH EBX                            ; 00593d2f
    LEA ESI,[ESP + 0x8]                 ; 00593d30
    MOV EDI,EBX                         ; 00593d34
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 00593d36
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    LEA ESI,[ESP + 0x8]                 ; 00593d3b
    ADD ESP,0x8                         ; 00593d3f
    MOV EAX,EBX                         ; 00593d42
    MOVSD ES:EDI,ESI                    ; 00593d44
    MOVSD ES:EDI,ESI                    ; 00593d45
    MOVSD ES:EDI,ESI                    ; 00593d46
    MOVSD ES:EDI,ESI                    ; 00593d47
    ADD ESP,0x10                        ; 00593d48
    POP EDI                             ; 00593d4b
    POP ESI                             ; 00593d4c
    POP EBX                             ; 00593d4d
    RET                                 ; 00593d4e

