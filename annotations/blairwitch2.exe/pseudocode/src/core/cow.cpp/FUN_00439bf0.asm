; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_cow_cpp_FUN_00439bf0(int param_1,undefined4 *param_2)
;
;
; Called Functions:
;   core_skeleton.cpp_FUN_00546a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00439bf0
        ;   Label: core_cow.cpp_FUN_00439bf0
    PUSH ESI                            ; 00439bf1
    PUSH EDI                            ; 00439bf2
    SUB ESP,0x18                        ; 00439bf3
    MOV EAX,dword ptr [ESP + 0x28]      ; 00439bf6
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00439bfa
    MOV EDX,dword ptr [EAX + 0x10af8]   ; 00439bfe
    PUSH EDX                            ; 00439c04
    ADD EAX,0x2b4                       ; 00439c05
    PUSH EAX                            ; 00439c0a
    LEA ESI,[ESP + 0x8]                 ; 00439c0b
    LEA EDI,[ESP + 0x14]                ; 00439c0f
    CALL core_skeleton.cpp_FUN_00546a90 ; 00439c13
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    LEA ESI,[ESP + 0x8]                 ; 00439c18
    ADD ESP,0x8                         ; 00439c1c
    LEA EAX,[ESP + 0xc]                 ; 00439c1f
    MOVSD ES:EDI,ESI                    ; 00439c23
    MOVSD ES:EDI,ESI                    ; 00439c24
    MOVSD ES:EDI,ESI                    ; 00439c25
    CMP EBX,EAX                         ; 00439c26
    JNZ 0x00439c36                      ; 00439c28
        ;   XREF to: 00439c36 (CONDITIONAL_JUMP)  ; LAB_00439c36
    MOV EAX,0x1                         ; 00439c2a
    ADD ESP,0x18                        ; 00439c2f
    POP EDI                             ; 00439c32
    POP ESI                             ; 00439c33
    POP EBX                             ; 00439c34
    RET                                 ; 00439c35
    MOV EAX,dword ptr [ESP + 0xc]       ; 00439c36
        ;   Label: LAB_00439c36
    MOV dword ptr [EBX],EAX             ; 00439c3a
    MOV EAX,dword ptr [ESP + 0x10]      ; 00439c3c
    MOV dword ptr [EBX + 0x4],EAX       ; 00439c40
    MOV EAX,dword ptr [ESP + 0x14]      ; 00439c43
    MOV dword ptr [EBX + 0x8],EAX       ; 00439c47
    MOV EAX,0x1                         ; 00439c4a
    ADD ESP,0x18                        ; 00439c4f
    POP EDI                             ; 00439c52
    POP ESI                             ; 00439c53
    POP EBX                             ; 00439c54
    RET                                 ; 00439c55

