; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool unkafter_asgaya_cpp_FUN_005adaec(void)
;
;
; XREF[1]:
;   unkafter_2d.cpp_FUN_005b1840 at 005b1855
;
; Referenced Globals:
;   void* PTR_TlsAlloc_005b3660 = 001b4256
;   undefined1 DAT_00607983
;   undefined2 DAT_00607985
;   undefined4 DAT_0060799c
;
; Called Functions:
;   TlsAlloc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005adaec
        ;   Label: unkafter_asgaya.cpp_FUN_005adaec
    MOV EBX,dword ptr [0x0060799c]      ; 005adaed | DAT_0060799c
    CMP EBX,-0x1                        ; 005adaf3
    JNZ 0x005adb33                      ; 005adaf6
        ;   XREF to: 005adb33 (CONDITIONAL_JUMP)  ; LAB_005adb33
    CALL dword ptr CS:[0x5b3660]        ; 005adaf8 | PTR_TlsAlloc_005b3660
    MOV DX,word ptr [0x00607985]        ; 005adaff | DAT_00607985
    MOV EBX,EAX                         ; 005adb06
    CMP DX,0x8000                       ; 005adb08
    JC 0x005adb33                       ; 005adb0d
        ;   XREF to: 005adb33 (CONDITIONAL_JUMP)  ; LAB_005adb33
    CMP byte ptr [0x00607983],0x4       ; 005adb0f | DAT_00607983
    JNC 0x005adb33                      ; 005adb16
        ;   XREF to: 005adb33 (CONDITIONAL_JUMP)  ; LAB_005adb33
    CMP EBX,-0x1                        ; 005adb18
        ;   Label: LAB_005adb18
    JZ 0x005adb33                       ; 005adb1b
        ;   XREF to: 005adb33 (CONDITIONAL_JUMP)  ; LAB_005adb33
    CMP EBX,0x2                         ; 005adb1d
    JA 0x005adb33                       ; 005adb20
        ;   XREF to: 005adb33 (CONDITIONAL_JUMP)  ; LAB_005adb33
    MOV dword ptr [0x0060799c],EBX      ; 005adb22 | DAT_0060799c
    CALL dword ptr CS:[0x5b3660]        ; 005adb28 | PTR_TlsAlloc_005b3660
    MOV EBX,EAX                         ; 005adb2f
    JMP 0x005adb18                      ; 005adb31
        ;   XREF to: 005adb18 (UNCONDITIONAL_JUMP)  ; LAB_005adb18
    CMP EBX,-0x1                        ; 005adb33
        ;   Label: LAB_005adb33
    SETNZ AL                            ; 005adb36
    AND EAX,0xff                        ; 005adb39
    MOV dword ptr [0x0060799c],EBX      ; 005adb3e | DAT_0060799c
    POP EBX                             ; 005adb44
    RET                                 ; 005adb45

