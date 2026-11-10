; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_biggs_cpp_CBiggs_getTargetPoints_FUN_00415070(CBiggs *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CBiggs *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
;
; Called Functions:
;   core_skeleton.cpp_FUN_00569130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415070
        ;   Label: core_biggs.cpp_CBiggs_getTargetPoints_FUN_00415070
    PUSH ESI                            ; 00415071
    PUSH EDI                            ; 00415072
    SUB ESP,0x18                        ; 00415073
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00415076
    MOV EAX,dword ptr [ESP + 0x28]      ; 0041507a
    PUSH 0x0                            ; 0041507e
    ADD EAX,0x158                       ; 00415080
    PUSH EAX                            ; 00415085
    LEA ESI,[ESP + 0x14]                ; 00415086
    LEA EDI,[ESP + 0x8]                 ; 0041508a
    CALL core_skeleton.cpp_FUN_00569130 ; 0041508e
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x14]                ; 00415093
    ADD ESP,0x8                         ; 00415097
    MOV EAX,ESP                         ; 0041509a
    MOVSD ES:EDI,ESI                    ; 0041509c
    MOVSD ES:EDI,ESI                    ; 0041509d
    MOVSD ES:EDI,ESI                    ; 0041509e
    CMP EBX,EAX                         ; 0041509f
    JNZ 0x004150af                      ; 004150a1
        ;   XREF to: 004150af (CONDITIONAL_JUMP)  ; LAB_004150af
    MOV EAX,0x1                         ; 004150a3
    ADD ESP,0x18                        ; 004150a8
    POP EDI                             ; 004150ab
    POP ESI                             ; 004150ac
    POP EBX                             ; 004150ad
    RET                                 ; 004150ae
    MOV EAX,dword ptr [ESP]             ; 004150af
        ;   Label: LAB_004150af
    MOV dword ptr [EBX],EAX             ; 004150b2
    MOV EAX,dword ptr [ESP + 0x4]       ; 004150b4
    MOV dword ptr [EBX + 0x4],EAX       ; 004150b8
    MOV EAX,dword ptr [ESP + 0x8]       ; 004150bb
    MOV dword ptr [EBX + 0x8],EAX       ; 004150bf
    MOV EAX,0x1                         ; 004150c2
    ADD ESP,0x18                        ; 004150c7
    POP EDI                             ; 004150ca
    POP ESI                             ; 004150cb
    POP EBX                             ; 004150cc
    RET                                 ; 004150cd

