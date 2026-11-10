; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_shadow_cpp_CShadow_getTargetPoints_FUN_00560150(CShadow *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CShadow *        Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
;
; Called Functions:
;   core_skeleton.cpp_FUN_00569130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00560150
        ;   Label: core_shadow.cpp_CShadow_getTargetPoints_FUN_00560150
    PUSH ESI                            ; 00560151
    PUSH EDI                            ; 00560152
    SUB ESP,0x18                        ; 00560153
    MOV EAX,dword ptr [ESP + 0x28]      ; 00560156
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0056015a
    MOV EDX,dword ptr [EAX + 0xc26c]    ; 0056015e
    PUSH EDX                            ; 00560164
    ADD EAX,0x158                       ; 00560165
    PUSH EAX                            ; 0056016a
    LEA ESI,[ESP + 0x8]                 ; 0056016b
    LEA EDI,[ESP + 0x14]                ; 0056016f
    CALL core_skeleton.cpp_FUN_00569130 ; 00560173
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x8]                 ; 00560178
    ADD ESP,0x8                         ; 0056017c
    LEA EAX,[ESP + 0xc]                 ; 0056017f
    MOVSD ES:EDI,ESI                    ; 00560183
    MOVSD ES:EDI,ESI                    ; 00560184
    MOVSD ES:EDI,ESI                    ; 00560185
    CMP EBX,EAX                         ; 00560186
    JNZ 0x00560196                      ; 00560188
        ;   XREF to: 00560196 (CONDITIONAL_JUMP)  ; LAB_00560196
    MOV EAX,0x1                         ; 0056018a
    ADD ESP,0x18                        ; 0056018f
    POP EDI                             ; 00560192
    POP ESI                             ; 00560193
    POP EBX                             ; 00560194
    RET                                 ; 00560195
    MOV EAX,dword ptr [ESP + 0xc]       ; 00560196
        ;   Label: LAB_00560196
    MOV dword ptr [EBX],EAX             ; 0056019a
    MOV EAX,dword ptr [ESP + 0x10]      ; 0056019c
    MOV dword ptr [EBX + 0x4],EAX       ; 005601a0
    MOV EAX,dword ptr [ESP + 0x14]      ; 005601a3
    MOV dword ptr [EBX + 0x8],EAX       ; 005601a7
    MOV EAX,0x1                         ; 005601aa
    ADD ESP,0x18                        ; 005601af
    POP EDI                             ; 005601b2
    POP ESI                             ; 005601b3
    POP EBX                             ; 005601b4
    RET                                 ; 005601b5

