; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trisock_cpp_FUN_00570fb0(int param_1)
;
;
; XREF[2]:
;   support_trisock.cpp_FUN_00570ae0 at 00570c13
;   support_trisock.cpp_FUN_00570e80 at 00570e87
;
; Referenced Globals:
;   undefined4 DAT_02cfd8a8
;   undefined4 DAT_02cfd8ac
;   undefined4 DAT_02cfd8b0
;
; Called Functions:
;   wincore_winrun.cpp_releaseMutex_FUN_00581990
;   wincore_winrun.cpp_waitForMutex_FUN_00581930
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570fb0
        ;   Label: support_trisock.cpp_FUN_00570fb0
    PUSH EBP                            ; 00570fb1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00570fb2
    MOV EDX,dword ptr [0x02cfd8a8]      ; 00570fb6 | DAT_02cfd8a8
    TEST EDX,EDX                        ; 00570fbc
    JNZ 0x00571006                      ; 00570fbe
        ;   XREF to: 00571006 (CONDITIONAL_JUMP)  ; LAB_00571006
    CMP EBX,dword ptr [0x02cfd8b0]      ; 00570fc0 | DAT_02cfd8b0
        ;   Label: LAB_00570fc0
    JNZ 0x00570fd2                      ; 00570fc6
        ;   XREF to: 00570fd2 (CONDITIONAL_JUMP)  ; LAB_00570fd2
    PUSH EDI                            ; 00570fc8
    XOR EDI,EDI                         ; 00570fc9
    MOV dword ptr [0x02cfd8b0],EDI      ; 00570fcb | DAT_02cfd8b0
    POP EDI                             ; 00570fd1
    MOV EBP,dword ptr [0x02cfd8ac]      ; 00570fd2 | DAT_02cfd8ac
        ;   Label: LAB_00570fd2
    MOV EAX,0x2cfd8ac                   ; 00570fd8 | DAT_02cfd8ac
    TEST EBP,EBP                        ; 00570fdd
    JZ 0x00570fef                       ; 00570fdf
        ;   XREF to: 00570fef (CONDITIONAL_JUMP)  ; LAB_00570fef
    MOV ECX,dword ptr [EAX]             ; 00570fe1 | DAT_02cfd8ac
        ;   Label: LAB_00570fe1
    CMP EBX,ECX                         ; 00570fe3
    JNZ 0x00571011                      ; 00570fe5
        ;   XREF to: 00571011 (CONDITIONAL_JUMP)  ; LAB_00571011
    MOV EDX,dword ptr [ECX + 0x3c0]     ; 00570fe7
    MOV dword ptr [EAX],EDX             ; 00570fed | DAT_02cfd8ac
    MOV dword ptr [EBX + 0x3c0],0x0     ; 00570fef
        ;   Label: LAB_00570fef
    MOV EBX,dword ptr [0x02cfd8a8]      ; 00570ff9 | DAT_02cfd8a8
    TEST EBX,EBX                        ; 00570fff
    JNZ 0x00571024                      ; 00571001
        ;   XREF to: 00571024 (CONDITIONAL_JUMP)  ; LAB_00571024
    POP EBP                             ; 00571003
    POP EBX                             ; 00571004
    RET                                 ; 00571005
    PUSH EDX                            ; 00571006
        ;   Label: LAB_00571006
    CALL wincore_winrun.cpp_waitForMutex_FUN_00581930 ; 00571007
        ;   XREF to: 00581930 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_waitForMutex_FUN_00581930(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 0057100c
    JMP 0x00570fc0                      ; 0057100f
        ;   XREF to: 00570fc0 (UNCONDITIONAL_JUMP)  ; LAB_00570fc0
    MOV EAX,dword ptr [EAX]             ; 00571011 | DAT_02cfd8ac
        ;   Label: LAB_00571011
    MOV EDX,dword ptr [EAX + 0x3c0]     ; 00571013
    ADD EAX,0x3c0                       ; 00571019
    TEST EDX,EDX                        ; 0057101e
    JNZ 0x00570fe1                      ; 00571020
        ;   XREF to: 00570fe1 (CONDITIONAL_JUMP)  ; LAB_00570fe1
    JMP 0x00570fef                      ; 00571022
        ;   XREF to: 00570fef (UNCONDITIONAL_JUMP)  ; LAB_00570fef
    PUSH EBX                            ; 00571024
        ;   Label: LAB_00571024
    CALL wincore_winrun.cpp_releaseMutex_FUN_00581990 ; 00571025
        ;   XREF to: 00581990 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_releaseMutex_FUN_00581990(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 0057102a
    POP EBP                             ; 0057102d
    POP EBX                             ; 0057102e
    RET                                 ; 0057102f

