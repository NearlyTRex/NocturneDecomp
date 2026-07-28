; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; _FILE * crt_unknown_c_FUN_005656a4(_FILE *param_1)
;
;
; XREF[1]:
;   crt_stdio.c_freopen_FUN_00565724 at 00565767
;
; Referenced Globals:
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ad0 = 005671e4
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ad4 = 005671e4
;   undefined4 DAT_02de4e20
;   undefined4 DAT_02de4e24
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_00568e80
;   crt_sync.c_CriticalSectionStub_FUN_005671e4
;   crt_unknown.c_fclose_FUN_005634b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005656a4
        ;   Label: crt_unknown.c_FUN_005656a4
    MOV EBX,dword ptr [ESP + 0x8]       ; 005656a5
    CALL dword ptr [0x005c1ad0]         ; 005656a9 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ad0
    MOV EAX,[0x02de4e20]                ; 005656af | DAT_02de4e20
    TEST EAX,EAX                        ; 005656b4
    JZ 0x005656e0                       ; 005656b6
        ;   XREF to: 005656e0 (CONDITIONAL_JUMP)  ; LAB_005656e0
    MOV EDX,dword ptr [EAX + 0x4]       ; 005656b8
        ;   Label: LAB_005656b8
    CMP EBX,EDX                         ; 005656bb
    JNZ 0x005656da                      ; 005656bd
        ;   XREF to: 005656da (CONDITIONAL_JUMP)  ; LAB_005656da
    TEST byte ptr [EDX + 0xc],0x3       ; 005656bf
    JZ 0x005656d0                       ; 005656c3
        ;   XREF to: 005656d0 (CONDITIONAL_JUMP)  ; LAB_005656d0
    PUSH 0x1                            ; 005656c5
    PUSH EDX                            ; 005656c7
    CALL crt_unknown.c_fclose_FUN_005634b0 ; 005656c8
        ;   XREF to: 005634b0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_fclose_FUN_005634b0(_FILE * file_handle, int force_close_flag)
    ADD ESP,0x8                         ; 005656cd
    CALL dword ptr [0x005c1ad4]         ; 005656d0 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ad4
        ;   Label: LAB_005656d0
    MOV EAX,EBX                         ; 005656d6
    POP EBX                             ; 005656d8
    RET                                 ; 005656d9
    MOV EAX,dword ptr [EAX]             ; 005656da
        ;   Label: LAB_005656da
    TEST EAX,EAX                        ; 005656dc
    JNZ 0x005656b8                      ; 005656de
        ;   XREF to: 005656b8 (CONDITIONAL_JUMP)  ; LAB_005656b8
    MOV EDX,0x2de4e24                   ; 005656e0
        ;   Label: LAB_005656e0
    MOV EAX,dword ptr [EDX]             ; 005656e5 | DAT_02de4e24
        ;   Label: LAB_005656e5
    TEST EAX,EAX                        ; 005656e7
    JZ 0x0056570f                       ; 005656e9
        ;   XREF to: 0056570f (CONDITIONAL_JUMP)  ; LAB_0056570f
    CMP EBX,dword ptr [EAX + 0x4]       ; 005656eb
    JNZ 0x0056570b                      ; 005656ee
        ;   XREF to: 0056570b (CONDITIONAL_JUMP)  ; LAB_0056570b
    MOV ECX,dword ptr [EAX]             ; 005656f0
    MOV dword ptr [EDX],ECX             ; 005656f2 | DAT_02de4e24
    MOV EDX,dword ptr [0x02de4e20]      ; 005656f4 | DAT_02de4e20
    MOV [0x02de4e20],EAX                ; 005656fa | DAT_02de4e20
    MOV dword ptr [EAX],EDX             ; 005656ff
    CALL dword ptr [0x005c1ad4]         ; 00565701 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ad4
    MOV EAX,EBX                         ; 00565707
    POP EBX                             ; 00565709
    RET                                 ; 0056570a
    MOV EDX,EAX                         ; 0056570b
        ;   Label: LAB_0056570b
    JMP 0x005656e5                      ; 0056570d
        ;   XREF to: 005656e5 (UNCONDITIONAL_JUMP)  ; LAB_005656e5
    PUSH 0x4                            ; 0056570f
        ;   Label: LAB_0056570f
    CALL crt_errno.c_setErrno_FUN_00568e80 ; 00565711
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00568e80(int error_code)
    ADD ESP,0x4                         ; 00565716
    CALL dword ptr [0x005c1ad4]         ; 00565719 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ad4
    XOR EAX,EAX                         ; 0056571f
    POP EBX                             ; 00565721
    RET                                 ; 00565722

