; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_winrun_cpp_FUN_005b4400(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_02c9d294
;
; Called Functions:
;   wincore_winrun.cpp_FUN_005b4450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b4400
        ;   Label: wincore_winrun.cpp_FUN_005b4400
    PUSH ESI                            ; 005b4401
    PUSH EDI                            ; 005b4402
    MOV ECX,dword ptr [ESP + 0x10]      ; 005b4403
    MOV EBX,0x7fffffff                  ; 005b4407
    LEA EAX,[ECX*0x4 + 0x0]             ; 005b440c
    MOV ESI,0x80000001                  ; 005b4413
    SUB EAX,ECX                         ; 005b4418
    XOR EDX,EDX                         ; 005b441a
    SHL EAX,0x4                         ; 005b441c
    MOV dword ptr [0x02c9d294],EDX      ; 005b441f | DAT_02c9d294
    LEA EDX,[EAX + 0x30]                ; 005b4425
    ADD EAX,0xc                         ; 005b4428
        ;   Label: LAB_005b4428
    MOV dword ptr [EAX + 0x2c9d1cc],ESI ; 005b442b
    XOR EDI,EDI                         ; 005b4431
    MOV dword ptr [EAX + 0x2c9d1c8],EBX ; 005b4433
    MOV dword ptr [EAX + 0x2c9d1d0],EDI ; 005b4439
    CMP EAX,EDX                         ; 005b443f
    JNZ 0x005b4428                      ; 005b4441
        ;   XREF to: 005b4428 (CONDITIONAL_JUMP)  ; LAB_005b4428
    PUSH ECX                            ; 005b4443
    CALL wincore_winrun.cpp_FUN_005b4450 ; 005b4444
        ;   XREF to: 005b4450 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005b4450()
    ADD ESP,0x4                         ; 005b4449
    POP EDI                             ; 005b444c
    POP ESI                             ; 005b444d
    POP EBX                             ; 005b444e
    RET                                 ; 005b444f

