; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack2_esi core_prye_cpp_CPrye_getCarryObjToBodyXForm_FUN_005247b0(CPrye *this_ptr,int hand_index,CMatrix3x4f *out_matrix)
;
; Parameters:
; CPrye *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
;
; Called Functions:
;   core_prye.cpp_FUN_0051f490
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005247b0
        ;   Label: core_prye.cpp_CPrye_getCarryObjToBodyXForm_FUN_005247b0
    PUSH EDI                            ; 005247b1
    SUB ESP,0x30                        ; 005247b2
    MOV EDX,dword ptr [ESP + 0x40]      ; 005247b5
    MOV EBX,ESI                         ; 005247b9
    MOV ESI,dword ptr [ESP + 0x3c]      ; 005247bb
    PUSH EDX                            ; 005247bf
    SHL EDX,0x3                         ; 005247c0
    MOV EAX,EDX                         ; 005247c3
    SHL EAX,0x4                         ; 005247c5
    SUB EAX,EDX                         ; 005247c8
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x25b0] ; 005247ca
    PUSH EDX                            ; 005247d1
    PUSH ESI                            ; 005247d2
    LEA ESI,[ESP + 0xc]                 ; 005247d3
    MOV EDI,EBX                         ; 005247d7
    CALL core_prye.cpp_FUN_0051f490     ; 005247d9
        ;   XREF to: 0051f490 (UNCONDITIONAL_CALL)  ; undefined core_prye.cpp_FUN_0051f490()
    MOV ECX,0xc                         ; 005247de
    LEA ESI,[ESP + 0xc]                 ; 005247e3
    ADD ESP,0xc                         ; 005247e7
    MOVSD.REP ES:EDI,ESI                ; 005247ea
    MOV EAX,EBX                         ; 005247ec
    ADD ESP,0x30                        ; 005247ee
    POP EDI                             ; 005247f1
    POP EBX                             ; 005247f2
    RET                                 ; 005247f3

