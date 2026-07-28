; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; DWORD FUN_00569fb0(uint param_1,LPCVOID param_2,DWORD param_3)
;
;
; XREF[2]:
;   FUN_00568890 at 005688f2
;   crt_stdio.c_fwrite_FUN_00563a50 at 00563b18
;
; Referenced Globals:
;   void* PTR_SetFilePointer_005755a0 = 00175ff4
;   void* PTR_WriteFile_005755ec = 0017613e
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac0 = 005671e4
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac4 = 005671e4
;   undefined4 DAT_005c1d54
;   undefined4 DAT_005c1d80
;   undefined4 DAT_005c1f54
;   undefined4 DAT_005c1f90
;
; Called Functions:
;   crt_errno.c___set_errno_FUN_0056c73c
;   crt_errno.c_setErrno_FUN_00568e80
;   crt_sync.c_CriticalSectionStub_FUN_005671e4
;   FUN_0056f220
;   SetFilePointer
;   WriteFile
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00569fb0
        ;   Label: FUN_00569fb0
    PUSH ESI                            ; 00569fb1
    PUSH EDI                            ; 00569fb2
    PUSH EBP                            ; 00569fb3
    SUB ESP,0x4                         ; 00569fb4
    MOV EBX,dword ptr [ESP + 0x18]      ; 00569fb7
    MOV EDI,dword ptr [ESP + 0x20]      ; 00569fbb
    TEST EBX,EBX                        ; 00569fbf
    JL 0x00569fcb                       ; 00569fc1
        ;   XREF to: 00569fcb (CONDITIONAL_JUMP)  ; LAB_00569fcb
    CMP EBX,dword ptr [0x005c1f90]      ; 00569fc3 | DAT_005c1f90
    JBE 0x00569fdf                      ; 00569fc9
        ;   XREF to: 00569fdf (CONDITIONAL_JUMP)  ; LAB_00569fdf
    PUSH 0x4                            ; 00569fcb
        ;   Label: LAB_00569fcb
    CALL crt_errno.c_setErrno_FUN_00568e80 ; 00569fcd
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00568e80(int error_code)
    MOV EAX,0xffffffff                  ; 00569fd2
    ADD ESP,0x4                         ; 00569fd7
    JMP 0x0056a0b2                      ; 00569fda
        ;   XREF to: 0056a0b2 (UNCONDITIONAL_JUMP)  ; LAB_0056a0b2
    MOV ESI,dword ptr [0x005c1f54]      ; 00569fdf | DAT_005c1f54
        ;   Label: LAB_00569fdf
    PUSH EBX                            ; 00569fe5
    MOV ESI,dword ptr [ESI + EBX*0x4]   ; 00569fe6
    CALL dword ptr [0x005c1ac0]         ; 00569fe9 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac0
    ADD ESP,0x4                         ; 00569fef
    PUSH EBX                            ; 00569ff2
    CALL FUN_0056f220                   ; 00569ff3
        ;   XREF to: 0056f220 (UNCONDITIONAL_CALL)  ; undefined FUN_0056f220()
    ADD ESP,0x4                         ; 00569ff8
    TEST AL,0x80                        ; 00569ffb
    JZ 0x0056a029                       ; 00569ffd
        ;   XREF to: 0056a029 (CONDITIONAL_JUMP)  ; LAB_0056a029
    PUSH 0x2                            ; 00569fff
    PUSH 0x0                            ; 0056a001
    PUSH 0x0                            ; 0056a003
    PUSH ESI                            ; 0056a005
    CALL dword ptr CS:[0x5755a0]        ; 0056a006 | PTR_SetFilePointer_005755a0
    CMP EAX,-0x1                        ; 0056a00d
    JNZ 0x0056a029                      ; 0056a010
        ;   XREF to: 0056a029 (CONDITIONAL_JUMP)  ; LAB_0056a029
    PUSH EBX                            ; 0056a012
    CALL dword ptr [0x005c1ac4]         ; 0056a013 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac4
    ADD ESP,0x4                         ; 0056a019
    CALL crt_errno.c___set_errno_FUN_0056c73c ; 0056a01c
        ;   XREF to: 0056c73c (UNCONDITIONAL_CALL)  ; DWORD crt_errno.c___set_errno_FUN_0056c73c()
    ADD ESP,0x4                         ; 0056a021
    POP EBP                             ; 0056a024
    POP EDI                             ; 0056a025
    POP ESI                             ; 0056a026
    POP EBX                             ; 0056a027
    RET                                 ; 0056a028
    CMP dword ptr [0x005c1d80],0x0      ; 0056a029 | DAT_005c1d80
        ;   Label: LAB_0056a029
    JZ 0x0056a066                       ; 0056a030
        ;   XREF to: 0056a066 (CONDITIONAL_JUMP)  ; LAB_0056a066
    PUSH EBX                            ; 0056a032
    CALL dword ptr [0x005c1d54]         ; 0056a033 | DAT_005c1d54
    ADD ESP,0x4                         ; 0056a039
    TEST EAX,EAX                        ; 0056a03c
    JZ 0x0056a066                       ; 0056a03e
        ;   XREF to: 0056a066 (CONDITIONAL_JUMP)  ; LAB_0056a066
    PUSH EDI                            ; 0056a040
    MOV EDX,dword ptr [ESP + 0x20]      ; 0056a041
    PUSH EDX                            ; 0056a045
    PUSH EAX                            ; 0056a046
    CALL dword ptr [0x005c1d80]         ; 0056a047 | DAT_005c1d80
    ADD ESP,0xc                         ; 0056a04d
    PUSH EBX                            ; 0056a050
    MOV ESI,EAX                         ; 0056a051
    CALL dword ptr [0x005c1ac4]         ; 0056a053 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac4
    ADD ESP,0x4                         ; 0056a059
    MOV EAX,ESI                         ; 0056a05c
    ADD ESP,0x4                         ; 0056a05e
    POP EBP                             ; 0056a061
    POP EDI                             ; 0056a062
    POP ESI                             ; 0056a063
    POP EBX                             ; 0056a064
    RET                                 ; 0056a065
    PUSH 0x0                            ; 0056a066
        ;   Label: LAB_0056a066
    LEA EAX,[ESP + 0x4]                 ; 0056a068
    PUSH EAX                            ; 0056a06c
    PUSH EDI                            ; 0056a06d
    MOV EBP,dword ptr [ESP + 0x28]      ; 0056a06e
    PUSH EBP                            ; 0056a072
    PUSH ESI                            ; 0056a073
    CALL dword ptr CS:[0x5755ec]        ; 0056a074 | PTR_WriteFile_005755ec
    TEST EAX,EAX                        ; 0056a07b
    JNZ 0x0056a096                      ; 0056a07d
        ;   XREF to: 0056a096 (CONDITIONAL_JUMP)  ; LAB_0056a096
    PUSH EBX                            ; 0056a07f
    CALL dword ptr [0x005c1ac4]         ; 0056a080 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac4
    ADD ESP,0x4                         ; 0056a086
    CALL crt_errno.c___set_errno_FUN_0056c73c ; 0056a089
        ;   XREF to: 0056c73c (UNCONDITIONAL_CALL)  ; DWORD crt_errno.c___set_errno_FUN_0056c73c()
    ADD ESP,0x4                         ; 0056a08e
    POP EBP                             ; 0056a091
    POP EDI                             ; 0056a092
    POP ESI                             ; 0056a093
    POP EBX                             ; 0056a094
    RET                                 ; 0056a095
    CMP EDI,dword ptr [ESP]             ; 0056a096
        ;   Label: LAB_0056a096
    JZ 0x0056a0a5                       ; 0056a099
        ;   XREF to: 0056a0a5 (CONDITIONAL_JUMP)  ; LAB_0056a0a5
    PUSH 0xc                            ; 0056a09b
    CALL crt_errno.c_setErrno_FUN_00568e80 ; 0056a09d
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00568e80(int error_code)
    ADD ESP,0x4                         ; 0056a0a2
    PUSH EBX                            ; 0056a0a5
        ;   Label: LAB_0056a0a5
    CALL dword ptr [0x005c1ac4]         ; 0056a0a6 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac4
    ADD ESP,0x4                         ; 0056a0ac
    MOV EAX,dword ptr [ESP]             ; 0056a0af
    ADD ESP,0x4                         ; 0056a0b2
        ;   Label: LAB_0056a0b2
    POP EBP                             ; 0056a0b5
    POP EDI                             ; 0056a0b6
    POP ESI                             ; 0056a0b7
    POP EBX                             ; 0056a0b8
    RET                                 ; 0056a0b9

