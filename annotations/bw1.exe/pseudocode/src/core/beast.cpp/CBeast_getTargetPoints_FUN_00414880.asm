; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_beast_cpp_CBeast_getTargetPoints_FUN_00414880(CBeast *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CBeast *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
;
; Called Functions:
;   core_skeleton.cpp_FUN_00569130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414880
        ;   Label: core_beast.cpp_CBeast_getTargetPoints_FUN_00414880
    PUSH ESI                            ; 00414881
    PUSH EDI                            ; 00414882
    SUB ESP,0x18                        ; 00414883
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00414886
    MOV EAX,dword ptr [ESP + 0x28]      ; 0041488a
    PUSH 0x0                            ; 0041488e
    ADD EAX,0x158                       ; 00414890
    PUSH EAX                            ; 00414895
    LEA ESI,[ESP + 0x14]                ; 00414896
    LEA EDI,[ESP + 0x8]                 ; 0041489a
    CALL core_skeleton.cpp_FUN_00569130 ; 0041489e
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x14]                ; 004148a3
    ADD ESP,0x8                         ; 004148a7
    MOV EAX,ESP                         ; 004148aa
    MOVSD ES:EDI,ESI                    ; 004148ac
    MOVSD ES:EDI,ESI                    ; 004148ad
    MOVSD ES:EDI,ESI                    ; 004148ae
    CMP EBX,EAX                         ; 004148af
    JNZ 0x004148bf                      ; 004148b1
        ;   XREF to: 004148bf (CONDITIONAL_JUMP)  ; LAB_004148bf
    MOV EAX,0x1                         ; 004148b3
    ADD ESP,0x18                        ; 004148b8
    POP EDI                             ; 004148bb
    POP ESI                             ; 004148bc
    POP EBX                             ; 004148bd
    RET                                 ; 004148be
    MOV EAX,dword ptr [ESP]             ; 004148bf
        ;   Label: LAB_004148bf
    MOV dword ptr [EBX],EAX             ; 004148c2
    MOV EAX,dword ptr [ESP + 0x4]       ; 004148c4
    MOV dword ptr [EBX + 0x4],EAX       ; 004148c8
    MOV EAX,dword ptr [ESP + 0x8]       ; 004148cb
    MOV dword ptr [EBX + 0x8],EAX       ; 004148cf
    MOV EAX,0x1                         ; 004148d2
    ADD ESP,0x18                        ; 004148d7
    POP EDI                             ; 004148da
    POP ESI                             ; 004148db
    POP EBX                             ; 004148dc
    RET                                 ; 004148dd

