; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcamera_cpp_FUN_00448380(int param_1)
;
;
; XREF[1]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_005088f0 at 00508b72
;
; Referenced Globals:
;   undefined4 DAT_01bd4260
;
; Called Functions:
;   crt_watcom.c__memcpy_FUN_00481a28
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448380
        ;   Label: core_dcamera.cpp_FUN_00448380
    PUSH ESI                            ; 00448381
    MOV EBX,dword ptr [ESP + 0xc]       ; 00448382
    MOV EDX,dword ptr [EBX + 0x140]     ; 00448386
    XOR ESI,ESI                         ; 0044838c
    TEST EDX,EDX                        ; 0044838e
    JLE 0x004483e0                      ; 00448390
        ;   XREF to: 004483e0 (CONDITIONAL_JUMP)  ; LAB_004483e0
    MOV EDX,dword ptr [EBX + 0x13c]     ; 00448392
        ;   Label: LAB_00448392
    SHL EDX,0x2                         ; 00448398
    PUSH EDX                            ; 0044839b
    MOV EDX,dword ptr [EBX + 0x13c]     ; 0044839c
    IMUL EDX,ESI                        ; 004483a2
    MOV EAX,dword ptr [EBX + 0x15c]     ; 004483a5
    SHL EDX,0x2                         ; 004483ab
    ADD EDX,EAX                         ; 004483ae
    MOV EAX,dword ptr [EBX + 0x148]     ; 004483b0
    MOV ECX,dword ptr [EBX + 0x144]     ; 004483b6
    ADD EAX,ESI                         ; 004483bc
    SHL ECX,0x2                         ; 004483be
    MOV EAX,dword ptr [EAX*0x4 + 0x1bd4260] ; 004483c1 | DAT_01bd4260
    ADD ECX,EAX                         ; 004483c8
    INC ESI                             ; 004483ca
    CALL crt_watcom.c__memcpy_FUN_00481a28 ; 004483cb
        ;   XREF to: 00481a28 (UNCONDITIONAL_CALL)  ; undefined crt_watcom.c__memcpy_FUN_00481a28()
    CMP ESI,dword ptr [EBX + 0x140]     ; 004483d0
    JL 0x00448392                       ; 004483d6
        ;   XREF to: 00448392 (CONDITIONAL_JUMP)  ; LAB_00448392
    LEA EAX,[EAX]                       ; 004483d8
    MOV EDX,EDX                         ; 004483de
    POP ESI                             ; 004483e0
        ;   Label: LAB_004483e0
    POP EBX                             ; 004483e1
    RET                                 ; 004483e2

