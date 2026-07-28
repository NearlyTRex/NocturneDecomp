; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_codec_cpp_CLZWDictionary_initTable_FUN_00439450(CLZWDictionary *this_ptr)
;
; Parameters:
; CLZWDictionary * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   support_codec.cpp_CLZWDictionary_addNode_FUN_004394f0 at 00439570
;   support_codec.cpp_CLZWDictionary_init_FUN_004393d0 at 004393ed
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00439450
        ;   Label: support_codec.cpp_CLZWDictionary_initTable_FUN_00439450
    MOV EAX,0x1                         ; 00439454
    MOV ECX,dword ptr [EDX + 0x4]       ; 00439459
    SHL EAX,CL                          ; 0043945c
    XOR ECX,ECX                         ; 0043945e
    MOV dword ptr [EDX + 0xc],EAX       ; 00439460
    TEST EAX,EAX                        ; 00439463
    JLE 0x0043949f                      ; 00439465
        ;   XREF to: 0043949f (CONDITIONAL_JUMP)  ; LAB_0043949f
    PUSH ESI                            ; 00439467
    PUSH EBX                            ; 00439468
    XOR EAX,EAX                         ; 00439469
    MOV EBX,dword ptr [EDX + 0x10]      ; 0043946b
        ;   Label: LAB_0043946b
    MOV dword ptr [EBX + EAX*0x1],ECX   ; 0043946e
    MOV EBX,dword ptr [EDX + 0x10]      ; 00439471
    MOV dword ptr [EBX + EAX*0x1 + 0x4],0xffffffff ; 00439474
    MOV EBX,dword ptr [EDX + 0x10]      ; 0043947c
    MOV dword ptr [EBX + EAX*0x1 + 0x8],0xffffffff ; 0043947f
    MOV EBX,dword ptr [EDX + 0x10]      ; 00439487
    MOV dword ptr [EBX + EAX*0x1 + 0xc],0xffffffff ; 0043948a
    INC ECX                             ; 00439492
    MOV ESI,dword ptr [EDX + 0xc]       ; 00439493
    ADD EAX,0x10                        ; 00439496
    CMP ECX,ESI                         ; 00439499
    JL 0x0043946b                       ; 0043949b
        ;   XREF to: 0043946b (CONDITIONAL_JUMP)  ; LAB_0043946b
    POP EBX                             ; 0043949d
    POP ESI                             ; 0043949e
    MOV EAX,dword ptr [EDX + 0x4]       ; 0043949f
        ;   Label: LAB_0043949f
    MOV dword ptr [EDX + 0x8],EAX       ; 004394a2
    RET                                 ; 004394a5

