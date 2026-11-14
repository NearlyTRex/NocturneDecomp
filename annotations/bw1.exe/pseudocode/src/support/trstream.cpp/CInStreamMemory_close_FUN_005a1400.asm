; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_trstream_cpp_CInStreamMemory_close_FUN_005a1400(CInStreamMemory *this_ptr)
;
; Parameters:
; CInStreamMemory * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   support_trstream.cpp_CInStreamMemory_dtor_FUN_005a11e0 at 005a11f3
;
; Called Functions:
;   crt_unknown.c_FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1400
        ;   Label: support_trstream.cpp_CInStreamMemory_close_FUN_005a1400
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a1401
    MOV EDX,dword ptr [EBX + 0x4]       ; 005a1405
    TEST EDX,EDX                        ; 005a1408
    JZ 0x005a1419                       ; 005a140a
        ;   XREF to: 005a1419 (CONDITIONAL_JUMP)  ; LAB_005a1419
    CMP dword ptr [EBX + 0x10],0x0      ; 005a140c
    JNZ 0x005a1437                      ; 005a1410
        ;   XREF to: 005a1437 (CONDITIONAL_JUMP)  ; LAB_005a1437
    MOV dword ptr [EBX + 0x4],0x0       ; 005a1412
        ;   Label: LAB_005a1412
    MOV dword ptr [EBX + 0x8],0x0       ; 005a1419
        ;   Label: LAB_005a1419
    MOV dword ptr [EBX + 0xc],0x0       ; 005a1420
    MOV dword ptr [EBX + 0x10],0x0      ; 005a1427
    MOV dword ptr [EBX + 0x4],0x0       ; 005a142e
    POP EBX                             ; 005a1435
    RET                                 ; 005a1436
    PUSH EDX                            ; 005a1437
        ;   Label: LAB_005a1437
    CALL crt_unknown.c_FUN_005c09f0     ; 005a1438
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 005a143d
    JMP 0x005a1412                      ; 005a1440
        ;   XREF to: 005a1412 (UNCONDITIONAL_JUMP)  ; LAB_005a1412

