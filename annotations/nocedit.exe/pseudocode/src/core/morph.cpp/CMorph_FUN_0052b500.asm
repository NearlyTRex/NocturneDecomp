; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_morph_cpp_CMorph_FUN_0052b500(CMorph *this_ptr,int model_index)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   model_index
;
; Called Functions:
;   core_morph.cpp_CMorphModel_addPart_FUN_0052a580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052b500
        ;   Label: core_morph.cpp_CMorph_FUN_0052b500
    PUSH ESI                            ; 0052b501
    PUSH EDI                            ; 0052b502
    PUSH EBP                            ; 0052b503
    MOV EDX,dword ptr [ESP + 0x30]      ; 0052b504
    PUSH EDX                            ; 0052b508
    MOV ECX,dword ptr [ESP + 0x30]      ; 0052b509
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0052b50d
    PUSH ECX                            ; 0052b511
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0052b512
    MOV EDX,dword ptr [ESP + 0x20]      ; 0052b516
    PUSH 0x48                           ; 0052b51a
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0052b51c
    LEA EAX,[EDX*0x4 + 0x0]             ; 0052b520
    PUSH EBX                            ; 0052b527
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0052b528
    SUB EAX,EDX                         ; 0052b52c
    PUSH ESI                            ; 0052b52e
    SHL EAX,0x6                         ; 0052b52f
    PUSH EDI                            ; 0052b532
    ADD EAX,EDX                         ; 0052b533
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0052b535
    SHL EAX,0x3                         ; 0052b539
    PUSH EBP                            ; 0052b53c
    ADD EAX,EDX                         ; 0052b53d
    PUSH EAX                            ; 0052b53f
    CALL core_morph.cpp_CMorphModel_addPart_FUN_0052a580 ; 0052b540
        ;   XREF to: 0052a580 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_addPart_FUN_0052a580(CMorphModel * this_ptr)
    ADD ESP,0x20                        ; 0052b545
    POP EBP                             ; 0052b548
    POP EDI                             ; 0052b549
    POP ESI                             ; 0052b54a
    POP EBX                             ; 0052b54b
    RET                                 ; 0052b54c

