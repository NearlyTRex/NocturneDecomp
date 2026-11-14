; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_lever_cpp_CLever_getBoundingBox_FUN_004e21e0(CLever *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CLever *         Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e21e0
        ;   Label: core_lever.cpp_CLever_getBoundingBox_FUN_004e21e0
    PUSH EDI                            ; 004e21e1
    SUB ESP,0x18                        ; 004e21e2
    MOV EBX,ESI                         ; 004e21e5
    MOV EAX,dword ptr [ESP + 0x24]      ; 004e21e7
    ADD EAX,0x2b4                       ; 004e21eb
    PUSH EAX                            ; 004e21f0
    LEA EDI,[ESP + 0x4]                 ; 004e21f1
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 004e21f5
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 004e21fa
    MOV ESI,dword ptr [EAX + 0x350]     ; 004e21ff
    ADD ESP,0x4                         ; 004e2205
    MOVSD.REP ES:EDI,ESI                ; 004e2208
    MOV ECX,0x6                         ; 004e220a
    MOV ESI,ESP                         ; 004e220f
    MOV EDI,EBX                         ; 004e2211
    MOVSD.REP ES:EDI,ESI                ; 004e2213
    MOV EAX,EBX                         ; 004e2215
    ADD ESP,0x18                        ; 004e2217
    POP EDI                             ; 004e221a
    POP EBX                             ; 004e221b
    RET                                 ; 004e221c

