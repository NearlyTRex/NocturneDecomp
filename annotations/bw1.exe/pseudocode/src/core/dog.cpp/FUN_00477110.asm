; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_dog_cpp_FUN_00477110(int param_1,undefined4 *param_2)
;
;
; Called Functions:
;   core_skeleton.cpp_FUN_00569130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00477110
        ;   Label: core_dog.cpp_FUN_00477110
    PUSH ESI                            ; 00477111
    PUSH EDI                            ; 00477112
    SUB ESP,0x18                        ; 00477113
    MOV EAX,dword ptr [ESP + 0x28]      ; 00477116
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0047711a
    MOV EDX,dword ptr [EAX + 0xc268]    ; 0047711e
    PUSH EDX                            ; 00477124
    ADD EAX,0x158                       ; 00477125
    PUSH EAX                            ; 0047712a
    LEA ESI,[ESP + 0x8]                 ; 0047712b
    LEA EDI,[ESP + 0x14]                ; 0047712f
    CALL core_skeleton.cpp_FUN_00569130 ; 00477133
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x8]                 ; 00477138
    ADD ESP,0x8                         ; 0047713c
    LEA EAX,[ESP + 0xc]                 ; 0047713f
    MOVSD ES:EDI,ESI                    ; 00477143
    MOVSD ES:EDI,ESI                    ; 00477144
    MOVSD ES:EDI,ESI                    ; 00477145
    CMP EBX,EAX                         ; 00477146
    JNZ 0x00477156                      ; 00477148
        ;   XREF to: 00477156 (CONDITIONAL_JUMP)  ; LAB_00477156
    MOV EAX,0x1                         ; 0047714a
    ADD ESP,0x18                        ; 0047714f
    POP EDI                             ; 00477152
    POP ESI                             ; 00477153
    POP EBX                             ; 00477154
    RET                                 ; 00477155
    MOV EAX,dword ptr [ESP + 0xc]       ; 00477156
        ;   Label: LAB_00477156
    MOV dword ptr [EBX],EAX             ; 0047715a
    MOV EAX,dword ptr [ESP + 0x10]      ; 0047715c
    MOV dword ptr [EBX + 0x4],EAX       ; 00477160
    MOV EAX,dword ptr [ESP + 0x14]      ; 00477163
    MOV dword ptr [EBX + 0x8],EAX       ; 00477167
    MOV EAX,0x1                         ; 0047716a
    ADD ESP,0x18                        ; 0047716f
    POP EDI                             ; 00477172
    POP ESI                             ; 00477173
    POP EBX                             ; 00477174
    RET                                 ; 00477175

