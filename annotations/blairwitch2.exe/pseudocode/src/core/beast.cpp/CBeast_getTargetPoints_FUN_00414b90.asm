; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_beast_cpp_CBeast_getTargetPoints_FUN_00414b90(CBeast *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CBeast *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
;
; Called Functions:
;   core_skeleton.cpp_FUN_00546a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414b90
        ;   Label: core_beast.cpp_CBeast_getTargetPoints_FUN_00414b90
    PUSH ESI                            ; 00414b91
    PUSH EDI                            ; 00414b92
    SUB ESP,0x18                        ; 00414b93
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00414b96
    MOV EAX,dword ptr [ESP + 0x28]      ; 00414b9a
    PUSH 0x0                            ; 00414b9e
    ADD EAX,0x2b4                       ; 00414ba0
    PUSH EAX                            ; 00414ba5
    LEA ESI,[ESP + 0x14]                ; 00414ba6
    LEA EDI,[ESP + 0x8]                 ; 00414baa
    CALL core_skeleton.cpp_FUN_00546a90 ; 00414bae
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    LEA ESI,[ESP + 0x14]                ; 00414bb3
    ADD ESP,0x8                         ; 00414bb7
    MOV EAX,ESP                         ; 00414bba
    MOVSD ES:EDI,ESI                    ; 00414bbc
    MOVSD ES:EDI,ESI                    ; 00414bbd
    MOVSD ES:EDI,ESI                    ; 00414bbe
    CMP EBX,EAX                         ; 00414bbf
    JNZ 0x00414bcf                      ; 00414bc1
        ;   XREF to: 00414bcf (CONDITIONAL_JUMP)  ; LAB_00414bcf
    MOV EAX,0x1                         ; 00414bc3
    ADD ESP,0x18                        ; 00414bc8
    POP EDI                             ; 00414bcb
    POP ESI                             ; 00414bcc
    POP EBX                             ; 00414bcd
    RET                                 ; 00414bce
    MOV EAX,dword ptr [ESP]             ; 00414bcf
        ;   Label: LAB_00414bcf
    MOV dword ptr [EBX],EAX             ; 00414bd2
    MOV EAX,dword ptr [ESP + 0x4]       ; 00414bd4
    MOV dword ptr [EBX + 0x4],EAX       ; 00414bd8
    MOV EAX,dword ptr [ESP + 0x8]       ; 00414bdb
    MOV dword ptr [EBX + 0x8],EAX       ; 00414bdf
    MOV EAX,0x1                         ; 00414be2
    ADD ESP,0x18                        ; 00414be7
    POP EDI                             ; 00414bea
    POP ESI                             ; 00414beb
    POP EBX                             ; 00414bec
    RET                                 ; 00414bed

