; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_drone_cpp_CDrone_getTargetPoints_FUN_0046e150(CDrone *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CDrone *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
;
; Called Functions:
;   core_skeleton.cpp_FUN_00546a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046e150
        ;   Label: core_drone.cpp_CDrone_getTargetPoints_FUN_0046e150
    PUSH ESI                            ; 0046e151
    PUSH EDI                            ; 0046e152
    SUB ESP,0x18                        ; 0046e153
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0046e156
    MOV EAX,dword ptr [ESP + 0x28]      ; 0046e15a
    PUSH 0x0                            ; 0046e15e
    ADD EAX,0x2b4                       ; 0046e160
    PUSH EAX                            ; 0046e165
    LEA ESI,[ESP + 0x8]                 ; 0046e166
    LEA EDI,[ESP + 0x14]                ; 0046e16a
    CALL core_skeleton.cpp_FUN_00546a90 ; 0046e16e
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    LEA ESI,[ESP + 0x8]                 ; 0046e173
    ADD ESP,0x8                         ; 0046e177
    LEA EAX,[ESP + 0xc]                 ; 0046e17a
    MOVSD ES:EDI,ESI                    ; 0046e17e
    MOVSD ES:EDI,ESI                    ; 0046e17f
    MOVSD ES:EDI,ESI                    ; 0046e180
    CMP EBX,EAX                         ; 0046e181
    JNZ 0x0046e191                      ; 0046e183
        ;   XREF to: 0046e191 (CONDITIONAL_JUMP)  ; LAB_0046e191
    MOV EAX,0x1                         ; 0046e185
    ADD ESP,0x18                        ; 0046e18a
    POP EDI                             ; 0046e18d
    POP ESI                             ; 0046e18e
    POP EBX                             ; 0046e18f
    RET                                 ; 0046e190
    MOV EAX,dword ptr [ESP + 0xc]       ; 0046e191
        ;   Label: LAB_0046e191
    MOV dword ptr [EBX],EAX             ; 0046e195
    MOV EAX,dword ptr [ESP + 0x10]      ; 0046e197
    MOV dword ptr [EBX + 0x4],EAX       ; 0046e19b
    MOV EAX,dword ptr [ESP + 0x14]      ; 0046e19e
    MOV dword ptr [EBX + 0x8],EAX       ; 0046e1a2
    MOV EAX,0x1                         ; 0046e1a5
    ADD ESP,0x18                        ; 0046e1aa
    POP EDI                             ; 0046e1ad
    POP ESI                             ; 0046e1ae
    POP EBX                             ; 0046e1af
    RET                                 ; 0046e1b0

