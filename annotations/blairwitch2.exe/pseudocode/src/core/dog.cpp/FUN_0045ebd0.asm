; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_dog_cpp_FUN_0045ebd0(int param_1,undefined4 *param_2)
;
;
; Called Functions:
;   core_skeleton.cpp_FUN_00546a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045ebd0
        ;   Label: core_dog.cpp_FUN_0045ebd0
    PUSH ESI                            ; 0045ebd1
    PUSH EDI                            ; 0045ebd2
    SUB ESP,0x18                        ; 0045ebd3
    MOV EAX,dword ptr [ESP + 0x28]      ; 0045ebd6
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0045ebda
    MOV EDX,dword ptr [EAX + 0x10af8]   ; 0045ebde
    PUSH EDX                            ; 0045ebe4
    ADD EAX,0x2b4                       ; 0045ebe5
    PUSH EAX                            ; 0045ebea
    LEA ESI,[ESP + 0x8]                 ; 0045ebeb
    LEA EDI,[ESP + 0x14]                ; 0045ebef
    CALL core_skeleton.cpp_FUN_00546a90 ; 0045ebf3
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    LEA ESI,[ESP + 0x8]                 ; 0045ebf8
    ADD ESP,0x8                         ; 0045ebfc
    LEA EAX,[ESP + 0xc]                 ; 0045ebff
    MOVSD ES:EDI,ESI                    ; 0045ec03
    MOVSD ES:EDI,ESI                    ; 0045ec04
    MOVSD ES:EDI,ESI                    ; 0045ec05
    CMP EBX,EAX                         ; 0045ec06
    JNZ 0x0045ec16                      ; 0045ec08
        ;   XREF to: 0045ec16 (CONDITIONAL_JUMP)  ; LAB_0045ec16
    MOV EAX,0x1                         ; 0045ec0a
    ADD ESP,0x18                        ; 0045ec0f
    POP EDI                             ; 0045ec12
    POP ESI                             ; 0045ec13
    POP EBX                             ; 0045ec14
    RET                                 ; 0045ec15
    MOV EAX,dword ptr [ESP + 0xc]       ; 0045ec16
        ;   Label: LAB_0045ec16
    MOV dword ptr [EBX],EAX             ; 0045ec1a
    MOV EAX,dword ptr [ESP + 0x10]      ; 0045ec1c
    MOV dword ptr [EBX + 0x4],EAX       ; 0045ec20
    MOV EAX,dword ptr [ESP + 0x14]      ; 0045ec23
    MOV dword ptr [EBX + 0x8],EAX       ; 0045ec27
    MOV EAX,0x1                         ; 0045ec2a
    ADD ESP,0x18                        ; 0045ec2f
    POP EDI                             ; 0045ec32
    POP ESI                             ; 0045ec33
    POP EBX                             ; 0045ec34
    RET                                 ; 0045ec35

