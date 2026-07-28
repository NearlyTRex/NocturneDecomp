; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005712ec(int param_1)
;
;
; XREF[1]:
;   FUN_0056e664 at 0056e68a
;
; Referenced Globals:
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ae8 = 005671e4
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1aec = 005671e4
;   undefined4 DAT_02de5d70
;
; Called Functions:
;   crt_sync.c_CriticalSectionStub_FUN_005671e4
;   crt_unknown.c_FUN_005638d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005712ec
        ;   Label: FUN_005712ec
    PUSH ESI                            ; 005712ed
    PUSH EDI                            ; 005712ee
    MOV EDI,dword ptr [ESP + 0x10]      ; 005712ef
    CALL dword ptr [0x005c1ae8]         ; 005712f3 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ae8
    MOV EBX,dword ptr [0x02de5d70]      ; 005712f9 | DAT_02de5d70
    MOV ESI,0x2de5d70                   ; 005712ff
    TEST EBX,EBX                        ; 00571304
    JZ 0x00571336                       ; 00571306
        ;   XREF to: 00571336 (CONDITIONAL_JUMP)  ; LAB_00571336
    CMP EDI,dword ptr [EBX + 0x4]       ; 00571308
        ;   Label: LAB_00571308
    JNZ 0x0057132e                      ; 0057130b
        ;   XREF to: 0057132e (CONDITIONAL_JUMP)  ; LAB_0057132e
    CMP dword ptr [EBX + 0xc],0x0       ; 0057130d
    JZ 0x0057131f                       ; 00571311
        ;   XREF to: 0057131f (CONDITIONAL_JUMP)  ; LAB_0057131f
    MOV EDI,dword ptr [EBX + 0x8]       ; 00571313
    PUSH EDI                            ; 00571316
    CALL crt_unknown.c_FUN_005638d0     ; 00571317
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    ADD ESP,0x4                         ; 0057131c
    MOV EDI,dword ptr [EBX]             ; 0057131f
        ;   Label: LAB_0057131f
    PUSH EBX                            ; 00571321
    MOV dword ptr [ESI],EDI             ; 00571322 | DAT_02de5d70
    CALL crt_unknown.c_FUN_005638d0     ; 00571324
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    ADD ESP,0x4                         ; 00571329
    JMP 0x00571336                      ; 0057132c
        ;   XREF to: 00571336 (UNCONDITIONAL_JUMP)  ; LAB_00571336
    MOV ESI,EBX                         ; 0057132e
        ;   Label: LAB_0057132e
    MOV EBX,dword ptr [EBX]             ; 00571330
    TEST EBX,EBX                        ; 00571332
    JNZ 0x00571308                      ; 00571334
        ;   XREF to: 00571308 (CONDITIONAL_JUMP)  ; LAB_00571308
    CALL dword ptr [0x005c1aec]         ; 00571336 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1aec
        ;   Label: LAB_00571336
    POP EDI                             ; 0057133c
    POP ESI                             ; 0057133d
    POP EBX                             ; 0057133e
    RET                                 ; 0057133f

