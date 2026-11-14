; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_trash_cpp_CTrash_getBoundingBox_FUN_00577560(CTrash *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CTrash *         Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_actor.cpp_FUN_00408d30
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00577560
        ;   Label: core_trash.cpp_CTrash_getBoundingBox_FUN_00577560
    PUSH EDI                            ; 00577561
    PUSH EBP                            ; 00577562
    SUB ESP,0x3c                        ; 00577563
    MOV EBP,dword ptr [ESP + 0x4c]      ; 00577566
    MOV EBX,ESI                         ; 0057756a
    LEA EAX,[EBP + 0x2b4]               ; 0057756c
    PUSH EAX                            ; 00577572
    LEA EDI,[ESP + 0x4]                 ; 00577573
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 00577577
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 0057757c
    MOV ESI,dword ptr [EAX + 0x350]     ; 00577581
    ADD ESP,0x4                         ; 00577587
    MOVSD.REP ES:EDI,ESI                ; 0057758a
    MOV EAX,dword ptr [EBP + 0x46c]     ; 0057758c
    MOV dword ptr [ESP + 0x1c],EAX      ; 00577592
    LEA EAX,[ESP + 0x18]                ; 00577596
    XOR EDX,EDX                         ; 0057759a
    PUSH EAX                            ; 0057759c
    LEA ESI,[ESP + 0x34]                ; 0057759d
    LEA EDI,[ESP + 0x28]                ; 005775a1
    PUSH EBP                            ; 005775a5
    MOV dword ptr [ESP + 0x20],EDX      ; 005775a6
    MOV dword ptr [ESP + 0x28],EDX      ; 005775aa
    CALL core_actor.cpp_FUN_00408d30    ; 005775ae
        ;   XREF to: 00408d30 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d30()
    LEA ESI,[ESP + 0x38]                ; 005775b3
    ADD ESP,0x8                         ; 005775b7
    MOV ECX,0x6                         ; 005775ba
    FLD float ptr [ESP]                 ; 005775bf
    FLD float ptr [ESP + 0x4]           ; 005775c2
    FLD float ptr [ESP + 0x8]           ; 005775c6
    FLD float ptr [ESP + 0xc]           ; 005775ca
    FLD float ptr [ESP + 0x10]          ; 005775ce
    MOVSD ES:EDI,ESI                    ; 005775d2
    MOVSD ES:EDI,ESI                    ; 005775d3
    MOVSD ES:EDI,ESI                    ; 005775d4
    FLD float ptr [ESP + 0x14]          ; 005775d5
    MOV ESI,ESP                         ; 005775d9
    MOV EDI,EBX                         ; 005775db
    FXCH ST5                            ; 005775dd
    FADD float ptr [ESP + 0x24]         ; 005775df
    FXCH ST4                            ; 005775e3
    FADD float ptr [ESP + 0x28]         ; 005775e5
    FXCH ST3                            ; 005775e9
    FADD float ptr [ESP + 0x2c]         ; 005775eb
    FXCH ST2                            ; 005775ef
    FADD float ptr [ESP + 0x24]         ; 005775f1
    FXCH                                ; 005775f5
    FADD float ptr [ESP + 0x28]         ; 005775f7
    FXCH ST5                            ; 005775fb
    FADD float ptr [ESP + 0x2c]         ; 005775fd
    FXCH ST4                            ; 00577601
    FSTP float ptr [ESP]                ; 00577603
    FXCH ST2                            ; 00577606
    FSTP float ptr [ESP + 0x4]          ; 00577608
    FSTP float ptr [ESP + 0x8]          ; 0057760c
    FSTP float ptr [ESP + 0xc]          ; 00577610
    FXCH                                ; 00577614
    FSTP float ptr [ESP + 0x10]         ; 00577616
    FSTP float ptr [ESP + 0x14]         ; 0057761a
    MOVSD.REP ES:EDI,ESI                ; 0057761e
    MOV EAX,EBX                         ; 00577620
    ADD ESP,0x3c                        ; 00577622
    POP EBP                             ; 00577625
    POP EDI                             ; 00577626
    POP EBX                             ; 00577627
    RET                                 ; 00577628

