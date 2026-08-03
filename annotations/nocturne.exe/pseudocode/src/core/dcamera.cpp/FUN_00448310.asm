; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcamera_cpp_FUN_00448310(int param_1)
;
;
; XREF[1]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_005088f0 at 00508b3c
;
; Referenced Globals:
;   undefined4 DAT_01bd4260
;
; Called Functions:
;   crt_watcom.c__memcpy_FUN_00481a28
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448310
        ;   Label: core_dcamera.cpp_FUN_00448310
    PUSH ESI                            ; 00448311
    MOV EBX,dword ptr [ESP + 0xc]       ; 00448312
    MOV EDX,dword ptr [EBX + 0x140]     ; 00448316
    XOR ESI,ESI                         ; 0044831c
    TEST EDX,EDX                        ; 0044831e
    JLE 0x00448370                      ; 00448320
        ;   XREF to: 00448370 (CONDITIONAL_JUMP)  ; LAB_00448370
    MOV ECX,dword ptr [EBX + 0x13c]     ; 00448322
        ;   Label: LAB_00448322
    IMUL ECX,ESI                        ; 00448328
    MOV EDX,dword ptr [EBX + 0x13c]     ; 0044832b
    SHL EDX,0x2                         ; 00448331
    PUSH EDX                            ; 00448334
    MOV EDX,dword ptr [EBX + 0x148]     ; 00448335
    MOV EAX,dword ptr [EBX + 0x144]     ; 0044833b
    ADD EDX,ESI                         ; 00448341
    SHL EAX,0x2                         ; 00448343
    MOV EDX,dword ptr [EDX*0x4 + 0x1bd4260] ; 00448346 | DAT_01bd4260
    ADD EDX,EAX                         ; 0044834d
    SHL ECX,0x2                         ; 0044834f
    MOV EAX,dword ptr [EBX + 0x15c]     ; 00448352
    ADD ECX,EAX                         ; 00448358
    INC ESI                             ; 0044835a
    CALL crt_watcom.c__memcpy_FUN_00481a28 ; 0044835b
        ;   XREF to: 00481a28 (UNCONDITIONAL_CALL)  ; void crt_watcom.c__memcpy_FUN_00481a28(void * dest, void * src, uint size)
    CMP ESI,dword ptr [EBX + 0x140]     ; 00448360
    JL 0x00448322                       ; 00448366
        ;   XREF to: 00448322 (CONDITIONAL_JUMP)  ; LAB_00448322
    LEA EAX,[EAX]                       ; 00448368
    MOV EDX,EDX                         ; 0044836e
    POP ESI                             ; 00448370
        ;   Label: LAB_00448370
    POP EBX                             ; 00448371
    RET                                 ; 00448372

