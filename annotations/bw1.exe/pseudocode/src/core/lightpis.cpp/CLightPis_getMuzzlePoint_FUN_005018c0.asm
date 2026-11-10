; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_lightpis_cpp_CLightPis_getMuzzlePoint_FUN_005018c0(CLightPis *this_ptr,CVector3f *out_point)
;
; Parameters:
; CLightPis *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_point
;
; Referenced Globals:
;   undefined4 DAT_005e6fa2
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005018c0
        ;   Label: core_lightpis.cpp_CLightPis_getMuzzlePoint_FUN_005018c0
    PUSH EDI                            ; 005018c1
    SUB ESP,0x24                        ; 005018c2
    MOV EBX,ESI                         ; 005018c5
    MOV EAX,dword ptr [ESP + 0x30]      ; 005018c7
    ADD EAX,0x158                       ; 005018cb
    PUSH EAX                            ; 005018d0
    LEA EDI,[ESP + 0x4]                 ; 005018d1
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 005018d5
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 005018da
    LEA ESI,[EAX + 0x338]               ; 005018df
    ADD ESP,0x4                         ; 005018e5
    XOR EDX,EDX                         ; 005018e8
    MOVSD.REP ES:EDI,ESI                ; 005018ea
    MOV dword ptr [ESP + 0x18],EDX      ; 005018ec
    FLD float ptr [ESP + 0x10]          ; 005018f0
    MOV EAX,dword ptr [ESP + 0x14]      ; 005018f4
    LEA ESI,[ESP + 0x18]                ; 005018f8
    MOV EDI,EBX                         ; 005018fc
    FADD double ptr [0x005e6fa2]        ; 005018fe | DAT_005e6fa2
    MOV dword ptr [ESP + 0x20],EAX      ; 00501904
    FSTP float ptr [ESP + 0x1c]         ; 00501908
    MOVSD ES:EDI,ESI                    ; 0050190c
    MOVSD ES:EDI,ESI                    ; 0050190d
    MOVSD ES:EDI,ESI                    ; 0050190e
    MOV EAX,EBX                         ; 0050190f
    ADD ESP,0x24                        ; 00501911
    POP EDI                             ; 00501914
    POP EBX                             ; 00501915
    RET                                 ; 00501916

