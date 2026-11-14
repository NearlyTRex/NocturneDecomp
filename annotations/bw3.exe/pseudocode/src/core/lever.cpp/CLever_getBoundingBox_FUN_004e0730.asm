; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_lever_cpp_CLever_getBoundingBox_FUN_004e0730(CLever *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CLever *         Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e0730
        ;   Label: core_lever.cpp_CLever_getBoundingBox_FUN_004e0730
    PUSH EDI                            ; 004e0731
    SUB ESP,0x18                        ; 004e0732
    MOV EBX,ESI                         ; 004e0735
    MOV EAX,dword ptr [ESP + 0x24]      ; 004e0737
    ADD EAX,0x158                       ; 004e073b
    PUSH EAX                            ; 004e0740
    LEA EDI,[ESP + 0x4]                 ; 004e0741
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 004e0745
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 004e074a
    MOV ESI,dword ptr [EAX + 0x350]     ; 004e074f
    ADD ESP,0x4                         ; 004e0755
    MOVSD.REP ES:EDI,ESI                ; 004e0758
    MOV ECX,0x6                         ; 004e075a
    MOV ESI,ESP                         ; 004e075f
    MOV EDI,EBX                         ; 004e0761
    MOVSD.REP ES:EDI,ESI                ; 004e0763
    MOV EAX,EBX                         ; 004e0765
    ADD ESP,0x18                        ; 004e0767
    POP EDI                             ; 004e076a
    POP EBX                             ; 004e076b
    RET                                 ; 004e076c

