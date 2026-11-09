; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trstream_cpp_FUN_005a1450(int *param_1,int param_2,int param_3)
;
;
; XREF[1]:
;   support_trstream.cpp_FUN_005a1160 at 005a119e
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1450
        ;   Label: support_trstream.cpp_FUN_005a1450
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a1451
    PUSH EBX                            ; 005a1455
    MOV EAX,dword ptr [EBX]             ; 005a1456
    CALL dword ptr [EAX + 0x24]         ; 005a1458
    MOV dword ptr [EBX + 0xc],0x0       ; 005a145b
    ADD ESP,0x4                         ; 005a1462
    MOV dword ptr [EBX + 0x10],0x0      ; 005a1465
    MOV EAX,dword ptr [ESP + 0xc]       ; 005a146c
    MOV dword ptr [EBX + 0x4],EAX       ; 005a1470
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a1473
    MOV dword ptr [EBX + 0x8],EAX       ; 005a1477
    POP EBX                             ; 005a147a
    RET                                 ; 005a147b

